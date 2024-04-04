#ifndef _ITTOMATO_H_
#define _ITTOMATO_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itTomatoAFallProcUpdate(GObj *item_gobj);
extern sb32 itTomatoGWaitProcMap(GObj *item_gobj);
extern sb32 itTomatoAFallProcMap(GObj *item_gobj);
extern void itTomatoGWaitSetStatus(GObj *item_gobj);
extern void itTomatoAFallSetStatus(GObj *item_gobj);
extern sb32 itTomatoFDropProcMap(GObj *item_gobj);
extern void itTomatoFDropSetStatus(GObj *item_gobj);
extern GObj* itTomatoMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
