#ifndef _ITPOWERBLOCK_H_
#define _ITPOWERBLOCK_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itPowerBlockSDefaultProcUpdate(GObj *item_gobj);
extern void itPowerBlockNWaitSetStatus(GObj *item_gobj);
extern sb32 itPowerBlockNDamageProcUpdate(GObj *item_gobj);
extern sb32 itPowerBlockNWaitProcDamage(GObj *item_gobj);
extern GObj* itPowerBlockMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
