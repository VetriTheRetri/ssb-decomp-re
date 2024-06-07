#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x80164650
void ftKirbyCopyLinkSpecialNDestroyBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        wpMainDestroyWeapon(fp->fighter_vars.kirby.copylink_boomerang_gobj);

        fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;
    }
}

// 0x80164688
void ftKirbyCopyLinkSpecialNCreateBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        ftParts_GetDObjWorldPosition(fp->joint[FTKIRBY_COPYLINK_BOOMERANG_SPAWN_JOINT], &pos);

        fp->fighter_vars.kirby.copylink_boomerang_gobj = wpLinkBoomerangMakeWeapon(fighter_gobj, &pos);
    }
}

// 0x801646F0
void ftKirbyCopyLinkSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyLinkSpecialNCreateBoomerang(fighter_gobj);
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80164718
void ftKirbyCopyLinkSpecialAirNProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyLinkSpecialNCreateBoomerang(fighter_gobj);
    ftStatus_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x80164740
void ftKirbyCopyLinkSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyLinkSpecialNSwitchStatusAir);
}

// 0x80164764
void ftKirbyCopyLink_SpecialNEmpty_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyLink_SpecialNEmpty_SwitchStatusAir);
}

// 0x80164788
void ftKirbyCopyLinkSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyLinkSpecialAirNSwitchStatusGround);
}

// 0x801647AC
void ftKirbyCopyLink_SpecialAirNEmpty_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyLink_SpecialAirNEmpty_SwitchStatusGround);
}

// 0x801647D0
void ftKirbyCopyLinkSpecialNProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    if ((ABS(fp->input.pl.stick_range.x) >= FTKIRBY_COPYLINK_BOOMERANG_SMASH_STICK_MIN) && (fp->hold_stick_x < FTKIRBY_COPYLINK_BOOMERANG_SMASH_BUFFER))
    {
        fp->status_vars.kirby.copylink_specialn.is_smash = TRUE;
    }
    else fp->status_vars.kirby.copylink_specialn.is_smash = FALSE;
}

// 0x80164820
void ftKirbyCopyLinkSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x80164860
void ftKirbyCopyLinkSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x801648A0
void ftKirbyCopyLink_SpecialNEmpty_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_special_interrupt = TRUE;
}

// 0x801648F0
void ftKirbyCopyLink_SpecialAirNEmpty_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->is_special_interrupt = TRUE;
}

// 0x80164940
void ftKirbyCopyLinkSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyLinkSpecialNProcStatus;

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x801649C0
void ftKirbyCopyLinkSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyLinkSpecialNProcStatus;

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80164A40
void ftKirbyCopyLink_SpecialNReturn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
