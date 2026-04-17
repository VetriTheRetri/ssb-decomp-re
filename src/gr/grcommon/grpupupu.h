#ifndef _GRPUPUPU_H_
#define _GRPUPUPU_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t lGRPupupuParticleScriptBankLo;                  // 0x00B1E640       
extern intptr_t lGRPupupuParticleScriptBankHi;                  // 0x00B1E7E0
extern intptr_t lGRPupupuParticleTextureBankLo;                 // 0x00B1E7E0
extern intptr_t lGRPupupuParticleTextureBankHi;                 // 0x00B1F960

extern s32 grPupupuWhispyGetLR(GObj *ground_gobj);
extern void grPupupuWhispySetWindPush();
extern void grPupupuWhispyUpdateSleep();
extern void grPupupuWhispyLeavesMakeEffect();
extern void grPupupuWhispyUpdateWait();
extern void grPupupuWhispyUpdateTurn();
extern void grPupupuWhispyUpdateOpen();
extern void grPupupuWhispyUpdateWindRumble();
extern void grPupupuWhispyUpdateBlow();
extern void grPupupuWhispyUpdateStop();
extern void grPupupuWhispyUpdateBlink();
extern void grPupupuUpdateWhispyStatus();
extern void grPupupuFlowersBackWindStart();
extern void grPupupuFlowersBackLoopStart();
extern void grPupupuFlowersBackLoopEnd();
extern void grPupupuFlowersBackUpdateAll();
extern void grPupupuFlowersFrontWindStart();
extern void grPupupuWhispyDustMakeEffect();
extern void grPupupuFlowersFrontLoopStart();
extern void grPupupuFlowersFrontLoopEnd();
extern void grPupupuFlowersFrontUpdateAll();
extern void grPupupuUpdateGObjAnims();
extern void grPupupuProcUpdate(GObj *ground_gobj);
extern GObj* grPupupuMakeMapGObj(intptr_t o_dobjdesc, intptr_t o_mobjsub, void (*proc_display)(GObj*), u8 dl_link);
extern void grPupupuInitAll();
extern GObj* grPupupuMakeGround();

#endif
