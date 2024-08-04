#ifndef _ITNBUMPER_H_
#define _ITNBUMPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itNBumperFallProcUpdate(GObj *item_gobj);
extern sb32 itNBumperWaitProcMap(GObj *item_gobj);
extern sb32 itNBumperFallProcMap(GObj *item_gobj);
extern sb32 itNBumperThrownProcHit(GObj *item_gobj);
extern void itNBumperWaitSetStatus(GObj *item_gobj);
extern void itNBumperFallSetStatus(GObj *item_gobj);
extern void itNBumperHoldSetStatus(GObj *item_gobj);
extern sb32 itNBumperThrownProcUpdate(GObj *item_gobj);
extern sb32 itNBumperThrownProcMap(GObj *item_gobj);
extern sb32 itNBumperThrownProcShield(GObj *item_gobj);
extern sb32 itNBumperThrownProcReflector(GObj *item_gobj);
extern void itNBumperThrownSetStatus(GObj *item_gobj);
extern void itNBumperDroppedSetStatus(GObj *item_gobj);
extern void itNBumperWaitHitSetModelYaw(GObj *item_gobj);
extern void itNBumperWaitHitInitItemVars(GObj *item_gobj);
extern sb32 itNBumperWaitHitProcHit(GObj *item_gobj);
extern sb32 itNBumperWaitHitProcUpdate(GObj *item_gobj);
extern sb32 itNBumperWaitHitProcMap(GObj *item_gobj);
extern sb32 itNBumperWaitHitProcReflector(GObj *item_gobj);
extern void itNBumperWaitHitSetStatus(GObj *item_gobj);
extern sb32 itNBumperAHitProcUpdate(GObj *item_gobj);
extern void itNBumperAHitSetStatus(GObj *item_gobj);
extern sb32 itNBumperGDisappearProcUpdate(GObj *item_gobj);
extern void itNBumperGDisappearSetStatus(GObj *item_gobj);
extern GObj* itNBumperMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
