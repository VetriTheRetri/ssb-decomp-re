#ifndef _MPCOLLISION_H_
#define _MPCOLLISION_H_

#include <PR/gbi.h>
#include <ssb_types.h>
#include <sys/objdef.h>
#include "mpdef.h"

f32 mpCollision_GetLineDistanceUD(f32 opx, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
f32 mpCollision_GetLineDistanceLR(f32 opy, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
sb32 mpCollision_GetUDCommon(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle, s32 ud);
sb32 mpCollision_GetUDCommonUp(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
sb32 mpCollision_GetUDCommonDown(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
sb32 mpCollision_GetLRCommon(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle, s32 lr);
sb32 mpCollision_GetLRCommonLeft(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
sb32 mpCollision_GetLRCommonRight(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
void mpCollision_GetLREdge(s32 line_id, Vec3f* object_pos, s32 lr);
void mpCollision_GetLREdgeRight(s32 line_id, Vec3f* object_pos);
void mpCollision_GetLREdgeLeft(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4448(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4468(s32 line_id, Vec3f* object_pos);
void mpCollision_GetUDEdge(s32 line_id, Vec3f* object_pos, s32 ud);
void mpCollision_GetUDEdgeUp(s32 line_id, Vec3f* object_pos);
void mpCollision_GetUDEdgeDown(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4690(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F46B0(s32 line_id, Vec3f* object_pos);
void mpCollision_GetUDAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
sb32 mpCollision_CheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y,
										f32* dfx, f32* dfy);
sb32 mpCollision_CheckGroundLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckGroundLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									  f32* dfy);
sb32 mpCollision_CheckCeilLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckCeilLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckRWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
void mpCollision_GetLRAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
sb32 mpCollision_CheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
sb32 mpCollision_CheckRWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x,
									f32 vtdist_y, f32* arg7, f32* arg8);
sb32 mpCollision_CheckLWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollision_CheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
sb32 mpCollision_CheckLWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F8FFC(Vec3f* position);
sb32 func_ovl2_800F9348(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F97BC(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F9C30(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800FA0A4(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
s32 mpCollision_GetVertexCountLineID(s32 line_id);
void mpCollision_GetVertexPositionID(s32 line_id, s32 vertex_id, Vec3f* pos);
void mpCollision_GetSpeedLineID(s32 line_id, Vec3f* speed);
s32 mpCollision_GetLineTypeID(s32 line_id);
s32 mpCollision_GetEdgeUnderRLineID(s32 line_id);
s32 mpCollision_GetEdgeUnderLLineID(s32 line_id);
s32 mpCollision_GetEdgeUpperRLineID(s32 line_id);
s32 mpCollision_GetEdgeUpperLLineID(s32 line_id);
s32 mpCollision_GetEdgeRightULineID(s32 line_id);
s32 mpCollision_GetEdgeRightDLineID(s32 line_id);
s32 mpCollision_GetEdgeLeftULineID(s32 line_id);
s32 mpCollision_GetEdgeLeftDLineID(s32 line_id);
void mpCollision_GetPlayerMPointPosition(s32 player, Vec3f* pos);
void mpCollision_AllocVertexInfo();
void func_ovl2_800FB04C();
void mpCollision_InitLineTypesAll();
void func_ovl2_800FB31C();
void func_ovl2_800FB554();
void mpCollision_AllocMapRooms(DObjDesc* gr_room);
void func_ovl2_800FB808();
void func_ovl2_800FBA84();
void jtgt_ovl2_800FBAD0(GObj* ground_gobj);
void mpCollision_AdvanceUpdateFrame(GObj* ground_gobj);
void func_ovl2_800FBD14();
s32 mpCollision_AllocLinesGetCountTotal();
void mpCollision_InitLineIDsAll();
void mpCollision_InitMapCollisionData();
void mpCollision_SetPlayMusicID();
void mpCollision_SetMusicID();
void mpCollision_ClearYakumonoAll();
void mpCollision_SetYakumonoPosID(s32 line_id, Vec3f* yakumono_pos);
void mpCollision_SetYakumonoOnID(s32 line_id);
void mpCollision_SetYakumonoOffID(s32 line_id);
sb32 mpCollision_CheckExistLineID(s32 line_id);
s32 mpCollision_SetDObjNoID(s32 line_id);
s32 mpCollision_GetMPointCountKind(s32 mpoint_kind);
void mpCollision_GetMPointIDsKind(s32 mpoint_kind, s32* mpoints);
void mpCollision_GetMPointPositionID(s32 mpoint_kind, Vec3f* pos);
s32 mpCollision_GetLineCountType(s32 line_type);
void mpCollision_GetLineIDsTypeCount(s32 type, s32 count, s32* line_ids);
u8 mpCollision_SetLightColorGetAlpha(Gfx** display_list);
sb32 mpCollision_CheckExistPlatformLineID(s32 line_id);
u16 mpCollision_GetVertexFlagsLineID(s32 line_id);

#endif /* _MPCOLLISION_H_ */