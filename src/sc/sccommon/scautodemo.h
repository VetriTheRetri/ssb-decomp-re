#ifndef _SCAUTODEMO_H_
#define _SCAUTODEMO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void scAutoDemoFuncUpdate();
extern void scAutoDemoStartBattle();
extern void scAutoDemoDetectExit();
extern void scAutoDemoMakeFade();
extern sb32 scAutoDemoCheckStopFocusPlayer(FTStruct *fp);
extern void scAutoDemoSetFocusPlayer1();
extern void SCAutoDemoProcFocusPlayer1();
extern void scAutoDemoSetFocusPlayer2();
extern void SCAutoDemoProcFocusPlayer2();
extern void scAutoDemoResetFocusPlayerAll();
extern void scAutoDemoSetMagnifyDisplayOn();
extern void scAutoDemoExit();
extern void scAutoDemoChangeFocus();
extern void scAutoDemoUpdateFocus();
extern void scAutoDemoFuncRun(GObj *gobj);
extern GObj* scAutoDemoMakeFocusInterface();
extern void scAutoDemoGetPlayerStartPosition(s32 mapobj_kind, Vec3f *mapobj_pos);
extern s32 scAutoDemoGetFighterKindsNum(u16 flag);
extern s32 scAutoDemoGetShuffledFighterKind(u16 this_mask, u16 prev_mask, s32 random);
extern s32 scAutoDemoGetPlayerDamage(s32 player);
extern void scAutoDemoInitDemo();
extern void scAutoDemoInitSObjs();
extern void scAutoDemoFuncStart();
extern void scAutoDemoFuncLights(Gfx **dls);
extern void scAutoDemoStartScene();

// Other file but it's not worth making another header for this one function
extern void scAutoDemoSetupFiles();

#endif
