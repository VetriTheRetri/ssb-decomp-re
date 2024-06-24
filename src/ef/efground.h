#ifndef _EFGROUND_H_
#define _EFGROUND_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ef/efdef.h>

extern sb32 efGroundCheckEffectInBounds(GObj *effect_gobj);
extern void efGroundCommonProcUpdate(GObj *effect_gobj);
extern void efGroundUpdateEffectYaw(GObj *effect_gobj);
extern void efGroundUpdateStepPositions(GObj *effect_gobj);
extern void efGroundSetStepPositions(GObj *effect_gobj);
extern void efGroundUpdatePhysics(GObj *effect_gobj, s32 effect_id);
extern void efGroundDObjSetup(GObj *effect_gobj, DObjDesc *dobj_desc, DObj **p_ptr_dobj, u8 tk1, u8 tk2, u8 arg5, s32 lr);
extern GObj* efGroundMakeEffect(efCreateDesc *effect_desc, s32 lr);
extern void efGroundMakeEffectID(s32 effect_id);
extern void efGroundActorProcUpdate(GObj *gobj);
extern void efGroundSetupRandomWeights(void);
extern void efGroundInitActor(void);

#endif
