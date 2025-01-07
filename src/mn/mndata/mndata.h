#ifndef _MNDATA_H_
#define _MNDATA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnDataFuncLights(Gfx **dls);
extern sb32 mnDataCheckSoundTestUnlocked(void);
extern void mnDataSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnDataMakeOptionTab(GObj *gobj, f32 posx, f32 posy, s32 lrs);
extern void mnDataMakeCharacters(void);
extern void mnDataMakeVSRecord(void);
extern void mnDataMakeSoundTest(void);
extern void func_ovl61_801320A0(SObj *sobj);
extern void mnDataMakeMenuGObj(void);
extern void mnDataLabelsFuncDisplay(GObj *gobj);
extern void mnDataMakeLabels(void);
extern void mnDataMakeDecals(void);
extern void mnDataMakeLink3Camera(void);
extern void mnDataMakeOptionsCamera(void);
extern void mnDataMakeLabelsCamera(void);
extern void mnDataMakeDecalsCamera(void);
extern void mnDataInitVars(void);
extern void mnDataFuncRun(GObj *gobj);
extern void mnDataFuncStart(void);
extern void mnDataStartScene(void);

#endif
