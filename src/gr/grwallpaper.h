#ifndef _GRWALLPAPER_H_
#define _GRWALLPAPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t lGRWallpaperTrainingBlackSprite;			// 0x00020718
extern intptr_t lGRWallpaperTrainingYellowSprite;			// 0x00020718
extern intptr_t lGRWallpaperTrainingBlueSprite;				// 0x00020718

extern u32 lGRWallpaperTrainingBlackFileID;					// 0x0000001A
extern u32 lGRWallpaperTrainingYellowFileID;				// 0x0000001B
extern u32 lGRWallpaperTrainingBlueFileID;					// 0x0000001C

extern void grWallpaperCalcPersp(SObj *wallpaper_sobj);
extern void grWallpaperCommonProcUpdate(GObj *wallpaper_gobj);
extern void grWallpaperMakeCommon(void);
extern void grWallpaperMakeStatic(void);
extern void grWallpaperSectorProcUpdate(GObj *wallpaper_gobj);
extern void grWallpaperMakeSector(void);
extern void grWallpaperBonus3FuncDisplay(GObj *wallpaper_gobj);
extern void grWallpaperMakeBonus3(void);
extern void grWallpaperMakeDecideKind(void);
extern void grWallpaperPausePerspUpdate(void);
extern void grWallpaperResumePerspUpdate(void);
extern void grWallpaperRunGObjProcessThreads(void);
extern void grWallpaperResumeAll(void);

#endif
