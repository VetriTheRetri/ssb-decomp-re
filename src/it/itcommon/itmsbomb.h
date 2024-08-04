#ifndef _ITMSBOMB_H_
#define _ITMSBOMB_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itMSBombFallProcUpdate(GObj *item_gobj);
extern sb32 itMSBombWaitProcMap(GObj *item_gobj);
extern sb32 itMSBombFallProcMap(GObj *item_gobj);
extern void itMSBombWaitSetStatus(GObj *item_gobj);
extern void itMSBombFallSetStatus(GObj *item_gobj);
extern void itMSBombHoldSetStatus(GObj *item_gobj);
extern sb32 itMSBombThrownProcUpdate(GObj *item_gobj);
extern sb32 itMSBombThrownProcMap(GObj *item_gobj);
extern sb32 itMSBombCommonProcHit(GObj *item_gobj);
extern void itMSBombThrownSetStatus(GObj *item_gobj);
extern sb32 itMSBombDroppedProcMap(GObj *item_gobj);
extern void itMSBombDroppedSetStatus(GObj *item_gobj);
extern void itMSBombGAttachUpdateSurface(GObj *item_gobj);
extern void itMSBombGAttachInitItemVars(GObj *item_gobj);
extern void itMSBombExplodeNMakeEffect(GObj *item_gobj);
extern void itMSBombExplodeNInitStatusVars(GObj *item_gobj, sb32 is_make_effect);
extern sb32 itMSBombCommonProcDamage(GObj *item_gobj);
extern sb32 itMSBombGAttachProcUpdate(GObj *item_gobj);
extern void itMSBombGAttachSetStatus(GObj *item_gobj);
extern sb32 itMSBombGAttachProcMap(GObj *item_gobj);
extern void itMSBombExplodeNUpdateHitEvent(GObj *item_gobj);
extern void itMSBombADetachInitItemVars(GObj *item_gobj);
extern sb32 itMSBombADetachProcUpdate(GObj *item_gobj);
extern void itMSBombADetachSetStatus(GObj *item_gobj);
extern void itMSBombExplodeNInitItemVars(GObj *item_gobj);
extern sb32 itMSBombExplodeNProcUpdate(GObj *item_gobj);
extern void itMSBombExplodeNSetStatus(GObj *item_gobj);
extern GObj* itMSBombMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
