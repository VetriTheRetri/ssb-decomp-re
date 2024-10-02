#ifndef _MNDATA_H_
#define _MNDATA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnDataProcLights(Gfx **dls);
extern sb32 mnDataCheckSoundTestUnlocked(void);
extern void mnDataSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnDataMakeOptionTabs(GObj *gobj, f32 posx, f32 posy, s32 lrs);
extern void mnDataMakeCharactersSObj(void);
extern void mnDataMakeVSRecordSObj(void);
extern void mnDataMakeSoundTestSObj(void);
extern void func_ovl61_801320A0(SObj *sobj);
extern void mnDataMakeMenuGObj(void);
extern void mnDataHeaderProcDisplay(GObj *gobj);
extern void mnDataMakeHeaderSObjs(void);
extern void mnDataMakeDecalSObjs(void);
extern void mnDataMakeLink3Camera(void);
extern void mnDataMakeLink2Camera(void);
extern void mnDataMakeLink1Camera(void);
extern void mnDataMakeLink0Camera(void);
extern void mnDataInitVars(void);
extern void mnDataProcRun(GObj *gobj);
extern void mnDataProcStart(void);

#endif
