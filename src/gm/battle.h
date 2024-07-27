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

#define GMBACKUPINFO_CHARACTER_MASK_ALL	\
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

#define GMBACKUPINFO_CHARACTER_MASK_UNLOCK	\
(											\
	gmBackupChrMask(nFTKindNess) 		|	\
	gmBackupChrMask(nFTKindPurin) 		| 	\
	gmBackupChrMask(nFTKindCaptain) 	| 	\
	gmBackupChrMask(nFTKindLuigi)			\
)

#define GMBACKUPINFO_CHARACTER_MASK_STARTER (GMBACKUPINFO_CHARACTER_MASK_ALL & ~GMBACKUPINFO_CHARACTER_MASK_UNLOCK)

typedef enum gmBackupUnlock
{
	nGMBackupUnlockLuigi,	 	// Luigi
	nGMBackupUnlockNess,		// Ness
	nGMBackupUnlockCaptain,	 	// Captain Falcon
	nGMBackupUnlockPurin,	 	// Jigglypuff
	nGMBackupUnlockInishie,	 	// Mushroom Kingdom
	nGMBackupUnlockSoundTest, 	// Sound Test menu
	nGMBackupUnlockItemSwitch 	// Item Switch menu

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

#define GMBACKUP_PROTECTFAIL_RANDOMKNOCKBACK (1 << nGMBackupErrorRandomKnockback)	// 0x1 - Random knockback between 0.1 (?) and 1.0 x 200u
#define GMBACKUP_PROTECTFAIL_HALFSTICKRANGE  (1 << nGMBackupErrorHalfStickRange)	// 0x2 - Halves control stick input range
#define GMBACKUP_PROTECTFAIL_1PGAMEMARIO 	(1 << nGMBackupError1PGameMario) 			// 0x4 - Forces Mario in 1P Game
#define GMBACKUP_PROTECTFAIL_VSMODECASTLE (1 << nGMBackupErrorBattleCastle) 		// 0x8 - Forces Peach's Castle in VS Mode

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
	nGM1PGameStageLink,		// VS Link
	nGM1PGameStageYoshi,	// VS Yoshi Team
	nGM1PGameStageFox,		// VS Fox
	nGM1PGameStageBonus1,	// Break the Targets
	nGM1PGameStageMario,	// VS Mario Bros.
	nGM1PGameStagePikachu, 	// VS Pikachu
	nGM1PGameStageDonkey,	// VS Giant Donkey Kong
	nGM1PGameStageBonus2,	// Board the Platforms
	nGM1PGameStageKirby,	// VS Kirby Team
	nGM1PGameStageSamus,	// VS Samus
	nGM1PGameStageMetal,	// VS Metal Mario
	nGM1PGameStageBonus3,	// Race to the Finish
	nGM1PGameStageZako,		// VS Fighting Polygon Team
	nGM1PGameStageBoss,		// VS Master Hand

	nGM1PGameStageChallengerStart,						   	// Start of unlockable character stages
	nGM1PGameStageLuigi = nGM1PGameStageChallengerStart, 	// Challenger Approaching: Luigi
	nGM1PGameStageNess,								   		// Challenger Approaching: Ness
	nGM1PGameStagePurin,								   	// Challenger Approaching: Jigglypuff
	nGM1PGameStageCaptain,								   	// Challenger Approaching: Captain Falcon
	nGM1PGameStageChallengerEnd = nGM1PGameStageCaptain  	// End of unlockable character stages

} gm1PGameStageKind;

