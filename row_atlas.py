#!/usr/bin/env python3
"""
Paradoxia Tileset — Row Atlas
Generates a single labeled composite image of all non-empty rows,
grouped by file (bottom / middle / top).
Output: ~/Desktop/paradoxia_row_atlas.png
"""

from PIL import Image, ImageDraw, ImageFont
import os

SRC     = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OUT     = os.path.expanduser('~/Desktop/paradoxia_row_atlas.png')
MAGENTA = (255, 0, 255, 255)
ROWS    = 64
SCALE   = 3          # upscale factor for readability
LABEL_W = 60         # pixels reserved for the row-number label
ROW_H   = 16 * SCALE # height of each row strip after scaling
GAP     = 4          # gap between rows
HEADER  = 24         # height of the file-name header band

BG      = (30, 30, 30)
EMPTY   = (80, 80, 80)
WHITE   = (255, 255, 255)
YELLOW  = (255, 220, 50)
CYAN    = (80, 220, 255)

def collect_rows(fn):
    """Returns list of (row_index, PIL strip) for non-empty rows."""
    img  = Image.open(os.path.join(SRC, f'{fn}.png')).convert('RGBA')
    px   = img.load()
    W    = img.width
    rows = []
    for row in range(ROWS):
        y0 = row * 16
        if all(px[x, y] == MAGENTA for y in range(y0, y0+16) for x in range(W)):
            continue
        strip = img.crop((0, y0, W, y0 + 16)).convert('RGBA')
        sp    = strip.load()
        for y in range(strip.height):
            for x in range(strip.width):
                if sp[x, y] == MAGENTA:
                    sp[x, y] = (70, 70, 70, 255)
        scaled = strip.resize((W * SCALE, 16 * SCALE), Image.NEAREST)
        rows.append((row, scaled))
    return rows

# Collect all data first to compute canvas size
sections = []
for fn, color in [('bottom', YELLOW), ('middle', CYAN), ('top', (180, 255, 180))]:
    rows = collect_rows(fn)
    sections.append((fn, color, rows))

strip_w = 128 * SCALE + LABEL_W
total_h = 0
for fn, color, rows in sections:
    total_h += HEADER + len(rows) * (ROW_H + GAP) + GAP * 2

canvas = Image.new('RGB', (strip_w, total_h), BG)
draw   = ImageDraw.Draw(canvas)

try:
    font       = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 13)
    font_small = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 11)
except Exception:
    font       = ImageFont.load_default()
    font_small = font

y_cursor = 0
for fn, color, rows in sections:
    # Section header
    draw.rectangle([(0, y_cursor), (strip_w, y_cursor + HEADER)], fill=(50, 50, 50))
    draw.text((6, y_cursor + 4), f'{fn}.png  ({len(rows)} non-empty rows)', font=font, fill=color)
    y_cursor += HEADER + GAP

    for row_idx, strip in rows:
        # Row number label
        draw.rectangle([(0, y_cursor), (LABEL_W - 2, y_cursor + ROW_H)], fill=(45, 45, 45))
        draw.text((4, y_cursor + ROW_H // 2 - 7), f'row {row_idx:02d}', font=font_small, fill=color)

        # Strip
        canvas.paste(strip, (LABEL_W, y_cursor))
        y_cursor += ROW_H + GAP

    y_cursor += GAP

canvas.save(OUT)
print(f'Saved: {OUT}')
print(f'Canvas size: {canvas.width} × {canvas.height}px')
print('Upload paradoxia_row_atlas.png to the chat.')
