#ifndef _SCEXPLAIN_H_
#define _SCEXPLAIN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <sc/scdef.h>

// There's more of these that are currently in the C file for the How to Play tutorial

extern intptr_t lSCExplainKeyKeyEvents0;                // 0x00000000
extern intptr_t lSCExplainKeyKeyEvents1;                // 0x000009D4
extern intptr_t lSCExplainKeyKeyEvents2;                // 0x000013FC
extern intptr_t lSCExplainKeyKeyEvents3;                // 0x00001400
extern intptr_t lSCExplainPhases;                           // 0x00001404
extern intptr_t lSCExplainStickMObjSub;                     // 0x00005028
extern intptr_t lSCExplainStickDObjDesc;                    // 0x00005300
extern intptr_t lSCExplainStickNeutralMatAnimJoint;         // 0x00005390
extern intptr_t lSCExplainStickHoldUpMatAnimJoint;          // 0x000053C0
extern intptr_t lSCExplainStickTapUpMatAnimJoint;           // 0x000053F0
extern intptr_t lSCExplainStickHoldForwardMatAnimJoint;     // 0x00005430
extern intptr_t lSCExplainStickTapForwardMatAnimJoint;      // 0x00005450
extern intptr_t lSCExplainTapSparkMObjSub;                  // 0x00005A98
extern intptr_t lSCExplainTapSparkDisplayList;              // 0x00005B68
extern intptr_t lSCExplainTapSparkMatAnimJoint;             // 0x00005C20
extern intptr_t lSCExplainSpecialMoveRGBDisplayList;        // 0x00005E40

extern void scExplainLoadExplainFiles(void);
extern void scExplainSetBattleState(void);
extern void scExplainStartBattle(void);
extern void scExplainMakeCamera(void);
extern void scExplainWindowProcDisplay(GObj *gobj);
extern void scExplainMakeWindowCamera(void);
extern void scExplainSetPlayerInterfacePositions(void);
extern GObj* scExplainMakeTextCamera(void);
extern GObj* scExplainMakeControlStickCamera(void);
extern void scExplainControlStickProcDisplay(GObj *gobj);
extern void scExplainProcUpdateControlStickSprite(GObj *gobj);
extern GObj* scExplainMakeControlStickInterface(void);
extern void scExplainTapSparkProcDisplay(GObj *gobj);
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
extern void scExplainUpdateArgsSObj(SCExplainArgs *args, SObj *sobj);
extern void scExplainDetectExit(void);
extern void scExplainTryMakeFireFlower(void);
extern void scExplainUpdatePhase(void);
extern void scExplainSceneInterfaceProcUpdate(GObj *gobj);
extern GObj* scExplainMakeSceneInterface(void);
extern void scExplainFuncStart(void);
extern void scExplainFuncLights(Gfx **dls);
extern void scExplainFuncUpdate(void);
extern void scExplainFuncDraw(void);
extern void scExplainStartScene(void);
extern void scExplainSetupFiles(void);

#endif
