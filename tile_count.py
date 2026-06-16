#!/usr/bin/env python3
"""
Paradoxia Tileset — Tile Count + Surgical Blanker

Usage:
    python3 tile_count.py                            # full row analysis
    python3 tile_count.py cells                      # per-cell exclusive tile cost
    python3 tile_count.py blank middle 32 33         # blank entire rows
    python3 tile_count.py blankcel middle 12 5       # blank single cell (row 12, col 5)
    python3 tile_count.py blankcols middle 21 0 1 2  # blank specific cols in a row
"""

import sys
from PIL import Image
import os

SRC     = os.path.expanduser('~/Documents/pokemon-paradoxia/paradoxia_primary/src')
MAGENTA = (255, 0, 255, 255)
ROWS    = 64
COLS    = 8


def get_8x8_tiles(img, row_16, col_16):
    px    = img.load()
    tiles = []
    base_x = col_16 * 16
    base_y = row_16 * 16
    for dy in (0, 8):
        for dx in (0, 8):
            pixels = []
            for y in range(base_y + dy, base_y + dy + 8):
                for x in range(base_x + dx, base_x + dx + 8):
                    pixels.append(px[x, y])
            tiles.append(tuple(pixels))
    return tiles


def collect_all():
    tile_locations = {}
    row_tiles      = {}
    cell_tiles     = {}

    for fn in ['bottom', 'middle', 'top']:
        img = Image.open(os.path.join(SRC, f'{fn}.png')).convert('RGBA')
        for row in range(ROWS):
            row_key = (fn, row)
            row_sigs = set()
            for col in range(COLS):
                cell_key  = (fn, row, col)
                cell_sigs = set()
                for t in get_8x8_tiles(img, row, col):
                    if all(p == MAGENTA for p in t):
                        continue
                    cell_sigs.add(t)
                    row_sigs.add(t)
                    tile_locations.setdefault(t, set()).add(cell_key)
                cell_tiles[cell_key] = cell_sigs
            row_tiles[row_key] = row_sigs

    return tile_locations, row_tiles, cell_tiles


def analyze():
    print('Counting unique 8x8 tiles...\n')
    tile_locs, row_tiles, cell_tiles = collect_all()
    total = len(tile_locs)

    print(f'Total unique tiles: {total}  (limit: 512, over by: {max(0, total - 512)})\n')

    row_excl = {}
    for key, sigs in row_tiles.items():
        row_excl[key] = sum(1 for t in sigs if len(tile_locs[t]) == 1)

    print('── middle.png rows with most EXCLUSIVE tiles ──')
    middle_rows = [(r, row_excl[('middle', r)], len(row_tiles[('middle', r)]))
                   for r in range(ROWS) if row_tiles.get(('middle', r))]
    for row, excl, tot in sorted(middle_rows, key=lambda x: -x[1])[:20]:
        marker = '  <- HOUSE' if 43 <= row <= 45 else ''
        print(f'  row {row:02d}  excl={excl:3d}  total={tot:3d}{marker}')

    print('\n── bottom.png rows with most exclusive tiles ──')
    bot_rows = [(r, row_excl[('bottom', r)], len(row_tiles[('bottom', r)]))
                for r in range(ROWS) if row_tiles.get(('bottom', r))]
    for row, excl, tot in sorted(bot_rows, key=lambda x: -x[1])[:10]:
        print(f'  row {row:02d}  excl={excl:3d}  total={tot:3d}')

    print('\n── top.png rows with most exclusive tiles ──')
    top_rows = [(r, row_excl[('top', r)], len(row_tiles[('top', r)]))
                for r in range(ROWS) if row_tiles.get(('top', r))]
    for row, excl, tot in sorted(top_rows, key=lambda x: -x[1])[:10]:
        print(f'  row {row:02d}  excl={excl:3d}  total={tot:3d}')


