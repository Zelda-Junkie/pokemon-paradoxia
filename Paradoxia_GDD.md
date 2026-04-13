# POKEMON: PARADOXIA
## Game Design Document
### Session 13 — Full Design Bible
#### April 2026

*The living game design document for Pokemon: Paradoxia — a ROM hack built on Pokemon Emerald using the pokeemerald Expansion base. Updated at the end of every design session.*

---

## Session 10 Changes
- Bramblewood build started — using Littleroot Town as base map in Porymap
- bramblewood branch created off main for isolated development
- Build order confirmed: strip Littleroot → rebuild as Bramblewood

## Session 11 Changes
- Full GBA toolchain established on Mac — xPack arm-none-eabi-gcc 13.3.1 installed at ~/arm-none-eabi-gcc, PATH set in ~/.zshrc
- libpng and pkg-config installed via Homebrew — resolves gbagfx build tool errors
- First successful make — pokeemerald.gba compiles clean
- Bramblewood loads in mGBA — vanilla Littleroot data still in place, tileset and layout need replacing next session
- Opening sequence is vanilla Emerald truck intro — needs replacing
- Doors not wired, NPCs not placed — Porymap changes reverted during debugging to restore clean compile
- Committed as 'Bramblewood: first working build, map loads in mGBA' on bramblewood branch
- Priority 8 from Next Steps (get a compilable clean build running in mGBA) — COMPLETE
- Opening sequence scripted — S.S. Enna arrival written in full (see Section 8)

## Session 12 Changes
- Warp system debugged — dest_warp_id 'Bramblewood Lab' bug traced to map.json, fixed directly in JSON source
- All Bramblewood door warps wired — lab entrance, house entrances, lab interior — Priority 3 COMPLETE
- NPC crash identified — vanilla Littleroot NPCs (Mom, Rival, Birch) have NULL scripts; left in place to avoid compile breakage, flagged for removal when opening sequence is written
- S.S. Enna Deck map created in Porymap — ship deck layout with ocean surround, pointed bow, dock at stern
- Bramblewood beach/dock approach map created — Route 109 style, connects to Bramblewood exterior
- SSEnnaDeck added to map_groups.json and map_groups.h as MAP_SSENNA_DECK (group 75, index 1)
- VAR_ENNA_INTRO_STATE added to vars.h at 0x40F7
- Birch intro speech replaced — CB2_NewGame now routes to S.S. Enna deck via SetWarpDestination + WarpIntoMap
- ExecuteTruckSequence replaced with FieldCB_WarpExitFadeFromBlack in CB2_NewGame
- Custom gender select screen written (src/paradoxia_gender_select.c) — black background, white text, BOY/GIRL side by side, left/right navigation, no Birch speech infrastructure
- Gender select fires on new game instead of Birch speech — wired via CreateTask in main_menu.c
- Bea and Captain placed on SSEnnaDeck map — LOCALID_ENNA_BEA (object 1, x5 y10), LOCALID_ENNA_CAPTAIN (object 2, x5 y7)
- Opening deck script written in SSEnnaDeck/scripts.pory — Bea/Captain dialogue from Section 8, fires on VAR_ENNA_INTRO_STATE == 0
- Naming screen deferred to Doc & Doc's lab as per GDD — Bea references player name naturally in dialogue
- Priority 4 (fix opening sequence) — IN PROGRESS

## Session 13 Changes
- Full opening sequence scripted and functional across five maps: SSEnnaDeck → Route109 (dock) → Transition → LittlerootTown (Bramblewood exterior) → LittlerootTown_ProfessorBirchsLab
- VAR_ENNA_INTRO_STATE chain: 21 (new game) → 22 (deck done) → 23 (dock done) → 24 (transition done) → 25 (Bramblewood done) → 26 (lab done)
- VAR_ENNA_INTRO_STATE initialised to 21 via setvar in data/scripts/new_game.inc at end of EventScript_ResetAllMapFlags
- Gender select rebuilt — vanilla Birch speech sprite infrastructure retained, Task_NewGameBirchSpeech_Init now skips directly to Task_NewGameBirchSpeech_StartPlayerFadeIn, bypassing all Birch dialogue. Gender select goes straight to CB2_NewGame on confirmation, no naming screen
- Trainer sprites centered and scaled up 2x using ST_OAM_AFFINE_NORMAL + AllocOamMatrix + SetSpriteRotScale
- Naming screen wired to Bea's dialogue on the S.S. Enna deck — Special_ParadoxiaDoNamingScreen added to src/paradoxia.c, registered in data/specials.inc, returns via CB2_ReturnToFieldContinueScriptPlayMapMusic
- All custom flags defined with hardcoded hex values in include/constants/flags.h (0x961–0x969) to bypass assembler modulo limitation: FLAG_HIDE_DOCK_DOC_B/A/BEA, FLAG_HIDE_LITTLEROOT_DOC_B/A/BEA, FLAG_HIDE_TRANSITION_DOC_B/A/BEA
- FLAGS_COUNT updated to 0x96A
- Custom LOCALID constants centralised in include/constants/paradoxia_localids.h, included via include/constants/global.h
- Vanilla Route109 and LittlerootTown_ProfessorBirchsLab NPC stubs added to prevent linker errors
- Vanilla DewfordTown Briney text stubs added to Route109/scripts.pory
- LOCALID_ROUTE109_BRINEY and LOCALID_ROUTE109_BOAT added to paradoxia_localids.h
- Lab scene scripted — Doc B welcome, ChooseStarter special (Gen 9 starters: Sprigatito/Fuecoco/Quaxly), type-advantage starter given to Bea without looking, Bea challenges player to battle
- starter_choose.c updated — GRASS_STARTER = SPECIES_SPRIGATITO, FIRE_STARTER = SPECIES_FUECOCO, WATER_STARTER = SPECIES_QUAXLY
- src/paradoxia_gender_select.c retained as custom gender select fallback infrastructure
- battle_anim.h included in main_menu.c for SetSpriteRotScale support
- Plugrass added — cry registered in include/constants/cries.h as CRY_PLUGRASS, full implementation added. Sprite and in-game functionality untested as of session end
- Transition map warp scripted — MAP_SCRIPT_ON_LOAD fires immediately, warps to LittlerootTown at 11,19
- LibreSprite could not be opened on macOS 26 due to code signature restrictions. Aseprite compiled from source (aseprite-m124 + Skia m124-08a5439a6b, arm64) and installed at ~/Desktop/aseprite-build/aseprite/build/bin/aseprite.app
- Shiny palette generator tool built as an interactive artifact — takes JASC-PAL input, outputs hue-shifted shiny palette with live swatch preview

