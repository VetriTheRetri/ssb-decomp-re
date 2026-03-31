#ifndef _GRSECTOR_H_
#define _GRSECTOR_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <gr/grdef.h>

extern void grSectorArwingInterpolateBasis(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3);
extern sb32 grSectorArwingLaser3DFuncMatrix(Mtx *mtx, DObj *dobj, Gfx **dls);
extern void grSectorArwingAddAnim(DObj *dobj, AObjEvent32 *anim_joint, f32 unused);
extern void grSectorArwingUpdateSleep(void);
extern void grSectorArwingUpdateWait(void);
extern void grSectorArwingUpdatePilotState1(void);
extern void grSectorArwingUpdatePilotState4(void);
extern void grSectorArwingUpdatePilotState5(void);
extern void grSectorArwingUpdatePilotState(void);
extern s32 grSectorArwingPrepareLaserCount(void);
extern sb32 grSectorArwingWeaponLaser2DProcMap(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser2DProcHit(GObj *weapon_gobj);
extern void grSectorArwingGetRotationFromBasis(Vec3f *rotate, Vec3f *direction, Vec3f *vec3, Vec3f *vec4);
extern void grSectorArwingSetLaserRotation(Vec3f *vel, Vec3f *rotate);
extern sb32 grSectorArwingWeaponLaser2DProcHop(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser2DProcReflector(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaser2DMakeWeapon(void);
extern sb32 grSectorArwingWeaponLaserExplodeProcUpdate(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaserExplodeInitVars(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcMap(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcHit(GObj *weapon_gobj);
extern sb32 grSectorArwingWeaponLaser3DProcAbsorb(GObj *weapon_gobj);
extern void grSectorArwingWeaponLaser3DMakeWeapon(void);
extern void grSectorArwingFireLaser(void);
extern void grSectorArwingUpdateLaserAmmo(void);
extern void grSectorArwingUpdateAmbientAnim(void);
extern void grSectorArwingUpdateCollisions(void);
extern void grSectorArwingUpdatePatrol(void);
extern void grSectorArwingSetFlightPattern(void);
extern void grSectorProcUpdate(GObj *ground_gobj);
extern void grSectorInitAll(void);
extern GObj* grSectorMakeGround(void);

#endif
