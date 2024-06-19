#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80188C00
void (*dFTKirbySpecialNStatusList[/* */])(GObj*) = 
{
    ftKirbyCopyMarioSpecialNSetStatus,
    ftKirbyCopyFoxSpecialNSetStatus,
    ftKirbyCopyDonkeySpecialNStartSetStatus,
    ftKirbyCopySamusSpecialNStartSetStatus,
    ftKirbyCopyMarioSpecialNSetStatus,
    ftKirbyCopyLinkSpecialNSetStatus,
    ftKirbyCopyYoshiSpecialNSetStatus,
    ftKirbyCopyCaptainSpecialNSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbyCopyPikachuSpecialNSetStatus,
    ftKirbyCopyPurinSpecialNSetStatus,
    ftKirbyCopyNessSpecialNSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbyCopyMarioSpecialNSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus,
    ftKirbySpecialNStartSetStatus
};

// 0x80188C6C
void (*dFTCommonSpecialNStatusList[/* */])(GObj*) = 
{
    ftMarioSpecialNSetStatus,
    ftFoxSpecialNSetStatus,
    ftDonkeySpecialNStartSetStatus,
    ftSamusSpecialNStartSetStatus,
    ftMarioSpecialNSetStatus,
    ftLinkSpecialNSetStatus,
    ftYoshiSpecialNSetStatus,
    ftCaptainSpecialNSetStatus,
    ftKirbySpecialNSetStatusSelect,
    ftPikachuSpecialNSetStatus,
    ftPurinSpecialNSetStatus,
    ftNessSpecialNSetStatus,
    ftMarioSpecialNSetStatus,
    ftMarioSpecialNSetStatus,
    ftMarioSpecialNSetStatus,
    ftFoxSpecialNSetStatus,
    ftDonkeySpecialNStartSetStatus,
    ftSamusSpecialNStartSetStatus,
    ftMarioSpecialNSetStatus,
    ftLinkSpecialNSetStatus,
    ftMarioSpecialNSetStatus,           // un bro momento
    ftCaptainSpecialNSetStatus,
    ftKirbySpecialNSetStatusSelect,
    ftPikachuSpecialNSetStatus,
    ftPurinSpecialNSetStatus,
    ftNessSpecialNSetStatus,
    ftDonkeySpecialNStartSetStatus
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80151060
void ftKirbySpecialNSetStatusSelect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    dFTKirbySpecialNStatusList[fp->fighter_vars.kirby.copy_id](fighter_gobj);
}

// 0x80151098
sb32 ftCommonSpecialNCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attributes->is_have_specialn))
    {
        if ((fp->input.pl.stick_range.y < FTCOMMON_SPECIALHI_STICK_RANGE_MIN) && (fp->input.pl.stick_range.y > FTCOMMON_SPECIALLW_STICK_RANGE_MIN))
        {
            if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_SPECIALN_TURN_STICK_RANGE_MIN)
            {
                ftCommon_StickInputSetLR(fp);
            }
            dFTCommonSpecialNStatusList[fp->ft_kind](fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}