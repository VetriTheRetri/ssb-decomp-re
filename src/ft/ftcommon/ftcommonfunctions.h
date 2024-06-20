#ifndef _FTCOMMON_FUNCTIONS_H_
#define _FTCOMMON_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// DeadDown / DeadLeft / DeadRight / DeadUpStar / DeadUpFall
void func_ovl3_8013BC60(u16 sfx_id);
void func_ovl3_8013BC8C(ftStruct* this_fp);
void func_ovl3_8013BC8C(ftStruct* this_fp);
void ftCommon_Dead_UpdateScore(ftStruct* this_fp);
void ftCommon_Dead_CheckRebirth(GObj* fighter_gobj);
void ftCommon_Dead_ResetCommonVars(GObj* fighter_gobj);
void ftCommon_Dead_ClearSpecialStats(GObj* fighter_gobj);
void ftCommon_DeadCommon_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Dead_InitStatusVars(GObj* fighter_gobj);
void ftCommon_DeadDown_SetStatus(GObj* fighter_gobj);
void ftCommon_DeadRight_SetStatus(GObj* fighter_gobj);
void ftCommon_DeadLeft_SetStatus(GObj* fighter_gobj);
void ftCommon_DeadUpStar_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DeadUpStar_SetStatus(GObj* fighter_gobj);
void ftCommon_DeadUpFall_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DeadUpFall_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Dead_CheckInterruptCommon(GObj* fighter_gobj);

// Sleep
sb32 ftCommon_Sleep_CheckIgnorePauseMenu(GObj* fighter_gobj);
void ftCommon_Sleep_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Sleep_SetStatus(GObj* fighter_gobj);

// Entry / Appear
void ftCommon_Entry_SetStatus(GObj* fighter_gobj);
void ftCommon_EntryNull_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Appear_UpdateEffects(GObj* fighter_gobj);
void ftCommon_Appear_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Appear_ProcPhysics(GObj* fighter_gobj);
void ftCommon_Appear_InitStatusVars(GObj* fighter_gobj);
void ftCommon_Appear_SetStatus(GObj* fighter_gobj);
void ftCommon_Appear_SetPosition(GObj* fighter_gobj); // This runs when spawning multi-character team
													  // members in VS mode I suppose?

// RebirthDown / RebirthStand / RebirthWait
void ftCommon_RebirthDown_SetStatus(GObj* this_gobj);
void ftCommon_RebirthCommon_DecHaloTimers(GObj* fighter_gobj);
void ftCommon_RebirthDown_ProcUpdate(GObj* fighter_gobj);
void ftCommon_RebirthCommon_ProcMap(GObj* fighter_gobj);
void ftCommon_RebirthStand_ProcUpdate(GObj* fighter_gobj);
void ftCommon_RebirthStand_SetStatus(GObj* fighter_gobj);
void ftCommon_RebirthWait_ProcUpdate(GObj* fighter_gobj);
void ftCommon_RebirthWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_RebirthWait_SetStatus(GObj* fighter_gobj);

// Wait
void ftCommon_Wait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Wait_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Wait_CheckInputSuccess(GObj* fighter_gobj);
sb32 ftCommon_Wait_CheckInterruptCommon(GObj* fighter_gobj);

// WalkSlow / WalkMiddle / WalkFast
f32 ftCommon_Walk_GetWalkAnimSpeed(ftStruct* fp, s32 status_id);
s32 ftCommon_Walk_GetWalkStatus(s8 stick_range_x);
void ftCommon_Walk_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Walk_ProcPhysics(GObj* fighter_gobj);
void ftCommon_Walk_SetStatusParam(GObj* fighter_gobj, f32 anim_frame_begin);
void ftCommon_Walk_SetStatusDefault(GObj* fighter_gobj);
sb32 ftCommon_Walk_CheckInputSuccess(GObj* fighter_gobj);
sb32 ftCommon_Walk_CheckInterruptCommon(GObj* fighter_gobj);

// Dash
void ftCommon_Dash_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Dash_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Dash_ProcPhysics(GObj* fighter_gobj);
void ftCommon_Dash_ProcMap(GObj* fighter_gobj);
void ftCommon_Dash_SetStatus(GObj* fighter_gobj, u32 flag);
sb32 ftCommon_Dash_CheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommon_Dash_CheckTurn(GObj* fighter_gobj);

// Run
void ftCommon_Run_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Run_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Run_CheckInterruptDash(GObj* fighter_gobj);

// RunBrake
void ftCommon_RunBrake_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_RunBrake_ProcPhysics(GObj* fighter_gobj);
void ftCommon_RunBrake_SetStatus(GObj* fighter_gobj, u32 flag);
sb32 ftCommon_RunBrake_CheckInterruptRun(GObj* fighter_gobj);
sb32 ftCommon_RunBrake_CheckInterruptTurnRun(GObj* fighter_gobj);

// Turn
void ftCommon_Turn_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Turn_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Turn_SetStatus(GObj* fighter_gobj, s32 lr_dash);
void ftCommon_Turn_SetStatusCenter(GObj* fighter_gobj);
void ftCommon_Turn_SetStatusInvertLR(GObj* fighter_gobj);
sb32 ftCommon_Turn_CheckInputSuccess(GObj* fighter_gobj);
sb32 ftCommon_Turn_CheckInterruptCommon(GObj* fighter_gobj);

