#ifndef _ITKABIGON_H_
#define _ITKABIGON_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern sb32 itKabigonNFallProcUpdate(GObj *item_gobj);
extern void itKabigonNFallProcRender(GObj *item_gobj);
extern void itKabigonNFallInitItemVars(GObj *item_gobj);
extern void itKabigonNFallSetStatus(GObj *item_gobj);
extern sb32 itKabigonNJumpProcUpdate(GObj *item_gobj);
extern void itKabigonCommonProcRender(GObj *item_gobj);
extern void itKabigonNJumpInitItemVars(GObj *item_gobj);
extern void itKabigonNJumpSetStatus(GObj *item_gobj);
extern sb32 itKabigonCommonProcUpdate(GObj *item_gobj);
extern GObj* itKabigonMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
