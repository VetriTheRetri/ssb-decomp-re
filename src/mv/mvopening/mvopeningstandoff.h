#ifndef _MVOPENINGSTANDOFF_H_
#define _MVOPENINGSTANDOFF_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern intptr_t lMVOpeningStandoffGroundDisplayList;        // 0x00001C10
extern intptr_t lMVOpeningStandoffLightningMObjSub;         // 0x00006140
extern intptr_t lMVOpeningStandoffLightningDObjDesc;        // 0x00006950
extern intptr_t lMVOpeningStandoffLightningMatAnimJoint;    // 0x00006BB8
extern intptr_t lMVOpeningStandoffLightningAnimJoint;       // 0x00006D60
extern intptr_t lMVOpeningStandoffCamAnimJoint;              // 0x00007250
extern intptr_t lMVOpeningStandoffWallpaperSprite;          // 0x0000B500

extern void mvOpeningStandoffFuncLights(Gfx **dls);
extern void mvOpeningStandoffMakeGround(void);
extern void mvOpeningStandoffMakeFighters(void);
extern void mvOpeningStandoffWallpaperProcUpdate(GObj* wallpaper_gobj);
extern void mvOpeningStandoffMakeWallpaper(void);
extern void mvOpeningStandoffMakeLightning(void);
extern void mvOpeningStandoffLightningFlashProcDisplay(GObj *gobj);
extern void mvOpeningStandoffMakeLightningFlash(void);
extern void mvOpeningStandoffMakeLightningFlashCamera(void);
extern void mvOpeningStandoffMakeMainCamera(void);
extern void mvOpeningStandoffMakeWallpaperCamera(void);
extern void mvOpeningStandoffInitTotalTimeTics(void);
extern void mvOpeningStandoffFuncRun(GObj *gobj);
extern void mvOpeningStandoffFuncStart(void);
extern void mvOpeningStandoffStartScene(void);

#endif
