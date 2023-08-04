#include <ft/fighter.h>

void (*ftKirby_SpecialN_StatusList[Ft_Kind_EnumMax])(GObj*) = 
{
    ftKirby_CopyMario_SpecialN_SetStatus,
    ftKirby_CopyFox_SpecialN_SetStatus,
    ftKirby_CopyDonkey_SpecialNStart_SetStatus,
    ftKirby_CopySamus_SpecialNStart_SetStatus,
    ftKirby_CopyMario_SpecialN_SetStatus,
    ftKirby_CopyLink_SpecialN_SetStatus,
    ftKirby_CopyYoshi_SpecialN_SetStatus,
    ftKirby_CopyCaptain_SpecialN_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_CopyPikachu_SpecialN_SetStatus,
    ftKirby_CopyPurin_SpecialN_SetStatus,
    ftKirby_CopyNess_SpecialN_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_CopyMario_SpecialN_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus,
    ftKirby_SpecialNStart_SetStatus
};

void (*ftCommon_SpecialN_StatusList[Ft_Kind_EnumMax])(GObj*) = 
{
    ftMario_SpecialN_SetStatus,
    ftFox_SpecialN_SetStatus,
    ftDonkey_SpecialNStart_SetStatus,
    ftSamus_SpecialNStart_SetStatus,
    ftMario_SpecialN_SetStatus,
    ftLink_SpecialN_SetStatus,
    ftYoshi_SpecialN_SetStatus,
    ftCaptain_SpecialN_SetStatus,
    ftKirby_SpecialN_SetStatusIndex,
    ftPikachu_SpecialN_SetStatus,
    ftPurin_SpecialN_SetStatus,
    ftNess_SpecialN_SetStatus,
    ftMario_SpecialN_SetStatus,
    ftMario_SpecialN_SetStatus,
    ftMario_SpecialN_SetStatus,
    ftFox_SpecialN_SetStatus,
    ftDonkey_SpecialNStart_SetStatus,
    ftSamus_SpecialNStart_SetStatus,
    ftMario_SpecialN_SetStatus,
    ftLink_SpecialN_SetStatus,
    ftYoshi_SpecialN_SetStatus,
    ftCaptain_SpecialN_SetStatus,
    ftKirby_SpecialN_SetStatusIndex,
    ftPikachu_SpecialN_SetStatus,
    ftPurin_SpecialN_SetStatus,
    ftNess_SpecialN_SetStatus,
    ftDonkey_SpecialNStart_SetStatus
};

// 0x80151060
void ftKirby_SpecialN_SetStatusIndex(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftKirby_SpecialN_StatusList[fp->fighter_vars.kirby.copy_id](fighter_gobj);
}

// 0x80151098
bool32 ftCommon_SpecialN_CheckInterruptCommon(GObj *fighter_gobj)
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
            ftCommon_SpecialN_StatusList[fp->ft_kind](fighter_gobj);

            return TRUE;
        }
    }
    return FALSE;
}