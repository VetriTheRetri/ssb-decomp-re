#ifndef _FTMAIN_H_
#define _FTMAIN_H_

#include <sys/objdef.h>
#include <ft/ftdef.h>
#include <wp/wpdef.h>
#include <it/itdef.h>
#include <gr/grdef.h>
#include <gm/gmdef.h>

extern void ftMainParseMotionEvent(GObj *fighter_gobj, FTStruct *fp, FTMotionScript *ms, u32 ev_kind);
extern void ftMainUpdateMotionEventsNoEffect(GObj* fighter_gobj);
extern void ftMainUpdateMotionEventsDefault(GObj* fighter_gobj);
extern void ftMainUpdateMotionEventsDefaultEffect(GObj* fighter_gobj);
extern void ftMainPlayAnimNoEffect(GObj* fighter_gobj);
extern void ftMainPlayAnimDefault(GObj* fighter_gobj);
extern sb32 ftMainUpdateColAnim(GMColAnim* colanim, GObj* fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_effect);
extern void ftMainRunUpdateColAnim(GObj* fighter_gobj);
extern void ftMainProcInterruptMain(GObj* fighter_gobj);
extern void ftMainClearGroundElementsAll();
extern sb32 ftMainCheckAddGroundObstacle(GObj* ogobj, sb32 (*proc_update)(GObj*, GObj*, s32*));
extern void ftMainClearGroundObstacle(GObj* ogobj);
extern sb32 ftMainCheckAddGroundHazard(GObj* egobj, sb32 (*proc_update)(GObj*, GObj*, GRHitCollision**, s32*));
extern void ftMainClearHazard(GObj* egobj);
extern void ftMainSetHitHazard(GObj* ogobj, GObj* fighter_gobj, FTStruct* fp, s32 kind);
extern void ftMainSearchHitHazard(GObj* fighter_gobj);
extern void ftMainUpdateVelDamageGround(FTStruct* fp, f32 move);
extern void ftMainProcPhysicsMap(GObj* fighter_gobj);
extern void ftMainProcPhysicsMapDefault(GObj* fighter_gobj);
extern void ftMainProcPhysicsMapCapture(GObj* fighter_gobj);
extern void ftMainSetHitInteractStats(FTStruct* fp, u32 attack_group_id, GObj* victim_gobj, s32 hitbox_type,
									  u32 victim_group_id, sb32 ignore_damage_or_hit);
extern void ftMainSetHitRebound(GObj* attacker_gobj, FTStruct* fp, FTHitColl* ft_hitcoll, GObj* victim_gobj);
extern void ftMainUpdateAttackStatFighter(FTStruct* other_fp, FTHitColl* other_hit, FTStruct* this_fp, FTHitColl* this_hit,
									GObj* other_gobj, GObj* this_gobj);
extern void ftMainUpdateShieldStatFighter(FTStruct* attacker_fp, FTHitColl* attacker_hit, FTStruct* victim_fp,
									GObj* attacker_gobj, GObj* victim_gobj);
extern void ftMainUpdateCatchStatFighter(FTStruct* attacker_fp, FTHitColl* attacker_hit, FTStruct* victim_fp,
								   GObj* attacker_gobj, GObj* victim_gobj);
extern void ftMainPlayHitSFX(FTStruct* fp, FTHitColl* ft_hitcoll);
extern sb32 ftMainCheckGetUpdateDamage(FTStruct* fp, s32* damage);
extern void ftMainUpdateDamageStatFighter(FTStruct* attacker_fp, FTHitColl* attacker_hit, FTStruct* victim_fp,
									FTDamageColl* victim_hurt, GObj* attacker_gobj, GObj* victim_gobj);
extern void ftMainUpdateAttackStatWeapon(WPStruct* ip, WPHitColl* wp_atkcoll, s32 index, FTStruct* fp, FTHitColl* ft_hitcoll,
								   GObj* weapon_gobj, GObj* fighter_gobj);
extern void ftMainUpdateShieldStatWeapon(WPStruct* wp, WPHitColl* wp_atkcoll, s32 hitbox_id, FTStruct* fp, GObj* weapon_gobj,
								   GObj* fighter_gobj, f32 angle, Vec3f* vec);
extern void ftMainUpdateReflectorStatWeapon(WPStruct* wp, WPHitColl* wp_atkcoll, FTStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateAbsorbStatWeapon(WPStruct* ip, WPHitColl* wp_atkcoll, FTStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatWeapon(WPStruct* wp, WPHitColl* wp_atkcoll, s32 hitbox_id, FTStruct* fp, FTDamageColl* ft_dmgcoll,
								   GObj* weapon_gobj, GObj* fighter_gobj);
extern void ftMainUpdateAttackStatItem(ITStruct* ip, ITHitColl* it_atkcoll, s32 hitbox_id, FTStruct* fp, FTHitColl* ft_hitcoll,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateAttackStatItem(ITStruct* ip, ITHitColl* it_atkcoll, s32 hitbox_id, FTStruct* fp, FTHitColl* ft_hitcoll,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateShieldStatItem(ITStruct* ip, ITHitColl* it_atkcoll, s32 hitbox_id, FTStruct* fp, GObj* item_gobj,
								 GObj* fighter_gobj, f32 angle, Vec3f* vec);
extern void ftMainUpdateReflectorStatItem(ITStruct* ip, ITHitColl* it_atkcoll, FTStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatItem(ITStruct* ip, ITHitColl* it_atkcoll, s32 hitbox_id, FTStruct* fp, FTDamageColl* ft_dmgcoll,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatGround(GObj* special_gobj, GObj* fighter_gobj, FTStruct* fp, GRHitCollision* gr_hitcoll,
								   s32 target_kind);
extern void ftMainGetBumperDamageAngle(GObj* fighter_gobj, GObj* attacker_gobj);
extern void ftMainProcessHitCollisionStatsMain(GObj* fighter_gobj);
extern void ftMainSearchFighterHit(GObj* this_gobj);
extern void ftMainSearchWeaponHit(GObj* fighter_gobj);
extern void ftMainSearchItemHit(GObj* fighter_gobj);
extern sb32 ftMainGetGroundHitObstacle(FTStruct* fp, GRHitCollision** p_gr_hitcoll);
extern void ftMainSearchGroundHit(GObj* fighter_gobj);
extern void ftMainSearchFighterCatch(GObj* this_gobj);
extern void ftMainProcSearchAllCatch(GObj* fighter_gobj);
extern void ftMainProcSearchAllHit(GObj* fighter_gobj);
extern void ftMainProcUpdateMain(GObj* fighter_gobj);
extern void ftMainUpdateWithheldPartID(FTStruct* fp, s32 index);
extern void func_ovl2_800E6CE0(FTStruct* fp, s32 index);
extern void func_ovl2_800E6E00(FTStruct* fp, s32 index);
extern void ftMainSetFighterStatus(GObj* fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_speed, u32 flags);

#endif
