#ifndef _MPOBJPROC_H_
#define _MPOBJPROC_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include "mpdef.h"

void mpObjectProc_ResetMultiWallCount();
void mpObjectProc_SetMultiWallLineID(s32 line_id);
void mpObjectProc_SetLastWallCollideLeft();
void mpObjectProc_SetLastWallCollideRight();
void mpObjectProc_SetLastWallCollideStats(f32 pos, s32 line_id, u32 flags, Vec3f* angle);
void mpObjectProc_GetLastWallCollideStats(f32* pos, s32* line_id, u32* flags, Vec3f* angle);
sb32 mpObjectProc_CheckCeilEdgeCollisionLeft(mpCollData* coll_data);
void mpObjectProc_CeilEdgeAdjustLeft(mpCollData* coll_data);
sb32 mpObjectProc_CheckCeilEdgeCollisionRight(mpCollData* coll_data);
void mpObjectProc_CeilEdgeAdjustRight(mpCollData* coll_data);
void mpObjectProc_RunCeilEdgeAdjust(mpCollData* coll_data);
sb32 mpObjectProc_CheckGroundEdgeCollisionLeft(mpCollData* coll_data);
void mpObjectProc_GroundEdgeLeftAdjust(mpCollData* coll_data);
sb32 mpObjectProc_CheckGroundEdgeCollisionRight(mpCollData* coll_data);
void mpObjectProc_GroundEdgeRightAdjust(mpCollData* coll_data);
void mpObjectProc_RunGroundEdgeAdjust(mpCollData* coll_data);
void mpObjectProc_SetCollProjectGroundID(mpCollData* coll_data);
sb32 mpObjectProc_UpdateMapProcMain(mpCollData* coll_data, sb32 (*proc_coll)(mpCollData*, GObj*, u32), GObj* gobj,
									u32 flags);
sb32 mpObjectProc_CheckTestLWallCollision(mpCollData* coll_data);
void mpObjectProc_RunLWallCollision(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestRWallCollision(mpCollData* coll_data);
void mpObjectProc_RunRWallCollision(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestGroundCollisionNew(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestGroundCollision(mpCollData* coll_data, s32 line_id);
sb32 mpObjectProc_CheckTestLCliffCollision(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestRCliffCollision(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestLWallCollisionAdjNew(mpCollData* coll_data);
void mpObjectProc_RunLWallCollisionAdjNew(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestRWallCollisionAdjNew(mpCollData* coll_data);
void mpObjectProc_RunRWallCollisionAdjNew(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestCeilCollisionAdjNew(mpCollData* coll_data);
void mpObjectProc_RunCeilCollisionAdjNew(mpCollData* coll_data);
sb32 mpObjectProc_CheckTestGroundCollisionAdjNew(mpCollData* coll_data, sb32 (*proc_map)(GObj*), GObj* gobj);
sb32 mpObjectProc_RunGroundCollisionAdjNewNULL(mpCollData* coll_data);
void func_ovl2_800DD59C(mpCollData* coll_data);
void func_ovl2_800DD6A8(mpCollData* coll_data);
sb32 mpObjectProc_CheckSetFighterCliffEdge(GObj* fighter_gobj, s32 ground_line_id);
sb32 mpObjectProc_CheckSetFighterEdge(GObj* fighter_gobj, s32 ground_line_id);
sb32 mpObjectProc_RunFighterAllCollisions(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
sb32 ftMap_CheckGroundStanding(GObj* fighter_gobj);
sb32 ftMap_ProcFighterAirProcMap(GObj* fighter_gobj, void (*proc_map)(GObj*));
void ftMap_CheckGroundStopCliffEdge(GObj* fighter_gobj);
sb32 ftMap_CheckGroundStopEdge(GObj* fighter_gobj);
sb32 ftMap_CheckGroundBreakEdgeProcMap(GObj* fighter_gobj, void (*proc_map)(GObj*));
void ftMap_CheckGroundBreakSetFall(GObj* fighter_gobj);
void ftMap_CheckGroundEdgeOttottoOrFall(GObj* fighter_gobj);
void ftMap_CheckGroundStopEdgeFall(GObj* fighter_gobj);
sb32 func_ovl2_800DDF74(GObj* fighter_gobj, ftStruct* fp, ftAttributes* attributes, DObj* target_joint, Vec3f* vec);
void ftMap_UpdateSlopeContour(GObj* fighter_gobj);
void mpObjectProc_SetFighterProjectGroundID(GObj* fighter_gobj);
void ftMap_UpdateProjectGroundID(GObj* fighter_gobj);
void ftMap_SetFighterLandingVars(GObj* fighter_gobj);
sb32 mpObjectProc_RunFighterSpecialCollisions(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
sb32 ftMap_CheckAirLanding(GObj* fighter_gobj);
sb32 mpObjectProc_ProcFighterGroundProcMap(GObj* fighter_gobj, void (*proc_map)(GObj*));
sb32 mpObjectProc_ProcFighterEnvCatch(GObj* fighter_gobj);
sb32 mpObjectProc_ProcFighterPass(GObj* fighter_gobj, sb32 (*proc_map)(GObj*));
sb32 mpObjectProc_ProcFighterPassCliff(GObj* fighter_gobj, sb32 (*proc_map)(GObj*));
sb32 mpObjectProc_ProcFighterCliff(GObj* fighter_gobj);
sb32 mpObjectProc_ProcFighterCliffProcMap(GObj* fighter_gobj, void (*proc_map)(GObj*));
sb32 mpObjectProc_ProcFighterCeilHeavyCliff(GObj* fighter_gobj);
sb32 mpObjectProc_ProcFighterCeilHeavy(GObj* fighter_gobj);
void ftMap_SetStatusWaitOrLanding(GObj* fighter_gobj);
void ftMap_CheckGroundSetWaitOrLanding(GObj* fighter_gobj);
void ftMap_CheckGroundEnvCatch(GObj* fighter_gobj);
void ftMap_CheckGroundCliffSetWaitOrLanding(GObj* fighter_gobj);
void ftMap_CheckCliffGroundCeilStatus(GObj* fighter_gobj);
sb32 mpObjectProc_ProcFighterDamage(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
sb32 ftMap_CheckAllFighterDamage(GObj* fighter_gobj);
void ftMap_UpdateFighterGroundOrAir(GObj* fighter_gobj);
void ftMap_SetStatusWaitOrFall(GObj* fighter_gobj);
void ftMap_SetGround(ftStruct* fp);
void ftMap_SetAir(ftStruct* fp);
void mpObjectProc_ProcObjectCollisionDefault(mpCollData* coll_data, GObj* fighter_gobj, u32 flags);
void mpObjectProc_CopyCollDataStats(mpCollData* this_coll_data, Vec3f* pos, mpCollData* other_coll_data);
void mpObjectProc_ResetCollDataStats(mpCollData* coll_data);
void ftMap_RunCollisionDefault(GObj* fighter_gobj, Vec3f* pos, mpCollData* coll_data);
void itMapRunCollisionDefault(GObj* item_gobj, Vec3f* pos, mpCollData* coll_data);
void wpMap_RunCollisionDefault(GObj* weapon_gobj, Vec3f* pos, mpCollData* coll_data);

#endif
