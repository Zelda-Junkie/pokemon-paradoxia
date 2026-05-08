#!/usr/bin/env python3
"""
Paradoxia Trainer Tool — v5
Writes to:
  - src/data/trainers.party  (trainer entry in Showdown format)
  - include/constants/opponents.h  (trainer ID constant + increments TRAINERS_COUNT_EMERALD)

Run from your pokemon-paradoxia root directory.
"""

import re
import sys
import os

# ── CONFIG ────────────────────────────────────────────────────────────────────

TRAINERS_PARTY = "src/data/trainers.party"
OPPONENTS_H    = "include/constants/opponents.h"

CLASSES = {
    "1":  "Pkmn Trainer 1",
    "2":  "Hiker",
    "3":  "Lass",
    "4":  "Youngster",
    "5":  "Cooltrainer",
    "6":  "Cooltrainer 2",
    "7":  "Leader",
    "8":  "Elite Four",
    "9":  "Champion",
    "10": "Rival",
    "11": "Hex Maniac",
    "12": "Pkmn Breeder",
    "13": "Bug Maniac",
    "14": "Gentleman",
    "15": "Dragon Tamer",
    "16": "Beauty",
    "17": "Bird Keeper",
    "18": "Black Belt",
    "19": "Bug Catcher",
    "20": "Camper",
    "21": "Picnicker",
    "22": "Psychic",
    "23": "Sailor",
    "24": "Aroma Lady",
    "25": "Battle Girl",
    "26": "Kindler",
    "27": "Collector",
    "28": "Guitarist",
    "29": "Ninja Boy",
    "30": "Ruin Maniac",
    "31": "Swimmer M",
    "32": "Swimmer F",
    "33": "Fisherman",
    "34": "Twins",
    "35": "Lady",
    "36": "Rich Boy",
    "37": "Pokefan",
    "38": "Pokemaniac",
    "39": "Expert",
    "40": "RS Protag",
}

PICS = {
    "1":  "May",
    "2":  "Brendan",
    "3":  "Hiker",
    "4":  "Lass",
    "5":  "Youngster",
    "6":  "Cool Trainer M",
    "7":  "Cool Trainer F",
    "8":  "Wally",
    "9":  "Steven",
    "10": "Hex Maniac",
    "11": "Maxie",
    "12": "Archie",
    "13": "Camper",
    "14": "Picnicker",
    "15": "Beauty",
    "16": "Swimmer M",
    "17": "Swimmer F",
    "18": "Black Belt",
    "19": "Battle Girl",
    "20": "Psychic M",
    "21": "Psychic F",
}

MUSIC = {
    "1":  "Female",
    "2":  "Male",
    "3":  "Hiker",
    "4":  "Suspicious",
    "5":  "Intense",
    "6":  "Cool",
    "7":  "Elite Four",
    "8":  "Swimmer",
    "9":  "Twins",
    "10": "Interviewer",
    "11": "Rich",
}

AI_FLAGS = {
    "1": "Basic Trainer",
    "2": "Basic Trainer / Try To Faint / Check Viability",
    "3": "Basic Trainer / Try To Faint / Check Viability / Prefer Strongest Move",
}

NATURES = [
    "Hardy", "Lonely", "Brave", "Adamant", "Naughty",
    "Bold", "Docile", "Relaxed", "Impish", "Lax",
    "Timid", "Hasty", "Serious", "Jolly", "Naive",
    "Modest", "Mild", "Quiet", "Bashful", "Rash",
    "Calm", "Gentle", "Sassy", "Careful", "Quirky",
]

# ── HELPERS ───────────────────────────────────────────────────────────────────

def clr(code, text):
    return f"\033[{code}m{text}\033[0m"

def header(text):
    print(f"\n{clr('1;36', '══ ' + text + ' ══')}")