// TurnRun
void ftCommon_TurnRun_ProcUpdate(GObj* fighter_gobj);
void ftCommon_TurnRun_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_TurnRun_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_TurnRun_CheckInterruptRun(GObj* fighter_gobj);

// KneeBend / GuardKneeBend
void ftCommon_KneeBend_ProcUpdate(GObj* fighter_gobj);
void ftCommon_KneeBend_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_KneeBend_SetStatusParam(GObj* fighter_gobj, s32 status_id, s32 input_source);
void ftCommon_KneeBend_SetStatus(GObj* fighter_gobj, s32 input_source);
void ftCommon_GuardKneeBend_SetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftCommon_KneeBend_CheckButtonTap(ftStruct* fp);
s32 ftCommon_KneeBend_GetInputTypeCommon(ftStruct* fp);
sb32 ftCommon_KneeBend_CheckInterruptCommon(GObj* fighter_gobj);
s32 ftCommon_KneeBend_GetInputTypeRun(ftStruct* fp);
sb32 ftCommon_KneeBend_CheckInterruptRun(GObj* fighter_gobj);
sb32 ftCommon_GuardKneeBend_CheckInterruptGuard(GObj* fighter_gobj);

// Jump
void ftCommon_Jump_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Jump_GetJumpForceButton(s32 stick_range_x, s32* jump_vel_x, s32* jump_vel_y, sb32 is_short_hop);
void ftCommon_Jump_SetStatus(GObj* fighter_gobj);

// JumpAerial
void ftCommon_JumpAerial_UpdateModelYaw(ftStruct* fp);
void ftCommon_JumpAerial_ProcUpdate(GObj* fighter_gobj);
void ftCommon_JumpAerial_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_JumpAerial_ProcPhysics(GObj* fighter_gobj);
void ftCommon_JumpAerial_SetStatus(GObj* fighter_gobj, s32 input_source);
void ftCommon_JumpAerialMulti_SetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftCommon_JumpAerialMulti_CheckJumpButtonHold(ftStruct* fp);
s32 ftCommon_JumpAerialMulti_GetJumpInputType(ftStruct* fp);
sb32 ftCommon_JumpAerial_CheckInterruptCommon(GObj* fighter_gobj);

// Fall / FallAerial
void ftCommon_Fall_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Fall_SetStatus(GObj* fighter_gobj);

// Squat / SquatWait / SquatRv
sb32 ftCommon_Squat_CheckGotoPass(GObj* fighter_gobj);
void ftCommon_Squat_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Squat_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Squat_SetStatusNoPass(GObj* fighter_gobj);
void ftCommon_Squat_SetStatusPass(GObj* fighter_gobj);
sb32 ftCommon_Squat_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_SquatWait_ProcUpdate(GObj* fighter_gobj);
void ftCommon_SquatWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_SquatWait_SetStatus(GObj* fighter_gobj);
void ftCommon_SquatWait_SetStatusNoPass(GObj* fighter_gobj);
sb32 ftCommon_SquatWait_CheckInterruptLanding(GObj* fighter_gobj);
void ftCommon_SquatRv_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_SquatRv_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_SquatRv_CheckInterruptSquatWait(GObj* fighter_gobj);

// LandingLight / LandingHeavy
void ftCommon_Landing_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Landing_SetStatusParam(GObj* fighter_gobj, s32 status_id, sb32 is_allow_interrupt, f32 anim_speed);
void ftCommon_Landing_SetStatus(GObj* fighter_gobj);
void ftCommon_LandingAirNull_SetStatus(GObj* fighter_gobj, f32 anim_speed);
void ftCommon_LandingFallSpecial_SetStatus(GObj* fighter_gobj, sb32 is_allow_interrupt, f32 anim_speed);

// Pass
void ftCommon_Pass_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Pass_SetStatusParam(GObj* fighter_gobj, s32 status_id, f32 frame_begin, u32 flags);
void ftCommon_Pass_SetStatusSquat(GObj* fighter_gobj);
void ftCommon_GuardPass_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Pass_CheckInputSuccess(ftStruct* fp);
sb32 ftCommon_Pass_CheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommon_Pass_CheckInterruptSquat(GObj* fighter_gobj);
sb32 ftCommon_GuardPass_CheckInterruptGuard(GObj* fighter_gobj);

// Ottotto / OttottoWait
void ftCommon_Ottotto_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Ottotto_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Ottotto_ProcMap(GObj* fighter_gobj);
void ftCommon_OttottoWait_SetStatus(GObj* fighter_gobj);

