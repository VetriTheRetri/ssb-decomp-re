#include <ft/chara/ftlink/ftlink.h>

// 0x801636D0
void ftLink_SpecialN_DestroyBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        wpMain_DestroyWeapon(fp->fighter_vars.link.boomerang_gobj);

        fp->fighter_vars.link.boomerang_gobj = NULL;
    }
}

// 0x80163708
void ftLink_SpecialN_CreateBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTLINK_BOOMERANG_SPAWN_JOINT], &pos);

        fp->fighter_vars.link.boomerang_gobj = wpLink_Boomerang_MakeWeapon(fighter_gobj, &pos);
    }
}

// 0x80163770
void ftLink_SpecialN_ProcUpdate(GObj *fighter_gobj)
{
    ftLink_SpecialN_CreateBoomerang(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80163798
void ftLink_SpecialAirN_ProcUpdate(GObj *fighter_gobj)
{
    ftLink_SpecialN_CreateBoomerang(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x801637C0
void ftLink_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftLink_SpecialN_SwitchStatusAir);
}

// 0x801637E4
void ftLink_SpecialNEmpty_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftLink_SpecialNEmpty_SwitchStatusAir);
}

// 0x80163808
void ftLink_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftLink_SpecialAirN_SwitchStatusGround);
}

// 0x8016382C
void ftLink_SpecialAirNEmpty_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftLink_SpecialAirNEmpty_SwitchStatusGround);
}

// 0x80163850 - Check for Smash-B input and reset flag0
void ftLink_SpecialN_ProcStatus(GObj *fighter_gobj)
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
void ftLink_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x801638EC
void ftLink_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x8016392C
void ftLink_SpecialNEmpty_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->x192_flag_b0 = TRUE;
}

// 0x8016397C
void ftLink_SpecialAirNEmpty_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    fp->x192_flag_b0 = TRUE;
}

// 0x801639CC
void ftLink_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLink_SpecialN_ProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->x192_flag_b0 = TRUE;
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}

// 0x80163A4C
void ftLink_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLink_SpecialN_ProcStatus;

    if (fp->fighter_vars.link.boomerang_gobj != NULL)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->x192_flag_b0 = TRUE;
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}

// 0x80163ACC
void ftLink_SpecialNReturn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}