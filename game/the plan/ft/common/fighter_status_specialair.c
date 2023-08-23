#include <ft/fighter.h>

void (*ftKirby_SpecialAirN_StatusList[Ft_Kind_EnumMax])(GObj*) = 
{ 
    ftKirby_CopyMario_SpecialAirN_SetStatus, // Mario
    ftKirby_CopyFox_SpecialAirN_SetStatus, // Fox
    ftKirby_CopyDonkey_SpecialAirNStart_SetStatus, // Donkey Kong
    ftKirby_CopySamus_SpecialAirNStart_SetStatus, // Samus
    ftKirby_CopyMario_SpecialAirN_SetStatus, // Luigi
    ftKirby_CopyLink_SpecialAirN_SetStatus, // Link
    ftKirby_CopyYoshi_SpecialAirN_SetStatus, // Yoshi
    ftKirby_CopyCaptain_SpecialAirN_SetStatus, // Captain Faclon
    ftKirby_SpecialAirNStart_SetStatus, // Kirby
    ftKirby_CopyPikachu_SpecialAirN_SetStatus, // Pikachu
    ftKirby_CopyPurin_SpecialAirN_SetStatus, // Jigglypuff
    ftKirby_CopyNess_SpecialAirN_SetStatus, // Ness
    ftKirby_SpecialAirNStart_SetStatus, // Master Hand
    ftKirby_CopyMario_SpecialAirN_SetStatus, // Metal Mario
    ftKirby_SpecialAirNStart_SetStatus, // Poly Mario
    ftKirby_SpecialAirNStart_SetStatus, // Poly Fox
    ftKirby_SpecialAirNStart_SetStatus, // Poly Donkey Kong
    ftKirby_SpecialAirNStart_SetStatus, // Poly Samus
    ftKirby_SpecialAirNStart_SetStatus, // Poly Luigi
    ftKirby_SpecialAirNStart_SetStatus, // Poly Link
    ftKirby_SpecialAirNStart_SetStatus, // Poly Yoshi
    ftKirby_SpecialAirNStart_SetStatus, // Poly Captain Falcon
    ftKirby_SpecialAirNStart_SetStatus, // Poly Kirby
    ftKirby_SpecialAirNStart_SetStatus, // Poly Pikachu
    ftKirby_SpecialAirNStart_SetStatus, // Poly Jigglypuff
    ftKirby_SpecialAirNStart_SetStatus, // Poly Ness
    ftKirby_SpecialAirNStart_SetStatus, // Giant Donkey Kong (This is actually inaccessible, Kirby's copy ID for Giant DK is always 2)
};

void (*ftCommon_SpecialAirN_StatusList[Ft_Kind_EnumMax])(GObj*) =
{
    ftMario_SpecialAirN_SetStatus,
    ftFox_SpecialAirN_SetStatus,
    ftDonkey_SpecialAirNStart_SetStatus,
    ftSamus_SpecialAirNStart_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftLink_SpecialAirN_SetStatus,
    ftYoshi_SpecialAirN_SetStatus,
    ftCaptain_SpecialAirN_SetStatus,
    ftKirby_SpecialAirN_SetStatusIndex,
    ftPikachu_SpecialAirN_SetStatus,
    ftPurin_SpecialAirN_SetStatus,
    ftNess_SpecialAirN_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftFox_SpecialAirN_SetStatus,
    ftDonkey_SpecialAirNStart_SetStatus,
    ftSamus_SpecialAirNStart_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftLink_SpecialAirN_SetStatus,
    ftYoshi_SpecialAirN_SetStatus,
    ftCaptain_SpecialAirN_SetStatus,
    ftKirby_SpecialAirN_SetStatusIndex,
    ftPikachu_SpecialAirN_SetStatus,
    ftPurin_SpecialAirN_SetStatus,
    ftNess_SpecialAirN_SetStatus,
    ftDonkey_SpecialAirNStart_SetStatus
};