// Damage
void ftCommon_Damage_SetDustGFXInterval(ftStruct* fp);
void ftCommon_Damage_UpdateDustGFX(GObj* fighter_gobj);
void ftCommon_Damage_DecHitStunSetPublicity(GObj* fighter_gobj);
void ftCommon_DamageCommon_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DamageAirCommon_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Damage_CheckSetInvincible(GObj* fighter_gobj);
void ftCommon_Damage_SetStatus(GObj* fighter_gobj);
void ftCommon_DamageCommon_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_DamageAirCommon_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_DamageFlyRoll_UpdateModelPitch(GObj* fighter_gobj);
void ftCommon_DamageCommon_ProcPhysics(GObj* fighter_gobj);
void ftCommon_DamageCommon_ProcLagUpdate(GObj* fighter_gobj);
void func_ovl3_80140934();
void ftCommon_DamageAirCommon_ProcMap(GObj* fighter_gobj);
f32 gmCommon_Damage_GetKnockbackAngle(s32 angle_i, s32 ground_or_air, f32 knockback);
s32 ftCommon_Damage_GetDamageLevel(f32 hitstun);
void ftCommon_Damage_SetPublicity(ftStruct* this_fp, f32 knockback, f32 angle);
sb32 ftCommon_Damage_CheckElementSetColAnim(GObj* fighter_gobj, s32 element, s32 damage_level);
void ftCommon_Damage_CheckMakeScreenFlash(f32 knockback, s32 element);
sb32 func_ovl3_80140D30(ftStruct* fp);
void func_ovl3_80140E2C(GObj* fighter_gobj);
sb32 ftCommon_Damage_CheckCaptureKeepHold(ftStruct* fp);
void ftCommon_Damage_InitDamageVars(GObj* this_gobj, s32 status_id_replace, s32 damage, f32 knockback, s32 angle_start,
									s32 lr_damage, s32 damage_index, s32 element, s32 damage_player_number, s32 arg9,
									sb32 unk_bool, sb32 is_publicity);
void ftCommon_Damage_GotoDamageStatus(GObj* fighter_gobj);
void ftCommon_Damage_UpdateDamageColAnim(GObj* fighter_gobj, f32 knockback, s32 element);
void ftCommon_Damage_SetDamageColAnim(GObj* fighter_gobj);
void ftCommon_Damage_UpdateMain(GObj* fighter_gobj);
void ftCommon_WallDamage_ProcUpdate(GObj* fighter_gobj);
void ftCommon_WallDamage_SetStatus(GObj* fighter_gobj, Vec3f* angle, Vec3f* pos);
sb32 ftCommon_WallDamage_CheckGoto(GObj* fighter_gobj);

// DamageFall
void ftCommon_DamageFall_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_DamageFall_ProcMap(GObj* fighter_gobj);
void func_ovl3_80143630(GObj* fighter_gobj);
void ftCommon_DamageFall_SetStatusFromDamage(GObj* fighter_gobj);
void ftCommon_DamageFall_SetStatusFromCliffWait(GObj* fighter_gobj);
void func_ovl3_801436F0(GObj* fighter_gobj);

// FallSpecial
void ftCommon_FallSpecial_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_FallSpecial_ProcPhysics(GObj* fighter_gobj);
sb32 ftCommon_FallSpecial_CheckIgnorePass(GObj* fighter_gobj);
void ftCommon_FallSpecial_ProcMap(GObj* fighter_gobj);
void ftCommon_FallSpecial_SetStatus(GObj* fighter_gobj, f32 drift, sb32 unknown, sb32 is_fall_accelerate,
									sb32 is_goto_landing, f32 landing_lag, sb32 is_allow_interrupt);

// Twister
void ftCommon_Twister_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Twister_ProcPhysics(GObj* fighter_gobj);
void ftCommon_Twister_SetStatus(GObj* fighter_gobj, GObj* tornado_gobj);
void ftCommon_Twister_ShootFighter(GObj* fighter_gobj);

// TaruCann
void ftCommon_TaruCann_ProcUpdate(GObj* fighter_gobj);
void ftCommon_TaruCann_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_TaruCann_ProcPhysics(GObj* fighter_gobj);
void ftCommon_TaruCann_SetStatus(GObj* fighter_gobj, GObj* tarucann_gobj);
void ftCommon_TaruCann_ShootFighter(GObj* fighter_gobj);

// Dokan
void ftCommon_DokanStart_UpdateModelYaw(ftStruct* fp);
void ftCommon_DokanStart_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DokanStart_ProcPhysics(GObj* fighter_gobj);
void ftCommon_DokanStart_SetStatus(GObj* fighter_gobj, s32 ground_line_id);
sb32 ftCommon_DokanStart_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_DokanWait_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DokanWait_ProcMap(GObj* fighter_gobj);
void ftCommon_DokanWait_SetStatus(GObj* fighter_gobj);
void ftCommon_DokanEnd_UpdateModelYaw(GObj* fighter_gobj);
void ftCommon_DokanEnd_UpdatePlayerTag(GObj* fighter_gobj);
void ftCommon_DokanEnd_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DokanEnd_SetStatus(GObj* fighter_gobj);
void ftCommon_DokanWalk_SetStatus(GObj* fighter_gobj);

// DownWait / DownBounce
void ftCommon_DownWait_ProcUpdate(GObj* fighter_gobj);
void ftCommon_DownWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_DownWait_SetStatus(GObj* fighter_gobj);
void ftCommon_DownBounce_ProcUpdate(GObj* fighter_gobj);
// Up = 0, Down = 1
sb32 ftCommon_DownBounce_UpOrDown(GObj* fighter_gobj);
void ftCommon_DownBounce_UpdateEffects(GObj* fighter_gobj);
void ftCommon_DownBounce_SetStatus(GObj* fighter_gobj);

// DownStand
void ftCommon_DownStand_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_DownStand_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_DownStand_CheckInterruptCommon(GObj* fighter_gobj);

