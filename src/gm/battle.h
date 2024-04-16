#ifndef _BATTLE_H_
#define _BATTLE_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>
#include <PR/gu.h>

#include "gmmisc.h"

#define DAIRANTOU_CHR_PLAYABLE_MAX 12

#define GMMATCH_TIMELIMIT_INFINITE 100
#define GMMATCH_BONUSGAME_TASK_MAX 10
#define GMMATCH_PLAYERS_MAX 4 // Global limit for simultaneous players in a match

#define gmSaveChrMask(kind) (1 << (kind))
#define gmSaveMapMask(kind) (1 << (kind))

#define GMSAVEINFO_CHARACTER_MASK_ALL                                                                                  \
	(gmSaveChrMask(Ft_Kind_Mario) | gmSaveChrMask(Ft_Kind_Fox) | gmSaveChrMask(Ft_Kind_Donkey)                         \
	 | gmSaveChrMask(Ft_Kind_Samus) | gmSaveChrMask(Ft_Kind_Luigi) | gmSaveChrMask(Ft_Kind_Link)                       \
	 | gmSaveChrMask(Ft_Kind_Yoshi) | gmSaveChrMask(Ft_Kind_Captain) | gmSaveChrMask(Ft_Kind_Kirby)                    \
	 | gmSaveChrMask(Ft_Kind_Pikachu) | gmSaveChrMask(Ft_Kind_Purin) | gmSaveChrMask(Ft_Kind_Ness))

#define GMSAVEINFO_CHARACTER_MASK_UNLOCK                                                                               \
	(gmSaveChrMask(Ft_Kind_Ness) | gmSaveChrMask(Ft_Kind_Purin) | gmSaveChrMask(Ft_Kind_Captain)                       \
	 | gmSaveChrMask(Ft_Kind_Luigi))

#define GMSAVEINFO_CHARACTER_MASK_STARTER (GMSAVEINFO_CHARACTER_MASK_ALL & ~GMSAVEINFO_CHARACTER_MASK_UNLOCK)

typedef enum gmSaveUnlock
{
	gmSave_Unlock_Luigi,	 // Luigi
	gmSave_Unlock_Ness,		 // Ness
	gmSave_Unlock_Captain,	 // Captain Falcon
	gmSave_Unlock_Purin,	 // Jigglypuff
	gmSave_Unlock_Inishie,	 // Mushroom Kingdom
	gmSave_Unlock_SoundTest, // Sound Test menu
	gmSave_Unlock_ItemSwitch // Item Switch menu

} gmSaveUnlock;

#define GMSAVE_UNLOCK_MASK_LUIGI (1 << gmSave_Unlock_Luigi)
#define GMSAVE_UNLOCK_MASK_NESS (1 << gmSave_Unlock_Ness)
#define GMSAVE_UNLOCK_MASK_CAPTAIN (1 << gmSave_Unlock_Captain)
#define GMSAVE_UNLOCK_MASK_PURIN (1 << gmSave_Unlock_Purin)
#define GMSAVE_UNLOCK_MASK_INISHIE (1 << gmSave_Unlock_Inishie)
#define GMSAVE_UNLOCK_MASK_SOUNDTEST (1 << gmSave_Unlock_SoundTest)
#define GMSAVE_UNLOCK_MASK_ITEMSWITCH (1 << gmSave_Unlock_ItemSwitch)

#define GMSAVE_UNLOCK_MASK_ALL                                                                                         \
	(GMSAVE_UNLOCK_MASK_ITEMSWITCH | GMSAVE_UNLOCK_MASK_SOUNDTEST | GMSAVE_UNLOCK_MASK_INISHIE                         \
	 | GMSAVE_UNLOCK_MASK_PURIN | GMSAVE_UNLOCK_MASK_CAPTAIN | GMSAVE_UNLOCK_MASK_NESS | GMSAVE_UNLOCK_MASK_LUIGI)
#define GMSAVE_UNLOCK_MASK_NEWCOMERS (GMSAVE_UNLOCK_MASK_PURIN | GMSAVE_UNLOCK_MASK_CAPTAIN | GMSAVE_UNLOCK_MASK_NESS)
#define GMSAVE_UNLOCK_MASK_PRIZE (GMSAVE_UNLOCK_MASK_ALL & ~GMSAVE_UNLOCK_MASK_NEWCOMERS)

