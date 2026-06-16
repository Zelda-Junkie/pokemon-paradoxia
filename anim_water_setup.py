#!/usr/bin/env python3
"""
Paradoxia Water Animation Setup
Extracts water tiles from the compiled tileset as frame 0,
saves 8 identical PNG frames to data/tilesets/primary/test/anim/water/,
and prints the exact C code to add.

Run from anywhere:
    python3 anim_water_setup.py
"""

import struct, os
from PIL import Image

TILESET          = os.path.expanduser('~/Documents/pokemon-paradoxia/data/tilesets/primary/test')
WATER_START      = 137
WATER_COUNT      = 4    # tiles 137-140
PALETTE_IDX      = 1    # water middle layer uses palette 1
NUM_FRAMES       = 8
TILES_WIDE       = 2    # 2 tiles per row = 16px wide frames

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

def load_gbapal(path):
    """Reads a 16-color GBA palette file → list of (R,G,B)."""
    data   = open(path, 'rb').read()
    colors = []
    for i in range(16):
        c = struct.unpack_from('<H', data, i * 2)[0]
        colors.append(((c & 0x1F) << 3, ((c >> 5) & 0x1F) << 3, ((c >> 10) & 0x1F) << 3))
    return colors

def tiles_to_png(raw_4bpp, num_tiles, palette, tiles_wide):
    """Converts raw GBA 4bpp tile data to a PIL indexed-color Image."""
    rows    = (num_tiles + tiles_wide - 1) // tiles_wide
    img     = Image.new('P', (tiles_wide * 8, rows * 8))
    flat    = []
    for r, g, b in palette:
        flat.extend([r, g, b])
    flat.extend([0] * (256 * 3 - len(flat)))
    img.putpalette(flat)
    px = img.load()

    for t in range(num_tiles):
        tx = (t % tiles_wide) * 8
        ty = (t // tiles_wide) * 8
        base = t * 32
        for row in range(8):
            for col in range(0, 8, 2):
                byte = raw_4bpp[base + row * 4 + col // 2]
                px[tx + col,     ty + row] = byte & 0x0F        # low nibble = left pixel
                px[tx + col + 1, ty + row] = (byte >> 4) & 0x0F # high nibble = right pixel
    return img

# ── Run ───────────────────────────────────────────────────────────────────────
print('=== Paradoxia Water Animation Setup ===\n')

# Decompress tiles
tiles_raw = decompress_lz77(open(os.path.join(TILESET, 'tiles.4bpp.lz'), 'rb').read())
print(f'Decompressed: {len(tiles_raw)//32} tiles')

# Load palette
pal_path = os.path.join(TILESET, 'palettes', f'{PALETTE_IDX:02d}.gbapal')
palette  = load_gbapal(pal_path)
print(f'Palette {PALETTE_IDX:02d}: {palette}\n')

# Extract water tile block
water_raw = tiles_raw[WATER_START * 32 : (WATER_START + WATER_COUNT) * 32]
frame0    = tiles_to_png(water_raw, WATER_COUNT, palette, TILES_WIDE)
print(f'Water tiles {WATER_START}-{WATER_START+WATER_COUNT-1}: '
      f'{frame0.width}x{frame0.height}px indexed PNG\n')

# Save frames
anim_dir = os.path.join(TILESET, 'anim', 'water')
os.makedirs(anim_dir, exist_ok=True)
for i in range(NUM_FRAMES):
    frame0.save(os.path.join(anim_dir, f'{i}.png'))
print(f'Wrote frames 0-{NUM_FRAMES-1} to {anim_dir}/')
print('All frames are identical. Edit 1-7 in Aseprite to animate.\n')

# Print C code
fd = '\n'.join(
    f'const u16 gTilesetAnims_test_Water_Frame{i}[] = '
    f'INCBIN_U16("data/tilesets/primary/test/anim/water/{i}.4bpp");'
    for i in range(NUM_FRAMES))

fa = '\n'.join(f'    gTilesetAnims_test_Water_Frame{i},' for i in range(NUM_FRAMES))

print(f"""
{'='*70}
C CODE TO ADD
{'='*70}

── tileset_anims.c  (1) Forward declarations near top ───────────────────────
static void TilesetAnim_test(u16);
static void QueueAnimTiles_test_Water(u16);

── tileset_anims.c  (2) Frame data + array (near other INCBIN blocks) ────────
{fd}

const u16 *const gTilesetAnims_test_Water[] = {{
{fa}
}};

── tileset_anims.c  (3) Functions (near InitTilesetAnim_Building) ─────────────
void InitTilesetAnim_test(void)
{{
    sPrimaryTilesetAnimCounter    = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback   = TilesetAnim_test;
}}

static void TilesetAnim_test(u16 timer)
{{
    if (timer % 16 == 0)
        QueueAnimTiles_test_Water(timer / 16);
}}

static void QueueAnimTiles_test_Water(u16 timer)
{{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_test_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_test_Water[i],
        (u16 *)(BG_VRAM + TILE_OFFSET_4BPP({WATER_START})),
        {WATER_COUNT} * TILE_SIZE_4BPP);
}}

── src/data/tilesets/headers.h  (gTileset_test) ─────────────────────────────
    .callback = InitTilesetAnim_test,

── include/global.fieldmap.h  (near other InitTilesetAnim_* declarations) ────
void InitTilesetAnim_test(void);
{'='*70}
""")
