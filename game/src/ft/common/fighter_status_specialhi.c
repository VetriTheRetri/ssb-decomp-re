#include <ft/fighter.h>

// 0x80188CE0
void (*dFtCommonSpecialHiStatusList[/* */])(GObj*) =
{
    ftMarioSpecialHiSetStatus,
    ftFoxSpecialHiStartSetStatus,
    ftDonkeySpecialHiSetStatus,
    ftSamusSpecialHiSetStatus,
    ftMarioSpecialHiSetStatus,
    ftLinkSpecialHiSetStatus,
    ftYoshiSpecialHiSetStatus,
    ftCaptainSpecialHiSetStatus,
    ftKirbySpecialHiSetStatus,
    ftPikachuSpecialHiStartSetStatus,
    ftPurinSpecialHiSetStatus,
    ftNessSpecialHiStartSetStatus,
    ftMarioSpecialHiSetStatus,
    ftMarioSpecialHiSetStatus,
    ftMarioSpecialHiSetStatus,
    ftFoxSpecialHiStartSetStatus,
    ftDonkeySpecialHiSetStatus,
    ftSamusSpecialHiSetStatus,
    ftMarioSpecialHiSetStatus,
    ftLinkSpecialHiSetStatus,
    ftYoshiSpecialHiSetStatus,
    ftCaptainSpecialHiSetStatus,
    ftKirbySpecialHiSetStatus,
    ftPikachuSpecialHiStartSetStatus,
    ftPurinSpecialHiSetStatus,
    ftNessSpecialHiStartSetStatus,
    ftDonkeySpecialHiSetStatus
};

// 0x80151160
sb32 ftCommonSpecialHiCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attributes->is_have_specialhi) && (fp->input.pl.stick_range.y >= FTCOMMON_SPECIALHI_STICK_RANGE_MIN))
    {
        dFtCommonSpecialHiStatusList[fp->ft_kind](fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}