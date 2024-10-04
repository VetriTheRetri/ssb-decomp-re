#ifndef _MNVSOPTIONS_H_
#define _MNVSOPTIONS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNVSOptionsLabelVSOptionsSprite;           // 0x00002668
extern intptr_t lMNVSOptionsOptionTabSprite;                // 0x000033D8
extern intptr_t lMNVSOptionsTextHandicapSprite;             // 0x00003690
extern intptr_t lMNVSOptionsTextTeamAttackSprite;           // 0x00003968
extern intptr_t lMNVSOptionsTextStageSelectSprite;          // 0x00003CF8
extern intptr_t lMNVSOptionsTextItemSwitchSprite;           // 0x00003FC8
extern intptr_t lMNVSOptionsTextDamageSprite;               // 0x00004228
extern intptr_t lMNVSOptionsDecalN64Sprite;                 // 0x00005F60

extern void mnVSOptionsFuncLights(Gfx **dls);
extern s32 mnVSOptionsGetPowerOf(s32 base, s32 exp);
extern void mnVSOptionsSetDamageDigitSpriteColors(SObj *sobj, u32 *colors);
extern s32 mnVSOptionsGetDamageDigitCount(s32 damage, s32 digit_count_max);
extern void mnVSOptionsMakeDamageDigitSObjs(GObj *gobj, s32 damage, f32 pos_x, f32 pos_y, u32 *colors, s32 digit_count_max, sb32 is_fixed_digit_count);
extern void mnVSOptionsSetOptionSpriteColors(GObj *gobj, s32 status);
extern void mnVSOptionsSetToggleSpriteColors(GObj *gobj, s32 status);
extern void mnVSOptionsMakeOnOffToggle(GObj *gobj, f32 pos_x, f32 pos_y);
extern void mnVSOptionsSetHandicapSpriteColors(GObj *gobj, s32 setting);
extern void mnVSOptionsMakeHandicapToggle(GObj *gobj, f32 pos_x, f32 pos_y);
extern void mnVSOptionsMakeDamageDigits(void);
extern void mnVSOptionsMakeDamageOption(void);
extern void mnVSOptionsMakeItemSwitchOption(void);
extern void mnVSOptionsMakeStageSelectOption(void);
extern void mnVSOptionsMakeTeamAttackOption(void);
extern void mnVSOptionsMakeHandicapOption(void);
extern void mnVSOptionsLabelProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeLabel(void);
extern void func_ovl20_80132E24(SObj *sobj);
extern void func_ovl20_80132E58(void);
extern void mnVSOptionsMakeWallpaper(void);
extern void mnVSOptionsUnderlineProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeUnderline(void);
extern void mnVSOptionsTintProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeTint(void);
extern void mnVSOptionsMakeDecal(void);
extern void mnVSOptionsMakeTintCamera(void);
extern void mnVSOptionsMakeOptionCamera(void);
extern void mnVSOptionsMakeLabelUnderlineCamera(void);
extern void mnVSOptionsMakeWallpaperCamera(void);
extern void mnVSOptionsMakeDecalCamera(void);
extern void mnVSOptionsInitVars(void);
extern void mnVSOptionsSetAllSettings(void);
extern void mnVSOptionsSetHandicapSettings(void);
extern void mnVSOptionsFuncRun(GObj *gobj);
extern void mnVSOptionsFuncStart(void);
extern void mnVSOptionsStartScene(void);

#endif
