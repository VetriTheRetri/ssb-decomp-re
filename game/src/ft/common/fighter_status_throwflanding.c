#include <ft/chara/ftdonkey/ftdonkey.h>

// 0x8014DC50
void ftDonkey_ThrowFLanding_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.throwf.landing_anim_frame++;

    if (fp->status_vars.common.throwf.landing_anim_frame <= 4.0F)
    {
        ftDonkey_ThrowFWait_SetStatus(fighter_gobj);
    }
}

// 0x8014DCA4
void ftDonkey_ThrowFLanding_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFLanding, 0.0F, 0.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.throwf.landing_anim_frame = 0.0F;
}
