#ifndef _ITRSHELL_H_
#define _ITRSHELL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itRShellGSpinUpdateFollowPlayer(GObj *item_gobj, GObj *fighter_gobj);
extern void itRShellGSpinSearchFollowPlayer(GObj *item_gobj);
extern void itRShellGSpinUpdateGFX(GObj *item_gobj);
extern void itRShellGSpinAddAnim(GObj *item_gobj);
extern void itRShellSDefaultClearAnim(GObj *item_gobj);
extern sb32 itRShellAFallProcUpdate(GObj *item_gobj);
extern sb32 itRShellGWaitProcMap(GObj *item_gobj);
extern sb32 itRShellAFallProcMap(GObj *item_gobj);
extern void itRShellGWaitUpdateStatusVars(GObj *item_gobj);
extern void func_ovl3_8017A964(GObj *item_gobj);
extern void itRShellAFallSetStatus(GObj *item_gobj);
extern sb32 itRShellSDefaultProcDamage(GObj *item_gobj);
extern void itRShellFHoldSetStatus(GObj *item_gobj);
extern void itRShellFThrowSetStatus(GObj *item_gobj);
extern void itRShellFDropSetStatus(GObj *item_gobj);
extern sb32 itRShellFThrowProcMap(GObj *item_gobj);
extern void itRShellGSpinEdgeInvertVelLR(GObj *item_gobj, ub8 lr);
extern void itRShellGSpinCheckCollisionEdge(GObj *item_gobj);
extern sb32 itRShellGSpinProcUpdate(GObj *item_gobj);
extern sb32 itRShellGSpinProcMap(GObj *item_gobj);
extern sb32 itRShellSDefaultProcHit(GObj *item_gobj);
extern sb32 itRShellGSpinProcDamage(GObj *item_gobj);
extern void itRShellGSpinInitItemVars(GObj *item_gobj);
extern void itRShellGSpinSetStatus(GObj *item_gobj);
extern void itRShellASpinInitItemVars(GObj *item_gobj);
extern void itRShellASpinSetStatus(GObj *item_gobj);
extern GObj* itRShellMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itRShellSDefaultProcShield(GObj *item_gobj);
extern sb32 itRShellSDefaultProcReflector(GObj *item_gobj);

#endif