#define GMSAVE_GROUND_MASK_ALL                                                                                         \
	(gmSaveMapMask(Gr_Kind_Castle) | gmSaveMapMask(Gr_Kind_Sector) | gmSaveMapMask(Gr_Kind_Jungle)                     \
	 | gmSaveMapMask(Gr_Kind_Zebes) | gmSaveMapMask(Gr_Kind_Hyrule) | gmSaveMapMask(Gr_Kind_Yoster)                    \
	 | gmSaveMapMask(Gr_Kind_Pupupu) | gmSaveMapMask(Gr_Kind_Yamabuki))

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
	gmMatch_GameStatus_Wait,	   // Match not yet started
	gmMatch_GameStatus_Go,		   // Ongoing match
	gmMatch_GameStatus_Pause,	   // Player paused
	gmMatch_GameStatus_Unpause,	   // Player unpaused
	gmMatch_GameStatus_End = 5,	   // Normal match end
	gmMatch_GameStatus_BossDefeat, // Master Hand defeated
	gmMatch_GameStatus_Set		   // Player has input A + B + Z + R / 1P Game Stage End?

} gmMatchGameStatus;

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

#define GMMATCH_GAMERULE_TIME (1 << gmMatch_GameRule_Time)	   // 0x1
#define GMMATCH_GAMERULE_STOCK (1 << gmMatch_GameRule_Stock)   // 0x2
#define GMMATCH_GAMERULE_BONUS (1 << gmMatch_GameRule_Bonus)   // 0x4
#define GMMATCH_GAMERULE_1PGAME (1 << gmMatch_GameRule_1PGame) // 0x8

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

#define GMSAVE_PROTECTFAIL_RANDOMKNOCKBACK                                                                             \
	(1 << gmSave_ProtectFail_RandomKnockback) // 0x1 - Random knockback between
											  // 0.1 (?) and 1.0 x 200u
#define GMSAVE_PROTECTFAIL_HALFSTICKRANGE                                                                              \
	(1 << gmSave_ProtectFail_HalfStickRange)								 // 0x2 - Halves control stick
																			 // input range
#define GMSAVE_PROTECTFAIL_1PGAMEMARIO (1 << gmSave_ProtectFail_1PGameMario) // 0x4 - Forces Mario in 1P Game
#define GMSAVE_PROTECTFAIL_VSMODECASTLE                                                                                \
	(1 << gmSave_ProtectFail_VSModeCastle) // 0x8 - Forces Peach's Castle in VS
										   // Mode

typedef enum gmMatchGameType
{
	gmMatch_GameType_Demo,		  // 0x0
	gmMatch_GameType_VSMode,	  // 0x1
	gmMatch_GameType_Bonus,		  // 0x2
	gmMatch_GameType_HowToPlay,	  // 0x3
	gmMatch_GameType_1PGame = 5,  // 0x5
	gmMatch_GameType_Unk6,		  // 0x6
	gmMatch_GameType_TrainingMode // 0x7

} gmMatchGameType;

typedef enum gm1PStageKind
{
	gm1PGame_Stage_Link,	// VS Link
	gm1PGame_Stage_Yoshi,	// VS Yoshi Team
	gm1PGame_Stage_Fox,		// VS Fox
	gm1PGame_Stage_Bonus1,	// Break the Targets
	gm1PGame_Stage_Mario,	// VS Mario Bros.
	gm1PGame_Stage_Pikachu, // VS Pikachu
	gm1PGame_Stage_Donkey,	// VS Giant Donkey Kong
	gm1PGame_Stage_Bonus2,	// Board the Platforms
	gm1PGame_Stage_Kirby,	// VS Kirby Team
	gm1PGame_Stage_Samus,	// VS Samus
	gm1PGame_Stage_Metal,	// VS Metal Mario
	gm1PGame_Stage_Bonus3,	// Race to the Finish
	gm1PGame_Stage_Zako,	// VS Fighting Polygon Team
	gm1PGame_Stage_Boss,	// VS Master Hand

	gm1PGame_Stage_ChallengerStart,						   // Start of unlockable character stages
	gm1PGame_Stage_Luigi = gm1PGame_Stage_ChallengerStart, // Challenger Approaching: Luigi
	gm1PGame_Stage_Ness,								   // Challenger Approaching: Ness
	gm1PGame_Stage_Purin,								   // Challenger Approaching: Jigglypuff
	gm1PGame_Stage_Captain,								   // Challenger Approaching: Captain Falcon
	gm1PGame_Stage_ChallengerEnd = gm1PGame_Stage_Captain  // End of unlockable character stages

} gm1PStageKind;

