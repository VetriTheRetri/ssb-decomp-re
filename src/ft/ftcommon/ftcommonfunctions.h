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
sb32 ftCommonSquatCheckGotoPass(GObj* fighter_gobj);
void ftCommonSquatProcUpdate(GObj* fighter_gobj);
void ftCommonSquatProcInterrupt(GObj* fighter_gobj);
void ftCommonSquatSetStatusNoPass(GObj* fighter_gobj);
void ftCommonSquatSetStatusPass(GObj* fighter_gobj);
sb32 ftCommonSquatCheckInterruptCommon(GObj* fighter_gobj);
void ftCommonSquatWaitProcUpdate(GObj* fighter_gobj);
void ftCommonSquatWaitProcInterrupt(GObj* fighter_gobj);
void ftCommonSquatWaitSetStatus(GObj* fighter_gobj);
void ftCommonSquatWaitSetStatusNoPass(GObj* fighter_gobj);
sb32 ftCommonSquatWaitCheckInterruptLanding(GObj* fighter_gobj);
void ftCommonSquatRvProcInterrupt(GObj* fighter_gobj);
void ftCommonSquatRvSetStatus(GObj* fighter_gobj);
sb32 ftCommonSquatRvCheckInterruptSquatWait(GObj* fighter_gobj);

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
void ftCommonDamageFallProcInterrupt(GObj* fighter_gobj);
void ftCommonDamageFallProcMap(GObj* fighter_gobj);
void ftCommonDamageFallClampRumble(GObj* fighter_gobj);
void ftCommonDamageFallSetStatusFromDamage(GObj* fighter_gobj);
void ftCommonDamageFallSetStatusFromCliffWait(GObj* fighter_gobj);
void func_ovl3_801436F0(GObj* fighter_gobj);

// FallSpecial
void ftCommonFallSpecialProcInterrupt(GObj* fighter_gobj);
void ftCommonFallSpecialProcPhysics(GObj* fighter_gobj);
sb32 ftCommonFallSpecialCheckIgnorePass(GObj* fighter_gobj);
void ftCommonFallSpecialProcMap(GObj* fighter_gobj);
void ftCommonFallSpecialSetStatus(GObj* fighter_gobj, f32 drift, sb32 unknown, sb32 is_fall_accelerate,
									sb32 is_goto_landing, f32 landing_lag, sb32 is_allow_interrupt);

// Twister
void ftCommonTwisterProcUpdate(GObj* fighter_gobj);
void ftCommonTwisterProcPhysics(GObj* fighter_gobj);
void ftCommonTwisterSetStatus(GObj* fighter_gobj, GObj* tornado_gobj);
void ftCommonTwisterShootFighter(GObj* fighter_gobj);

// TaruCann
void ftCommonTaruCannProcUpdate(GObj* fighter_gobj);
void ftCommonTaruCannProcInterrupt(GObj* fighter_gobj);
void ftCommonTaruCannProcPhysics(GObj* fighter_gobj);
void ftCommonTaruCannSetStatus(GObj* fighter_gobj, GObj* tarucann_gobj);
void ftCommonTaruCannShootFighter(GObj* fighter_gobj);

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
void ftCommonDownWaitProcUpdate(GObj* fighter_gobj);
void ftCommonDownWaitProcInterrupt(GObj* fighter_gobj);
void ftCommonDownWaitSetStatus(GObj* fighter_gobj);
void ftCommonDownBounceProcUpdate(GObj* fighter_gobj);
// Up = 0, Down = 1
sb32 ftCommonDownBounceCheckUpOrDown(GObj* fighter_gobj);
void ftCommonDownBounceUpdateEffects(GObj* fighter_gobj);
void ftCommonDownBounceSetStatus(GObj* fighter_gobj);

// DownStand
void ftCommonDownStandProcInterrupt(GObj* fighter_gobj);
void ftCommonDownStandSetStatus(GObj* fighter_gobj);
sb32 ftCommonDownStandCheckInterruptCommon(GObj* fighter_gobj);

// PassiveStand
void ftCommonPassiveStandSetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommonPassiveStandCheckInterruptDamage(GObj* fighter_gobj);

// DownForward / DownBack
void ftCommonDownForwardOrBackSetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommonDownForwardOrBackCheckInterruptCommon(GObj* fighter_gobj);

