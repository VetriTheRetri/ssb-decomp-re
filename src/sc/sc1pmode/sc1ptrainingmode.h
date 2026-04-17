#ifndef _SC1PTRAINING_H_
#define _SC1PTRAINING_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern intptr_t lSC1PTrainingModeDisplayLabelSprites;			// 0x00000000
extern intptr_t lSC1PTrainingModeDisplayOptionSprites;			// 0x00000020
extern intptr_t lSC1PTrainingModeMenuLabelSprites;				// 0x000000BC
extern intptr_t D_NF_0000010C;								    // 0x0000010C
extern intptr_t lSC1PTrainingModeMenuOptionSprites;				// 0x0000013C
extern intptr_t D_NF_000001B8;								    // 0x000001B8

extern void sc1PTrainingModeSetMenuGObjFlags(u32 flags);
extern void sc1PTrainingModeCheckEnterMenu();
extern void sc1PTrainingModeCheckLeaveMenu();
extern void sc1PTrainingModeUpdateMenuInputs();
extern void sc1PTrainingModeUpdateScroll();
extern sb32 sc1PTrainingModeCheckUpdateOptionID(s32 *option, s32 option_min, s32 option_max);
extern sb32 sc1PTrainingModeUpdateCPOption();
extern s32 sc1PTrainingModeGetItemCount();
extern sb32 sc1PTrainingModeUpdateItemOption();
extern sb32 sc1PTrainingModeUpdateSpeedOption();
extern sb32 sc1PTrainingModeUpdateViewOption();
extern sb32 sc1PTrainingModeUpdateResetOption();
extern sb32 sc1PTrainingModeUpdateExitOption();
extern void sc1PTrainingModeUpdateMainOption();
extern void sc1PTrainingModeUpdateMenu();
extern sb32 sc1PTrainingModeCheckLagTic();
extern void sc1PTrainingModeUpdateAll();
extern void sc1PTrainingModeFuncUpdate();
extern void sc1PTrainingModeInitVars();
extern void sc1PTrainingModeLoadSprites();
extern void sc1PTrainingModeLoadWallpaper();
extern void sc1PTrainingModeInitDisplayVars();
extern SObj* sc1PTrainingModeMakeStatDisplay(GObj *interface_gobj, SC1PTrainingModeSprites *ts);
extern void sc1PTrainingModeMakeStatDisplayText();
extern void sc1PTrainingModeUpdateDamageDisplay(GObj *interface_gobj, s32 damage);
extern void sc1PTrainingModeDamageDisplayProcDisplay(GObj *interface_gobj);
extern void sc1PTrainingModeDamageDisplayProcUpdate(GObj *interface_gobj);
extern void sc1PTrainingModeInitStatDisplayCharacterSprites();
extern void sc1PTrainingModeInitSpriteEnvColors(SObj *sobj);
extern void sc1PTrainingModeMakeDamageDisplay();
extern void sc1PTrainingModeUpdateComboDisplay(GObj *interface_gobj, s32 combo);
extern void sc1PTrainingModeComboDisplayProcUpdate(GObj *interface_gobj);
extern void sc1PTrainingModeComboDisplayProcDisplay(GObj *interface_gobj);
extern void sc1PTrainingModeMakeComboDisplay();
extern void sc1PTrainingModeUpdateSpeedDisplaySprite();
extern void sc1PTrainingModeMakeSpeedDisplay();
extern void sc1PTrainingModeUpdateCPDisplaySprite();
extern void sc1PTrainingModeMakeCPDisplay();
extern void sc1PTrainingModeUpdateItemDisplaySprite();
extern void sc1PTrainingModeItemDisplayProcDisplay(GObj *interface_gobj);
extern void sc1PTrainingModeMakeItemDisplay();
extern void sc1PTrainingModeMakeStatDisplayAll();
extern void sc1PTrainingModeMakeMenuLabels();
extern void sc1PTrainingModeInitMenuOptionSpriteAttrs();
extern void sc1PTrainingModeMenuProcDisplay(GObj *interface_gobj);
extern void sc1PTrainingModeMakeMenu();
extern void sc1PTrainingModeInitCPOptionSpriteColors();
extern void sc1PTrainingModeUpdateCPOptionSprite();
extern void sc1PTrainingModeMakeCPOption();
extern void sc1PTrainingModeUpdateItemOptionSprite();
extern void sc1PTrainingModeInitItemOptionSpriteColors();
extern void sc1PTrainingModeMakeItemOption();
extern void sc1PTrainingModeInitSpeedOptionSpriteColors();
extern void sc1PTrainingModeUpdateSpeedOptionSprite();
extern void sc1PTrainingModeMakeSpeedOption();
extern void sc1PTrainingModeUpdateViewOptionSprite();
extern void sc1PTrainingModeViewOptionProcUpdate(GObj *interface_gobj);
extern void sc1PTrainingModeMakeViewOption();
extern void sc1PTrainingModeSetHScrollOptionSObjs();
extern void sc1PTrainingModeInitOptionArrowSpriteColors(SObj *sobj);
extern void sc1PTrainingModeUpdateOptionArrows();
extern void sc1PTrainingModeMakeOptionArrows();
extern SObj* func_ovl7_8018F7C8(GObj *interface_gobj, SC1PTrainingModeSprites *ts);
extern void func_ovl7_8018F804();
extern void func_ovl7_8018F874();
extern void func_ovl7_8018F8FC();
extern void func_ovl7_8018F984();
extern s32 sc1PTrainingModeGetOptionSpriteID();
extern void func_ovl7_8018FA54();
extern void func_ovl7_8018FB40();
extern void sc1PTrainingModeUpdateCursorPosition();
extern void sc1PTrainingModeMakeCursor();
extern void sc1PTrainingModeSetVScrollOptionSObjs();
extern void sc1PTrainingModeUnderlineProcDisplay(GObj *interface_gobj);
extern void sc1PTrainingModeUpdateUnderline();
extern void sc1PTrainingModeMakeUnderline();
extern void sc1PTrainingModeMakeMenuAll();
extern void sc1PTrainingModeSetPlayDefaultBGM();
extern void sc1PTrainingModeSetGameStatusGo();
extern void sc1PTrainingModeUpdateDummyBehavior();
extern void sc1PTrainingModeFuncStart();
extern void sc1PTrainingModeFuncLights(Gfx **dls);
extern void sc1PTrainingModeStartScene();
extern void sc1PTrainingModeSetupFiles();

#endif