def cell_analysis():
    print('Counting per-cell exclusive tiles...\n')
    tile_locs, row_tiles, cell_tiles = collect_all()
    total = len(tile_locs)
    print(f'Total unique tiles: {total}  (limit: 512, over by: {max(0, total - 512)})\n')

    cell_excl = {}
    for key, sigs in cell_tiles.items():
        cell_excl[key] = sum(1 for t in sigs if len(tile_locs[t]) == 1)

    print('── Cells with highest exclusive tile cost (top 40) ──')
    print(f'  {"File":8} {"Row":4} {"Col":4} {"Excl":6} {"Total":6}')
    ranked = sorted(cell_excl.items(), key=lambda x: -x[1])
    for (fn, row, col), excl in ranked[:40]:
        if excl == 0:
            break
        tot = len(cell_tiles[(fn, row, col)])
        marker = '  <- HOUSE' if fn == 'middle' and 43 <= row <= 45 else ''
        print(f'  {fn:8} {row:4d} {col:4d} {excl:6d} {tot:6d}{marker}')

    print('\n── Per-row cell breakdown ──')
    rows_seen = set()
    for (fn, row, col), excl in ranked[:60]:
        if excl == 0:
            break
        rk = (fn, row)
        if rk in rows_seen:
            continue
        rows_seen.add(rk)
        row_data = [(c, cell_excl.get((fn, row, c), 0), len(cell_tiles.get((fn, row, c), set())))
                    for c in range(COLS) if cell_tiles.get((fn, row, c))]
        col_str = '  '.join(f'c{c}:{e}ex' for c, e, _ in row_data)
        print(f'  {fn} r{row:02d}: {col_str}')


def blank_rows(fn, rows_to_blank):
    path = os.path.join(SRC, f'{fn}.png')
    img  = Image.open(path).convert('RGBA')
    px   = img.load()
    W, H = img.size
    count = 0
    for row in rows_to_blank:
        y0, y1 = row * 16, row * 16 + 16
        if y1 > H:
            print(f'  Row {row} out of bounds, skipping.')
            continue
        for y in range(y0, y1):
            for x in range(W):
                if px[x, y] != MAGENTA:
                    px[x, y] = MAGENTA
                    count += 1
        print(f'  Blanked {fn}.png row {row}')
    img.save(path)
    print(f'  Saved ({count} pixels)\n')


def blank_cell(fn, row, col):
    path = os.path.join(SRC, f'{fn}.png')
    img  = Image.open(path).convert('RGBA')
    px   = img.load()
    count = 0
    for y in range(row * 16, row * 16 + 16):
        for x in range(col * 16, col * 16 + 16):
            if px[x, y] != MAGENTA:
                px[x, y] = MAGENTA
                count += 1
    img.save(path)
    print(f'  Blanked {fn}.png cell (row={row}, col={col}) -- {count} pixels\n')


def blank_cols_in_row(fn, row, cols):
    path = os.path.join(SRC, f'{fn}.png')
    img  = Image.open(path).convert('RGBA')
    px   = img.load()
    count = 0
    for col in cols:
        for y in range(row * 16, row * 16 + 16):
            for x in range(col * 16, col * 16 + 16):
                if px[x, y] != MAGENTA:
                    px[x, y] = MAGENTA
                    count += 1
        print(f'  Blanked {fn}.png row {row} col {col}')
    img.save(path)
    print(f'  Saved ({count} pixels)\n')


if __name__ == '__main__':
    args = sys.argv[1:]

    if not args:
        analyze()
    elif args[0] == 'cells':
        cell_analysis()
    elif args[0] == 'blank' and len(args) >= 3:
        fn   = args[1]
        rows = [int(r) for r in args[2:]]
        blank_rows(fn, rows)
        analyze()
    elif args[0] == 'blankcel' and len(args) == 4:
        blank_cell(args[1], int(args[2]), int(args[3]))
        analyze()
    elif args[0] == 'blankcols' and len(args) >= 4:
        fn   = args[1]
        row  = int(args[2])
        cols = [int(c) for c in args[3:]]
        blank_cols_in_row(fn, row, cols)
        analyze()
    else:
        print(__doc__)