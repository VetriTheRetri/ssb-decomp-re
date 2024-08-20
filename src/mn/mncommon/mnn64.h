#ifndef _MNN64_H_
#define _MNN64_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnN64LogoThreadUpdate(GObj *gobj);
extern void mnN64ActorProcRun(GObj *gobj);
extern void mnN64ProcStart(void);
extern void mnN64ProcLights(Gfx **dls);
extern void mnN64StartScene(void);

#endif
