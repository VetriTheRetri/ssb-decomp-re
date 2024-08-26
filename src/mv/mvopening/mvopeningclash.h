#ifndef _MVOPENINGCLASH_H_
#define _MVOPENINGCLASH_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningClashFightersCamAnimJoint;            // 0x00001440
extern intptr_t lMVOpeningClashWallpaperCamAnimJoint;           // 0x00004AB0

extern intptr_t lMVOpeningClashWallpaperLLMObjSub;              // 0x00003050
extern intptr_t lMVOpeningClashWallpaperLLDisplayList;          // 0x000032A8
extern intptr_t lMVOpeningClashWallpaperLLMatAnimJoint;         // 0x00003458
extern intptr_t lMVOpeningClashWallpaperLLAnimJoint;            // 0x000036D0

extern intptr_t lMVOpeningClashWallpaperLRMObjSub;              // 0x000036E0
extern intptr_t lMVOpeningClashWallpaperLRDisplayList;          // 0x00003938
extern intptr_t lMVOpeningClashWallpaperLRMatAnimJoint;         // 0x00003AE8
extern intptr_t lMVOpeningClashWallpaperLRAnimJoint;            // 0x00003D60

extern intptr_t lMVOpeningClashWallpaperULMObjSub;              // 0x00003D70
extern intptr_t lMVOpeningClashWallpaperULDisplayList;          // 0x00003FC8
extern intptr_t lMVOpeningClashWallpaperULMatAnimJoint;         // 0x00004180
extern intptr_t lMVOpeningClashWallpaperULAnimJoint;            // 0x00004400

extern intptr_t lMVOpeningClashWallpaperURMObjSub;              // 0x00004410
extern intptr_t lMVOpeningClashWallpaperURDisplayList;          // 0x00004668
extern intptr_t lMVOpeningClashWallpaperURMatAnimJoint;         // 0x00004820
extern intptr_t lMVOpeningClashWallpaperURAnimJoint;            // 0x00004AA0

extern void mvOpeningClashProcLights(Gfx **dls);
extern void mvOpeningClashMakeFighters(void);
extern void mvOpeningClashVoidProcRender(GObj *gobj);
extern void mvOpeningClashMakeVoid(void);
extern void mvOpeningClashMakeWallpaper(void);
extern void mvOpeningClashMakeFightersViewport(void);
extern void mvOpeningClashMakeVoidViewport(void);
extern void mvOpeningClashWallpaperProcRender(GObj*);
extern void mvOpeningClashMakeWallpaperViewport(void);
extern void mvOpeningClashInitTotalTimeTics(void);
extern void mvOpeningClashProcRun(GObj *gobj);
extern void mvOpeningClashProcStart(void);
extern void mvOpeningClashStartScene(void);

#endif
