#ifndef _MVOPENINGFOX_H_
#define _MVOPENINGFOX_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningFoxSetupFiles();
extern void mvOpeningFoxInitName(SObj *sobj);
extern void mvOpeningFoxMakeName();
extern void mvOpeningFoxMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningFoxMakeMotionCamera(Vec3f move);
extern void mvOpeningFoxMakeMotionWindow();
extern void mvOpeningFoxPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningFoxMakePosedWallpaper();
extern void mvOpeningFoxPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningFoxMakePosedFighter();
extern void mvOpeningFoxMakeNameCamera();
extern void mvOpeningFoxMakePosedFighterCamera();
extern void mvOpeningFoxMakePosedWallpaperCamera();
extern void mvOpeningFoxFuncRun(GObj *gobj);
extern void mvOpeningFoxInitVars();
extern void mvOpeningFoxFuncStart();
extern void mvOpeningFoxFuncLights(Gfx **dls);
extern void mvOpeningFoxStartScene();

#endif
