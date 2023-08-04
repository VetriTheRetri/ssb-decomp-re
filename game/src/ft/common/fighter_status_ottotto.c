#include <ft/fighter.h>

#define ftCheckInterruptOttotto(fighter_gobj)\
(                                                   \
    (ftCommon_SpecialN_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_SpecialHi_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_SpecialLw_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Catch_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackS4_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackHi4_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackLw4_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackS3_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackHi3_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_AttackLw3_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Attack1_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_GuardOn_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Appeal_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_KneeBend_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Dash_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Pass_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_DokanStart_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Squat_CheckInterruptCommon(fighter_gobj) != FALSE) ||  \
    (ftCommon_Turn_CheckInterruptCommon(fighter_gobj) != FALSE)     \
)                                                   \

// 0x80142850
void ftCommon_Ottotto_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_OttottoWait_SetStatus);
}

// 0x80142874
void ftCommon_Ottotto_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!ftCheckInterruptOttotto(fighter_gobj))
    {
        if ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_OTTOTTO_WALK_STICK_RANGE_MIN)
        {
            ftCommon_Walk_CheckInterruptCommon(fighter_gobj);
        }
    }
}

// 0x801429F4
void ftCommon_Ottotto_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    f32 dist_x;

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
    else
    {
        if (fp->lr == RIGHT)
        {
            mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &pos);
        }
        else mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &pos);

        if (DObjGetStruct(fighter_gobj)->translate.x < pos.x)
        {
            dist_x = -(DObjGetStruct(fighter_gobj)->translate.x - pos.x);
        }
        else dist_x = DObjGetStruct(fighter_gobj)->translate.x - pos.x;

        if (dist_x > FTCOMMON_OTTOTTO_WALK_DIST_X_MIN)
        {
            ftCommon_Wait_SetStatus(fighter_gobj);
        }
    }
}

// 0x80142AC4
void ftCommon_OttottoWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_OttottoWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x192_flag_b0 = TRUE;
}

// 0x80142B08
void ftCommon_Ottotto_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_Ottotto, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->phys_info.vel_air.z = 0.0F;
    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x = 0.0F;
    fp->phys_info.vel_ground.x = 0.0F;

    fp->x192_flag_b0 = TRUE;
}
