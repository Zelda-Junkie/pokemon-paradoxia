#!/usr/bin/env python3
"""
fix_keyframe.py  –  make every 8×8 tile in key.png unique.

Porytiles requires all key-frame tiles to be distinct.  For water animations
the pool tiles tend to repeat the same blue pattern, causing:
  fatal error: animation 'water' key frame tile 'N' duplicated another key frame tile

This script patches each duplicate by flipping one pixel to a colour that
already appears in the image (no new palette entries introduced).
A backup is written to key_original.png before any changes are made.

Usage:
    python3 fix_keyframe.py
    python3 fix_keyframe.py --dry-run
"""

import argparse
import os
import shutil
from PIL import Image

KEY_PNG = os.path.expanduser(
    "~/Documents/pokemon-paradoxia/paradoxia_primary/src/anim/water/key.png"
)

TILE = 8                         # pixels per tile side
MAGENTA = (255, 0, 255, 255)     # transparent sentinel colour in source PNGs


# ─────────────────────────────────────────────────────────────────────────────

def tile_bytes(img: Image.Image, tx: int, ty: int) -> bytes:
    x, y = tx * TILE, ty * TILE
    return img.crop((x, y, x + TILE, y + TILE)).tobytes()


def gather_palette(img: Image.Image) -> list:
    """All opaque, non-magenta RGBA colours already in the image."""
    seen = set()
    for r, g, b, a in img.getdata():
        if a > 0 and (r, g, b, a) != MAGENTA:
            seen.add((r, g, b, a))
    return sorted(seen)   # sorted for determinism


def make_unique(
    img: Image.Image,
    tx: int,
    ty: int,
    taken: set,
    palette: list,
) -> bytes:
    """
    Flip one pixel in tile (tx, ty) so its byte-hash is not in *taken*.
    Tries every pixel × every palette colour before falling back to a
    ±1 channel tweak (which may introduce one new colour).
    Returns the new hash on success; raises RuntimeError on failure.
    """
    px = img.load()
    x0, y0 = tx * TILE, ty * TILE

    for row in range(TILE):
        for col in range(TILE):
            mx, my = x0 + col, y0 + row
            orig = px[mx, my]
            for colour in palette:
                if colour == orig:
                    continue
                px[mx, my] = colour
                h = tile_bytes(img, tx, ty)
                if h not in taken:
                    return h          # success – change persists in img
                px[mx, my] = orig     # revert, try next combination

    # Last resort: nudge one channel by ±1 (introduces a new colour)
    mx, my = x0, y0
    orig = px[mx, my]
    r, g, b, a = orig
    for delta in (1, -1, 2, -2, 3, -3):
        tweak = (max(0, min(255, r + delta)), g, b, a)
        px[mx, my] = tweak
        h = tile_bytes(img, tx, ty)
        if h not in taken:
            print(f"    ⚠  introduced new colour {tweak} for tile ({tx},{ty})"
                  f" — re-run fix_palettes.py after compiling if palette count grows")
            return h
        px[mx, my] = orig

    raise RuntimeError(f"Tile ({tx},{ty}): exhausted all options – cannot make unique")


# ─────────────────────────────────────────────────────────────────────────────

def main() -> None:
    ap = argparse.ArgumentParser(
        description="Fix duplicate key-frame tiles in water/key.png"
    )
    ap.add_argument("--dry-run", action="store_true", help="Report without writing")
    args = ap.parse_args()

    if not os.path.exists(KEY_PNG):
        print(f"ERROR: file not found:\n  {KEY_PNG}")
        return

    img = Image.open(KEY_PNG).convert("RGBA")
    w, h = img.size
    cols, rows = w // TILE, h // TILE
    print(f"key.png  {w}×{h}  →  {cols}×{rows} grid  ({cols * rows} tiles total)")

    palette = gather_palette(img)
    print(f"Colours in image: {len(palette)}")

    # ── First pass: find all duplicates ──────────────────────────────────────
    canonical: dict = {}    # hash → first (tx, ty) seen
    dupes: list = []

    for ty in range(rows):
        for tx in range(cols):
            tb = tile_bytes(img, tx, ty)
            if tb not in canonical:
                canonical[tb] = (tx, ty)
            else:
                dupes.append((tx, ty))

    if not dupes:
        print("\n✓ No duplicates — key.png is already valid.")
        return

    print(f"\n{len(dupes)} duplicate tile(s) found:")
    for tx, ty in dupes:
        src = canonical[tile_bytes(img, tx, ty)]
        idx = ty * cols + tx
        print(f"  tile {idx:3d}  pos ({tx},{ty})  ←  duplicate of ({src[0]},{src[1]})")

    if args.dry_run:
        print("\n[dry-run] No changes written.")
        return

    # ── Backup ───────────────────────────────────────────────────────────────
    backup = KEY_PNG.replace(".png", "_original.png")
    if not os.path.exists(backup):
        shutil.copy(KEY_PNG, backup)
        print(f"\nBackup  →  {backup}")
    else:
        print(f"\n(Backup already exists at {backup} — not overwriting)")

    # ── Fix each duplicate ───────────────────────────────────────────────────
    # taken = all currently-unique hashes; grows as we patch each duplicate
    taken: set = set(canonical.keys())
    print("\nPatching…")

    for tx, ty in dupes:
        new_hash = make_unique(img, tx, ty, taken, palette)
        taken.add(new_hash)
        idx = ty * cols + tx
        print(f"  ✓  tile {idx:3d}  ({tx},{ty})")

    img.save(KEY_PNG)
    print(f"\nSaved  →  {KEY_PNG}")
    print(f"Fixed {len(dupes)} tile(s).")
    print(
        "\nNext step: re-run your Porytiles compile command.\n"
        "If it still errors on a different tile, run this script again."
    )


if __name__ == "__main__":
    main()
