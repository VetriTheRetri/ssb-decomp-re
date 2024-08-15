#ifndef _SCAUTODEMO_H_
#define _SCAUTODEMO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void scAutoDemoProcScene(void);
extern void scAutoDemoStartBattle(void);
extern void scAutoDemoDetectExit(void);
extern void func_ovl64_8018D19C(void);
extern sb32 scAutoDemoCheckStopFocusPlayer(ftStruct *fp);
extern void scAutoDemoSetFocusPlayer1(void);
extern void scAutoDemoProcFocusPlayer1(void);
extern void scAutoDemoSetFocusPlayer2(void);
extern void scAutoDemoProcFocusPlayer2(void);
extern void scAutoDemoResetFocusPlayerAll(void);
extern void scAutoDemoSetMagnifyDisplayOn(void);
extern void scAutoDemoExit(void);
extern void scAutoDemoChangeFocus(void);
extern void scAutoDemoUpdateFocus(void);
extern void scAutoDemoProcRun(GObj *gobj);
extern GObj* scAutoDemoMakeFocusInterface(void);
extern void scAutoDemoGetPlayerSpawnPosition(s32 mapobj_kind, Vec3f *mapobj_pos);
extern s32 scAutoDemoGetShuffledVariation(u16 flag);
extern s32 scAutoDemoGetShuffledFighterKind(u16 variation_flags, u16 ft_flags, s32 random);
extern s32 scAutoDemoGetPlayerDamage(s32 player);
extern void scAutoDemoInitDemo(void);
extern void scAutoDemoInitSObjs(void);
extern void scAutoDemoProcStart(void);
extern void scAutoDemoProcLights(Gfx **dls);
extern void scAutoDemoStartScene(void);

// Other file but it's not worth making another header for this one function
extern void scAutoDemoFileSetup(void);

#endif
