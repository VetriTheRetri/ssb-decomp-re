#ifndef _MVOPENINGKIRBY_H_
#define _MVOPENINGKIRBY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningKirbySetupFiles();
extern void mvOpeningKirbyInitName(SObj *sobj);
extern void mvOpeningKirbyMakeName();
extern void mvOpeningKirbyMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningKirbyMakeMotionCamera(Vec3f move);
extern void mvOpeningKirbyMakeMotionWindow();
extern void mvOpeningKirbyPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningKirbyMakePosedWallpaper();
extern void mvOpeningKirbyPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningKirbyMakePosedFighter();
extern void mvOpeningKirbyMakeNameCamera();
extern void mvOpeningKirbyMakePosedFighterCamera();
extern void mvOpeningKirbyMakePosedWallpaperCamera();
extern void mvOpeningKirbyFuncRun(GObj *gobj);
extern void mvOpeningKirbyInitVars();
extern void mvOpeningKirbyFuncStart();
extern void mvOpeningKirbyFuncLights(Gfx **dls);
extern void mvOpeningKirbyStartScene();

#endif