---

## 1. Game Overview

| Principle | Description |
|---|---|
| Absurdist Humor | Every area and NPC has internal logic that makes no sense to the outside world. |
| Mechanics as Jokes | Game mechanics used in unexpected ways to create confusion rather than difficulty. |
| Rewarding Curiosity | Players who explore find the solutions. Players who rush get punished by bewilderment. |
| Internal Logic Always | Every weird thing in Paradoxia is a symptom of the Verit/Taesim conflict. Nothing is random. |
| Genuine Heart | The comedy is the surface. Underneath is a story about order, feeling, and what meaning looks like. |

---

## 2. Full Story

### Origin
Long before recorded history, Aumnis controlled Paradoxia — managing Verit and Taesim, and through them the balance of logic and feeling across the region. The people of Paradoxia revolted. The control was genuine and the revolt was justified. Aumnis was sealed in sleep by a collective effort, the most notable figure of which was an ancestor of Aldric.

The problem: Verit and Taesim were instruments of Aumnis's control. Without their anchor, they began to conflict. Verit catalogued. Taesim reacted. Neither could conceive of the other's approach. Their conflict destabilised the region.

Aumnis, sealed but not silenced, snored. The snore partially woke Taesim. Taesim's instinctive reaction caused a massive earthquake. Ostenvale separated from the main island. The dock remained. The plaque explaining any of this was split in half. The underwater portion has never been recovered.

### Downstream Effects
Zemekis MFG was founded in response to the destabilisation. Nobody recorded why. The institutional knowledge was lost so gradually that nobody noticed. The machines are making something. Nobody knows what MFG stands for.

Team Proper was founded by Ashley in response to the same destabilisation. Ashley is aware something ancient went wrong. She does not know what. She built rules because rules felt like doing something. She got lost in them.

Verit retreated to the archive in Dunhallow manor and has been cataloguing every anomaly since the conflict began. The solution is in there somewhere, stored in easily breakable crystals on a table. Verit is a cat. The crystals have been knocked off the table. The solution is in fragments on the floor.

Taesim is in the Ironstead peaks above the mine line. The miners do not go up anymore. Taesim has been reacting to the initial startle for the entire duration of the conflict. It cannot conceive of consequences. The scorch marks go back years.

Aldric has been on Ostenvale his entire life. He knows his lineage is tied to whoever sealed Aumnis. He does not know the context. He has been waiting. He does not know for what.

### Story Arc

| Act | Span | Story |
|---|---|---|
| Act 1 | Bramblewood → Gym 4 | Arrive by accident on the S.S. Enna. Doc & Doc at the dock. Bramblewood. Starters. Route 1. |
| Act 2 | Gym 5 → Gym 7 | Team Proper reaches peak absurdity then pivots. Ashley's reveal in the small room off the Ashborne gym. |
| Act 3 | Gym 8 → Champion | Path to Ostenvale opens. Taesim confronted at the peaks. Aumnis found. Bea appears one final time. |
| Ending | Post-credits | Aumnis wakes. Asks why nobody just talked to it. Flies to the heavens. Watches peacefully. |

---

## 3. Region & Locations

### 3a. Gym Towns

| Town | Gym Leader | Type | Vibe |
|---|---|---|---|
| Bramblewood | — | — | Starter town. Doc & Doc's lab. Quiet. Nothing obviously wrong yet. |
| Coppergate | Martin | Fighting | Everyone vaguely apologetic. The swamp is visible next door from the main road. |
| Tidewell | Admiral Admiral | Water | Real coastal town. Lighthouse gym. Generational debate outside. |
| Greenbarrow | Fernanda | Grass | Busy market town. Fernanda's garden centre is one of many stalls. |
| Coppergate Swamp | Austen | Poison | The swamp IS the gym. Blind fog maze. Waders required. Austen on a dock. |
| Ashborne | Ashley | Fire | Industrial. Forges, smiths. The maze gym is just another building. |
| Dunhallow | Hobb | Ghost | Old and faded. Grand buildings that used to mean something. Verit is in the archive. |
| Ironstead | Aldous | Steel* | High mountain. Cold. Mining history. Taesim is above the mine line. |
| Whitford | Doc & Doc | Fairy | Grand and ceremonial. Lots of pomp. Then it's Doc & Doc. |

