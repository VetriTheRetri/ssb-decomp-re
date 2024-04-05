#ifndef _ITTARU_H_
#define _ITTARU_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itTaruAFallProcUpdate(GObj *item_gobj);
extern sb32 itTaruGWaitProcMap(GObj *item_gobj);
extern sb32 itTaruSDefaultProcHit(GObj *item_gobj);
extern sb32 itTaruSDefaultProcDamage(GObj *item_gobj);
extern sb32 itTaruAFallProcMap(GObj *item_gobj);
extern void itTaruGWaitSetStatus(GObj *item_gobj);
extern void itTaruAFallSetStatus(GObj *item_gobj);
extern void itTaruFHoldSetStatus(GObj *item_gobj);
extern sb32 itTaruFThrowCheckMapCollision(GObj *item_gobj, f32 vel_mod);
extern void itTaruGRollSetStatus(GObj *item_gobj);
extern sb32 itTaruFThrowProcMap(GObj *item_gobj);
extern void itTaruFThrowInitItemVars(GObj *item_gobj);
extern void itTaruFThrowSetStatus(GObj *item_gobj);
extern sb32 func_ovl3_80179F50(GObj *item_gobj);
extern void itTaruFDropSetStatus(GObj *item_gobj);
extern sb32 itTaruNExplodeProcUpdate(GObj *item_gobj);
extern sb32 itTaruGRollProcUpdate(GObj *item_gobj);
extern sb32 itTaruGRollProcMap(GObj *item_gobj);
extern GObj* itTaruMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itTaruNExplodeInitItemVars(GObj *item_gobj);
extern void itTaruNExplodeSetStatus(GObj *item_gobj);

#endif
