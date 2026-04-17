#ifndef _MNMODESELECT_H_
#define _MNMODESELECT_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnModeSelectFuncLights(Gfx **dls);
extern void mnModeSelectMake1PMode();
extern void mnModeSelectMakeVSMode();
extern void mnModeSelectMakeOption();
extern void mnModeSelectMakeData();
extern void mnModeSelectMakeLabels();
extern void mnModeSelectMakeDecals();
extern void mnModeSelectMakeLabelsCamera();
extern void mnModeSelectMakeDecalsCamera();
extern void mnModeSelectMakeOptions();
extern void mnModeSelectEjectOptions();
extern void mnModeSelectInitVars();
extern void mnModeSelectFuncRun(GObj *gobj);
extern void mnModeSelectFuncStart();
extern void mnModeSelectStartScene();

#endif
