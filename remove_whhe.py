#!/usr/bin/env python3
"""
Removes all gTileset_whhe / gMetatiles_whhe / gTilesetPalettes_whhe / gTilesetTiles_whhe
blocks from the three tileset header files.
"""

import os, re

BASE = os.path.expanduser('~/Documents/pokemon-paradoxia/src/data/tilesets')

def remove_whhe_blocks(path):
    with open(path) as f:
        text = f.read()

    original = text

    # 1. Remove single-line declarations (metatiles.h style)
    #    const u16 gMetatiles_whhe[] = INCBIN_U16(...);
    text = re.sub(r'\n[^\n]*whhe[^\n]*;\n', '\n', text)

    # 2. Remove multi-line blocks that START with a line containing 'whhe'
    #    and end with '};\n'
    #    e.g. const struct Tileset gTileset_whhe = { ... };
    #         const u16 gTilesetPalettes_whhe[][16] = { ... };
    text = re.sub(
        r'\n[^\n]*whhe[^\n]*\n\{[^}]*\};\n',
        '\n',
        text,
        flags=re.DOTALL
    )

    # 3. Clean up any leftover blank lines (more than 2 in a row → 2)
    text = re.sub(r'\n{3,}', '\n\n', text)

    if text != original:
        with open(path, 'w') as f:
            f.write(text)
        removed = original.count('whhe') - text.count('whhe')
        print(f'  {os.path.basename(path)}: removed {removed} whhe references')
    else:
        print(f'  {os.path.basename(path)}: nothing changed (check manually)')

    # Verify
    remaining = text.count('whhe')
    if remaining:
        print(f'  WARNING: {remaining} occurrences of "whhe" still remain in {os.path.basename(path)}')
    else:
        print(f'  {os.path.basename(path)}: clean')

print('Removing whhe tileset references...')
for fname in ['headers.h', 'metatiles.h', 'graphics.h']:
    remove_whhe_blocks(os.path.join(BASE, fname))

print('\nDone. Run make again.')
