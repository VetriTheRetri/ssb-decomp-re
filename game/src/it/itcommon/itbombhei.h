#ifndef _ITBOMBHEI_H_
#define _ITBOMBHEI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itBombHeiSDefaultSetExplode(GObj *item_gobj, u8 unused);
extern void itBombHeiSDefaultSetWalkDirection(GObj *item_gobj, ub8 lr);
extern void itBombHeiSDefaultCheckMakeDustEffect(GObj *item_gobj, u8 override);
extern void itBombHeiSDefaultSetHitStatusNormal(GObj *item_gobj);
extern void itBombHeiSDefaultSetHitStatusNone(GObj *item_gobj);
extern sb32 itBombHeiAFallProcUpdate(GObj *item_gobj);
extern s32 itBombHeiGWalkGetMostPlayersLR(GObj *item_gobj);
extern sb32 itBombHeiGWaitProcUpdate(GObj *item_gobj);
extern sb32 itBombHeiGWaitProcMap(GObj *item_gobj);
extern sb32 itBombHeiSDefaultProcHit(GObj *item_gobj);
extern sb32 itBombHeiAFallProcMap(GObj *item_gobj);
extern void itBombHeiGWaitSetStatus(GObj *item_gobj);
extern void itBombHeiAFallSetStatus(GObj *item_gobj);
extern void itBombHeiFHoldSetStatus(GObj *item_gobj);
extern sb32 itBombHeiFThrowProcUpdate(GObj *item_gobj);
extern sb32 itBombHeiFThrowProcMap(GObj *item_gobj);
extern void itBombHeiFThrowSetStatus(GObj *item_gobj);
extern sb32 itBombHeiFDropProcMap(GObj *item_gobj);
extern void itBombHeiFDropSetStatus(GObj *item_gobj);
extern void itBombHeiGWalkUpdateEffect(GObj *item_gobj);
extern sb32 itBombHeiGWalkProcUpdate(GObj *item_gobj);
extern sb32 itBombHeiGWalkProcMap(GObj *item_gobj);
extern void itBombHeiGWalkInitItemVars(GObj *item_gobj);
extern void itBombHeiGWalkSetStatus(GObj *item_gobj);
extern void itBombHeiSDefaultClearVelSetExplode(GObj *item_gobj, u8 unused);
extern void itBombHeiSDefaultUpdateHitEvent(GObj *item_gobj);
extern sb32 itBombHeiMExplodeProcUpdate(GObj *item_gobj);
extern sb32 itBombHeiMExplodeProcHit(GObj *item_gobj);
extern void itBombHeiMExplodeSetStatus(GObj *item_gobj);
extern void itBombHeiNExplodeInitItemVars(GObj *item_gobj);
extern sb32 itBombHeiNExplodeProcUpdate(GObj *item_gobj);
extern void itBombHeiNExplodeSetStatus(GObj *item_gobj);
extern sb32 itBombHeiGExplodeWaitProcUpdate(GObj *item_gobj);
extern sb32 itBombHeiGExplodeWaitProcMap(GObj *item_gobj);
extern void itBombHeiGExplodeWaitInitItemVars(GObj *item_gobj);
extern void itBombHeiGExplodeWaitSetStatus(GObj *item_gobj);
extern GObj *itBombHeiMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif