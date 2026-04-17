#ifndef _MVOPENINGCLIFF_H_
#define _MVOPENINGCLIFF_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningCliffFuncLights(Gfx **dls);
extern void mvOpeningCliffHillsProcDisplay(GObj *hills_gobj);
extern void mvOpeningCliffMakeHills();
extern void mvOpeningCliffMakeFighter();
extern void mvOpeningCliffWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningCliffMakeWallpaper();
extern void mvOpeningCliffMakeOcarina();
extern void mvOpeningCliffCameraProcUpdate(GObj *gobj);
extern void mvOpeningCliffMakeMainCamera();
extern void mvOpeningCliffMakeWallpaperCamera();
extern void mvOpeningCliffInitTotalTimeTics();
extern void mvOpeningCliffFuncRun(GObj *gobj);
extern void mvOpeningCliffFuncStart();
extern void mvOpeningCliffStartScene();

#endif