typedef enum scMajorScene
{
	scMajor_Kind_NoController,      // "No Controller" screen
	scMajor_Kind_Title,             // Title screen
	scMajor_Kind_DebugMPSel,       // Debug stage select
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
	scMajor_Kind_1PContinue,        // "Continue?" screen
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
	u8 team_index;
	u8 player; 				// Identical to team index if team battle is on?
	u8 costume;
	u8 shade; 				// Color overlay applied when several players use the same
							// costume
	u8 player_color_index;	// Used for emblems, player tags, and possibly more
	ub8 is_single_stockicon;// Whether player's stock is permanent or a limited
							// amount
	u8 tag_kind;			// Player tag sprite index (i.e. 1P, 2P, 3P, 4P, CP or heart)
	s8 stock_count;			// -1 = player has no stocks
	ub8 is_rebirth_multi;	// Respawn flag of multi-man enemy teams (Yoshi,
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

typedef struct gmBackupVSRecordCombo
{
	/* 0x00 */ u16 games_with;
	/* 0x02 */ u16 games_played_against;

} gmBackupVSRecordCombo; // size == 4

typedef struct gmBackupVSRecord
{
	/* 0x00 */ u16 ko_count[GMCOMMON_CHAR_NUM_PLAYABLE];
	/* 0x18 */ u32 time_used; //< in seconds
	/* 0x1C */ u32 damage_dealt;
	/* 0x20 */ u32 damage_taken;
	/* 0x24 */ u16 self_destructs;
	/* 0x26 */ u16 games_played;
	/* 0x28 */ u16 games_played_against;
	/* 0x2C */ gmBackupVSRecordCombo combinations[GMCOMMON_CHAR_NUM_PLAYABLE];

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
	ub8 is_allow_screenflash; // Toggle for enabling white screen flash when,
							  // for example, a character takes too much
							  // damage. Leftover from unused "background
							  // flash" option? It is always toggled ON, even
							  // after clearing the save data.
	u8 unk451;
	s16 unk452;
	s16 unk454;
	u8 unk456;
	u8 unlock_mask;
	u16 character_mask; // Mask of unlocked characters?
	u8 spgame_difficulty;
	u8 spgame_stock_count;
	gmBackup1PRecord spgame_records[GMCOMMON_CHAR_NUM_PLAYABLE];
	u16 unlock_task_inishie;   // Records mask of unique stages played in VS mode
	u8 unlock_task_itemswitch; // Records number of VS games played for Item
							   // Switch unlock
	u16 vsgame_total;		   // Total amount of VS games played?
	u8 mprotect_fail;		   // Some kind of anti-piracy measure??? 0x1 results in
							   // random knockback velocity, 0x2 halves stick range, 0x4
							   // forces Mario in 1P game, 0x8 forces Peach's Castle
	u8 unk5E3;
	u8 unk5E4;
	u8 unk5E5;
	u8 unk5E6;
	u8 unk5E7;
	s32 mprotect_hash; // Checksum of save data

} gmBackupInfo; // size == 0x5EC

typedef struct gmSceneInfo
{
	u8 scene_current;
	u8 scene_previous;
	u8 unk02;
	u8 pad03[0x09 - 0x03];
	u8 unk09;
	u8 unk0A;
	u8 pad0B[0xD - 0xB];
	u8 demo_ft_kind[2];
	u8 gr_kind;
	u8 unk10;
	ub8 is_select_continue;
	ub8 is_reset; // Player did A + B + R + Z button combination
	u8 spgame_player;
	u8 ft_kind;
	u8 costume;
	u8 spgame_time_limit;
	u8 spgame_stage; // 1P Game stage (0 = VS Link, 1 = VS Yoshi Team, etc.)
	u8 cpu_port[3];
	u32 spgame_time_seconds; // Timer of current match in seconds
	u32 spgame_score;
	u32 continues_used;
	u32 bonus_count;	   // Number of bonuses player acquired throughout the game
	u32 bonus_get_mask[2]; // Different bonuses the player has accumulated per
						   // match
	u8 bonus_tasks_complete;
	u8 unk39;
	u8 unk3A;
	u8 unk3B;
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
extern gmBackupInfo gSaveData, gDefaultSaveData;
extern gmSceneInfo gSceneData, gDefaultSceneData;

typedef struct Unk800D4060
{
	u32 unk_b0;

} Unk800D4060;

#endif
