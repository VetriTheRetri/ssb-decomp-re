#ifndef _MPCOMMON_H_
#define _MPCOMMON_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <mp/mpdef.h>

extern sb32 mpCommonCheckSetFighterCliffEdge(GObj* fighter_gobj, s32 ground_line_id);
extern sb32 mpCommonCheckSetFighterEdge(GObj* fighter_gobj, s32 ground_line_id);
extern sb32 mpCommonRunFighterAllCollisions(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
extern sb32 mpCommonCheckFighterOnGround(GObj* fighter_gobj);
extern sb32 mpCommonProcFighterOnGround(GObj* fighter_gobj, void (*proc_map)(GObj*));
extern sb32 mpCommonCheckFighterOnCliffEdge(GObj* fighter_gobj);
extern sb32 mpCommonCheckFighterOnEdge(GObj* fighter_gobj);
extern sb32 mpCommonProcFighterOnEdge(GObj* fighter_gobj, void (*proc_map)(GObj*));
extern sb32 mpCommonSetFighterFallOnGroundBreak(GObj* fighter_gobj);
extern void mpCommonProcFighterOnCliffEdge(GObj* fighter_gobj);
extern void mpCommonSetFighterFallOnEdgeBreak(GObj* fighter_gobj);
extern sb32 func_ovl2_800DDF74(GObj* fighter_gobj, ftStruct* fp, ftAttributes* attributes, DObj* target_joint, Vec3f* vec);
extern void mpCommonUpdateFighterSlopeContour(GObj* fighter_gobj);
extern void mpCommonSetFighterProjectGround(GObj* fighter_gobj);
extern void mpCommonUpdateFighterProjectGround(GObj* fighter_gobj);
extern void mpCommonSetFighterLandingParams(GObj* fighter_gobj);
extern sb32 mpCommonRunFighterSpecialCollisions(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
extern sb32 mpCommonCheckFighterLanding(GObj* fighter_gobj);
extern sb32 mpCommonProcFighterLanding(GObj* fighter_gobj, void (*proc_map)(GObj*));
extern sb32 mpCommonCheckFighterProject(GObj* fighter_gobj);
extern sb32 mpCommonCheckFighterPass(GObj* fighter_gobj, sb32 (*proc_map)(GObj*));
extern sb32 mpCommonCheckFighterPassCliff(GObj* fighter_gobj, sb32 (*proc_map)(GObj*));
extern sb32 mpCommonCheckFighterCliff(GObj* fighter_gobj);
extern sb32 mpCommonProcFighterCliff(GObj* fighter_gobj, void (*proc_map)(GObj*));
extern sb32 mpCommonCheckFighterCeilHeavyCliff(GObj* fighter_gobj);
extern sb32 mpCommonCheckFighterCeilHeavy(GObj* fighter_gobj);
extern void mpCommonSetFighterWaitOrLanding(GObj* fighter_gobj);
extern void mpCommonProcFighterWaitOrLanding(GObj* fighter_gobj);
extern void mpCommonProcFighterProject(GObj* fighter_gobj);
extern void mpCommonProcFighterCliffWaitOrLanding(GObj* fighter_gobj);
extern void mpCommonProcFighterCliffGroundCeil(GObj* fighter_gobj);
extern sb32 mpCommonProcFighterDamage(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
extern sb32 mpCommonCheckFighterDamageCollision(GObj* fighter_gobj);
extern void mpCommonUpdateFighterKinetics(GObj* fighter_gobj);
extern void mpCommonSetFighterWaitOrFall(GObj* fighter_gobj);
extern void mpCommonSetFighterGround(ftStruct* fp);
extern void mpCommonSetFighterAir(ftStruct* fp);
extern void mpCommonRunDefaultCollision(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
extern void mpCommonCopyCollDataStats(mpCollData* this_coll_data, Vec3f* pos, mpCollData* other_coll_data);
extern void mpCommonResetCollDataStats(mpCollData* coll_data);
extern void mpCommonRunFighterCollisionDefault(GObj* fighter_gobj, Vec3f* pos, mpCollData* coll_data);
extern void mpCommonRunItemCollisionDefault(GObj* item_gobj, Vec3f* pos, mpCollData* coll_data);
extern void mpCommonRunWeaponCollisionDefault(GObj* weapon_gobj, Vec3f* pos, mpCollData* coll_data);

#endif
