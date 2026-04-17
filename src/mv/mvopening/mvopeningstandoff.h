#ifndef _MVOPENINGSTANDOFF_H_
#define _MVOPENINGSTANDOFF_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningStandoffFuncLights(Gfx **dls);
extern void mvOpeningStandoffMakeGround();
extern void mvOpeningStandoffMakeFighters();
extern void mvOpeningStandoffWallpaperProcUpdate(GObj* wallpaper_gobj);
extern void mvOpeningStandoffMakeWallpaper();
extern void mvOpeningStandoffMakeLightning();
extern void mvOpeningStandoffLightningFlashProcDisplay(GObj *gobj);
extern void mvOpeningStandoffMakeLightningFlash();
extern void mvOpeningStandoffMakeLightningFlashCamera();
extern void mvOpeningStandoffMakeMainCamera();
extern void mvOpeningStandoffMakeWallpaperCamera();
extern void mvOpeningStandoffInitTotalTimeTics();
extern void mvOpeningStandoffFuncRun(GObj *gobj);
extern void mvOpeningStandoffFuncStart();
extern void mvOpeningStandoffStartScene();

#endif