void (*ftCommon_SpecialAirHi_StatusList[Ft_Kind_EnumMax])(GObj*) =
{
    ftMario_SpecialAirHi_SetStatus,
    ftFox_SpecialAirHiStart_SetStatus,
    ftDonkey_SpecialAirHi_SetStatus,
    ftSamus_SpecialAirHi_SetStatus,
    ftMario_SpecialAirHi_SetStatus,
    ftLink_SpecialAirHi_SetStatus,
    ftYoshi_SpecialAirHi_SetStatus,
    ftCaptain_SpecialAirHi_SetStatus,
    ftKirby_SpecialAirHi_SetStatus,
    ftPikachu_SpecialAirHiStart_SetStatus,
    ftPurin_SpecialAirHi_SetStatus,
    ftNess_SpecialAirHiStart_SetStatus,
    ftMario_SpecialAirN_SetStatus,
    ftMario_SpecialAirHi_SetStatus,
    ftMario_SpecialAirHi_SetStatus,
    ftFox_SpecialAirHiStart_SetStatus,
    ftDonkey_SpecialAirHi_SetStatus,
    ftSamus_SpecialAirHi_SetStatus,
    ftMario_SpecialAirHi_SetStatus,
    ftLink_SpecialAirHi_SetStatus,
    ftYoshi_SpecialAirHi_SetStatus,
    ftCaptain_SpecialAirHi_SetStatus,
    ftKirby_SpecialAirHi_SetStatus,
    ftPikachu_SpecialAirHiStart_SetStatus,
    ftPurin_SpecialAirHi_SetStatus,
    ftNess_SpecialAirHiStart_SetStatus,
    ftDonkey_SpecialAirHi_SetStatus
};

void (*ftCommon_SpecialAirLw_StatusList[Ft_Kind_EnumMax])(GObj*) =
{
    ftMario_SpecialAirLw_SetStatus,
    ftFox_SpecialAirLwStart_SetStatus,
    NULL,
    ftSamus_SpecialAirLw_SetStatus,
    ftMario_SpecialAirLw_SetStatus,
    ftLink_SpecialAirLw_SetStatus,
    ftYoshi_SpecialAirLwStart_SetStatus,
    ftCaptain_SpecialAirLw_SetStatus,
    ftKirby_SpecialAirLwStart_SetStatus,
    ftPikachu_SpecialAirLwStart_SetStatus,
    ftPurin_SpecialAirLw_SetStatus,
    ftNess_SpecialAirLwStart_SetStatus,
    ftMario_SpecialAirLw_SetStatus,
    ftMario_SpecialAirLw_SetStatus,
    ftMario_SpecialAirLw_SetStatus,
    ftFox_SpecialAirLwStart_SetStatus,
    NULL,
    ftSamus_SpecialAirLw_SetStatus,
    ftMario_SpecialAirLw_SetStatus,
    ftLink_SpecialAirLw_SetStatus,
    ftYoshi_SpecialAirLwStart_SetStatus,
    ftCaptain_SpecialAirLw_SetStatus,
    ftKirby_SpecialAirLwStart_SetStatus,
    ftPikachu_SpecialAirLwStart_SetStatus,
    ftPurin_SpecialAirLw_SetStatus,
    ftNess_SpecialAirLwStart_SetStatus,
    NULL
};

// 0x80150ED0
void ftKirby_SpecialAirN_SetStatusIndex(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftKirby_SpecialAirN_StatusList[fp->fighter_vars.kirby.copy_id](fighter_gobj);
}

// 0x80150F08
bool32 ftCommon_SpecialAir_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        if (ftCommon_HammerCheckHold(fighter_gobj) == FALSE)
        {
            if (fp->input.pl.stick_range.y >= FTCOMMON_SPECIALHI_STICK_RANGE_MIN)
            {
                if (attributes->is_have_specialairhi)
                {
                    ftCommon_SpecialAirHi_StatusList[fp->ft_kind](fighter_gobj);

                    return TRUE;
                }
            }
            else if (fp->input.pl.stick_range.y <= FTCOMMON_SPECIALLW_STICK_RANGE_MIN)
            {
                if (attributes->is_have_specialairlw)
                {
                    ftCommon_SpecialAirLw_StatusList[fp->ft_kind](fighter_gobj);

                    return TRUE;
                }
            }
            else if (attributes->is_have_specialairn)
            {
                if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_SPECIALN_TURN_STICK_RANGE_MIN)
                {
                    ftCommon_StickInputSetLR(fp);
                }
                ftCommon_SpecialAirN_StatusList[fp->ft_kind](fighter_gobj);

                return TRUE;
            }
        }
    }
    return FALSE;
}