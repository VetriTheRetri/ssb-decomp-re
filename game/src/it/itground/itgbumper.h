#ifndef _ITGBUMPER_H_
#define _ITGBUMPER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itGBumperSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itGBumperSDefaultProcHit(GObj *item_gobj);
extern GObj* itGBumperMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