// DownAttack
void ftCommonDownAttackSetStatus(GObj* fighter_gobj, s32 status_id);
sb32 ftCommonDownAttackCheckInterruptDownBounce(GObj* fighter_gobj);
sb32 ftCommonDownAttackCheckInterruptDownWait(GObj* fighter_gobj);

// Passive
void ftCommonPassiveSetStatus(GObj* fighter_gobj);
sb32 ftCommonPassiveCheckInterruptDamage(GObj* fighter_gobj);

// Rebound / ReboundWait
void ftCommonReboundProcUpdate(GObj* fighter_gobj);
void ftCommonReboundSetStatus(GObj* fighter_gobj);
void ftCommonReboundWaitProcUpdate(GObj* fighter_gobj);
void ftCommonReboundWaitSetStatus(GObj* fighter_gobj);

// CliffCatch / CliffWait
void ftCommonCliffCatchProcUpdate(GObj* fighter_gobj);
void ftCommonCliffCommonProcPhysics(GObj* fighter_gobj);
void ftCommonCliffCommonProcMap(GObj* fighter_gobj);
void ftCommonCliffCatchSetStatus(GObj* fighter_gobj);
void ftCommonCliffCommonProcDamage(GObj* fighter_gobj);
void ftCommonCliffWaitProcInterrupt(GObj* fighter_gobj);
void ftCommonCliffWaitSetStatus(GObj* fighter_gobj);
sb32 ftCommonCliffWaitCheckFall(GObj* fighter_gobj);

// CliffQuick / CliffSlow / CliffClimb
void ftCommonCliffQuickProcUpdate(GObj* fighter_gobj);
void ftCommonCliffSlowProcUpdate(GObj* fighter_gobj);
void ftCommonCliffQuickOrSlowSetStatus(GObj* fighter_gobj, s32 status_input);
sb32 ftCommonCliffClimbOrFallCheckInterruptCommon(GObj* fighter_gobj);
void ftCommonCliffClimbQuick1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffClimbSlow1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffClimbQuick1SetStatus(GObj* fighter_gobj);
void ftCommonCliffClimbSlow1SetStatus(GObj* fighter_gobj);
void ftCommonCliffCommon2ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffCommon2ProcPhysics(GObj* fighter_gobj);
void ftCommonCliffClimbCommon2ProcMap(GObj* fighter_gobj);
void ftCommon_CliffAttackEscape2_ProcMap(GObj* fighter_gobj);
void ftCommonCliffCommon2UpdateCollData(GObj* fighter_gobj);
void ftCommonCliffCommon2InitStatusVars(GObj* fighter_gobj);
void ftCommonCliffClimbQuick2SetStatus(GObj* fighter_gobj);
void ftCommonCliffClimbSlow2SetStatus(GObj* fighter_gobj);

// CliffAttack
sb32 ftCommonCliffAttackCheckInterruptCommon(GObj* fighter_gobj);
void ftCommonCliffAttackQuick1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffAttackSlow1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffAttackQuick1SetStatus(GObj* fighter_gobj);
void ftCommonCliffAttackSlow1SetStatus(GObj* fighter_gobj);
void ftCommonCliffAttackQuick2SetStatus(GObj* fighter_gobj);
void ftCommonCliffAttackSlow2SetStatus(GObj* fighter_gobj);

// CliffEscape
sb32 ftCommonCliffEscapeCheckInterruptCommon(GObj* fighter_gobj);
void ftCommonCliffEscapeQuick1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffEscapeSlow1ProcUpdate(GObj* fighter_gobj);
void ftCommonCliffEscapeQuick1SetStatus(GObj* fighter_gobj);
void ftCommonCliffEscapeSlow1SetStatus(GObj* fighter_gobj);
void ftCommonCliffEscapeQuick2SetStatus(GObj* fighter_gobj);
void ftCommonCliffEscapeSlow2SetStatus(GObj* fighter_gobj);

