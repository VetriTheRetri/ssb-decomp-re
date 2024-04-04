#ifndef _ITNBUMPER_H_
#define _ITNBUMPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itNBumperAFallProcUpdate(GObj *item_gobj);
extern sb32 itNBumperGWaitProcMap(GObj *item_gobj);
extern sb32 itNBumperAFallProcMap(GObj *item_gobj);
extern sb32 itNBumperFThrowProcHit(GObj *item_gobj);
extern void itNBumperGWaitSetStatus(GObj *item_gobj);
extern void itNBumperAFallSetStatus(GObj *item_gobj);
extern void itNBumperFHoldSetStatus(GObj *item_gobj);
extern sb32 itNBumperFThrowProcUpdate(GObj *item_gobj);
extern sb32 itNBumperFThrowProcMap(GObj *item_gobj);
extern sb32 itNBumperFThrowProcShield(GObj *item_gobj);
extern sb32 itNBumperFThrowProcReflector(GObj *item_gobj);
extern void itNBumperFThrowSetStatus(GObj *item_gobj);
extern void itNBumperFDropSetStatus(GObj *item_gobj);
extern void itNBumperGWaitHitSetModelYaw(GObj *item_gobj);
extern void itNBumperGWaitHitInitItemVars(GObj *item_gobj);
extern sb32 itNBumperGWaitHitProcHit(GObj *item_gobj);
extern sb32 itNBumperGWaitHitProcUpdate(GObj *item_gobj);
extern sb32 itNBumperGWaitHitProcMap(GObj *item_gobj);
extern sb32 itNBumperGWaitHitProcReflector(GObj *item_gobj);
extern void itNBumperGWaitHitSetStatus(GObj *item_gobj);
extern sb32 itNBumperAHitProcUpdate(GObj *item_gobj);
extern void itNBumperAHitSetStatus(GObj *item_gobj);
extern sb32 itNBumperGDisappearProcUpdate(GObj *item_gobj);
extern void itNBumperGDisappearSetStatus(GObj *item_gobj);
extern GObj* itNBumperMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif