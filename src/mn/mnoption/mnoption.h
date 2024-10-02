#ifndef _MNOPTION_H_
#define _MNOPTION_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnOptionProcLights(Gfx **dls);
extern void mnOptionSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnOptionMakeOptionTabs(GObj *gobj, f32 posx, f32 posy, s32 lrs);
extern void mnOptionUpdateSoundOptionSObjs(GObj *gobj, sb32 mono_or_stereo);
extern void mnOptionMakeSoundOptionSObjs(void);
extern void mnOptionMakeSoundTextSObj(void);
extern void mnOptionMakeScreenAdjustSObj(void);
extern void mnOptionMakeBackupClearSObj(void);
extern void func_ovl60_80132174(SObj *sobj);
extern void mnOptionMakeMenuGObj(void);
extern void mnOptionHeaderProcDisplay(GObj *gobj);
extern void mnOptionMakeHeaderSObjs(void);
extern void mnOptionMakeDecalSObjs(void);
extern void func_ovl60_80132618(GObj *gobj);
extern void func_ovl60_8013275C(void);
extern void func_ovl60_80132794(GObj *gobj);
extern void mnOptionSoundUnderlineProcDisplay(GObj *gobj);
extern void mnOptionMakeSoundUnderlineGObj(void);
extern void mnOptionMakeLink3Camera(void);
extern void mnOptionMakeLink4Camera(void);
extern void mnOptionMakeLink2Camera(void);
extern void mnOptionMakeLink1Camera(void);
extern void mnOptionMakeLink0Camera(void);
extern void mnOptionInitVars(void);
extern void mnOptionWriteBackup(void);
extern void mnOptionProcRun(GObj *gobj);
extern void mnOptionProcStart(void);
extern void mnOptionStartScene(void);

#endif
