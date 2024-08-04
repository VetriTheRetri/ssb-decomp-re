#ifndef _ITMEW_H_
#define _ITMEW_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itMewNFlyProcUpdate(GObj *item_gobj);
extern void itMewNFlyInitItemVars(GObj *item_gobj);
extern void itMewNFlySetStatus(GObj *item_gobj);
extern sb32 itMewCommonProcUpdate(GObj *item_gobj);
extern sb32 itMewCommonProcMap(GObj *item_gobj);
extern GObj* itMewMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