// PassiveStand
void ftCommon_PassiveStand_SetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommon_PassiveStand_CheckInterruptDamage(GObj* fighter_gobj);

// DownForward / DownBack
void ftCommon_DownForwardOrBack_SetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommon_DownForwardOrBack_CheckInterruptCommon(GObj* fighter_gobj);

// DownAttack
void ftCommon_DownAttack_SetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommon_DownAttack_CheckInterruptDownBounce(GObj* fighter_gobj);
sb32 ftCommon_DownAttack_CheckInterruptDownWait(GObj* fighter_gobj);

// Passive
void ftCommon_Passive_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Passive_CheckInterruptDamage(GObj* fighter_gobj);

// Rebound / ReboundWait
void ftCommon_Rebound_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Rebound_SetStatus(GObj* fighter_gobj);
void ftCommon_ReboundWait_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ReboundWait_SetStatus(GObj* fighter_gobj);

// CliffCatch / CliffWait
void ftCommon_CliffCatch_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffCommon_ProcPhysics(GObj* fighter_gobj);
void ftCommon_CliffCommon_ProcMap(GObj* fighter_gobj);
void ftCommon_CliffCatch_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffCommon_ProcDamage(GObj* fighter_gobj);
void ftCommon_CliffWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_CliffWait_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_CliffWait_CheckFall(GObj* fighter_gobj);

// CliffQuick / CliffSlow / CliffClimb
void ftCommon_CliffQuick_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffSlow_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffQuickOrSlow_SetStatus(GObj* fighter_gobj, s32 status_input);
sb32 ftCommon_CliffClimbOrFall_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_CliffClimbQuick1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffClimbSlow1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffClimbQuick1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffClimbSlow1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffCommon2_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffCommon2_ProcPhysics(GObj* fighter_gobj);
void ftCommon_CliffClimbCommon2_ProcMap(GObj* fighter_gobj);
void ftCommon_CliffAttackEscape2_ProcMap(GObj* fighter_gobj);
void ftCommon_CliffCommon2_UpdateCollData(GObj* fighter_gobj);
void ftCommon_CliffCommon2_InitStatusVars(GObj* fighter_gobj);
void ftCommon_CliffClimbQuick2_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffClimbSlow2_SetStatus(GObj* fighter_gobj);

// CliffAttack
sb32 ftCommon_CliffAttack_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_CliffAttackQuick1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffAttackSlow1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffAttackQuick1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffAttackSlow1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffAttackQuick2_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffAttackSlow2_SetStatus(GObj* fighter_gobj);

// CliffEscape
sb32 ftCommon_CliffEscape_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_CliffEscapeQuick1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffEscapeSlow1_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CliffEscapeQuick1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffEscapeSlow1_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffEscapeQuick2_SetStatus(GObj* fighter_gobj);
void ftCommon_CliffEscapeSlow2_SetStatus(GObj* fighter_gobj);

// LightGet / HeavyGet / LiftWait / LiftTurn
GObj* ftCommon_Get_GetItemPickupGObj(GObj* fighter_gobj, u8 pickup_mask);
void ftCommon_Get_ApplyItemStats(GObj* fighter_gobj);
void ftCommon_Get_DropItem(GObj* fighter_gobj);
void ftCommon_Get_ProcUpdate(GObj* fighter_gobj);
void ftCommon_LightGet_ProcMap(GObj* fighter_gobj);
void ftCommon_HeavyGet_ProcMap(GObj* fighter_gobj);
void ftCommon_HeavyThrow_ProcMap(GObj* fighter_gobj);
void ftCommon_Get_SetStatus(GObj* fighter_gobj, GObj* item_gobj);
sb32 ftCommon_Get_CheckInterruptCommon(GObj* fighter_gobj);
void ftCommon_LiftWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_LiftWait_SetStatus(GObj* fighter_gobj);
void ftCommon_LiftTurn_UpdateModelYaw(ftStruct* fp);
void ftCommon_LiftTurn_ProcUpdate(GObj* fighter_gobj);
void ftCommon_LiftTurn_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_LiftTurn_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_LiftTurn_CheckInterruptLiftWait(GObj* fighter_gobj);

// ItemThrow
void ftCommon_ItemThrow_UpdateModelYaw(GObj* fighter_gobj);
void ftCommon_ItemThrow_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ItemThrow_ProcPhysics(GObj* fighter_gobj);
void ftCommon_ItemThrow_InitCommandVars(ftStruct* fp);
void ftCommon_ItemThrow_InitStatusVars(ftStruct* fp);
void ftCommon_ItemThrow_SetStatus(GObj* fighter_gobj, s32 status_id);
void ftCommon_LightThrow_DecideSetStatus(GObj* fighter_gobj);
void ftCommon_HeavyThrow_DecideSetStatus(GObj* fighter_gobj);
sb32 ftCommon_LightThrow_CheckItemTypeThrow(ftStruct* fp);
sb32 ftCommon_LightThrow_CheckInterruptGuardOnOn(GObj* fighter_gobj);
sb32 ftCommon_LightThrow_CheckInterruptEscape(GObj* fighter_gobj);
sb32 ftCommon_LightThrow_CheckInterruptCommon(GObj* fighter_gobj);

