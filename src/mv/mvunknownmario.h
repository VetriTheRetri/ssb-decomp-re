#ifndef _MVUNKNOWNMARIO_H_
#define _MVUNKNOWNMARIO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvUnknownMarioSetupFiles();
extern void mvUnknownMarioFuncRun(GObj *gobj);
extern void mvUnknownMarioFuncStart();
extern void mvUnknownMarioFuncLights(Gfx **dls);
extern void mvUnknownMarioStartScene();

#endif
