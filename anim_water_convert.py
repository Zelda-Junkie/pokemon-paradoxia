#!/usr/bin/env python3
"""
Reads 0.png-7.png from anim/water/ (48x80 source frames),
converts each to the correct 16xNpx indexed format in-place.
"""

import struct, os
from PIL import Image

TILESET    = os.path.expanduser('~/Documents/pokemon-paradoxia/data/tilesets/primary/test')
ANIM_DIR   = os.path.join(TILESET, 'anim', 'water')
PAL_IDX    = 1
NUM_FRAMES = 8
FRAME_W    = 48
FRAME_H    = 80
TILE_MIN   = 133

METATILE_CELLS = {
    0x035: (0, 3), 0x036: (1, 3), 0x037: (2, 3),
    0x03D: (0, 4), 0x03E: (1, 4), 0x03F: (2, 4),
    0x046: (1, 0), 0x047: (2, 0),
    0x04E: (1, 1), 0x04F: (2, 1),
}

def decompress_lz77(data):
    if data[0] != 0x10: raise ValueError('Not GBA LZ77')
    size = data[1] | (data[2] << 8) | (data[3] << 16)
    out = bytearray(); pos = 4
    while len(out) < size:
        flags = data[pos]; pos += 1
        for bit in range(7, -1, -1):
            if len(out) >= size: break
            if flags & (1 << bit):
                b1 = data[pos]; b2 = data[pos+1]; pos += 2
                l = (b1 >> 4) + 3; d = ((b1 & 0xF) << 8) | b2
                for _ in range(l): out.append(out[len(out) - d - 1])
            else:
                out.append(data[pos]); pos += 1
    return bytes(out)

def load_gbapal(path):
    data = open(path, 'rb').read()
    return [((c & 0x1F) << 3, ((c >> 5) & 0x1F) << 3, ((c >> 10) & 0x1F) << 3)
            for c in struct.unpack_from('<16H', data)]

palette  = load_gbapal(os.path.join(TILESET, 'palettes', f'{PAL_IDX:02d}.gbapal'))
tile_raw = decompress_lz77(open(os.path.join(TILESET, 'tiles.4bpp.lz'), 'rb').read())
meta_raw = open(os.path.join(TILESET, 'metatiles.bin'), 'rb').read()

flat_pal = []
for r,g,b in palette: flat_pal.extend([r,g,b])
flat_pal.extend([0] * (256*3 - len(flat_pal)))
pal_ref = Image.new('P', (1,1))
pal_ref.putpalette(flat_pal)

# tile → pixel offset within one 48x80 frame
tile_to_pixel  = {}
all_anim_tiles = set()

for meta_id, (cell_col, cell_row) in sorted(METATILE_CELLS.items()):
    entries   = struct.unpack_from('<8H', meta_raw, meta_id * 16)
    mid_tiles = [e & 0x3FF for e in entries[4:8]]
    cell_x    = cell_col * 16
    cell_y    = cell_row * 16
    for sub_idx, tile_idx in enumerate(mid_tiles):
        if tile_idx < TILE_MIN: continue
        fx = cell_x + (sub_idx % 2) * 8
        fy = cell_y + (sub_idx // 2) * 8
        if tile_idx not in tile_to_pixel:
            tile_to_pixel[tile_idx] = (fx, fy)
        all_anim_tiles.add(tile_idx)

anim_list  = sorted(all_anim_tiles)
anim_start = anim_list[0]
anim_end   = anim_list[-1]
anim_span  = anim_end - anim_start + 1
img_h      = ((anim_span + 1) // 2) * 8

print(f'Tile range: {anim_start}-{anim_end}  span={anim_span}  output: 16x{img_h}px\n')

for frame_idx in range(NUM_FRAMES):
    src  = os.path.join(ANIM_DIR, f'{frame_idx}.png')
    frame_q = Image.open(src).convert('RGB').quantize(palette=pal_ref, dither=0)
    fq_px   = frame_q.load()

    img    = Image.new('P', (16, img_h))
    img.putpalette(flat_pal)
    out_px = img.load()

    for t_off, tile_idx in enumerate(range(anim_start, anim_end + 1)):
        xb = (t_off % 2) * 8
        yb = (t_off // 2) * 8
        if tile_idx in tile_to_pixel:
            fx, fy = tile_to_pixel[tile_idx]
            for py in range(8):
                for px_ in range(8):
                    out_px[xb+px_, yb+py] = fq_px[fx+px_, fy+py]
        else:
            raw = tile_raw[tile_idx*32 : tile_idx*32+32]
            for py in range(8):
                for px_ in range(0, 8, 2):
                    b = raw[py*4 + px_//2]
                    out_px[xb+px_,   yb+py] = b & 0x0F
                    out_px[xb+px_+1, yb+py] = (b >> 4) & 0x0F

    img.save(src)   # overwrite in-place
    print(f'  Converted {frame_idx}.png  (16x{img_h}px indexed)')

print(f"""
C CODE:

""" + '\n'.join(
    f'const u16 gTilesetAnims_test_Water_Frame{i}[] = INCBIN_U16("data/tilesets/primary/test/anim/water/{i}.4bpp");'
    for i in range(NUM_FRAMES)
) + f"""

const u16 *const gTilesetAnims_test_Water[] = {{
""" + '\n'.join(f'    gTilesetAnims_test_Water_Frame{i},' for i in range(NUM_FRAMES)) + f"""
}};

static void QueueAnimTiles_test_Water(u16 timer)
{{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_test_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_test_Water[i],
        (u16 *)(BG_VRAM + TILE_OFFSET_4BPP({anim_start})),
        {anim_span} * TILE_SIZE_4BPP);
}}
""")
