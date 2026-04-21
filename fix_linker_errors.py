#!/usr/bin/env python3
"""
fix_linker_errors.py
Fixes missing symbol linker errors in pokemon-paradoxia by:
1. Adding stub script for LittlerootTown_EventScript_ArrivalScene to LittlerootTown/scripts.inc
2. Adding #define for LOCALID_ROUTE109_BRINEY and LOCALID_ROUTE109_BOAT to data/maps/Route109/scripts.inc
3. Adding #define for LOCALID_BEA to data/maps/Route109/scripts.inc

Run from the repo root:
    python3 fix_linker_errors.py
"""

import os
import sys

REPO_ROOT = os.getcwd()

def fix_littleroot_scripts():
    path = os.path.join(REPO_ROOT, "data/maps/LittlerootTown/scripts.inc")
    if not os.path.exists(path):
        print(f"ERROR: {path} not found")
        return False

    with open(path, "r") as f:
        content = f.read()

    stub = "LittlerootTown_EventScript_ArrivalScene::\n\tend\n\n"

    if "LittlerootTown_EventScript_ArrivalScene::" in content:
        print("LittlerootTown_EventScript_ArrivalScene already defined, skipping.")
        return True

    # Append stub before the final newline
    content = content.rstrip("\n") + "\n\n" + stub

    with open(path, "w") as f:
        f.write(content)

    print(f"Added LittlerootTown_EventScript_ArrivalScene stub to {path}")
    return True


def fix_route109_defines():
    path = os.path.join(REPO_ROOT, "data/maps/Route109/scripts.inc")
    if not os.path.exists(path):
        print(f"ERROR: {path} not found")
        return False

    with open(path, "r") as f:
        content = f.read()

    defines = {
        "LOCALID_ROUTE109_BRINEY": 26,
        "LOCALID_ROUTE109_BOAT": 27,
        "LOCALID_BEA": 25,
    }

    lines_to_add = []
    for name, value in defines.items():
        if f"#define {name}" in content:
            print(f"{name} already defined, skipping.")
        else:
            lines_to_add.append(f"#define {name} {value}")

    if not lines_to_add:
        return True

    inject = "\n".join(lines_to_add) + "\n\n"
    content = inject + content

    with open(path, "w") as f:
        f.write(content)

    print(f"Added defines to {path}: {', '.join(d.split()[1] for d in lines_to_add)}")
    return True


def main():
    print(f"Running from: {REPO_ROOT}\n")

    ok = True
    ok &= fix_littleroot_scripts()
    ok &= fix_route109_defines()

    if ok:
        print("\nAll fixes applied. Run `make` to verify.")
    else:
        print("\nSome fixes failed. Check errors above.")
        sys.exit(1)


if __name__ == "__main__":
    main()
