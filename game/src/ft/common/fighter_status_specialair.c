#include <ft/fighter.h>

void (*dFtKirbySpecialAirNStatusList[/* */])(GObj*) = 
{ 
    ftKirbyCopyMarioSpecialAirNSetStatus, // Mario
    ftKirbyCopyFoxSpecialAirNSetStatus, // Fox
    ftKirbyCopyDonkeySpecialAirNStartSetStatus, // Donkey Kong
    ftKirbyCopySamusSpecialAirNStartSetStatus, // Samus
    ftKirbyCopyMarioSpecialAirNSetStatus, // Luigi
    ftKirbyCopyLinkSpecialAirNSetStatus, // Link
    ftKirbyCopyYoshiSpecialAirNSetStatus, // Yoshi
    ftKirbyCopyCaptainSpecialAirNSetStatus, // Captain Faclon
    ftKirbySpecialAirNStartSetStatus, // Kirby
    ftKirbyCopyPikachuSpecialAirNSetStatus, // Pikachu
    ftKirbyCopyPurinSpecialAirNSetStatus, // Jigglypuff
    ftKirbyCopyNessSpecialAirNSetStatus, // Ness
    ftKirbySpecialAirNStartSetStatus, // Master Hand
    ftKirbyCopyMarioSpecialAirNSetStatus, // Metal Mario
    ftKirbySpecialAirNStartSetStatus, // Poly Mario
    ftKirbySpecialAirNStartSetStatus, // Poly Fox
    ftKirbySpecialAirNStartSetStatus, // Poly Donkey Kong
    ftKirbySpecialAirNStartSetStatus, // Poly Samus
    ftKirbySpecialAirNStartSetStatus, // Poly Luigi
    ftKirbySpecialAirNStartSetStatus, // Poly Link
    ftKirbySpecialAirNStartSetStatus, // Poly Yoshi
    ftKirbySpecialAirNStartSetStatus, // Poly Captain Falcon
    ftKirbySpecialAirNStartSetStatus, // Poly Kirby
    ftKirbySpecialAirNStartSetStatus, // Poly Pikachu
    ftKirbySpecialAirNStartSetStatus, // Poly Jigglypuff
    ftKirbySpecialAirNStartSetStatus, // Poly Ness
    ftKirbySpecialAirNStartSetStatus, // Giant Donkey Kong (This is actually inaccessible, Kirby's copy ID for Giant DK is always 2)
};

void (*dFtCommonSpecialAirNStatusList[/* */])(GObj*) =
{
    ftMarioSpecialAirNSetStatus,
    ftFoxSpecialAirNSetStatus,
    ftDonkeySpecialAirNStartSetStatus,
    ftSamusSpecialAirNStartSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftLinkSpecialAirNSetStatus,
    ftYoshiSpecialAirNSetStatus,
    ftCaptainSpecialAirNSetStatus,
    ftKirbySpecialAirNSetStatusIndex,
    ftPikachuSpecialAirNSetStatus,
    ftPurinSpecialAirNSetStatus,
    ftNessSpecialAirNSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftFoxSpecialAirNSetStatus,
    ftDonkeySpecialAirNStartSetStatus,
    ftSamusSpecialAirNStartSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftLinkSpecialAirNSetStatus,
    ftYoshiSpecialAirNSetStatus,
    ftCaptainSpecialAirNSetStatus,
    ftKirbySpecialAirNSetStatusIndex,
    ftPikachuSpecialAirNSetStatus,
    ftPurinSpecialAirNSetStatus,
    ftNessSpecialAirNSetStatus,
    ftDonkeySpecialAirNStartSetStatus
};

