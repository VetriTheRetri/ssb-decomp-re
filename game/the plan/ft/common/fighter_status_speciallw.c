#include <ft/fighter.h>

void (*ftCommon_SpecialLw_StatusList[Ft_Kind_EnumMax])(GObj*) = 
{
    ftMario_SpecialLw_SetStatus,
    ftFox_SpecialLwStart_SetStatus,
    ftDonkey_SpecialLwStart_SetStatus,
    ftSamus_SpecialLw_SetStatus,
    ftMario_SpecialLw_SetStatus,
    ftLink_SpecialLw_SetStatus,
    ftYoshi_SpecialLwStart_SetStatus,
    ftCaptain_SpecialLw_SetStatus,
    ftKirby_SpecialLwStart_SetStatus,
    ftPikachu_SpecialLwStart_SetStatus,
    ftPurin_SpecialLw_SetStatus,
    ftNess_SpeciaLwStart_SetStatus,
    ftMario_SpecialLw_SetStatus,
    ftMario_SpecialLw_SetStatus,
    ftMario_SpecialLw_SetStatus,
    ftFox_SpecialLwStart_SetStatus,
    ftDonkey_SpecialLwStart_SetStatus,
    ftSamus_SpecialLw_SetStatus,
    ftMario_SpecialLw_SetStatus,
    ftLink_SpecialLw_SetStatus,
    ftYoshi_SpecialLwStart_SetStatus,
    ftCaptain_SpecialLw_SetStatus,
    ftKirby_SpecialLwStart_SetStatus,
    ftPikachu_SpecialLwStart_SetStatus,
    ftPurin_SpecialLw_SetStatus,
    ftNess_SpeciaLwStart_SetStatus,
    ftDonkey_SpecialLwStart_SetStatus
};

// 0x801511E0
bool32 ftCommon_SpecialLw_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attributes->is_have_speciallw) && (fp->input.pl.stick_range.y <= FTCOMMON_SPECIALLW_STICK_RANGE_MIN))
    {
        ftCommon_SpecialLw_StatusList[fp->ft_kind](fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
