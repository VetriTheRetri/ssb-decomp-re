#ifndef _ITTARU_H_
#define _ITTARU_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itTaruFallProcUpdate(GObj *item_gobj);
extern sb32 itTaruWaitProcMap(GObj *item_gobj);
extern sb32 itTaruCommonProcHit(GObj *item_gobj);
extern sb32 itTaruCommonProcDamage(GObj *item_gobj);
extern sb32 itTaruFallProcMap(GObj *item_gobj);
extern void itTaruWaitSetStatus(GObj *item_gobj);
extern void itTaruFallSetStatus(GObj *item_gobj);
extern void itTaruHoldSetStatus(GObj *item_gobj);
extern sb32 itTaruThrownCheckMapCollision(GObj *item_gobj, f32 vel_mod);
extern void itTaruGRollSetStatus(GObj *item_gobj);
extern sb32 itTaruThrownProcMap(GObj *item_gobj);
extern void itTaruThrownInitItemVars(GObj *item_gobj);
extern void itTaruThrownSetStatus(GObj *item_gobj);
extern sb32 func_ovl3_80179F50(GObj *item_gobj);
extern void itTaruDroppedSetStatus(GObj *item_gobj);
extern sb32 itTaruExplodeNProcUpdate(GObj *item_gobj);
extern sb32 itTaruGRollProcUpdate(GObj *item_gobj);
extern sb32 itTaruGRollProcMap(GObj *item_gobj);
extern GObj* itTaruMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itTaruExplodeNInitItemVars(GObj *item_gobj);
extern void itTaruExplodeNSetStatus(GObj *item_gobj);
extern void itTaruExplodeNMakeEffectGotoSetStatus(GObj *item_gobj);

#endif
