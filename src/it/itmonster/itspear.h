#ifndef _ITSPEAR_H_
#define _ITSPEAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itSpearNFlyCallSwarmMember(GObj *item_gobj);
extern sb32 itSpearNAppearProcUpdate(GObj *item_gobj);
extern void itSpearNAppearInitItemVars(GObj *item_gobj);
extern void itSpearNAppearSetStatus(GObj *item_gobj);
extern sb32 itSpearNFlyProcUpdate(GObj *item_gobj);
extern void itSpearNFlyInitItemVars(GObj *item_gobj);
extern void itSpearNFlySetStatus(GObj *item_gobj);
extern sb32 itSpearCommonProcUpdate(GObj *item_gobj);
extern sb32 itSpearCommonProcMap(GObj *item_gobj);
extern GObj* itSpearMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);
extern sb32 itSpearWeaponSwarmProcUpdate(GObj *weapon_gobj);
extern void itPippiWeaponSwarmRenderSwarm(GObj *item_gobj);
extern void itPippiWeaponSwarmProcRender(GObj *item_gobj);
extern GObj* itSpearWeaponSwarmMakeWeapon(GObj *item_gobj, Vec3f *pos, s32 it_kind);
extern void itSpearNFlyMakeSwarm(GObj *item_gobj, Vec3f *pos, s32 it_kind);

#endif