// ItemSwing
void ftCommon_HarisenSwing_ProcHit(GObj* fighter_gobj);
void ftCommon_HarisenSwing_ProcUpdate(GObj* fighter_gobj);
void ftCommon_StarRodSwing_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ItemSwing_SetStatus(GObj* fighter_gobj, s32 swing_type);

// ItemShoot
void ftCommon_LGunShoot_ProcUpdate(GObj* fighter_gobj);
void ftCommon_LGunShoot_ProcAccessory(GObj* fighter_gobj);
void ftCommon_LGunShoot_ProcMap(GObj* fighter_gobj);
void ftCommon_LGunShootAir_ProcMap(GObj* fighter_gobj);
void ftCommon_LGunShootAir_SwitchStatusGround(GObj* fighter_gobj);
void ftCommon_LGunShoot_SwitchStatusAir(GObj* fighter_gobj);
void ftCommon_FireFlowerShoot_ProcUpdate(GObj* fighter_gobj);
void ftCommon_FireFlowerShoot_UpdateAmmoStats(ftStruct* fp, s32 ammo_sub);
void ftCommon_FireFlowerShoot_ProcAccessory(GObj* fighter_gobj);
void ftCommon_FireFlowerShoot_ProcMap(GObj* fighter_gobj);
void ftCommon_FireFlowerShootAir_ProcMap(GObj* fighter_gobj);
void ftCommon_FireFlowerShootAir_SwitchStatusGround(GObj* fighter_gobj);
void ftCommon_FireFlowerShoot_SwitchStatusAir(GObj* fighter_gobj);
void ftCommon_FireFlowerShoot_InitStatusVars(ftStruct* fp);
void ftCommon_ItemShoot_SetStatus(GObj* fighter_gobj);
void ftCommon_ItemShootAir_SetStatus(GObj* fighter_gobj);

// HammerWalk
void ftCommon_HammerWalk_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_HammerWalk_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_HammerWalk_CheckInterruptCommon(GObj* fighter_gobj);

// HammerTurn
void ftCommon_HammerTurn_UpdateModelYaw(GObj* fighter_gobj);
void ftCommon_HammerTurn_ProcUpdate(GObj* fighter_gobj);
void ftCommon_HammerTurn_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_HammerTurn_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_HammerTurn_CheckInterruptCommon(GObj* fighter_gobj);

// HammerKneeBend
void ftCommon_HammerKneeBend_ProcUpdate(GObj* fighter_gobj);
void ftCommon_HammerKneeBend_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_HammerKneeBend_SetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftCommon_HammerKneeBend_CheckInterruptCommon(GObj* fighter_gobj);

// HammerFall
void ftCommon_HammerFall_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_HammerFall_ProcMap(GObj* fighter_gobj);
void ftCommon_HammerFall_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_HammerFall_CheckInterruptDamageFall(GObj* fighter_gobj);
void ftCommon_HammerFall_SetStatusJump(GObj* fighter_gobj);
void ftCommon_HammerFall_SetStatusPass(GObj* fighter_gobj);
sb32 ftCommon_HammerFall_CheckInterruptCommon(GObj*);

// HammerLanding
void ftCommon_HammerLanding_ProcUpdate(GObj* fighter_gobj);
void ftCommon_HammerLanding_SetStatus(GObj* fighter_gobj);

// GuardOn / Guard
void ftCommon_Guard_CheckScheduleRelease(ftStruct* fp);
void ftCommon_GuardOn_SetHitStatusYoshi(GObj* fighter_gobj);
void ftCommon_Guard_SetHitStatusYoshi(GObj* fighter_gobj);
void ftCommon_GuardOff_SetHitStatusYoshi(GObj* fighter_gobj);
void ftCommon_Guard_UpdateShieldVars(GObj* fighter_gobj);
void ftCommon_Guard_UpdateShieldHitbox(ftStruct* fp);
void func_ovl3_80148488(ftStruct* fp);
void func_ovl3_801485CC(DObj* joint, DObjDesc* joint_desc, f32 range);
void func_ovl3_80148664(DObj* joint, DObjDesc* joint_desc, f32 range, Vec3f* scale);
void func_ovl3_80148714(GObj* fighter_gobj);
void func_ovl3_8014889C(GObj* fighter_gobj);
void ftCommon_GuardOn_ProcUpdate(GObj* fighter_gobj);
void ftCommon_GuardCommon_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_GuardOn_SetStatus(GObj* fighter_gobj, s32 slide_frames);
sb32 ftCommon_GuardOn_CheckInterruptSuccess(GObj* fighter_gobj, s32 slide_frames);
sb32 ftCommon_GuardOn_CheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommon_GuardOn_CheckInterruptDashRun(GObj* fighter_gobj, s32 slide_frames);
void ftCommon_Guard_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Guard_SetStatus(GObj* fighter_gobj);

// GuardOff / GuardSetOff
void ftCommon_Guard_SetStatusFromEscape(GObj* fighter_gobj);
sb32 ftCommon_Guard_CheckInterruptEscape(GObj* fighter_gobj);
void ftCommon_GuardOff_ProcUpdate(GObj* fighter_gobj);
void ftCommon_GuardOff_SetStatus(GObj* fighter_gobj);
void ftCommon_GuardSetOff_ProcUpdate(GObj* fighter_gobj);
void ftCommon_GuardSetOff_SetStatus(GObj* fighter_gobj);

