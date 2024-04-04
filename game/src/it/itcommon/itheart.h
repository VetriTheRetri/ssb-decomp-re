#ifndef _ITHEART_H_
#define _ITHEART_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itHeartAFallProcUpdate(GObj *item_gobj);
extern sb32 itHeartGWaitProcMap(GObj *item_gobj);
extern sb32 itHeartAFallProcMap(GObj *item_gobj);
extern void itHeartGWaitSetStatus(GObj *item_gobj);
extern void itHeartAFallSetStatus(GObj *item_gobj);
extern sb32 itHeartFDropProcMap(GObj *item_gobj);
extern void itHeartFDropSetStatus(GObj *item_gobj);
extern GObj* itHeartMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
