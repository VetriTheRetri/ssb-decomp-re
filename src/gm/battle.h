#ifndef _BATTLE_H_
#define _BATTLE_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <PR/gu.h>

#include "gmmisc.h"
#include "gmscript.h"
#include "gmfunctions.h"

#define GMCOMMON_CHAR_NUM_PLAYABLE 12

#define GMBATTLE_TIMELIMIT_INFINITE 100
#define GMBATTLE_BONUSGAME_TASK_MAX 10
#define GMBATTLE_PLAYERS_MAX 4 // Global limit for simultaneous players in a match

#define gmBackupChrMask(kind) (1 << (kind))
#define gmBackupMapMask(kind) (1 << (kind))

#define GMBACKUP_CHARACTER_MASK_ALL	\
(									 	\
	gmBackupChrMask(nFTKindMario) 	|	\
	gmBackupChrMask(nFTKindFox) 	|	\
	gmBackupChrMask(nFTKindDonkey)	|	\
	gmBackupChrMask(nFTKindSamus) 	|	\
	gmBackupChrMask(nFTKindLuigi) 	|	\
	gmBackupChrMask(nFTKindLink) 	|	\
	gmBackupChrMask(nFTKindYoshi) 	|	\
	gmBackupChrMask(nFTKindCaptain) |	\
	gmBackupChrMask(nFTKindKirby)	|	\
	gmBackupChrMask(nFTKindPikachu) |	\
	gmBackupChrMask(nFTKindPurin) 	|	\
	gmBackupChrMask(nFTKindNess)		\
)

#define GMBACKUP_CHARACTER_MASK_UNLOCK	\
(											\
	gmBackupChrMask(nFTKindNess) 		|	\
	gmBackupChrMask(nFTKindPurin) 		| 	\
	gmBackupChrMask(nFTKindCaptain) 	| 	\
	gmBackupChrMask(nFTKindLuigi)			\
)

#define GMBACKUP_CHARACTER_MASK_STARTER (GMBACKUP_CHARACTER_MASK_ALL & ~GMBACKUP_CHARACTER_MASK_UNLOCK)

typedef enum gmBackupUnlock
{
	nGMBackupUnlockLuigi,	 	// Luigi
	nGMBackupUnlockNess,		// Ness
	nGMBackupUnlockCaptain,	 	// Captain Falcon
	nGMBackupUnlockPurin,	 	// Jigglypuff
	nGMBackupUnlockInishie,	 	// Mushroom Kingdom
	nGMBackupUnlockSoundTest, 	// Sound Test menu
	nGMBackupUnlockItemSwitch, 	// Item Switch menu
	nGMBackupUnlockEnumMax

} gmBackupUnlock;

#define GMBACKUP_UNLOCK_MASK_LUIGI (1 << nGMBackupUnlockLuigi)
#define GMBACKUP_UNLOCK_MASK_NESS (1 << nGMBackupUnlockNess)
#define GMBACKUP_UNLOCK_MASK_CAPTAIN (1 << nGMBackupUnlockCaptain)
#define GMBACKUP_UNLOCK_MASK_PURIN (1 << nGMBackupUnlockPurin)
#define GMBACKUP_UNLOCK_MASK_INISHIE (1 << nGMBackupUnlockInishie)
#define GMBACKUP_UNLOCK_MASK_SOUNDTEST (1 << nGMBackupUnlockSoundTest)
#define GMBACKUP_UNLOCK_MASK_ITEMSWITCH (1 << nGMBackupUnlockItemSwitch)

#define GMBACKUP_UNLOCK_MASK_ALL 		\
(										\
	GMBACKUP_UNLOCK_MASK_ITEMSWITCH | 	\
	GMBACKUP_UNLOCK_MASK_SOUNDTEST 	| 	\
	GMBACKUP_UNLOCK_MASK_INISHIE   	|	\
	GMBACKUP_UNLOCK_MASK_PURIN 		| 	\
	GMBACKUP_UNLOCK_MASK_CAPTAIN 	| 	\
	GMBACKUP_UNLOCK_MASK_NESS 		| 	\
	GMBACKUP_UNLOCK_MASK_LUIGI			\
)

