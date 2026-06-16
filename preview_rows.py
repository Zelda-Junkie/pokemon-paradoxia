#!/usr/bin/env python3
"""
Paradoxia Tileset — Row Preview Export

Exports each non-empty row from bottom/middle/top.png as a
small PNG strip so you can visually inspect what's there
before deciding what to blank.

Output: ~/Desktop/paradoxia_row_previews/
  bottom_row_00.png ... top_row_63.png

Each strip is 128×16px (actual tileset pixels, 2× upscaled = 256×32).
Rows that are 100% magenta (empty) are skipped.

Usage:
    python3 preview_rows.py
"""

import os
from PIL import Image

SRC      = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OUT_DIR  = os.path.expanduser('~/Desktop/paradoxia_row_previews')
MAGENTA  = (255, 0, 255, 255)
ROWS     = 64
SCALE    = 4   # upscale factor for readability

os.makedirs(OUT_DIR, exist_ok=True)

# Clear old previews
for f in os.listdir(OUT_DIR):
    if f.endswith('.png'):
        os.remove(os.path.join(OUT_DIR, f))

for fn in ['bottom', 'middle', 'top']:
    img = Image.open(os.path.join(SRC, f'{fn}.png')).convert('RGBA')
    px  = img.load()
    W   = img.width  # 128

    for row in range(ROWS):
        y0 = row * 16
        y1 = y0 + 16

        # Check if row is all magenta
        all_empty = all(
            px[x, y] == MAGENTA
            for y in range(y0, y1)
            for x in range(W)
        )
        if all_empty:
            continue

        # Crop the row strip
        strip = img.crop((0, y0, W, y1))

        # Replace magenta with a neutral grey so it's readable on any background
        strip_rgba = strip.convert('RGBA')
        sp = strip_rgba.load()
        for y in range(strip_rgba.height):
            for x in range(strip_rgba.width):
                if sp[x, y] == MAGENTA:
                    sp[x, y] = (180, 180, 180, 255)

        # Upscale
        preview = strip_rgba.resize(
            (strip_rgba.width * SCALE, strip_rgba.height * SCALE),
            Image.NEAREST
        )

        out_path = os.path.join(OUT_DIR, f'{fn}_row_{row:02d}.png')
        preview.save(out_path)

print(f'Done. Open ~/Desktop/paradoxia_row_previews/ in Finder.')
print(f'Sort by name — each file is one 16px-tall row from the source PNG.')
print()
print('Rows exported:')
files = sorted(os.listdir(OUT_DIR))
for fn_prefix in ['bottom', 'middle', 'top']:
    rows = [f for f in files if f.startswith(fn_prefix)]
    print(f'  {fn_prefix}: {[int(f.split("_row_")[1].split(".")[0]) for f in rows]}')