def ask(prompt, validator=None, default=None):
    while True:
        suffix = f" [{default}]" if default is not None else ""
        val = input(f"  {clr('33', '→')} {prompt}{suffix}: ").strip()
        if not val and default is not None:
            return str(default)
        if not val:
            print(f"  {clr('31', '✗')} Required.")
            continue
        if validator:
            result = validator(val)
            if result is not True:
                print(f"  {clr('31', '✗')} {result}")
                continue
        return val

def ask_optional(prompt, validator=None):
    val = input(f"  {clr('33', '→')} {prompt} (enter to skip): ").strip()
    if not val:
        return None
    if validator:
        result = validator(val)
        if result is not True:
            print(f"  {clr('31', '✗')} {result} — skipping.")
            return None
    return val

def ask_choice(prompt, options):
    print(f"\n  {clr('33', '→')} {prompt}")
    for k, v in options.items():
        print(f"    {clr('36', k)}) {v}")
    while True:
        val = input(f"  Choice: ").strip()
        if val in options:
            return options[val]
        print(f"  {clr('31', '✗')} Pick a number from the list.")

def ask_yn(prompt, default=None):
    hint = " [Y/n]" if default is True else " [y/N]" if default is False else ""
    while True:
        val = input(f"  {clr('33', '→')} {prompt}{hint}: ").strip().lower()
        if not val and default is not None:
            return default
        if val in ("y", "yes"):
            return True
        if val in ("n", "no"):
            return False

# ── VALIDATORS ────────────────────────────────────────────────────────────────

def validate_identifier(val):
    if not re.match(r'^[A-Z][A-Z0-9_]+$', val.upper()):
        return "Use UPPER_CASE_WITH_UNDERSCORES (e.g. TRAINER_BEA_FUECOCO)."
    return True

def validate_level(val):
    if not val.isdigit() or not (1 <= int(val) <= 100):
        return "Level must be between 1 and 100."
    return True

def validate_party_size(val):
    if not val.isdigit() or not (1 <= int(val) <= 6):
        return "Party size must be between 1 and 6."
    return True

def validate_iv(val):
    if not val.isdigit() or not (0 <= int(val) <= 31):
        return "Must be between 0 and 31."
    return True

def validate_ev(val):
    if not val.isdigit() or not (0 <= int(val) <= 255):
        return "Must be between 0 and 255."
    return True

def validate_happiness(val):
    if not val.isdigit() or not (1 <= int(val) <= 255):
        return "Must be between 1 and 255."
    return True

def validate_dynamax(val):
    if not val.isdigit() or not (0 <= int(val) <= 10):
        return "Must be between 0 and 10."
    return True

def validate_nature(val):
    if val.capitalize() not in NATURES:
        return "Not a valid nature. Try Hardy, Adamant, Timid, Modest, etc."
    return True

# ── OPPONENTS.H HANDLING ──────────────────────────────────────────────────────

def get_current_trainer_count():
    """Read TRAINERS_COUNT_EMERALD from opponents.h and return as int."""
    with open(OPPONENTS_H, "r") as f:
        text = f.read()
    match = re.search(r'#define TRAINERS_COUNT_EMERALD\s+(\d+)', text)
    if not match:
        print(f"{clr('31', '✗ Could not find TRAINERS_COUNT_EMERALD in opponents.h')}")
        sys.exit(1)
    return int(match.group(1))

def get_max_trainer_count():
    """Read MAX_TRAINERS_COUNT_EMERALD from opponents.h and return as int."""
    with open(OPPONENTS_H, "r") as f:
        text = f.read()
    match = re.search(r'#define MAX_TRAINERS_COUNT_EMERALD\s+(\d+)', text)
    if not match:
        return None
    return int(match.group(1))

def check_duplicate(trainer_id):
    for path in [OPPONENTS_H, TRAINERS_PARTY]:
        if not os.path.exists(path):
            continue
        with open(path, "r") as f:
            if trainer_id in f.read():
                return True
    return False

