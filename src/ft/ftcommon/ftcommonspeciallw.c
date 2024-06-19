#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80188D50
void (*dFTCommonSpecialLwStatusList[/* */])(GObj*) = 
{
    ftMarioSpecialLwSetStatus,
    ftFoxSpecialLwStartSetStatus,
    ftDonkeySpecialLwStartSetStatus,
    ftSamusSpecialLwSetStatus,
    ftMarioSpecialLwSetStatus,
    ftLinkSpecialLwSetStatus,
    ftYoshiSpecialLwStartSetStatus,
    ftCaptainSpecialLwSetStatus,
    ftKirbySpecialLwStartSetStatus,
    ftPikachuSpecialLwStartSetStatus,
    ftPurinSpecialLwSetStatus,
    ftNessSpecialLwStartSetStatus,
    ftMarioSpecialLwSetStatus,
    ftMarioSpecialLwSetStatus,
    ftMarioSpecialLwSetStatus,
    ftFoxSpecialLwStartSetStatus,
    ftDonkeySpecialLwStartSetStatus,
    ftSamusSpecialLwSetStatus,
    ftMarioSpecialLwSetStatus,
    ftLinkSpecialLwSetStatus,
    ftYoshiSpecialLwStartSetStatus,
    ftCaptainSpecialLwSetStatus,
    ftKirbySpecialLwStartSetStatus,
    ftPikachuSpecialLwStartSetStatus,
    ftPurinSpecialLwSetStatus,
    ftNessSpecialLwStartSetStatus,
    ftDonkeySpecialLwStartSetStatus
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801511E0
sb32 ftCommonSpecialLwCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attributes->is_have_speciallw) && (fp->input.pl.stick_range.y <= FTCOMMON_SPECIALLW_STICK_RANGE_MIN))
    {
        dFTCommonSpecialLwStatusList[fp->ft_kind](fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
