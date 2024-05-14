#ifndef _BATTLE_H_
#define _BATTLE_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <PR/os.h>
#include <PR/gu.h>

#include "gmmisc.h"

#define DAIRANTOU_CHR_PLAYABLE_MAX 12

#define GMMATCH_TIMELIMIT_INFINITE 100
#define GMMATCH_BONUSGAME_TASK_MAX 10
#define GMMATCH_PLAYERS_MAX 4 // Global limit for simultaneous players in a match

#define gmSaveChrMask(kind) (1 << (kind))
#define gmSaveMapMask(kind) (1 << (kind))

#define GMSAVEINFO_CHARACTER_MASK_ALL \
(                                     \
    gmSaveChrMask(Ft_Kind_Mario)  |   \
    gmSaveChrMask(Ft_Kind_Fox)    |   \
    gmSaveChrMask(Ft_Kind_Donkey) |   \
    gmSaveChrMask(Ft_Kind_Samus)  |   \
    gmSaveChrMask(Ft_Kind_Luigi)  |   \
    gmSaveChrMask(Ft_Kind_Link)   |   \
    gmSaveChrMask(Ft_Kind_Yoshi)  |   \
    gmSaveChrMask(Ft_Kind_Captain)|   \
    gmSaveChrMask(Ft_Kind_Kirby)  |   \
    gmSaveChrMask(Ft_Kind_Pikachu)|   \
    gmSaveChrMask(Ft_Kind_Purin)  |   \
    gmSaveChrMask(Ft_Kind_Ness)       \
)                                     \

#define GMSAVEINFO_CHARACTER_MASK_UNLOCK \
(                                        \
    gmSaveChrMask(Ft_Kind_Ness)    |     \
    gmSaveChrMask(Ft_Kind_Purin)   |     \
    gmSaveChrMask(Ft_Kind_Captain) |     \
    gmSaveChrMask(Ft_Kind_Luigi)         \
)                                        \

#define GMSAVEINFO_CHARACTER_MASK_STARTER (GMSAVEINFO_CHARACTER_MASK_ALL & ~GMSAVEINFO_CHARACTER_MASK_UNLOCK)

typedef enum gmSaveUnlock
{
    gmSave_Unlock_Luigi,                // Luigi
    gmSave_Unlock_Ness,                 // Ness
    gmSave_Unlock_Captain,              // Captain Falcon
    gmSave_Unlock_Purin,                // Jigglypuff
    gmSave_Unlock_Inishie,              // Mushroom Kingdom
    gmSave_Unlock_SoundTest,            // Sound Test menu
    gmSave_Unlock_ItemSwitch            // Item Switch menu

} gmSaveUnlock;

#define GMSAVE_UNLOCK_MASK_LUIGI        (1 << gmSave_Unlock_Luigi)
#define GMSAVE_UNLOCK_MASK_NESS         (1 << gmSave_Unlock_Ness)
#define GMSAVE_UNLOCK_MASK_CAPTAIN      (1 << gmSave_Unlock_Captain)
#define GMSAVE_UNLOCK_MASK_PURIN        (1 << gmSave_Unlock_Purin)
#define GMSAVE_UNLOCK_MASK_INISHIE      (1 << gmSave_Unlock_Inishie)
#define GMSAVE_UNLOCK_MASK_SOUNDTEST    (1 << gmSave_Unlock_SoundTest)
#define GMSAVE_UNLOCK_MASK_ITEMSWITCH   (1 << gmSave_Unlock_ItemSwitch)

#define GMSAVE_UNLOCK_MASK_ALL          (GMSAVE_UNLOCK_MASK_ITEMSWITCH | GMSAVE_UNLOCK_MASK_SOUNDTEST | GMSAVE_UNLOCK_MASK_INISHIE | GMSAVE_UNLOCK_MASK_PURIN | GMSAVE_UNLOCK_MASK_CAPTAIN | GMSAVE_UNLOCK_MASK_NESS | GMSAVE_UNLOCK_MASK_LUIGI)
#define GMSAVE_UNLOCK_MASK_NEWCOMERS    (GMSAVE_UNLOCK_MASK_PURIN | GMSAVE_UNLOCK_MASK_CAPTAIN | GMSAVE_UNLOCK_MASK_NESS)
#define GMSAVE_UNLOCK_MASK_PRIZE        (GMSAVE_UNLOCK_MASK_ALL & ~GMSAVE_UNLOCK_MASK_NEWCOMERS)

#define GMSAVE_GROUND_MASK_ALL      \
(                                   \
    gmSaveMapMask(Gr_Kind_Castle) | \
    gmSaveMapMask(Gr_Kind_Sector) | \
    gmSaveMapMask(Gr_Kind_Jungle) | \
    gmSaveMapMask(Gr_Kind_Zebes)  | \
    gmSaveMapMask(Gr_Kind_Hyrule) | \
    gmSaveMapMask(Gr_Kind_Yoster) | \
    gmSaveMapMask(Gr_Kind_Pupupu) | \
    gmSaveMapMask(Gr_Kind_Yamabuki) \
)                                   \

typedef enum gmMatchPlayerColor
{
    gmMatch_PlayerColor_Red,
    gmMatch_PlayerColor_Blue,
    gmMatch_PlayerColor_Yellow,
    gmMatch_PlayerColor_Green,
    gmMatch_PlayerColor_CP

} gmMatchPlayerColor;

typedef enum gmMatchGameStatus
{
    gmMatch_GameStatus_Wait,            // Match not yet started
    gmMatch_GameStatus_Go,              // Ongoing match
    gmMatch_GameStatus_Pause,           // Player paused
    gmMatch_GameStatus_Unpause,         // Player unpaused
    gmMatch_GameStatus_End = 5,         // Normal match end
    gmMatch_GameStatus_BossDefeat,      // Master Hand defeated
    gmMatch_GameStatus_Set              // Player has input A + B + Z + R / 1P Game Stage End?

} gmMatchGameStatus;

