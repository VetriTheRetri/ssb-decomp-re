#ifndef _CMMANAGER_H_
#define _CMMANAGER_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <cm/cmdef.h>

extern u32 cmManagerGetCamBoundsMask(Vec3f *pos);
extern void cmManagerSetCameraBoundsPos(Vec3f *pos);
extern u32 cmManagerGetCamTeamBoundsMask(Vec3f *pos);
extern void cmManagerSetCameraTeamBoundsPos(Vec3f *pos);
extern void cmManagerSetCameraDeadUpStarPos(Vec3f *pos);
extern f32 cmManagerGetPlayerNumZoomRange(s32 player_num);
extern f32 cmManagerGetCamTargetAtY(f32 dist);
extern void cmManagerUpdateFollowEntities(Vec3f *vec, f32 *hz, f32 *vt);
extern void cmManagerGetClampDimensionsMax(f32 hz, f32 vt, f32 *max);
extern void cmManagerGetAdjustAtAngle(Vec3f *at, Vec3f *vec, f32 x, f32 y);
extern void func_ovl2_8010C3C0(Vec3f *at, Vec3f *vec);
extern void func_ovl2_8010C4A4(Vec3f *arg0, Vec3f *arg1);
extern f32 func_ovl2_8010C4D0(void);
extern void func_ovl2_8010C55C(Camera *cam, Vec3f *arg1, f32 arg2);
extern void func_ovl2_8010C5C0(Camera *cam, Vec3f *arg1);
extern void func_ovl2_8010C670(f32 dist);
extern void func_ovl2_8010C6B8(Camera *cam);
extern void func_ovl2_8010C6FC(Camera *cam);
extern void cmManagerAdjustFOV(f32 fovy);
extern void jtgt_ovl2_8010C734(GObj *camera_gobj);
extern void func_ovl2_8010C7D0(Camera *cam, Vec3f *arg1);
extern void jtgt_ovl2_8010C8C4(GObj *camera_gobj);
extern void func_ovl2_8010C960(GObj *camera_gobj);
extern sb32 cmManagerCheckPausePlayerOutBounds(Vec3f *pos);
extern void jtgt_ovl2_8010CAE0(GObj *camera_gobj);
extern void jtgt_ovl2_8010CB48(GObj *camera_gobj);
extern void func_ovl2_8010CBE4(GObj *camera_gobj);
extern void jtgt_ovl2_8010CC74(GObj *camera_gobj);
extern void jtgt_ovl2_8010CCC0(GObj *camera_gobj);
extern void jtgt_ovl2_8010CDAC(GObj *camera_gobj);
extern void cmManagerRunGlobalProcCamera(GObj *camera_gobj);
extern void cmManagerSetCameraStatusID(s32 status_id);
extern void cmManagerSetCameraStatusDefault(void);
extern void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void func_ovl2_8010CFA8(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void cmManagerSetCameraStatusPrev(void);
extern void func_ovl2_8010D030(ATrack *arg0, f32 arg1, Vec3f *arg2);
extern void func_ovl2_8010D0A4(Vec3f *arg0, Vec3f *arg1);
extern void cmManagerSetAtMove(Vec3f *move);
extern void func_ovl2_8010D14C(GObj *gCMManagerCameraGObj);
extern f32 cmManagerGetMtxMaxValue(void);
extern sb32 cmManagerCameraLookAt(Mtx *mtx, Camera *cam, Gfx **dl);
extern sb32 cmManagerCameraAddLookAtMtx(Mtx *mtx, Camera *cam, Gfx **dl);
extern void func_ovl2_8010D4B0(Mtx *mtx, Camera *cam, Gfx **dl);
extern void func_ovl2_8010D4C0(GObj *camera_gobj);
extern GObj* cmManagerMakeBattleCamera(u8 tk1, u8 tk2, void (*proc)(GObj*));
extern void func_ovl2_8010DB00(void);
extern GObj* func_ovl2_8010DB2C(void (*proc_camera)(GObj*));
extern GObj* cmManagerMakeWallpaperCamera(void);
extern void func_ovl2_8010DC24(GObj *camera_gobj);
extern void func_ovl2_8010DDC4(void);
extern sb32 func_ovl2_8010DE48(Mtx *mtx, s32 arg1, Gfx **dl);
extern sb32 func_ovl2_8010E00C(Mtx *mtx, s32 arg1, Gfx **dl);
extern sb32 func_ovl2_8010E10C(Mtx *mtx, s32 arg1, Gfx **dl);
extern void func_ovl2_8010E134(GObj *camera_gobj);
extern void func_ovl2_8010E1A4(void);
extern void func_ovl2_8010E254(GObj *camera_gobj);
extern GObj* func_ovl2_8010E374(void);
extern void func_ovl2_8010E458(GObj *camera_gobj);
extern GObj* func_ovl2_8010E498(void);
extern void cmManagerSetViewportDimensions(s32 ulx, s32 uly, s32 lrx, s32 lry);
extern sb32 cmManagerCheckTargetInBounds(f32 pos_x, f32 pos_y);

#endif
