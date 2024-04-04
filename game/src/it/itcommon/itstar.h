#ifndef _ITSTAR_H_
#define _ITSTAR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itStarSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itStarSDefaultProcMap(GObj *item_gobj);
extern sb32 itStarSDefaultProcHit(GObj *item_gobj);
extern GObj* itStarMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
