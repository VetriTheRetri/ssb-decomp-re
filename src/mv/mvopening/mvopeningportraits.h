#ifndef _MVOPENINGPORTRAITS_H_
#define _MVOPENINGPORTRAITS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern void mvOpeningPortraitsFuncLights(Gfx **dls);
extern void mvOpeningPortraitsMakeSet1();
extern void mvOpeningPortraitsMakeSet2();
extern void mvOpeningPortraitsBlockRow0();
extern void mvOpeningPortraitsBlockRow1();
extern void mvOpeningPortraitsBlockRow2();
extern void mvOpeningPortraitsBlockRow3();
extern void mvOpeningPortraitsBlockPartialRow(s32 row, s32 pos_x);
extern void mvOpeningPortraitsCoverProcDisplay(GObj *gobj);
extern void mvOpeningPortraitsCoverProcUpdate(GObj *gobj);
extern void mvOpeningPortraitsMakeCover();
extern void mvOpeningPortraitsMakePortraitsCamera();
extern void mvOpeningPortraitsMakeCoverCamera();
extern void mvOpeningPortraitsInitVars();
extern void mvOpeningPortraitsFuncStart();
extern void mvOpeningPortraitsStartScene();

#endif
