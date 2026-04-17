#ifndef _MVOPENINGYOSTER_H_
#define _MVOPENINGYOSTER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningYosterFuncLights(Gfx **dls);
extern void mvOpeningYosterMakeNest();
extern void mvOpeningYosterMakeFighters();
extern void mvOpeningYosterMakeWallpaper();
extern void mvOpeningYosterMakeGround();
extern void mvOpeningYosterMakeMainCamera();
extern void mvOpeningYosterMakeWallpaperCamera();
extern void mvOpeningYosterInitTotalTimeTics();
extern void mvOpeningYosterMainProc(GObj *gobj);
extern void mvOpeningYosterFuncStart();
extern void mvOpeningYosterStartScene();

#endif
