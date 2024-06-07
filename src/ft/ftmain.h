#ifndef _FTMAIN_H_
#define _FTMAIN_H_

#include "ftdef.h"
#include <wp/wpdef.h>
#include <it/itdef.h>
#include <gr/grdef.h>
#include <sys/objdef.h>
#include <gm/gmscript.h>

void ftScript_ProcessScriptEvent(GObj* fighter_gobj, ftStruct* fp, ftMotionEvent* p_event, u32 ev_kind);
void ftScript_UpdateAllEventsInterrupt(GObj* fighter_gobj);
void ftScript_UpdateDefaultEvents(GObj* fighter_gobj);
void ftScript_UpdateDefaultEventsGFX(GObj* fighter_gobj);
void ftMain_UpdateAnimCheckInterrupt(GObj* fighter_gobj);
void ftMain_UpdateAnimAllEvents(GObj* fighter_gobj);
sb32 ftMain_UpdateColAnim(caStruct* colanim, GObj* fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_gfx);
void ftMain_RunUpdateColAnim(GObj* fighter_gobj);
void ftMain_ProcInterruptMain(GObj* fighter_gobj);
void ftMain_ClearMapElementsAll();
sb32 ftMain_CheckSetMapObjectGObj(GObj* ogobj, sb32 (*proc_update)(GObj*, GObj*, s32*));
void ftMain_ClearMapObjectGObj(GObj* ogobj);
sb32 ftMain_CheckSetMapEnvironmentGObj(GObj* egobj, sb32 (*proc_update)(GObj*, GObj*, grHitbox**, s32*));
void ftMain_ClearMapEnvironmentGObj(GObj* egobj);
void ftMain_SetHitMapObject(GObj* ogobj, GObj* fighter_gobj, ftStruct* fp, s32 kind);
void ftMain_SearchHitMapObject(GObj* fighter_gobj);
void ftMain_UpdateVelDamageGround(ftStruct* fp, f32 move);
void ftMain_ProcPhysicsMap(GObj* fighter_gobj);
void ftMain_ProcPhysicsMapNormal(GObj* fighter_gobj);
void ftMain_ProcPhysicsMapCapture(GObj* fighter_gobj);
void ftMain_SetHitVictimInteractStats(ftStruct* fp, u32 attack_group_id, GObj* victim_gobj, s32 hitbox_type,
									  u32 victim_group_id, sb32 ignore_hurt_or_hit);
void ftMain_SetHitCollisionRebound(GObj* attacker_gobj, ftStruct* fp, ftHitbox* ft_hit, GObj* victim_gobj);
void ftMain_UpdateAttackStatFighter(ftStruct* other_fp, ftHitbox* other_hit, ftStruct* this_fp, ftHitbox* this_hit,
									GObj* other_gobj, GObj* this_gobj);
void ftMain_UpdateShieldStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									GObj* attacker_gobj, GObj* victim_gobj);
void ftMain_UpdateCatchStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
								   GObj* attacker_gobj, GObj* victim_gobj);
void func_ovl2_800E2C24(ftStruct* fp, ftHitbox* ft_hit);
sb32 ftMain_CheckGetUpdateDamage(ftStruct* fp, s32* damage);
void ftMain_UpdateDamageStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									ftHurtbox* victim_hurt, GObj* attacker_gobj, GObj* victim_gobj);
void ftMain_UpdateAttackStatWeapon(wpStruct* ip, wpHitbox* wp_hit, s32 index, ftStruct* fp, ftHitbox* ft_hit,
								   GObj* weapon_gobj, GObj* fighter_gobj);
void ftMain_UpdateShieldStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, GObj* weapon_gobj,
								   GObj* fighter_gobj, f32 angle, Vec3f* vec);
void ftMain_UpdateReflectorStatWeapon(wpStruct* wp, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMain_UpdateAbsorbStatWeapon(wpStruct* ip, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMain_UpdateDamageStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								   GObj* weapon_gobj, GObj* fighter_gobj);
void ftMain_UpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMain_UpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMain_UpdateShieldStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, GObj* item_gobj,
								 GObj* fighter_gobj, f32 angle, Vec3f* vec);
void ftMain_UpdateReflectorStatItem(itStruct* ip, itHitbox* it_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMain_UpdateDamageStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMain_UpdateDamageStatGround(GObj* special_gobj, GObj* fighter_gobj, ftStruct* fp, grHitbox* gr_hit,
								   s32 target_kind);
void ftMain_GetBumperDamageAngle(GObj* fighter_gobj, GObj* attacker_gobj);
void ftMain_ProcessHitCollisionStatsMain(GObj* fighter_gobj);
void ftMain_SearchFighterHit(GObj* this_gobj);
void ftMain_SearchWeaponHit(GObj* fighter_gobj);
void ftMain_SearchItemHit(GObj* fighter_gobj);
sb32 ftMain_GetGroundHitboxPointer(ftStruct* fp, grHitbox** p_gr_hit);
void ftMain_SearchGroundHit(GObj* fighter_gobj);
void ftMain_SearchFighterCatch(GObj* this_gobj);
void ftMain_ProcSearchAllCatch(GObj* fighter_gobj);
void ftMain_ProcSearchAllHit(GObj* fighter_gobj);
void ftMain_ProcUpdateMain(GObj* fighter_gobj);
void func_ovl2_800E69C4(ftStruct* fp, s32 index);
void func_ovl2_800E6CE0(ftStruct* fp, s32 index);
void func_ovl2_800E6E00(ftStruct* fp, s32 index);
void ftMain_SetFighterStatus(GObj* fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags);

#endif