typedef enum scMajorScene
{
	scMajor_Kind_MnN64Start,	   // N64 startup logo
	scMajor_Kind_MnTitle,		   // Title screen
	scMajor_Kind_MnDbMapSel,	   // Debug stage select
	scMajor_Kind_MnDbSystem,	   // Debug main menu?
	scMajor_Kind_MnDbChrSel,	   // Debug character select
	scMajor_Kind_DbResScreen,	   // Debug results screen
	scMajor_Kind_DbPadTest,		   // Debug joystick test
	scMajor_Kind_MnMain,		   // Main Menu
	scMajor_Kind_Mn1PMode,		   // 1P mode menu
	scMajor_Kind_MnVSMode = 9,	   // VS mode
	scMajor_Kind_MnVSOptions,	   // VS mode options
	scMajor_Kind_Challenger = 13,  // Challenger approaching
	scMajor_Kind_1PTitleCard,	   // 1P game "[character] VS [opponent(s)]" screen
	scMajor_Kind_MnScreenSetup,	   // Screen adjust
	scMajor_Kind_VSChrSel,		   // VS mode character select
	scMajor_Kind_VSMapSel = 21,	   // VS mode map select
	scMajor_Kind_VSBattle,		   // VS mode in-game
	scMajor_Kind_VSResults = 24,   // VS mode results
	scMajor_Kind_MnVSRecords,	   // Records screen
	scMajor_Kind_MnChrData,		   // Character data screen
	scMajor_Kind_1PBonusGame = 53, // Bonus game in-game
	scMajor_Kind_1PTrainingMode,   // Training mode in-game
	scMajor_Kind_MnOptions = 57,   // Options menu
	scMajor_Kind_MnData = 58,	   // Data menu

} scMajorScene;

typedef struct gmItemSpawn
{
	u8 max_items;		 // Maximum number of items allowed to spawn?
	u8* item_toggles;	 // Pointer to array of item on/off toggles
	u32 item_spawn_wait; // Spawn a random new item when this reaches 0
	void* unk_0xC;
	u32 unk_0x10;
	s8 unk_0x14;
	u8* unk_0x18;
	u16 unk_0x1C; // Also max items?
	u16* unk_0x20;

} gmItemSpawn;

typedef struct gm1PGameCom
{
	ub8 is_team_attack;
	u8 item_switch;
	u8 level[5];
	u8 handicap[5];
	u8 level2[5];
	u8 handicap2[5];

} gm1PGameCom;

typedef struct gm1PGameStage
{
	u8 filler_0x0[0x1];
	u8 gr_kind;
	u8 filler_0x2[0x4 - 0x2];
	u32 item_toggles;
	u8 opponent_count; // Number of enemy players to spawn?
	u8 character_kind[2];
	u8 opponent_behavior;
	u8 ally_count;
	u8 ally_behavior;

} gm1PGameStage;

typedef struct g1PGamePlayer
{
	s32 mpoint_kind; // Spawn position?
	void* anim_bank;
	s32 copy_kind;
	s32 team_order;
	sb32 is_skip_entry;
	sb32 is_skip_magnify;
	u8 com_behavior;
	f32 cam_frame_mul;

} g1PGamePlayer;

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

typedef struct Unk_8017301C_Halfword // CODE RED, return to this later (it
									 // matches but NEEDS cleanup)
{
	u16 unk_0x0[1];

} Unk_8017301C_Halfword;

typedef struct Unk_8018D048
{
	u8 filler_0x0[0x8];
	u8 unk_0x8;
	u8* unk_0xC;
	u16 unk_0x10;
	u16* unk_0x14;

} Unk_8018D048; // Found in func_ovl3_8016EF40, very similar similar to
				// gmItemSpawn

typedef struct Unk_80131460_Ptr74
{
	u8 filler_0x0[0x3C];
	Vec3f unk_p_80131460_vec;
	f32 unk_0x48;

} Unk_80131460_Ptr74;

