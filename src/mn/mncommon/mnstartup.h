#ifndef _MNStartup_H_
#define _MNStartup_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNStartupN64Sprite;			// 0x000073C0

extern void mnStartupLogoThreadUpdate(GObj *gobj);
extern void mnStartupActorProcRun(GObj *gobj);
extern void mnStartupFuncStart(void);
extern void mnStartupFuncLights(Gfx **dls);
extern void mnStartupStartScene(void);

#endif
