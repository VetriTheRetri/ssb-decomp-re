#ifndef _MNDATA_H_
#define _MNDATA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnDataFuncLights(Gfx **dls);
extern sb32 mnDataCheckSoundTestUnlocked();
extern void mnDataSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnDataMakeOptionTab(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs);
extern void mnDataMakeCharacters();
extern void mnDataMakeVSRecord();
extern void mnDataMakeSoundTest();
extern void mnDataSetSubtitleSpriteColors(SObj *sobj);
extern void mnDataMakeMenuGObj();
extern void mnDataLabelsProcDisplay(GObj *gobj);
extern void mnDataMakeLabels();
extern void mnDataMakeDecals();
extern void mnDataMakeLink3Camera();
extern void mnDataMakeOptionsCamera();
extern void mnDataMakeLabelsCamera();
extern void mnDataMakeDecalsCamera();
extern void mnDataInitVars();
extern void mnDataFuncRun(GObj *gobj);
extern void mnDataFuncStart();
extern void mnDataStartScene();

#endif