typedef struct Unk_80131460
{
	u8 filler_0x0[0x74];
	Unk_80131460_Ptr74* unk_0x74;

} Unk_80131460;

typedef struct cmStruct
{
	s32 status_default;
	s32 status_curr;
	s32 status_prev;
	void (*proc_camera)(GObj*);
	f32 cam_target_dist;
	Vec3f unk_cmstruct_0x14;
	s32 scissor_ulx;
	s32 scissor_uly;
	s32 scissor_lrx;
	s32 scissor_lry;
	s32 unk_cmstruct_0x30;
	s32 unk_cmstruct_0x34;
	Vec2i unk_0x38;
	f32 unk_cmstruct_0x40;
	GObj* pl_pause_gobj; // Guess: this is a struct from here...
	f32 unk_cmstruct_0x48;
	f32 unk_cmstruct_0x4C;
	f32 unk_cmstruct_0x50;
	f32 unk_cmstruct_0x54;
	f32 unk_cmstruct_0x58;
	Vec3f unk_cmstruct_0x5C;
	Vec3f unk_cmstruct_0x68; // ...to here
	GObj* pl_bonus_gobj;	 // ...and there is an array of it
	f32 unk_cmstruct_0x78;
	f32 unk_cmstruct_0x7C;
	f32 unk_cmstruct_0x80;
	f32 unk_cmstruct_0x84;
	f32 unk_cmstruct_0x88;
	Vec3f unk_cmstruct_0x8C;
	LookAt look_at_x;
	LookAt look_at_y;

} cmStruct;

typedef struct cmMatrixTemp // WARNING: Likely part of gbi.h? I don't know what
							// this struct is supposed to be.
{
	u8 filler_0x0[0x1C];
	u16 perspNorm;
	f32 f20;
	f32 f24;
	f32 f28;
	f32 f2C;
	f32 f30;
	f32 f34;
	f32 f38;
	f32 f3C;
	f32 f40;
	f32 f44;
	f32 f48;
	f32 f4C;
	f32 f50;
	f32 f54;
	f32 f58;
	f32 f5C;

} cmMatrixTemp;

typedef struct ifPlayerCommon
{
	u8 is_ifmagnify_display;
	u8 ifmagnify_mode;
	f32 ifmagnify_scale;
	s32* ifplayers_pos_x; // Pointer to each player's HUD X-position
	u16 ifplayers_pos_y;  // Player HUD's Y-positions - subtracted from center
						  // Y-position?
	u8 unk_80131580_0xE;
	u8 unk_80131580_0xF;
	u8 unk_80131580_0x10;

} ifPlayerCommon;

extern ifPlayerCommon gPlayerCommonInterface;

extern GObj* gCameraGObj;
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

} scRuntimeInfo;

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
	u8 level;		   // Actually begins at 1 instead of 0
	u8 handicap;	   // Master Hand's handicap value is 35!?
	u8 player_kind;	   // 0 = HMN, 1 = CPU, 2 = none (?), 5 = How to Play (?)
	u8 character_kind; // Same as ftKind
	u8 team_index;
	u8 player; // Identical to team index if team battle is on?
	u8 costume_index;
	u8 shade_index; // Color overlay applied when several players use the same
					// costume
	u8 player_color_index;	// Used for emblems, player tags, and possibly more
	ub8 is_permanent_stock; // Whether player's stock is permanent or a limited
							// amount
	u8 tag_index;			// Player tag sprite index (i.e. 1P, 2P, 3P, 4P, CP or heart)
	s8 stock_count;			// -1 = player has no stocks
	ub8 is_rebirth_multi;	// Respawn flag of multi-man enemy teams (Yoshi,
							// Kirby, Fighting Polygons) in 1P mode
	u8 placement;			// Player's placement in battle results
	s32 falls;
	s32 score;								  // Caps at positive 999, crashes if way too low in the negatives
	s32 total_ko_player[GMMATCH_PLAYERS_MAX]; // KOs scored on other players
	s32 unk_pblock_0x28;
	s32 unk_pblock_0x2C;
	s32 total_self_destruct;					  // Applied when damaging player's ID is -1 or
												  // GMMATCH_PLAYERS_MAX
	s32 total_damage_dealt;						  // Total damage dealt to all players
	s32 total_damage_all;						  // Damage received from all hazards
	s32 total_damage_player[GMMATCH_PLAYERS_MAX]; // Total damage received from
												  // each player present
	s32 stock_damage_all;						  // All damage received per current stock, from any
												  // hazard
	s32 combo_damage_foe;						  // Total damage from consecutive hits dealt by foes
												  // (Resets when hitstun ends)
	s32 combo_count_foe;						  // Number of consecutive hits received from foes
												  // (Resets when hitstun ends)
	GObj* fighter_gobj;							  // Pointer to player's fighter GObj
	u32 stale_index;							  // Current position in stale queue?
	gmStaleInfo stale_info[5];

} gmPlayerBlock;

