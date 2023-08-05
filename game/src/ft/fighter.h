#ifndef _FIGHTER_H_
#define _FIGHTER_H_

#include "fttypes.h"

#define ftGetStruct(fighter_gobj) \
((ftStruct*)(fighter_gobj)->user_data) \

#define ftSetupDropItem(fp)                             \
{                                                       \
    Vec3f vel;                                          \
                                                        \
    vel.x = vel.y = vel.z = 0.0F;                       \
                                                        \
    itMain_SetFighterDrop((fp)->item_hold, &vel, 1.0F); \
}                                                       \

#define AttributesGetStruct(fp) \
((ftAttributes*)fp->attributes) \

#define FighterGetJoint(fp, id) \
((DObj*)fp->joint[id]) \

#define FighterCalcLandingLag(anim_length, target_length) \
((f32)anim_length / target_length) \

// Fighter Functions

void ftStatus_Update(GObj *fighter_gobj, s32 status_id, f32 frame_begin, f32 anim_rate, u32 flags); // Action State Change
void ftCommon_FallSpecial_SetStatus(GObj *fighter_gobj, f32 drift, bool32 unk1, bool32 is_fall_accelerate, bool32 is_goto_landing, f32 landing_lag, bool32 is_allow_interrupt); // FallSpecial Action State
void func_ovl2_800DDE84(GObj*, void(*proc_map)(GObj*)); // Grounded Collision check (stop at ledge?)
void ftMap_CheckGroundCliff(GObj*, void(*proc_map)(GObj*)); // Aerial Collision check (ledge grab?)
void ftMap_SetGround(ftStruct*); // ???
void func_ovl2_800D8EB8(ftStruct*); // ???
void ftMap_SetAir(ftStruct*); // ???
void ftAnim_Update(GObj*); // ???

// Macro to check if a move has been interrupted by any standard action
#define ftCheckInterruptAll(fighter_gobj)                               \
(                                                                       \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE)     || \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) || \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE)   || \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE)    || \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE)  || \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE)      || \
    (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) != FALSE)      || \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE)|| \
    (ftCommon_Squat_CheckInterruptCommon(fighter_gobj) != FALSE)     || \
    (ftCommon_Turn_CheckInterruptCommon(fighter_gobj) != FALSE)      || \
    (ftCommon_Walk_CheckInterruptCommon(fighter_gobj) != FALSE)         \
)                                                                       \

#endif