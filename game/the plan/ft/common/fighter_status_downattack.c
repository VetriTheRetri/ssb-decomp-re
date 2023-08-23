#include <ft/fighter.h>

// 0x80144910
void ftCommon_DownAttack_SetStatus(GObj *fighter_gobj, s32 status_id)
{
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80144944
bool32 ftCommon_DownAttack_CheckInterruptDownBounce(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (fp->status_vars.common.downbounce.attack_buffer != 0)
    {
        if (fp->status_info.status_id == ftStatus_Common_DownBounceD)
        {
            status_id = ftStatus_Common_DownAttackD;
        }
        else status_id = ftStatus_Common_DownAttackU;

        ftCommon_DownAttack_SetStatus(fighter_gobj, status_id);

        return TRUE;
    }
    else return FALSE;
}

// 0x8014499C
bool32 ftCommon_DownAttack_CheckInterruptDownWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
    {
        if (fp->status_info.status_id == ftStatus_Common_DownWaitD)
        {
            status_id = ftStatus_Common_DownAttackD;
        }
        else status_id = ftStatus_Common_DownAttackU;

        ftCommon_DownAttack_SetStatus(fighter_gobj, status_id);

        return TRUE;
    }
    else return FALSE;
}
