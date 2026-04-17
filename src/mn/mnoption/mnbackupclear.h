#ifndef _MNBACKUPCLEAR_H_
#define _MNBACKUPCLEAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern void mnBackupClearFuncLights(Gfx **dls);
extern void mnBackupClearMakeUnused(s32 option);
extern void mnBackupClearMakeHeaderSObjs();
extern void mnBackupClearUpdateOptionTabColors(GObj *gobj, s32 status);
extern void mnBackupClearSetOptionSpriteColors();
extern void mnBackupClearEjectOptionGObjs();
extern void mnBackupClearOptionConfirmProcDisplay(GObj *gobj);
extern void mnBackupClearEjectOptionConfirmGObj();
extern void mnBackupClearMakeOptionConfirm(sb32 confirm_kind, sb32 yes_or_no);
extern void mnBackupClearMakeMainCamera();
extern void mnBackupClearInitVars();
extern void mnBackupClearApplyOptionID(s32 option);
extern void mnBackupClearUpdateOptionMainMenu();
extern void mnBackupClearUpdateOptionConfirmMenu(sb32 confirm_kind);
extern void mnBackupClearFuncRun(GObj *gobj);
extern void mnBackupClearFuncStart();
extern void mnBackupClearStartScene();

#endif
