#ifndef _ITMSBOMB_H_
#define _ITMSBOMB_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itMSBombAFallProcUpdate(GObj *item_gobj);
extern sb32 itMSBombGWaitProcMap(GObj *item_gobj);
extern sb32 itMSBombAFallProcMap(GObj *item_gobj);
extern void itMSBombGWaitSetStatus(GObj *item_gobj);
extern void itMSBombAFallSetStatus(GObj *item_gobj);
extern void itMSBombFHoldSetStatus(GObj *item_gobj);
extern sb32 itMSBombFThrowProcUpdate(GObj *item_gobj);
extern sb32 itMSBombFThrowProcMap(GObj *item_gobj);
extern sb32 itMSBombSDefaultProcHit(GObj *item_gobj);
extern void itMSBombFThrowSetStatus(GObj *item_gobj);
extern sb32 itMSBombFDropProcMap(GObj *item_gobj);
extern void itMSBombFDropSetStatus(GObj *item_gobj);
extern void itMSBombGAttachUpdateSurface(GObj *item_gobj);
extern void itMSBombGAttachInitItemVars(GObj *item_gobj);
extern void itMSBombNExplodeMakeEffect(GObj *item_gobj);
extern void itMSBombNExplodeInitStatusVars(GObj *item_gobj, sb32 is_make_effect);
extern sb32 itMSBombSDefaultProcDamage(GObj *item_gobj);
extern sb32 itMSBombGAttachProcUpdate(GObj *item_gobj);
extern void itMSBombGAttachSetStatus(GObj *item_gobj);
extern sb32 itMSBombGAttachProcMap(GObj *item_gobj);
extern void itMSBombNExplodeUpdateHitEvent(GObj *item_gobj);
extern void itMSBombADetachInitItemVars(GObj *item_gobj);
extern sb32 itMSBombADetachProcUpdate(GObj *item_gobj);
extern void itMSBombADetachSetStatus(GObj *item_gobj);
extern void itMSBombNExplodeInitItemVars(GObj *item_gobj);
extern sb32 itMSBombNExplodeProcUpdate(GObj *item_gobj);
extern void itMSBombNExplodeSetStatus(GObj *item_gobj);
extern GObj* itMSBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
