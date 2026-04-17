#ifndef _MVOPENINGCLASH_H_
#define _MVOPENINGCLASH_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningClashFuncLights(Gfx **dls);
extern void mvOpeningClashMakeFighters();
extern void mvOpeningClashVoidProcDisplay(GObj *gobj);
extern void mvOpeningClashMakeVoid();
extern void mvOpeningClashMakeWallpaper();
extern void mvOpeningClashMakeFightersCamera();
extern void mvOpeningClashMakeVoidCamera();
extern void mvOpeningClashWallpaperProcDisplay(GObj*);
extern void mvOpeningClashMakeWallpaperCamera();
extern void mvOpeningClashInitTotalTimeTics();
extern void mvOpeningClashFuncRun(GObj *gobj);
extern void mvOpeningClashFuncStart();
extern void mvOpeningClashStartScene();

#endif
