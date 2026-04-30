#!/usr/bin/env python3
"""
add_speaker.py — Paradoxia speaker name helper
Adds a new speaker to all three required files:
  - include/constants/speaker_names.h  (enum + #define)
  - src/data/speaker_names.h           (COMPOUND_STRING table entry)
"""

import re

CONSTANTS_H = "include/constants/speaker_names.h"
DATA_H = "src/data/speaker_names.h"

def get_current_speakers(constants):
    """Parse existing SP_NAME_* defines and return {name: value} dict."""
    defines = re.findall(r"#define (SP_NAME_\w+)\s+(\d+)", constants)
    return {name: int(val) for name, val in defines}

def main():
    print("=== Paradoxia Speaker Name Adder ===\n")

    code_name = input("Code name (e.g. DOC_B, BEA, GRUNT): ").strip().upper()
    display_name = input("Display name (e.g. Doc B, Bea, Grunt): ").strip()

    if not code_name or not display_name:
        print("Error: both fields required.")
        return

    sp_name = f"SP_NAME_{code_name}"

    # --- Read constants header ---
    with open(CONSTANTS_H, "r") as f:
        constants = f.read()

    speakers = get_current_speakers(constants)

    if sp_name in speakers:
        print(f"\nError: {sp_name} already exists (value {speakers[sp_name]}).")
        return

    # New value is SP_NAME_COUNT - 1 (insert before COUNT)
    # Find current COUNT value
    count_match = re.search(r"SP_NAME_COUNT\s*\n\s*\}", constants)
    if not count_match:
        print("Error: could not find SP_NAME_COUNT in enum.")
        return

    # Get highest define value to determine next index
    if speakers:
        next_val = max(speakers.values()) + 1
    else:
        next_val = 3  # after NONE, MOM, PLAYER

    # --- Update enum: insert before SP_NAME_COUNT ---
    constants = constants.replace(
        "    SP_NAME_COUNT\n};",
        f"    {sp_name},\n    SP_NAME_COUNT\n}};"
    )

    # --- Update #defines: insert before #endif ---
    define_line = f"#define {sp_name:<20} {next_val}"
    # Update SP_NAME_COUNT define if it exists, or just append before #endif
    constants = re.sub(
        r"(#define SP_NAME_COUNT\s+)(\d+)",
        lambda m: f"{m.group(1)}{next_val + 1}",
        constants
    )
    constants = constants.replace(
        "#endif // GUARD_CONSTANTS_SPEAKER_NAMES_H",
        f"{define_line}\n#endif // GUARD_CONSTANTS_SPEAKER_NAMES_H"
    )

    with open(CONSTANTS_H, "w") as f:
        f.write(constants)
    print(f"\n✓ {CONSTANTS_H} updated — {sp_name} = {next_val}")

    # --- Update data header ---
    with open(DATA_H, "r") as f:
        data = f.read()

    new_entry = f'    [{sp_name}]{"":6}= COMPOUND_STRING("{display_name}"),'
    data = data.replace(
        "};",
        f"{new_entry}\n}};"
    )

    with open(DATA_H, "w") as f:
        f.write(data)
    print(f"✓ {DATA_H} updated — [{sp_name}] = \"{display_name}\"")

    print(f"\nDone! Use 'setspeaker {sp_name}' in your scripts.")
    print("Remember to run: touch src/field_name_box.c && make")

if __name__ == "__main__":
    main()