typedef enum gmMatchTeamIndex
{
    gmMatch_TeamIndex_Red,
    gmMatch_TeamIndex_Blue,
    gmMatch_TeamIndex_Green,
    gmMatch_TeamIndex_Com
};

typedef enum gmMatchItemSwitch
{
    gmMatch_ItemSwitch_None,
    gmMatch_ItemSwitch_VeryLow,
    gmMatch_ItemSwitch_Low,
    gmMatch_ItemSwitch_Middle,
    gmMatch_ItemSwitch_High,
    gmMatch_ItemSwitch_VeryHigh

} gmMatchItemSwitch;

typedef enum gmMatchGameRules
{
    gmMatch_GameRule_Time,
    gmMatch_GameRule_Stock,
    gmMatch_GameRule_Bonus,
    gmMatch_GameRule_1PGame

} gmMatchGameRules;

#define GMMATCH_GAMERULE_TIME    (1 << gmMatch_GameRule_Time)   // 0x1
#define GMMATCH_GAMERULE_STOCK   (1 << gmMatch_GameRule_Stock)  // 0x2
#define GMMATCH_GAMERULE_BONUS   (1 << gmMatch_GameRule_Bonus)  // 0x4
#define GMMATCH_GAMERULE_1PGAME  (1 << gmMatch_GameRule_1PGame) // 0x8

typedef enum gmMatchGameDifficulty
{
    gmMatch_Difficulty_VeryEasy,
    gmMatch_Difficulty_Easy,
    gmMatch_Difficulty_Normal,
    gmMatch_Difficulty_Hard,
    gmMatch_Difficulty_VeryHard

} gmMatchGameDifficulty;

typedef enum gmSaveProtectPenalty
{
    gmSave_ProtectFail_RandomKnockback,
    gmSave_ProtectFail_HalfStickRange,
    gmSave_ProtectFail_1PGameMario,
    gmSave_ProtectFail_VSModeCastle

} gmSaveProtectPenalty;

#define GMSAVE_PROTECTFAIL_RANDOMKNOCKBACK  (1 << gmSave_ProtectFail_RandomKnockback)   // 0x1 - Random knockback between 0.1 (?) and 1.0 x 200u
#define GMSAVE_PROTECTFAIL_HALFSTICKRANGE   (1 << gmSave_ProtectFail_HalfStickRange)    // 0x2 - Halves control stick input range
#define GMSAVE_PROTECTFAIL_1PGAMEMARIO      (1 << gmSave_ProtectFail_1PGameMario)       // 0x4 - Forces Mario in 1P Game
#define GMSAVE_PROTECTFAIL_VSMODECASTLE     (1 << gmSave_ProtectFail_VSModeCastle)      // 0x8 - Forces Peach's Castle in VS Mode

typedef enum gmMatchGameType
{
    gmMatch_GameType_Demo,          // 0x0
    gmMatch_GameType_VSMode,        // 0x1
    gmMatch_GameType_Bonus,         // 0x2
    gmMatch_GameType_Explain,       // 0x3
    gmMatch_GameType_Intro,         // 0x4
    gmMatch_GameType_1PGame,        // 0x5
    gmMatch_GameType_Unk6,          // 0x6
    gmMatch_GameType_TrainingMode   // 0x7

} gmMatchGameType;

typedef enum gm1PStageKind
{
    gm1PGame_Stage_Link,                                    // VS Link
    gm1PGame_Stage_Yoshi,                                   // VS Yoshi Team
    gm1PGame_Stage_Fox,                                     // VS Fox
    gm1PGame_Stage_Bonus1,                                  // Break the Targets
    gm1PGame_Stage_MarioBros,                               // VS Mario Bros.
    gm1PGame_Stage_Pikachu,                                 // VS Pikachu
    gm1PGame_Stage_GDonkey,                                 // VS Giant Donkey Kong
    gm1PGame_Stage_Bonus2,                                  // Board the Platforms
    gm1PGame_Stage_Kirby,                                   // VS Kirby Team
    gm1PGame_Stage_Samus,                                   // VS Samus
    gm1PGame_Stage_Metal,                                   // VS Metal Mario
    gm1PGame_Stage_Bonus3,                                  // Race to the Finish
    gm1PGame_Stage_Zako,                                    // VS Fighting Polygon Team
    gm1PGame_Stage_Boss,                                    // VS Master Hand

    gm1PGame_Stage_ChallengerStart,                         // Start of unlockable character stages
    gm1PGame_Stage_Luigi = gm1PGame_Stage_ChallengerStart,  // Challenger Approaching: Luigi
    gm1PGame_Stage_Ness,                                    // Challenger Approaching: Ness
    gm1PGame_Stage_Purin,                                   // Challenger Approaching: Jigglypuff
    gm1PGame_Stage_Captain,                                 // Challenger Approaching: Captain Falcon
    gm1PGame_Stage_ChallengerEnd = gm1PGame_Stage_Captain   // End of unlockable character stages

} gm1PStageKind;

typedef enum gmStageClearKind
{
    gmStageClear_Kind_Stage,        // Normal stage clear
    gmStageClear_Kind_Game,         // Final stage clear
    gmStageClear_Kind_Result        // Bonus stage results

} gmStageClearKind;

