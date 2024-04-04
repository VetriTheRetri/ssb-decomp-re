#ifndef _ITHAMMER_H_
#define _ITHAMMER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itHammerSDefaultSetColAnim(GObj *item_gobj);
extern sb32 itHammerAFallProcUpdate(GObj *item_gobj);
extern sb32 itHammerGWaitProcMap(GObj *item_gobj);
extern sb32 itHammerAFallProcMap(GObj *item_gobj);
extern void itHammerGWaitSetStatus(GObj *item_gobj);
extern void itHammerAFallSetStatus(GObj *item_gobj);
extern void itHammerFHoldSetStatus(GObj *item_gobj);
extern sb32 itHammerFThrowProcUpdate(GObj *item_gobj);
extern sb32 itHammerFThrowProcMap(GObj *item_gobj);
extern sb32 itHammerSDefaultProcHit(GObj *item_gobj);
extern void itHammerFThrowSetStatus(GObj *item_gobj);
extern sb32 itHammerFDropProcMap(GObj *item_gobj);
extern void itHammerFDropSetStatus(GObj *item_gobj);
extern GObj* itHammerMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif