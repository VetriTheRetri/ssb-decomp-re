#include <ft/fighter.h>

#define ftCheckInterruptLanding(fighter_gobj)   \
(                                                      \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) != FALSE) ||     \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE)        \
)                                                      \

// 0x80142B70
void ftCommon_Landing_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fighter_gobj->anim_frame < FTCOMMON_LANDING_INTERRUPT_BEGIN) && (fp->status_vars.common.landing.is_allow_interrupt != FALSE) && !ftCheckInterruptLanding(fighter_gobj))
    {
        if ((fighter_gobj->anim_frame >= FTCOMMON_LANDING_INTERRUPT_BEGIN) && (fighter_gobj->anim_frame < (FTCOMMON_LANDING_INTERRUPT_BEGIN + DObjGetStruct(fighter_gobj)->dobj_f1)))
        {
            if (ftCommon_SquatWait_CheckInterruptLanding(fighter_gobj) != FALSE) return;
        }
        else if (ftCommon_Squat_CheckInterruptCommon(fighter_gobj) != FALSE) return;

        if (ftCommon_Turn_CheckInterruptCommon(fighter_gobj) == FALSE)
        {
            ftCommon_Walk_CheckInterruptCommon(fighter_gobj);
        }
    }
}

// 0x80142D44
void ftCommon_Landing_SetStatusParam(GObj *fighter_gobj, s32 status_id, bool32 is_allow_interrupt, f32 anim_speed)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, status_id, 0.0F, anim_speed, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.landing.is_allow_interrupt = is_allow_interrupt;
}

// 0x80142D9C
void ftCommon_Landing_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->is_fast_fall) && (fp->phys_info.vel_air.y <= -fp->attributes->fast_fall_speed))
    {
        ftCommon_Landing_SetStatusParam(fighter_gobj, ftStatus_Common_LandingHeavy, TRUE, FTCOMMON_LANDING_HEAVY_ANIM_SPEED);
    }
    else ftCommon_Landing_SetStatusParam(fighter_gobj, ftStatus_Common_LandingLight, TRUE, FTCOMMON_LANDING_LIGHT_ANIM_SPEED);
}

// 0x80142E10
void ftCommon_LandingAirNull_SetStatus(GObj *fighter_gobj, f32 anim_speed)
{
    ftCommon_Landing_SetStatusParam(fighter_gobj, ftStatus_Common_LandingAirNull, FALSE, anim_speed);
}

// 0x80142E3C
void ftCommon_LandingFallSpecial_SetStatus(GObj *fighter_gobj, bool32 is_allow_interrupt, f32 anim_speed)
{
    ftCommon_Landing_SetStatusParam(fighter_gobj, ftStatus_Common_LandingFallSpecial, is_allow_interrupt, anim_speed);
}

