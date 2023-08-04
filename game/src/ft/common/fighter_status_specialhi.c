#include <ft/fighter.h>

void (*ftCommon_SpecialHi_StatusList[Ft_Kind_EnumMax])(GObj*) =
{
    ftMario_SpecialHi_SetStatus,
    ftFox_SpecialHiStart_SetStatus,
    ftDonkey_SpecialHi_SetStatus,
    ftSamus_SpecialHi_SetStatus,
    ftMario_SpecialHi_SetStatus,
    ftLink_SpecialHi_SetStatus,
    ftYoshi_SpecialHi_SetStatus,
    ftCaptain_SpecialHi_SetStatus,
    ftKirby_SpecialHi_SetStatus,
    ftPikachu_SpecialHiStart_SetStatus,
    ftPurin_SpecialHi_SetStatus,
    ftNess_SpecialHiStart_SetStatus,
    ftMario_SpecialHi_SetStatus,
    ftMario_SpecialHi_SetStatus,
    ftMario_SpecialHi_SetStatus,
    ftFox_SpecialHiStart_SetStatus,
    ftDonkey_SpecialHi_SetStatus,
    ftSamus_SpecialHi_SetStatus,
    ftMario_SpecialHi_SetStatus,
    ftLink_SpecialHi_SetStatus,
    ftYoshi_SpecialHi_SetStatus,
    ftCaptain_SpecialHi_SetStatus,
    ftKirby_SpecialHi_SetStatus,
    ftPikachu_SpecialHiStart_SetStatus,
    ftPurin_SpecialHi_SetStatus,
    ftNess_SpecialHiStart_SetStatus,
    ftDonkey_SpecialHi_SetStatus
};

// 0x80151160
bool32 ftCommon_SpecialHi_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) && (attributes->is_have_specialhi) && (fp->input.pl.stick_range.y >= FTCOMMON_SPECIALHI_STICK_RANGE_MIN))
    {
        ftCommon_SpecialHi_StatusList[fp->ft_kind](fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}