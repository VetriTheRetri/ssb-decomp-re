#include <ft/chara/ftdonkey/ftdonkey.h>

// DK enters this state when hit out of Cargo Thorw but it does not persist?

// 0x8014E050
void ftDonkey_ThrowFDamage_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.throwfdamage.hitstun_timer -= 1.0F;

    if (fp->status_vars.common.throwfdamage.hitstun_timer <= 0.0F)
    {
        if (fp->ground_or_air == GA_Air)
        {
            fp->publicity_knockback = fp->status_vars.common.throwfdamage.publicity_knockback;

            ftDonkey_ThrowFFall_SetStatus(fighter_gobj);
        }
        else ftDonkey_ThrowFWait_SetStatus(fighter_gobj);
    }
}

// 0x8014E0E0
void ftDonkey_ThrowFDamage_SetStatus(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    f32 knockback_resist = (this_fp->knockback_resist_status < this_fp->knockback_resist_passive) ? this_fp->knockback_resist_passive : this_fp->knockback_resist_status;

    this_fp->damage_knockback -= knockback_resist;

    if (this_fp->damage_knockback <= 0.0F)
    {
        this_fp->damage_knockback = 0.0F;
    }
    ftCommon_Damage_InitDamageVars(fighter_gobj, ftStatus_Donkey_ThrowFDamage, this_fp->damage_queue, this_fp->damage_knockback, this_fp->damage_angle, this_fp->lr_damage, this_fp->damage_index, this_fp->damage_element, this_fp->damage_player_number, FALSE, FALSE, TRUE);

    if (this_fp->catch_gobj != NULL)
    {
        GObj *catch_gobj = this_fp->catch_gobj;
        ftStruct *capture_fp = ftGetStruct(catch_gobj);

        ftCommon_Thrown_ProcPhysics(catch_gobj);
        func_ovl2_800EB528(capture_fp->joint[ftParts_TopN_Joint]);
    }
}