def write_opponents_h(trainer_id, trainer_num):
    """Insert new #define before TRAINERS_COUNT_EMERALD and increment the count."""
    with open(OPPONENTS_H, "r") as f:
        text = f.read()

    # Build the new constant line, aligned to match existing formatting
    new_constant = f"#define {trainer_id:<36}{trainer_num}"

    # Insert before the TRAINERS_COUNT_EMERALD line
    count_pattern = re.compile(r'(#define TRAINERS_COUNT_EMERALD\s+)(\d+)')
    match = count_pattern.search(text)
    if not match:
        print(f"  {clr('31', '✗')} Could not find TRAINERS_COUNT_EMERALD in opponents.h")
        sys.exit(1)

    insert_pos = match.start()
    new_count = trainer_num + 1  # count must be one higher than highest index
    new_count_line = f"#define TRAINERS_COUNT_EMERALD     {new_count}"

    # Insert constant before the count line, replace the count line
    text = (
        text[:insert_pos]
        + new_constant + "\n"
        + new_count_line
        + text[insert_pos + len(match.group(0)):]
    )

    with open(OPPONENTS_H, "w") as f:
        f.write(text)

    print(f"  {clr('32', '✓')} Added {trainer_id} = {trainer_num} to {OPPONENTS_H}")
    print(f"  {clr('32', '✓')} Updated TRAINERS_COUNT_EMERALD to {new_count}")

# ── DATA COLLECTION ───────────────────────────────────────────────────────────

def collect_trainer_header(mode):
    data = {}
    data["trainer_id"] = ask(
        "Trainer constant (e.g. TRAINER_BEA_FUECOCO)",
        validate_identifier
    ).upper()
    data["name"]       = ask("Display name (e.g. Bea)")
    data["pic"]        = ask_choice("Trainer portrait", PICS)
    data["gender"]     = ask_choice("Gender", {"1": "Female", "2": "Male"})

    if mode == "basic":
        data["music"]         = data["gender"]
        data["trainer_class"] = "Pkmn Trainer 1"
        data["double"]        = False
        data["ai"]            = "Basic Trainer"
    else:
        data["music"]         = ask_choice("Encounter music", MUSIC)
        data["trainer_class"] = ask_choice("Trainer class", CLASSES)
        data["double"]        = ask_yn("Double battle?", default=False)
        data["ai"]            = ask_choice("AI difficulty", AI_FLAGS)

    data["party_size"] = int(ask("Number of Pokémon (1-6)", validate_party_size))
    return data

def collect_party(size, mode):
    party = []
    for i in range(size):
        print(f"\n  {clr('1;35', f'Pokémon {i+1} of {size}')}")
        mon = {}
        print(f"  {clr('36', 'Species — name only (e.g. Fuecoco) or full Showdown line:')}")
        print(f"  {clr('36', 'e.g. Alfred (Fuecoco) (M) @ Oran Berry')}")
        mon["species_line"] = ask("Species")
        mon["level"]        = ask("Level", validate_level, default="5")

        if mode == "basic":
            mon["ability"]       = None
            mon["nature"]        = None
            mon["ivs"]           = None
            mon["evs"]           = None
            mon["ball"]          = None
            mon["happiness"]     = None
            mon["shiny"]         = False
            mon["dynamax_level"] = None
            mon["gigantamax"]    = False
            mon["tera_type"]     = None
            mon["moves"]         = []
        elif mode == "medium":
            mon["ability"]       = None
            mon["nature"]        = None
            mon["ivs"]           = None
            mon["evs"]           = None
            mon["ball"]          = None
            mon["happiness"]     = None
            mon["shiny"]         = False
            mon["dynamax_level"] = None
            mon["gigantamax"]    = False
            mon["tera_type"]     = None
            mon["moves"]         = collect_moves()
        else:
            mon["ability"]    = ask_optional("Ability (e.g. Blaze)")
            mon["nature"]     = ask_optional("Nature (e.g. Timid)", validate_nature)
            if mon["nature"]:
                mon["nature"] = mon["nature"].capitalize()
            mon["ivs"]        = collect_stats("IVs", validate_iv,  default_val="31")
            mon["evs"]        = collect_stats("EVs", validate_ev,  default_val=None)
            mon["ball"]       = ask_optional("Ball (e.g. Poke Ball)")
            mon["happiness"]  = ask_optional("Happiness (1-255)", validate_happiness)
            mon["shiny"]      = ask_yn("Shiny?", default=False)
            dynamax           = ask_optional("Dynamax Level (0-10)", validate_dynamax)
            mon["dynamax_level"] = dynamax
            mon["gigantamax"] = ask_yn("Gigantamax?", default=False)
            mon["tera_type"]  = ask_optional("Tera Type (e.g. Fire)")
            mon["moves"]      = collect_moves()

        party.append(mon)
    return party

