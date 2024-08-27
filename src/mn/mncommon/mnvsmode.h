#ifndef _MNVSMODE_H_
#define _MNVSMODE_H_
#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnVSModeProcLights(Gfx **display_list);
extern s32 mnVSModePow(s32 num, s32 pow);
extern void mnVSModeSetTextureColors(SObj* sobj, u32 color[]);
extern s32 mnVSModeGetNumberOfDigits(s32 num, s32 maxDigits);
extern void mnVSModeCreateNumber(GObj* number_gobj, s32 num, f32 x, f32 y, s32 colors[], s32 maxDigits, sb32 pad);
extern void mnVSModeUpdateButton(GObj* button_gobj, s32 button_status);
extern void mnVSModeCreateButton(GObj* button_gobj, f32 x, f32 y, s32 arg3);
extern void mnVSModeCreateVSStartButton(void);
extern void mnVSModeCreateRuleValue(void);
extern SObj* mnVSModeGetArrowSObj(GObj* arrow_gobj, s32 direction);
extern void mnVSModeCreateLeftArrow(GObj* arrow_gobj, f32 x, f32 y);
extern void mnVSModeCreateRightArrow(GObj* arrow_gobj, f32 x, f32 y);
extern void mnVSModeAnimateRuleArrows(GObj* rule_arrows_gobj);
extern void mnVSModeCreateRuleArrows(void);
extern void mnVSModeAnimateTimeStockArrows(GObj* time_stock_arrows_gobj);
extern void mnVSModeCreateTimeStockArrows(void);
extern void mnVSModeCreateRuleButton(void);
extern sb32 mnVSModeIsTime(void);
extern s32 mnVSModeGetTimeStockValue(void);
extern void mnVSModeCreateTimeStockValue(void);
extern void mnVSModeCreateTimeStockButton(void);
extern void mnVSModeCreateVSOptionsButton(void);
extern void mnVSModeSetColorsUnused(SObj* sobj);
extern void mnVSModeCreateUnusedGObj(void);
extern void mnVSModeRenderMenuName(GObj* menu_name_gobj);
extern void mnVSModeCreateMenuName(void);
extern void mnVSModeCreateBackground(void);
extern void mnVSModeCreateButtonValuesViewport(void);
extern void mnVSModeCreateButtonViewport(void);
extern void mnVSModeCreateMenuNameViewport(void);
extern void mnVSModeCreateBackgroundViewport(void);
extern void mnVSModeProcStartVars(void);
extern void mnVSModeSaveSettings(void);
extern s32 mnVSModeGetShade(s32 port_id);
extern s32 mnVSModeGetCostume(s32 ft_kind, s32 arg1);
extern void mnVSModeSetCostumesAndShades(void);
extern void mnVSModeMain(GObj* arg0);
extern void mnVSModeProcStart(void);
extern void mnVSModeStartScene(void);

#endif
