#ifndef _MVOPENINGROOM_H_
#define _MVOPENINGROOM_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningRoomFuncLights(Gfx **dls);
extern void mvOpeningRoomBackgroundProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeBackground();
extern void mvOpeningRoomMakeSunlight();
extern void mvOpeningRoomMakeDesk();
extern void mvOpeningRoomMakeOutside();
extern void mvOpeningRoomMakeHaze();
extern void mvOpeningRoomCommonProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeBooks();
extern void mvOpeningRoomMakePencils();
extern void mvOpeningRoomMakeLamp();
extern void mvOpeningRoomTissuesProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeTissues();
extern void mvOpeningRoomMakeBoss();
extern void mvOpeningFighterProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakePulledFighter(s32 fkind);
extern void mvOpeningRoomLogoWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeLogoWallpaper();
extern void mvOpeningRoomMakeLogo();
extern void mvOpeningRoomMakeSnap();
extern void mvOpeningRoomMakeCloseUpEffect();
extern void mvOpeningRoomMakeDroppedFighter(s32 fkind);
extern void mvOpeningRoomMakeBossShadow();
extern void mvOpeningRoomDeskGroundProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeDeskGround();
extern void mvOpeningRoomCloseUpOverlayProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeCloseUpOverlay();
extern void mvOpeningRoomMakeCloseUpOverlayCamera();
extern void mvOpeningRoomWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeWallpaper();
extern void mvOpeningRoomSetSpotlightPosition(GObj *gobj, s32 fkind);
extern void mvOpeningRoomMakeSpotlight();
extern void mvOpeningRoomEjectRoomGObjs();
extern void mvOpeningRoomInitScene1Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene1Cameras();
extern void mvOpeningRoomInitScene2Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene2Cameras();
extern void mvOpeningRoomInitScene3Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene3Cameras();
extern void mvOpeningRoomInitScene4Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene4Cameras();
extern void mvOpeningRoomMakeWallpaperCamera();
extern void mvOpeningRoomMakeLogoCamera();
extern void mvOpeningRoomTransitionOverlayProcDisplay(GObj *gobj);
extern void mvOpeningRoomTransitionOutlineProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeTransition();
extern void mvOpeningRoomMakeTransitionCamera();
extern void mvOpeningRoomEjectCameraGObjs();
extern s32 mvOpeningRoomGetDroppedFighterKind();
extern s32 mvOpeningRoomGetPulledFighterKind();
extern void mvOpeningRoomInitVars();
extern sb32 mvOpeningRoomCheckSetFramebuffer(SYTaskGfx *arg);
extern void mvOpeningRoomFuncRun(GObj *gobj);
extern void mvOpeningRoomFuncStart();
extern void mvOpeningRoomStartScene();

#endif
