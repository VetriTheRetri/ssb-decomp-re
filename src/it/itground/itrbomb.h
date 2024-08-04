#ifndef _ITRBOMB_H_
#define _ITRBOMB_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itRBombContainerSmashUpdateEffect(GObj *effect_gobj);
extern void itRBombContainerSmashMakeEffect(Vec3f *pos);
extern sb32 itRBombFallProcUpdate(GObj *item_gobj);
extern sb32 itRBombCommonProcHit(GObj *item_gobj);
extern sb32 itRBombCommonProcDamage(GObj *item_gobj);
extern void itRBombGRollSetStatus(GObj *item_gobj);
extern sb32 itRBombFallCheckCollideGround(GObj *item_gobj, f32 vel_mod);
extern sb32 itRBombFallProcMap(GObj *item_gobj);
extern void itRBombCommonSetMapCollisionBox(GObj *item_gobj);
extern sb32 itRBombExplodeNProcUpdate(GObj *item_gobj);
extern sb32 itRBombGRollProcUpdate(GObj *item_gobj);
extern sb32 itRBombGRollProcMap(GObj *item_gobj);
extern GObj* itRBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itRBombExplodeNInitItemVars(GObj *item_gobj);
extern void itRBombExplodeNSetStatus(GObj *item_gobj);
extern void itRBombExplodeNMakeEffectGotoSetStatus(GObj *item_gobj);

#endif
