#ifndef _MNN64_H_
#define _MNN64_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNN64LogoSprite;			// 0x000073C0

extern void mnN64LogoThreadUpdate(GObj *gobj);
extern void mnN64ActorFuncRun(GObj *gobj);
extern void mnN64FuncStart(void);
extern void mnN64FuncLights(Gfx **dls);
extern void mnN64StartScene(void);

#endif