typedef enum gm1PGameBonus
{
    GM1PGAME_BONUS_KIND_CHEAPSHOT,
    GM1PGAME_BONUS_KIND_STARFINISH,
    GM1PGAME_BONUS_KIND_NOITEM,
    GM1PGAME_BONUS_KIND_SHIELDBREAKER,
    GM1PGAME_BONUS_KIND_JUDOWARRIOR,
    GM1PGAME_BONUS_KIND_HAWK,
    GM1PGAME_BONUS_KIND_SHOOTER,
    GM1PGAME_BONUS_KIND_HEAVYDAMAGE,
    GM1PGAME_BONUS_KIND_ALLVARIATIONS,
    GM1PGAME_BONUS_KIND_ITEMSTRIKE,
    GM1PGAME_BONUS_KIND_DOUBLEKO,
    GM1PGAME_BONUS_KIND_TRICKSTER,
    GM1PGAME_BONUS_KIND_GIANTIMPACT,
    GM1PGAME_BONUS_KIND_SPEEDSTER,
    GM1PGAME_BONUS_KIND_ITEMTHROW,
    GM1PGAME_BONUS_KIND_TRIPLEKO,
    GM1PGAME_BONUS_KIND_LASTCHANCE,
    GM1PGAME_BONUS_KIND_PACIFIST,
    GM1PGAME_BONUS_KIND_PERFECT,
    GM1PGAME_BONUS_KIND_NOMISS,
    GM1PGAME_BONUS_KIND_NODAMAGE,
    GM1PGAME_BONUS_KIND_FULLPOWER,
    GM1PGAME_BONUS_KIND_GAMECLEAR,
    GM1PGAME_BONUS_KIND_NOMISSCLEAR,
    GM1PGAME_BONUS_KIND_NODAMAGECLEAR,
    GM1PGAME_BONUS_KIND_SPEEDKING,
    GM1PGAME_BONUS_KIND_SPEEDDEMON,
    GM1PGAME_BONUS_KIND_MEWCATCHER,
    GM1PGAME_BONUS_KIND_STARCLEAR,
    GM1PGAME_BONUS_KIND_VEGETARIAN,
    GM1PGAME_BONUS_KIND_HEARTTHROB,
    GM1PGAME_BONUS_KIND_THROWDOWN,
    GM1PGAME_BONUS_KIND_SMASHMANIA,
    GM1PGAME_BONUS_KIND_SMASHLESS,
    GM1PGAME_BONUS_KIND_SPECIALMOVE,
    GM1PGAME_BONUS_KIND_SINGLEMOVE,
    GM1PGAME_BONUS_KIND_POKEMONFINISH,
    GM1PGAME_BONUS_KIND_BOOBYTRAP,
    GM1PGAME_BONUS_KIND_FIGHTERSTANCE,
    GM1PGAME_BONUS_KIND_MYSTIC,
    GM1PGAME_BONUS_KIND_COMETMYSTIC,
    GM1PGAME_BONUS_KIND_ACIDCLEAR,
    GM1PGAME_BONUS_KIND_BUMPERCLEAR,
    GM1PGAME_BONUS_KIND_TORNADOCLEAR,
    GM1PGAME_BONUS_KIND_ARWINGCLEAR,
    GM1PGAME_BONUS_KIND_COUNTERATTACK,
    GM1PGAME_BONUS_KIND_METEORSMASH,
    GM1PGAME_BONUS_KIND_AERIAL,
    GM1PGAME_BONUS_KIND_LASTSECOND,
    GM1PGAME_BONUS_KIND_LUCKY3,
    GM1PGAME_BONUS_KIND_JACKPOT,
    GM1PGAME_BONUS_KIND_YOSHIRAINBOW,
    GM1PGAME_BONUS_KIND_KIRBYRANKS,
    GM1PGAME_BONUS_KIND_BROSCALAMITY,
    GM1PGAME_BONUS_KIND_DKDEFENDER,
    GM1PGAME_BONUS_KIND_DKPERFECT,
    GM1PGAME_BONUS_KIND_GOODFRIEND,
    GM1PGAME_BONUS_KIND_TRUEFRIEND,
    GM1PGAME_BONUS_KIND_ENUMMAX

} gm1PGameBonus;

#define GM1PGAME_BONUS_MASK_CREATE(kind)    (1 << ((kind) - (((kind) / GS_BITCOUNT(u32, 1)) * GS_BITCOUNT(u32, 1))))

