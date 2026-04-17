#ifndef _MNVSOPTIONS_H_
#define _MNVSOPTIONS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

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
extern void mnVSOptionsMakeDamageDigits();
extern void mnVSOptionsMakeDamageOption();
extern void mnVSOptionsMakeItemSwitchOption();
extern void mnVSOptionsMakeStageSelectOption();
extern void mnVSOptionsMakeTeamAttackOption();
extern void mnVSOptionsMakeHandicapOption();
extern void mnVSOptionsLabelProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeLabel();
extern void mnVSOptionsSetSubtitleSpriteColors(SObj *sobj);
extern void mnVSOptionsMakeSubtitle();
extern void mnVSOptionsMakeWallpaper();
extern void mnVSOptionsUnderlineProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeUnderline();
extern void mnVSOptionsTintProcDisplay(GObj *gobj);
extern void mnVSOptionsMakeTint();
extern void mnVSOptionsMakeDecal();
extern void mnVSOptionsMakeTintCamera();
extern void mnVSOptionsMakeOptionCamera();
extern void mnVSOptionsMakeLabelUnderlineCamera();
extern void mnVSOptionsMakeWallpaperCamera();
extern void mnVSOptionsMakeDecalCamera();
extern void mnVSOptionsInitVars();
extern void mnVSOptionsSetAllSettings();
extern void mnVSOptionsSetHandicapSettings();
extern void mnVSOptionsFuncRun(GObj *gobj);
extern void mnVSOptionsFuncStart();
extern void mnVSOptionsStartScene();

#endif
