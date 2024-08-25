#ifndef _MVOPENINGKONGO_H_
#define _MVOPENINGKONGO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mv/movie.h>

extern intptr_t lMVOpeningKongoCamAnimJoint;                    // 0x00000000

extern void mvOpeningKongoSetupFiles(void);
extern void mvOpeningKongoMakeStageViewport(Vec3f unused);
extern void mvOpeningKongoMakeFighters(void);
extern void mvOpeningKongoProcRun(GObj *gobj);
extern void mvOpeningKongoProcStart(void);
extern void mvOpeningKongoProcLights(Gfx **dls);
extern void mvOpeningKongoProcStart(void);

#endif
