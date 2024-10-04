#ifndef _MN1PMODE_H_
#define _MN1PMODE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMN1PModeOptionTabSprite;                   // 0x00001108
extern intptr_t lMN1PModeText1PGameSprite;                  // 0x00002A28
extern intptr_t lMN1PModeDecalControllerSprite;             // 0x000050F8
extern intptr_t lMN1PModeLabel1PSprite;                     // 0x00005338
extern intptr_t lMN1PModeTextTraningModeSprite;             // 0x00005AC8
extern intptr_t lMN1PModeTextBonus1PracticeSprite;          // 0x00005F28
extern intptr_t lMN1PModeTextBonus2PracticeSprite;          // 0x00006388

extern void mn1PModeFuncLights(Gfx **dls);
extern void mn1PModeSetOptionSpriteColors(GObj *gobj, s32 status, s32 option_id);
extern void mn1PModeMakeOptionTab(GObj *gobj, f32 pos_x, f32 pos_y, s32 lrs);
extern void mn1PModeMake1PGame(void);
extern void mn1PModeMakeTrainingMode(void);
extern void mn1PModeMakeBonus1Practice(void);
extern void mn1PModeMakeBonus2Practice(void);
extern void func_ovl18_80132208(SObj *sobj);
extern void func_ovl18_8013223C(void);
extern void mn1PModeLabelsProcDisplay(GObj *gobj);
extern void mn1PModeMakeLabels(void);
extern void mn1PModeMakeDecals(void);
extern void mn1PModeMakeLink3Camera(void);
extern void mn1PModeMakeOptionsCamera(void);
extern void mn1PModeMakeLabelsCamera(void);
extern void mn1PModeMakeDecalsCamera(void);
extern void mn1PModeInitVars(void);
extern void mn1PModeFuncRun(GObj *gobj);
extern void mn1PModeFuncStart(void);
extern void mn1PModeStartScene(void);

#endif