// First set of bonuses
#define GM1PGAME_BONUS_MASK0_CHEAPSHOT		(1 << GM1PGAME_BONUS_KIND_CHEAPSHOT)            // One attack made up >= 35% of all attacks used
#define GM1PGAME_BONUS_MASK0_STARFINISH		(1 << GM1PGAME_BONUS_KIND_STARFINISH)	        // KO'd last enemy with a Star KO or Screen KO
#define GM1PGAME_BONUS_MASK0_NOITEM			(1 << GM1PGAME_BONUS_KIND_NOITEM)			    // Did not use any items
#define GM1PGAME_BONUS_MASK0_SHIELDBREAKER	(1 << GM1PGAME_BONUS_KIND_SHIELDBREAKER)        // Broke enemy's shield
#define GM1PGAME_BONUS_MASK0_JUDOWARRIOR	(1 << GM1PGAME_BONUS_KIND_JUDOWARRIOR)		    // Only used throws
#define GM1PGAME_BONUS_MASK0_HAWK			(1 << GM1PGAME_BONUS_KIND_HAWK)		            // Only used aerials
#define GM1PGAME_BONUS_MASK0_SHOOTER		(1 << GM1PGAME_BONUS_KIND_SHOOTER)		        // Only used projectiles
#define GM1PGAME_BONUS_MASK0_HEAVYDAMAGE	(1 << GM1PGAME_BONUS_KIND_HEAVYDAMAGE)		    // Accumulated over 200% damage
#define GM1PGAME_BONUS_MASK0_ALLVARIATIONS	(1 << GM1PGAME_BONUS_KIND_ALLVARIATIONS)	    // Used all jabs, tilts, attacks and aerials
#define GM1PGAME_BONUS_MASK0_ITEMSTRIKE		(1 << GM1PGAME_BONUS_KIND_ITEMSTRIKE)		    // Only used items
#define GM1PGAME_BONUS_MASK0_DOUBLEKO		(1 << GM1PGAME_BONUS_KIND_DOUBLEKO) 		    // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_TRICKSTER		(1 << GM1PGAME_BONUS_KIND_TRICKSTER)		    // KO'd every enemy of a team with a Star KO or Screen KO
#define GM1PGAME_BONUS_MASK0_GIANTIMPACT	(1 << GM1PGAME_BONUS_KIND_GIANTIMPACT)		    // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_SPEEDSTER		(1 << GM1PGAME_BONUS_KIND_SPEEDSTER)		    // Cleared stage in less than 30 seconds
#define GM1PGAME_BONUS_MASK0_ITEMTHROW		(1 << GM1PGAME_BONUS_KIND_ITEMTHROW)		    // Threw or dropped all items, never used them in any other way
#define GM1PGAME_BONUS_MASK0_TRIPLEKO		(1 << GM1PGAME_BONUS_KIND_TRIPLEKO)		        // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_LASTCHANCE		(1 << GM1PGAME_BONUS_KIND_LASTCHANCE)		    // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK0_PACIFIST		(1 << GM1PGAME_BONUS_KIND_PACIFIST)		        // Cleared stage without dealing any damage
#define GM1PGAME_BONUS_MASK0_PERFECT		(1 << GM1PGAME_BONUS_KIND_PERFECT)		        // Cleared Bonus Stage with all targets broken or all platforms boarded
#define GM1PGAME_BONUS_MASK0_NOMISS			(1 << GM1PGAME_BONUS_KIND_NOMISS)		        // Cleared stage without falling once throughout 1P Game progress; multiplied each time it is earned, lost after first fall
#define GM1PGAME_BONUS_MASK0_NODAMAGE		(1 << GM1PGAME_BONUS_KIND_NODAMAGE)	            // Cleared stage without falling and taking any damage
#define GM1PGAME_BONUS_MASK0_FULLPOWER		(1 << GM1PGAME_BONUS_KIND_FULLPOWER)	        // Cleared stage with 0% damage (does not yield No Damage)
#define GM1PGAME_BONUS_MASK0_GAMECLEAR		(1 << GM1PGAME_BONUS_KIND_GAMECLEAR)	        // Cleared Final Stage (number of bonus points depends on difficulty?)
#define GM1PGAME_BONUS_MASK0_NOMISSCLEAR	(1 << GM1PGAME_BONUS_KIND_NOMISSCLEAR)	        // Cleared all stages without falling once (except Bonus Stages?)
#define GM1PGAME_BONUS_MASK0_NODAMAGECLEAR	(1 << GM1PGAME_BONUS_KIND_NODAMAGECLEAR)	    // Cleared all stages without taking any damage
#define GM1PGAME_BONUS_MASK0_SPEEDKING		(1 << GM1PGAME_BONUS_KIND_SPEEDKING)	        // Cleared all stages in under 12 minutes (not earned if Speed Demon criteria is met)
#define GM1PGAME_BONUS_MASK0_SPEEDDEMON		(1 << GM1PGAME_BONUS_KIND_SPEEDDEMON)	        // Cleared all stages in under 8 minutes
#define GM1PGAME_BONUS_MASK0_MEWCATCHER		(1 << GM1PGAME_BONUS_KIND_MEWCATCHER)	        // Mew was released from player's Poké Ball
#define GM1PGAME_BONUS_MASK0_STARCLEAR		(1 << GM1PGAME_BONUS_KIND_STARCLEAR)	        // Cleared stage while under the effect of Star Man
#define GM1PGAME_BONUS_MASK0_VEGETARIAN		(1 << GM1PGAME_BONUS_KIND_VEGETARIAN)	        // Consumed 3 or more Maxim Tomatoes
#define GM1PGAME_BONUS_MASK0_HEARTTHROB		(1 << GM1PGAME_BONUS_KIND_HEARTTHROB)	        // Consumed 3 or more Hearts
#define GM1PGAME_BONUS_MASK0_THROWDOWN		(1 << GM1PGAME_BONUS_KIND_THROWDOWN)	        // KO'd last enemy with a throw

