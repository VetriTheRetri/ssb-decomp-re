#ifndef _MVOPENINGYOSHI_H_
#define _MVOPENINGYOSHI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningYoshiSetupFiles();
extern void mvOpeningYoshiInitName(SObj *sobj);
extern void mvOpeningYoshiMakeName();
extern void mvOpeningYoshiMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningYoshiMakeMotionCamera(Vec3f move);
extern void mvOpeningYoshiMakeMotionWindow();
extern void mvOpeningYoshiPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningYoshiMakePosedWallpaper();
extern void mvOpeningYoshiPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningYoshiMakePosedFighter();
extern void mvOpeningYoshiMakeNameCamera();
extern void mvOpeningYoshiMakePosedFighterCamera();
extern void mvOpeningYoshiMakePosedWallpaperCamera();
extern void mvOpeningYoshiFuncRun(GObj *gobj);
extern void mvOpeningYoshiInitVars();
extern void mvOpeningYoshiFuncStart();
extern void mvOpeningYoshiFuncLights(Gfx **dls);
extern void mvOpeningYoshiStartScene();

#endif
