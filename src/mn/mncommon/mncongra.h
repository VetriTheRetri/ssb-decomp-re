#ifndef _MNCONGRA_H_
#define _MNCONGRA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern sb32 mnCongraCheckPlayerControllerConnected(s32 player);
extern s32 mnCongraGetPlayerTapButtons(u32 buttons);
extern void mnCongraActorFuncRun(GObj *gobj);
extern void mnCongraFuncStart();
extern void mnCongraFuncDraw();
extern void mnCongraFuncLights(Gfx **dls);
extern void mnCongraStartScene();

#endif