// Second set of bonuses
#define GM1PGAME_BONUS_MASK1_SMASHMANIA		(1 << (GM1PGAME_BONUS_KIND_SMASHMANIA-32))      // Only used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SMASHLESS		(1 << (GM1PGAME_BONUS_KIND_SMASHLESS-32))	    // Never used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SPECIALMOVE	(1 << (GM1PGAME_BONUS_KIND_SPECIALMOVE-32))	    // Only used Special Attacks
#define GM1PGAME_BONUS_MASK1_SINGLEMOVE		(1 << (GM1PGAME_BONUS_KIND_SINGLEMOVE-32))      // Only used the same Special Attack
#define GM1PGAME_BONUS_MASK1_POKEMONFINISH	(1 << (GM1PGAME_BONUS_KIND_POKEMONFINISH-32))	// KO'd last enemy with a Pokémon (Saffron City Pokémon projectiles also count, but not the Pokémon themselves?)
#define GM1PGAME_BONUS_MASK1_BOOBYTRAP		(1 << (GM1PGAME_BONUS_KIND_BOOBYTRAP-32))		// KO'd last enemy with a Motion Sensor Bomb
#define GM1PGAME_BONUS_MASK1_FIGHTERSTANCE	(1 << (GM1PGAME_BONUS_KIND_FIGHTERSTANCE-32))   // Player was taunting as stage ended
#define GM1PGAME_BONUS_MASK1_MYSTIC			(1 << (GM1PGAME_BONUS_KIND_MYSTIC-32))		    // Player fell as stage ended
#define GM1PGAME_BONUS_MASK1_COMETMYSTIC	(1 << (GM1PGAME_BONUS_KIND_COMETMYSTIC-32))     // Player was getting Star KO'd as stage ended (Screen KOs do not count)
#define GM1PGAME_BONUS_MASK1_ACIDCLEAR		(1 << (GM1PGAME_BONUS_KIND_ACIDCLEAR-32))		// Last enemy got KO'd by Acid
#define GM1PGAME_BONUS_MASK1_BUMPERCLEAR	(1 << (GM1PGAME_BONUS_KIND_BUMPERCLEAR-32))		// Last enemy got KO'd by Bumper
#define GM1PGAME_BONUS_MASK1_TORNADOCLEAR	(1 << (GM1PGAME_BONUS_KIND_TORNADOCLEAR-32))    // Last enemy got KO'd by Tornado
#define GM1PGAME_BONUS_MASK1_ARWINGCLEAR	(1 << (GM1PGAME_BONUS_KIND_ARWINGCLEAR-32))		// Last enemy got KO'd by ARWING
#define GM1PGAME_BONUS_MASK1_COUNTERATTACK	(1 << (GM1PGAME_BONUS_KIND_COUNTERATTACK-32))   // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_METEORSMASH	(1 << (GM1PGAME_BONUS_KIND_METEORSMASH-32))		// Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_AERIAL			(1 << (GM1PGAME_BONUS_KIND_AERIAL-32))		    // Unused, translated from Japanese
#define GM1PGAME_BONUS_MASK1_LASTSECOND		(1 << (GM1PGAME_BONUS_KIND_LASTSECOND-32))		// Cleared stage with 1 second left on the timer
#define GM1PGAME_BONUS_MASK1_LUCKY3			(1 << (GM1PGAME_BONUS_KIND_LUCKY3-32))		    // Cleared stage with 3:33 left on the timer
#define GM1PGAME_BONUS_MASK1_JACKPOT		(1 << (GM1PGAME_BONUS_KIND_JACKPOT-32))		    // Cleared stage with a damage % of two or three identical digits (e.g. 44% or 111%)
#define GM1PGAME_BONUS_MASK1_YOSHIRAINBOW	(1 << (GM1PGAME_BONUS_KIND_YOSHIRAINBOW-32))	// KO'd every member of Yoshi Team in the order they appeared
#define GM1PGAME_BONUS_MASK1_KIRBYRANKS		(1 << (GM1PGAME_BONUS_KIND_KIRBYRANKS-32))	    // KO'd every member of Kirby Team in the order they appeared
#define GM1PGAME_BONUS_MASK1_BROSCALAMITY	(1 << (GM1PGAME_BONUS_KIND_BROSCALAMITY-32))	// KO'd Luigi before damaging Mario on VS Mario Bros. stage
#define GM1PGAME_BONUS_MASK1_DKDEFENDER		(1 << (GM1PGAME_BONUS_KIND_DKDEFENDER-32))	    // Allies did not fall on VS. Giant Donkey Kong stage
#define GM1PGAME_BONUS_MASK1_DKPERFECT		(1 << (GM1PGAME_BONUS_KIND_DKPERFECT-32))	    // Allies did not fall and took no damage on VS. Giant Donkey Kong stage
#define GM1PGAME_BONUS_MASK1_GOODFRIEND		(1 << (GM1PGAME_BONUS_KIND_GOODFRIEND-32))	    // Ally did not fall on VS Mario Bros. stage
#define GM1PGAME_BONUS_MASK1_TRUEFRIEND		(1 << (GM1PGAME_BONUS_KIND_TRUEFRIEND-32))	    // Ally did not fall and took no damage on VS Mario Bros. stage

typedef struct gmStageClearStats
{
    s32 bonus_array_id;
    s32 bonus_id;

} gmStageClearStats;

typedef struct gmStageClearScore
{
    intptr_t offset;
    s32 points;

} gmStageClearScore;

typedef struct gmContinueFighter
{
    s32 ft_kind;
    s32 costume;
    s32 shade;

} gmContinueFighter;

typedef enum gmContinueOption
{
    gmContinue_Option_Yes,
    gmContinue_Option_No,
    gmContinue_Option_EnumMax
};

typedef enum scMajorScene
{
    scMajor_Kind_NoController,      // "No Controller" screen
    scMajor_Kind_Title,             // Title screen
    scMajor_Kind_DebugMapSel,       // Debug stage select
    scMajor_Kind_DebugSystem,       // Debug main menu?
    scMajor_Kind_DebugChrSel,       // Debug character select
    scMajor_Kind_DebugResScreen,    // Debug results screen
    scMajor_Kind_DebugPadTest,      // Debug joystick test
    scMajor_Kind_MainMenu,          // Main Menu
    scMajor_Kind_1PMode,            // 1P mode menu
    scMajor_Kind_VSMode = 9,        // VS mode
    scMajor_Kind_VSOptions,         // VS mode options
    scMajor_Kind_Challenger = 13,   // Challenger approaching
    scMajor_Kind_1PTitleCard,       // 1P game "[character] VS [opponent(s)]" screen
    scMajor_Kind_ScreenAdjust,      // Screen adjust
    scMajor_Kind_VSChrSel,          // VS mode character select
    scMajor_Kind_TrainingChrSel = 18, // Training mode character select
    scMajor_Kind_Bonus1ChrSel,      // Bonus 1 character select
    scMajor_Kind_Bonus2ChrSel,      // Bonus 2 character select
    scMajor_Kind_VSMapSel = 21,     // VS mode map select
    scMajor_Kind_VSBattle,          // VS mode in-game
    scMajor_Kind_VSResults = 24,    // VS mode results
    scMajor_Kind_VSRecord,          // Records screen
    scMajor_Kind_Characters,        // Character data screen
    scMajor_Kind_N64,               // N64 logo
    scMajor_Kind_OpeningRoom,       // Room with Master Hand and figures coming to life
    scMajor_Kind_BackupClear = 47,  // Save data clear
    scMajor_Kind_Ending,            // Ending cutscene
    scMajor_Kind_1PScoreUnk = 50,   // Stage clear bonus thing?
    scMajor_Kind_1PStageClearScore, // Stage clear bonus score page 1?
    scMajor_Kind_1PGame,            // 1P Game logic loop
    scMajor_Kind_1PBonusGame,       // Bonus game in-game
    scMajor_Kind_1PTrainingMode,    // Training mode in-game
    scMajor_Kind_1PCongratulations, // Congratulations screen
    scMajor_Kind_Credits,           // Credits scene
    scMajor_Kind_Options,           // Options menu
    scMajor_Kind_Data,              // Data menu
    scMajor_Kind_SoundTest,         // Sound Test
    scMajor_Kind_HowToPlay,         // How to Play
    scMajor_Kind_Demo               // Auto-Demo

} scMajorScene;

