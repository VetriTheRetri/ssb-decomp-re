#ifndef _ITEGG_H_
#define _ITEGG_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itEggAFallProcUpdate(GObj *item_gobj);
extern sb32 itEggGWaitProcMap(GObj *item_gobj);
extern sb32 itEggSDefaultProcHit(GObj *item_gobj);
extern sb32 itEggAFallProcMap(GObj *item_gobj);
extern void itEggGWaitSetModelVars(GObj *item_gobj);
extern void itEggGWaitSetStatus(GObj *item_gobj);
extern void itEggAFallSetStatus(GObj *item_gobj);
extern void itEggFHoldSetStatus(GObj *item_gobj);
extern sb32 itEggFThrowProcUpdate(GObj *item_gobj);
extern sb32 itEggFThrowProcMap(GObj *item_gobj);
extern void itEggFThrowSetStatus(GObj *item_gobj);
extern sb32 func_ovl3_80181894(GObj *item_gobj);
extern sb32 itEggFDropProcMap(GObj *item_gobj);
extern void itEggFDropSetStatus(GObj *item_gobj);
extern sb32 itEggNExplodeProcUpdate(GObj *item_gobj);
extern GObj* itEggMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itEggNExplodeInitItemVars(GObj *item_gobj);
extern void itEggNExplodeSetStatus(GObj *item_gobj);
extern void itEggNExplodeMakeEffectGotoSetStatus(GObj *item_gobj);

#endif
