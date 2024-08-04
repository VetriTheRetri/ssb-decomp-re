#ifndef _ITKABIGON_H_
#define _ITKABIGON_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itKabigonFallProcUpdate(GObj *item_gobj);
extern void itKabigonFallProcRender(GObj *item_gobj);
extern void itKabigonFallInitItemVars(GObj *item_gobj);
extern void itKabigonFallSetStatus(GObj *item_gobj);
extern sb32 itKabigonJumpProcUpdate(GObj *item_gobj);
extern void itKabigonCommonProcRender(GObj *item_gobj);
extern void itKabigonJumpInitItemVars(GObj *item_gobj);
extern void itKabigonJumpSetStatus(GObj *item_gobj);
extern sb32 itKabigonCommonProcUpdate(GObj *item_gobj);
extern GObj* itKabigonMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
