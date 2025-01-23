#ifndef _MVOPENINGROOM_H_
#define _MVOPENINGROOM_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern u32 lMVOpeningRoomScene1FileID;			            // 0x00000038
extern u32 lMVOpeningRoomScene2FileID;			            // 0x00000039
extern u32 lMVOpeningRoomScene3FileID;			            // 0x0000003A
extern u32 lMVOpeningRoomScene4FileID;			            // 0x0000003B
extern u32 lMVOpeningRoomTransitionFileID;		            // 0x0000003F
extern u32 lMVOpeningRoomWallpaperFileID;		            // 0x0000005A

extern intptr_t lMVOpeningRoomScene1CamAnimJoint;           // file 0x038 offset for camera parameters for scene 1
extern intptr_t lMVOpeningRoomScene2CamAnimJoint;           // file 0x039 offset for camera parameters for scene 2
extern intptr_t lMVOpeningRoomScene3CamAnimJoint;           // file 0x03A offset for camera parameters for scene 3
extern intptr_t lMVOpeningRoomScene4CamAnimJoint;           // file 0x03B offset for camera parameters for scene 4
extern intptr_t lMVOpeningRoomTransitionOverlayDisplayList; // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t lMVOpeningRoomTransitionOverlayAnimJoint;   // file 0x03F offset for First Destination transition gfx shaded overlay
extern intptr_t lMVOpeningRoomTransitionOutlineDisplayList; // file 0x03F offset for First Destination transition gfx red outline
extern intptr_t lMVOpeningRoomTransitionOutlineAnimJoint;   // file 0x03F offset for First Destination transition gfx red outline
extern intptr_t lMVOpeningRoomWallpaperSprite;              // file 0x05A offset for background image footer

extern void mvOpeningRoomFuncLights(Gfx **dls);
extern void mvOpeningRoomBackgroundProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeBackground(void);
extern void mvOpeningRoomMakeSunlight(void);
extern void mvOpeningRoomMakeDesk(void);
extern void mvOpeningRoomMakeOutside(void);
extern void mvOpeningRoomMakeHaze(void);
extern void mvOpeningRoomCommonProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeBooks(void);
extern void mvOpeningRoomMakePencils(void);
extern void mvOpeningRoomMakeLamp(void);
extern void mvOpeningRoomTissuesProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeTissues(void);
extern void mvOpeningRoomMakeBoss(void);
extern void mvOpeningRoomMakePulledFighter(s32 fkind);
extern void mvOpeningRoomLogoWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeLogoWallpaper(void);
extern void mvOpeningRoomMakeLogo(void);
extern void mvOpeningRoomMakeSnap(void);
extern void mvOpeningRoomMakeCloseUpEffect(void);
extern void mvOpeningRoomMakeDroppedFighter(s32 fkind);
extern void mvOpeningRoomMakeBossShadow(void);
extern void mvOpeningRoomDeskGroundProcUpdate(GObj *gobj);
extern void mvOpeningRoomMakeDeskGround(void);
extern void mvOpeningRoomCloseUpOverlayProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeCloseUpOverlay(void);
extern void mvOpeningRoomMakeCloseUpOverlayCamera(void);
extern void mvOpeningRoomWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeWallpaper(void);
extern void mvOpeningRoomSetSpotlightPosition(GObj *gobj, s32 fkind);
extern void mvOpeningRoomMakeSpotlight(void);
extern void mvOpeningRoomEjectRoomGObjs(void);
extern void mvOpeningRoomInitScene1Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene1Cameras(void);
extern void mvOpeningRoomInitScene2Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene2Cameras(void);
extern void mvOpeningRoomInitScene3Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene3Cameras(void);
extern void mvOpeningRoomInitScene4Cameras(GObj *gobj);
extern void mvOpeningRoomMakeScene4Cameras(void);
extern void mvOpeningRoomMakeWallpaperCamera(void);
extern void mvOpeningRoomMakeLogoCamera(void);
extern void mvOpeningRoomTransitionOverlayProcDisplay(GObj *gobj);
extern void mvOpeningRoomTransitionOutlineProcDisplay(GObj *gobj);
extern void mvOpeningRoomMakeTransition(void);
extern void mvOpeningRoomMakeTransitionCamera(void);
extern void mvOpeningRoomEjectCameraGObjs(void);
extern s32 mvOpeningRoomGetDroppedFighterKind(void);
extern s32 mvOpeningRoomGetPulledFighterKind(void);
extern void mvOpeningRoomInitVars(void);
extern sb32 mvOpeningRoomCheckSetFramebuffer(void *arg);
extern void mvOpeningRoomProcRun(GObj *gobj);
extern void mvOpeningRoomFuncStart(void);
extern void mvOpeningRoomStartScene(void);

#endif
