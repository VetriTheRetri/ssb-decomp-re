#ifndef _ITBOX_H_
#define _ITBOX_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itBoxContainerSmashUpdateEffect(GObj *effect_gobj);
extern void itBoxContainerSmashMakeEffect(Vec3f *pos);
extern sb32 itBoxSDefaultCheckSpawnItems(GObj *item_gobj);
extern sb32 itBoxAFallProcUpdate(GObj *item_gobj);
extern sb32 itBoxGWaitProcMap(GObj *item_gobj);
extern sb32 itBoxSDefaultProcHit(GObj *item_gobj);
extern sb32 itBoxSDefaultProcDamage(GObj *item_gobj);
extern sb32 itBoxAFallProcMap(GObj *item_gobj);
extern void itBoxGWaitSetStatus(GObj *item_gobj);
extern void itBoxAFallSetStatus(GObj *item_gobj);
extern void itBoxFHoldSetStatus(GObj *item_gobj);
extern sb32 itBoxFThrowProcMap(GObj *item_gobj);
extern void itBoxFThrowSetStatus(GObj *item_gobj);
extern sb32 func_ovl3_801798B8(GObj *item_gobj);
extern sb32 itBoxFDropProcMap(GObj *item_gobj);
extern void itBoxFDropSetStatus(GObj *item_gobj);
extern sb32 itBoxNExplodeProcUpdate(GObj *item_gobj);
extern GObj *itBoxMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern void itBoxNExplodeInitItemVars(GObj *item_gobj);
extern void itBoxNExplodeSetStatus(GObj *item_gobj);
extern void itBoxNExplodeMakeEffectGotoSetStatus(GObj *item_gobj);

#endif