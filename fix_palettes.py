#!/usr/bin/env python3
"""
Paradoxia Primary Tileset — Palette Fix
Reduces palette count to ≤ 8 via per-metatile color substitution,
then regenerates override files ready for Porytiles compile.

Run from anywhere on your Mac:
    python3 fix_palettes.py
"""

from PIL import Image
import os, sys

# ── Config ────────────────────────────────────────────────────────────────────
SRC          = os.path.expanduser(
    '~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OVERRIDE_DIR = os.path.join(SRC, 'palette-overrides')
MAGENTA      = (255, 0, 255, 255)
MAX_PALS     = 8
TILE_PX      = 16   # metatile grid size (Porytiles works at 16×16)
ROWS         = 64
COLS         = 8
# ──────────────────────────────────────────────────────────────────────────────


def get_metatile_colors(px, mx, my):
    """Non-transparent colors in a 16×16 metatile at grid position (mx, my)."""
    colors = set()
    for y in range(my * TILE_PX, my * TILE_PX + TILE_PX):
        for x in range(mx * TILE_PX, mx * TILE_PX + TILE_PX):
            p = px[x, y]
            if p != MAGENTA and p[3] > 0:
                colors.add(p[:3])
    return colors


def closest_color(target, palette):
    """Euclidean nearest-neighbor in RGB space."""
    return min(palette, key=lambda c: sum((a - b) ** 2 for a, b in zip(target, c)))


def build_palettes(uncapped=True):
    """
    Greedy palette builder scanning bottom → middle → top.
    Returns list of sets (each set = one palette's colors).
    If uncapped=False, stops at MAX_PALS.
    """
    palettes = []
    for fn in ['bottom', 'middle', 'top']:
        path = os.path.join(SRC, f'{fn}.png')
        img  = Image.open(path)
        px   = img.load()
        for my in range(ROWS):
            for mx in range(COLS):
                colors = get_metatile_colors(px, mx, my)
                if not colors:
                    continue
                placed = False
                for pal in palettes:
                    if len(pal | colors) <= 15:
                        pal |= colors
                        placed = True
                        break
                if not placed:
                    if uncapped or len(palettes) < MAX_PALS:
                        palettes.append(set(colors))
    return palettes


def count_palettes():
    """Quick check — the authoritative PLAN.md palette counter."""
    pals = build_palettes(uncapped=True)
    print(f'\n── Palette count: {len(pals)} ──')
    for i, p in enumerate(pals):
        print(f'  Pal {i:2d} ({len(p):2d} colors): {sorted(p)}')
    return pals


def fix_palettes(pals):
    """
    For every metatile that doesn't fit in any of the first MAX_PALS palettes,
    substitute its out-of-budget colors with the nearest color from the
    best-fit base palette (most overlap).

    Returns total pixel substitution count.
    """
    base_pals = pals[:MAX_PALS]  # palettes 0-7

    total_subs = 0
    for fn in ['bottom', 'middle', 'top']:
        path = os.path.join(SRC, f'{fn}.png')
        img  = Image.open(path).convert('RGBA')
        px   = img.load()
        file_subs = 0

        for my in range(ROWS):
            for mx in range(COLS):
                colors = get_metatile_colors(px, mx, my)
                if not colors:
                    continue

                # Does this metatile already fit in any base palette?
                if any(len(p | colors) <= 15 for p in base_pals):
                    continue

                # Find base palette with most color overlap
                best_idx = max(
                    range(len(base_pals)),
                    key=lambda i: len(base_pals[i] & colors)
                )
                best_pal = base_pals[best_idx]

                # Substitute every pixel whose color isn't in best_pal
                for y in range(my * TILE_PX, my * TILE_PX + TILE_PX):
                    for x in range(mx * TILE_PX, mx * TILE_PX + TILE_PX):
                        rgba = px[x, y]
                        if rgba == MAGENTA or rgba[3] == 0:
                            continue
                        rgb = rgba[:3]
                        if rgb in best_pal:
                            continue
                        replacement = closest_color(rgb, best_pal)
                        px[x, y]    = replacement + (rgba[3],)
                        file_subs  += 1

                # After substitution all colors are in best_pal — no palette growth needed.

        if file_subs:
            img.save(path)
            print(f'  {fn}.png: {file_subs} pixels substituted and saved.')
        else:
            print(f'  {fn}.png: no changes needed.')

        total_subs += file_subs

    return total_subs


def regenerate_overrides(pals):
    """
    Write palette-overrides/NN.pal files from the given palette list.
    Wipes old overrides first. Slot 0 = '-' (transparency wildcard).
    """
    os.makedirs(OVERRIDE_DIR, exist_ok=True)
    for f in os.listdir(OVERRIDE_DIR):
        os.remove(os.path.join(OVERRIDE_DIR, f))

    for i, pal in enumerate(pals):
        colors = sorted(pal)
        lines  = ['JASC-PAL', '0100', '16', '-']   # slot 0 = wildcard
        for r, g, b in colors:
            lines.append(f'{r} {g} {b}')
        while len(lines) < 19:   # pad to 16 entries (4 header + 15 slots)
            lines.append('-')
        out_path = os.path.join(OVERRIDE_DIR, f'{i:02d}.pal')
        with open(out_path, 'w') as f_out:
            f_out.write('\n'.join(lines) + '\n')
        print(f'  Wrote {i:02d}.pal  ({len(colors)} colors)')


def print_compile_command(num_pals):
    """Print the Porytiles compile command with correct overrides."""
    print(f"""
── Compile command ─────────────────────────────────────────────────────────────
~/Desktop/porytiles-source/build/Porytiles1/tools/driver/porytiles compile-primary \\
  -dual-layer \\
  -pals-primary-override={num_pals} \\
  -pals-total-override={num_pals + 5} \\
  -tiles-primary-override=512 \\
  -o ~/Documents/pokemon-paradoxia/data/tilesets/primary/test \\
  ~/Documents/pokemon-paradoxia/paradoxia_primary/src \\
  ~/Documents/pokemon-paradoxia/include/constants/metatile_behaviors.h
────────────────────────────────────────────────────────────────────────────────
NOTE: if this matches your fieldmap.h (NUM_PALS_IN_PRIMARY={num_pals},
NUM_PALS_TOTAL={num_pals + 5}), you're good. If fieldmap.h still says 8/13,
and num_pals came out to 8 here, no fieldmap.h edits needed.
""")


# ── Main ──────────────────────────────────────────────────────────────────────
if __name__ == '__main__':
    print('='*60)
    print('Paradoxia Tileset — Palette Fix')
    print('='*60)

    # Step 1: authoritative palette count
    print('\n[Step 1] Counting palettes (authoritative greedy counter)...')
    pals = count_palettes()

    if len(pals) <= MAX_PALS:
        print(f'\n✓ Already at {len(pals)} palettes — within budget of {MAX_PALS}.')
        print('Regenerating override files anyway...')
        regenerate_overrides(pals)
        print_compile_command(len(pals))
        sys.exit(0)

    print(f'\n⚠  {len(pals)} palettes needed — over budget of {MAX_PALS}.')
    overflow_count = len(pals) - MAX_PALS
    print(f'   Need to eliminate {overflow_count} overflow palette(s).')

    # Step 2: fix via per-metatile color substitution
    print('\n[Step 2] Applying per-metatile color substitution...')
    total_subs = fix_palettes(pals)
    print(f'\n  Total pixels substituted: {total_subs}')

    if total_subs == 0:
        print('\n  ⚠  0 substitutions — all overflow metatiles already fit?')
        print('  This likely means the palette counter is off. Re-counting...')

    # Step 3: re-count to verify
    print('\n[Step 3] Re-counting palettes after fix...')
    pals_after = count_palettes()

    if len(pals_after) > MAX_PALS:
        print(f'\n✗ Still at {len(pals_after)} palettes after substitution.')
        print('  This means the overflow metatiles have colors spread across 3+')
        print('  base palettes — a single nearest-neighbor pass cannot resolve it.')
        print('  Running a second pass...')

        total_subs2 = fix_palettes(pals_after)
        print(f'  Second pass: {total_subs2} pixels substituted.')

        pals_after2 = count_palettes()
        if len(pals_after2) > MAX_PALS:
            print(f'\n✗ Still {len(pals_after2)} palettes. Manual recoloring of')
            print('  the house tiles (rows 43–45 of middle.png) is required.')
            print('  Use Path A (accept 9 palettes) if that is preferable.')
        else:
            print(f'\n✓ Fixed! Now at {len(pals_after2)} palettes.')
            pals_after = pals_after2
    else:
        print(f'\n✓ Fixed! Now at {len(pals_after)} palettes.')

    # Step 4: regenerate override files
    if len(pals_after) <= MAX_PALS:
        print('\n[Step 4] Regenerating palette override files...')
        regenerate_overrides(pals_after)
        print_compile_command(len(pals_after))
    else:
        print('\n[Step 4] Skipped (palette count still over budget).')
        print('Consider running Path A from PLAN.md (accept 9 palettes).')

porytiles decompile-primary -o decompiled-primary-tileset /Users/ajaybakhda/Documents/pokemon-paradoxia/data/tilesets/primary/test