#ifndef _FTMAIN_H_
#define _FTMAIN_H_

#include "ftdef.h"
#include <wp/wpdef.h>
#include <it/itdef.h>
#include <gr/grdef.h>
#include <sys/objdef.h>
#include <gm/gmscript.h>

extern void ftScript_ProcessScriptEvent(GObj* fighter_gobj, ftStruct* fp, ftMotionEvent* p_event, u32 ev_kind);
extern void ftScript_UpdateAllEventsInterrupt(GObj* fighter_gobj);
extern void ftScript_UpdateDefaultEvents(GObj* fighter_gobj);
extern void ftScript_UpdateDefaultEventsGFX(GObj* fighter_gobj);
extern void ftMainUpdateAnimCheckInterrupt(GObj* fighter_gobj);
extern void ftMainUpdateAnimAllEvents(GObj* fighter_gobj);
extern sb32 ftMainUpdateColAnim(gmColAnim* colanim, GObj* fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_gfx);
extern void ftMainRunUpdateColAnim(GObj* fighter_gobj);
extern void ftMainProcInterruptMain(GObj* fighter_gobj);
extern void ftMainClearMapElementsAll();
extern sb32 ftMainCheckSetMapObjectGObj(GObj* ogobj, sb32 (*proc_update)(GObj*, GObj*, s32*));
extern void ftMainClearMapObjectGObj(GObj* ogobj);
extern sb32 ftMainCheckSetMapEnvGObj(GObj* egobj, sb32 (*proc_update)(GObj*, GObj*, grHitbox**, s32*));
extern void ftMainClearMapEnvGObj(GObj* egobj);
extern void ftMainSetHitMapObject(GObj* ogobj, GObj* fighter_gobj, ftStruct* fp, s32 kind);
extern void ftMainSearchHitMapObject(GObj* fighter_gobj);
extern void ftMainUpdateVelDamageGround(ftStruct* fp, f32 move);
extern void ftMainProcPhysicsMap(GObj* fighter_gobj);
extern void ftMainProcPhysicsMapNormal(GObj* fighter_gobj);
extern void ftMainProcPhysicsMapCapture(GObj* fighter_gobj);
extern void ftMainSetHitVictimInteractStats(ftStruct* fp, u32 attack_group_id, GObj* victim_gobj, s32 hitbox_type,
									  u32 victim_group_id, sb32 ignore_hurt_or_hit);
extern void ftMainSetHitCollisionRebound(GObj* attacker_gobj, ftStruct* fp, ftHitbox* ft_hit, GObj* victim_gobj);
extern void ftMainUpdateAttackStatFighter(ftStruct* other_fp, ftHitbox* other_hit, ftStruct* this_fp, ftHitbox* this_hit,
									GObj* other_gobj, GObj* this_gobj);
extern void ftMainUpdateShieldStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									GObj* attacker_gobj, GObj* victim_gobj);
extern void ftMainUpdateCatchStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
								   GObj* attacker_gobj, GObj* victim_gobj);
extern void func_ovl2_800E2C24(ftStruct* fp, ftHitbox* ft_hit);
extern sb32 ftMainCheckGetUpdateDamage(ftStruct* fp, s32* damage);
extern void ftMainUpdateDamageStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									ftHurtbox* victim_hurt, GObj* attacker_gobj, GObj* victim_gobj);
extern void ftMainUpdateAttackStatWeapon(wpStruct* ip, wpHitbox* wp_hit, s32 index, ftStruct* fp, ftHitbox* ft_hit,
								   GObj* weapon_gobj, GObj* fighter_gobj);
extern void ftMainUpdateShieldStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, GObj* weapon_gobj,
								   GObj* fighter_gobj, f32 angle, Vec3f* vec);
extern void ftMainUpdateReflectorStatWeapon(wpStruct* wp, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateAbsorbStatWeapon(wpStruct* ip, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								   GObj* weapon_gobj, GObj* fighter_gobj);
extern void ftMainUpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateShieldStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, GObj* item_gobj,
								 GObj* fighter_gobj, f32 angle, Vec3f* vec);
extern void ftMainUpdateReflectorStatItem(itStruct* ip, itHitbox* it_hit, ftStruct* fp, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								 GObj* item_gobj, GObj* fighter_gobj);
extern void ftMainUpdateDamageStatGround(GObj* special_gobj, GObj* fighter_gobj, ftStruct* fp, grHitbox* gr_hit,
								   s32 target_kind);
extern void ftMainGetBumperDamageAngle(GObj* fighter_gobj, GObj* attacker_gobj);
extern void ftMainProcessHitCollisionStatsMain(GObj* fighter_gobj);
extern void ftMainSearchFighterHit(GObj* this_gobj);
extern void ftMainSearchWeaponHit(GObj* fighter_gobj);
extern void ftMainSearchItemHit(GObj* fighter_gobj);
extern sb32 ftMainGetGroundHitboxPointer(ftStruct* fp, grHitbox** p_gr_hit);
extern void ftMainSearchGroundHit(GObj* fighter_gobj);
extern void ftMainSearchFighterCatch(GObj* this_gobj);
extern void ftMainProcSearchAllCatch(GObj* fighter_gobj);
extern void ftMainProcSearchAllHit(GObj* fighter_gobj);
extern void ftMainProcUpdateMain(GObj* fighter_gobj);
extern void func_ovl2_800E69C4(ftStruct* fp, s32 index);
extern void func_ovl2_800E6CE0(ftStruct* fp, s32 index);
extern void func_ovl2_800E6E00(ftStruct* fp, s32 index);
extern void ftMainSetFighterStatus(GObj* fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags);

#endif
