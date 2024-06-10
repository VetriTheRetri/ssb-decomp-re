#ifndef _ITPIPPI_H_
#define _ITPIPPI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itPippiSDefaultSelectMonster(GObj *item_gobj);
extern void itPippiSDefaultProcRender(GObj *item_gobj);
extern void itPippiSDefaultMoveDLProcRender(GObj *item_gobj);
extern sb32 itPippiSDefaultProcUpdate(GObj *item_gobj);
extern sb32 itPippiSDefaultProcMap(GObj *item_gobj);
extern GObj* itPippiMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
