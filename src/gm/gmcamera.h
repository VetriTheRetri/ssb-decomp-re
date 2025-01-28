#ifndef _GMCAMERA_H_
#define _GMCAMERA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmdef.h>

// 0x80131460
extern GObj* gGMCameraCameraGObj;

// 0x80131464
extern f32 gGMCameraPauseCameraEyeY;

// 0x80131468
extern f32 gGMCameraPauseCameraEyeX;

// 0x80131470
extern Mtx44f gGMCameraMatrix;

// 0x801314B0
extern GMCamera gGMCameraCameraStruct;

extern u32 gmCameraGetBoundsMask(Vec3f *pos);
extern void gmCameraSetBoundsPosition(Vec3f *pos);
extern u32 gmCameraGetTeamBoundsMask(Vec3f *pos);
extern void gmCameraSetTeamBoundsPosition(Vec3f *pos);
extern void gmCameraSetDeadUpStarPosition(Vec3f *pos);
extern f32 gmCameraGetPlayerNumZoomRange(s32 player_num);
extern f32 gmCameraGetTargetAtY(f32 dist);
extern void gmCameraUpdateInterests(Vec3f *vec, f32 *hz, f32 *vt);
extern void gmCameraGetClampDimensionsMax(f32 hz, f32 vt, f32 *max);
extern void gmCameraGetAdjustAtAngle(Vec3f *at, Vec3f *vec, f32 x, f32 y);
extern void func_ovl2_8010C3C0(Vec3f *at, Vec3f *vec);
extern void func_ovl2_8010C4A4(Vec3f *arg0, Vec3f *arg1);
extern f32 func_ovl2_8010C4D0(void);
extern void func_ovl2_8010C55C(CObj *cobj, Vec3f *pos, f32 scale);
extern void func_ovl2_8010C5C0(CObj *cobj, Vec3f *arg1);
extern void func_ovl2_8010C670(f32 dist);
extern void func_ovl2_8010C6B8(CObj *cobj);
extern void func_ovl2_8010C6FC(CObj *cobj);
extern void gmCameraAdjustFOV(f32 fovy);
extern void jtgt_ovl2_8010C734(GObj *camera_gobj);
extern void func_ovl2_8010C7D0(CObj *cobj, Vec3f *arg1);
extern void jtgt_ovl2_8010C8C4(GObj *camera_gobj);
extern void func_ovl2_8010C960(GObj *camera_gobj);
extern sb32 gmCameraCheckPausePlayerOutBounds(Vec3f *pos);
extern void jtgt_ovl2_8010CAE0(GObj *camera_gobj);
extern void jtgt_ovl2_8010CB48(GObj *camera_gobj);
extern void gmCameraPlayAnim(GObj *camera_gobj);
extern void jtgt_ovl2_8010CC74(GObj *camera_gobj);
extern void jtgt_ovl2_8010CCC0(GObj *camera_gobj);
extern void jtgt_ovl2_8010CDAC(GObj *camera_gobj);
extern void gmCameraRunGlobalFuncCamera(GObj *camera_gobj);
extern void gmCameraSetCameraStatusID(s32 status_id);
extern void gmCameraSetCameraStatusDefault(void);
extern void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void func_ovl2_8010CFA8(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void gmCameraSetCameraStatusPrev(void);
extern void func_ovl2_8010D030(AObjEvent32 *arg0, f32 arg1, Vec3f *arg2);
extern void func_ovl2_8010D0A4(Vec3f *arg0, Vec3f *arg1);
extern void gmCameraSetAtMove(Vec3f *move);
extern void func_ovl2_8010D14C(GObj *camera_gobj);
extern f32 gmCameraGetMtxMaxValue(void);
extern sb32 gmCameraLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraPrepLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void func_ovl2_8010D4B0(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void gmCameraBattleProcDisplay(GObj *camera_gobj);
extern GObj* gmCameraMakeBattleCamera(u8 tk1, u8 tk2, void (*proc)(GObj*));
extern void func_ovl2_8010DB00(void);
extern GObj* func_ovl2_8010DB2C(void (*func_camera)(GObj*));
extern GObj* gmCameraMakeWallpaperCamera(void);
extern void func_ovl2_8010DC24(GObj *camera_gobj);
extern void func_ovl2_8010DDC4(void);
extern sb32 gmCameraPlayerMagnifyFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraOrthoLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraPrepProjectionFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void func_ovl2_8010E134(GObj *camera_gobj);
extern void func_ovl2_8010E1A4(void);
extern void func_ovl2_8010E254(GObj *camera_gobj);
extern GObj* func_ovl2_8010E374(void);
extern void func_ovl2_8010E458(GObj *camera_gobj);
extern GObj* func_ovl2_8010E498(void);
extern void gmCameraSetViewportDimensions(s32 ulx, s32 uly, s32 lrx, s32 lry);
extern sb32 gmCameraCheckTargetInBounds(f32 pos_x, f32 pos_y);

#endif
