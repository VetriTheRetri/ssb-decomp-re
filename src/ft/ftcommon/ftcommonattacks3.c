#include <ft/fighter.h>
#include <it/item.h>

extern f32 ftCommon_GetStickAngleRadians(ftStruct*);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014F760
void ftCommonAttackS3SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 stick_angle;
    s32 status_id;

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if (fp->ft_data->battlemotion->script_info[ftMotion_Common_AttackS3HiS].anim_id != 0)
        {
            stick_angle = ftCommon_GetStickAngleRadians(fp);

            status_id = (stick_angle > FTCOMMON_ATTACKS3_5ANGLE_HI_MIN)  ? ftStatus_Common_AttackS3Hi  : // High-Angled Forward Tilt
                        (stick_angle > FTCOMMON_ATTACKS3_5ANGLE_HIS_MIN) ? ftStatus_Common_AttackS3HiS : // Middle High-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_5ANGLE_LW_MIN)  ? ftStatus_Common_AttackS3Lw  : // Low-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_5ANGLE_LWS_MIN) ? ftStatus_Common_AttackS3LwS : // Middle Low-Angled Forward Tilt
                                                                           ftStatus_Common_AttackS3;     // Default Forward Tilt
        }
        else if (fp->ft_data->battlemotion->script_info[ftMotion_Common_AttackS3Hi].anim_id != 0)
        {
            stick_angle = ftCommon_GetStickAngleRadians(fp);

            status_id = (stick_angle > FTCOMMON_ATTACKS3_3ANGLE_HI_MIN)  ? ftStatus_Common_AttackS3Hi  : // High-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_3ANGLE_LW_MIN)  ? ftStatus_Common_AttackS3Lw  : // Low-Angled Forward Tilt
                                                                           ftStatus_Common_AttackS3;     // Default Forward Tilt
        }
        else status_id = ftStatus_Common_AttackS3;

        ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    }
}

// 0x8014F8C0
sb32 ftCommonAttackS3CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_ATTACKS3_STICK_RANGE_MIN))
    {
        if (((ftCommon_GetStickAngleRadians(fp) < 0.0F) ? -ftCommon_GetStickAngleRadians(fp) : ftCommon_GetStickAngleRadians(fp)) <= F_CST_DTOR32(50.0F)) // 0.87266463F
        {
            if (fp->item_hold != NULL)
            {
                if ((fp->input.pl.button_hold & fp->input.button_mask_z) || (itGetStruct(fp->item_hold)->type == It_Type_Throw))
                {
                    ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowF);

                    return TRUE;
                }
                switch (itGetStruct(fp->item_hold)->type)
                {
                case It_Type_Swing:
                    ftCommonItemSwingSetStatus(fighter_gobj, ftItemSwing_Type_Attack3);
                    return TRUE;

                case It_Type_Shoot:
                    ftCommon_ItemShoot_SetStatus(fighter_gobj);
                    return TRUE;
                }
            }
            if (attributes->is_have_attacks3)
            {
                ftCommonAttackS3SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}
