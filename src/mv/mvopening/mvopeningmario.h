#ifndef _MVOPENINGMARIO_H_
#define _MVOPENINGMARIO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningMarioSetupFiles();
extern void mvOpeningMarioInitName(SObj *sobj);
extern void mvOpeningMarioMakeName();
extern void mvOpeningMarioMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningMarioMakeMotionCamera(Vec3f move);
extern void mvOpeningMarioMakeMotionWindow();
extern void mvOpeningMarioPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningMarioMakePosedWallpaper();
extern void mvOpeningMarioPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningMarioMakePosedFighter();
extern void mvOpeningMarioMakeNameCamera();
extern void mvOpeningMarioMakePosedFighterCamera();
extern void mvOpeningMarioMakePosedWallpaperCamera();
extern void mvOpeningMarioFuncRun(GObj *gobj);
extern void mvOpeningMarioInitVars();
extern void mvOpeningMarioFuncStart();
extern void mvOpeningMarioFuncLights(Gfx **dls);
extern void mvOpeningMarioStartScene();

#endif
