#ifndef _MNBACKUPCLEAR_H_
#define _MNBACKUPCLEAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern intptr_t lMNBackupClearHeaderOptionSprite;           // 0x00000B40
extern intptr_t lMNBackupClearHeaderBackupClearSprite;      // 0x00000B60
extern intptr_t lMNBackupClearOptionNewcomersSprite;        // 0x00003A00
extern intptr_t lMNBackupClearOption1PHighScoreSprite;      // 0x00004050
extern intptr_t lMNBackupClearOptionVSRecordSprite;         // 0x000046A0
extern intptr_t lMNBackupClearOptionPrizeSprite;            // 0x00005340
extern intptr_t lMNBackupClearOptionAllDataClearSprite;     // 0x00005990
extern intptr_t lMNBackupClearOptionBonusStageTimeSprite;   // 0x00007020
extern intptr_t lMNBackupClearOptionCircleSprite;           // 0x00005DB8

extern intptr_t lMNBackupClearOptionYesHighlightPalette;    // 0x00007500
extern intptr_t lMNBackupClearOptionYesNotPalette;          // 0x00007528
extern intptr_t lMNBackupClearOptionYesSprite;              // 0x00007580
extern intptr_t lMNBackupClearOptionNoHighlightPalette;     // 0x00007A60
extern intptr_t lMNBackupClearOptionNoNotPalette;           // 0x00007A88
extern intptr_t lMNBackupClearOptionNoSprite;               // 0x00007AB8

extern intptr_t lMNBackupClearTextIsOkaySprite;             // 0x000063C8
extern intptr_t lMNBackupClearTextAreYouSureSprite;         // 0x000069D8

extern intptr_t lMNBackupClearOptionConfirmPalette;         // 0x00007550

extern void mnBackupClearFuncLights(Gfx **dls);
extern void mnBackupClearMakeUnused(s32 option);
extern void mnBackupClearMakeHeaderSObjs(void);
extern void mnBackupClearUpdateOptionTabColors(GObj *gobj, s32 status);
extern void mnBackupClearSetOptionSpriteColors(void);
extern void mnBackupClearEjectOptionGObjs(void);
extern void mnBackupClearOptionConfirmFuncDisplay(GObj *gobj);
extern void mnBackupClearEjectOptionConfirmGObj(void);
extern void mnBackupClearMakeOptionConfirm(sb32 confirm_kind, sb32 yes_or_no);
extern void mnBackupClearMakeMainCamera(void);
extern void mnBackupClearInitVars(void);
extern void mnBackupClearApplyOptionID(s32 option);
extern void mnBackupClearUpdateOptionMainMenu(void);
extern void mnBackupClearUpdateOptionConfirmMenu(sb32 confirm_kind);
extern void mnBackupClearFuncRun(GObj *gobj);
extern void mnBackupClearFuncStart(void);
extern void mnBackupClearStartScene(void);

#endif
