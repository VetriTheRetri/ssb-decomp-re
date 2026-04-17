#ifndef _MVOPENINGLINK_H_
#define _MVOPENINGLINK_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningLinkSetupFiles();
extern void mvOpeningLinkInitName(SObj *sobj);
extern void mvOpeningLinkMakeName();
extern void mvOpeningLinkMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningLinkMakeMotionCamera(Vec3f move);
extern void mvOpeningLinkMakeMotionWindow();
extern void mvOpeningLinkPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningLinkMakePosedWallpaper();
extern void mvOpeningLinkPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningLinkMakePosedFighter();
extern void mvOpeningLinkMakeNameCamera();
extern void mvOpeningLinkMakePosedFighterCamera();
extern void mvOpeningLinkMakePosedWallpaperCamera();
extern void mvOpeningLinkFuncRun(GObj *gobj);
extern void mvOpeningLinkInitVars();
extern void mvOpeningLinkFuncStart();
extern void mvOpeningLinkFuncLights(Gfx **dls);
extern void mvOpeningLinkStartScene();

#endif
