#ifndef _GRWALLPAPER_H_
#define _GRWALLPAPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grWallpaperCalcPersp(SObj *wallpaper_sobj);
extern void grWallpaperCommonUpdatePersp(GObj *wallpaper_gobj);
extern void grWallpaperCommonMakeSObj(void);
extern void grWallpaperStaticMakeSObj(void);
extern void grWallpaperSectorUpdatePersp(GObj *wallpaper_gobj);
extern void grWallpaperSectorMakeSObj(void);
extern void grWallpaperBonus3AddDL(GObj *wallpaper_gobj);
extern void grWallpaperBonus3MakeSObj(void);
extern void grWallpaperMakeGroundWallpaper(void);
extern void grWallpaperSetPausePerspUpdate(void);
extern void grWallpaperResetPausePerspUpdate(void);
extern void grWallpaperRunGObjProcess(void);
extern void func_ovl2_80104D30(void);

#endif
