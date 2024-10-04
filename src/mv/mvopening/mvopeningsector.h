#ifndef _MVOPENINGSECTOR_H_
#define _MVOPENINGSECTOR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningSectorGreatFoxDObjDesc;   // 0x0000D820
extern intptr_t lMVOpeningSectorGreatFoxAnimJoint;  // 0x0000DA10

extern intptr_t lMVOpeningSectorCamAnimJoint;       // 0x0000F9A0

extern intptr_t lMVOpeningSectorCockpitSprite;      // 0x0003CC90

extern intptr_t lMVOpeningSectorArwingDObjDesc;     // 0x00002C30
extern intptr_t lMVOpeningSectorArwing0AnimJoint;   // 0x0000E110
extern intptr_t lMVOpeningSectorArwing1AnimJoint;   // 0x0000E910
extern intptr_t lMVOpeningSectorArwing2AnimJoint;   // 0x0000F1C0

extern intptr_t lMVOpeningSectorWallpaperSprite;    // 0x00026C88

extern void mvOpeningSectorFuncLights(Gfx **dls);
extern void mvOpeningSectorWallpaperProcUpdate(GObj* wallpaper_gobj);
extern void mvOpeningSectorMakeWallpaper(void);
extern void mvOpeningSectorMakeGreatFox(void);
extern void mvOpeningSectorCockpitProcDisplay(GObj *cockpit_gobj);
extern void mvOpeningSectorCockpitProcUpdate(GObj* cockpit_gobj);
extern void mvOpeningSectorMakeCockpit(void);
extern void mvOpeningSectorMakeArwings(void);
extern void mvOpeningSectorCameraProcUpdate(GObj* camera_gobj);
extern void mvOpeningSectorMakeMainViewport(void);
extern void mvOpeningSectorMakeWallpaperViewport(void);
extern void mvOpeningSectorMakeCockpitViewport(void);
extern void mvOpeningSectorInitTotalTimeTics(void);
extern void mvOpeningSectorProcRun(GObj *gobj);
extern void mvOpeningSectorFuncStart(void);
extern void mvOpeningSectorStartScene(void);

#endif
