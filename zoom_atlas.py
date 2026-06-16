#!/usr/bin/env python3
"""
Zoomed atlas of middle.png rows 32-41 (and nearby rows for context).
Each metatile shown individually with its column and row number.
Output: ~/Desktop/middle_rows_detail.png
"""
from PIL import Image, ImageDraw, ImageFont
import os

SRC     = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OUT     = os.path.expanduser('~/Desktop/middle_rows_detail.png')
MAGENTA = (255, 0, 255, 255)
SCALE   = 6
TILE    = 16 * SCALE   # 96px per metatile
PAD     = 2
LABEL_H = 18
COLS    = 8

# Show rows 19-25 for context (ramp area) + 32-41 (the blanking candidates)
SHOW_ROWS = list(range(19, 26)) + ['---'] + list(range(32, 42))

BG     = (25, 25, 25)
GREY   = (70, 70, 70)
WHITE  = (255, 255, 255)
YELLOW = (255, 220, 50)
CYAN   = (80, 220, 255)
RED    = (255, 80, 80)

img = Image.open(os.path.join(SRC, 'middle.png')).convert('RGBA')
px  = img.load()

# Canvas dimensions
row_h    = TILE + LABEL_H + PAD * 2
col_w    = TILE + PAD * 2
header_h = 20

actual_rows = [r for r in SHOW_ROWS if r != '---']
dividers    = [i for i, r in enumerate(SHOW_ROWS) if r == '---']

n_rows  = len(SHOW_ROWS)
canvas  = Image.new('RGB',
                    (COLS * col_w + 60, n_rows * row_h + header_h + 10),
                    BG)
draw    = ImageDraw.Draw(canvas)

try:
    font  = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 11)
    fontb = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 13)
except Exception:
    font  = ImageFont.load_default()
    fontb = font

# Header
draw.text((4, 4), 'middle.png  rows 19-25 (context) + 32-41 (blanking candidates)',
          font=fontb, fill=CYAN)

y_off = header_h
for i, row in enumerate(SHOW_ROWS):
    if row == '---':
        draw.rectangle([(0, y_off), (canvas.width, y_off + row_h)], fill=(40, 40, 40))
        draw.text((4, y_off + row_h // 2 - 6),
                  '─── above: context rows  |  below: blanking candidates ───',
                  font=font, fill=(120, 120, 120))
        y_off += row_h
        continue

    is_candidate = row >= 32
    row_color    = RED if is_candidate else YELLOW

    # Row label on the left
    draw.text((2, y_off + LABEL_H + PAD + TILE // 2 - 6),
              f'r{row:02d}', font=font, fill=row_color)

    for col in range(COLS):
        x0_src = col * 16
        y0_src = row * 16
        # Extract metatile
        tile = img.crop((x0_src, y0_src, x0_src + 16, y0_src + 16)).convert('RGBA')
        tp   = tile.load()

        all_empty = all(tp[x, y] == MAGENTA for y in range(16) for x in range(16))

        # Replace magenta with grey
        for y in range(16):
            for x in range(16):
                if tp[x, y] == MAGENTA:
                    tp[x, y] = (60, 60, 60, 255)

        scaled = tile.resize((TILE, TILE), Image.NEAREST)

        x_dest = 60 + col * col_w + PAD
        y_dest = y_off + LABEL_H + PAD

        # Background for empty tiles
        if all_empty:
            draw.rectangle([(x_dest, y_dest), (x_dest + TILE, y_dest + TILE)],
                           fill=(40, 40, 40))
            draw.text((x_dest + TILE // 2 - 8, y_dest + TILE // 2 - 6),
                      'empty', font=font, fill=(80, 80, 80))
        else:
            canvas.paste(scaled, (x_dest, y_dest))

        # Column label
        draw.text((x_dest + TILE // 2 - 6, y_off + 2),
                  f'c{col}', font=font,
                  fill=(100, 100, 100) if all_empty else WHITE)

        # Border
        border_color = (80, 80, 80) if not is_candidate else (120, 40, 40)
        draw.rectangle([(x_dest - 1, y_dest - 1),
                        (x_dest + TILE, y_dest + TILE)],
                       outline=border_color)

    y_off += row_h

canvas.save(OUT)
print(f'Saved: {OUT}')
print('Upload middle_rows_detail.png — rows 19-25 shown for ramp context,')
print('rows 32-41 (red border) are the blanking candidates.')
