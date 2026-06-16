#!/usr/bin/env python3
"""
Water Animation - Full Tile Range Finder + Spritesheet Splitter

1. Scans ALL metatiles to find every tile index used by water metatiles
2. Reports the full water tile picture
3. Splits your Water Animation.png spritesheet into per-frame .png files

Usage:
    python3 anim_water_full.py
"""

import struct, os, sys
from PIL import Image

TILESET      = os.path.expanduser('~/Documents/pokemon-paradoxia/data/tilesets/primary/test')
SPRITESHEET  = os.path.expanduser('~/Documents/pokemon-paradoxia/Water Animation.png')
OUTPUT_DIR   = os.path.join(TILESET, 'anim', 'water')
NUM_FRAMES   = 8

# Known water metatile
KNOWN_WATER_META = 0x036
KNOWN_WATER_TILES = {137, 138, 139, 140}

def decompress_lz77(data):
    if data[0] != 0x10:
        raise ValueError('Not GBA LZ77')
    size = data[1] | (data[2] << 8) | (data[3] << 16)
    out  = bytearray()
    pos  = 4
    while len(out) < size:
        flags = data[pos]; pos += 1
        for bit in range(7, -1, -1):
            if len(out) >= size: break
            if flags & (1 << bit):
                b1 = data[pos]; b2 = data[pos+1]; pos += 2
                length = (b1 >> 4) + 3
                disp   = ((b1 & 0x0F) << 8) | b2
                for _ in range(length):
                    out.append(out[len(out) - disp - 1])
            else:
                out.append(data[pos]); pos += 1
    return bytes(out)

# ── Step 1: Find all water tile indices ──────────────────────────────────────
print('=== Water Tile Analysis ===\n')

meta_data = open(os.path.join(TILESET, 'metatiles.bin'), 'rb').read()
num_meta  = len(meta_data) // 16

# Find all metatiles whose MIDDLE layer shares tiles with known water range
# Strategy: collect all metatiles containing tiles near 137-140, then
# transitively expand to metatiles sharing those tiles too.
tile_to_metas   = {}   # tile_idx -> set of metatile IDs using it
meta_mid_tiles  = {}   # meta_id -> set of middle-layer tile indices

for mid in range(num_meta):
    entries = struct.unpack_from('<8H', meta_data, mid * 16)
    mid_tiles = {e & 0x3FF for e in entries[4:8] if (e & 0x3FF) > 1}
    meta_mid_tiles[mid] = mid_tiles
    for t in mid_tiles:
        tile_to_metas.setdefault(t, set()).add(mid)

# Seed from known water tiles, then expand
water_tiles  = set(KNOWN_WATER_TILES)
water_metas  = set()
frontier     = set(KNOWN_WATER_TILES)

while frontier:
    # All metatiles that use any tile in frontier
    new_metas = set()
    for t in frontier:
        new_metas |= tile_to_metas.get(t, set())
    new_metas -= water_metas
    water_metas |= new_metas

    # All tiles used by those metatiles
    new_tiles = set()
    for m in new_metas:
        new_tiles |= meta_mid_tiles[m]
    frontier = new_tiles - water_tiles
    water_tiles |= new_tiles

water_tiles = sorted(t for t in water_tiles if t > 1)
print(f'Water metatile count : {len(water_metas)}')
print(f'Water tile indices   : {water_tiles}')
if water_tiles:
    w_start = min(water_tiles)
    w_end   = max(water_tiles)
    w_span  = w_end - w_start + 1
    print(f'Tile range           : {w_start} – {w_end} (span = {w_span})')
    # Check for gaps
    gaps = [t for t in range(w_start, w_end + 1) if t not in set(water_tiles)]
    if gaps:
        print(f'Gaps in range        : {gaps}')
        print('  NOTE: There are non-water tiles in this range.')
        print('  The animation will still replace them — confirm this is OK.')
    else:
        print('No gaps — contiguous block, clean animation.')
else:
    print('ERROR: No water tiles found.')
    sys.exit(1)

print()

# ── Step 2: Decompress and extract frame 0 for reference ─────────────────────
print('=== Extracting Frame 0 Reference ===\n')
tiles_raw    = decompress_lz77(open(os.path.join(TILESET, 'tiles.4bpp.lz'), 'rb').read())
frame0_data  = tiles_raw[w_start * 32 : (w_end + 1) * 32]
print(f'Extracted {w_span} tiles ({len(frame0_data)} bytes) as reference frame 0')

# ── Step 3: Inspect the spritesheet ──────────────────────────────────────────
print('\n=== Spritesheet Analysis ===\n')
sheet = Image.open(SPRITESHEET)
print(f'Spritesheet size: {sheet.width} x {sheet.height} px')
print(f'Mode: {sheet.mode}')

frame_w = sheet.width // NUM_FRAMES
frame_h = sheet.height
print(f'Assuming {NUM_FRAMES} frames side by side:')
print(f'  Each frame: {frame_w} x {frame_h} px')
print(f'  Each frame covers: {(frame_w * frame_h) // 64} tiles '
      f'({frame_w//8} wide x {frame_h//8} tall)')

# Sanity check
expected_tiles = w_span
actual_tiles   = (frame_w * frame_h) // 64
if actual_tiles != expected_tiles:
    print(f'\n  ⚠ Mismatch: water range has {expected_tiles} tiles '
          f'but each frame covers {actual_tiles} tiles.')
    print(f'  If your spritesheet covers only part of the water tiles, '
          f'we may need multiple animation calls.')
else:
    print(f'  ✓ Tile count matches water range.')

# ── Step 4: Split spritesheet into frame PNGs ─────────────────────────────────
print('\n=== Splitting Spritesheet ===\n')
os.makedirs(OUTPUT_DIR, exist_ok=True)

# Convert to indexed if not already
if sheet.mode != 'P':
    print('  Converting to indexed (P) mode...')
    sheet = sheet.quantize(colors=16, method=Image.FASTOCTREE)

for i in range(NUM_FRAMES):
    frame = sheet.crop((i * frame_w, 0, (i + 1) * frame_w, frame_h))
    out_path = os.path.join(OUTPUT_DIR, f'{i}.png')
    frame.save(out_path)
    print(f'  Saved frame {i}: {out_path}  ({frame.width}x{frame.height})')

print(f'\nAll {NUM_FRAMES} frames saved.')

# ── Step 5: Print updated C code ─────────────────────────────────────────────
print(f"""
{'='*70}
UPDATED C CODE (tiles {w_start}-{w_end}, span {w_span})
{'='*70}

static void QueueAnimTiles_test_Water(u16 timer)
{{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_test_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_test_Water[i],
        (u16 *)(BG_VRAM + TILE_OFFSET_4BPP({w_start})),
        {w_span} * TILE_SIZE_4BPP);
}}
{'='*70}
""")
