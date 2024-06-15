#ifndef SCENEMGR_SCENE_MANGAGER_H
#define SCENEMGR_SCENE_MANGAGER_H

#include <PR/ultratypes.h>

// types
// the fields are only here to faciliate the entry of the raw data
// change as needed to fit the actual shape of the struct

#define SSB64_NUM_PLAYABLE_CHARACTERS 12

struct RecordCharCombo {
    /* 0x00 */ u16 gamesWith;
    /* 0x02 */ u16 playedAgainst;
}; // size == 4

struct VsRecordData {
    /* 0x00 */ u16 kos[SSB64_NUM_PLAYABLE_CHARACTERS];
    /* 0x18 */ u32 timeUsed; //< in seconds
    /* 0x1C */ u32 damageDealt;
    /* 0x20 */ u32 damageReceived;
    /* 0x24 */ u16 totalSDs;
    /* 0x26 */ u16 gamesPlayed;
    /* 0x28 */ u16 gamesPlayedAgainst;
    /* 0x2C */ struct RecordCharCombo combinations[SSB64_NUM_PLAYABLE_CHARACTERS];
}; // size == 0x5C

// is this the saved data structure?
struct gmSaveInfo {
    /* 0x000 */ struct VsRecordData vsRecords[SSB64_NUM_PLAYABLE_CHARACTERS];
    /* 0x450 */ u8 unk540[(0x5EC - 0x450)];
}; // size == 0x5EC

// global and battle settings?
struct gmSceneInfo {
    /* 0x00 */ u8 scene;
    /* 0x01 */ u8 previousScene;
    /* 0x02 */ u8 pad02[0x48 - 0x02];
}; // size == 0x48

struct BattlePlayerState {
    /* 0x00 */ u8 cpuLevel;
    /* 0x01 */ u8 handicapLevel;
    /* 0x02 */ u8 controlledBy;
    /* 0x03 */ u8 character;
    /* 0x04 */ u8 team;
    /* 0x05 */ u8 unk05;
    /* 0x06 */ u8 charColor;
    /* 0x08 */ u16 unk08[(0x74 - 0x8) / 2];
}; // size == 0x74

struct BattleState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 stageIdx;
    /* 0x02 */ u8 isTeamMode;
    /* 0x03 */ u8 timeStock;
    /* 0x04 */ u8 manPanelsOpen;
    /* 0x05 */ u8 cpuPanelsOpen;
    /* 0x06 */ u8 startingTime;
    /* 0x07 */ u8 startingStock; //< stock - 1
    /* 0x08 */ u8 handicapMode;
    /* 0x09 */ u8 teamAttackOn;
    /* 0x0A */ u8 vsModeStageSelect;
    /* 0x0B */ u8 damagePercentage;
    /* 0x0C */ u32 itemFlags;
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 pauseState;
    /* 0x14 */ u32 timeRemaining; //< in frames
    /* 0x18 */ u32 frameCounter;
    /* 0x1C */ u8 itemApperanceRate;
    /* 0x1D */ u8 unk1D;
    /* 0x1E */ u16 pad1E;
    /* 0x20 */ struct BattlePlayerState players[4];
}; // size == 0x1F0

enum TimeStockFlag { TIMESTOCK_TIME_ON = 1 << 0, TIMESTOCK_STOCK_ON = 1 << 1 };

enum HandicapMode { HANDICAP_MODE_OFF, HANDICAP_MODE_MANUAL, HANDICAP_MODE_AUTO };

enum ItemAppearanceRate {
    ITEM_RATE_NONE,
    ITEM_RATE_VERY_LOW,
    ITEM_RATE_LOW,
    ITEM_RATE_MIDDLE,
    ITEM_RATE_HIGH,
    ITEM_RATE_VERY_HIGH
};

enum PlayerControlledBy { PLAYER_CONTROL_MAN, PLAYER_CONTROL_CPU, PLAYER_NOT_PRESENT };

struct FighterInfo {
    /* 0x000 */ u8 pad00[0x08 - 0];
    /* 0x008 */ s32 kind;
    /* 0x00C */ u8 pad0C[0xD - 0xC];
    /* 0x00D */ u8 player;
    /* 0x00E */ u8 pad0E[0x20 - 0xE];
    /* 0x020 */ s32 pkind;
    /* 0x024 */ s32 stat;
    /* 0x028 */ s32 mstat;
    /* 0x02C */ u8 pad2C[0x14C - 0x2C];
    /* 0x14C */ s32 ga;
}; // size >= 0x150

// these should go somewhere else...

struct WeaponInfo {
    /* 0x000 */ u8 pad00[0xC - 0x0];
    /* 0x00C */ s32 kind;
    /* 0x010 */ u8 pad10;
    /* 0x011 */ u8 player;
    /* 0x012 */ u8 pad12[0xFC - 0x12];
    /* 0x0FC */ s32 ga;
    /* 0x100 */ s32 attackStat;
}; // size >= 0x104

struct ItemInfo {
    /* 0x000 */ u8 pad00[0xC - 0x0];
    /* 0x00C */ s32 kind;
    /* 0x010 */ u8 pad10[0x15 - 0x10];
    /* 0x015 */ u8 player;
    /* 0x016 */ u8 pad16[0x108 - 0x16];
    /* 0x108 */ s32 ga;
    /* 0x10C */ s32 attackStat;
    /* 0x110 */ u8 pad110[0x378 - 0x110];
    /* 0x378 */ void *procUpdate;
    /* 0x37C */ void *procMap;
    /* 0x380 */ void *procHit;
    /* 0x384 */ void *procShield;
    /* 0x388 */ void *procHop;
    /* 0x38C */ void *procSetoff;
    /* 0x390 */ void *procReflector;
    /* 0x394 */ void *procDamage;
}; // size >= 0x398

struct EffectInfo {
    /* 0x00 */ u32 pad00;
    /* 0x04 */ void *fgObj;
    /* 0x08 */ u8 pad08[0x14 - 0x8];
    /* 0x14 */ void *procFunc;

}; // size >= 0x18

// data
extern struct gmSaveInfo gDefaultSaveData;
extern struct gmSceneInfo gDefaultSceneData;
extern struct BattleState gDefaultBattleState;

// bss
extern struct gmSaveInfo gSaveData;
extern struct gmSceneInfo gSceneData;
extern struct BattleState D_800A4B18;
extern struct BattleState gTransferBattleState;
extern struct BattleState D_800A4EF8;
// extern struct gmSceneInfo *gBattleState; //
extern u32 D_800A50EC;
extern u8 D_800A50F0[8];
extern u8 D_800A50F8[324];
extern u32 D_800A523C;

// functions
extern void start_scene_manager(u32);
extern void smProcPrintGObjStatus(void);

#endif /* SCENEMGR_SCENE_MANGAGER_H */
