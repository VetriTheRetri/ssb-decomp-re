#ifndef _MVOPENINGYOSTER_H_
#define _MVOPENINGYOSTER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern intptr_t lMVOpeningYosterNestDObjDesc;       // 0x00009808
extern intptr_t lMVOpeningYosterGroundDObjDesc;     // 0x0000B990
extern intptr_t lMVOpeningYosterGroundAnimJoint;    // 0x0000BF70
extern intptr_t lMVOpeningYosterCamAnimJoint;       // 0x0000C940

extern void mvOpeningYosterFuncLights(Gfx **dls);
extern void mvOpeningYosterMakeNest(void);
extern void mvOpeningYosterMakeFighters(void);
extern void mvOpeningYosterMakeWallpaper(void);
extern void mvOpeningYosterMakeGround(void);
extern void mvOpeningYosterMakeMainCamera(void);
extern void mvOpeningYosterMakeWallpaperCamera(void);
extern void mvOpeningYosterInitTotalTimeTics(void);
extern void mvOpeningYosterMainProc(GObj *gobj);
extern void mvOpeningYosterFuncStart(void);
extern void mvOpeningYosterStartScene(void);

#endif