void (*dFtCommonSpecialAirHiStatusList[/* */])(GObj*) =
{
    ftMarioSpecialAirHiSetStatus,
    ftFoxSpecialAirHiStartSetStatus,
    ftDonkeySpecialAirHiSetStatus,
    ftSamusSpecialAirHiSetStatus,
    ftMarioSpecialAirHiSetStatus,
    ftLinkSpecialAirHiSetStatus,
    ftYoshiSpecialAirHiSetStatus,
    ftCaptainSpecialAirHiSetStatus,
    ftKirbySpecialAirHiSetStatus,
    ftPikachuSpecialAirHiStartSetStatus,
    ftPurinSpecialAirHiSetStatus,
    ftNessSpecialAirHiStartSetStatus,
    ftMarioSpecialAirNSetStatus,
    ftMarioSpecialAirHiSetStatus,
    ftMarioSpecialAirHiSetStatus,
    ftFoxSpecialAirHiStartSetStatus,
    ftDonkeySpecialAirHiSetStatus,
    ftSamusSpecialAirHiSetStatus,
    ftMarioSpecialAirHiSetStatus,
    ftLinkSpecialAirHiSetStatus,
    ftYoshiSpecialAirHiSetStatus,
    ftCaptainSpecialAirHiSetStatus,
    ftKirbySpecialAirHiSetStatus,
    ftPikachuSpecialAirHiStartSetStatus,
    ftPurinSpecialAirHiSetStatus,
    ftNessSpecialAirHiStartSetStatus,
    ftDonkeySpecialAirHiSetStatus
};

void (*dFtCommonSpecialAirLwStatusList[/* */])(GObj*) =
{
    ftMarioSpecialAirLwSetStatus,
    ftFoxSpecialAirLwStartSetStatus,
    NULL,
    ftSamusSpecialAirLwSetStatus,
    ftMarioSpecialAirLwSetStatus,
    ftLinkSpecialAirLwSetStatus,
    ftYoshiSpecialAirLwStartSetStatus,
    ftCaptainSpecialAirLwSetStatus,
    ftKirbySpecialAirLwStartSetStatus,
    ftPikachuSpecialAirLwStartSetStatus,
    ftPurinSpecialAirLwSetStatus,
    ftNessSpecialAirLwStartSetStatus,
    ftMarioSpecialAirLwSetStatus,
    ftMarioSpecialAirLwSetStatus,
    ftMarioSpecialAirLwSetStatus,
    ftFoxSpecialAirLwStartSetStatus,
    NULL,
    ftSamusSpecialAirLwSetStatus,
    ftMarioSpecialAirLwSetStatus,
    ftLinkSpecialAirLwSetStatus,
    ftYoshiSpecialAirLwStartSetStatus,
    ftCaptainSpecialAirLwSetStatus,
    ftKirbySpecialAirLwStartSetStatus,
    ftPikachuSpecialAirLwStartSetStatus,
    ftPurinSpecialAirLwSetStatus,
    ftNessSpecialAirLwStartSetStatus,
    NULL
};

// 0x80150ED0
void ftKirbySpecialAirNSetStatusIndex(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    dFtKirbySpecialAirNStatusList[fp->fighter_vars.kirby.copy_id](fighter_gobj);
}

// 0x80150F08
sb32 ftCommon_SpecialAir_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        if (ftHammer_CheckItemHold(fighter_gobj) == FALSE)
        {
            if (fp->input.pl.stick_range.y >= FTCOMMON_SPECIALHI_STICK_RANGE_MIN)
            {
                if (attributes->is_have_specialairhi)
                {
                    dFtCommonSpecialAirHiStatusList[fp->ft_kind](fighter_gobj);

                    return TRUE;
                }
            }
            else if (fp->input.pl.stick_range.y <= FTCOMMON_SPECIALLW_STICK_RANGE_MIN)
            {
                if (attributes->is_have_specialairlw)
                {
                    dFtCommonSpecialAirLwStatusList[fp->ft_kind](fighter_gobj);

                    return TRUE;
                }
            }
            else if (attributes->is_have_specialairn)
            {
                if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_SPECIALN_TURN_STICK_RANGE_MIN)
                {
                    ftCommon_StickInputSetLR(fp);
                }
                dFtCommonSpecialAirNStatusList[fp->ft_kind](fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}