// LightGet / HeavyGet / LiftWait / LiftTurn
GObj* ftCommonGetFindItemPickupGObj(GObj* fighter_gobj, u8 pickup_mask);
void ftCommonLightGetProcDamage(GObj* fighter_gobj);
void ftCommonHeavyGetProcDamage(GObj* fighter_gobj);
void ftCommonGetProcUpdate(GObj* fighter_gobj);
void ftCommonLightGetProcMap(GObj* fighter_gobj);
void ftCommonHeavyGetProcMap(GObj* fighter_gobj);
void ftCommonHeavyThrowProcMap(GObj* fighter_gobj);
void ftCommonGetSetStatus(GObj* fighter_gobj, GObj* item_gobj);
sb32 ftCommonGetCheckInterruptCommon(GObj* fighter_gobj);
void ftCommonLiftWaitProcInterrupt(GObj* fighter_gobj);
void ftCommonLiftWaitSetStatus(GObj* fighter_gobj);
void ftCommonLiftTurnUpdateModelYaw(ftStruct* fp);
void ftCommonLiftTurnProcUpdate(GObj* fighter_gobj);
void ftCommonLiftTurnProcInterrupt(GObj* fighter_gobj);
void ftCommonLiftTurnSetStatus(GObj* fighter_gobj);
sb32 ftCommonLiftTurnCheckInterruptLiftWait(GObj* fighter_gobj);

// ItemThrow
void ftCommonItemThrowUpdateModelYaw(GObj* fighter_gobj);
void ftCommonItemThrowProcUpdate(GObj* fighter_gobj);
void ftCommonItemThrowProcPhysics(GObj* fighter_gobj);
void ftCommonItemThrowInitCommandVars(ftStruct* fp);
void ftCommonItemThrowInitStatusVars(ftStruct* fp);
void ftCommonItemThrowSetStatus(GObj* fighter_gobj, s32 status_id);
void ftCommonLightThrowDecideSetStatus(GObj* fighter_gobj);
void ftCommonHeavyThrowDecideSetStatus(GObj* fighter_gobj);
sb32 ftCommonLightThrowCheckItemTypeThrow(ftStruct* fp);
sb32 ftCommonLightThrowCheckInterruptGuardOnOn(GObj* fighter_gobj);
sb32 ftCommonLightThrowCheckInterruptEscape(GObj* fighter_gobj);
sb32 ftCommonHeavyThrowCheckInterruptCommon(GObj* fighter_gobj);

// ItemSwing
void ftCommonHarisenSwingProcHit(GObj* fighter_gobj);
void ftCommonHarisenSwingProcUpdate(GObj* fighter_gobj);
void ftCommonStarRodSwingProcUpdate(GObj* fighter_gobj);
void ftCommonItemSwingSetStatus(GObj* fighter_gobj, s32 swing_type);

// ItemShoot
void ftCommonLGunShootProcUpdate(GObj* fighter_gobj);
void ftCommonLGunShootProcAccessory(GObj* fighter_gobj);
void ftCommonLGunShootProcMap(GObj* fighter_gobj);
void ftCommonLGunShootAirProcMap(GObj* fighter_gobj);
void ftCommonLGunShootAirSwitchStatusGround(GObj* fighter_gobj);
void ftCommonLGunShootSwitchStatusAir(GObj* fighter_gobj);
void ftCommonFireFlowerShootProcUpdate(GObj* fighter_gobj);
void ftCommonFireFlowerShootUpdateAmmoStats(ftStruct* fp, s32 ammo_sub);
void ftCommonFireFlowerShootProcAccessory(GObj* fighter_gobj);
void ftCommonFireFlowerShootProcMap(GObj* fighter_gobj);
void ftCommonFireFlowerShootAirProcMap(GObj* fighter_gobj);
void ftCommonFireFlowerShootAirSwitchStatusGround(GObj* fighter_gobj);
void ftCommonFireFlowerShootSwitchStatusAir(GObj* fighter_gobj);
void ftCommonFireFlowerShootInitStatusVars(ftStruct* fp);
void ftCommonItemShootSetStatus(GObj* fighter_gobj);
void ftCommonItemShootAirSetStatus(GObj* fighter_gobj);

// HammerWalk
void ftCommonHammerWalkProcInterrupt(GObj* fighter_gobj);
void ftCommonHammerWalkSetStatus(GObj* fighter_gobj);
sb32 ftCommonHammerWalkCheckInterruptCommon(GObj* fighter_gobj);

// HammerTurn
void ftCommonHammerTurnUpdateModelYaw(GObj* fighter_gobj);
void ftCommonHammerTurnProcUpdate(GObj* fighter_gobj);
void ftCommonHammerTurnProcInterrupt(GObj* fighter_gobj);
void ftCommonHammerTurnSetStatus(GObj* fighter_gobj);
sb32 ftCommonHammerTurnCheckInterruptCommon(GObj* fighter_gobj);

