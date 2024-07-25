#ifndef _MPCOLLISION_H_
#define _MPCOLLISION_H_

#include <PR/gbi.h>
#include <ssb_types.h>
#include <sys/objdef.h>
#include <mp/mpdef.h>

extern f32 mpCollisionGetLineDistanceUD(f32 opx, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
extern f32 mpCollisionGetLineDistanceLR(f32 opy, s32 vx1, s32 vy1, s32 vx2, s32 vy2);
extern sb32 mpCollisionGetUDCommon(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle, s32 ud);
extern sb32 mpCollisionGetUDCommonUp(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
extern sb32 mpCollisionGetUDCommonDown(s32 line_id, Vec3f* object_pos, f32* dist, u32* flags, Vec3f* angle);
extern sb32 mpCollisionGetLRCommon(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle, s32 lr);
extern sb32 mpCollisionGetLRCommonLeft(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
extern sb32 mpCollisionGetLRCommonRight(s32 line_id, Vec3f* object_pos, f32* arg2, u32* flags, Vec3f* angle);
extern void mpCollisionGetLREdge(s32 line_id, Vec3f* object_pos, s32 lr);
extern void mpCollisionGetLREdgeRight(s32 line_id, Vec3f* object_pos);
extern void mpCollisionGetLREdgeLeft(s32 line_id, Vec3f* object_pos);
extern void func_ovl2_800F4448(s32 line_id, Vec3f* object_pos);
extern void func_ovl2_800F4468(s32 line_id, Vec3f* object_pos);
extern void mpCollisionGetUDEdge(s32 line_id, Vec3f* object_pos, s32 ud);
extern void mpCollisionGetUDEdgeUp(s32 line_id, Vec3f* object_pos);
extern void mpCollisionGetUDEdgeDown(s32 line_id, Vec3f* object_pos);
extern void func_ovl2_800F4690(s32 line_id, Vec3f* object_pos);
extern void func_ovl2_800F46B0(s32 line_id, Vec3f* object_pos);
extern void mpCollisionGetUDAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
extern sb32 mpCollisionCheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y,
										f32* dfx, f32* dfy);
extern sb32 mpCollisionCheckGroundLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);
extern sb32 mpCollisionCheckGroundLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											  u32* stand_coll_flags, Vec3f* angle);

extern sb32 mpCollisionCheckUDSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_y, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8);

extern sb32 mpCollisionCheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									  f32* dfy);
extern sb32 mpCollisionCheckCeilLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
extern sb32 mpCollisionCheckCeilLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											u32* stand_coll_flags, Vec3f* angle);
extern sb32 mpCollisionCheckRWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
extern void mpCollisionGetLRAngle(Vec3f* angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr);
extern sb32 mpCollisionCheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
extern sb32 mpCollisionCheckRWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
extern sb32 mpCollisionCheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x,
									f32 vtdist_y, f32* arg7, f32* arg8);
extern sb32 mpCollisionCheckLWallLineCollisionSame(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
extern sb32 mpCollisionCheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32* dfx,
									   f32* dfy);
extern sb32 mpCollisionCheckLWallLineCollisionDiff(Vec3f* position, Vec3f* translate, Vec3f* ga_last, s32* stand_line_id,
											 u32* stand_coll_flags, Vec3f* angle);
extern sb32 func_ovl2_800F8FFC(Vec3f* position);
extern sb32 func_ovl2_800F9348(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
extern sb32 func_ovl2_800F97BC(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
extern sb32 func_ovl2_800F9C30(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
extern sb32 func_ovl2_800FA0A4(Vec3f* position, s32* project_line_id, f32* ga_dist, u32* stand_coll_flags, Vec3f* angle);
extern s32 mpCollisionGetVertexCountLineID(s32 line_id);
extern void mpCollisionGetVertexPositionID(s32 line_id, s32 vertex_id, Vec3f* pos);
extern void mpCollisionGetSpeedLineID(s32 line_id, Vec3f* speed);
extern s32 mpCollisionGetLineTypeID(s32 line_id);
extern s32 mpCollisionGetEdgeUnderRLineID(s32 line_id);
extern s32 mpCollisionGetEdgeUnderLLineID(s32 line_id);
extern s32 mpCollisionGetEdgeUpperRLineID(s32 line_id);
extern s32 mpCollisionGetEdgeUpperLLineID(s32 line_id);
extern s32 mpCollisionGetEdgeRightULineID(s32 line_id);
extern s32 mpCollisionGetEdgeRightDLineID(s32 line_id);
extern s32 mpCollisionGetEdgeLeftULineID(s32 line_id);
extern s32 mpCollisionGetEdgeLeftDLineID(s32 line_id);
extern void mpCollisionGetPlayerMapObjPosition(s32 player, Vec3f* pos);
extern void mpCollisionAllocVertexInfo();
extern void func_ovl2_800FB04C();
extern void mpCollisionInitLineTypesAll();
extern void func_ovl2_800FB31C();
extern void func_ovl2_800FB554();
extern void mpCollisionAllocYakumono(DObjDesc* gr_room);
extern void func_ovl2_800FB808();
extern void func_ovl2_800FBA84();
extern void func_ovl2_800FBAD0(GObj* ground_gobj);
extern void mpCollisionAdvanceUpdateFrame(GObj* ground_gobj);
extern void func_ovl2_800FBD14();
extern s32 mpCollisionAllocLinesGetCountTotal();
extern void mpCollisionInitLineIDsAll();
extern void mpCollisionInitGroundData();
extern void mpCollisionSetPlayMusicID();
extern void mpCollisionSetMusicID();
extern void mpCollisionClearYakumonoAll();
extern void mpCollisionSetYakumonoPosID(s32 line_id, Vec3f* yakumono_pos);
extern void mpCollisionSetYakumonoOnID(s32 line_id);
extern void mpCollisionSetYakumonoOffID(s32 line_id);
extern sb32 mpCollisionCheckExistLineID(s32 line_id);
extern s32 mpCollisionSetDObjNoID(s32 line_id);
extern s32 mpCollisionGetMapObjCountKind(s32 mapobj_kind);
extern void mpCollisionGetMapObjIDsKind(s32 mapobj_kind, s32* mapobjs);
extern void mpCollisionGetMapObjPositionID(s32 mapobj_kind, Vec3f* pos);
extern s32 mpCollisionGetLineCountType(s32 line_type);
extern void mpCollisionGetLineIDsTypeCount(s32 type, s32 count, s32* line_ids);
extern u8 mpCollisionSetLightColorGetAlpha(Gfx** display_list);
extern sb32 mpCollisionCheckExistPlatformLineID(s32 line_id);
extern u16 mpCollisionGetVertexFlagsLineID(s32 line_id);

#endif /* _MPCOLLISION_H_ */
