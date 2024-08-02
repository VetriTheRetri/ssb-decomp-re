#ifndef _MPOBJPROC_H_
#define _MPOBJPROC_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <mp/mpdef.h>

void mpProcessResetMultiWallCount();
void mpProcessSetMultiWallLineID(s32 line_id);
void mpProcessSetLastWallCollideLeft();
void mpProcessSetLastWallCollideRight();
void mpProcessSetLastWallCollideStats(f32 pos, s32 line_id, u32 flags, Vec3f* angle);
void mpProcessGetLastWallCollideStats(f32* pos, s32* line_id, u32 *flags, Vec3f* angle);
sb32 mpProcessCheckCeilEdgeCollisionLeft(mpCollData* coll_data);
void mpProcessCeilEdgeAdjustLeft(mpCollData* coll_data);
sb32 mpProcessCheckCeilEdgeCollisionRight(mpCollData* coll_data);
void mpProcessCeilEdgeAdjustRight(mpCollData* coll_data);
void mpProcessRunCeilEdgeAdjust(mpCollData* coll_data);
sb32 mpProcessCheckGroundEdgeCollisionLeft(mpCollData* coll_data);
void mpProcessGroundEdgeLeftAdjust(mpCollData* coll_data);
sb32 mpProcessCheckGroundEdgeCollisionRight(mpCollData* coll_data);
void mpProcessGroundEdgeRightAdjust(mpCollData* coll_data);
void mpProcessRunGroundEdgeAdjust(mpCollData* coll_data);
void mpProcessSetCollProjectGroundID(mpCollData* coll_data);
sb32 mpProcessUpdateMapProcMain(mpCollData* coll_data, sb32 (*proc_coll)(mpCollData*, GObj*, u32), GObj* gobj,
									u32 flags);
sb32 mpProcessCheckTestLWallCollision(mpCollData* coll_data);
void mpProcessRunLWallCollision(mpCollData* coll_data);
sb32 mpProcessCheckTestRWallCollision(mpCollData* coll_data);
void mpProcessRunRWallCollision(mpCollData* coll_data);
sb32 mpProcessCheckTestGroundCollisionNew(mpCollData* coll_data);
sb32 mpProcessCheckTestGroundCollision(mpCollData* coll_data, s32 line_id);
sb32 mpProcessCheckTestLCliffCollision(mpCollData* coll_data);
sb32 mpProcessCheckTestRCliffCollision(mpCollData* coll_data);
sb32 mpProcessCheckTestLWallCollisionAdjNew(mpCollData* coll_data);
void mpProcessRunLWallCollisionAdjNew(mpCollData* coll_data);
sb32 mpProcessCheckTestRWallCollisionAdjNew(mpCollData* coll_data);
void mpProcessRunRWallCollisionAdjNew(mpCollData* coll_data);
sb32 mpProcessCheckTestCeilCollisionAdjNew(mpCollData* coll_data);
void mpProcessRunCeilCollisionAdjNew(mpCollData* coll_data);
sb32 mpProcessCheckTestGroundCollisionAdjNew(mpCollData* coll_data, sb32 (*proc_map)(GObj*), GObj* gobj);
sb32 mpProcessRunGroundCollisionAdjNewNULL(mpCollData* coll_data);
void func_ovl2_800DD59C(mpCollData* coll_data);
void func_ovl2_800DD6A8(mpCollData* coll_data);

#endif
