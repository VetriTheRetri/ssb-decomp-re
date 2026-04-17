#ifndef _MVOPENINGSECTOR_H_
#define _MVOPENINGSECTOR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningSectorFuncLights(Gfx **dls);
extern void mvOpeningSectorWallpaperProcUpdate(GObj* wallpaper_gobj);
extern void mvOpeningSectorMakeWallpaper();
extern void mvOpeningSectorMakeGreatFox();
extern void mvOpeningSectorCockpitProcDisplay(GObj *cockpit_gobj);
extern void mvOpeningSectorCockpitProcUpdate(GObj* cockpit_gobj);
extern void mvOpeningSectorMakeCockpit();
extern void mvOpeningSectorMakeArwings();
extern void mvOpeningSectorCameraProcUpdate(GObj* camera_gobj);
extern void mvOpeningSectorMakeMainCamera();
extern void mvOpeningSectorMakeWallpaperCamera();
extern void mvOpeningSectorMakeCockpitCamera();
extern void mvOpeningSectorInitTotalTimeTics();
extern void mvOpeningSectorFuncRun(GObj *gobj);
extern void mvOpeningSectorFuncStart();
extern void mvOpeningSectorStartScene();

#endif
