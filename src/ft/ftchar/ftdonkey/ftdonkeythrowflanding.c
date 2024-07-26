#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014DC50
void ftDonkeyThrowFLandingProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.throwf.landing_anim_frame++;

    if (fp->status_vars.common.throwf.landing_anim_frame <= 4.0F)
    {
        ftDonkeyThrowFWaitSetStatus(fighter_gobj);
    }
}

// 0x8014DCA4
void ftDonkeyThrowFLandingSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTDonkeyStatusThrowFLanding, 0.0F, 0.0F, FTSTATUS_PRESERVE_NONE);

    fp->status_vars.common.throwf.landing_anim_frame = 0.0F;
}
