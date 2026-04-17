#ifndef _MN1PMODE_H_
#define _MN1PMODE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mn1PModeFuncLights(Gfx **dls);
extern void mn1PModeSetOptionSpriteColors(GObj *gobj, s32 status, s32 option_id);
extern void mn1PModeMakeOptionTab(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs);
extern void mn1PModeMake1PGame();
extern void mn1PModeMakeTrainingMode();
extern void mn1PModeMakeBonus1Practice();
extern void mn1PModeMakeBonus2Practice();
extern void mn1PModeSetSubtitleSpriteColors(SObj *sobj);
extern void mn1PModeMakeSubtitle();
extern void mn1PModeLabelsProcDisplay(GObj *gobj);
extern void mn1PModeMakeLabels();
extern void mn1PModeMakeDecals();
extern void mn1PModeMakeLink3Camera();
extern void mn1PModeMakeOptionsCamera();
extern void mn1PModeMakeLabelsCamera();
extern void mn1PModeMakeDecalsCamera();
extern void mn1PModeInitVars();
extern void mn1PModeFuncRun(GObj *gobj);
extern void mn1PModeFuncStart();
extern void mn1PModeStartScene();

#endif
