#include "global.h"
#include "contest.h"
#include "battle_frontier.h"
#include "script.h"

// ============================================================
// paradoxia_stubs.c
// Stub definitions for deleted vanilla content that is still
// referenced by vanilla C source. Do not remove stubs without
// also removing the vanilla code that references them.
// Created Session 17.
// ============================================================


// ------------------------------------------------------------
// Text stubs — const u8 terminated with 0xFF (EOS)
// ------------------------------------------------------------

const u8 gText_BattlePyramidConfirmRetire[]         = {0xFF};
const u8 gText_BattlePyramidConfirmRest[]            = {0xFF};
const u8 gText_LinkStandby3[]                        = {0xFF};
const u8 gText_YourPartnerHasRetired[]               = {0xFF};

const u8 Kecleon_Text_SomethingUnseeable[]           = {0xFF};
const u8 Kecleon_Text_WantToUseDevonScope[]          = {0xFF};
const u8 Kecleon_Text_UseDevonScopeMonAttacked[]     = {0xFF};

const u8 BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack[] = {0xFF};
const u8 BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved[] = {0xFF};

const u8 TrainerHill_Entrance_Text_ChallengeTime[]   = {0xFF};

// BattleTowerMultiPartnerRoom apprentice/trainer class texts
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject[]  = {0xFF};

const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1[]           = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro[]           = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1[]            = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro[]           = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1[]            = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro[]   = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask[] = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject[]  = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro[]         = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1[]          = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject[]        = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro[]      = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1[]       = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask[]    = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept[]     = {0xFF};
const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject[]     = {0xFF};

// ExchangeServiceCorner item desc texts
const u8 BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc[]  = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc[]        = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc[]         = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc[]  = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc[]     = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc[]   = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc[]  = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc[]           = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_IronDesc[]           = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc[]    = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc[]     = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc[]     = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc[]     = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc[]        = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc[]   = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc[]     = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc[]   = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc[]      = {0xFF};
const u8 BattleFrontier_ExchangeServiceCorner_Text_ZincDesc[]           = {0xFF};