// HammerKneeBend
void ftCommonHammerKneeBendProcUpdate(GObj* fighter_gobj);
void ftCommonHammerKneeBendProcInterrupt(GObj* fighter_gobj);
void ftCommonHammerKneeBendSetStatus(GObj* fighter_gobj, s32 input_source);
sb32 ftCommonHammerKneeBendCheckInterruptCommon(GObj* fighter_gobj);

// HammerFall
void ftCommonHammerFallProcInterrupt(GObj* fighter_gobj);
void ftCommonHammerFallProcMap(GObj* fighter_gobj);
void ftCommonHammerFallSetStatus(GObj* fighter_gobj);
sb32 ftCommonHammerFallCheckInterruptDamageFall(GObj* fighter_gobj);
void ftCommonHammerFallSetStatusJump(GObj* fighter_gobj);
void ftCommonHammerFallSetStatusPass(GObj* fighter_gobj);
sb32 ftCommonHammerFallCheckInterruptCommon(GObj*);

// HammerLanding
void ftCommonHammerLandingProcUpdate(GObj* fighter_gobj);
void ftCommonHammerLandingSetStatus(GObj* fighter_gobj);

// GuardOn / Guard
void ftCommonGuardCheckScheduleRelease(ftStruct* fp);
void ftCommonGuardOnSetHitStatusYoshi(GObj* fighter_gobj);
void ftCommonGuardSetHitStatusYoshi(GObj* fighter_gobj);
void ftCommonGuardOffSetHitStatusYoshi(GObj* fighter_gobj);
void ftCommonGuardUpdateShieldVars(GObj* fighter_gobj);
void ftCommonGuardUpdateShieldHitbox(ftStruct* fp);
void ftCommonGuardUpdateShieldAngle(ftStruct* fp);
void ftCommonGuardGetJointTransform(DObj* joint, DObjDesc* joint_desc, f32 range);
void ftCommonGuardGetJointTransformScale(DObj* joint, DObjDesc* joint_desc, f32 range, Vec3f* scale);
void ftCommonGuardUpdateJoints(GObj* fighter_gobj);
void ftCommonGuardInitJoints(GObj* fighter_gobj);
void ftCommonGuardOnProcUpdate(GObj* fighter_gobj);
void ftCommonGuardCommonProcInterrupt(GObj* fighter_gobj);
void ftCommonGuardOnSetStatus(GObj* fighter_gobj, s32 slide_frames);
sb32 ftCommonGuardOnCheckInterruptSuccess(GObj* fighter_gobj, s32 slide_frames);
sb32 ftCommonGuardOnCheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommonGuardOnCheckInterruptDashRun(GObj* fighter_gobj, s32 slide_frames);
void ftCommonGuardProcUpdate(GObj* fighter_gobj);
void ftCommonGuardSetStatus(GObj* fighter_gobj);

// GuardOff / GuardSetOff
void ftCommonGuardSetStatusFromEscape(GObj* fighter_gobj);
sb32 ftCommonGuardCheckInterruptEscape(GObj* fighter_gobj);
void ftCommonGuardOffProcUpdate(GObj* fighter_gobj);
void ftCommonGuardOffSetStatus(GObj* fighter_gobj);
void ftCommon_GuardSetOff_ProcUpdate(GObj* fighter_gobj);
void ftCommon_GuardSetOff_SetStatus(GObj* fighter_gobj);

// EscapeF / EscapeB
void ftCommonEscapeProcUpdate(GObj* fighter_gobj);
void ftCommonEscapeProcInterrupt(GObj* fighter_gobj);
void ftCommonEscapeProcStatus(GObj* fighter_gobj);

// Samus erroneously calls this without specifying itemthrow_buffer_frames; same story as Link's Bomb?
// void ftCommonEscapeSetStatus(GObj* fighter_gobj, s32 status_id, s32 itemthrow_buffer_frames); 
s32 ftCommonEscapeGetStatus(ftStruct* fp);
sb32 ftCommonEscapeCheckInterruptSpecialNDonkey(GObj* fighter_gobj);
sb32 ftCommonEscapeCheckInterruptDash(GObj* fighter_gobj);
sb32 ftCommonEscapeCheckInterruptGuard(GObj* fighter_gobj);

// ShieldBreakFly
void ftCommonShieldBreakFlyProcUpdate(GObj* fighter_gobj);
void ftCommonShieldBreakFlyProcMap(GObj* fighter_gobj);
void ftCommonShieldBreakFlySetStatus(GObj* fighter_gobj);
void ftCommonShieldBreakFlyCommonSetStatus(GObj* fighter_gobj);
void ftCommonShieldBreakFlyReflectorSetStatus(GObj* fighter_gobj);

