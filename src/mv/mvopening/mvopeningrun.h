#ifndef _MVOPENINGRUN_H_
#define _MVOPENINGRUN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern u32 lMVOpeningRunCrashFileID;			        // 0x0000004B

extern intptr_t lMVOpeningRunWallpaperSprite; 			// 0x000058A0
extern intptr_t lMVOpeningRunMainCamAnimJoint; 			// 0x00000000
extern intptr_t lMVOpeningRunCrashMObjSub; 				// 0x00002AA8
extern intptr_t lMVOpeningRunCrashDObjDesc; 			// 0x000035F8
extern intptr_t lMVOpeningRunCrashMatAnimJoint; 		// 0x00003700

extern intptr_t lMVOpeningRunMarioAnimJoint;			// 0x00000004
extern intptr_t lMVOpeningRunFoxAnimJoint;				// 0x000000B4
extern intptr_t lMVOpeningRunDonkeyAnimJoint;			// 0x00000124
extern intptr_t lMVOpeningRunSamusAnimJoint;			// 0x00000184
extern intptr_t lMVOpeningRunLinkAnimJoint;				// 0x00000224
extern intptr_t lMVOpeningRunYoshiAnimJoint;			// 0x00000334
extern intptr_t lMVOpeningRunKirbyAnimJoint;			// 0x000003A4
extern intptr_t lMVOpeningRunPikachuAnimJoint;			// 0x00000484

extern void mvOpeningRunFuncLights(Gfx **dls);
extern void mvOpeningRunFighterProcUpdate(GObj *fighter_proxy_gobj);
extern void mvOpeningRunMakeFighters(void);
extern void mvOpeningRunWallpaperProcUpdate(GObj *gobj);
extern void mvOpeningRunMakeWallpaper(void);
extern void mvOpeningRunMakeCrash(void);
extern void mvOpeningRunInitMainCamera(GObj *camera_gobj);
extern void mvOpeningRunMakeMainCamera(void);
extern void mvOpeningRunMakeWallpaperCamera(void);
extern void mvOpeningRunInitVars(void);
extern void mvOpeningRunFuncRun(GObj *gobj);
extern void mvOpeningRunFuncStart(void);
extern void mvOpeningRunStartScene(void);

#endif