// EscapeF / EscapeB
void ftCommon_Escape_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Escape_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_Escape_ProcStatus(GObj* fighter_gobj);

// Samus erroneously calls this without specifying itemthrow_buffer_frames; same story as Link's Bomb?
// void ftCommon_Escape_SetStatus(GObj* fighter_gobj, s32 status_id, s32 itemthrow_buffer_frames); 
s32 ftCommon_Escape_GetStatus(ftStruct* fp);
sb32 ftCommon_Escape_CheckInterruptSpecialNDonkey(GObj* fighter_gobj);
sb32 ftCommon_Escape_CheckInterruptDash(GObj* fighter_gobj);
sb32 ftCommon_Escape_CheckInterruptGuard(GObj* fighter_gobj);

// ShieldBreakFly
void ftCommon_ShieldBreakFly_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ShieldBreakFly_ProcMap(GObj* fighter_gobj);
void ftCommon_ShieldBreakFly_SetStatus(GObj* fighter_gobj);
void ftCommon_ShieldBreakFly_UpdateVarsSetStatus(GObj* fighter_gobj);
void ftCommon_ShieldBreakFlyReflector_SetStatus(GObj* fighter_gobj);

// ShieldBreakFall
void ftCommon_ShieldBreakFall_ProcMap(GObj* fighter_gobj);
void ftCommon_ShieldBreakFall_SetStatus(GObj* fighter_gobj);

// ShieldBreakDown
void ftCommon_ShieldBreakDown_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ShieldBreakDown_SetStatus(GObj* fighter_gobj);

// ShieldBreakStand
void ftCommon_ShieldBreakStand_ProcUpdate(GObj* fighter_gobj);
void ftCommon_ShieldBreakStand_SetStatus(GObj* fighter_gobj);

// FuraFura
void ftCommon_FuraFura_ProcUpdate(GObj* fighter_gobj);
void ftCommon_FuraFura_SetStatus(GObj* fighter_gobj);

// FuraSleep
void ftCommon_FuraSleep_ProcUpdate(GObj* fighter_gobj);
void ftCommon_FuraSleep_SetStatus(GObj* fighter_gobj);

// Catch
void ftCommon_Catch_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Catch_CaptureSetStatusRelease(GObj* fighter_gobj);
void func_ovl3_80149B48(GObj* fighter_gobj); // Unused?
void ftCommon_Catch_ProcMap(GObj* fighter_gobj);
void ftCommon_Catch_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Catch_CheckInterruptGuard(GObj* fighter_gobj);
sb32 ftCommon_Catch_CheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommon_Catch_CheckInterruptDashRun(GObj* fighter_gobj);
sb32 ftCommon_Catch_CheckInterruptAttack11(GObj* fighter_gobj);

// CatchPull / CatchWait
void ftCommon_CatchPull_ProcUpdate(GObj* fighter_gobj);
void ftCommon_CatchPull_SetStatus(GObj* fighter_gobj);
void ftCommon_CatchWait_ProcInterrupt(GObj* fighter_gobj);
void ftCommon_CatchWait_SetStatus(GObj* fighter_gobj);

// ThrowF / ThrowB
void ftCommon_Throw_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Throw_SetStatus(GObj* fighter_gobj, sb32 is_throwf);
sb32 ftCommon_Throw_CheckInterruptCatchWait(GObj* fighter_gobj);
void ftKirby_ThrowFJump_ProcUpdate(GObj* fighter_gobj);
void ftKirby_ThrowFJump_ProcMap(GObj* fighter_gobj);
void ftKirby_ThrowFFall_SetStatus(GObj* fighter_gobj);
void ftKirby_ThrowFLanding_ProcPhysics(GObj* fighter_gobj);
void ftKirby_ThrowFLanding_ProcMap(GObj* fighter_gobj);
void ftKirby_ThrowFLanding_SetStatus(GObj* fighter_gobj);

// CapturePulled
void ftCommon_CapturePulled_MatrixRotateScale(GObj* fighter_gobj, Vec3f* this_pos, Vec3f* rotate);
void ftCommon_Capture_ProcPhysics(GObj* fighter_gobj);
void ftCommon_CapturePulled_ProcMap(GObj* fighter_gobj);
void ftCommon_CapturePulled_ProcCapture(GObj* fighter_gobj, GObj* capture_gobj);

// CaptureWait
void ftCommon_CaptureWait_ProcMap(GObj* fighter_gobj);
void ftCommon_CaptureWait_SetStatus(GObj* fighter_gobj);

// CatchCut / CaptureCut / Shouldered
void ftCommonCaptureApplyCatchKnockback(GObj* fighter_gobj, ftThrowReleaseDesc* throw_release);
void ftCommonCaptureApplyCaptureKnockback(GObj* fighter_gobj, ftThrowReleaseDesc* throw_release);
void ftCommonCaptureTrappedInitBreakoutVars(ftStruct* fp, s32 breakout_wait);
sb32 ftCommonCaptureTrappedUpdateBreakoutVars(ftStruct* fp);
void ftCommonCaptureShoulderedProcInterrupt(GObj* fighter_gobj);
void ftCommonCaptureShoulderedSetStatus(GObj* fighter_gobj);

