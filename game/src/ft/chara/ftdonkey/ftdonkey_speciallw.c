#include <ft/chara/ftdonkey/ftdonkey.h>

// 0x8015B9F0
void ftDonkey_SpecialLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftDonkey_SpecialLwLoop_SetStatus);
}

// 0x8015BA14
void ftDonkey_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        if (fp->status_vars.donkey.speciallw.is_loop != FALSE)
        {
            fp->status_vars.donkey.speciallw.is_loop = FALSE;
        }
        else ftDonkey_SpecialLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x8015BA7C
void ftDonkey_SpecialLwLoop_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        fp->status_vars.donkey.speciallw.is_loop = TRUE;
    }
}

// 0x8015BAA4
void ftDonkey_SpecialLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialLwLoop, 0.0F, 1.0F, 0);
}

// 0x8015BAD0
void ftDonkey_SpecialLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialLwEnd, 0.0F, 1.0F, 0);
}

// 0x8015BAFC
void ftDonkey_SpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialLwStart, 0.0F, 1.0F, 0);
    ftAnim_Update(fighter_gobj);

    fp->status_vars.donkey.speciallw.is_loop = FALSE;
}