typedef struct gmBattleState
{
	u8 game_type;
	u8 gr_kind;
	ub8 is_team_battle;
	u8 match_rules; // Series of flags; 0x1 = time, 0x2 = stock
	u8 pl_count;	// Number of human players registered
	u8 cp_count;	// Number of computer players registered
	u8 time_limit;
	u8 stock_setting;	 // Number of stocks set in game rules
	u8 handicap_setting; // 0 = OFF, 1 = ON, 2 = AUTO
	ub8 is_team_attack;	 // 0 = OFF, 1 = ON
	ub8 is_stage_select; // 0 = OFF, 1 = ON
	u8 damage_ratio;
	u32 item_toggles; // Bits = item's on/off switch from match settings
	u8 unk_0x10;
	u8 game_status;
	u8 unk_0x12;
	u8 unk_0x13;
	u32 match_time_remain;	// Frames remaining until timeout
	u32 match_time_current; // Current match frame, counts up from 0
	u8 item_switch;			// Has various settings (0x0 on Master Hand and Giant DK
					// (?), 0x1 on Metal Mario battle, 0x2 on Hyrule Castle,
					// 0x3 on various stages, 0x4 on Polygon Team?
	ub32 is_display_score : 1;						 // Displays score when a fighter falls
	ub32 is_ignore_teamshadow : 1;					 // If FALSE, shadows are colored based on
													 // players' team affiliation, otherwise use
													 // default shadow color
	gmPlayerBlock player_block[GMMATCH_PLAYERS_MAX]; // Holds data for each player

} gmBattleState;

typedef struct gmSaveVSRecordCombo
{
	/* 0x00 */ u16 games_with;
	/* 0x02 */ u16 games_played_against;

} gmSaveVSRecordCombo; // size == 4

typedef struct gmSaveVSRecord
{
	/* 0x00 */ u16 ko_count[DAIRANTOU_CHR_PLAYABLE_MAX];
	/* 0x18 */ u32 time_used; //< in seconds
	/* 0x1C */ u32 damage_dealt;
	/* 0x20 */ u32 damage_taken;
	/* 0x24 */ u16 self_destructs;
	/* 0x26 */ u16 games_played;
	/* 0x28 */ u16 games_played_against;
	/* 0x2C */ gmSaveVSRecordCombo combinations[DAIRANTOU_CHR_PLAYABLE_MAX];

} gmSaveVSRecord; // size == 0x5C

typedef struct gmSave1PRecord
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

} gmSave1PRecord;

// is this the saved data structure?
typedef struct gmSaveInfo
{
	gmSaveVSRecord vs_records[DAIRANTOU_CHR_PLAYABLE_MAX];
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
	gmSave1PRecord spgame_records[DAIRANTOU_CHR_PLAYABLE_MAX];
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

} gmSaveInfo; // size == 0x5EC

typedef struct gmSceneInfo
{
	u8 scene_current;
	u8 scene_previous;
	u8 unk02;
	u8 pad03[0x09 - 0x03];
	u8 unk09;
	u8 unk0A;
	u8 pad0B[0xF - 0xB];
	u8 gr_kind;
	u8 unk10;
	ub8 is_select_continue;
	ub8 is_reset; // Player did A + B + R + Z button combination
	u8 spgame_player;
	u8 ft_kind;
	u8 costume_index;
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

extern gmBattleState *gBattleState, gDefaultBattleState, D_800A4B18, D_800A4D08, D_800A4EF8;
extern gmSaveInfo gSaveData, gDefaultSaveData;
extern gmSceneInfo gSceneData, gDefaultSceneData;

typedef struct Unk800D4060
{
	u32 unk_b0 : 1;

} Unk800D4060;

#endif