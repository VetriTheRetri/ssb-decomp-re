#ifndef _FTCOMMON_FUNCTIONS_H_
#define _FTCOMMON_FUNCTIONS_H_

#include <ssb_types.h>
#include <ft/ftdef.h>
#include <sys/objdef.h>

// DeadDown / DeadLeft / DeadRight / DeadUpStar / DeadUpFall
void func_ovl3_8013BC60(u16 sfx_id);
void func_ovl3_8013BC8C(ftStruct *this_fp);
void func_ovl3_8013BC8C(ftStruct *this_fp);
void ftCommon_Dead_UpdateScore(ftStruct *this_fp);
void ftCommon_Dead_CheckRebirth(GObj *fighter_gobj);
void ftCommon_Dead_ResetCommonVars(GObj *fighter_gobj);
void ftCommon_Dead_ClearSpecialStats(GObj *fighter_gobj);
void ftCommon_DeadCommon_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Dead_InitStatusVars(GObj *fighter_gobj);
void ftCommon_DeadDown_SetStatus(GObj *fighter_gobj);
void ftCommon_DeadRight_SetStatus(GObj *fighter_gobj);
void ftCommon_DeadLeft_SetStatus(GObj *fighter_gobj);
void ftCommon_DeadUpStar_ProcUpdate(GObj *fighter_gobj);
void ftCommon_DeadUpStar_SetStatus(GObj *fighter_gobj);
void ftCommon_DeadUpFall_ProcUpdate(GObj *fighter_gobj);
void ftCommon_DeadUpFall_SetStatus(GObj *fighter_gobj);
bool32 ftCommon_Dead_CheckInterruptCommon(GObj *fighter_gobj);

// Sleep
bool32 ftCommon_Sleep_CheckIgnorePauseMenu(GObj *fighter_gobj);
void ftCommon_Sleep_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Sleep_SetStatus(GObj *fighter_gobj);

// Entry / Appear
void ftCommon_Entry_SetStatus(GObj *fighter_gobj);
void ftCommon_EntryNull_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Appear_UpdateEffects(GObj *fighter_gobj);
void ftCommon_Appear_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Appear_ProcPhysics(GObj *fighter_gobj);
void ftCommon_Appear_InitStatusVars(GObj *fighter_gobj);
void ftCommon_Appear_SetStatus(GObj *fighter_gobj);
void ftCommon_Appear_SetPosition(GObj *fighter_gobj); // This runs when spawning multi-character team members in VS mode I suppose?

// RebirthDown / RebirthStand / RebirthWait
void ftCommon_RebirthDown_SetStatus(GObj *this_gobj);
void ftCommon_RebirthCommon_DecHaloTimers(GObj *fighter_gobj);
void ftCommon_RebirthDown_ProcUpdate(GObj *fighter_gobj);
void ftCommon_RebirthCommon_ProcMap(GObj *fighter_gobj);
void ftCommon_RebirthStand_ProcUpdate(GObj *fighter_gobj);
void ftCommon_RebirthStand_SetStatus(GObj *fighter_gobj);
void ftCommon_RebirthWait_ProcUpdate(GObj *fighter_gobj);
void ftCommon_RebirthWait_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_RebirthWait_SetStatus(GObj *fighter_gobj);

// Wait
void ftCommon_Wait_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Wait_SetStatus(GObj *fighter_gobj);
bool32 ftCommon_Wait_CheckInputSuccess(GObj *fighter_gobj);
bool32 ftCommon_Wait_CheckInterruptCommon(GObj *fighter_gobj);

// WalkSlow / WalkMiddle / WalkFast
f32 ftCommon_Walk_GetWalkAnimSpeed(ftStruct *fp, s32 status_id);
s32 ftCommon_Walk_GetWalkStatus(s8 stick_range_x);
void ftCommon_Walk_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Walk_ProcPhysics(GObj *fighter_gobj);
void ftCommon_Walk_SetStatusParam(GObj *fighter_gobj, f32 anim_frame_begin);
void ftCommon_Walk_SetStatusDefault(GObj *fighter_gobj);
bool32 ftCommon_Walk_CheckInputSuccess(GObj *fighter_gobj);
bool32 ftCommon_Walk_CheckInterruptCommon(GObj *fighter_gobj);

// Dash
void ftCommon_Dash_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Dash_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Dash_ProcPhysics(GObj *fighter_gobj);
void ftCommon_Dash_ProcMap(GObj *fighter_gobj);
void ftCommon_Dash_SetStatus(GObj *fighter_gobj, u32 flag);
bool32 ftCommon_Dash_CheckInterruptCommon(GObj *fighter_gobj);
bool32 ftCommon_Dash_CheckTurn(GObj *fighter_gobj);

// Run
void ftCommon_Run_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Run_SetStatus(GObj *fighter_gobj);
bool32 ftCommon_Run_CheckInterruptDash(GObj *fighter_gobj);

// RunBrake
void ftCommon_RunBrake_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_RunBrake_ProcPhysics(GObj *fighter_gobj);
void ftCommon_RunBrake_SetStatus(GObj *fighter_gobj, u32 flag);
bool32 ftCommon_RunBrake_CheckInterruptRun(GObj *fighter_gobj);
bool32 ftCommon_RunBrake_CheckInterruptTurnRun(GObj *fighter_gobj);

// Turn
void ftCommon_Turn_ProcUpdate(GObj *fighter_gobj);
void ftCommon_Turn_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Turn_SetStatus(GObj *fighter_gobj, s32 lr_dash);
void ftCommon_Turn_SetStatusCenter(GObj *fighter_gobj);
void ftCommon_Turn_SetStatusInvertLR(GObj *fighter_gobj);
bool32 ftCommon_Turn_CheckInputSuccess(GObj *fighter_gobj);
bool32 ftCommon_Turn_CheckInterruptCommon(GObj *fighter_gobj);

// TurnRun
void ftCommon_TurnRun_ProcUpdate(GObj *fighter_gobj);
void ftCommon_TurnRun_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_TurnRun_SetStatus(GObj *fighter_gobj);
bool32 ftCommon_TurnRun_CheckInterruptRun(GObj *fighter_gobj);

// KneeBend / GuardKneeBend
void ftCommon_KneeBend_ProcUpdate(GObj *fighter_gobj);
void ftCommon_KneeBend_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_KneeBend_SetStatusParam(GObj *fighter_gobj, s32 status_id, s32 input_source);
void ftCommon_KneeBend_SetStatus(GObj *fighter_gobj, s32 input_source);
void ftCommon_GuardKneeBend_SetStatus(GObj *fighter_gobj, s32 input_source);
bool32 ftCommon_KneeBend_CheckButtonTap(ftStruct *fp);
s32 ftCommon_KneeBend_GetInputTypeCommon(ftStruct *fp);
bool32 ftCommon_KneeBend_CheckInterruptCommon(GObj *fighter_gobj);
s32 ftCommon_KneeBend_GetInputTypeRun(ftStruct *fp);
bool32 ftCommon_KneeBend_CheckInterruptRun(GObj *fighter_gobj);
bool32 ftCommon_GuardKneeBend_CheckInterruptGuard(GObj *fighter_gobj);

// Jump
void ftCommon_Jump_ProcInterrupt(GObj *fighter_gobj);
void ftCommon_Jump_GetJumpForceButton(s32 stick_range_x, s32 *jump_vel_x, s32 *jump_vel_y, bool32 is_short_hop);
void ftCommon_Jump_SetStatus(GObj *fighter_gobj);

#endif