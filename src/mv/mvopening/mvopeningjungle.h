#ifndef _MVOPENINGKONGO_H_
#define _MVOPENINGKONGO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningJungleSetupFiles();
extern void mvOpeningJungleMakeGroundViewport(Vec3f unused);
extern void mvOpeningJungleMakeFighters();
extern void mvOpeningJungleFuncRun(GObj *gobj);
extern void mvOpeningJungleFuncStart();
extern void mvOpeningJungleFuncLights(Gfx **dls);
extern void mvOpeningJungleFuncStart();
extern void mvOpeningJungleStartScene();

#endif