#define GMBACKUP_UNLOCK_MASK_NEWCOMERS (GMBACKUP_UNLOCK_MASK_LUIGI | GMBACKUP_UNLOCK_MASK_PURIN | GMBACKUP_UNLOCK_MASK_CAPTAIN | GMBACKUP_UNLOCK_MASK_NESS)
#define GMBACKUP_UNLOCK_MASK_PRIZE (GMBACKUP_UNLOCK_MASK_ALL & ~GMBACKUP_UNLOCK_MASK_NEWCOMERS)

#define GMBACKUP_GROUND_MASK_ALL 		\
(										\
	gmBackupMapMask(nGRKindCastle) 	| 	\
	gmBackupMapMask(nGRKindSector) 	|	\
	gmBackupMapMask(nGRKindJungle) 	|	\
	gmBackupMapMask(nGRKindZebes) 	|	\
	gmBackupMapMask(nGRKindHyrule) 	|	\
	gmBackupMapMask(nGRKindYoster) 	|	\
	gmBackupMapMask(nGRKindPupupu) 	| 	\
	gmBackupMapMask(nGRKindYamabuki)	\
)

typedef enum gmMatchPlayerColor
{
	nGMBattlePlayerColorRed,
	nGMBattlePlayerColorBlue,
	nGMBattlePlayerColorYellow,
	nGMBattlePlayerColorGreen,
	nGMBattlePlayerColorCP

} gmMatchPlayerColor;

typedef enum gmMatchGameStatus
{
	nGMBattleGameStatusWait,	   // Match not yet started
	nGMBattleGameStatusGo,		   // Ongoing match
	nGMBattleGameStatusPause,	   // Player paused
	nGMBattleGameStatusUnpause,	   // Player unpaused
	nGMBattleGameStatusEnd = 5,	   // Normal match end
	nGMBattleGameStatusBossDefeat, // Master Hand defeated
	nGMBattleGameStatusSet		   // Player has input A + B + Z + R / 1P Game Stage End?

} gmMatchGameStatus;

typedef enum gmMatchItemSwitch
{
	nGMBattleItemSwitchNone,
	nGMBattleItemSwitchVeryLow,
	nGMBattleItemSwitchLow,
	nGMBattleItemSwitchMiddle,
	nGMBattleItemSwitchHigh,
	nGMBattleItemSwitchVeryHigh

} gmMatchItemSwitch;

typedef enum gmMatchGameRules
{
	nGMBattleGameRuleTime,
	nGMBattleGameRuleStock,
	nGMBattleGameRuleBonus,
	nGMBattleGameRule1PGame

} gmMatchGameRules;

#define GMBATTLE_GAMERULE_TIME 	 (1 << nGMBattleGameRuleTime)	// 0x1
#define GMBATTLE_GAMERULE_STOCK	 (1 << nGMBattleGameRuleStock)  // 0x2
#define GMBATTLE_GAMERULE_BONUS  (1 << nGMBattleGameRuleBonus) 	// 0x4
#define GMBATTLE_GAMERULE_1PGAME (1 << nGMBattleGameRule1PGame) // 0x8

typedef enum gm1PGameDifficulty
{
	nGM1PGameDifficultyVeryEasy,
	nGM1PGameDifficultyEasy,
	nGM1PGameDifficultyNormal,
	nGM1PGameDifficultyHard,
	nGM1PGameDifficultyVeryHard

} gm1PGameDifficulty;

typedef enum gmBackupProtectPenalty
{
	nGMBackupErrorRandomKnockback,
	nGMBackupErrorHalfStickRange,
	nGMBackupError1PGameMario,
	nGMBackupErrorBattleCastle

} gmBackupProtectPenalty;

