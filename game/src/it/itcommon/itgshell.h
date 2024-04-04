#ifndef _ITGSHELL_H_
#define _ITGSHELL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itGShellGSpinUpdateEffect(GObj *item_gobj);
extern void itGShellGSpinAddAnim(GObj *item_gobj);
extern void itGShellSDefaultClearAnim(GObj *item_gobj);
extern sb32 itGShellAFallProcUpdate(GObj *item_gobj);
extern sb32 itGShellGWaitProcMap(GObj *item_gobj);
extern sb32 itGShellAFallProcMap(GObj *item_gobj);
extern void itGShellGWaitInitItemVars(GObj *item_gobj);
extern void itGShellGWaitSetStatus(GObj *item_gobj);
extern void itGShellAFallSetStatus(GObj *item_gobj);
extern sb32 itGShellSDefaultProcDamage(GObj *item_gobj);
extern void itGShellFHoldSetStatus(GObj *item_gobj);
extern sb32 itGShellFThrowProcMap(GObj *item_gobj);
extern sb32 itGShellFThrowProcUpdate(GObj *item_gobj);
extern void itGShellFThrowSetStatus(GObj *item_gobj);
extern void itGShellFDropSetStatus(GObj *item_gobj);
extern sb32 itGShellGSpinProcUpdate(GObj *item_gobj);
extern sb32 itGShellGSpinProcMap(GObj *item_gobj);
extern sb32 itGShellSDefaultProcHit(GObj *item_gobj);
extern sb32 itGShellGASpinProcDamage(GObj *item_gobj);
extern void itGShellGSpinInitItemVars(GObj *item_gobj);
extern void itGShellGSpinSetStatus(GObj *item_gobj);
extern void itGShellASpinInitItemVars(GObj *item_gobj);
extern void itGShellASpinSetStatus(GObj *item_gobj);
extern GObj* itGShellMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itGShellSDefaultProcShield(GObj *item_gobj);

#endif