// CaptureKirby
void ftCommonCaptureKirbyUpdatePositionsMag(GObj* fighter_gobj, Vec3f* dist);
void ftCommonCaptureKirbyUpdatePositionsAll(GObj* fighter_gobj);
void ftCommonCaptureKirbyProcPhysics(GObj* fighter_gobj);
void ftCommonCaptureKirbyProcCapture(GObj* fighter_gobj, GObj* capture_gobj);
void ftCommonCaptureWaitKirbyUpdateBreakoutVars(ftStruct* this_fp, ftStruct* capture_fp);
void ftCommonCaptureWaitKirbyProcMap(GObj* fighter_gobj);
void ftCommonCaptureWaitKirbyProcInterrupt(GObj* fighter_gobj);
void ftCommonCaptureWaitKirbySetStatus(GObj* fighter_gobj);
void ftCommonThrownKirbyEscape(GObj* fighter_gobj);
void ftCommonThrownCommonStarProcHit(GObj* fighter_gobj);
void ftCommonThrownKirbyStarMakeEffect(GObj* fighter_gobj, f32 arg1, f32 arg2);
void ftCommonThrownKirbyStarProcUpdate(GObj* fighter_gobj);
void ftCommonThrownCommonStarUpdatePhysics(GObj* fighter_gobj, f32 decelerate);
void ftCommonThrownKirbyStarProcPhysics(GObj* fighter_gobj);
void ftCommonThrownCommonStarProcMap(GObj* fighter_gobj);
void ftCommonThrownKirbyStarInitStatusVars(GObj* fighter_gobj);
void ftCommonThrownKirbyStarProcStatus(GObj* fighter_gobj);
void ftCommonThrownKirbyStarSetStatus(GObj* fighter_gobj);
void ftCommonThrownCopyStarProcUpdate(GObj* fighter_gobj);
void ftCommonThrownCopyStarProcPhysics(GObj* fighter_gobj);
void ftCommonThrownCopyStarProcStatus(GObj* fighter_gobj);
void ftCommonThrownCopyStarSetStatus(GObj* fighter_gobj);

// CaptureYoshi / YoshiEgg
void func_ovl3_8014C770(); // Unused
void ftCommonCaptureYoshiProcPhysics(GObj* fighter_gobj);
void ftCommonCaptureYoshiProcCapture(GObj* fighter_gobj, GObj* capture_gobj);
void ftCommonYoshiEggMakeEffect(GObj* fighter_gobj);
void ftCommonYoshiEggProcUpdate(GObj* fighter_gobj);
void ftCommonYoshiEggProcInterrupt(GObj* fighter_gobj);
void ftCommonYoshiEggProcPhysics(GObj* fighter_gobj);
void ftCommonYoshiEggProcMap(GObj* fighter_gobj);
void ftCommonYoshiEggProcTrap(GObj* fighter_gobj);
void ftCommonYoshiEggSetHurtCollisions(GObj* fighter_gobj);
void ftCommonYoshiEggProcStatus(GObj* fighter_gobj);
void ftCommonYoshiEggSetStatus(GObj* fighter_gobj);

// CaptureCaptain
void ftCommonCaptureCaptainUpdatePositions(GObj* fighter_gobj, GObj* capture_gobj, Vec3f* pos);
void ftCommonCaptureCaptainProcPhysics(GObj* fighter_gobj);
void ftCommonCaptureCaptainProcCapture(GObj* fighter_gobj, GObj* capture_gobj);
void ftCommonCaptureCaptainRelease(GObj* fighter_gobj);

// Thrown
void ftCommon_Thrown_ProcUpdate(GObj* fighter_gobj);
void ftCommon_Thrown_ProcPhysics(GObj* fighter_gobj);
void ftCommon_Thrown_ProcMap(GObj* fighter_gobj);
void ftCommon_Thrown_SetStatusQueue(GObj* fighter_gobj, s32 status_id_new, s32 status_id_queue);
void ftCommon_Thrown_SetStatusImmediate(GObj* fighter_gobj, s32 status_id);

// Thrown2
void ftCommon_Thrown_ReleaseFighterLoseGrip(GObj* fighter_gobj);
void ftCommon_Thrown_DecideFighterLoseGrip(GObj* fighter_gobj, GObj* interact_gobj);
void func_ovl3_8014AF2C(GObj* fighter_gobj);
void ftCommon_Thrown_ProcStatus(GObj* fighter_gobj);
void ftCommon_Thrown_ReleaseThrownUpdateStats(GObj* fighter_gobj, s32 lr, s32 script_index, sb32 is_proc_status);
void ftCommon_Thrown_UpdateDamageStats(ftStruct* this_fp);
void ftCommon_Thrown_SetStatusDamageRelease(GObj* fighter_gobj);
void ftCommon_Thrown_SetStatusNoDamageRelease(GObj* fighter_gobj);

// Appeal
void ftCommonAppealProcInterrupt(GObj* fighter_gobj);
void ftCommonAppealSetStatus(GObj* fighter_gobj);
sb32 ftCommonAppealCheckInterruptCommon(GObj* fighter_gobj);