#define GMBACKUP_ERROR_RANDOMKNOCKBACK (1 << nGMBackupErrorRandomKnockback)		// 0x1 - Random knockback between 0.1 (?) and 1.0 x 200u
#define GMBACKUP_ERROR_HALFSTICKRANGE  (1 << nGMBackupErrorHalfStickRange)		// 0x2 - Halves control stick input range
#define GMBACKUP_ERROR_1PGAMEMARIO 	(1 << nGMBackupError1PGameMario) 			// 0x4 - Forces Mario in 1P Game
#define GMBACKUP_ERROR_VSMODECASTLE (1 << nGMBackupErrorBattleCastle) 			// 0x8 - Forces Peach's Castle in VS Mode

typedef enum gmMatchGameType
{
	nGMBattleGameTypeDemo,          // 0x0
	nGMBattleGameTypeVSMode,        // 0x1
	nGMBattleGameTypeBonus,         // 0x2
	nGMBattleGameTypeExplain,       // 0x3
	nGMBattleGameTypeOpening,       // 0x4
	nGMBattleGameType1PGame,        // 0x5
	nGMBattleGameTypeUnk6,          // 0x6
	nGMBattleGameTypeTraining   	// 0x7

} gmMatchGameType;

typedef enum gm1PGameStageKind
{
	nGM1PGameStageCommonStart,
	nGM1PGameStageLink = nGM1PGameStageCommonStart,			// VS Link
	nGM1PGameStageYoshi,									// VS Yoshi Team
	nGM1PGameStageFox,										// VS Fox
	nGM1PGameStageBonus1,									// Break the Targets
	nGM1PGameStageMario,									// VS Mario Bros.
	nGM1PGameStagePikachu, 									// VS Pikachu
	nGM1PGameStageDonkey,									// VS Giant Donkey Kong
	nGM1PGameStageBonus2,									// Board the Platforms
	nGM1PGameStageKirby,									// VS Kirby Team
	nGM1PGameStageSamus,									// VS Samus
	nGM1PGameStageMetal,									// VS Metal Mario
	nGM1PGameStageBonus3,									// Race to the Finish
	nGM1PGameStageZako,										// VS Fighting Polygon Team
	nGM1PGameStageBoss,										// VS Master Hand
	nGM1PGameStageCommonEnd = nGM1PGameStageBoss,

	nGM1PGameStageChallengerStart,						   	// Start of unlockable character stages
	nGM1PGameStageLuigi = nGM1PGameStageChallengerStart, 	// Challenger Approaching: Luigi
	nGM1PGameStageNess,								   		// Challenger Approaching: Ness
	nGM1PGameStagePurin,								   	// Challenger Approaching: Jigglypuff
	nGM1PGameStageCaptain,								   	// Challenger Approaching: Captain Falcon
	nGM1PGameStageChallengerEnd = nGM1PGameStageCaptain  	// End of unlockable character stages

} gm1PGameStageKind;

typedef struct scAutoDemoProc
{
	u16 focus_end_wait;
	void (*proc_change)();
	void (*proc_focus)();

} scAutoDemoProc;

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
	u8 ft_kind[2];
	u8 opponent_behavior;
	u8 ally_count;
	u8 ally_behavior;

} gm1PGameStage;