typedef struct scAutoDemoProc
{
    u16 focus_end_wait;
    void (*proc_change)();
    void (*proc_focus)();

} scAutoDemoProc;

typedef struct scExplainMain
{
    SObj *textbox_sobj;
    GObj *stick_gobj;
    GObj *spark_gobj;
    GObj *rgb_gobj;
    SObj *phase_sobj0;
    SObj *phase_sobj1;
    SObj *phase_sobj2;
    SObj *phase_sobj3;
    SObj *phase_sobj4;
    SObj *phase_sobj5;
    s32 phase_advance_wait;
    s32 phase;
    u8 unk_scexplainif_0x30;
    u8 stick_status;

} scExplainMain;

typedef struct scExplainArgs
{
    u16 sprite_pos_x;
    u8 sprite_pos_y;
    u8 sprite_status;

} scExplainArgs;

typedef struct scExplainPhase
{
    u16 phase_time;                     // Time the given explanation phase of the How to Play tutorial should last
    u16 unused;
    u8 textbox_pos_x;
    u8 textbox_pos_y;
    Sprite *sprite;
    scExplainArgs control_stick_args;
    scExplainArgs phase_args0;
    scExplainArgs phase_args1;
    scExplainArgs phase_args2;
    scExplainArgs phase_args3;
    scExplainArgs phase_args4;
    scExplainArgs rgb_overlay_args;
    scExplainArgs phase_args5;

} scExplainPhase;

typedef struct gm1PGameCom
{
    ub8 is_team_attack;
    u8 item_switch;
    u8 enemy_level[5];
    u8 enemy_handicap[5];
    u8 ally_level[5];
    u8 ally_handicap[5];

} gm1PGameCom;

typedef struct gm1PGameStage
{
    u8 screenflash_alpha;
    u8 gr_kind;
    u32 item_toggles;
    u8 opponent_count;            // Number of enemy players to spawn?
    u8 character_kind[2];
    u8 opponent_behavior;
    u8 ally_count;
    u8 ally_behavior;

} gm1PGameStage;

typedef struct gm1PGameFighter
{
    s32 mpoint_kind;     // Spawn position?
    void *anim_bank;
    s32 copy_kind;
    s32 team_order;
    sb32 is_skip_entry;
    sb32 is_skip_magnify;
    u8 cp_trait;
    f32 cam_frame_mul;

} gm1PGameFighter;

typedef struct gm1PGameStats
{
    s32 team_order;
    s32 damage_status_id;
    s32 damage_player;
    s32 damage_object_class;
    s32 damage_object_kind;
    gmStatFlags damage_stat_flags;
    u16 damage_stat_count;

} gm1PGameStats;

typedef struct gm1PGameBossVectors
{
    s32 unk_gm1pbossvec_0x0;
    u8 unk_gm1pbossvec_0x4;
    s32 unk_gm1pbossvec_0x8;
    Vec3f pos;

} gm1PGameBossVectors;

typedef struct gm1PGameBossAnim
{
    s32 unk_gm1pbossanim_0x0;
    s32 unk_gm1pbossanim_0x4;
    f32 anim_speed;

} gm1PGameBossAnim;

typedef struct gm1PGameBossEffect
{
    void (*proc_update)(GObj*);
    void (*proc_render)(GObj*);
    s32 unk_gm1pbosseffect_0x8;
    s32 unk_gm1pbosseffect_0xC;

} gm1PGameBossEffect;

typedef struct gm1PGameBossBackground
{
    s32 background_count;
    s32 effect_count;
    s32 anim_count;
    s32 unk_gm1pbossbackground_0xC;
    s32 unk_gm1pbossbackground_0x10;
    s32 color_id;
    s32 change_wait_base;
    s32 change_damage_min;
    sb32 is_random_background;
    gm1PGameBossEffect *bosseffect;
    gm1PGameBossAnim *bossanim;
    gm1PGameBossVectors *bossvec;

} gm1PGameBossBackground;

typedef struct gm1PGameBossMain
{
    sb32 is_skip_background_change;
    s32 background_id;
    s32 change_wait;
    void *file_head;
    gm1PGameBossBackground *bossbackground;
    s32 bossplayer;

} gm1PGameBossMain;

typedef struct cmStruct
{
    s32 status_default;
    s32 status_curr;
    s32 status_prev;
    void (*proc_camera)(GObj*);
    f32 cam_target_dist;
    Vec3f unk_cmstruct_0x14;
    s32 canvas_ulx;
    s32 canvas_uly;
    s32 canvas_lrx;
    s32 canvas_lry;
    s32 canvas_center_x;
    s32 canvas_center_y;
    s32 canvas_width;
    s32 canvas_height;
    f32 unk_cmstruct_0x40;
    GObj *pl_pause_gobj;        // Guess: this is a struct from here...
    f32 unk_cmstruct_0x48;
    f32 unk_cmstruct_0x4C;
    f32 unk_cmstruct_0x50;
    f32 unk_cmstruct_0x54;
    f32 unk_cmstruct_0x58;
    Vec3f unk_cmstruct_0x5C;
    Vec3f unk_cmstruct_0x68;    // ...to here
    GObj *pl_bonus_gobj;        // ...and there is an array of it
    f32 unk_cmstruct_0x78;
    f32 unk_cmstruct_0x7C;
    f32 unk_cmstruct_0x80;
    f32 unk_cmstruct_0x84;
    f32 unk_cmstruct_0x88;
    Vec3f unk_cmstruct_0x8C;
    LookAt look_at_x;
    LookAt look_at_y;

} cmStruct;

typedef struct gmCreditsMatrix
{
    u8 filler_0x0[0xC];
    f32 unk_gmcreditsmtx_0xC;
    f32 unk_gmcreditsmtx_0x10;
    f32 unk_gmcreditsmtx_0x14;

} gmCreditsMatrix;

typedef struct gmCreditsText
{
    s32 character_start;        // Where to begin reading text from in main character array
    s32 character_count;        // Number of characters in credits role card to display

} gmCreditsText;

