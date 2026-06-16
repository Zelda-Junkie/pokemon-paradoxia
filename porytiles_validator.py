#!/usr/bin/env python3

from PIL import Image
from collections import defaultdict, Counter
import os
import math

# ============================================================
# CONFIG
# ============================================================

SRC_DIR = "/Users/ajaybakhda/Documents/pokemon-paradoxia/paradoxia_primary/src"
FILES = ["bottom.png", "middle.png", "top.png"]

TILE_SIZE = 8

# ============================================================
# HELPERS
# ============================================================

def get_tile_pixels(img, tx, ty):
    px = img.load()
    pixels = []

    for y in range(ty * TILE_SIZE, (ty + 1) * TILE_SIZE):
        for x in range(tx * TILE_SIZE, (tx + 1) * TILE_SIZE):
            r, g, b, a = px[x, y]
            if a != 0:
                pixels.append((r, g, b))

    return pixels


def quantize(color):
    # reduce noise so similar colors group together
    r, g, b = color
    return (r // 32, g // 32, b // 32)


def tile_signature(pixels):
    """
    Create a palette signature for a tile:
    - counts quantized colors
    - sorts so order doesn't matter
    """
    q = Counter(quantize(c) for c in pixels)

    # normalize into a hashable sorted tuple
    return tuple(sorted(q.items()))


# ============================================================
# ANALYSIS
# ============================================================

def analyze_file(path):
    img = Image.open(path).convert("RGBA")
    w, h = img.size

    tiles_x = w // TILE_SIZE
    tiles_y = h // TILE_SIZE

    tile_map = defaultdict(list)

    tile_signatures = {}

    # Step 1: build signatures
    for ty in range(tiles_y):
        for tx in range(tiles_x):

            pixels = get_tile_pixels(img, tx, ty)

            if not pixels:
                continue

            sig = tile_signature(pixels)

            tile_map[sig].append((tx, ty))
            tile_signatures[(tx, ty)] = sig

    # Step 2: cluster analysis
    clusters = list(tile_map.values())

    # Sort clusters by size
    clusters.sort(key=len, reverse=True)

    # Step 3: detect bridge tiles
    bridge_tiles = []

    for (tx, ty), sig in tile_signatures.items():
        related_clusters = 0

        for other_sig in tile_map:
            if sig != other_sig:
                # check overlap in quantized space
                overlap = set(sig) & set(other_sig)
                if len(overlap) >= 2:
                    related_clusters += 1

        if related_clusters >= 2:
            bridge_tiles.append((tx, ty))

    # ========================================================
    # REPORT
    # ========================================================

    print("\n===================================")
    print(f"FILE: {os.path.basename(path)}")
    print("===================================")

    print(f"Total unique tile clusters: {len(clusters)}")
    print(f"Estimated palette pressure: {len(clusters)} / 8 palettes")
    print()

    if len(clusters) <= 8:
        print("✔ Likely OK: fits within palette limit (theoretically)")
    else:
        print("⚠ TOO MANY CLUSTERS: this WILL break Porytiles")

    print()

    print("Largest clusters:")
    for i, c in enumerate(clusters[:5]):
        print(f"  Cluster {i}: {len(c)} tiles")

    print()

    print(f"Bridge tiles detected: {len(bridge_tiles)}")

    if bridge_tiles:
        print("These are your REAL problem tiles:")
        for t in bridge_tiles[:50]:
            print(f"  - {t}")

    print()


# ============================================================
# RUN
# ============================================================

def main():
    for f in FILES:
        path = os.path.join(SRC_DIR, f)

        if not os.path.exists(path):
            print(f"[SKIP] Missing {f}")
            continue

        analyze_file(path)

    print("\nDONE")


if __name__ == "__main__":
    main()