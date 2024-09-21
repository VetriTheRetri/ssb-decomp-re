#ifndef _GRYOSTER_H_
#define _GRYOSTER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>
#include <ef/efdef.h>

extern intptr_t lGRYosterWallpaperSprite; // 0x00026C88

extern lbGenerator* grYosterCloudVaporMakeEffect(Vec3f *pos);
extern sb32 grYosterCheckFighterCloudStand(s32 cloud_id);
extern void grYosterUpdateCloudSolid(s32 cloud_id);
extern void grYosterUpdateCloudEvaporate(s32 cloud_id);
extern void grYosterUpdateCloudAnim(s32 cloud_id);
extern void grYosterProcUpdate(GObj *ground_gobj);
extern void grYosterInitAll(void);
extern GObj* grYosterMakeGround(void);

#endif