typedef struct gmCreditsSprite
{
    u8 width;
    u8 height;
    intptr_t offset;

} gmCreditsSprite;

typedef struct gmCreditsStaff
{
    u8 filler_0x0[0x4];
    s32 staff_id;

} gmCreditsStaff;

typedef enum gmCreditsCompany
{
    gmCredits_Company_Null = -1,
    gmCredits_Company_HAL,
    gmCredits_Company_NINTENDO,
    gmCredits_Company_Creatures,
    gmCredits_Company_GAMEFREAK,
    gmCredits_Company_Rare,
    gmCredits_Company_Mickeys,
    gmCredits_Company_KENProd,
    gmCredits_Company_AONIProd,
    gmCredits_Company_ARTSVISION,
    gmCredits_Company_EZAKIProd,
    gmCredits_Company_NOA

} gmCreditsCompany;

typedef struct gmCreditsName gmCreditsName;

struct gmCreditsName
{
    gmCreditsName *next;
    s32 name_id;
    sb32 job_or_name;   // 0 = job (e.g. Director), 1 = name (e.g. Masahiro Sakurai)
    f32 offset_x;
    f32 unkgmcreditsstruct0x10;
    f32 interpolation;
    s32 status;
    s32 unkgmcreditsstruct0x1C;
};

typedef struct gmCreditsJob
{
    s32 prefix_id;    // e.g. "Chief" -> Chief Programmers
    s32 job_id;       // Job text to use
    s32 staff_count;  // Number of staff members with this job assignment

} gmCreditsJob;

typedef struct gmCreditsSetup
{
    f32 unk_gmcreditsunk_0x0;
    DObj *dobj;
    f32 spacing;
    f32 unk_gmcreditsunk_0xC;
    f32 unk_gmcreditsunk_0x10;

} gmCreditsSetup;

typedef struct gmCreditsProjection
{
    Vec3f pv0;
    Vec3f pv1;
    Vec3f pv2;
    Vec3f pv3;
    f32 px0;
    f32 py0;
    f32 px1;
    f32 py1;
    f32 px2;
    f32 py2;
    f32 px3;
    f32 py3;

} gmCreditsProjection;

typedef struct ifPlayerCommon
{
    u8 is_ifmagnify_display;
    u8 ifmagnify_mode;
    f32 ifmagnify_scale;
    s32 *ifplayers_pos_x;    // Pointer to each player's HUD X-position
    u16 ifplayers_pos_y;     // Player HUD's Y-positions - subtracted from center Y-position?
    u8 unk_80131580_0xE;
    u8 unk_80131580_0xF;
    u8 unk_80131580_0x10;

} ifPlayerCommon;

extern ifPlayerCommon gPlayerCommonInterface;

extern GObj *gCameraGObj;
extern Mtx44f gCameraMatrix; // Mtx44f?
extern cmStruct gCameraStruct;

typedef struct scUnkDataBounds
{
    uintptr_t unk_scdatabounds_0x0;
    uintptr_t unk_scdatabounds_0x4;
    uintptr_t unk_scdatabounds_0x8;
    uintptr_t unk_scdatabounds_0xC;
    u8 filler_0x10[0x1C - 0x10];

} scUnkDataBounds;

typedef struct scRuntimeInfo
{
    u8 filler_0x0[0xC];
    void *unk_scruntime_0xC;
    u32 arena_size;
    u8 filler_0x14[0x88 - 0x14];
    void (*proc_start)(); // 0x88

} scRuntimeInfo;

typedef struct gmStaleInfo
{
    u16 attack_id, motion_count;

} gmStaleInfo;

typedef struct gmBattleResults
{
    s32 tko;
    s32 kos;
    ub8 player_or_team;
    u8 unk_battleres_0x9;
    ub8 is_human_player;

} gmBattleResults;

typedef struct gmPlayerBlock
{
    u8 level; // Actually begins at 1 instead of 0
    u8 handicap; // Master Hand's handicap value is 35!?
    u8 player_kind; // 0 = HMN, 1 = CPU, 2 = none (?), 5 = How to Play (?)
    u8 character_kind; // Same as ftKind
    u8 team_index;
    u8 player; // Identical to team index if team battle is on?
    u8 costume_index;
    u8 shade_index; // Color overlay applied when several players use the same costume
    u8 player_color_index; // Used for emblems, player tags, and possibly more
    ub8 is_permanent_stock; // Whether player's stock is permanent or a limited amount
    u8 tag_kind;     // Player tag sprite index (i.e. 1P, 2P, 3P, 4P, CP or heart)
    s8 stock_count; // -1 = player has no stocks
    ub8 is_rebirth_multi; // Respawn flag of multi-man enemy teams (Yoshi, Kirby, Fighting Polygons) in 1P mode
    u8 placement; // Player's placement in battle results
    s32 falls;
    s32 score; // Caps at positive 999, crashes if way too low in the negatives
    s32 total_ko_player[GMMATCH_PLAYERS_MAX]; // KOs scored on other players
    s32 unk_pblock_0x28;
    s32 unk_pblock_0x2C;
    s32 total_self_destruct; // Applied when damaging player's ID is -1 or GMMATCH_PLAYERS_MAX
    s32 total_damage_dealt; // Total damage dealt to all players
    s32 total_damage_all; // Damage received from all hazards
    s32 total_damage_player[GMMATCH_PLAYERS_MAX]; // Total damage received from each player present
    s32 stock_damage_all;  // All damage received per current stock, from any hazard
    s32 combo_damage_foe; // Total damage from consecutive hits dealt by foes (Resets when hitstun ends)
    s32 combo_count_foe; // Number of consecutive hits received from foes (Resets when hitstun ends)
    GObj *fighter_gobj; // Pointer to player's fighter GObj
    u32 stale_index; // Current position in stale queue?
    gmStaleInfo stale_info[5];

} gmPlayerBlock;

