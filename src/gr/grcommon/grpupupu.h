#ifndef _GRPUPUPU_H_
#define _GRPUPUPU_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t D_NF_00000F00;                                  // 0x00000F00
extern intptr_t lGRPupupuMapHead;                               // 0x000010F0

extern intptr_t lGRPupupuWhispyEyesLeftTurnAnimJoint;           // 0x000011A0
extern intptr_t lGRPupupuWhispyEyesLeftTurnMatAnimJoint;        // 0x000011E0
extern intptr_t lGRPupupuWhispyEyesLeftBlinkAnimJoint;          // 0x000012B0
extern intptr_t lGRPupupuWhispyEyesRightTurnAnimJoint;          // 0x00001220
extern intptr_t lGRPupupuWhispyEyesRightTurnMatAnimJoint;       // 0x00001270
extern intptr_t lGRPupupuWhispyEyesRightBlinkAnimJoint;         // 0x00001330

extern intptr_t lGRPupupuWhispyMouthLeftStretchAnimJoint;       // 0x000018B0
extern intptr_t lGRPupupuWhispyMouthLeftStretchMatAnimJoint;    // 0x00001A00
extern intptr_t lGRPupupuWhispyMouthLeftTurnAnimJoint;          // 0x00001BE0
extern intptr_t lGRPupupuWhispyMouthLeftTurnMatAnimJoint;       // 0x00001CE0
extern intptr_t lGRPupupuWhispyMouthLeftOpenAnimJoint;          // 0x00001E80
extern intptr_t lGRPupupuWhispyMouthLeftOpenMatAnimJoint;       // 0x000020B0
extern intptr_t lGRPupupuWhispyMouthLeftCloseAnimJoint;         // 0x00002100
extern intptr_t lGRPupupuWhispyMouthLeftCloseMatAnimJoint;      // 0x000022A0
extern intptr_t lGRPupupuWhispyMouthRightStretchAnimJoint;      // 0x00001A40
extern intptr_t lGRpupupuWhispyMouthRightStretchMatAnimJoint;   // 0x00001BA0
extern intptr_t lGRPupupuWhispyMouthRightTurnAnimJoint;         // 0x00001D30
extern intptr_t lGRPupupuWhispyMouthRightTurnMatAnimJoint;      // 0x00001E30
extern intptr_t lGRPupupuWhispyMouthRightOpenAnimJoint;         // 0x000022F0
extern intptr_t lGRPupupuWhispyMouthRightOpenMatAnimJoint;      // 0x00002540
extern intptr_t lGRPupupuWhispyMouthRightCloseAnimJoint;        // 0x00002590
extern intptr_t lGRPupupuWhispyMouthRightCloseMatAnimJoint;     // 0x00002740

extern intptr_t lGRPupupuWhispyMouthLeftOpenTexture;            // 0x00002BE0
extern intptr_t lGRPupupuWhispyMouthLeftBlowTexture;            // 0x00002C30
extern intptr_t lGRPupupuWhispyMouthLeftCloseTexture;           // 0x00002C80
extern intptr_t lGRPupupuWhispyMouthRightOpenTexture;           // 0x00002CD0
extern intptr_t lGRPupupuWhispyMouthRightBlowTexture;           // 0x00002D20
extern intptr_t lGRPupupuWhispyMouthRightCloseTexture;          // 0x00002D70

extern intptr_t lGRPupupuWhispyEyesLeftTexture0;                // 0x000033E0
extern intptr_t lGRPupupuWhispyEyesLeftTexture1;                // 0x00003450
extern intptr_t lGRPupupuWhispyEyesLeftTexture2;                // 0x000034B0
extern intptr_t lGRPupupuWhispyEyesRightTexture0;               // 0x00003510
extern intptr_t lGRPupupuWhispyEyesRightTexture1;               // 0x000035C0
extern intptr_t lGRPupupuWhispyEyesRightTexture2;               // 0x00003660

extern intptr_t D_NF_000013B0;                                  // 0x000013B0
extern intptr_t lGRPupupuWhispyEyesTransformKinds;              // 0x000010F0
extern intptr_t lGRPupupuWhispyMouthTransformKinds;             // 0x00001770
extern intptr_t D_NF_00001770;                                  // 0x00001770
extern intptr_t lGRPupupuFlowersBackTrasnformKinds;             // 0x00002A80
extern intptr_t lGRPupupuFlowersFrontTransformKinds;            // 0x000031F8
extern intptr_t lGRPupupuParticleScriptBankLo;                  // 0x00B1E640       
extern intptr_t lGRPupupuParticleScriptBankHi;                  // 0x00B1E7E0
extern intptr_t lGRPupupuParticleTextureBankLo;                 // 0x00B1E7E0
extern intptr_t lGRPupupuParticleTextureBankHi;                 // 0x00B1F960

extern s32 grPupupuWhispyGetLR(GObj *ground_gobj);
extern void grPupupuWhispySetWindPush(void);
extern void grPupupuWhispyUpdateSleep(void);
extern void grPupupuWhispyLeavesMakeEffect(void);
extern void grPupupuWhispyUpdateWait(void);
extern void grPupupuWhispyUpdateTurn(void);
extern void grPupupuWhispyUpdateOpen(void);
extern void grPupupuWhispyUpdateWindRumble(void);
extern void grPupupuWhispyUpdateBlow(void);
extern void grPupupuWhispyUpdateStop(void);
extern void grPupupuWhispyUpdateBlink(void);
extern void grPupupuUpdateWhispyStatus(void);
extern void grPupupuFlowersBackWindStart(void);
extern void grPupupuFlowersBackLoopStart(void);
extern void grPupupuFlowersBackLoopEnd(void);
extern void grPupupuFlowersBackUpdateAll(void);
extern void grPupupuFlowersFrontWindStart(void);
extern void grPupupuWhispyDustMakeEffect(void);
extern void grPupupuFlowersFrontLoopStart(void);
extern void grPupupuFlowersFrontLoopEnd(void);
extern void grPupupuFlowersFrontUpdateAll(void);
extern void grPupupuUpdateGObjAnims(void);
extern void grPupupuProcUpdate(GObj *ground_gobj);
extern GObj* grPupupuMakeMapGObj(intptr_t o_dobjdesc, intptr_t o_mobjsub, void (*proc_display)(GObj*), u8 dl_link);
extern void grPupupuInitAll(void);
extern GObj* grPupupuMakeGround(void);

#endif
