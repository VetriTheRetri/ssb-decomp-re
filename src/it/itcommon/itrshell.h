#ifndef _ITRSHELL_H_
#define _ITRSHELL_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itRShellGSpinUpdateFollowPlayer(GObj *item_gobj, GObj *fighter_gobj);
extern void itRShellGSpinSearchFollowPlayer(GObj *item_gobj);
extern void itRShellGSpinUpdateGFX(GObj *item_gobj);
extern void itRShellGSpinAddAnim(GObj *item_gobj);
extern void itRShellCommonClearAnim(GObj *item_gobj);
extern sb32 itRShellFallProcUpdate(GObj *item_gobj);
extern sb32 itRShellWaitProcMap(GObj *item_gobj);
extern sb32 itRShellFallProcMap(GObj *item_gobj);
extern void itRShellWaitUpdateStatusVars(GObj *item_gobj);
extern void func_ovl3_8017A964(GObj *item_gobj);
extern void itRShellFallSetStatus(GObj *item_gobj);
extern sb32 itRShellCommonProcDamage(GObj *item_gobj);
extern void itRShellHoldSetStatus(GObj *item_gobj);
extern void itRShellThrownSetStatus(GObj *item_gobj);
extern void itRShellDroppedSetStatus(GObj *item_gobj);
extern sb32 itRShellThrownProcMap(GObj *item_gobj);
extern void itRShellGSpinEdgeInvertVelLR(GObj *item_gobj, ub8 lr);
extern void itRShellGSpinCheckCollisionEdge(GObj *item_gobj);
extern sb32 itRShellGSpinProcUpdate(GObj *item_gobj);
extern sb32 itRShellGSpinProcMap(GObj *item_gobj);
extern sb32 itRShellCommonProcHit(GObj *item_gobj);
extern sb32 itRShellGSpinProcDamage(GObj *item_gobj);
extern void itRShellGSpinInitItemVars(GObj *item_gobj);
extern void itRShellGSpinSetStatus(GObj *item_gobj);
extern void itRShellASpinInitItemVars(GObj *item_gobj);
extern void itRShellASpinSetStatus(GObj *item_gobj);
extern GObj* itRShellMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itRShellCommonProcShield(GObj *item_gobj);
extern sb32 itRShellCommonProcReflector(GObj *item_gobj);

#endif
