#ifndef _ITRBOMB_H_
#define _ITRBOMB_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itRBombContainerSmashUpdateEffect(GObj *effect_gobj);
extern void itRBombContainerSmashMakeEffect(Vec3f *pos);
extern sb32 itRBombAFallProcUpdate(GObj *item_gobj);
extern sb32 itRBombSDefaultProcHit(GObj *item_gobj);
extern sb32 itRBombSDefaultProcDamage(GObj *item_gobj);
extern void itRBombGRollSetStatus(GObj *item_gobj);
extern sb32 itRBombAFallCheckCollideGround(GObj *item_gobj, f32 vel_mod);
extern sb32 itRBombAFallProcMap(GObj *item_gobj);
extern void itRBombSDefaultSetMapCollisionBox(GObj *item_gobj);
extern sb32 itRBombNExplodeProcUpdate(GObj *item_gobj);
extern sb32 itRBombGRollProcUpdate(GObj *item_gobj);
extern sb32 itRBombGRollProcMap(GObj *item_gobj);
extern GObj* itRBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itRBombNExplodeInitItemVars(GObj *item_gobj);
extern void itRBombNExplodeSetStatus(GObj *item_gobj);
extern void itRBombNExplodeMakeEffectGotoSetStatus(GObj *item_gobj);

#endif
