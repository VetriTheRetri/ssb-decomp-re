#ifndef _MNPLAYERS1PBONUS_H_
#define _MNPLAYERS1PBONUS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnPlayers1PBonusFuncLights(Gfx **dls);
extern s32 mnPlayers1PBonusGetPowerOf(s32 base, s32 exp);
extern void mnPlayers1PBonusSetDigitColors(SObj *sobj, u32 *colors);
extern s32 mnPlayers1PBonusGetNumberDigitCount(s32 num, s32 digit_count_max);
extern void mnPlayers1PBonusMakeNumber(GObj *gobj, s32 number, f32 x, f32 y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count);
extern void mnPlayers1PBonusSelectFighterPuck(s32 player, s32 select_button);
extern f32 mnPlayers1PBonusGetNextPortraitX(s32 portrait, f32 current_pos_x);
extern sb32 mnPlayers1PBonusCheckFighterCrossed(s32 fkind);
extern void mnPlayers1PBonusPortraitProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusSetPortraitWallpaperPosition(SObj *sobj, s32 portrait);
extern void mnPlayers1PBonusPortraitAddCross(GObj *gobj, s32 portrait);
extern sb32 mnPlayers1PBonusCheckFighterLocked(s32 fkind);
extern s32 mnPlayers1PBonusGetFighterKind(s32 portrait);
extern s32 mnPlayers1PBonusGetPortrait(s32 fkind);
extern void mnPlayers1PBonusPortraitProcDisplay(GObj *gobj);
extern void mnPlayers1PBonusMakePortraitShadow(s32 portrait);
extern void mnPlayers1PBonusMakePortrait(s32 portrait);
extern void mnPlayers1PBonusMakePortraitAll();
extern void mnPlayers1PBonusMakeNameAndEmblem(GObj *gobj, s32 player, s32 fkind);
extern void mnPlayers1PBonusMakePortraitCamera();
extern void mnPlayers1PBonusMakePortraitWallpaperCamera();
extern void mnPlayers1PBonusMakePortraitFlashCamera();
extern void mnPlayers1PBonusMakeGateCamera();
extern void mnPlayers1PBonusSetGateLUT(GObj *gobj, s32 player);
extern void mnPlayers1PBonusMakeGate(s32 player);
extern void mnPlayers1PBonusMakeWallpaper();
extern void mnPlayers1PBonusMakeWallpaperCamera();
extern void mnPlayers1PBonusMakeLabels();
extern void mnPlayers1PBonusMakeLabelsCamera();
extern u32 mnPlayers1PBonusGetBestTime(s32 fkind);
extern s32 mnPlayers1PBonusGetMins(s32 tics);
extern s32 mnPlayers1PBonusGetSec(s32 tics);
extern s32 mnPlayers1PBonusGetCSec(s32 tics);
extern s32 mnPlayers1PBonusGetTotalMins();
extern s32 mnPlayers1PBonusGetTotalSec();
extern s32 mnPlayers1PBonusGetTotalCSec();
extern void mnPlayers1PBonusMakeBestTime();
extern u8 mnPlayers1PBonusGetBestTaskCount(s32 fkind);
extern void mnPlayers1PBonusMakeBestTaskCount();
extern sb32 mnPlayers1PBonusCheckBonusComplete(s32 fkind);
extern void mnPlayers1PBonusMakeHiScore();
extern void mnPlayers1PBonusMakeTotalTime();
extern s32 mnPlayers1PBonusGetCostume(s32 fkind, s32 select_button);
extern s32 mnPlayers1PBonusGetStatusSelected(s32 fkind);
extern void mnPlayers1PBonusFighterProcUpdate(GObj *fighter_gobj);
extern void mnPlayers1PBonusMakeFighter(GObj *fighter_gobj, s32 player, s32 fkind);
extern void mnPlayers1PBonusMakeFighterCamera();
extern void mnPlayers1PBonusUpdateCursor(GObj *gobj, s32 player, s32 cursor_status);
extern sb32 mnPlayers1PBonusCheckBackInRange(GObj *gobj);
extern sb32 mnPlayers1PBonusCheckPuckInRange(GObj *gobj, s32 cursor_player, s32 player);
extern void mnPlayers1PBonusResetPlayer(s32 player);
extern void mnPlayers1PBonusUpdateFighter(s32 player);
extern void mnPlayers1PBonusUpdateNameAndEmblem(s32 player);
extern void mnPlayers1PBonusDestroyPortraitFlash(s32 player);
extern void mnPlayers1PBonusPortraitFlashThreadUpdate(GObj *gobj);
extern void mnPlayers1PBonusMakePortraitFlash(s32 player);
extern void mnPlayers1PBonusAnnounceFighter(s32 player, s32 slot);
extern sb32 mnPlayers1PBonusCheckSelectFighter(GObj *gobj, s32 player, s32 unused, s32 select_button);
extern void mnPlayers1PBonusUpdateCursorGrabPriorities(s32 player, s32 puck);
extern void mnPlayers1PBonusUpdateCursorPlacementPriorities(s32 player);
extern void mnPlayers1PBonusSetCursorPuckOffset(s32 player);
extern void mnPlayers1PBonusSetCursorGrab(s32 player);
extern sb32 mnPlayers1PBonusCheckCursorPuckGrab(GObj *gobj, s32 player);
extern s32 mnPlayers1PBonusGetForcePuckFighterKind();
extern s32 mnPlayers1PBonusGetPuckFighterKind(s32 player);
extern void mnPlayers1PBonusAdjustCursor(GObj *gobj, s32 player);
extern void mnPlayers1PBonusUpdateCursorNoRecall(GObj *gobj, s32 player);
extern void mnPlayers1PBonusUpdateCostume(s32 player, s32 select_button);
extern sb32 mnPlayers1PBonusCheckManFighterSelected(s32 unused);
extern void mnPlayers1PBonusRecallPuck(s32 player);
extern void mnPlayers1PBonusBackTo1PMode();
extern void mnPlayers1PBonusDetectBack(s32 player);
extern sb32 mnPlayers1PBonusCheckGameModeInRange(GObj *gobj);
extern void mnPlayers1PBonusUpdateGameMode();
extern void mnPlayers1PBonusCursorProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusMovePuck(s32 player);
extern void mnPlayers1PBonusPuckProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusMakeReadyCamera();
extern void mnPlayers1PBonusMakeCursorCamera();
extern void mnPlayers1PBonusMakePuckCamera();
extern void mnPlayers1PBonusMakeCursor(s32 player);
extern void mnPlayers1PBonusMakePuck(s32 player);
extern void mnPlayers1PBonusPuckAdjustPortraitEdge(GObj *gobj);
extern void mnPlayers1PBonusPuckAdjustPlaced(s32 player);
extern void mnPlayers1PBonusPuckAdjustRecall(s32 player);
extern void mnPlayers1PBonusPuckAdjustProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusMakePuckAdjust();
extern void mnPlayers1PBonusSpotlightProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusMakeSpotlight();
extern void mnPlayers1PBonusReadyProcUpdate(GObj *gobj);
extern void mnPlayers1PBonusMakeReady();
extern void mnPlayers1PBonusSetSceneData();
extern void mnPlayers1PBonusFuncRun(GObj *gobj);
extern void mnPlayers1PBonusInitPlayer();
extern void mnPlayers1PBonusInitVars();
extern void mnPlayers1PBonusInitSlot(s32 player);
extern sb32 mnPlayers1PBonusCheckBonusCompleteAll();
extern void mnPlayers1PBonusFuncStart();
extern void mnPlayers1PBonusStartScene();

#endif