def collect_moves():
    print(f"  {clr('36', 'Moves — press enter to skip (blank = uses level-up moves):')}")
    moves = []
    for m in range(1, 5):
        mv = input(f"    Move {m}: ").strip()
        if mv:
            moves.append(mv)
    return moves

def collect_stats(label, validator, default_val):
    if default_val:
        print(f"  {clr('36', f'{label} (enter for {default_val}):')}")
    else:
        print(f"  {clr('36', f'{label} (enter to skip):')}")
    stat_names = ["HP", "Atk", "Def", "SpA", "SpD", "Spe"]
    result = {}
    any_set = False
    for stat in stat_names:
        if default_val is not None:
            val = ask(f"    {stat}", validator, default=default_val)
            result[stat] = int(val)
            any_set = True
        else:
            val = ask_optional(f"    {stat}", validator)
            if val is not None:
                result[stat] = int(val)
                any_set = True
    return result if any_set else None

# ── ENTRY GENERATION ──────────────────────────────────────────────────────────

def gen_entry(data):
    lines = []
    lines.append(f"=== {data['trainer_id']} ===")
    lines.append(f"Name: {data['name']}")
    lines.append(f"Class: {data['trainer_class']}")
    lines.append(f"Pic: {data['pic']}")
    lines.append(f"Gender: {data['gender']}")
    lines.append(f"Music: {data['music']}")
    lines.append(f"Double Battle: {'Yes' if data['double'] else 'No'}")
    lines.append(f"AI: {data['ai']}")

    for mon in data["party"]:
        lines.append("")
        lines.append(mon["species_line"])
        lines.append(f"Level: {mon['level']}")
        if mon.get("ability"):
            lines.append(f"Ability: {mon['ability']}")
        if mon.get("nature"):
            lines.append(f"Nature: {mon['nature']}")
        if mon.get("ivs"):
            parts = [f"{v} {k}" for k, v in mon["ivs"].items()]
            lines.append(f"IVs: {' / '.join(parts)}")
        if mon.get("evs"):
            parts = [f"{v} {k}" for k, v in mon["evs"].items()]
            lines.append(f"EVs: {' / '.join(parts)}")
        if mon.get("ball"):
            lines.append(f"Ball: {mon['ball']}")
        if mon.get("happiness"):
            lines.append(f"Happiness: {mon['happiness']}")
        if mon.get("shiny"):
            lines.append("Shiny: Yes")
        if mon.get("dynamax_level") is not None:
            lines.append(f"Dynamax Level: {mon['dynamax_level']}")
        if mon.get("gigantamax"):
            lines.append("Gigantamax: Yes")
        if mon.get("tera_type"):
            lines.append(f"Tera Type: {mon['tera_type']}")
        for move in mon.get("moves", []):
            lines.append(f"- {move}")

    return "\n".join(lines)

# ── PREVIEW ───────────────────────────────────────────────────────────────────

