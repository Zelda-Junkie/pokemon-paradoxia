#!/usr/bin/env python3
"""
Paradoxia Tileset Renderer
Composites bottom + middle + top layers into a single preview.
Magenta pixels are treated as transparent.

Usage:
    python3 tileset_renderer.py              # full composite, 2x scale
    python3 tileset_renderer.py 3            # 3x scale
    python3 tileset_renderer.py 4 10 20      # 4x scale, rows 10-20 only
"""

import sys, os
from PIL import Image

SRC     = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OUT     = os.path.expanduser('~/Desktop/tileset_composite.png')
MAGENTA = (255, 0, 255, 255)
LAYERS  = ['bottom', 'middle', 'top']

# Parse args
scale    = int(sys.argv[1]) if len(sys.argv) > 1 else 2
row_min  = int(sys.argv[2]) if len(sys.argv) > 2 else 0
row_max  = int(sys.argv[3]) if len(sys.argv) > 3 else 63

# Load layers
imgs = []
for fn in LAYERS:
    img = Image.open(os.path.join(SRC, f'{fn}.png')).convert('RGBA')
    imgs.append(img)

W        = imgs[0].width   # 128
row_min  = max(0, row_min)
row_max  = min(63, row_max)
y0       = row_min * 16
y1       = (row_max + 1) * 16
H        = y1 - y0

# Composite: start with checkerboard background so transparency is visible
def make_checker(w, h, size=8):
    bg = Image.new('RGBA', (w, h), (200, 200, 200, 255))
    for y in range(0, h, size):
        for x in range(0, w, size):
            if (x // size + y // size) % 2 == 0:
                for py in range(y, min(y + size, h)):
                    for px in range(x, min(x + size, w)):
                        bg.putpixel((px, py), (240, 240, 240, 255))
    return bg

composite = make_checker(W, H)

for img in imgs:
    layer = img.crop((0, y0, W, y1)).convert('RGBA')
    px    = layer.load()
    # Replace magenta with transparent
    for y in range(layer.height):
        for x in range(layer.width):
            if px[x, y] == MAGENTA:
                px[x, y] = (0, 0, 0, 0)
    composite = Image.alpha_composite(composite, layer)

# Upscale
if scale > 1:
    composite = composite.resize((W * scale, H * scale), Image.NEAREST)

composite.save(OUT)
rows_shown = row_max - row_min + 1
print(f'Saved: {OUT}')
print(f'Rows {row_min}–{row_max} ({rows_shown} rows), {scale}x scale')
print(f'Canvas: {composite.width}×{composite.height}px')