// Lounge texts
const u8 BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_ArenaTycoonIsThere[]      = {0xFF};
const u8 BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons[]   = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DomeAceGoldMons[]         = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DomeAceIsThere[]          = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DomeAceSilverMons[]       = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice1[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice2[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice3[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_FactoryHeadGoldMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_FactoryHeadIsThere[]      = {0xFF};
const u8 BattleFrontier_Lounge2_Text_FactoryHeadSilverMons[]   = {0xFF};
const u8 BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice[]   = {0xFF};
const u8 BattleFrontier_Lounge2_Text_MultiBattleAdvice[]       = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PalaceMavenGoldMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PalaceMavenIsThere[]      = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PalaceMavenSilverMons[]   = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PikeQueenGoldMons[]       = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PikeQueenIsThere[]        = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PikeQueenSilverMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PyramidKingGoldMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PyramidKingIsThere[]      = {0xFF};
const u8 BattleFrontier_Lounge2_Text_PyramidKingSilverMons[]   = {0xFF};
const u8 BattleFrontier_Lounge2_Text_SalonMaidenGoldMons[]     = {0xFF};
const u8 BattleFrontier_Lounge2_Text_SalonMaidenIsThere[]      = {0xFF};
const u8 BattleFrontier_Lounge2_Text_SalonMaidenSilverMons[]   = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleArena[]          = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble[]     = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle[]     = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble[]  = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle[]  = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble[]   = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle[]   = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePike[]           = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePyramid[]        = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble[]    = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti[]     = {0xFF};
const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle[]    = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleArena[]              = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleDomeDouble[]         = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleDomeSingle[]         = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble[]      = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleFactorySingle[]      = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble[]       = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle[]       = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattlePike[]               = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattlePyramid[]            = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerDouble[]        = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerMulti[]         = {0xFF};
const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerSingle[]        = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow[]  = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow[] = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow[] = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow[] = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow[]= {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow[]= {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow[] = {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow[]= {0xFF};
const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow[]= {0xFF};
const u8 BattleFrontier_Lounge7_Text_BodySlamDesc[]     = {0xFF};
const u8 BattleFrontier_Lounge7_Text_CounterDesc[]      = {0xFF};
const u8 BattleFrontier_Lounge7_Text_DefenseCurlDesc[]  = {0xFF};
const u8 BattleFrontier_Lounge7_Text_DreamEaterDesc[]   = {0xFF};
const u8 BattleFrontier_Lounge7_Text_EndureDesc[]       = {0xFF};
const u8 BattleFrontier_Lounge7_Text_FirePunchDesc[]    = {0xFF};
const u8 BattleFrontier_Lounge7_Text_IcePunchDesc[]     = {0xFF};
const u8 BattleFrontier_Lounge7_Text_IcyWindDesc[]      = {0xFF};
const u8 BattleFrontier_Lounge7_Text_MegaKickDesc[]     = {0xFF};
const u8 BattleFrontier_Lounge7_Text_MegaPunchDesc[]    = {0xFF};
const u8 BattleFrontier_Lounge7_Text_MudSlapDesc[]      = {0xFF};
const u8 BattleFrontier_Lounge7_Text_PsychUpDesc[]      = {0xFF};
const u8 BattleFrontier_Lounge7_Text_RockSlideDesc[]    = {0xFF};
const u8 BattleFrontier_Lounge7_Text_SeismicTossDesc[]  = {0xFF};
const u8 BattleFrontier_Lounge7_Text_SnoreDesc[]        = {0xFF};
const u8 BattleFrontier_Lounge7_Text_SoftboiledDesc[]   = {0xFF};
const u8 BattleFrontier_Lounge7_Text_SwiftDesc[]        = {0xFF};
const u8 BattleFrontier_Lounge7_Text_SwordsDanceDesc[]  = {0xFF};
const u8 BattleFrontier_Lounge7_Text_ThunderPunchDesc[] = {0xFF};
const u8 BattleFrontier_Lounge7_Text_ThunderWaveDesc[]  = {0xFF};

// BattlePyramid item/trainer count texts (6 variants each)
#define PYRAMID_TEXT_STUB(name) \
    const u8 name##1[] = {0xFF}; \
    const u8 name##2[] = {0xFF}; \
    const u8 name##3[] = {0xFF}; \
    const u8 name##4[] = {0xFF}; \
    const u8 name##5[] = {0xFF}; \
    const u8 name##6[] = {0xFF};

PYRAMID_TEXT_STUB(BattlePyramid_Text_ZeroTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_OneTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_TwoTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ThreeTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_FourTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_FiveTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_SixTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_SevenTrainersRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ZeroItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_OneItemRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_TwoItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ThreeItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_FourItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_FiveItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_SixItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_SevenItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_EightItemsRemaining)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ExitHintUp)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ExitHintDown)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ExitHintLeft)
PYRAMID_TEXT_STUB(BattlePyramid_Text_ExitHintRight)


// ------------------------------------------------------------
// Script stubs — minimal end scripts
// These are referenced by vanilla C code as script pointers.
// ------------------------------------------------------------

const u8 BattlePyramid_Retire[]                     = {0x02}; // end
const u8 BattlePyramid_TrainerBattle[]              = {0x02}; // end
const u8 BattlePyramid_FindItemBall[]               = {0x02}; // end
const u8 BattlePyramid_WarpToNextFloor[]            = {0x02}; // end

const u8 BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost[] = {0x02};
const u8 BattleFrontier_BattlePike_EventScript_CloseCurtain[]       = {0x02};
const u8 BattleFrontier_OutsideEast_EventScript_WaterSudowoodo[]    = {0x02};

const u8 MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle[] = {0x02};
const u8 MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall[]         = {0x02};
const u8 Ferry_EventScript_DepartIslandSouth[]      = {0x02};
const u8 Ferry_EventScript_DepartIslandWest[]       = {0x02};
const u8 MauvilleCity_GameCorner_EventScript_NoCoinCase[]            = {0x02};
const u8 MauvilleCity_EventScript_RegisterWallyCall[]                = {0x02};
const u8 Route119_EventScript_ScottWonAtFortreeGymCall[]             = {0x02};
const u8 Route110_TrickHousePuzzle_EventScript_Door[]                = {0x02};
const u8 RustboroCity_Gym_EventScript_RegisterRoxanne[]              = {0x02};
const u8 SSTidalCorridor_EventScript_ReachedStepCount[]              = {0x02};
const u8 EventScript_ClosedSootopolisDoor[]         = {0x02};
const u8 SkyPillar_Outside_EventScript_ClosedDoor[] = {0x02};
const u8 IslandCave_EventScript_OpenRegiEntrance[]  = {0x02};
const u8 FarawayIsland_Interior_EventScript_HideMewWhenGrassCut[]   = {0x02};


// ------------------------------------------------------------
// Movement stub
// ContestHall_Movement_Heart is referenced as a movement script pointer.
// 0xFE = step_end in movement scripts.
// ------------------------------------------------------------

const u8 ContestHall_Movement_Heart[] = {0xFE};



// Contest stubs
extern struct ContestResources *gContestResources;
struct ContestResources *gContestResources = NULL;
extern const struct ContestEffect gContestEffects[];
const struct ContestEffect gContestEffects[] = {};
extern const struct ContestCategory gContestCategoryInfo[];
const struct ContestCategory gContestCategoryInfo[] = {};
extern u8 gContestMonPartyIndex;
u8 gContestMonPartyIndex = 0;
extern u16 gSpecialVar_ContestRank;
u16 gSpecialVar_ContestRank = 0;
void LoadContestBgAfterMoveAnim(void) {}
void StartContest(void) {}
void ShowContestResults(void) {}
void ContestLinkTransfer(void) {}
void ShowContestPainting(void) {}
void SetContestWinnerForPainting(void) {}
u8 GetContestEntryEligibility(struct Pokemon *pkmn) { return 0; }
void GetContestWinnerId(void) {}
void GetContestPlayerId(void) {}
void GetNpcContestantLocalId(void) {}
void BufferContestWinnerTrainerName(void) {}
void BufferContestWinnerMonName(void) {}
void BufferContestTrainerAndMonNames(void) {}
void GetContestMonConditionRanking(void) {}
void SetContestTrainerGfxIds(void) {}
void TryEnterContestMon(void) {}
void GetContestantNamesAtRank(void) {}
void SetLinkContestPlayerGfx(void) {}
void GetContestMonCondition(void) {}
void HasMonWonThisContestBefore(void) {}
void GiveMonContestRibbon(void) {}
void IsContestDebugActive(void) {}
void GiveMonArtistRibbon(void) {}
void ShouldReadyContestArtist(void) {}
void SaveMuseumContestPainting(void) {}
void DoesContestCategoryHaveMuseumPainting(void) {}
void CountPlayerMuseumPaintings(void) {}
void GetContestMultiplayerId(void) {}
void GenerateContestRand(void) {}
void ShowContestEntryMonPic(void) {}
void HideContestEntryMonPic(void) {}
void SetContestCategoryStringVarForInterview(void) {}
void ClearContestWinnerPicsInContestHall(void) {}
void ResetContestLinkResults(void) {}
void ResetLinkContestBoolean(void) {}
void PutLilycoveContestLadyShowOnTheAir(void) {}
void LinkContestWaitForConnection(void) {}
void LinkContestTryShowWirelessIndicator(void) {}
void LinkContestTryHideWirelessIndicator(void) {}
void IsWirelessContest(void) {}
void IsContestWithRSPlayer(void) {}
void ClearLinkContestFlags(void) {}
void LoadLinkContestPlayerPalettes(void) {}
enum ContestCategories gSpecialVar_ContestCategory;
// Learn move
void LearnMove(void) {}
void GetLearnMoveResumeAfterSummaryScreenState(void) {}
void GetLearnMoveStartState(void) {}

// Box mon exclusion
bool8 IsBoxMonExcluded(void) { return FALSE; }
bool8 CanBoxMonBeSelected(void) { return TRUE; }
void ChooseBoxMon(void) {}

// Condition graph
void OpenConditionGraphMenu(void) {}
void CreateConditionGraphMenuLoopedTask(void) {}
bool8 IsConditionGraphMenuLoopedTaskActive(void) { return FALSE; }
void FreeConditionGraphMenuSubstruct2(void) {}

// Mon markings
void GetMonMarkingsData(void) {}

// Save data screen
void CB2_InitClearSaveDataScreen(void) {}

// Pokeblock condition
const u8 gConditionGraphData_Pal[] = {0xFF};
const u8 gConditionText_Pal[] = {0xFF};

// TV stubs
extern u8 *gTVStringVarPtrs[];
u8 *gTVStringVarPtrs[4] = {NULL};
void UpdateTVShowsPerDay(void) {}
void UpdateTVScreensOnMap(void) {}
void ClearTVShowData(void) {}
void TryPutPokemonTodayOnAir(void) {}
void TryPutBreakingNewsOnAir(void) {}
void TryPutBattleSeminarOnAir(void) {}
void PutBattleUpdateOnTheAir(void) {}
void Put3CheersForPokeblocksOnTheAir(void) {}
void TryPutTrendWatcherOnAir(void) {}
void TryPutSecretBaseVisitOnAir(void) {}
void TryPutSafariFanClubOnAir(void) {}
void TryPutFrontierTVShowOnAir(void) {}
void ShouldAirFrontierTVShow(void) {}
void TryPutSpotTheCutiesOnAir(void) {}
void TryPutSmartShopperOnAir(void) {}
void TryPutFindThatGamerOnAir(void) {}
void AlertTVThatPlayerPlayedRoulette(void) {}
void AlertTVThatPlayerPlayedSlotMachine(void) {}
void TryPutTodaysRivalTrainerOnAir(void) {}
void TryPutNameRaterShowOnTheAir(void) {}
void TryPutTreasureInvestigatorsOnAir(void) {}
void TryPutLotteryWinnerReportOnAir(void) {}
void TryPutTrainerFanClubOnAir(void) {}
void PutFanClubSpecialOnTheAir(void) {}
void IncrementDailyPlantedBerries(void) {}
void IncrementDailyPickedBerries(void) {}
void IncrementDailyWildBattles(void) {}
void IncrementDailyBerryBlender(void) {}
void IncrementDailyBattlePoints(void) {}
void IncrementDailySlotsUses(void) {}
void IncrementDailyRouletteUses(void) {}
void RecordFishingAttemptForTV(void) {}
void IsPokeNewsActive(void) {}
void DoTVShow(void) {}
void DoPokeNews(void) {}
void GetRandomActiveShowIdx(void) {}
void GetSelectedTVShow(void) {}
void InterviewBefore(void) {}
void InterviewAfter(void) {}
void IsLeadMonNicknamedOrNotEnglish(void) {}
void GetNextActiveShowIfMassOutbreak(void) {}
void IsTVShowAlreadyInQueue(void) {}
void CheckForPlayersHouseNews(void) {}
void GetMomOrDadStringForTVMessage(void) {}
void ResetTVShowState(void) {}
void TurnOffTVScreen(void) {}
void TurnOnTVScreen(void) {}
void DeactivateAllNormalTVShows(void) {}
void SanitizeTVShowsForRuby(void) {}
void SanitizeTVShowLocationsForRuby(void) {}
void ReceiveTvShowsData(void) {}
void ReceivePokeNewsData(void) {}
void DoTVShowInSearchOfTrainers(void) {}
void IsGabbyAndTyShowOnTheAir(void) {}
void GabbyAndTyGetLastQuote(void) {}
void GabbyAndTyGetLastBattleTrivia(void) {}
void GetGabbyAndTyLocalIds(void) {}
void GabbyAndTyGetBattleNum(void) {}
void GabbyAndTyAfterInterview(void) {}
void GabbyAndTyBeforeInterview(void) {}
void ResetGabbyAndTy(void) {}

// Secret Base stubs
void SetOccupiedSecretBaseEntranceMetatiles(void) {}
void InitSecretBaseAppearance(void) {}
void ToggleSecretBaseEntranceMetatile(void) {}
void CheckPlayerHasSecretBase(void) {}
void SetCurSecretBaseIdFromPosition(void) {}
void TrySetCurSecretBaseIndex(void) {}
void CurMapIsSecretBase(void) {}
void HideSecretBaseDecorationSprites(void) {}
void SecretBasePerStepCallback(void) {}
void SecretBaseMapPopupEnabled(void) {}
void CheckLeftFriendsSecretBase(void) {}
void TrySetCurSecretBase(void) {}
void WarpIntoSecretBase(void) {}
void SetPlayerSecretBase(void) {}
void EnterSecretBase(void) {}
void ClearAndLeaveSecretBase(void) {}
void MoveOutOfSecretBase(void) {}
void IsCurSecretBaseOwnedByAnotherPlayer(void) {}
void GetCurSecretBaseRegistrationValidity(void) {}
void ToggleCurSecretBaseRegistry(void) {}
void ShowSecretBaseDecorationMenu(void) {}
void ShowSecretBaseRegistryMenu(void) {}
void PrepSecretBaseBattleFlags(void) {}
void GetSecretBaseOwnerAndState(void) {}
void InitSecretBaseDecorationSprites(void) {}
void GetSecretBaseTypeInFrontOfPlayer(void) {}
void SetSecretBaseOwnerGfxId(void) {}
void EnterNewlyCreatedSecretBase(void) {}
void SetBattledOwnerFromResult(void) {}
void ClearSecretBases(void) {}
void SetPlayerSecretBaseParty(void) {}
void ClearJapaneseSecretBases(void) {}
void ReceiveSecretBasesData(void) {}
void GetSecretBaseTrainerLoseText(void) {}
void GetSecretBaseMapName(void) {}
void CopyCurSecretBaseOwnerName_StrVar1(void) {}
void CheckInteractedWithFriendsSandOrnament(void) {}
void DeclinedSecretBaseBattle(void) {}
void DrewSecretBaseBattle(void) {}
void WonSecretBaseBattle(void) {}
void LostSecretBaseBattle(void) {}
void CheckInteractedWithFriendsDollDecor(void) {}
void CheckInteractedWithFriendsCushionDecor(void) {}
void CheckInteractedWithFriendsFurnitureBottom(void) {}
void CheckInteractedWithFriendsFurnitureMiddle(void) {}
void CheckInteractedWithFriendsFurnitureTop(void) {}
void CheckInteractedWithFriendsPosterDecor(void) {}
void MoveOutOfSecretBaseFromOutside(void) {}
void InitSecretBaseVars(void) {}

// Frontier stubs
const struct BattleFrontierTrainer *gFacilityTrainers = NULL;
const struct TrainerMon *gFacilityTrainerMons = NULL;
u16 gFrontierTempParty[MAX_FRONTIER_PARTY_SIZE] = {};
void CreateFacilityMon(const struct TrainerMon *fmon, u16 level, u8 fixedIV, u32 otID, u32 flags, struct Pokemon *dst) {}
void FillFrontierTrainerParty(u8 monsCount) {}
void FillFrontierTrainersParties(u8 monsCount) {}
void DoBattleFactorySwapScreen(void) {}
void DoBattleFactorySelectScreen(void) {}
void HideBattleTowerReporter(void) {}
void GetAiScriptsInBattleFactory(void) {}
void InBattleFactory(void) {}
void FacilityTrainerBattle(void) {}
void CallBattlePalaceFunction(void) {}
void CallBattleFactoryFunction(void) {}

// Misc stubs
void CountDigits(void) {}
void ConvertIntToDecimalString(void) {}
void GetPlayerIDAsU32(void) {}
void GetRibbonCount(void) {}
bool8 IsSpeciesNotUnown(u16 species) { return TRUE; }
void GetLocationMusic(void) {}
void TryFadeOutOldMapMusic(void) {}
void ObjectEventIsFarawayIslandMew(void) {}
void ShouldMewShakeGrass(void) {}
void GetMewMoveDirection(void) {}
void UpdateFarawayIslandStepCounter(void) {}
void IsMewPlayingHideAndSeek(void) {}
void SetMewAboveGrass(void) {}
void DestroyMewEmergingGrassSprite(void) {}
void ShouldDoBrailleRegicePuzzle(void) {}
void ShouldDoBrailleDigEffect(void) {}
void DoBrailleDigEffect(void) {}
void ShouldDoBrailleRegisteelEffect(void) {}
void SetUpPuzzleEffectRegisteel(void) {}
void ShouldDoBrailleRegirockEffect(void) {}
void SetUpPuzzleEffectRegirock(void) {}
void ShouldDoBrailleRegirockEffectOld(void) {}
void FldEff_UsePuzzleEffect(void) {}
void CheckRelicanthWailord(void) {}
void DoSealedChamberShakingEffect_Long(void) {}
void DoSealedChamberShakingEffect_Short(void) {}
void SetPokemonAnglerSpecies(void) {}
void BufferMonNickname(void) {}
void IsMonOTIDNotPlayers(void) {}
void ChangePokemonNickname(void) {}
bool8 ShouldHideFanClubInterviewer(void) { return TRUE; }

// Contest stubs
