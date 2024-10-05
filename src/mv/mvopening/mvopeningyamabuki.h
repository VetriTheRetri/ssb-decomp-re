#ifndef _MVOPENINGYAMABUKI_H_
#define _MVOPENINGYAMABUKI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningYamabukiLegsDObjDesc;         // 0x00009548
extern intptr_t lMVOpeningYamabukiLegsAnimJoint;        // 0x000098C0
extern intptr_t lMVOpeningYamabukiLegsShadowDObjDesc;   // 0x0000B2B0
extern intptr_t lMVOpeningYamabukiLegsShadowAnimJoint;  // 0x0000B390
extern intptr_t lMVOpeningYamabukiMBallDObjDesc;        // 0x0000C9E0
extern intptr_t lMVOpeningYamabukiMBallAnimJoint;       // 0x0000CAC0
extern intptr_t lMVOpeningYamabukiCamAnimJoint;         // 0x0000D330
extern intptr_t lMVOpeningYamabukiWallpaperSprite;      // 0x0003EE58

extern void mvOpeningYamabukiFuncLights(Gfx **dls);
extern void mvOpeningYamabukiMakeWallpaper(void);
extern void mvOpeningYamabukiMakeFighter(void);
extern void mvOpeningYamabukiMakeLegs(void);
extern void mvOpeningYamabukiMakeLegsShadow(void);
extern void mvOpeningYamabukiMakeMBall(void);
extern void mvOpeningYamabukiMakeMainCamera(void);
extern void mvOpeningYamabukiMakeWallpaperCamera(void);
extern void mvOpeningYamabukiInitTotalTimeTics(void);
extern void mvOpeningYamabukiFuncRun(GObj *gobj);
extern void mvOpeningYamabukiFuncStart(void);
extern void mvOpeningYamabukiStartScene(void);

#endif
