#ifndef _ITTARGET_H_
#define _ITTARGET_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itTargetSDefaultProcDamage(GObj *item_gobj);
extern GObj* itTargetMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
