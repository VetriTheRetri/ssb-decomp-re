#ifndef _MVOPENINGDONKEY_H_
#define _MVOPENINGDONKEY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningDonkeySetupFiles();
extern void mvOpeningDonkeyInitName(SObj *sobj);
extern void mvOpeningDonkeyMakeName();
extern void mvOpeningDonkeyMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningDonkeyMakeMotionCamera(Vec3f move);
extern void mvOpeningDonkeyMakeMotionWindow();
extern void mvOpeningDonkeyPosedWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningDonkeyMakePosedWallpaper();
extern void mvOpeningDonkeyPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningDonkeyMakePosedFighter();
extern void mvOpeningDonkeyMakeNameCamera();
extern void mvOpeningDonkeyMakePosedFighterCamera();
extern void mvOpeningDonkeyMakePosedWallpaperCamera();
extern void mvOpeningDonkeyFuncRun(GObj *gobj);
extern void mvOpeningDonkeyInitVars();
extern void mvOpeningDonkeyFuncStart();
extern void mvOpeningDonkeyFuncLights(Gfx **dls);
extern void mvOpeningDonkeyStartScene();

#endif
