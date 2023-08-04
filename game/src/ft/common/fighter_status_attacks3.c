#include <ft/fighter.h>
#include <it/item.h>

// 0x8014F760
void ftCommon_AttackS3_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 stick_angle;
    s32 status_id;

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if (fp->ft_data->script1->script_info[0xA9].anim_id != 0)
        {
            stick_angle = ftCommon_GetStickAngleRadians(fp);

            status_id = (stick_angle > FTCOMMON_ATTACKS3_5ANGLE_HI_MIN)  ? ftStatus_Common_AttackS3Hi  : // High-Angled Forward Tilt
                        (stick_angle > FTCOMMON_ATTACKS3_5ANGLE_HIS_MIN) ? ftStatus_Common_AttackS3HiS : // Middle High-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_5ANGLE_LW_MIN)  ? ftStatus_Common_AttackS3Lw  : // Low-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_5ANGLE_LWS_MIN) ? ftStatus_Common_AttackS3LwS : // Middle Low-Angled Forward Tilt
                                                                           ftStatus_Common_AttackS3;     // Default Forward Tilt
        }
        else if (fp->ft_data->script1->script_info[0xA8].anim_id != 0)
        {
            stick_angle = ftCommon_GetStickAngleRadians(fp);

            status_id = (stick_angle > FTCOMMON_ATTACKS3_3ANGLE_HI_MIN)  ? ftStatus_Common_AttackS3Hi  : // High-Angled Forward Tilt
                        (stick_angle < FTCOMMON_ATTACKS3_3ANGLE_LW_MIN)  ? ftStatus_Common_AttackS3Lw  : // Low-Angled Forward Tilt
                                                                           ftStatus_Common_AttackS3;     // Default Forward Tilt
        }
        else status_id = ftStatus_Common_AttackS3;

        ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftAnim_Update(fighter_gobj);
    }
}

// 0x8014F8C0
bool32 ftCommon_AttackS3_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) && ((fp->input.pl.stick_range.x * fp->lr) >= FTCOMMON_ATTACKS3_STICK_RANGE_MIN))
    {
        if (((ftCommon_GetStickAngleRadians(fp) < 0.0F) ? -ftCommon_GetStickAngleRadians(fp) : ftCommon_GetStickAngleRadians(fp)) <= F_DEG_TO_RAD(50.0F)) // 0.87266463F
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
                    ftCommon_ItemSwing_SetStatus(fighter_gobj, 1);
                    return TRUE;

                case It_Type_Shoot:
                    ftCommon_ItemShoot_SetStatus(fighter_gobj);
                    return TRUE;
                }
            }
            if (attributes->is_have_attacks3)
            {
                ftCommon_AttackS3_SetStatus(fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}
