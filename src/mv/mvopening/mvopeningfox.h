#ifndef _MVOPENINGFOX_H_
#define _MVOPENINGFOX_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern intptr_t lMVOpeningFoxCamAnimJoint; 					    // 0x000000C0

extern void mvOpeningFoxSetupFiles(void);
extern void mvOpeningFoxInitName(SObj *sobj);
extern void mvOpeningFoxMakeName(void);
extern void mvOpeningFoxMotionCameraProcUpdate(GObj *gobj);
extern void mvOpeningFoxMakeMotionCamera(Vec3f move);
extern void mvOpeningFoxMakeMotionWindow(void);
extern void mvOpeningFoxPosedWallpaperFuncDisplay(GObj *gobj);
extern void mvOpeningFoxMakePosedWallpaper(void);
extern void mvOpeningFoxPosedFighterProcUpdate(GObj *fighter_gobj);
extern void mvOpeningFoxMakePosedFighter(void);
extern void mvOpeningFoxMakeNameCamera(void);
extern void mvOpeningFoxMakePosedFighterCamera(void);
extern void mvOpeningFoxMakePosedWallpaperCamera(void);
extern void mvOpeningFoxFuncRun(GObj *gobj);
extern void mvOpeningFoxInitVars(void);
extern void mvOpeningFoxFuncStart(void);
extern void mvOpeningFoxFuncLights(Gfx **dls);
extern void mvOpeningFoxStartScene(void);

#endif
