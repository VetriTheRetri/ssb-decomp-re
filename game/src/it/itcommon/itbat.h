#ifndef _ITBAT_H_
#define _ITBAT_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itBatAFallProcUpdate(GObj *item_gobj);
extern sb32 itBatGWaitProcMap(GObj *item_gobj);
extern sb32 itBatAFallProcMap(GObj *item_gobj);
extern void itBatGWaitSetStatus(GObj *item_gobj);
extern void itBatAFallSetStatus(GObj *item_gobj);
extern void itBatFHoldSetStatus(GObj *item_gobj);
extern sb32 itBatFThrowProcUpdate(GObj *item_gobj);
extern sb32 itBatFThrowProcMap(GObj *item_gobj);
extern sb32 itBatFThrowProcHit(GObj *item_gobj);
extern void itBatFThrowSetStatus(GObj *item_gobj);
extern sb32 itBatFDropProcMap(GObj *item_gobj);
extern void itBatFDropSetStatus(GObj *item_gobj);
extern GObj* itBatMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif