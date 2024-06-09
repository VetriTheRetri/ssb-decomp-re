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
void ftMainUpdateAnimCheckInterrupt(GObj* fighter_gobj);
void ftMainUpdateAnimAllEvents(GObj* fighter_gobj);
sb32 ftMainUpdateColAnim(caStruct* colanim, GObj* fighter_gobj, sb32 is_playing_sfx, sb32 is_playing_gfx);
void ftMainRunUpdateColAnim(GObj* fighter_gobj);
void ftMainProcInterruptMain(GObj* fighter_gobj);
void ftMainClearMapElementsAll();
sb32 ftMainCheckSetMapObjectGObj(GObj* ogobj, sb32 (*proc_update)(GObj*, GObj*, s32*));
void ftMainClearMapObjectGObj(GObj* ogobj);
sb32 ftMainCheckSetMapEnvGObj(GObj* egobj, sb32 (*proc_update)(GObj*, GObj*, grHitbox**, s32*));
void ftMainClearMapEnvGObj(GObj* egobj);
void ftMainSetHitMapObject(GObj* ogobj, GObj* fighter_gobj, ftStruct* fp, s32 kind);
void ftMainSearchHitMapObject(GObj* fighter_gobj);
void ftMainUpdateVelDamageGround(ftStruct* fp, f32 move);
void ftMainProcPhysicsMap(GObj* fighter_gobj);
void ftMainProcPhysicsMapNormal(GObj* fighter_gobj);
void ftMainProcPhysicsMapCapture(GObj* fighter_gobj);
void ftMainSetHitVictimInteractStats(ftStruct* fp, u32 attack_group_id, GObj* victim_gobj, s32 hitbox_type,
									  u32 victim_group_id, sb32 ignore_hurt_or_hit);
void ftMainSetHitCollisionRebound(GObj* attacker_gobj, ftStruct* fp, ftHitbox* ft_hit, GObj* victim_gobj);
void ftMainUpdateAttackStatFighter(ftStruct* other_fp, ftHitbox* other_hit, ftStruct* this_fp, ftHitbox* this_hit,
									GObj* other_gobj, GObj* this_gobj);
void ftMainUpdateShieldStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									GObj* attacker_gobj, GObj* victim_gobj);
void ftMainUpdateCatchStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
								   GObj* attacker_gobj, GObj* victim_gobj);
void func_ovl2_800E2C24(ftStruct* fp, ftHitbox* ft_hit);
sb32 ftMainCheckGetUpdateDamage(ftStruct* fp, s32* damage);
void ftMainUpdateDamageStatFighter(ftStruct* attacker_fp, ftHitbox* attacker_hit, ftStruct* victim_fp,
									ftHurtbox* victim_hurt, GObj* attacker_gobj, GObj* victim_gobj);
void ftMainUpdateAttackStatWeapon(wpStruct* ip, wpHitbox* wp_hit, s32 index, ftStruct* fp, ftHitbox* ft_hit,
								   GObj* weapon_gobj, GObj* fighter_gobj);
void ftMainUpdateShieldStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, GObj* weapon_gobj,
								   GObj* fighter_gobj, f32 angle, Vec3f* vec);
void ftMainUpdateReflectorStatWeapon(wpStruct* wp, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMainUpdateAbsorbStatWeapon(wpStruct* ip, wpHitbox* wp_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMainUpdateDamageStatWeapon(wpStruct* wp, wpHitbox* wp_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								   GObj* weapon_gobj, GObj* fighter_gobj);
void ftMainUpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMainUpdateAttackStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHitbox* ft_hit,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMainUpdateShieldStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, GObj* item_gobj,
								 GObj* fighter_gobj, f32 angle, Vec3f* vec);
void ftMainUpdateReflectorStatItem(itStruct* ip, itHitbox* it_hit, ftStruct* fp, GObj* fighter_gobj);
void ftMainUpdateDamageStatItem(itStruct* ip, itHitbox* it_hit, s32 hitbox_id, ftStruct* fp, ftHurtbox* ft_hurt,
								 GObj* item_gobj, GObj* fighter_gobj);
void ftMainUpdateDamageStatGround(GObj* special_gobj, GObj* fighter_gobj, ftStruct* fp, grHitbox* gr_hit,
								   s32 target_kind);
void ftMainGetBumperDamageAngle(GObj* fighter_gobj, GObj* attacker_gobj);
void ftMainProcessHitCollisionStatsMain(GObj* fighter_gobj);
void ftMainSearchFighterHit(GObj* this_gobj);
void ftMainSearchWeaponHit(GObj* fighter_gobj);
void ftMainSearchItemHit(GObj* fighter_gobj);
sb32 ftMainGetGroundHitboxPointer(ftStruct* fp, grHitbox** p_gr_hit);
void ftMainSearchGroundHit(GObj* fighter_gobj);
void ftMainSearchFighterCatch(GObj* this_gobj);
void ftMainProcSearchAllCatch(GObj* fighter_gobj);
void ftMainProcSearchAllHit(GObj* fighter_gobj);
void ftMainProcUpdateMain(GObj* fighter_gobj);
void func_ovl2_800E69C4(ftStruct* fp, s32 index);
void func_ovl2_800E6CE0(ftStruct* fp, s32 index);
void func_ovl2_800E6E00(ftStruct* fp, s32 index);
void ftMainSetFighterStatus(GObj* fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags);

#endif
