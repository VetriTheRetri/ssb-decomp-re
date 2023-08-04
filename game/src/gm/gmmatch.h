#ifndef _GMMATCH_H_
#define _GMMATCH_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

#define DARIANTOU_CHR_PLAYABLE_MAX 12
#define GMMATCH_PLAYERS_MAX 4 // Global limit for simultaneous players in a match

#define gmSaveChrMask(kind) (1 << (kind))
#define gmSaveGndMask(kind) (1 << (kind))

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
#define GMSAVE_UNLOCK_MASK_NEWCOMERS    (GMSAVE_UNLOCK_MASK_PURIN | GMSAVE_UNLOCK_MASK_CAPTAIN | GMSAVE_UNLOCK_MASK_NESS | GMSAVE_UNLOCK_MASK_LUIGI)
#define GMSAVE_UNLOCK_MASK_PRIZE        (GMSAVE_UNLOCK_MASK_ALL & ~GMSAVE_UNLOCK_MASK_NEWCOMERS)

#define GMSAVE_GROUND_MASK_ALL      \
(                                   \
    gmSaveGndMask(Gr_Kind_Castle) | \
    gmSaveGndMask(Gr_Kind_Sector) | \
    gmSaveGndMask(Gr_Kind_Jungle) | \
    gmSaveGndMask(Gr_Kind_Zebes)  | \
    gmSaveGndMask(Gr_Kind_Hyrule) | \
    gmSaveGndMask(Gr_Kind_Yoster) | \
    gmSaveGndMask(Gr_Kind_Pupupu) | \
    gmSaveGndMask(Gr_Kind_Yamabuki) \
)                                   \

typedef enum gmMatch_PauseStatus
{
    gmMatch_PauseStatus_Disable,        // Pausing not allowed
    gmMatch_PauseStatus_Enable,         // Pausing allowed
    gmMatch_PauseStatus_Paused,         // Player paused
    gmMatch_PauseStatus_Unpause         // Player unpaused

} gmMatch_PauseStatus;

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
    gmSave_ProtectFail_1PGameMario

} gmSaveProtectPenalty;

#define GMSAVE_PROTECTFAIL_RANDOMKNOCKBACK  (1 << gmSave_ProtectFail_RandomKnockback)   // 0x1
#define GMSAVE_PROTECTFAIL_HALFSTICKRANGE   (1 << gmSave_ProtectFail_HalfStickRange)    // 0x2
#define GMSAVE_PROTECTFAIL_1PGAMEMARIO      (1 << gmSave_ProtectFail_1PGameMario)       // 0x4

typedef enum gmMatchGameType
{
    gmMatch_GameType_Demo,
    gmMatch_GameType_VSMode,
    gmMatch_GameType_Bonus,
    gmMatch_GameType_HowToPlay,
    gmMatch_GameType_1PGame = 5

} gmMatchGameType;

typedef enum gmSceneIndex
{
    gmSceneIndex_Challenger_Ness = 0xF,
    gmSceneIndex_Challenger_Purin,
    gmSceneIndex_Challenger_Captain

} gmSceneIndex;

typedef struct gmItemSpawn
{
    u8 max_items; // Maximum number of items allowed to spawn?
    u8 *item_toggles; // Pointer to array of item on/off toggles
    u32 item_spawn_wait; // Spawn a random new item when this reaches 0
    void *unk_0xC;
    u32 unk_0x10;
    s8 unk_0x14;
    u8 *unk_0x18;
    u16 unk_0x1C; // Also max items?
    u16 *unk_0x20;

} gmItemSpawn;

typedef struct Unk_8017301C_Halfword // CODE RED, return to this later (it matches but NEEDS cleanup)
{
    u16 unk_0x0[1];

} Unk_8017301C_Halfword;

typedef struct Unk_8018D048
{
    u8 filler_0x0[0x8];
    u8 unk_0x8;
    u8 *unk_0xC;
    u16 unk_0x10;
    u16 *unk_0x14;

} Unk_8018D048; // Found in func_ovl3_8016EF40, very similar similar to gmItemSpawn

typedef struct Unk_80131460_Ptr74
{
    u8 filler_0x0[0x3C];
    Vec3f unk_p_80131460_vec;
    f32 unk_0x48;

} Unk_80131460_Ptr74;

typedef struct Unk_80131460
{
    u8 filler_0x0[0x74];
    Unk_80131460_Ptr74 *unk_0x74;

} Unk_80131460;

typedef struct Unk_801314B0
{
    u8 filler_0x0[0x38];
    Vec3i unk_0x38;

} Unk_801314B0;

extern GObj *gpCameraGObj;
extern void *D_ovl2_80131470;
extern Unk_801314B0 D_ovl2_801314B0;

static mpEdgeBounds gMapEdgeBounds;

typedef struct gmStaleInfo
{
    u16 attack_id, motion_count;

} gmStaleInfo;

