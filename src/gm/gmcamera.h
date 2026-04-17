#ifndef _GMCAMERA_H_
#define _GMCAMERA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gm/gmdef.h>

// 80131460
extern GObj* gGMCameraGObj;

// 80131464
extern f32 gGMCameraPauseCameraEyeY;

// 80131468
extern f32 gGMCameraPauseCameraEyeX;

// 80131470
extern Mtx44f gGMCameraMatrix;

// 801314B0
extern GMCamera gGMCameraStruct;

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
extern void gmCameraUpdateInishieFocus(Vec3f *arg0, Vec3f *arg1);
extern f32 func_ovl2_8010C4D0();
extern void gmCameraPan(CObj *cobj, Vec3f *pos, f32 scale);
extern void func_ovl2_8010C5C0(CObj *cobj, Vec3f *arg1);
extern void func_ovl2_8010C670(f32 dist);
extern void gmCameraApplyVel(CObj *cobj);
extern void gmCameraApplyFOV(CObj *cobj);
extern void gmCameraAdjustFOV(f32 fovy);
extern void gmCameraDefaultFuncCamera(GObj *camera_gobj);
extern void gmCameraUpdateAcidZoom(CObj *cobj, Vec3f *arg1);
extern void gmCameraZebesFuncCamera(GObj *camera_gobj);
extern void gmCameraUpdatePlayerZoom(GObj *camera_gobj);
extern sb32 gmCameraCheckPausePlayerOutBounds(Vec3f *pos);
extern void gmCameraPlayerZoomFuncCamera(GObj *camera_gobj);
extern void gmCameraInishieFuncCamera(GObj *camera_gobj);
extern void gmCameraUpdateAnimVel(GObj *camera_gobj);
extern void gmCameraAnimFuncCamera(GObj *camera_gobj);
extern void gmCameraMapZoomFuncCamera(GObj *camera_gobj);
extern void gmCameraPlayerFollowFuncCamera(GObj *camera_gobj);
extern void gmCameraRunFuncCamera(GObj *camera_gobj);
extern void gmCameraSetStatus(s32 status_id);
extern void gmCameraSetStatusDefault();
extern void gmCameraSetStatusPlayerZoom(GObj *fighter_gobj, f32 eye_x, f32 eye_y, f32 dist, f32 pan_scale, f32 fov);
extern void gmCameraSetStatusPlayerFollow(GObj *fighter_gobj, f32 eye_x, f32 eye_y, f32 dist, f32 pan_scale, f32 fov);
extern void gmCameraSetStatusPrev();
extern void gmCameraSetStatusAnim(AObjEvent32 *camanim_joint, f32 anim_frame, Vec3f *vel);
extern void gmCameraSetStatusMapZoom(Vec3f *origin, Vec3f *target);
extern void gmCameraSetVelAt(Vec3f *move);
extern void func_ovl2_8010D14C(GObj *camera_gobj);
extern f32 gmCameraGetMatrixMax();
extern sb32 gmCameraLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraPrepLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void func_ovl2_8010D4B0(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void gmCameraDefaultProcDisplay(GObj *camera_gobj);
extern GObj* gmCameraMakeDefaultCamera(u8 tk1, u8 tk2, void (*proc)(GObj*));
extern void gmCameraMakeBattleCamera();
extern GObj* gmCameraMakeMovieCamera(void (*func_camera)(GObj*));
extern GObj* gmCameraMakeWallpaperCamera();
extern void gmCameraScreenFlashProcDisplay(GObj *camera_gobj);
extern void gmCameraScreenFlashMakeCamera();
extern sb32 gmCameraPlayerMagnifyFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraOrthoLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern sb32 gmCameraPrepProjectionFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dl);
extern void gmCameraPlayerMagnifyProcDisplay(GObj *camera_gobj);
extern void gmCameraMakePlayerMagnifyCamera();
extern void gmCameraPlayerArrowsProcDisplay(GObj *camera_gobj);
extern GObj* gmCameraMakeInterfaceCamera();
extern void gmCameraEffectProcDisplay(GObj *camera_gobj);
extern GObj* gmCameraMakeEffectCamera();
extern void gmCameraSetViewportDimensions(s32 ulx, s32 uly, s32 lrx, s32 lry);
extern sb32 gmCameraCheckTargetInBounds(f32 pos_x, f32 pos_y);

#endif
