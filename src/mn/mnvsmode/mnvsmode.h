#ifndef _MNVSMODE_H_
#define _MNVSMODE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnVSModeFuncLights(Gfx **display_list);
extern s32 mnVSModePow(s32 num, s32 pow);
extern void mnVSModeSetTextureColors(SObj* sobj, u32 *colors);
extern s32 mnVSModeGetNumberOfDigits(s32 num, s32 maxDigits);
extern void mnVSModeMakeNumber(GObj* number_gobj, s32 num, f32 x, f32 y, u32 *colors, s32 maxDigits, sb32 pad);
extern void mnVSModeUpdateButton(GObj* button_gobj, s32 button_status);
extern void mnVSModeMakeButton(GObj* button_gobj, f32 x, f32 y, s32 arg3);
extern void mnVSModeMakeVSStartButton();
extern void mnVSModeMakeRuleValue();
extern SObj* mnVSModeGetArrowSObj(GObj* arrow_gobj, s32 direction);
extern void mnVSModeMakeLeftArrow(GObj* arrow_gobj, f32 x, f32 y);
extern void mnVSModeMakeRightArrow(GObj* arrow_gobj, f32 x, f32 y);
extern void mnVSModeAnimateRuleArrows(GObj* rule_arrows_gobj);
extern void mnVSModeMakeRuleArrows();
extern void mnVSModeAnimateTimeStockArrows(GObj* time_stock_arrows_gobj);
extern void mnVSModeMakeTimeStockArrows();
extern void mnVSModeMakeRuleButton();
extern sb32 mnVSModeIsTime();
extern s32 mnVSModeGetTimeStockValue();
extern void mnVSModeMakeTimeStockValue();
extern void mnVSModeMakeTimeStockButton();
extern void mnVSModeMakeVSOptionsButton();
extern void mnVSModeSetSubtitleSpriteColors(SObj* sobj);
extern void mnVSModeMakeSubtitle();
extern void mnVSModeRenderMenuName(GObj* menu_name_gobj);
extern void mnVSModeMakeMenuName();
extern void mnVSModeMakeBackground();
extern void mnVSModeMakeButtonValuegSYRdpViewport();
extern void mnVSModeMakeButtonViewport();
extern void mnVSModeMakeMenuNameViewport();
extern void mnVSModeMakeBackgroundViewport();
extern void mnVSModeFuncStartVars();
extern void mnVSModeSaveSettings();
extern s32 mnVSModeGetShade(s32 player);
extern s32 mnVSModeGetCostume(s32 fkind, s32 arg1);
extern void mnVSModeSetCostumesAndShades();
extern void mnVSModeMain(GObj* arg0);
extern void mnVSModeFuncStart();
extern void mnVSModeStartScene();

#endif
