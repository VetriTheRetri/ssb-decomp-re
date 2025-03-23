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
sb32 mpProcessCheckCeilEdgeCollisionLeft(MPCollData* coll_data);
void mpProcessCeilEdgeAdjustLeft(MPCollData* coll_data);
sb32 mpProcessCheckCeilEdgeCollisionRight(MPCollData* coll_data);
void mpProcessCeilEdgeAdjustRight(MPCollData* coll_data);
void mpProcessRunCeilEdgeAdjust(MPCollData* coll_data);
sb32 mpProcessCheckFloorEdgeCollisionLeft(MPCollData* coll_data);
void mpProcessGroundEdgeLeftAdjust(MPCollData* coll_data);
sb32 mpProcessCheckFloorEdgeCollisionRight(MPCollData* coll_data);
void mpProcessGroundEdgeRightAdjust(MPCollData* coll_data);
void mpProcessRunGroundEdgeAdjust(MPCollData* coll_data);
void mpProcessSetCollProjectGroundID(MPCollData* coll_data);
sb32 mpProcessUpdateMapProcMain(MPCollData* coll_data, sb32 (*proc_coll)(MPCollData*, GObj*, u32), GObj* gobj,
									u32 flags);
sb32 mpProcessCheckTestLWallCollision(MPCollData* coll_data);
void mpProcessRunLWallCollision(MPCollData* coll_data);
sb32 mpProcessCheckTestRWallCollision(MPCollData* coll_data);
void mpProcessRunRWallCollision(MPCollData* coll_data);
sb32 mpProcessCheckTestGroundCollisionNew(MPCollData* coll_data);
sb32 mpProcessCheckTestGroundCollision(MPCollData* coll_data, s32 line_id);
sb32 mpProcessCheckTestLCliffCollision(MPCollData* coll_data);
sb32 mpProcessCheckTestRCliffCollision(MPCollData* coll_data);
sb32 mpProcessCheckTestLWallCollisionAdjNew(MPCollData* coll_data);
void mpProcessRunLWallCollisionAdjNew(MPCollData* coll_data);
sb32 mpProcessCheckTestRWallCollisionAdjNew(MPCollData* coll_data);
void mpProcessRunRWallCollisionAdjNew(MPCollData* coll_data);
sb32 mpProcessCheckTestCeilCollisionAdjNew(MPCollData* coll_data);
void mpProcessRunCeilCollisionAdjNew(MPCollData* coll_data);
sb32 mpProcessCheckTestGroundCollisionAdjNew(MPCollData* coll_data, sb32 (*proc_map)(GObj*), GObj* gobj);
sb32 mpProcessRunGroundCollisionAdjNewNULL(MPCollData* coll_data);
void func_ovl2_800DD59C(MPCollData* coll_data);
void func_ovl2_800DD6A8(MPCollData* coll_data);

#endif
