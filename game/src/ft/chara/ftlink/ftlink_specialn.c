#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x801636D0
void ftLinkSpecialNDestroyBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        wpMainDestroyWeapon(fp->fighter_vars.link.boomerang_gobj);

        fp->fighter_vars.link.boomerang_gobj = NULL;
    }
}

// 0x80163708
void ftLinkSpecialNCreateBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        ftParts_GetDObjWorldPosition(fp->joint[FTLINK_BOOMERANG_SPAWN_JOINT], &pos);

        fp->fighter_vars.link.boomerang_gobj = wpLinkBoomerangMakeWeapon(fighter_gobj, &pos);
    }
}

// 0x80163770
void ftLinkSpecialNProcUpdate(GObj *fighter_gobj)
{
    ftLinkSpecialNCreateBoomerang(fighter_gobj);
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80163798
void ftLinkSpecialAirNProcUpdate(GObj *fighter_gobj)
{
    ftLinkSpecialNCreateBoomerang(fighter_gobj);
    ftStatus_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x801637C0
void ftLinkSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftLinkSpecialNSwitchStatusAir);
}

// 0x801637E4
void ftLink_SpecialNEmpty_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftLink_SpecialNEmpty_SwitchStatusAir);
}

// 0x80163808
void ftLinkSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftLinkSpecialAirNSwitchStatusGround);
}

// 0x8016382C
void ftLink_SpecialAirNEmpty_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftLink_SpecialAirNEmpty_SwitchStatusGround);
}

// 0x80163850 - Check for Smash-B input and reset flag0
void ftLinkSpecialNProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;

    if ((ABS(fp->input.pl.stick_range.x) >= FTLINK_BOOMERANG_SMASH_STICK_MIN) && (fp->hold_stick_x < FTLINK_BOOMERANG_SMASH_BUFFER))
    {
        fp->status_vars.link.specialn.is_smash = TRUE;

        fp->stat_flags.is_smash_attack = TRUE;
    }
    else fp->status_vars.link.specialn.is_smash = FALSE;
}

// 0x801638AC
void ftLinkSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x801638EC
void ftLinkSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x8016392C
void ftLink_SpecialNEmpty_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->is_special_interrupt = TRUE;
}

// 0x8016397C
void ftLink_SpecialAirNEmpty_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->is_special_interrupt = TRUE;
}

// 0x801639CC
void ftLinkSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialNProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80163A4C
void ftLinkSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialNProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80163ACC
void ftLink_SpecialNReturn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
    else ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}