#ifndef _GRWALLPAPER_H_
#define _GRWALLPAPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grWallpaperCalcPersp(SObj *wallpaper_sobj);
extern void grWallpaperCommonProcUpdate(GObj *wallpaper_gobj);
extern void grWallpaperMakeCommon();
extern void grWallpaperMakeStatic();
extern void grWallpaperSectorProcUpdate(GObj *wallpaper_gobj);
extern void grWallpaperMakeSector();
extern void grWallpaperBonus3ProcDisplay(GObj *wallpaper_gobj);
extern void grWallpaperMakeBonus3();
extern void grWallpaperMakeDecideKind();
extern void grWallpaperPausePerspUpdate();
extern void grWallpaperResumePerspUpdate();
extern void grWallpaperRunProcessAll();
extern void grWallpaperResumeProcessAll();

#endif
