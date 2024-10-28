#ifndef _GMCOLLISION_H_
#define _GMCOLLISION_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>
#include <it/itdef.h>

extern void gmCollisionCopyMatrix(Mtx44f dst, Mtx44f src);
extern void gmCollisionTransformMatrixAll(DObj *dobj, FTParts *ft_parts, Mtx44f mtx);
extern void gmCollisionSetMatrixNcs(DObj *dobj, FTParts *ft_parts, Mtx44f mtx, Vec3f *scale_mul);
extern void gmCollisionGetWorldPosition(Mtx44f mtx, Vec3f *vec);
extern void func_ovl2_800ED490(Mtx44f dst, Mtx44f lhs, Mtx44f rhs);
extern void gmCollisionSetInvertMatrix(Mtx44f dst, Mtx44f src);
extern void func_ovl2_800EDA0C(Mtx44f mtx, Vec3f *rotate);
extern void func_ovl2_800EDB88(Mtx44f mtx, Vec3f *vec);
extern void func_ovl2_800EDBA4(DObj *main_dobj);
extern void func_ovl2_800EDE00(DObj *main_dobj);
extern void func_ovl2_800EDE5C(DObj *main_dobj);
extern void gmCollisionGetFighterPartsWorldPosition(DObj *main_dobj, Vec3f *vec);
extern void func_ovl2_800EE018(DObj *main_dobj, Vec3f *vec);
extern void func_ovl2_800EE050(s32 arg0, Vec3f *arg1, Vec3f *arg2, sb32 *arg3, Mtx44f mtx, f32 *p_scale);
extern u32 func_ovl2_800EE24C(Vec3f *lhs, Vec3f *rhs);
extern u32 func_ovl2_800EE2C0(Vec3f *lhs, Vec3f *rhs);
extern sb32 gmCollisionTestRectangle(Vec3f *sphere1, Vec3f *sphere2, f32 radius, s32 opkind, Mtx44f mtx, Vec3f *ref, Vec3f *arg6, Vec3f *arg7);
extern sb32 gmCollisionTestSphere(Vec3f *hitpos_current, Vec3f *hitpos_prev, f32 hitsize, s32 atk_state, Mtx44f mtx, Vec3f *sphere_offset, Vec3f *sphere_size, Vec3f *arg7, s32 sphit_kind, f32 *p_angle, Vec3f *argA);
extern sb32 func_ovl2_800EEEAC(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 opkind, Mtx44f mtx, s32 arg5, Vec3f *arg6, f32 arg7, s32 arg8, f32 arg9);
extern sb32 gmCollisionCheckHitInFighterRange(Vec3f *hit_position, Vec3f *obj_position, Vec3f *range, f32 size);
extern sb32 gmCollisionCheckFighterInFighterRange(FTAttackColl *ft_atk_coll, GObj *fighter_gobj);
extern sb32 gmCollisionCheckWeaponInFighterRange(WPAttackColl *wp_atk_coll, s32 atk_id, GObj *fighter_gobj);
extern sb32 gmCollisionCheckItemInFighterRange(ITAttackColl *it_atk_coll, s32 atk_id, GObj *fighter_gobj);
extern sb32 func_ovl2_800EF5D4(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 arg3, Vec3f *arg4, Vec3f *arg5, f32 arg6, s32 arg7);
extern sb32 gmCollisionCheckFighterHitFighterHitCollide(FTAttackColl *ft_atk_coll1, FTAttackColl *ft_atk_coll2);
extern sb32 gmCollisionCheckFighterHitFighterHurtCollide(FTAttackColl *ft_atk_coll, FTDamageColl *ft_dmgcoll);
extern sb32 gmCollisionCheckFighterHitItemHurtCollide(FTAttackColl *ft_atk_coll, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern sb32 gmCollisionCheckFighterHitShieldCollide(FTAttackColl *ft_atk_coll, GObj *fighter_gobj, DObj *dobj, f32 *p_angle);
extern sb32 gmCollisionCheckWeaponHitFighterHitCollide(WPAttackColl *wp_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern sb32 gmCollisionCheckWeaponHitFighterHurtCollide(WPAttackColl *wp_atk_coll, s32 atk_id, FTDamageColl *ft_dmgcoll);
extern sb32 gmCollisionCheckWeaponHitShieldCollide(WPAttackColl *wp_atk_coll, s32 atk_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec);
extern sb32 gmCollisionCheckWeaponHitSpecialCollide(WPAttackColl *wp_atk_coll, s32 atk_id, FTStruct *fp, FTSpecialColl *special_coll);
extern sb32 gmCollisionCheckWeaponHitWeaponHitCollide(WPAttackColl *wp_atk_coll1, s32 hit1_id, WPAttackColl *wp_atk_coll2, s32 hit2_id);
extern sb32 gmCollisionCheckWeaponHitItemHitCollide(WPAttackColl *wp_atk_coll, s32 wp_atk_coll_id, ITAttackColl *it_atk_coll, s32 it_atk_coll_id);
extern sb32 gmCollisionCheckItemHitFighterHitCollide(ITAttackColl *it_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern sb32 gmCollisionCheckItemHitFighterHurtCollide(ITAttackColl *it_atk_coll, s32 atk_id, FTDamageColl *ft_dmgcoll);
extern sb32 gmCollisionCheckItemHitShieldCollide(ITAttackColl *it_atk_coll, s32 atk_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec);
extern sb32 gmCollisionCheckItemHitSpecialCollide(ITAttackColl *it_atk_coll, s32 atk_id, FTStruct *fp, FTSpecialColl *special_coll);
extern sb32 gmCollisionCheckItemHitItemHitCollide(ITAttackColl *it_atk_coll1, s32 hit1_id, ITAttackColl *it_atk_coll2, s32 hit2_id);
extern sb32 gmCollisionCheckItemHitItemHurtCollide(ITAttackColl *it_atk_coll, s32 atk_id, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern sb32 gmCollisionCheckWeaponHitItemHurtCollide(WPAttackColl *wp_atk_coll, s32 atk_id, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern void gmCollisionGetFighterHitPosition(Vec3f *dst, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetWeaponHitPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 atk_id);
extern void gmCollisionGetItemHitPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id);
extern void gmCollisionGetShieldPosition(Vec3f *dst, GObj *gobj, DObj *dobj);
extern void gmCollisionGetCommonImpactPosition(Vec3f *dst, Vec3f *pos, Vec3f *offset);
extern void gmCollisionGetFighterHitFighterHurtPosition(Vec3f *dst, FTAttackColl *ft_atk_coll, FTDamageColl *ft_dmgcoll);
extern void gmCollisionGetFighterHitItemHurtPosition(Vec3f *dst, FTAttackColl *ft_atk_coll, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern void gmCollisionGetFighterHitShieldPosition(Vec3f *dst, FTAttackColl *ft_atk_coll, GObj *gobj, DObj *dobj);
extern void gmCollisionGetFighterHitFighterHitPosition(Vec3f *dst, FTAttackColl *ft_atk_coll1, FTAttackColl *ft_atk_coll2);
extern void gmCollisionGetWeaponHitFighterHitPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetWeaponHitShieldPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 atk_id, GObj *gobj, DObj *dobj);
extern void gmCollisionGetWeaponHitWeaponHitPosition(Vec3f *dst, WPAttackColl *wp_atk_coll1, s32 hit1_id, WPAttackColl *wp_atk_coll2, s32 hit2_id);
extern void gmCollisionGetWeaponHitItemHitPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 wp_atk_coll_id, s32 it_atk_coll, s32 it_atk_coll_id);
extern void gmCollisionGetWeaponHitFighterHurtPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 atk_id, FTDamageColl *ft_dmgcoll);
extern void gmCollisionGetWeaponHitItemHurtPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 atk_id, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern void gmCollisionGetItemHitFighterHurtPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id, FTDamageColl *ft_dmgcoll);
extern void gmCollisionGetItemHitFighterHitPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetItemHitShieldPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id, GObj *gobj, DObj *dobj);
extern void gmCollisionGetItemHitItemHitPosition(Vec3f *dst, ITAttackColl *it_atk_coll1, s32 hit1_id, ITAttackColl *it_atk_coll2, s32 hit2_id);
extern void gmCollisionGetItemHitItemHurtPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id, ITDamageColl *it_dmgcoll, GObj *item_gobj);
extern f32 gmCollisionGetDamageSlashRotation(FTStruct *fp, FTAttackColl *ft_atk_coll);

#endif
