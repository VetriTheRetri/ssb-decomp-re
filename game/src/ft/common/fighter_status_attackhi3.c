#include <ft/fighter.h>

// 0x8014FA50
void ftCommon_AttackHi3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 stick_angle;
    s32 status_id;

    if (fp->ft_data->script1->script_info[0xAD].anim_id != 0)
    {
        stick_angle = atan2f(fp->input.pl.stick_range.y, fp->input.pl.stick_range.x * fp->lr);

        status_id = (stick_angle < F_DEG_TO_RAD( 77.0F)) /* 1.3439035F */ ? ftStatus_Common_AttackHi3F : // WHAT
                    (stick_angle > F_DEG_TO_RAD(103.0F)) /* 1.7976892F */ ? ftStatus_Common_AttackHi3B : // WHAT
                                                                            ftStatus_Common_AttackHi3;
    }
    else status_id = ftStatus_Common_AttackHi3;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x8014FB1C
bool32 ftCommon_AttackHi3_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (fp->input.pl.stick_range.y >= FTCOMMON_ATTACKHI3_STICK_RANGE_MIN))
    {
        if (ftCommon_GetStickAngleRadians(fp) > F_DEG_TO_RAD(50.0F)) // 0.87266463F
        {
            if (ftCommon_LightThrow_CheckItemTypeThrow(fp) != FALSE)
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowHi);

                return TRUE;
            }
            else if (attributes->is_have_attackhi3)
            {
                ftCommon_AttackHi3_SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}