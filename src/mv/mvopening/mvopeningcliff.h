#ifndef _MVOPENINGCLIFF_H_
#define _MVOPENINGCLIFF_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern intptr_t lMVOpeningCliffHillsDObjDesc;       // 0x000037A0
extern intptr_t lMVOpeningCliffOcarinaDObjDesc;     // 0x000067A0
extern intptr_t lMVOpeningCliffOcarinaAnimJoint;    // 0x00006850
extern intptr_t lMVOpeningCliffCamAnimJoint;        // 0x00008910
extern intptr_t lMVOpeningCliffWallpaperSprite;     // 0x0000B500

extern void mvOpeningCliffFuncLights(Gfx **dls);
extern void mvOpeningCliffHillsProcDisplay(GObj *hills_gobj);
extern void mvOpeningCliffMakeHills(void);
extern void mvOpeningCliffMakeFighter(void);
extern void mvOpeningCliffWallpaperProcDisplay(GObj *gobj);
extern void mvOpeningCliffMakeWallpaper(void);
extern void mvOpeningCliffMakeOcarina(void);
extern void mvOpeningCliffCameraProcUpdate(GObj *gobj);
extern void mvOpeningCliffMakeMainCamera(void);
extern void mvOpeningCliffMakeWallpaperCamera(void);
extern void mvOpeningCliffInitTotalTimeTics(void);
extern void mvOpeningCliffProcRun(GObj *gobj);
extern void mvOpeningCliffFuncStart(void);
extern void mvOpeningCliffStartScene(void);

#endif
