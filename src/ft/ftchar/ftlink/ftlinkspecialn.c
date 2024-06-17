#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

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
void ftLinkSpecialNEmptyProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftLinkSpecialNEmptySwitchStatusAir);
}

// 0x80163808
void ftLinkSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftLinkSpecialAirNSwitchStatusGround);
}

// 0x8016382C
void ftLinkSpecialAirNEmptyProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftLinkSpecialAirNEmptySwitchStatusGround);
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
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x801638EC
void ftLinkSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x8016392C
void ftLinkSpecialNEmptySwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->is_special_interrupt = TRUE;
}

// 0x8016397C
void ftLinkSpecialAirNEmptySwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->is_special_interrupt = TRUE;
}

// 0x801639CC
void ftLinkSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialNProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80163A4C
void ftLinkSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialNProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->is_special_interrupt = TRUE;
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80163ACC
void ftLinkSpecialNReturnSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
    else ftMainSetFighterStatus(fighter_gobj, ftStatus_Link_SpecialNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
