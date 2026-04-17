#ifndef _SC1PGAME_H_
#define _SC1PGAME_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

#define SC1PGAME_STAGE_MAX_TEAM_COUNT 30
#define SC1PGAME_STAGE_MAX_VARIATIONS_COUNT 12

#define SC1PGAME_STAGE_YOSHI_VARIATIONS_COUNT 6
#define SC1PGAME_STAGE_YOSHI_TEAM_COUNT 18

#define SC1PGAME_STAGE_KIRBY_VARIATIONS_COUNT 7
#define SC1PGAME_STAGE_KIRBY_TEAM_COUNT	8
#define SC1PGAME_STAGE_KIRBY_SIM_COUNT 2				// Number of opponents fought at once

#define SC1PGAME_STAGE_MAX_OPPONENT_COUNT 3

// 801936A4
extern sb32 gSC1PGameBonusBrosCalamity;

// 801936A8
extern u8 gSC1PGameBonusTomatoCount;

// 801936A9
extern u8 gSC1PGameBonusHeartCount;

// 801936AA
extern u8 gSC1PGameBonusStarCount;

// 801936AB
extern ub8 gSC1PGameBonusShieldBreaker;

// 801936AC
extern u8 gSC1PGameBonusGiantImpact;

// 801936AD
extern ub8 gSC1PGameBonusMewCatcher;

// 801936B0
extern u32 gSC1PGameBonusAttackIDCount[];

// 80193798
extern u32 gSC1PGameBonusAttackIsSmashCount[];

// 801937A0
extern u32 gSC1PGameBonusAttackGroundAirCount[];

// 801937A8
extern u32 gSC1PGameBonusAttackIsProjectileCount[];

// 801937B0
extern u32 gSC1PGameBonusDefendIDCount[];

// 80193898
extern u32 gSC1PGameBonusDefendIsSmashCount[];

// 801938A0
extern u32 gSC1PGameBonusDefendGroundAirCount[];

// 801938A8
extern u32 gSC1PGameBonusDefendIsProjectileCount[];

extern void sc1PGameSetupFiles();
extern void sc1PGameSetGameStart();
extern void sc1PGameSetGameEnd();
extern void sc1PGameFuncUpdate();
extern s32 sc1PGameGetNextFreePlayerPort(s32 player);
extern s32 sc1PGameGetNextFreeCostume(s32 com);
extern void func_ovl65_8018D38C();
extern s32 sc1PGameGetFighterKindsNum(u16 shuf, s32 max);
extern void func_ovl65_8018D3D0();
extern void sc1PGameGetStartPosition(Vec3f *mapobj_pos, s32 mapobj_kind);
extern void sc1PGameGetRandomStartPosition(Vec3f *mapobj_pos, s32 mapobj_kind);
extern void sc1PGameSetupEnemyPlayer(SC1PGameStage *stagesetup, SC1PGameComputer *comsetup, s32 player, s32 enemy_player_num);
extern void sc1PGameSetupStageAll();
extern void sc1PGameSpawnEnemyTeamNext(GObj *player_gobj);
extern void sc1PGameSetPlayerInterfacePositions();
extern void sc1PGameWaitStageCommonUpdate();
extern void sc1PGameWaitStageTeamUpdate();
extern void sc1PGameWaitStageBonus3Update();
extern void sc1PGameWaitStageBossUpdate();
extern void sc1PGameWaitThreadUpdate(GObj *gobj);
extern void sc1PGameSetGameStatusWait();
extern void sc1PGameTeamStockDisplayProcDisplay(GObj *interface_gobj);
extern void sc1PGameInitTeamStockDisplay();
extern void sc1PGameSetPlayerDefeatStats(s32 player, s32 team_order);
extern void sc1PGameTryInitPlayerArrows();
extern void sc1PGameInitTimeUpMessage();
extern s32 sc1PGameGetEnemyStartLR(s32 this_player);
extern void sc1PGameSetCameraZoom();
extern void sc1PGameBossSetCameraZoom(FTStruct *fp);
extern void sc1PGameBossHidePlayerTagAll();
extern void sc1PGameBossAddBossInterface(GObj *fighter_gobj, u32 unused);
extern void sc1PGameBossLockPlayerControl(GObj *fighter_gobj, u32 unused);
extern void sc1PGameBossSetIgnorePlayerMapBounds(GObj *fighter_gobj, u32 unused);
extern void func_ovl65_8018F5E4();
extern void sc1PGameBossDefeatInterfaceProcUpdate();
extern void func_ovl65_8018F6DC();
extern void sc1PGameBossDefeatInterfaceProcSet();
extern void sc1PGameBossDefeatInitInterface(GObj *fighter_gobj);
extern void sc1PGameFuncStart();
extern void sc1PGameAppendBonusStats();
extern void sc1PGameInitBonusStats();
extern void sc1PGameFuncLights(Gfx **dls);
extern void sc1PGameStartScene();

#endif
