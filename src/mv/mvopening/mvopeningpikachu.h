#ifndef _MVOPENINGPIKACHU_H_
#define _MVOPENINGPIKACHU_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningPikachuSetupFiles();
extern void mvOpeningPikachuInitName(SObj *sobj);
extern void mvOpeningPikachuMakeName();
extern void mvOpeningPikachuMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningPikachuMakeMotionCamera(Vec3f move);
extern void mvOpeningPikachuMakeMotionWindow();
extern void mvOpeningPikachuPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningPikachuMakePosedWallpaper();
extern void mvOpeningPikachuPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningPikachuMakePosedFighter();
extern void mvOpeningPikachuMakeNameCamera();
extern void mvOpeningPikachuMakePosedFighterCamera();
extern void mvOpeningPikachuMakePosedWallpaperCamera();
extern void mvOpeningPikachuFuncRun(GObj *gobj);
extern void mvOpeningPikachuInitVars();
extern void mvOpeningPikachuFuncStart();
extern void mvOpeningPikachuFuncLights(Gfx **dls);
extern void mvOpeningPikachuStartScene();

#endif
