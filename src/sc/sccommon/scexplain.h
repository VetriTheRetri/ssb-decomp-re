#ifndef _SCEXPLAIN_H_
#define _SCEXPLAIN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void scExplainLoadExplainFiles(void);
extern void scExplainSetBattleState(void);
extern void scExplainStartBattle(void);
extern void func_ovl63_8018D248(void);
extern void func_ovl63_8018D2D0(GObj *gobj);
extern void func_ovl63_8018D3D8(void);
extern void scExplainSetPlayerInterfacePositions(void);
extern GObj* func_ovl63_8018D460(void);
extern GObj* func_ovl63_8018D500(void);
extern void scExplainControlStickProcDraw(GObj *gobj);
extern void scExplainProcUpdateControlStickSprite(GObj *gobj);
extern GObj* scExplainMakeControlStickInterface(void);
extern void scExplainTapSparkProcDraw(GObj *gobj);
extern void scExplainUpdateTapSparkEffect(void);
extern void scExplainTapSparkProcUpdate(GObj *gobj);
extern GObj* scExplainMakeTapSpark(void);
extern void scExplainSpecialMoveRGBProcUpdate(void);
extern GObj* scExplainMakeSpecialMoveRGB(void);
extern void scExplainSetInterfaceGObjs(void);
extern SObj* scExplainMakeSObjOffset(intptr_t offset);
extern void scExplainSetPhaseSObjs(void);
extern void scExplainUpdateTextBoxSprite(void);
extern void func_ovl63_8018DDBC(void);
extern void scExplainHideTapSpark(void);
extern void scExplainUpdateArgsSObj(scExplainArgs *args, SObj *sobj);
extern void scExplainDetectExit(void);
extern void scExplainTryMakeFireFlower(void);
extern void scExplainUpdatePhase(void);
extern void scExplainSceneInterfaceProcUpdate(GObj *gobj);
extern GObj* scExplainMakeSceneInterface(void);
extern void scExplainProcStart(void);
extern void scExplainProcLights(Gfx **dls);
extern void jtgt_ovl63_8018E568(void);
extern void jtgt_ovl63_8018E594(void);
extern void scExplainStartScene(void);
extern void scExplainSetupFiles(void);

#endif
