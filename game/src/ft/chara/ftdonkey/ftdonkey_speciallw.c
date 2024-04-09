#include <ft/fighter.h>

// 0x8015B9F0
void ftDonkeySpecialLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftDonkeySpecialLwLoopSetStatus);
}

// 0x8015BA14
void ftDonkeySpecialLwLoopProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        if (fp->status_vars.donkey.speciallw.is_loop != FALSE)
        {
            fp->status_vars.donkey.speciallw.is_loop = FALSE;
        }
        else ftDonkeySpecialLwEndSetStatus(fighter_gobj);
    }
}

// 0x8015BA7C
void ftDonkeySpecialLwLoopProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & fp->input.button_mask_b)
    {
        fp->status_vars.donkey.speciallw.is_loop = TRUE;
    }
}

// 0x8015BAA4
void ftDonkeySpecialLwLoopSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialLwLoop, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8015BAD0
void ftDonkeySpecialLwEndSetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8015BAFC
void ftDonkeySpecialLwStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->status_vars.donkey.speciallw.is_loop = FALSE;
}
