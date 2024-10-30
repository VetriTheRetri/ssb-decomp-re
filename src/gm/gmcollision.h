#ifndef _GMCOLLISION_H_
#define _GMCOLLISION_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>
#include <it/itdef.h>

extern void gmCollisionCopyMatrix(Mtx44f dst, Mtx44f src);
extern void gmCollisionTransformMatrixAll(DObj *dobj, FTParts *parts, Mtx44f mtx);
extern void gmCollisionSetMatrixNcs(DObj *dobj, FTParts *parts, Mtx44f mtx, Vec3f *scale_mul);
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
extern sb32 gmCollisionTestRectangle(Vec3f *pos_curr, Vec3f *pos_prev, f32 radius, s32 opkind, Mtx44f mtx, Vec3f *offset, Vec3f *size, Vec3f *scale);
extern sb32 gmCollisionTestSphere(Vec3f *pos_curr, Vec3f *pos_prev, f32 hitsize, s32 atk_state, Mtx44f mtx, Vec3f *sphere_offset, Vec3f *sphere_size, Vec3f *arg7, s32 sphit_kind, f32 *p_angle, Vec3f *argA);
extern sb32 func_ovl2_800EEEAC(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 opkind, Mtx44f mtx, s32 arg5, Vec3f *arg6, f32 arg7, s32 arg8, f32 arg9);
extern sb32 gmCollisionCheckAttackInFighterRange(Vec3f *atk_position, Vec3f *obj_position, Vec3f *range, f32 size);
extern sb32 gmCollisionCheckFighterInFighterRange(FTAttackColl *atk_coll, GObj *fighter_gobj);
extern sb32 gmCollisionCheckWeaponInFighterRange(WPAttackColl *atk_coll, s32 atk_id, GObj *fighter_gobj);
extern sb32 gmCollisionCheckItemInFighterRange(ITAttackColl *atk_coll, s32 atk_id, GObj *fighter_gobj);
extern sb32 func_ovl2_800EF5D4(Vec3f *arg0, Vec3f *arg1, f32 arg2, s32 arg3, Vec3f *arg4, Vec3f *arg5, f32 arg6, s32 arg7);
extern sb32 gmCollisionCheckFighterAttacksCollide(FTAttackColl *atk_coll1, FTAttackColl *atk_coll2);
extern sb32 gmCollisionCheckFighterAttackDamageCollide(FTAttackColl *atk_coll, FTDamageColl *dmg_coll);
extern sb32 gmCollisionCheckFighterAttackItemDamageCollide(FTAttackColl *atk_coll, ITDamageColl *dmg_coll, GObj *item_gobj);
extern sb32 gmCollisionCheckFighterAttackShieldCollide(FTAttackColl *atk_coll, GObj *fighter_gobj, DObj *dobj, f32 *p_angle);
extern sb32 gmCollisionCheckWeaponAttackFighterAttackCollide(WPAttackColl *wp_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern sb32 gmCollisionCheckWeaponAttackFighterDamageCollide(WPAttackColl *atk_coll, s32 atk_id, FTDamageColl *dmg_coll);
extern sb32 gmCollisionCheckWeaponAttackShieldCollide(WPAttackColl *atk_coll, s32 atk_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec);
extern sb32 gmCollisionCheckWeaponAttackSpecialCollide(WPAttackColl *atk_coll, s32 atk_id, FTStruct *fp, FTSpecialColl *spc_coll);
extern sb32 gmCollisionCheckWeaponAttacksCollide(WPAttackColl *atk_coll1, s32 atk1_id, WPAttackColl *atk_coll2, s32 atk2_id);
extern sb32 gmCollisionCheckWeaponAttackItemAttackCollide(WPAttackColl *wp_atk_coll, s32 wp_atk_id, ITAttackColl *it_atk_coll, s32 it_atk_id);
extern sb32 gmCollisionCheckItemAttackFighterAttackCollide(ITAttackColl *it_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern sb32 gmCollisionCheckItemAttackFighterDamageCollide(ITAttackColl *atk_coll, s32 atk_id, FTDamageColl *dmg_coll);
extern sb32 gmCollisionCheckItemAttackShieldCollide(ITAttackColl *atk_coll, s32 atk_id, GObj *fighter_gobj, DObj *dobj, f32 *p_angle, Vec3f *vec);
extern sb32 gmCollisionCheckItemAttackSpecialCollide(ITAttackColl *atk_coll, s32 atk_id, FTStruct *fp, FTSpecialColl *spc_coll);
extern sb32 gmCollisionCheckItemAttacksCollide(ITAttackColl *atk_coll1, s32 atk1_id, ITAttackColl *atk_coll2, s32 atk2_id);
extern sb32 gmCollisionCheckItemAttackDamageCollide(ITAttackColl *atk_coll, s32 atk_id, ITDamageColl *dmg_coll, GObj *item_gobj);
extern sb32 gmCollisionCheckWeaponAttackItemDamageCollide(WPAttackColl *atk_coll, s32 atk_id, ITDamageColl *dmg_coll, GObj *item_gobj);
extern void gmCollisionGetFighterAttackPosition(Vec3f *dst, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetWeaponAttackPosition(Vec3f *dst, WPAttackColl *atk_coll, s32 atk_id);
extern void gmCollisionGetItemAttackPosition(Vec3f *dst, ITAttackColl *atk_coll, s32 atk_id);
extern void gmCollisionGetShieldPosition(Vec3f *dst, GObj *gobj, DObj *dobj);
extern void gmCollisionGetCommonImpactPosition(Vec3f *dst, Vec3f *pos, Vec3f *offset);
extern void gmCollisionGetFighterAttackDamagePosition(Vec3f *dst, FTAttackColl *ft_atk_coll, FTDamageColl *dmg_coll);
extern void gmCollisionGetFighterAttackItemDamagePosition(Vec3f *dst, FTAttackColl *ft_atk_coll, ITDamageColl *dmg_coll, GObj *item_gobj);
extern void gmCollisionGetFighterAttackShieldPosition(Vec3f *dst, FTAttackColl *ft_atk_coll, GObj *gobj, DObj *dobj);
extern void gmCollisionGetFighterAttacksPosition(Vec3f *dst, FTAttackColl *ft_atk_coll1, FTAttackColl *ft_atk_coll2);
extern void gmCollisionGetWeaponAttackFighterAttackPosition(Vec3f *dst, WPAttackColl *atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetWeaponAttackShieldPosition(Vec3f *dst, WPAttackColl *atk_coll, s32 atk_id, GObj *gobj, DObj *dobj);
extern void gmCollisionGetWeaponAttacksPosition(Vec3f *dst, WPAttackColl *atk_coll1, s32 atk1_id, WPAttackColl *atk_coll2, s32 atk2_id);
extern void gmCollisionGetWeaponAttackItemAttackPosition(Vec3f *dst, WPAttackColl *wp_atk_coll, s32 wp_atk_id, ITAttackColl *it_atk_coll, s32 it_atk_id);
extern void gmCollisionGetWeaponAttackFighterDamagePosition(Vec3f *dst, WPAttackColl *atk_coll, s32 atk_id, FTDamageColl *dmg_coll);
extern void gmCollisionGetWeaponAttackItemDamagePosition(Vec3f *dst, WPAttackColl *atk_coll, s32 atk_id, ITDamageColl *dmg_coll, GObj *item_gobj);
extern void gmCollisionGetItemAttackFighterDamagePosition(Vec3f *dst, ITAttackColl *atk_coll, s32 atk_id, FTDamageColl *dmg_coll);
extern void gmCollisionGetItemAttackFighterAttackPosition(Vec3f *dst, ITAttackColl *it_atk_coll, s32 atk_id, FTAttackColl *ft_atk_coll);
extern void gmCollisionGetItemAttackShieldPosition(Vec3f *dst, ITAttackColl *atk_coll, s32 atk_id, GObj *gobj, DObj *dobj);
extern void gmCollisionGetItemAttackItemAttackPosition(Vec3f *dst, ITAttackColl *atk_coll1, s32 atk1_id, ITAttackColl *atk_coll2, s32 atk2_id);
extern void gmCollisionGetItemAttackItemDamagePosition(Vec3f *dst, ITAttackColl *atk_coll, s32 atk_id, ITDamageColl *dmg_coll, GObj *item_gobj);
extern f32 gmCollisionGetDamageSlashRotation(FTStruct *fp, FTAttackColl *atk_coll);

#endif
