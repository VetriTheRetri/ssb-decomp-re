#ifndef _ITMLUCKY_H_
#define _ITMLUCKY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itMLuckyNSpawnInitItemVars(GObj *item_gobj);
extern sb32 itMLuckyFallProcUpdate(GObj *item_gobj);
extern sb32 itMLuckyFallProcMap(GObj *item_gobj);
extern void itMLuckyFallSetStatus(GObj *item_gobj);
extern sb32 itMLuckyNAppearProcUpdate(GObj *item_gobj);
extern sb32 itMLuckyNAppearProcMap(GObj *item_gobj);
extern void itMLuckyNAppearSetStatus(GObj *item_gobj);
extern sb32 itMLuckyNSpawnProcUpdate(GObj *lucky_gobj);
extern sb32 itMLuckyNSpawnProcMap(GObj *item_gobj);
extern sb32 itMLuckyNSpawnProcDamage(GObj *item_gobj);
extern void itMLuckyNSpawnSetStatus(GObj *item_gobj);
extern sb32 itMLuckyNDisappearProcUpdate(GObj *item_gobj);
extern void itMLuckyNDisappearSetStatus(GObj *item_gobj);
extern sb32 itMLuckyCommonProcUpdate(GObj *item_gobj);
extern sb32 itMLuckyCommonProcMap(GObj *item_gobj);
extern GObj* itMLuckyMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
