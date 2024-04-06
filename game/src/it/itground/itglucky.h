#ifndef _ITGLUCKY_H_
#define _ITGLUCKY_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <it/itdef.h>

extern void itGLuckyNDamageSetStatus(GObj *item_gobj);
extern void itGLuckySDefaultUpdateEggSpawn(GObj *lucky_gobj);
extern sb32 itGLuckySDefaultProcUpdate(GObj *item_gobj);
extern sb32 itGLuckySDefaultProcHit(GObj *item_gobj);
extern sb32 itGLuckyNDamageProcUpdate(GObj *item_gobj);
extern sb32 itGLuckyNDamageProcDead(GObj *item_gobj);
extern sb32 itGLuckySDefaultProcDamage(GObj *item_gobj);
extern GObj* itGLuckyMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags);

#endif