typedef struct gm1PGameFighter
{
	s32 mapobj_kind; // Spawn position?
	void* anim_bank;
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

typedef struct scUnkDataBounds
{
	uintptr_t unk_scdatabounds_0x0;
	uintptr_t unk_scdatabounds_0x4;
	uintptr_t unk_scdatabounds_0x8;
	uintptr_t unk_scdatabounds_0xC;
	u32 unk_0x10;
	u32 unk_0x14;
	u32 unk_0x18;

} scUnkDataBounds;

typedef struct scRuntimeInfo
{
	void* unk_pointer_0x0;
	void* unk_pointer_0x4;
	void* unk_pointer_0x8;
	void* unk_scruntime_0xC;
	u32 arena_size;
	void* unk_pointer_0x14;
	void* unk_pointer_0x18;
	void* unk_pointer_0x1C;
	s32 unk_0x20;
	s32 unk_0x24;
	s32 unk_0x28;
	s32 unk_0x2C;
	s32 unk_0x30;
	void* unk_pointer_0x34;
	void* unk_pointer_0x38;
	void* unk_pointer_0x3C;
	s32 unk_0x40;
	s32 unk_0x44;
	s32 unk_0x48;
	s32 unk_0x4C;
	s32 unk_0x50;
	s32 unk_0x54;
	s32 unk_0x58;
	s32 unk_0x5C;
	void* unk_scruntime_0x60;
	s32 unk_0x64;
	void* unk_pointer_0x68;
	void* unk_pointer_0x6C;
	s32 unk_0x70;
	s32 unk_0x74;
	s32 unk_0x78;
	s32 unk_0x7C;
	s32 unk_0x80;
	s32 unk_0x84;
	void (*proc_start)(); // 0x88

} scRuntimeInfo; // This is actually something from gtl.c, will have to move at a later point

typedef struct gmStaleInfo
{
	u16 attack_id, motion_count;

} gmStaleInfo;

typedef struct gmBattleResults
{
	s32 tko;
	s32 kos;
	u8 player_or_team;
	u8 unk_battleres_0x9;
	ub8 is_human_player;

} gmBattleResults;

typedef struct gmPlayerBlock
{
	u8 level;		   		// Actually begins at 1 instead of 0
	u8 handicap;	   		// Master Hand's handicap value is 35!?
	u8 pl_kind;	   			// 0 = HMN, 1 = CPU, 2 = none (?), 5 = How to Play (?)
	u8 ft_kind; 			// Same as ftKind
	u8 team;
	u8 player; 				// Identical to team if team battle is on?
	u8 costume;
	u8 shade; 				// Color overlay applied when several players use the same
							// costume
	u8 player_color;		// Used for emblems, player tags, and possibly more
	ub8 is_single_stockicon;// Whether player's stock is permanent or a limited
							// amount
	u8 tag_kind;			// Player tag sprite index (i.e. 1P, 2P, 3P, 4P, CP or heart)
	s8 stock_count;			// -1 = player has no stocks
	ub8 is_spgame_team;		// Respawn flag of multi-man enemy teams (Yoshi,
							// Kirby, Fighting Polygons) in 1P mode
	u8 placement;			// Player's placement in battle results
	s32 falls;
	s32 score;								  // Caps at positive 999, crashes if way too low in the negatives
	s32 total_ko_player[GMBATTLE_PLAYERS_MAX]; // KOs scored on other players
	s32 unk_pblock_0x28;
	s32 unk_pblock_0x2C;
	s32 total_self_destruct;					  // Applied when damaging player's ID is -1 or GMBATTLE_PLAYERS_MAX
	s32 total_damage_dealt;						  // Total damage dealt to all players
	s32 total_damage_all;						  // Damage received from all hazards
	s32 total_damage_player[GMBATTLE_PLAYERS_MAX];// Total damage received from each player present
	s32 stock_damage_all;						  // All damage received per current stock, from any hazard
	s32 combo_damage_foe;						  // Total damage from consecutive hits dealt by foes (Resets when hitstun ends)
	s32 combo_count_foe;						  // Number of consecutive hits received from foes (Resets when hitstun ends)
	GObj *fighter_gobj;							  // Pointer to player's fighter GObj
	u32 stale_id;							  	  // Current position in stale queue?
	gmStaleInfo stale_info[5];

} gmPlayerBlock;

typedef struct gmBattleState
{
	u8 game_type;
	u8 gr_kind;
	ub8 is_team_battle;
	u8 game_rules; 			// Series of flags; 0x1 = time, 0x2 = stock
	u8 pl_count;			// Number of human players registered
	u8 cp_count;			// Number of computer players registered
	u8 time_limit;
	u8 stock_setting;	 	// Number of stocks set in game rules
	u8 handicap_setting; 	// 0 = OFF, 1 = ON, 2 = AUTO
	ub8 is_team_attack;	 	// 0 = OFF, 1 = ON
	ub8 is_stage_select; 	// 0 = OFF, 1 = ON
	u8 damage_ratio;
	u32 item_toggles; 		// Bits = item's on/off switch from match settings
	u8 unk_0x10;
	u8 game_status;
	u8 unk_0x12;
	u8 unk_0x13;
	u32 match_time_remain;	// Frames remaining until timeout
	u32 match_time_current; // Current match frame, counts up from 0
	u8 item_switch;			// Has various settings (0x0 on Master Hand and Giant DK
							// (?), 0x1 on Metal Mario battle, 0x2 on Hyrule Castle,
							// 0x3 on various stages, 0x4 on Polygon Team?
	ub32 is_display_score : 1;						// Displays score when a fighter falls
	ub32 is_not_teamshadows : 1;					// If FALSE, shadows are colored based on
													// players' team affiliation, otherwise use
													// default shadow color
	gmPlayerBlock players[GMBATTLE_PLAYERS_MAX]; 	// Holds data for each player

} gmBattleState;

typedef struct gmBackupVSRecord
{
	/* 0x00 */ u16 ko_count[GMCOMMON_CHAR_NUM_PLAYABLE];
	/* 0x18 */ u32 time_used; //< in seconds
	/* 0x1C */ u32 damage_dealt;
	/* 0x20 */ u32 damage_taken;
	/* 0x24 */ u16 unk;
	/* 0x26 */ u16 self_destructs;
	/* 0x28 */ u16 games_played;
	/* 0x2A */ u16 player_count_tally;
	/* 0x2C */ u16 player_count_tallies[GMCOMMON_CHAR_NUM_PLAYABLE];
	/* 0x44 */ u16 played_against[GMCOMMON_CHAR_NUM_PLAYABLE];

} gmBackupVSRecord; // size == 0x5C

typedef struct gmBackup1PRecord
{
	u32 spgame_hiscore;
	u32 spgame_continues;
	u32 spgame_bonuses;
	u8 spgame_best_difficulty;
	u32 bonus1_time;	  // Break the Targets high score
	u8 bonus1_task_count; // Targets broken
	u32 bonus2_time;	  // Board the Platforms high score
	u8 bonus2_task_count; // Platforms boarded
	u8 spgame_complete;	  // Whether character has completed 1P Game or not

} gmBackup1PRecord;

// is this the saved data structure?
typedef struct gmBackupInfo
{
	gmBackupVSRecord vs_records[GMCOMMON_CHAR_NUM_PLAYABLE];
	ub8 is_allow_screenflash; 	// Toggle for enabling white screen flash when,
							  	// for example, a character takes too much
							  	// damage. Leftover from unused "background
							  	// flash" option? It is always toggled ON, even
							  	// after clearing the save data.
	ub8 sound_mono_or_stereo; 
	s16 unk452;
	s16 unk454;
	u8 unk456;
	u8 unlock_mask;
	u16 character_mask; 		// Mask of unlocked characters?
	u8 spgame_difficulty;
	u8 spgame_stock_count;
	gmBackup1PRecord spgame_records[GMCOMMON_CHAR_NUM_PLAYABLE];
	u16 unlock_task_inishie;   	// Records mask of unique stages played in VS mode
	u8 unlock_task_itemswitch; 	// Records number of VS games played for Item
							   	// Switch unlock
	u16 vsgame_total;		   	// Total amount of VS games played?
	u8 error_flags;		   		// Some kind of anti-piracy measure??? 0x1 results in
							   	// random knockback velocity, 0x2 halves stick range, 0x4
							   	// forces Mario in 1P game, 0x8 forces Peach's Castle
	u8 unk5E3;
	u8 unk5E4;
	u8 unk5E5;
	u8 unk5E6;
	u8 unk5E7;
	s32 checksum; 				// Checksum of save data

} gmBackupInfo; // size == 0x5EC

typedef struct gmSceneInfo
{
	u8 scene_current;
	u8 scene_previous;
	u8 unlocked_features[2];
	u8 pad04[0x09 - 0x04];
	u8 challenger_ft_kind;		// Opponent being fought in "Challenger Approaching" battle
	u8 unk0A;
	u8 pad0B[0xD - 0xB];
	u8 demo_ft_kind[2];
	u8 gr_kind;
	u8 unk10;
	ub8 is_select_continue;
	ub8 is_reset; 				// Player did A + B + R + Z button combination
	u8 spgame_player;
	u8 ft_kind;
	u8 costume;
	u8 spgame_time_limit;
	u8 spgame_stage; 			// 1P Game stage (0 = VS Link, 1 = VS Yoshi Team, etc.)
	u8 ally_players[2];			// CPU player ports
	u32 spgame_time_seconds; 	// Timer of current match in seconds
	u32 spgame_score;
	u32 continues_used;
	u32 bonus_count;	   		// Number of bonuses player acquired throughout the game
	u32 bonus_get_mask[3]; 		// Different bonuses the player has accumulated per match; also includes total Bonus Stage tasks completed in last member
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
#define GM1PGAME_BONUS_MASK0_MEWCATCHER		(1 << GM1PGAME_BONUS_KIND_MEWCATCHER)	        // Mew was released from player's Pok� Ball
#define GM1PGAME_BONUS_MASK0_STARCLEAR		(1 << GM1PGAME_BONUS_KIND_STARCLEAR)	        // Cleared stage while under the effect of Star Man
#define GM1PGAME_BONUS_MASK0_VEGETARIAN		(1 << GM1PGAME_BONUS_KIND_VEGETARIAN)	        // Consumed 3 or more Maxim Tomatoes
#define GM1PGAME_BONUS_MASK0_HEARTTHROB		(1 << GM1PGAME_BONUS_KIND_HEARTTHROB)	        // Consumed 3 or more Hearts
#define GM1PGAME_BONUS_MASK0_THROWDOWN		(1 << GM1PGAME_BONUS_KIND_THROWDOWN)	        // KO'd last enemy with a throw

// Second set of bonuses
#define GM1PGAME_BONUS_MASK1_SMASHMANIA		(1 << (GM1PGAME_BONUS_KIND_SMASHMANIA-32))      // Only used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SMASHLESS		(1 << (GM1PGAME_BONUS_KIND_SMASHLESS-32))	    // Never used Smash Attacks
#define GM1PGAME_BONUS_MASK1_SPECIALMOVE	(1 << (GM1PGAME_BONUS_KIND_SPECIALMOVE-32))	    // Only used Special Attacks
#define GM1PGAME_BONUS_MASK1_SINGLEMOVE		(1 << (GM1PGAME_BONUS_KIND_SINGLEMOVE-32))      // Only used the same Special Attack
#define GM1PGAME_BONUS_MASK1_POKEMONFINISH	(1 << (GM1PGAME_BONUS_KIND_POKEMONFINISH-32))	// KO'd last enemy with a Pok�mon (Saffron City Pok�mon projectiles also count, but not the Pok�mon themselves?)
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

extern gmBattleState *gBattleState, gDefaultBattleState, D_800A4B18, gTransferBattleState, D_800A4EF8;
extern gmBackupInfo gSaveData, gDefaultSaveData;
extern gmSceneInfo gSceneData, gDefaultSceneData;

typedef struct Unk800D4060
{
	u32 unk_b0;

} Unk800D4060;

#endif
