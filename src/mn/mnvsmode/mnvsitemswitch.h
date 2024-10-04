#ifndef _MNVSITEMSWITCH_H_
#define _MNVSITEMSWITCH_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNVSItemSwitchAppearanceNoneSprite;        // 0x00000CE8
extern intptr_t lMNVSItemSwitchAppearanceVeryLowSprite;     // 0x00000EA8
extern intptr_t lMNVSItemSwitchAppearanceLowSprite;         // 0x00000F98
extern intptr_t lMNVSItemSwitchAppearanceMiddleSprite;      // 0x000010D0
extern intptr_t lMNVSItemSwitchAppearanceHighSprite;        // 0x000011E8
extern intptr_t lMNVSItemSwitchAppearanceVeryHighSprite;    // 0x000013A8
extern intptr_t lMNVSItemSwitchLabelVSOptionsSprite;        // 0x000009A8
extern intptr_t lMNVSItemSwitchLabelItemSwitchSprite;       // 0x00000B20
extern intptr_t lMNVSItemSwitchToggleOnSprite;              // 0x00001488
extern intptr_t lMNVSItemSwitchToggleOffSprite;             // 0x00001568
extern intptr_t lMNVSItemSwitchToggleSlashSprite;           // 0x00001608
extern intptr_t lMNVSItemSwitchDecalButtonSprite;           // 0x00003430
extern intptr_t lMNVSItemSwitchItemListSprite;              // 0x00005E60
extern intptr_t lMNVSItemSwitchCursorSprite;                // 0x000063A8

extern void mnVSItemSwitchFuncLights(Gfx **dls);
extern void mnVSItemSwitchSetToggleSpriteColors(GObj *gobj, s32 status);
extern void mnVSItemSwitchMakeToggle(GObj *gobj, f32 pos_x, f32 pos_y);
extern void mnVSItemSwitchLabelsProcDisplay(GObj *gobj);
extern void mnVSItemSwitchMakeLabels(void);
extern void func_ovl21_80131EFC(SObj *sobj);
extern void func_ovl21_80131F30(s32 option_id);
extern void mnVSItemSwitchMakeDecal(void);
extern void mnVSItemSwitchMakeItemList(void);
extern void mnVSItemSwitchSetCursorPosition(GObj *gobj, s32 option_id);
extern void mnVSItemSwitchMakeCursor(s32 off_y);
extern void mnVSItemSwitchMakeAppearance(s32 rate);
extern void mnVSItemSwitchInitToggles(void);
extern void mnVSItemSwitchMakeCursorCamera(void);
extern void mnVSItemSwitchMakeLabelsCamera(void);
extern void mnVSItemSwitchMakeDecalCamera(void);
extern void mnVSItemSwitchGetItemSettings(void);
extern void mnVSItemSwitchSetItemSettings(void);
extern void mnVSItemSwitchInitVars(void);
extern sb32 mnVSItemSwitchCheckAllTogglesOff(void);
extern void mnVSItemSwitchSetItemToggles(void);
extern void mnVSItemSwitchUpdateOption(s32 option_id, s32 rate);
extern void mnVSItemSwitchProcRun(GObj *gobj);
extern void mnVSItemSwitchFuncStart(void);
extern void mnVSItemSwitchStartScene(void);

#endif