def preview(data, trainer_num, max_count):
    header("Preview — What will be written")

    slots_remaining = max_count - trainer_num if max_count else "unknown"
    color = '31' if isinstance(slots_remaining, int) and slots_remaining <= 3 else '33' if isinstance(slots_remaining, int) and slots_remaining <= 7 else '32'
    print(f"\n  {clr('36', 'opponents.h:')}")
    print(f"    #define {data['trainer_id']:<36}{trainer_num}")
    print(f"    TRAINERS_COUNT_EMERALD → {trainer_num}")
    print(f"    Slots remaining after this: {clr(color, str(slots_remaining))}")

    print(f"\n  {clr('36', 'trainers.party:')}")
    for line in gen_entry(data).split("\n"):
        print(f"    {line}")

# ── FILE WRITERS ──────────────────────────────────────────────────────────────

def write_party(data):
    entry = gen_entry(data)
    with open(TRAINERS_PARTY, "r") as f:
        text = f.read()
    with open(TRAINERS_PARTY, "w") as f:
        f.write(text.rstrip() + "\n\n" + entry + "\n")
    print(f"  {clr('32', '✓')} Written to {TRAINERS_PARTY}")

# ── MAIN ──────────────────────────────────────────────────────────────────────

def main():
    print(clr("1;32", "\n╔══════════════════════════════╗"))
    print(clr("1;32",   "║   Paradoxia Trainer Tool v5  ║"))
    print(clr("1;32",   "╚══════════════════════════════╝"))

    if not os.path.exists(TRAINERS_PARTY):
        print(f"\n{clr('31', '✗ Run this from your pokemon-paradoxia root directory.')}")
        sys.exit(1)

    if not os.path.exists(OPPONENTS_H):
        print(f"\n{clr('31', f'✗ Could not find {OPPONENTS_H}')}")
        sys.exit(1)

    # Read current trainer count
    current_count = get_current_trainer_count()
    max_count     = get_max_trainer_count()
    trainer_num   = current_count + 1

    # Warn if getting close to limit
    if max_count:
        slots_left = max_count - trainer_num
        if slots_left <= 0:
            print(f"\n{clr('31', '✗ Trainer flag space is full!')}")
            print(f"  MAX_TRAINERS_COUNT_EMERALD = {max_count}")
            print(f"  You must expand flag space in constants/flags.h before adding more trainers.")
            sys.exit(1)
        elif slots_left <= 3:
            print(f"\n{clr('31', f'⚠ WARNING: Only {slots_left} trainer slot(s) remaining before overflow!')}")
            print(f"  Consider expanding MAX_TRAINERS_COUNT_EMERALD soon.")

    header("Mode")
    mode = ask_choice("How much detail?", {
        "1": "Basic  — name, pic, species, level (uses level-up moves)",
        "2": "Medium — adds moves, class, music",
        "3": "Full   — everything: IVs, EVs, nature, ability, shiny, tera, etc.",
    })

    if "Basic" in mode:
        data = collect_trainer_header("basic")
        data["party"] = collect_party(data["party_size"], mode="basic")
    elif "Medium" in mode:
        data = collect_trainer_header("medium")
        data["party"] = collect_party(data["party_size"], mode="medium")
    else:
        data = collect_trainer_header("full")
        data["party"] = collect_party(data["party_size"], mode="full")

    if check_duplicate(data["trainer_id"]):
        print(f"\n  {clr('31', '⚠ Warning:')} {data['trainer_id']} already exists in your files.")
        if not ask_yn("Continue anyway?", default=False):
            print(f"  {clr('33', 'Cancelled.')}")
            sys.exit(0)

    preview(data, trainer_num, max_count)
    print()

    if not ask_yn("Write to both files?"):
        print(f"\n  {clr('33', 'Cancelled. No files written.')}")
        sys.exit(0)

    print()
    write_opponents_h(data["trainer_id"], trainer_num)
    write_party(data)
    print(f"\n{clr('1;32', '  Done! Run make to compile.')}\n")

if __name__ == "__main__":
    main()