typedef struct gmPlayerBlock
{
    u8 level; // Actually begins at 1 instead of 0
    u8 handicap; // Master Hand's handicap value is 35!?
    u8 player_kind; // 0 = HMN, 1 = CPU, 5 = How to Play (?)
    u8 character_kind; // Same as ftKind
    u8 team_index;
    u8 player; // Identical to team index if team battle is on?
    u8 costume_index;
    u8 shade_index; // Color overlay applied when several players use the same costume
    u8 unk_0x8;
    u8 unk_0x9;
    u8 unk_0xA;
    s8 stock_count; // -1 = player has no stocks
    u8 is_rebirth_multi; // Respawn flag of multi-man enemy teams (Yoshi, Kirby, Fighting Polygons) in 1P mode
    s32 falls;
    s32 score; // Caps at positive 999, crashes if way too low
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

typedef struct gmMatchInfo
{
    u8 game_type;
    u8 gr_kind;
    u8 is_team_battle;
    u8 match_rules; // Series of flags; 0x1 = time, 0x2 = stock
    u8 unk_0x4;
    u8 unk_0x5;
    u8 unk_0x6;
    u8 stock_setting; // Number of stocks set in game rules
    u8 handicap_setting; // 0 = OFF, 1 = ON, 2 = AUTO
    u8 is_team_attack; // Boolean for friendly fire
    u8 unk_0xA;
    u8 damage_ratio;
    u32 item_toggles; // Bits = item's on/off switch from match settings
    u8 unk_0x10;
    u8 pause_status;
    u8 unk_0x12;
    u8 unk_0x13;
    u32 match_time_remain; // Frames remaining until timeout
    u32 match_time_current; // Current match frame, counts up from 0
    u8 item_switch; // Has various settings (0x0 on Master Hand and Giant DK (?), 0x1 on Metal Mario battle, 0x2 on Hyrule Castle, 0x3 on various stages, 0x4 on Polygon Team? 
    u32 is_display_score : 1;       // Displays score when a fighter falls
    u32 is_ignore_teamshadow : 1;   // If FALSE, shadows are colored based on players' team affiliation, otherwise use default shadow color
    gmPlayerBlock player_block[GMMATCH_PLAYERS_MAX]; // Holds data for each player

} gmMatchInfo;

typedef struct gmSaveVSRecordCombo
{
    /* 0x00 */ u16 games_with;
    /* 0x02 */ u16 games_played_against;

} gmSaveVSRecordCombo; // size == 4

typedef struct gmSaveVSRecord 
{
    /* 0x00 */ u16 ko_count[DARIANTOU_CHR_PLAYABLE_MAX];
    /* 0x18 */ u32 time_used; //< in seconds
    /* 0x1C */ u32 damage_dealt;
    /* 0x20 */ u32 damage_taken;
    /* 0x24 */ u16 self_destructs;
    /* 0x26 */ u16 games_played;
    /* 0x28 */ u16 games_played_against;
    /* 0x2C */ gmSaveVSRecordCombo combinations[DARIANTOU_CHR_PLAYABLE_MAX];

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
    gmSaveVSRecord vs_records[DARIANTOU_CHR_PLAYABLE_MAX];
    u8 unk450;
    u8 unk451;
    s16 unk452;
    s16 unk454;
    u8 unk456;
    u8 unlock_mask;
    u16 unk458;
    u8 spgame_difficulty;
    u8 spgame_stock_count;
    gmSave1PRecord spgame_records[DARIANTOU_CHR_PLAYABLE_MAX];
    u16 unlock_task_inishie;    // Records mask of unique stages played in VS mode
    u8 unlock_task_itemswitch;  // Records number of VS games played for Item Switch unlock
    u16 vsgame_total;           // Total amount of VS games played?
    u8 mprotect_fail;           // Some kind of anti-piracy measure??? 0x1 results in random knockback velocity, 0x2 halves stick range, 0x4 forces Mario in 1P game
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
    u8 unk0F;
    u8 unk10;
    u8 is_select_continue;
    u8 unk12;
    u8 player_port;
    u8 ft_kind;
    u8 costume_index;
    u8 pad16[0x17 - 0x16];
    u8 scene_queue; // Unconfirmed
    u8 cpu_port[3];
    u8 pad20[0x20 - 0x1B];
    u32 spgame_score;
    u32 continues_used;
    u32 bonuses; // Number of bonuses player acquired throughout the game
    u32 bonus_get_mask[2]; // Different bonuses the player has accumulated per match
    u8 pad34[0x38 - 0x34];
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 unk3E;
    u8 unk3F;
    u8 unk40;
    u8 unk41;
    u8 unk42;
    u8 unk43;
    u8 unk44;
    u8 unk45;
    u8 unk46;
    u8 unk47;

} gmSceneInfo; // size == 0x48

extern gmMatchInfo *gpBattleState, gDefaultBattleState, D_800A4D08;
extern gmSaveInfo gSaveData, gDefaultSaveData;
extern gmSceneInfo gSceneData, D_800A3F80;

#endif