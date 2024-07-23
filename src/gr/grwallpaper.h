#ifndef _GRWALLPAPER_H_
#define _GRWALLPAPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grWallpaperCalcPersp(SObj *bg_sobj);
extern void grWallpaperCommonUpdatePersp(GObj *bg_gobj);
extern void grWallpaperCommonMakeSObj(void);
extern void grWallpaperStaticMakeSObj(void);
extern void grWallpaperSectorUpdatePersp(GObj *bg_gobj);
extern void grWallpaperSectorMakeSObj(void);
extern void grWallpaperBonus3AddDL(GObj *bg_gobj);
extern void grWallpaperBonus3MakeSObj(void);
extern void grWallpaperMakeGroundWallpaper(void);
extern void grWallpaperSetPausePerspUpdate(void);
extern void grWallpaperResetPausePerspUpdate(void);
extern void grWallpaperRunGObjProcess(void);
extern void func_ovl2_80104D30(void);

#endif
