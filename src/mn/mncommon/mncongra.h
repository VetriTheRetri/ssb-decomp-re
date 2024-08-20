#ifndef _MNCONGRA_H_
#define _MNCONGRA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern sb32 mnCongraCheckPlayerControllerConnected(s32 player);
extern s32 mnCongraGetPlayerTapButtons(u32 buttons);
extern void mnCongraActorProcRun(GObj *gobj);
extern void mnCongraProcStart(void);
extern void mnCongraUpdateScene(void);
extern void mnCongraProcLights(Gfx **dls);
extern void mnCongraStartScene(void);

#endif