// ShieldBreakFall
void ftCommonShieldBreakFallProcMap(GObj* fighter_gobj);
void ftCommonShieldBreakFallSetStatus(GObj* fighter_gobj);

// ShieldBreakDown
void ftCommonShieldBreakDownProcUpdate(GObj* fighter_gobj);
void ftCommonShieldBreakDownSetStatus(GObj* fighter_gobj);

// ShieldBreakStand
void ftCommonShieldBreakStandProcUpdate(GObj* fighter_gobj);
void ftCommonShieldBreakStandSetStatus(GObj* fighter_gobj);

// FuraFura
void ftCommonFuraFuraProcUpdate(GObj* fighter_gobj);
void ftCommonFuraFuraSetStatus(GObj* fighter_gobj);

// FuraSleep
void ftCommonFuraSleepProcUpdate(GObj* fighter_gobj);
void ftCommonFuraSleepSetStatus(GObj* fighter_gobj);

// Catch
void ftCommonCatchProcUpdate(GObj* fighter_gobj);
void ftCommonCatchCaptureSetStatusRelease(GObj* fighter_gobj);
void func_ovl3_80149B48(GObj* fighter_gobj); // Unused?
void ftCommonCatchProcMap(GObj* fighter_gobj);
void ftCommonCatchSetStatus(GObj* fighter_gobj);
sb32 ftCommonCatchCheckInterruptGuard(GObj* fighter_gobj);
sb32 ftCommonCatchCheckInterruptCommon(GObj* fighter_gobj);
sb32 ftCommonCatchCheckInterruptDashRun(GObj* fighter_gobj);
sb32 ftCommonCatchCheckInterruptAttack11(GObj* fighter_gobj);

// CatchPull / CatchWait
void ftCommonCatchPullProcUpdate(GObj* fighter_gobj);
void ftCommonCatchPullProcCatch(GObj* fighter_gobj);
void ftCommonCatchWaitProcInterrupt(GObj* fighter_gobj);
void ftCommonCatchWaitSetStatus(GObj* fighter_gobj);

// ThrowF / ThrowB
void ftCommonThrowProcUpdate(GObj* fighter_gobj);
void ftCommonThrowSetStatus(GObj* fighter_gobj, sb32 is_throwf);
sb32 ftCommonThrowCheckInterruptCatchWait(GObj* fighter_gobj);

// CapturePulled
void ftCommonCapturePulledRotateScale(GObj* fighter_gobj, Vec3f* this_pos, Vec3f* rotate);
void ftCommonCapturePulledProcPhysics(GObj* fighter_gobj);
void ftCommonCapturePulledProcMap(GObj* fighter_gobj);
void ftCommonCapturePulledProcCapture(GObj* fighter_gobj, GObj* capture_gobj);

// CaptureWait
void ftCommonCaptureWaitProcMap(GObj* fighter_gobj);
void ftCommonCaptureWaitSetStatus(GObj* fighter_gobj);

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
void ftCommonThrownProcUpdate(GObj* fighter_gobj);
void ftCommonThrownProcPhysics(GObj* fighter_gobj);
void ftCommonThrownProcMap(GObj* fighter_gobj);
void ftCommonThrownSetStatusQueue(GObj* fighter_gobj, s32 status_id_new, s32 status_id_queue);
void ftCommonThrownSetStatusImmediate(GObj* fighter_gobj, s32 status_id);

// Thrown2
void ftCommonThrownReleaseFighterLoseGrip(GObj* fighter_gobj);
void ftCommonThrownDecideFighterLoseGrip(GObj* fighter_gobj, GObj* interact_gobj);
void func_ovl3_8014AF2C(GObj* fighter_gobj);
void ftCommonThrownProcStatus(GObj* fighter_gobj);
void ftCommonThrownReleaseThrownUpdateStats(GObj* fighter_gobj, s32 lr, s32 script_index, sb32 is_proc_status);
void ftCommonThrownUpdateDamageStats(ftStruct* this_fp);
void ftCommonThrownSetStatusDamageRelease(GObj* fighter_gobj);
void ftCommonThrownSetStatusNoDamageRelease(GObj* fighter_gobj);

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
sb32 ftCommonAttack1CheckInterruptCommon(GObj* fighter_gobj);
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
