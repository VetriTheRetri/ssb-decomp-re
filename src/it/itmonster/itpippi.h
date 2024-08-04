#ifndef _ITPIPPI_H_
#define _ITPIPPI_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itPippiCommonSelectMonster(GObj *item_gobj);
extern void itPippiCommonProcRender(GObj *item_gobj);
extern void itPippiCommonMoveDLProcRender(GObj *item_gobj);
extern sb32 itPippiCommonProcUpdate(GObj *item_gobj);
extern sb32 itPippiCommonProcMap(GObj *item_gobj);
extern GObj* itPippiMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