### 3b. Pit Stop Towns

| Town | Position | Notable |
|---|---|---|
| Pebble Creek | Bramblewood → Coppergate | Two-tile bridge blocked by a full picnic. The Sandwich Person. The beginning of everything. |
| Passwick | Coppergate → Tidewell | Pit stop on the northern loop. Tunnel entrance visible but inaccessible. Town is obsessed with the tunnel. |
| Restmere | Tidewell → Greenbarrow | Inhabitants have an insanely short memory. Everything runs on habit and muscle memory. |
| Midfare | Inside the mountain / tunnel hub | Transit hub. Everyone passing through, nobody staying. Tunnel arms to Gen 4/5, Gen 6/7, Gen 8/9. |
| Cableville | Base of cable car, loop bottom | Town exists because the cable car needed a base. Full of hikers in perpetual transit limbo. |

### 3c. Ostenvale (Island)
Reached by boat from Whitford. Separated from the main island by the ancient earthquake caused by Taesim's startle. Plaque at the dock trails off mid-sentence — the rest is underwater. Home of the Elite Four and Champion Aldric, a descendant of whoever led the revolt against Aumnis. Has been waiting alone for years. Steps aside after defeat. Leaves Ostenvale for the first time in years after the ending.

---

## 4. The Underground
The underground tunnel system is accessed through Midfare. A network of caverns dug by wild Pokemon engaged in an ongoing battle with each other. This is how they dig. Nobody commissioned it.

| Arm | Direction | Pokemon |
|---|---|---|
| Gen 4/5 arm | Northwest — exits near Coppergate / Passwick | Generation IV and V Pokemon |
| Gen 6/7 arm | East — exits near Ashborne / Greenbarrow | Generation VI and VII Pokemon |
| Gen 8/9 arm | South — exits near Dunhallow / Cableville | Generation VIII and IX Pokemon. Gen 9 availability confirmed. |

The Gen 8/9 arm is dug by a Zemekis MFG machine during a late-game cutscene in Passwick. The machine arrives, two MFGs operate it, the tunnel opens. The town's theorists watch in silence.

---

## 5. Zemekis MFG
Zemekis MFG was founded in response to the Verit/Taesim conflict. Nobody recorded why. The institutional knowledge was lost so gradually that nobody noticed it was gone. The machines are making something. Nobody asks what MFG stands for because it has been on the hats and shirts for too long. Everyone assumes everyone else knows.

**Key Facts**
- Located in the north, adjacent to the swamp. The swamp is their water supply. Their water waste is pure fresh drinking water. Coppergate gets its drinking water from the Zemekis waste outlet. There is a civic plaque thanking them. Zemekis did not put up the plaque.
- Every employee is named MFG. Name tags say MFG. The CEO's office has three MFGs at the same desk. They are in a meeting.
- The building is full of machines. Every machine interaction: 'A machine is making something. Better not touch it!' One machine says something slightly different. It means nothing.
- Team Proper has issued 17 formal cease and desist letters. Zemekis has framed all 17. They are on the lobby wall.
- Music: Stock Team Aqua Hideout theme. It plays in the break room. Someone is microwaving MFG's lunch.
- The building offers a full heal at the midpoint of the swamp maze, like the grandmother in the Safari Zone.
- A new MFG employee has a blank 'HELLO MY NAME IS' sticker. They quietly ask the player what MFG stands for. The player does not know either.
- The 'RE: The Incident' memo has been on the break room wall for decades. Nobody knows what the incident was. New MFGs read it and comply.

---

## 6. Team Proper — Full Story Beat Map
Team Proper are not villains. They are a genuine — if misguided — attempt to stabilise Paradoxia against the deteriorating effects of the Verit/Taesim conflict.

| # | Location | Beat | Tone |
|---|---|---|---|
| 1 | Route 1 | A single grunt issues a formal warning for traveling without a trainer's transit permit. Hands over a small form. | Mundane. Mildly absurd. |
| 2 | Pebble Creek | A grunt attempts to cite the Sandwich Person for illegal picnicking. The Sandwich Person is not moving. Player battles the grunt. | Comic. Retroactively important. |
| 3 | Route to Tidewell | Entire route cordoned with yellow caution tape. Two grunts argue about jurisdiction. Player ducks under the tape. | Escalation. Toothless bureaucracy. |
| 4 | Tidewell | Three grunts attempt to formally arrest Admiral Admiral for operating an unlicensed naval fleet. He outrages them by being reasonable. | Funniest beat. |
| 5 | Greenbarrow | Two grunts attempt to shut down Fernanda's garden centre. Fernanda is watering plants. The paperwork is not in order. | Warm comic beat. |
| 6 | Route to Ashborne | More grunts, moving faster, talking less. Forms filled with urgency. A grunt drops their clipboard and does not go back for it. | Tonal shift. Comedy starts to curdle. |
| 7 | Ashborne — Ashley reveal | Ashley follows the player out of the gym. A small side room. She takes off her jacket. Tells the truth. | The pivot. Quiet and earned. |
| 8 | Route to Dunhallow | Full blockade. Sign: 'ROUTE 7 TEMPORARILY CLOSED — TEMPORALLY UNSTABLE ZONE.' | Retroactive reframing. |
| 9 | Team Proper HQ | Filing cabinets in every room. Several destroyed — claw marks, scorch damage, one fused to the wall. Ashley finds the founding document. | Emotional peak for Ashley. |
| 10 | Post-game | Ashley contacts every grunt individually. They hand in their lanyards one by one. | Quiet ending. |
| 10a | Midfare (post-game) | Ashley visits Midfare. Signs the form the waiting grunt needed. Says nothing about Team Proper being disbanded. | Small earned coda. |
| 10b | Cableville (post-game) | Ashley rescinds the round-trip cable car mandate. One hiker thanks her anyway. | Part of the post-game undoing montage. |

