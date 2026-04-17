#ifndef _MVOPENINGNEWCOMERS_H_
#define _MVOPENINGNEWCOMERS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningNewcomersFuncLights(Gfx **dls);
extern sb32 mvOpeningNewcomersCheckLocked(s32 fkind);
extern void mvOpeningNewcomersMakePurin();
extern void mvOpeningNewcomersMakeCaptain();
extern void mvOpeningNewcomersMakeLuigi();
extern void mvOpeningNewcomersMakeNess();
extern void mvOpeningNewcomersMakeAll();
extern void mvOpeningNewcomersHideProcDisplay(GObj *gobj);
extern void mvOpeningNewcomersMakeHide();
extern void mvOpeningNewcomersMakeNewcomersCamera();
extern void mvOpeningNewcomersMakeHideCamera();
extern void mvOpeningNewcomersInitVars();
extern void mvOpeningNewcomersFuncRun(GObj *gobj);
extern void mvOpeningNewcomersFuncStart();
extern void mvOpeningNewcomersStartScene();

#endif
