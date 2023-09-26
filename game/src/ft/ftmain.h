#ifndef _FTMAIN_H_
#define _FTMAIN_H_

#include "ftdef.h"
#include <wp/wpdef.h>
#include <it/itdef.h>
#include <gr/grdef.h>
#include <sys/obj.h>
#include <gm/gmscript.h>

void ftScript_ProcessScriptEvent(GObj *fighter_gobj, ftStruct *fp, ftMotionEvent *p_event, u32 ev_kind);
void ftScript_UpdateAllEventsInterrupt(GObj *fighter_gobj);
void ftScript_UpdateDefaultEvents(GObj *fighter_gobj);
void ftScript_UpdateDefaultEventsGFX(GObj *fighter_gobj);
void ftMain_UpdateAnimCheckInterrupt(GObj *fighter_gobj);
void ftMain_UpdateAnimAllEvents(GObj *fighter_gobj);
bool32 caMain_UpdateColAnim(caStruct *colanim, GObj *fighter_gobj, bool32 is_playing_sfx, bool32 is_playing_gfx);
void ftMain_UpdateColAnim(GObj *fighter_gobj);
void ftMain_ProcInterruptMain(GObj *fighter_gobj);
void func_ovl2_800E1CF0(void);
bool32 func_ovl2_800E1D48(GObj *ogobj, bool32(*proc_update)(GObj*, GObj*, s32*));
void func_ovl2_800E1D9C(GObj *ogobj);
bool32 func_ovl2_800E1DE8(GObj *egobj, bool32(*proc_update)(GObj*, GObj*, grHitbox**, s32*));
void func_ovl2_800E1E3C(GObj *egobj);
void func_ovl2_800E1E88(GObj *ogobj, GObj *fighter_gobj, void *unused, s32 kind);
void func_ovl2_800E1EE8(GObj *fighter_gobj);
void func_ovl2_800E1FE0(ftStruct *fp, f32 move);
void ftMain_ProcPhysicsMap(GObj *fighter_gobj);
void ftMain_ProcPhysicsMapNormal(GObj *fighter_gobj);
void ftMain_ProcPhysicsMapCapture(GObj *fighter_gobj);
void ftMain_UpdateHitRecord(ftStruct *fp, u32 attack_group_id, GObj *victim_gobj, s32 hitbox_type, u32 victim_group_id, bool32 ignore_hurt_or_hit);
void func_ovl2_800E287C(GObj *attacker_gobj, ftStruct *fp, ftHitbox *ft_hit, GObj *victim_gobj);
void func_ovl2_800E2910(ftStruct *other_fp, ftHitbox *other_hit, ftStruct *this_fp, ftHitbox *this_hit, GObj *other_gobj, GObj *this_gobj);
void func_ovl2_800E2A90(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj);
void func_ovl2_800E2B88(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, GObj *attacker_gobj, GObj *victim_gobj);
void func_ovl2_800E2C24(ftStruct *fp, ftHitbox *ft_hit);
bool32 func_ovl2_800E2CC0(ftStruct *fp, s32 *damage);
void func_ovl2_800E2D44(ftStruct *attacker_fp, ftHitbox *attacker_hit, ftStruct *victim_fp, ftHurtbox *victim_hurt, GObj *attacker_gobj, GObj *victim_gobj);
void func_ovl2_800E2F04(wpStruct *ip, wpHitbox *wp_hit, s32 index, ftStruct *fp, ftHitbox *ft_hit, GObj *weapon_gobj, GObj *fighter_gobj);
void func_ovl2_800E3048(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, ftStruct *fp, GObj *weapon_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec);
void func_ovl2_800E31B4(wpStruct *wp, wpHitbox *wp_hit, ftStruct *fp, GObj *fighter_gobj);
void func_ovl2_800E3308(wpStruct *ip, wpHitbox *wp_hit, ftStruct *fp, GObj *fighter_gobj);
void func_ovl2_800E3418(wpStruct *wp, wpHitbox *wp_hit, s32 hitbox_id, ftStruct *fp, ftHurtbox *ft_hurt, GObj *weapon_gobj, GObj *fighter_gobj);
void func_ovl2_800E35BC(itStruct *ip, itHitbox *it_hit, s32 arg2, ftStruct *fp, ftHitbox *ft_hit, GObj *item_gobj, GObj *fighter_gobj);
void func_ovl2_800E35BC(itStruct *ip, itHitbox *it_hit, s32 arg2, ftStruct *fp, ftHitbox *ft_hit, GObj *item_gobj, GObj *fighter_gobj);
void func_ovl2_800E36F8(itStruct *ip, itHitbox *it_hit, s32 hitbox_id, ftStruct *fp, GObj *item_gobj, GObj *fighter_gobj, f32 angle, Vec3f *vec);
void func_ovl2_800E3860(itStruct *ip, itHitbox *it_hit, ftStruct *fp, GObj *fighter_gobj);
void func_ovl2_800E39B0(itStruct *ap, itHitbox *it_hit, s32 arg2, ftStruct *fp, ftHurtbox *ft_hurt, GObj *item_gobj, GObj *fighter_gobj);
void func_ovl2_800E3CAC(GObj *special_gobj, GObj *fighter_gobj, ftStruct *fp, grHitbox *gr_hit, s32 target_kind);
void func_ovl2_800E3DD0(GObj *fighter_gobj, GObj *attacker_gobj);
void ftMain_ProcessHitCollisionStatsMain(GObj *fighter_gobj);
void ftMain_SearchFighterHit(GObj *this_gobj);
void ftMain_SearchWeaponHit(GObj *fighter_gobj);
void ftMain_SearchItemHit(GObj *fighter_gobj);
bool32 ftMain_GetGroundHitboxPointer(ftStruct *fp, grHitbox **p_gr_hit);
void ftMain_SearchGroundHit(GObj *fighter_gobj);
void ftMain_SearchFighterCatch(GObj *this_gobj);
void ftMain_ProcSearchAllCatch(GObj *fighter_gobj);
void ftMain_ProcSearchAllHit(GObj *fighter_gobj);
void ftMain_ProcUpdateMain(GObj *fighter_gobj);
void func_ovl2_800E69C4(ftStruct *fp, s32 index);
void func_ovl2_800E6CE0(ftStruct *fp, s32 index);
void func_ovl2_800E6E00(ftStruct *fp, s32 index);
void ftMain_SetFighterStatus(GObj *fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags);

#endif