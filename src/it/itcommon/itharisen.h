#ifndef _ITHARISEN_H_
#define _ITHARISEN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itHarisenSDefaultSetScale(GObj *item_gobj, f32 scale);
extern sb32 itHarisenAFallProcUpdate(GObj *item_gobj);
extern sb32 itHarisenGWaitProcMap(GObj *item_gobj);
extern sb32 itHarisenAFallProcMap(GObj *item_gobj);
extern void itHarisenGWaitSetStatus(GObj *item_gobj);
extern void itHarisenAFallSetStatus(GObj *item_gobj);
extern void itHarisenFHoldSetStatus(GObj *item_gobj);
extern sb32 itHarisenFThrowProcUpdate(GObj *item_gobj);
extern sb32 itHarisenFThrowProcMap(GObj *item_gobj);
extern sb32 itHarisenSDefaultProcHit(GObj *item_gobj);
extern void itHarisenFThrowSetStatus(GObj *item_gobj);
extern sb32 itHarisenFDropProcMap(GObj *item_gobj);
extern void itHarisenFDropSetStatus(GObj *item_gobj);
extern void func_ovl3_80175408(GObj *item_gobj, s32 index);
extern GObj* itHarisenMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
