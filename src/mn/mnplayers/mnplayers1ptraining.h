#ifndef _MNPLAYERS1PTRAINING_H_
#define _MNPLAYERS1PTRAINING_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnPlayers1PTrainingFuncLights(Gfx **dls);
extern void mnPlayers1PTrainingSelectFighterPuck(s32 player, s32 select_button);
extern f32 mnPlayers1PTrainingGetNextPortraitX(s32 portrait, f32 current_pos_x);
extern sb32 mnPlayers1PTrainingCheckFighterCrossed(s32 fkind);
extern void mnPlayers1PTrainingPortraitProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingSetPortraitWallpaperPosition(SObj *sobj, s32 portrait);
extern void mnPlayers1PTrainingPortraitAddCross(GObj *gobj, s32 portrait);
extern sb32 mnPlayers1PTrainingCheckFighterLocked(s32 fkind);
extern s32 mnPlayers1PTrainingGetFighterKind(s32 portrait);
extern s32 mnPlayers1PTrainingGetPortrait(s32 fkind);
extern void mnPlayers1PTrainingPortraitProcDisplay(GObj *gobj);
extern void mnPlayers1PTrainingMakePortraitShadow(s32 portrait);
extern void mnPlayers1PTrainingMakePortrait(s32 portrait);
extern void mnPlayers1PTrainingMakePortraitAll(void);
extern void mnPlayers1PTrainingMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind);
extern void mnPlayers1PTrainingMakePortraitCamera(void);
extern void mnPlayers1PTrainingMakePortraitWallpaperCamera(void);
extern void mnPlayers1PTrainingMakePortraitFlashCamera(void);
extern void mnPlayers1PTrainingMakeGateCamera(void);
extern void mnPlayers1PTrainingMakePlayerKindSelectCamera(void);
extern void mnPlayers1PTrainingMakePlayerKindCamera(void);
extern void mnPlayers1PTrainingMakeTeamSelectCamera(void);
extern void mnPlayers1PTrainingSetGateLUT(GObj *gobj, s32 player);
extern void mnPlayers1PTrainingMakePlayerKind(s32 player);
extern void mnPlayers1PTrainingMakeGate(s32 player);
extern void mnPlayers1PTrainingMakeWallpaper(void);
extern void mnPlayers1PTrainingMakeLabels(void);
extern s32 mnPlayers1PTrainingGetFighterKindCount(s32 fkind);
extern sb32 mnPlayers1PTrainingCheckCostumeUsed(s32 fkind, s32 player, s32 costume);
extern s32 mnPlayers1PTrainingGetFreeCostumeRoyal(s32 fkind, s32 player);
extern s32 mnPlayers1PTrainingGetFreeCostume(s32 fkind, s32 player);
extern s32 mnPlayers1PTrainingGetStatusSelected(s32 fkind);
extern void mnPlayers1PTrainingFighterProcUpdate(GObj *fighter_gobj);
extern void mnPlayers1PTrainingMakeFighter(GObj *fighter_gobj, s32 player, s32 fkind, s32 costume);
extern void mnPlayers1PTrainingMakeFighterCamera(void);
extern void mnPlayers1PTrainingUpdateCursor(GObj *gobj, s32 player, s32 cursor_status);
extern void mnPlayers1PTrainingSetGateLUTAll(void);
extern sb32 mnPlayers1PTrainingCheckPuckInRange(GObj *gobj, s32 cursor_player, s32 player);
extern void mnPlayers1PTrainingUpdateFighter(s32 player);
extern void mnPlayers1PTrainingUpdateNameAndEmblem(s32 player);
extern void mnPlayers1PTrainingDestroyPortraitFlash(s32 player);
extern void mnPlayers1PTrainingPortraitFlashThreadUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakePortraitFlash(s32 player);
extern void mnPlayers1PTrainingAnnounceFighter(s32 player, s32 slot);
extern void mnPlayers1PTrainingDestroyHandicapLevel(s32 player);
extern SObj* mnPlayers1PTrainingGetArrowSObj(GObj *gobj, s32 direction);
extern void mnPlayers1PTrainingArrowThreadUpdate(GObj *gobj);
extern void mnPlayers1PTrainingHandicapLevelProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakeHandicapLevel(s32 player);
extern sb32 mnPlayers1PTrainingSelectFighter(GObj *gobj, s32 player, s32 unused, s32 select_button);
extern void mnPlayers1PTrainingUpdateCursorGrabPriorities(s32 player, s32 puck);
extern void mnPlayers1PTrainingUpdateCursorPlacementPriorities(s32 player, s32 puck);
extern void mnPlayers1PTrainingSetCursorPuckOffset(s32 player);
extern void mnPlayers1PTrainingSetCursorGrab(s32 player, s32 held_player);
extern sb32 mnPlayers1PTrainingCheckCursorPuckGrab(GObj *gobj, s32 player);
extern s32 mnPlayers1PTrainingGetPuckFighterKind(s32 player);
extern void mnPlayers1PTrainingAdjustCursor(GObj *gobj, s32 player);
extern void mnPlayers1PTrainingUpdateCursorDisplay(GObj *gobj, s32 player);
extern void mnPlayers1PTrainingUpdateCostume(s32 player, s32 select_button);
extern sb32 mnPlayers1PTrainingCheckManFighterSelected(s32 player);
extern void mnPlayers1PTrainingRecallPuck(s32 player);
extern void mnPlayers1PTrainingBackTo1PMode(void);
extern void mnPlayers1PTrainingDetectBack(s32 player);
extern sb32 mnPlayers1PTrainingCheckBackInRange(GObj *gobj);
extern void mnPlayers1PTrainingCursorProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingUpdatePuck(GObj *gobj, s32 puck);
extern void mnPlayers1PTrainingCenterPuckInPortrait(GObj *gobj, s32 fkind);
extern void mnPlayers1PTrainingMovePuck(s32 player);
extern void mnPlayers1PTrainingPuckProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakeCursorCamera(void);
extern void mnPlayers1PTrainingMakePuckCamera(void);
extern void mnPlayers1PTrainingMakeHandicapLevelCamera(void);
extern void mnPlayers1PTrainingMakeReadyCamera(void);
extern void mnPlayers1PTrainingMakeCursor(s32 player);
extern void mnPlayers1PTrainingPuckProcDisplay(GObj *gobj);
extern void mnPlayers1PTrainingMakePuck(s32 player);
extern f32 mnPlayers1PTrainingGetPuckDistance(s32 this_player, s32 other_player);
extern void mnPlayers1PTrainingPuckAdjustOverlap(s32 this_player, s32 other_player, f32 unused);
extern void mnPlayers1PTrainingPuckAdjustPortraitEdge(s32 player);
extern void mnPlayers1PTrainingPuckAdjustPlaced(s32 player);
extern void mnPlayers1PTrainingPuckAdjustRecall(s32 player);
extern void mnPlayers1PTrainingPuckAdjustProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakePuckAdjust(void);
extern void mnPlayers1PTrainingPuckGlowProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakePuckGlow(void);
extern void mnPlayers1PTrainingCostumeSyncProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakeCostumeSync(void);
extern void mnPlayers1PTrainingSpotlightProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakeSpotlight(void);
extern void mnPlayers1PTrainingReadyProcDisplay(GObj *gobj);
extern sb32 mnPlayers1PTrainingCheckReady(void);
extern void mnPlayers1PTrainingReadyProcUpdate(GObj *gobj);
extern void mnPlayers1PTrainingMakeReady(void);
extern void mnPlayers1PTrainingSetSceneData(void);
extern void mnPlayers1PTrainingPauseSlotProcesses(void);
extern void mnPlayers1PTrainingProcRun(GObj *gobj);
extern void mnPlayers1PTrainingInitPlayer(s32 player);
extern void mnPlayers1PTrainingResetPlayer(s32 player);
extern void mnPlayers1PTrainingResetPlayerNot(s32 player);
extern void mnPlayers1PTrainingInitVars(void);
extern void mnPlayers1PTrainingInitSlot(s32 player);
extern void mnPlayers1PTrainingInitSlotAll(void);
extern void mnPlayers1PTrainingFuncStart(void);
extern void mnPlayers1PTrainingStartScene(void);

#endif
