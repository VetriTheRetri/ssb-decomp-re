#ifndef _ITPAKKUN_H_
#define _ITPAKKUN_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itPakkunDWaitSetStatus(GObj *item_gobj);
extern void itPakkunDAppearSetStatus(GObj *item_gobj);
extern void itPakkunNDamageSetStatus(GObj *item_gobj);
extern void itPakkunSDefaultSetWaitFighter(GObj *item_gobj);
extern sb32 itPakkunSDefaultCheckNoFighterNear(GObj *item_gobj);
extern sb32 itPakkunDWaitProcUpdate(GObj *item_gobj);
extern void itPakkunDWaitInitItemVars(GObj *item_gobj);
extern void itPakkunDAppearUpdateHurtbox(GObj *item_gobj);
extern sb32 itPakkunDAppearProcUpdate(GObj *item_gobj);
extern sb32 itPakkunDAppearProcDamage(GObj *item_gobj);
extern sb32 itPakkunNDamageProcUpdate(GObj *item_gobj);
extern sb32 itPakkunNDamageProcDead(GObj *item_gobj);
extern GObj* itPakkunMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
