#!/usr/bin/env python3
"""
Zoomed atlas of remaining tile budget candidates.
Output: ~/Desktop/candidates_detail.png
"""
from PIL import Image, ImageDraw, ImageFont
import os

SRC    = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
OUT    = os.path.expanduser('~/Desktop/candidates_detail.png')
MAGENTA = (255, 0, 255, 255)
SCALE  = 5
TILE   = 16 * SCALE
PAD    = 2
LABEL_H = 18
COLS   = 8

# Rows to inspect per file
CANDIDATES = {
    'bottom': [1, 9, 11, 12, 13, 14, 21],
    'middle': [4, 10, 18, 31],
    'top':    [],
}

BG    = (25, 25, 25)
WHITE = (255, 255, 255)
COLORS = {'bottom': (255, 220, 50), 'middle': (80, 220, 255), 'top': (180, 255, 180)}

row_h   = TILE + LABEL_H + PAD * 2
col_w   = TILE + PAD * 2
hdr_h   = 22

total_rows = sum(len(v) for v in CANDIDATES.values())
canvas_h   = total_rows * row_h + len([v for v in CANDIDATES.values() if v]) * hdr_h + 20
canvas     = Image.new('RGB', (COLS * col_w + 64, canvas_h), BG)
draw       = ImageDraw.Draw(canvas)

try:
    font  = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 11)
    fontb = ImageFont.truetype('/System/Library/Fonts/Helvetica.ttc', 13)
except Exception:
    font = fontb = ImageFont.load_default()

y_off = 4
draw.text((4, y_off), 'Remaining candidates — decide which rows are expendable', font=fontb, fill=WHITE)
y_off += 20

for fn, rows in CANDIDATES.items():
    if not rows:
        continue
    color = COLORS[fn]
    img   = Image.open(os.path.join(SRC, f'{fn}.png')).convert('RGBA')

    draw.rectangle([(0, y_off), (canvas.width, y_off + hdr_h)], fill=(45, 45, 45))
    draw.text((4, y_off + 4), f'{fn}.png', font=fontb, fill=color)
    y_off += hdr_h

    for row in rows:
        draw.text((2, y_off + LABEL_H + PAD + TILE // 2 - 6),
                  f'r{row:02d}', font=font, fill=color)

        for col in range(COLS):
            tile = img.crop((col*16, row*16, col*16+16, row*16+16)).convert('RGBA')
            tp   = tile.load()
            all_empty = all(tp[x, y] == MAGENTA for y in range(16) for x in range(16))
            for y in range(16):
                for x in range(16):
                    if tp[x, y] == MAGENTA:
                        tp[x, y] = (55, 55, 55, 255)
            scaled = tile.resize((TILE, TILE), Image.NEAREST)

            xd = 64 + col * col_w + PAD
            yd = y_off + LABEL_H + PAD

            if all_empty:
                draw.rectangle([(xd, yd), (xd+TILE, yd+TILE)], fill=(38, 38, 38))
                draw.text((xd + TILE//2 - 8, yd + TILE//2 - 6), 'empty', font=font, fill=(70,70,70))
            else:
                canvas.paste(scaled, (xd, yd))

            draw.text((xd + TILE//2 - 6, y_off + 2), f'c{col}', font=font,
                      fill=(90,90,90) if all_empty else WHITE)
            draw.rectangle([(xd-1, yd-1), (xd+TILE, yd+TILE)], outline=(60,60,60))

        y_off += row_h

canvas = canvas.crop((0, 0, canvas.width, y_off + 4))
canvas.save(OUT)
print(f'Saved: {OUT}  ({canvas.width}×{canvas.height}px)')
print('Upload candidates_detail.png')
