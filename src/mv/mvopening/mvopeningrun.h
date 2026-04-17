#ifndef _MVOPENINGRUN_H_
#define _MVOPENINGRUN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningRunFuncLights(Gfx **dls);
extern void mvOpeningRunFighterProcUpdate(GObj *fighter_proxy_gobj);
extern void mvOpeningRunMakeFighters();
extern void mvOpeningRunWallpaperProcUpdate(GObj *gobj);
extern void mvOpeningRunMakeWallpaper();
extern void mvOpeningRunMakeCrash();
extern void mvOpeningRunInitMainCamera(GObj *camera_gobj);
extern void mvOpeningRunMakeMainCamera();
extern void mvOpeningRunMakeWallpaperCamera();
extern void mvOpeningRunInitVars();
extern void mvOpeningRunFuncRun(GObj *gobj);
extern void mvOpeningRunFuncStart();
extern void mvOpeningRunStartScene();

#endif
