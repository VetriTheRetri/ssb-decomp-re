#ifndef _MVOPENINGYAMABUKI_H_
#define _MVOPENINGYAMABUKI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningYamabukiFuncLights(Gfx **dls);
extern void mvOpeningYamabukiMakeWallpaper();
extern void mvOpeningYamabukiMakeFighter();
extern void mvOpeningYamabukiMakeLegs();
extern void mvOpeningYamabukiMakeLegsShadow();
extern void mvOpeningYamabukiMakeMBall();
extern void mvOpeningYamabukiMakeMainCamera();
extern void mvOpeningYamabukiMakeWallpaperCamera();
extern void mvOpeningYamabukiInitTotalTimeTics();
extern void mvOpeningYamabukiFuncRun(GObj *gobj);
extern void mvOpeningYamabukiFuncStart();
extern void mvOpeningYamabukiStartScene();

#endif
