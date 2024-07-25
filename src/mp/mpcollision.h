#ifndef _MPCOLLISION_H_
#define _MPCOLLISION_H_

#include <PR/gbi.h>
#include <ssb_types.h>
#include <sys/objdef.h>
#include <mp/mpdef.h>

f32 mpCollisionGetLineDistanceUD(f32 opx, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
f32 mpCollisionGetLineDistanceLR(f32 opy, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
sb32 mpCollisionGetUDCommon(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle, s32 ud);
sb32 mpCollisionGetUDCommonUp(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
sb32 mpCollisionGetUDCommonDown(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
sb32 mpCollisionGetLRCommon(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle, s32 lr);
sb32 mpCollisionGetLRCommonLeft(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
sb32 mpCollisionGetLRCommonRight(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
void mpCollisionGetLREdge(s32 line_id, Vec3f* object_pos, s32 lr);
void mpCollisionGetLREdgeRight(s32 line_id, Vec3f* object_pos);
void mpCollisionGetLREdgeLeft(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4448(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4468(s32 line_id, Vec3f* object_pos);
void mpCollisionGetUDEdge(s32 line_id, Vec3f* object_pos, s32 ud);
void mpCollisionGetUDEdgeUp(s32 line_id, Vec3f* object_pos);
void mpCollisionGetUDEdgeDown(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F4690(s32 line_id, Vec3f* object_pos);
void func_ovl2_800F46B0(s32 line_id, Vec3f* object_pos);
void mpCollisionGetUDAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
sb32 mpCollisionCheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y,
										f32* dfx, f32* dfy);
sb32 mpCollisionCheckGroundLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollisionCheckGroundLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);

sb32 mpCollisionCheckUDSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_y, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8);

sb32 mpCollisionCheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									  f32* dfy);
sb32 mpCollisionCheckCeilLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollisionCheckCeilLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollisionCheckRWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
void mpCollisionGetLRAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
sb32 mpCollisionCheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
sb32 mpCollisionCheckRWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollisionCheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x,
									f32 vtdist_y, f32* arg7, f32* arg8);
sb32 mpCollisionCheckLWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 mpCollisionCheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
sb32 mpCollisionCheckLWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F8FFC(Vec3f* position);
sb32 func_ovl2_800F9348(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F97BC(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800F9C30(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
sb32 func_ovl2_800FA0A4(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
s32 mpCollisionGetVertexCountLineID(s32 line_id);
void mpCollisionGetVertexPositionID(s32 line_id, s32 vertex_id, Vec3f* pos);
void mpCollisionGetSpeedLineID(s32 line_id, Vec3f* speed);
s32 mpCollisionGetLineTypeID(s32 line_id);
s32 mpCollisionGetEdgeUnderRLineID(s32 line_id);
s32 mpCollisionGetEdgeUnderLLineID(s32 line_id);
s32 mpCollisionGetEdgeUpperRLineID(s32 line_id);
s32 mpCollisionGetEdgeUpperLLineID(s32 line_id);
s32 mpCollisionGetEdgeRightULineID(s32 line_id);
s32 mpCollisionGetEdgeRightDLineID(s32 line_id);
s32 mpCollisionGetEdgeLeftULineID(s32 line_id);
s32 mpCollisionGetEdgeLeftDLineID(s32 line_id);
void mpCollisionGetPlayerMapObjPosition(s32 player, Vec3f* pos);
void mpCollisionAllocVertexInfo();
void func_ovl2_800FB04C();
void mpCollisionInitLineTypesAll();
void func_ovl2_800FB31C();
void func_ovl2_800FB554();
void mpCollisionAllocYakumono(DObjDesc* gr_room);
void func_ovl2_800FB808();
void func_ovl2_800FBA84();
void func_ovl2_800FBAD0(GObj* ground_gobj);
void mpCollisionAdvanceUpdateFrame(GObj* ground_gobj);
void func_ovl2_800FBD14();
s32 mpCollisionAllocLinesGetCountTotal();
void mpCollisionInitLineIDsAll();
void mpCollisionInitGroundData();
void mpCollisionSetPlayMusicID();
void mpCollisionSetMusicID();
void mpCollisionClearYakumonoAll();
void mpCollisionSetYakumonoPosID(s32 line_id, Vec3f* yakumono_pos);
void mpCollisionSetYakumonoOnID(s32 line_id);
void mpCollisionSetYakumonoOffID(s32 line_id);
sb32 mpCollisionCheckExistLineID(s32 line_id);
s32 mpCollisionSetDObjNoID(s32 line_id);
s32 mpCollisionGetMapObjCountKind(s32 mapobj_kind);
void mpCollisionGetMapObjIDsKind(s32 mapobj_kind, s32* mapobjs);
void mpCollisionGetMapObjPositionID(s32 mapobj_kind, Vec3f* pos);
s32 mpCollisionGetLineCountType(s32 line_type);
void mpCollisionGetLineIDsTypeCount(s32 type, s32 count, s32* line_ids);
u8 mpCollisionSetLightColorGetAlpha(Gfx** display_list);
sb32 mpCollisionCheckExistPlatformLineID(s32 line_id);
u16 mpCollisionGetVertexFlagsLineID(s32 line_id);

#endif /* _MPCOLLISION_H_ */
