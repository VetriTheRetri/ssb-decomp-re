#ifndef _MVOPENINGSTANDOFF_H_
#define _MVOPENINGSTANDOFF_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningStandoffGroundDisplayList;        // 0x00001C10
extern intptr_t lMVOpeningStandoffLightningMObjSub;         // 0x00006140
extern intptr_t lMVOpeningStandoffLightningDObjDesc;        // 0x00006950
extern intptr_t lMVOpeningStandoffLightningMatAnimJoint;    // 0x00006BB8
extern intptr_t lMVOpeningStandoffLightningAnimJoint;       // 0x00006D60
extern intptr_t lMVOpeningStandoffCamAnimJoint;              // 0x00007250
extern intptr_t lMVOpeningStandoffWallpaperSprite;          // 0x0000B500

extern void mvOpeningStandoffProcLights(Gfx **dls);
extern void mvOpeningStandoffMakeGround(void);
extern void mvOpeningStandoffMakeFighters(void);
extern void mvOpeningStandoffWallpaperProcUpdate(GObj* wallpaper_gobj);
extern void mvOpeningStandoffMakeWallpaper(void);
extern void mvOpeningStandoffMakeLightning(void);
extern void mvOpeningStandoffLightningFlashProcRender(GObj *gobj);
extern void mvOpeningStandoffMakeLightningFlash(void);
extern void mvOpeningStandoffMakeLightningFlashViewport(void);
extern void mvOpeningStandoffMakeMainViewport(void);
extern void mvOpeningStandoffMakeWallpaperViewport(void);
extern void mvOpeningStandoffInitTotalTimeTics(void);
extern void mvOpeningStandoffProcRun(GObj *gobj);
extern void mvOpeningStandoffProcStart(void);
extern void mvOpeningStandoffStartScene(void);

#endif
