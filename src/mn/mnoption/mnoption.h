#ifndef _MNOPTION_H_
#define _MNOPTION_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnOptionFuncLights(Gfx **dls);
extern void mnOptionSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnOptionMakeOptionTabs(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs);
extern void mnOptionSetSoundToggleSpriteColors(GObj *gobj, sb32 mono_or_stereo);
extern void mnOptionMakeSoundToggle();
extern void mnOptionMakeSound();
extern void mnOptionMakeScreenAdjust();
extern void mnOptionMakeBackupClear();
extern void mnOptionSetSubtitleSpriteColors(SObj *sobj);
extern void mnOptionMakeMenuGObj();
extern void mnOptionLabelsProcDisplay(GObj *gobj);
extern void mnOptionMakeLabels();
extern void mnOptionMakeDecals();
extern void func_ovl60_80132618(GObj *gobj);
extern void func_ovl60_8013275C();
extern void func_ovl60_80132794(GObj *gobj);
extern void mnOptionSoundUnderlineProcDisplay(GObj *gobj);
extern void mnOptionMakeSoundUnderline();
extern void mnOptionMakeSoundUnderlineCamera();
extern void mnOptionMakeLink4Camera();
extern void mnOptionMakeOptionsCamera();
extern void mnOptionMakeLabelsCamera();
extern void mnOptionMakeDecalsCamera();
extern void mnOptionInitVars();
extern void mnOptionWriteBackup();
extern void mnOptionFuncRun(GObj *gobj);
extern void mnOptionFuncStart();
extern void mnOptionStartScene();

#endif
