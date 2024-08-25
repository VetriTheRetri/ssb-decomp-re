#ifndef _MVOPENINGKONGO_H_
#define _MVOPENINGKONGO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningJungleCamAnimJoint;                    // 0x00000000

extern void mvOpeningJungleSetupFiles(void);
extern void mvOpeningJungleMakeStageViewport(Vec3f unused);
extern void mvOpeningJungleMakeFighters(void);
extern void mvOpeningJungleProcRun(GObj *gobj);
extern void mvOpeningJungleProcStart(void);
extern void mvOpeningJungleProcLights(Gfx **dls);
extern void mvOpeningJungleProcStart(void);

#endif