// Attack11 / Attack12 / Attack13
void ftCommonAttack11ProcUpdate(GObj* fighter_gobj);
void ftCommonAttack12ProcUpdate(GObj* fighter_gobj);
void ftCommonAttack13ProcUpdate(GObj* fighter_gobj);
void ftCommonAttack11ProcInterrupt(GObj* fighter_gobj);
void ftCommonAttack12ProcInterrupt(GObj* fighter_gobj);
void ftCommonAttack13ProcInterrupt(GObj* fighter_gobj);
void ftCommonAttack11ProcStatus(GObj* fighter_gobj);
void ftCommonAttack11SetStatus(GObj* fighter_gobj);
void ftCommonAttack12SetStatus(GObj* fighter_gobj);
void ftCommonAttack13SetStatus(GObj* fighter_gobj);
sb32 ftCommon_Attack1_CheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommonAttack11CheckGoto(GObj* fighter_gobj);
sb32 ftCommonAttack12CheckGoto(GObj* fighter_gobj);
sb32 ftCommonAttack13CheckGoto(GObj* fighter_gobj);

// Attack100Start / Attack100Loop / Attack100End
void ftCommonAttack100StartProcUpdate(GObj* fighter_gobj);
void ftCommonAttack100StartSetStatus(GObj* fighter_gobj);
void ftCommonAttack100LoopKirbyUpdateEffect(ftStruct* fp);
void ftCommonAttack100LoopProcUpdate(GObj* fighter_gobj);
void ftCommonAttack100LoopProcInterrupt(GObj* fighter_gobj);
void ftCommonAttack100LoopSetStatus(GObj* fighter_gobj);
void ftCommonAttack100EndSetStatus(GObj* fighter_gobj);
sb32 ftCommonAttack100StartCheckInterruptCommon(GObj* fighter_gobj);

// AttackDash
void ftCommonAttackDashSetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackDashCheckInterruptCommon(GObj* fighter_gobj);

// AttackS3
void ftCommonAttackS3SetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackS3CheckInterruptCommon(GObj* fighter_gobj);

// AttackHi3
void ftCommonAttackHi3SetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackHi3CheckInterruptCommon(GObj* fighter_gobj);

// AttackLw3
void ftCommonAttackLw3ProcUpdate(GObj* fighter_gobj);
void ftCommonAttackLw3ProcInterrupt(GObj* fighter_gobj);
sb32 ftCommonAttackLw3CheckInterruptSelf(GObj* fighter_gobj);
void ftCommonAttackLw3InitStatusVars(GObj* fighter_gobj);
void ftCommonAttackLw3SetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackLw3CheckInterruptCommon(GObj* fighter_gobj);

// AttackS4
void ftCommonAttackS4ProcUpdate(GObj* fighter_gobj);
void ftCommonAttackS4SetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackS4CheckInterruptDash(GObj* fighter_gobj);
sb32 ftCommonAttackS4CheckInterruptTurn(GObj* fighter_gobj);
sb32 ftCommonAttackS4CheckInterruptCommon(GObj* fighter_gobj);

// AttackHi4
void ftCommonAttackHi4SetStatus(GObj* fighter_gobj);
sb32 ftCommonAttackHi4CheckInputSuccess(ftStruct* fp);
sb32 ftCommonAttackHi4CheckInterruptMain(ftStruct* fp);
sb32 ftCommonAttackHi4CheckInterruptKneeBend(GObj* fighter_gobj);
sb32 ftCommonAttackHi4CheckInterruptCommon(GObj* fighter_gobj);

// AttackLw4
void ftCommon_AttackLw4_SetStatus(GObj* fighter_gobj);
sb32 ftCommon_AttackLw4_CheckInputSuccess(ftStruct* fp);
sb32 ftCommon_AttackLw4_CheckInterruptMain(ftStruct* fp);
sb32 ftCommon_AttackLw4_CheckInterruptSquat(GObj* fighter_gobj);
sb32 ftCommon_AttackLw4_CheckInterruptCommon(GObj* fighter_gobj);

// AttackAirN / AttackAirF / AttackAirB / AttackAirHi / AttackAirLw
void ftCommon_AttackAirLw_ProcHit(GObj* fighter_gobj);
void ftCommon_AttackAirLw_ProcUpdate(GObj* fighter_gobj);
void ftCommon_AttackAir_ProcMap(GObj* fighter_gobj);
sb32 ftCommon_AttackAir_CheckInterruptCommon(GObj* fighter_gobj);

// LandingAirN / LandingAirF / LandingAirB / LandingAirHi / LandingAirLw
void ftCommonLandingAirSetStatus(GObj* fighter_gobj);

// SpecialN
extern void ftKirbySpecialNSetStatusSelect(GObj* fighter_gobj);
extern sb32 ftCommonSpecialNCheckInterruptCommon(GObj* fighter_gobj);

// SpecialHi
extern sb32 ftCommonSpecialHiCheckInterruptCommon(GObj* fighter_gobj);

// SpecialLw
extern sb32 ftCommonSpecialLwCheckInterruptCommon(GObj* fighter_gobj);

// SpecialAirN / SpecialAirHi / SpecialAirLw
extern void ftKirbySpecialAirNSetStatusSelect(GObj* fighter_gobj);
extern sb32 ftCommonSpecialAirCheckInterruptCommon(GObj* fighter_gobj);

#endif
