#ifndef _GRSECTOR_H_
#define _GRSECTOR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern intptr_t lGRSectorArwingLaser2DWeaponAttributes;     // 0x000000BC
extern intptr_t lGRSectorArwingLaser3DWeaponAttributes;     // 0x000000F0
extern intptr_t lGRSectorMapHead;                           // 0x00000000

extern intptr_t lGRSectorArwingSectorDesc0;                 // 0x00000000
extern intptr_t lGRSectorArwingSectorDesc1;                 // 0x00000250
extern intptr_t lGRSectorArwingSectorDesc2;                 // 0x000006D0
extern intptr_t lGRSectorArwingSectorDesc3;                 // 0x000003E0
extern intptr_t lGRSectorArwingSectorDesc4;                 // 0x00000D10
extern intptr_t lGRSectorArwingSectorDesc5;                 // 0x00000EB0
extern intptr_t lGRSectorArwingSectorDesc6;                 // 0x00001510
extern intptr_t lGRSectorArwingSectorDesc7;                 // 0x000011D0

extern intptr_t lGRSectorArwing0AnimJoint;                  // 0x00000000
extern intptr_t lGRSectorArwing1AnimJoint;                  // 0x00001D34
extern intptr_t lGRSectorArwing2AnimJoint;                  // 0x00001DA4
extern intptr_t lGRSectorArwing3AnimJoint;                  // 0x00001DC4
extern intptr_t lGRSectorArwing4AnimJoint;                  // 0x00001D54
extern intptr_t lGRSectorArwing5AnimJoint;                  // 0x00001DE4

extern intptr_t D_NF_000000A1;                              // 0x000000A1
extern intptr_t D_NF_00002C30;                              // 0x00002C30
extern intptr_t D_NF_00002E74;                              // 0x00002E74
extern intptr_t D_NF_00001B34;                              // 0x00001B34
extern intptr_t D_NF_00001B84;                              // 0x00001B84
extern intptr_t D_NF_00002EB4;                              // 0x00002EB4

extern void func_ovl2_80106730(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3);
extern sb32 grSectorArwingLaser3DFuncMatrix(Mtx *mtx, DObj *dobj, Gfx **dls);
extern void func_ovl2_80106A40(DObj *dobj, AObjEvent32 *anim_joint, f32 arg2);
extern void grSectorArwingUpdateSleep(void);
extern void grSectorArwingUpdateWait(void);
extern void func_ovl2_80106C88(void);
extern void func_ovl2_80106CC4(void);
extern void func_ovl2_80106D00(void);
extern void func_ovl2_80106DD8(void);
extern s32 grSectorArwingPrepareLaserCount(void);
extern sb32 grSectorArwingWeaponLaser2DProcMap(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser2DProcHit(GObj *weapon_gobj);
extern void func_ovl2_801070A4(Vec3f *rotate, Vec3f *direction, Vec3f *vec3, Vec3f *vec4);
extern void func_ovl2_8010719C(Vec3f *vel, Vec3f *rotate);
extern sb32 grSectorArwingWeaponLaser2DProcHop(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser2DProcReflector(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaser2DMakeWeapon(void);
extern sb32 grSectorArwingWeaponLaserExplodeProcUpdate(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaserExplodeInitWeaponVars(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcMap(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcHit(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcAbsorb(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaser3DMakeWeapon(void);
extern void func_ovl2_80107910(void);
extern void func_ovl2_80107958(void);
extern void func_ovl2_80107B30(void);
extern void grSectorArwingUpdateCollisions(void);
extern void grSectorArwingUpdatePatrol(void);
extern void func_ovl2_80107D50(void);
extern void grSectorProcUpdate(GObj *ground_gobj);
extern void grSectorInitAll(void);
extern GObj* grSectorMakeGround(void);

#endif
