#ifndef _ITCAPSULE_H_
#define _ITCAPSULE_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itCapsuleAFallProcUpdate(GObj *item_gobj);
extern sb32 itCapsuleGWaitProcMap(GObj *item_gobj);
extern sb32 itCapsuleSDefaultProcHit(GObj *item_gobj);
extern sb32 itCapsuleAFallProcMap(GObj *item_gobj);
extern void itCapsuleGWaitSetStatus(GObj *item_gobj);
extern void itCapsuleAFallSetStatus(GObj *item_gobj);
extern void itCapsuleFHoldSetStatus(GObj *item_gobj);
extern sb32 itCapsuleFThrowProcUpdate(GObj *item_gobj);
extern sb32 itCapsuleFThrowProcMap(GObj *item_gobj);
extern void itCapsuleFThrowSetStatus(GObj *item_gobj);
extern sb32 func_ovl3_801741F0(GObj *item_gobj);
extern sb32 itCapsuleFDropProcMap(GObj *item_gobj);
extern void itCapsuleFDropSetStatus(GObj *item_gobj);
extern sb32 itCapsuleNExplodeProcUpdate(GObj *item_gobj);
extern GObj* itCapsuleMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itCapsuleNExplodeInitItemVars(GObj *item_gobj);
extern void itCapsuleNExplodeSetStatus(GObj *item_gobj);
extern void itCapsuleNExplodeMakeEffectGotoSetStatus(GObj *item_gobj);

#endif
