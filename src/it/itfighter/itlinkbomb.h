#ifndef _ITLINKBOMB_H_
#define _ITLINKBOMB_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itLinkBombNExplodeWaitUpdateScale(GObj* item_gobj);
extern void itLinkBombNExplodeMakeEffectGotoSetStatus(GObj* item_gobj);
extern void func_ovl3_80185B18(GObj* item_gobj);
extern sb32 itLinkBombSDefaultProcDamage(GObj* item_gobj);
extern sb32 itLinkBombFThrowProcHit(GObj* item_gobj);
extern void itLinkBombSDefaultSetHitStatusNormal(GObj* item_gobj);
extern void itLinkBombSDefaultSetHitStatusNone(GObj* item_gobj);
extern sb32 itLinkBombAFallProcUpdate(GObj* item_gobj);
extern sb32 itLinkBombGWaitProcUpdate(GObj* item_gobj);
extern sb32 itLinkBombGWaitProcMap(GObj* item_gobj);
extern sb32 itLinkBombAFallProcMap(GObj* item_gobj);
extern void itLinkBombGWaitSetStatus(GObj* item_gobj);
extern void itLinkBombAFallSetStatus(GObj* item_gobj);
extern sb32 itLinkBombFHoldProcUpdate(GObj* item_gobj);
extern void itLinkBombFHoldSetStatus(GObj* item_gobj);
extern sb32 itLinkBombFThrowProcMap(GObj* item_gobj);
extern void itLinkBombFThrowSetStatus(GObj* item_gobj);
extern sb32 itLinkBombFDropProcUpdate(GObj* item_gobj);
extern sb32 itLinkBombFDropProcHit(GObj* item_gobj);
extern sb32 itLinkBombFDropProcDamage(GObj* item_gobj);
extern void itLinkBombFDropSetStatus(GObj* item_gobj);
extern void itLinkBombNExplodeInitItemVars(GObj* item_gobj);
extern void itLinkBombNExplodeUpdateHitEvent(GObj* item_gobj);
extern sb32 itLinkBombSDefaultProcShield(GObj* item_gobj);
extern sb32 func_ovl3_801864BC(GObj* item_gobj);
extern void itLinkBombNExplodeInitHitbox(GObj* item_gobj);
extern sb32 itLinkBombNExplodeProcUpdate(GObj* item_gobj);
extern void itLinkBombNExplodeSetStatus(GObj* item_gobj);
extern GObj* itLinkBombMakeItem(GObj* fighter_gobj, Vec3f* pos, Vec3f* vel);

#endif