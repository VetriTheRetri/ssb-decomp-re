#include <ft/fighter.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014FA50
void ftCommonAttackHi3SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 stick_angle;
    s32 status_id;

    if (fp->ft_data->battlemotion->script_info[ftMotion_Common_AttackHi3F].anim_id != 0)
    {
        stick_angle = atan2f(fp->input.pl.stick_range.y, fp->input.pl.stick_range.x * fp->lr);

        status_id = (stick_angle < F_CLC_DTOR32( 77.0F)) /* 1.3439035F */ ? ftStatus_Common_AttackHi3F : // WHAT
                    (stick_angle > F_CLC_DTOR32(103.0F)) /* 1.7976892F */ ? ftStatus_Common_AttackHi3B : // WHAT
                                                                            ftStatus_Common_AttackHi3;
    }
    else status_id = ftStatus_Common_AttackHi3;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8014FB1C
sb32 ftCommonAttackHi3CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (fp->input.pl.stick_range.y >= FTCOMMON_ATTACKHI3_STICK_RANGE_MIN))
    {
        if (ftCommon_GetStickAngleRadians(fp) > F_CST_DTOR32(50.0F)) // 0.87266463F
        {
            if (ftCommonLightThrowCheckItemTypeThrow(fp) != FALSE)
            {
                ftCommonItemThrowSetStatus(fighter_gobj, ftStatus_Common_LightThrowHi);

                return TRUE;
            }
            else if (attributes->is_have_attackhi3)
            {
                ftCommonAttackHi3SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}