typedef struct gmBattleState
{
    u8 game_type;
    u8 gr_kind;
    ub8 is_team_battle;
    u8 match_rules;     // Series of flags; 0x1 = time, 0x2 = stock
    u8 pl_count;        // Number of human players registered
    u8 cp_count;        // Number of computer players registered
    u8 time_limit;
    u8 stock_setting;   // Number of stocks set in game rules
    u8 handicap_setting;// 0 = OFF, 1 = ON, 2 = AUTO
    ub8 is_team_attack; // 0 = OFF, 1 = ON
    ub8 is_stage_select;// 0 = OFF, 1 = ON
    u8 damage_ratio;
    u32 item_toggles;   // Bits = item's on/off switch from match settings
    u8 unk_0x10;
    u8 game_status;
    u8 unk_0x12;
    u8 unk_0x13;
    u32 match_time_remain;  // Frames remaining until timeout
    u32 match_time_current; // Current match frame, counts up from 0
    u8 item_switch; // Has various settings (0x0 on Master Hand and Giant DK (?), 0x1 on Metal Mario battle, 0x2 on Hyrule Castle, 0x3 on various stages, 0x4 on Polygon Team?
    ub32 is_display_score : 1;      // Displays score when a fighter falls
    ub32 is_not_teamshadows : 1;  // If FALSE, shadows are colored based on players' team affiliation, otherwise use default shadow color
    gmPlayerBlock player_block[GMMATCH_PLAYERS_MAX]; // Holds data for each player

} gmBattleState;

typedef struct gmSaveVSRecord
{
    /* 0x00 */ u16 ko_count[DAIRANTOU_CHR_PLAYABLE_MAX];
    /* 0x18 */ u32 time_used; //< in seconds
    /* 0x1C */ u32 damage_dealt;
    /* 0x20 */ u32 damage_taken;
    /* 0x24 */ u16 unk;
    /* 0x26 */ u16 self_destructs;
    /* 0x28 */ u16 games_played;
    /* 0x2A */ u16 player_count_tally;
    /* 0x2C */ u16 player_count_tallies[DAIRANTOU_CHR_PLAYABLE_MAX];
    /* 0x44 */ u16 played_against[DAIRANTOU_CHR_PLAYABLE_MAX];
} gmSaveVSRecord; // size == 0x5C

typedef struct gmSave1PRecord
{
    u32 spgame_hiscore;
    u32 spgame_continues;
    u32 spgame_bonuses;
    u8 spgame_best_difficulty;
    u32 bonus1_time;            // Break the Targets high score
    u8 bonus1_task_count;       // Targets broken
    u32 bonus2_time;            // Board the Platforms high score
    u8 bonus2_task_count;       // Platforms boarded
    u8 spgame_complete;         // Whether character has completed 1P Game or not

} gmSave1PRecord;

// is this the saved data structure?
typedef struct gmSaveInfo
{
    gmSaveVSRecord vs_records[DAIRANTOU_CHR_PLAYABLE_MAX];
    ub8 is_allow_screenflash;   // Toggle for enabling white screen flash when, for example, a character takes too much damage.
                                // Leftover from unused "background flash" option? It is always toggled ON, even after clearing the save data.
    ub8 sound_mono_or_stereo;   // Sound mono / stereo setting
    s16 unk452;
    s16 unk454;
    u8 unk456;
    u8 unlock_mask;
    u16 character_mask;         // Mask of unlocked characters?
    u8 spgame_difficulty;
    u8 spgame_stock_count;
    gmSave1PRecord spgame_records[DAIRANTOU_CHR_PLAYABLE_MAX];
    u16 unlock_task_inishie;    // Records mask of unique stages played in VS mode
    u8 unlock_task_itemswitch;  // Records number of VS games played for Item Switch unlock
    u16 vsgame_total;           // Total amount of VS games played?
    u8 mprotect_fail;           // Some kind of anti-piracy measure??? 0x1 results in random knockback velocity, 0x2 halves stick range, 0x4 forces Mario in 1P game, 0x8 forces Peach's Castle
    u8 unk5E3;
    u8 unk5E4;
    u8 unk5E5;
    u8 unk5E6;
    u8 unk5E7;
    s32 mprotect_hash; // Checksum of save data

} gmSaveInfo; // size == 0x5EC

typedef struct gmSceneInfo
{
    u8 scene_current;
    u8 scene_previous;
    u8 unlocked_features[2];
    u8 pad04[0x09 - 0x04];
    u8 unk09;
    u8 unk0A;
    u8 pad0B[0xD - 0xB];
    u8 demo_ft_kind[2];
    u8 gr_kind;
    u8 unk10;
    ub8 is_select_continue;
    ub8 is_reset;    // Player did A + B + R + Z button combination
    u8 spgame_player;
    u8 ft_kind;
    u8 costume_index;
    u8 spgame_time_limit;
    u8 spgame_stage; // 1P Game stage (0 = VS Link, 1 = VS Yoshi Team, etc.)
    u8 cpu_port[3];
    u32 spgame_time_seconds; // Timer of current match in seconds
    u32 spgame_score;
    u32 continues_used;
    u32 bonus_count;        // Number of bonuses player acquired throughout the game
    u32 bonus_get_mask[2];  // Different bonuses the player has accumulated per match
    u32 bonus_tasks_complete;
    u8 bonus_tasks_current;
    u8 bonus_char_id;
    u8 bonus_costume_id;
    u8 training_human_char_id;
    u8 training_human_costume_id;
    u8 training_cpu_char_id;
    u8 training_cpu_costume_id;
    u8 unk3F;
    u8 demo_ground_order;
    u8 sss_battle_gr_kind;
    u8 sss_training_gr_kind;
    u8 unk43;
    u8 unk44;
    u8 unk45;
    u8 unk46;
    u8 unk47;

} gmSceneInfo; // size == 0x48

extern gmBattleState *gBattleState, gDefaultBattleState, D_800A4B18, gTransferBattleState, D_800A4EF8;
extern gmSaveInfo gSaveData, gDefaultSaveData;
extern gmSceneInfo gSceneData, gDefaultSceneData;

typedef struct Unk800D4060
{
    u32 unk_b0 : 1;

} Unk800D4060;

#endif
