#ifndef _SCEXPLAIN_H_
#define _SCEXPLAIN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

extern void scExplainLoadExplainFiles();
extern void scExplainSetBattleState();
extern void scExplainStartBattle();
extern void scExplainMakeCamera();
extern void scExplainWindowProcDisplay(GObj *gobj);
extern void scExplainMakeWindowCamera();
extern void scExplainSetPlayerInterfacePositions();
extern GObj* scExplainMakeTextCamera();
extern GObj* scExplainMakeControlStickCamera();
extern void scExplainControlStickProcDisplay(GObj *gobj);
extern void scExplainProcUpdateControlStickSprite(GObj *gobj);
extern GObj* scExplainMakeControlStickInterface();
extern void scExplainTapSparkProcDisplay(GObj *gobj);
extern void scExplainUpdateTapSparkEffect();
extern void scExplainTapSparkProcUpdate(GObj *gobj);
extern GObj* scExplainMakeTapSpark();
extern void scExplainSpecialMoveRGBProcUpdate();
extern GObj* scExplainMakeSpecialMoveRGB();
extern void scExplainSetInterfaceGObjs();
extern SObj* scExplainMakeSObjOffset(intptr_t offset);
extern void scExplainSetPhaseSObjs();
extern void scExplainUpdateTextBoxSprite();
extern void func_ovl63_8018DDBC();
extern void scExplainHideTapSpark();
extern void scExplainUpdateArgsSObj(SCExplainArgs *args, SObj *sobj);
extern void scExplainDetectExit();
extern void scExplainTryMakeFireFlower();
extern void scExplainUpdatePhase();
extern void scExplainSceneInterfaceProcUpdate(GObj *gobj);
extern GObj* scExplainMakeSceneInterface();
extern void scExplainFuncStart();
extern void scExplainFuncLights(Gfx **dls);
extern void scExplainFuncUpdate();
extern void scExplainFuncDraw();
extern void scExplainStartScene();
extern void scExplainSetupFiles();

#endif