---

## 7. Ashley's Reveal — Full Script

*The small room off the Ashborne gym entrance. No grunts. No music shift. Ashley has her back to you when you enter.*

> Ashley: "I know what you're thinking."
> Ashley: "You're thinking: the gym leader is the villain."
> Ashley: "I'm not the villain."
> Ashley: "I'm not sure there is one."
> Ashley: "Paradoxia wasn't always like this."
> Ashley: "I remember when things made sense. When the routes went where they were supposed to go."
> Ashley: "When Hobb was alive."
> Ashley: "When Admiral Admiral's navy... okay, that was always like that."
> Ashley: "I built Team Proper because someone had to try."
> Ashley: "The rules were supposed to hold things together while we figured out the cause."
> Ashley: "And then I built the maze and I got lost in it and I just..."
> Ashley: "I kept making more rules. More forms. More grunts."
> Ashley: "Because that felt like doing something."
> Ashley: "It wasn't."
> Ashley: "Something is wrong with this region at a level that clipboards can't fix."
> Ashley: "I think you know that."
> Ashley: "I think that's why you're here."

*[She picks up her gym leader's jacket from the chair. Folds it.]*

> Ashley: "I'd like to help, if you'll let me."
> Ashley: "I know where to start."

*No battle here. Ashley is not fought as a villain. The gym battle already happened. This is just a person in a small room telling the truth for the first time in a while.*

---

## 8. Opening Sequence — Full Script

### New Game Flow
1. Title screen → New Game selected
2. Vanilla Birch speech infrastructure fires, but skips directly to gender select (no Birch dialogue, no Lotad)
3. Player chooses BOY or GIRL — trainer sprite shown centered, scaled 2x
4. Game initialises via CB2_NewGame → warps to SSEnnaDeck at 4,10
5. VAR_ENNA_INTRO_STATE is set to 21 during new game initialisation

### S.S. Enna — Deck
*Open on ocean. The S.S. Enna cuts through calm water. You're standing at the railing. Bea is beside you, looking out.*

> Bea: "I just love the sea breeze! It's so peaceful, and a nice change from the hustle and bustle of Lumiose City!"
> Bea: "I just love Alolan Pokemon, which is why I'm here! What's your name, anyways?"

*[Naming screen fires — Special_ParadoxiaDoNamingScreen, returns via CB2_ReturnToFieldContinueScriptPlayMapMusic]*

> Bea: "Nice to meet you, {PLAYER}! My name is Bea. I'm so excited to visit Alola!"
> Bea: "The sandy beaches, gorgeous sunsets, and the warm climate! I can't wait!"
> Bea: "How long will it take to get there?"

*[Captain walks down toward the player.]*

> Captain: "We should get there in about tw-…Hm."
> Bea: "Was that a good hm or a bad hm?"
> Captain: "It's an 'there is an island here' hm."
> Bea: "Is that our island?"
> Captain: "No."
> Bea: "Then why do we care? We passed plenty of islands on the way."
> Captain: "There isn't supposed to be an island here. Either way, we need to check it out."
> Captain: "We're running low on fuel. We need to stock up on supplies."

*[Screen fades to black. Warps to Route109 dock.]*

### S.S. Enna — Dock, Paradoxia
*Doc A is smiling apologetically. Doc B is holding a sign. The sign says a name. It is not your name. It is not Bea's name either.*

> Doc B: "There they are! Right on time!"
> Doc A: "The boat was going to Alola."
> Doc B: "And yet!"
> Doc A: "I'm so sorry about... this. And the sign."
> Doc B: "The sign is correct."
> Doc A: "The sign has the wrong name."
> Doc B: "I'm confident about the sign."
> Captain: "Excuse me. Where is this?"
> Doc B: "Paradoxia!"
> Captain: "That's not on my charts."
> Doc B: "No."
> Captain: "...Is it on any charts?"
> Doc B: "Probably not!"
> Captain: "I'm going to need a minute."

*[Doc B leads the group north. Player, Bea, and Doc A follow in single file. Warps through Transition map to Bramblewood exterior.]*

### Bramblewood — Exterior
> Doc A: "Thank you for being flexible about this."
> Doc A: "Paradoxia has a way of... intervening. You'll see."
> Bea: "I like them. The one in front hasn't looked back once. I respect that."

*[Group walks to the lab. Warps to lab interior.]*

### Doc & Doc's Lab
> Doc B: "Welcome!"
> Doc B: "Now then! Choose your partner!"

*[ChooseStarter special fires — Sprigatito (Grass), Fuecoco (Fire), Quaxly (Water).]*
*[Doc B immediately gives Bea the type advantage starter without looking. Doc A closes his eyes briefly.]*

> Doc B: "And for you — Bea! Perfect."
> Bea: "Oh. I really like its face."
> Doc A: "Good luck." *[He means it.]*

*[Bea challenges player to battle. Her starter has the type advantage.]*

> Bea: "Yours did really well in there! Mine seemed very confident about something. I'm not sure what."
> Bea: "I heard there's a good sandwich place up ahead. See you there!"

### Route 1
*Doc A and Doc B attempt to explain catching Pokemon simultaneously. This goes poorly. They go back inside. Bea appears and challenges to a battle. Her starter has the type advantage. She has no strategic awareness of this.*

### Pebble Creek
*A picnic is set up directly in the centre of the bridge. Full spread. The Sandwich Person sits behind it, completely still, facing forward. A Team Proper grunt stands beside it, mid-citation.*

> Grunt: "Under Paradoxia Municipal Code section 4, subsection 7, paragraph—"
> *[The Sandwich Person does not move.]*
> Grunt: [notices player] "Halt! Are you aware that travel through Paradoxia requires a valid trainer's transit permit?"

*[Battle. After battle, the grunt steps aside, turns back to the Sandwich Person. The bridge is clear. The picnic is still there. You walk around it.]*

> Bea: "Was that a permit thing? I didn't have a permit either but they seemed very focused on you."
> Bea: "I wonder if the sandwich is good."
> *[She walks on.]*

---

## 9. The Eight Gyms of Paradoxia

### Gym 1 — Martin (Fighting) — Coppergate
6 Lv.30 Machamp, No Guard + OHKO. The fight is a wall. Solution: Weezing (Neutralizing Gas) found in the accessible edge of the swamp before receiving waders. Wobbuffet hidden in Doc & Doc's PC. Doc A takes it back quietly after the battle. Says 'thank you.' It's gone.

| Pokemon | Level |
|---|---|
| 6x Machamp | Lv.30 |

*Tone: Martin apologises before, during, and after. The gag fight works in both directions.*

### Gym 2 — Admiral Admiral (Water) — Tidewell
Lighthouse gym — move when the beam isn't on you. Player arrives without knowing this.

| Pokemon | Level |
|---|---|
| Pelipper | 18 |
| Mantine | 19 |
| Lapras | 20 |
| Kingdra | 21 |
| Commodrift (ace) | 22 |

*Commodrift: Water/Ghost — an admiral's coat and hat with nothing inside. Has been giving orders for years. Occasionally correct by accident.*

### Gym 3 — Fernanda (Grass) — Greenbarrow
Garden centre stall. Watering plants during battle. Sleep Talk + Snore team strategy.

| Pokemon | Level |
|---|---|
| Eldegoss | 24 |
| Comfey | 25 |
| Lilligant | 26 |
| Tsareena | 27 |
| Bloomhearst (ace) | 28 |

*Bloomhearst: Grass/Psychic — a massive sunflower that has achieved enlightenment. Fernanda waters it mid-battle. It isn't a strategy. She just thinks it looks thirsty.*

### Gym 4 — Austen (Poison) — Coppergate Swamp
The swamp IS the gym. Blind fog maze. Waders from Bea at the entrance. Dry run: Weezing available in the pre-wader accessible edge.

| Pokemon | Level |
|---|---|
| Grafaiai | 30 |
| Dragalge | 31 |
| Toxapex | 32 |
| Crobat | 33 |
| Murkcalm (ace) | 35 |

*Murkcalm: Poison/Water — looks exactly like still swamp water. Is not still swamp water. Has been waiting a very specific amount of time.*

### Gym 5 — Ashley (Fire) — Ashborne
Built the maze. Forgot the solution. Found in a dead end. Secretly Team Proper's boss. Reveal happens after the gym battle in the small room off the entrance.

| Pokemon | Level |
|---|---|
| Torkoal | 37 |
| Houndoom | 38 |
| Armarouge | 39 |
| Chandelure | 41 |
| Formcinder (ace) | 43 |

*Formcinder: Fire/Steel — compacted paperwork on fire for an indeterminate amount of time. Neither the fire nor the paperwork is changing. Ashley found it in a dead end.*

### Gym 6 — Hobb (Ghost) — Dunhallow
Died at some point. Kept going. Same speech every challenger. Hand phases through wall during handshake. Doesn't notice.

| Pokemon | Level |
|---|---|
| Drifblim | 40 |
| Trevenant | 41 |
| Runerigus | 42 |
| Cofagrigus | 43 |
| Cairn (ace) | 44 |

*Cairn: Rock/Ghost — a burial marker that got up. Doesn't know why. Keeps walking.*

### Gym 7 — Aldous (Steel*/Ground) — Ironstead
*Thinks it's Ground. All Ground team. Sign says Steel. GROUND badge. Nobody corrects him.

| Pokemon | Level |
|---|---|
| Dugtrio | 46 |
| Excadrill | 47 |
| Garchomp | 49 |
| Mudsdale | 50 |
| Orefield (ace) | 52 |

*Orefield: Ground/Electric — Aldous thinks it's Ground. The sign says Steel. It's actually Ground/Electric. Nobody is right, including Orefield.*

### Gym 8 — Doc & Doc (Fairy) — Whitford
Doubles. Catastrophic anti-synergy. Doc B names them all wrong. Doc A can't keep up with corrections.

| Pokemon | Level | Note |
|---|---|---|
| Tapu Koko / 'Tacky Koko' | — | Electric Terrain — immediately overwritten |
| Tapu Fini / 'Fifi' | — | Misty Terrain — always wins terrain fight |
| Tapu Bulu / 'Mr Blue' | — | Grassy Terrain — heals opponent too |
| Ninetales-A / 'Eightails' | — | Drought |
| Pelipper / 'Pelican' | — | Drizzle — not even Fairy type |
| Sylveon / 'Ribbon' | — | wants Misty Terrain, will never see it |
| Whimsoveil / '???' | 58 | ace — cancels last move |

*Whimsoveil: Fairy/Normal — ability actively cancels whatever the last move did. Doc B named it something wrong. Doc A has stopped correcting this one specifically. NOTE: Confirm Pelipper Drizzle availability in pokeemerald Expansion.*

---

## 10. The Legendaries of Paradoxia

| Name | Role | Type | Design / Flaw |
|---|---|---|---|
| Aumnis | Box legendary | Bug/Dragon | Ancient bird. Vast wingspan. Iridescent — crystalline from one angle, warm from another. Was controlling the region. |
| Verit | Minor legendary | Psychic/Steel | Crystalline cat. Geometric, precise. Moves with total deliberateness. Has catalogued every anomaly. |
| Taesim | Minor legendary | Fire/Fighting | Raw dog. Massive, warm, always moving. Destroyed Team Proper's filing cabinets. Has been reacting to the initial startle. |

### Finding Verit & Taesim

| Legendary | Location | What They're Doing | Ashley's Role |
|---|---|---|---|
| Verit | Dunhallow — deep in the archive within the manor. | Cataloguing every anomaly since the conflict began. The solution is filed in crystals on a table. The crystals have been knocked off. | Has been trying to reason with Verit for weeks. Finally gives up and helps the player piece fragments together. |
| Taesim | Ironstead peaks — above the mine line. | Reacting. To what exactly is unclear. Everything, probably. The scorch marks go back years. | Has not attempted to approach Taesim. 'I sent a grunt once.' |

---

## 11. Elite Four & Champion — Ostenvale

### Vale — Elite Four 1
Type: Mixed | Team: TBD

Monotone questions with no punctuation. Post-battle: 'You won. Did you enjoy that.' Asks questions that have no obvious answer. Never waits for a response. Leaves before the player can say anything.

### The Coat — Elite Four 2 (Ghost)
All major Ghost type Elite Four members in one very tall coat. Agatha, Phoebe, Shauntal, Acerola — all in there somewhere. They rotate personnel between turns. Nobody confirms how many.

| Pokemon | Level |
|---|---|
| Gengar | 62 |
| Chandelure | 62 |
| Palossand | 62 |
| Dusknoir | 63 |
| Froslass | 63 |
| Flutter Mane (ace) | 65 |

*Flutter Mane: Ghost/Fairy — ancient, wrong, extremely powerful. The coat did not expect this either. Post-battle: a muffled argument can be heard from inside the coat. It exits.*

### The Sandwich Person — Elite Four 3
Type: Mixed | Team: TBD — should reflect seven months of dedicated preparation. Whatever was eaten during that preparation is probably relevant. Seven months of training. Long speech. Mostly about the sandwich. The battle is almost beside the point. The sandwich is never explained.

### Pip — Elite Four 4
Small child. Speaks like a small child. Has Wolfe Glick's EUIC 2025 championship roster. Nobody will elaborate on how Pip has this team.

| Pokemon | Level | Item / Ability |
|---|---|---|
| Koraidon | 72 | Life Orb / Orichalcum Pulse |
| Amoonguss | 72 | Mental Herb / Regenerator |
| Incineroar | 72 | Safety Goggles / Intimidate |
| Scream Tail | 72 | Booster Energy / Protosynthesis |
| Flutter Mane | 72 | Focus Sash / Protosynthesis |
| Gothitelle | 72 | Leftovers / Shadow Tag |

*Core: Scream Tail uses Perish Song; Gothitelle's Shadow Tag prevents switching. Gen 9 availability confirmed. Koraidon in trainer slot confirmed working.*

### Aldric — Champion
Descendant of whoever led the revolt against Aumnis. Has been on Ostenvale his entire life. Knows his lineage is significant. Does not know why. Has been waiting alone for years.

Team: TBD — Balanced, deliberate, feels like a test not an obstacle. Should reflect someone who has had nothing but time to prepare and no information about what they were preparing for.

Post-battle: Steps aside. Leaves Ostenvale for the first time in years. Doesn't make a big deal of it.

---

## 12. Full Cast

| Role | Name | Location | Core Concept |
|---|---|---|---|
| Professors | Doc A & Doc B | Bramblewood | Doc A is kind, apologetic, aware of everything, powerless to stop it. Doc B is confident about everything, wrong about most things. |
| Rival | Bea | Everywhere | Completely normal. Polite. Supportive. Accidentally chose the type advantage starter. Has no idea. |
| Champion | Aldric | Ostenvale | Descendant of whoever led the revolt against Aumnis. Waiting alone for years. Leaves for the first time after the ending. |
| Gym 1 | Martin | Coppergate | Fighting. 6 Lv.30 Machamp, No Guard + OHKO. Apologises before, during, and after. |
| Gym 2 | Admiral Admiral | Tidewell | Water. Naval admiral of a nonexistent navy. Lighthouse gym. Does not recognise Team Proper's authority. |
| Gym 3 | Fernanda | Greenbarrow | Grass. Garden centre stall. Watering plants during battle. |
| Gym 4 | Austen | Coppergate Swamp | Poison. The swamp IS the gym. Blind fog maze. Waders from Bea. |
| Gym 5 / Boss | Ashley | Ashborne | Fire. Built the maze. Got lost. Founded Team Proper. Got lost again. Tells the truth in a small room. |
| Gym 6 | Hobb | Dunhallow | Ghost. Died at some point. Kept going. Same speech every challenger. Hand phases through wall during handshake. |
| Gym 7 | Aldous | Ironstead | Officially Steel. He thinks it's Ground. All Ground team. Sign says Steel. Nobody corrects him. |
| Gym 8 | Doc & Doc | Whitford | Fairy. Doubles. Catastrophic anti-synergy. Doc B names them all wrong. |
| Elite 1 | Vale | Ostenvale | Monotone questions with no punctuation. Leaves before you can answer. |
| Elite 2 | The Coat | Ostenvale | All major Ghost type Elite Four members in one very tall coat. Rotate personnel between turns. |
| Elite 3 | The Sandwich Person | Ostenvale | Seven months of training. Long speech. Mostly about the sandwich. |
| Elite 4 | Pip | Ostenvale | Small child. Speaks like a small child. Has Wolfe Glick's EUIC 2025 championship roster. |
| PC Architect | Loupe | Restmere | Rediscovers her own invention every thirty minutes. The PC system works flawlessly because of this. |
| The Captain | — | S.S. Enna dock | Found Paradoxia by accident. Never leaves the boat. Slowly giving wrong answers about where things are. |
| The Sandwich Person | — | Pebble Creek / Ostenvale | Does not move. Has never moved, as far as anyone knows. Ended up in the Elite Four somehow. |

---

## 13. Original Pokemon Roster (48 Total)

### Starters (9)

| Line | Types | Notes |
|---|---|---|
| Sootling → Burnoodle → Pastaflame | Fire/Normal | Burning donut → ramen bowl → terrifying pasta entity. |
| Blubble → Glomare → Tankurrent | Water/Steel | Water blob → fishbowl → pressurized tank mech with warning label. |
| Plugrass → Outlawn → Gridgraze | Grass/Electric | Plug in grass → lawnmower → utility pole bear carrying actual power lines. |

*NOTE: Plugrass fully implemented in code as of Session 13. Cry registered as CRY_PLUGRASS. In-game functionality untested.*

### Regional Staples (6)

| Line | Types | Concept |
|---|---|---|
| Fizzling → Seltzerat | Electric/Normal | Electric rat whose electricity only arcs back into itself. Looks surprised every time. |
| Primidge → Ancidge | Normal | Has been in Paradoxia longer than anything else, including the geography. |
| Wrongway → Wayward | Normal/Flying | Always flying confidently in the wrong direction. Not lost — knows exactly where it's going. |

### Gym Aces (8)

| Name | Types | Gym Leader | Concept |
|---|---|---|---|
| Contreet | Fighting/Fairy | Martin | Massive bear in a tiny bow tie. Bows before and after every attack. |
| Commodrift | Water/Ghost | Admiral Admiral | An admiral's coat and hat with nothing inside, floating upright. |
| Bloomhearst | Grass/Psychic | Fernanda | A massive sunflower that has achieved enlightenment. |
| Murkcalm | Poison/Water | Austen | Looks exactly like still swamp water. Is not still swamp water. |
| Formcinder | Fire/Steel | Ashley | Compacted paperwork on fire for an indeterminate amount of time. |
| Cairn | Rock/Ghost | Hobb | A burial marker that got up. Doesn't know why. Keeps walking. |
| Orefield | Ground/Electric | Aldous | Aldous thinks it's Ground. Sign says Steel. It's Ground/Electric. |
| Whimsoveil | Fairy/Normal | Doc & Doc | Ability actively cancels whatever the last move did. |

### Original Pokemon — Wild & Regional (22)

| Line | Types | Location | Concept |
|---|---|---|---|
| Borling → Bortle → Boregal | Normal/Bug | Coppergate routes | Boregal is enormous and completely convinced it runs Coppergate. |
| Chillbile → Miasmark | Ice/Poison | Passwick outskirts | Something between a frozen puddle and a bad feeling. |
| Dunepix → Terrascant | Ground/Fairy | Cableville area | Small magical thing that lives in dirt and considers this fine. |
| Slusheet → Wrapmere | Normal/Ice | Ironstead | A bedsheet left outside in winter. Looks haunted. Is not Ghost type. |
| Bouldge → Massivedge | Normal/Rock | Gen 4/5 tunnel arm | Has seen everything. Reacted to none of it. |
| Flatling → Plating | Normal/Steel | Ashborne | Completely unremarkable metal plate. Has opinions. |
| Emberwish → Candloom | Fire/Fairy | Whitford | A birthday candle that refused to be blown out. Taller now. Still lit. |
| Switchlit | Electric/Ghost | Zemekis MFG | A light switch that turns on in empty rooms. |
| Fuseburn | Electric/Fire | Zemekis MFG | A blown fuse that decided that was fine actually. |
| Conduit | Electric/Water | Zemekis water outlet | A pipe that's live. Legally shouldn't be. |
| Freezbolt | Electric/Ice | Zemekis cold storage | A freezer that runs too cold and hums at a frequency that feels wrong. |
| Wirewing | Electric/Flying | Coppergate power lines | A power line that learned to migrate. The only Zemekis electric that leaves. |

### Legendaries (3)

| Name | Types | Role | Resolution |
|---|---|---|---|
| Aumnis | Bug/Dragon | Box legendary. Was controlling the region. People revolted, justifiably. Has been snoring in its sleep. | Wakes when the player intervenes. Asks why nobody just talked to it. Flies to the heavens. |
| Verit | Psychic/Steel | Minor legendary. Crystalline cat. Has been cataloguing every anomaly. Has the solution. Keeps knocking it off the table. | Fragments pieced together by Ashley and the player in the Dunhallow archive. |
| Taesim | Fire/Fighting | Minor legendary. Raw dog. Destroyed Team Proper's filing cabinets. Has been reacting to being startled. | Resolves when Aumnis is properly dealt with. Finally has something to react to that makes sense. |

---

## 14. The Elemental Monkey Arc

| Act | Location | What Happens |
|---|---|---|
| Act 1 | Entering Tidewell | Doc B hands you Pansear with complete confidence. Doc A says 'Good luck.' He means it a lot. |
| Act 2 | Entering Ashborne | Doc A starts to apologise. Doc B takes your Pansear — then hands you Pansear again. Same Pansear. |
| Resolution | Never | Never corrected. You have Pansear forever. Neither Doc mentions it again. |

---

## 15. Technical Stack

| Tool | Purpose | Mac Compatibility |
|---|---|---|
| pokeemerald Expansion | Base ROM — Fairy type, Physical/Special split, modern moves, better AI. Gen 9 Pokemon confirmed available. | Native (decomp) |
| Porymap | Visual map and world editor. CONFIRMED WORKING. | Native Mac app (verified Session 10) |
| Poryscript | NPC dialogue, cutscenes, events | Native |
| HexManiacAdvance | Stats, moves, trainers, items | CrossOver / Wine |
| mGBA | Emulator for playtesting | Native Mac app |
| MultiPatch | Apply and distribute patch file | Native Mac app |
| Git 2.53.0 | Version control. Repo: github.com/Zelda-Junkie/pokemon-paradoxia (private) | Native (verified Session 9) |
| xPack arm-none-eabi-gcc 13.3.1 | GBA compiler toolchain. Installed at ~/arm-none-eabi-gcc. PATH set in ~/.zshrc. CONFIRMED WORKING. | Native (verified Session 11) |
| libpng + pkg-config | Required for gbagfx build tool. Installed via Homebrew. | Native (verified Session 11) |
| Aseprite | Pixel art and sprite editor. Compiled from source — aseprite-m124 + Skia m124-08a5439a6b arm64. Executable at ~/Desktop/aseprite-build/aseprite/build/bin/aseprite.app | Native (compiled Session 13) |

---

## 16. Next Steps

| Priority | Task |
|---|---|
| 1 | Swap Bramblewood tileset in Porymap — replace Littleroot tiles with appropriate starter town tileset |
| 2 | Place Bramblewood buildings and NPCs in Porymap — lab, houses, child, old man, laundry woman |
| 3 | Fix Transition map layout error — LAYOUT_TRANSITION not found, mapjson failing |
| 4 | Test Plugrass in-game — cry, sprite, stats, encounter |
| 5 | Fix Bramblewood NPC crash — NULL scripts on vanilla Littleroot NPCs |
| 6 | Design routes between towns — trainers, wild Pokemon, Weezing placement before Gym 1 |
| 7 | Design underground encounter tables for each tunnel arm (Gen 4/5, Gen 6/7, Gen 8/9) |
| 8 | Design Vale's full team and battle script |
| 9 | Design The Sandwich Person's full team |
| 10 | Design Aldric's full team — balanced, deliberate, feels like a test not an obstacle |
| 11 | Write pit stop town NPC dialogue for Passwick, Restmere, Cableville |
| 12 | Confirm Pelipper Drizzle availability in pokeemerald Expansion for Doc & Doc's team |
| 13 | Wire Bea battle after starter selection in lab |
| 14 | Implement nameplate system for cutscene dialogue (deferred — low priority vs. content work) |
| 15 | Score the game — all music decisions made against finished content, not in isolation |

**DONE**
- Get a compilable clean build running in mGBA — COMPLETE (Session 11)
- Fix opening sequence — S.S. Enna arrival sequence scripted in full — COMPLETE (Session 12)
- Priority 3 (wire all door warps) — COMPLETE (Session 12)
- Custom gender select screen — COMPLETE (Session 12, rebuilt Session 13)
- S.S. Enna Deck map created and wired as new game spawn — COMPLETE (Session 12)
- Full opening sequence functional end-to-end — COMPLETE (Session 13)
- Naming screen wired to Bea on the deck — COMPLETE (Session 13)
- Starter selection in lab — COMPLETE (Session 13)
- Aseprite installed — COMPLETE (Session 13)

---

*Pokemon: Paradoxia — Game Design Document. Updated end of Session 13 — April 2026.*
