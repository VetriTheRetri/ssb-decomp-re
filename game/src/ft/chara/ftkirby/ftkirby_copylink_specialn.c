#include <ft/chara/ftkirby/ftkirby.h>

// 0x80164650
void ftKirby_CopyLink_SpecialN_DestroyBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        wpMain_DestroyWeapon(fp->fighter_vars.kirby.copylink_boomerang_gobj);

        fp->fighter_vars.kirby.copylink_boomerang_gobj = NULL;
    }
}

// 0x80164688
void ftKirby_CopyLink_SpecialN_CreateBoomerang(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYLINK_BOOMERANG_SPAWN_JOINT], &pos);

        fp->fighter_vars.kirby.copylink_boomerang_gobj = wpLink_Boomerang_MakeWeapon(fighter_gobj, &pos);
    }
}

// 0x801646F0
void ftKirby_CopyLink_SpecialN_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyLink_SpecialN_CreateBoomerang(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x80164718
void ftKirby_CopyLink_SpecialAirN_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyLink_SpecialN_CreateBoomerang(fighter_gobj);
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x80164740
void ftKirby_CopyLink_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyLink_SpecialN_SwitchStatusAir);
}

// 0x80164764
void ftKirby_CopyLink_SpecialNEmpty_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyLink_SpecialNEmpty_SwitchStatusAir);
}

// 0x80164788
void ftKirby_CopyLink_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyLink_SpecialAirN_SwitchStatusGround);
}

// 0x801647AC
void ftKirby_CopyLink_SpecialAirNEmpty_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyLink_SpecialAirNEmpty_SwitchStatusGround);
}

// 0x801647D0
void ftKirby_CopyLink_SpecialN_ProcStatus(GObj *fighter_gobj)
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
void ftKirby_CopyLink_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x80164860
void ftKirby_CopyLink_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialN, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_MODELPART_PRESERVE);
}

// 0x801648A0
void ftKirby_CopyLink_SpecialNEmpty_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x192_flag_b0 = TRUE;
}

// 0x801648F0
void ftKirby_CopyLink_SpecialAirNEmpty_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNEmpty, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->x192_flag_b0 = TRUE;
}

// 0x80164940
void ftKirby_CopyLink_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_CopyLink_SpecialN_ProcStatus;

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->x192_flag_b0 = TRUE;
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}

// 0x801649C0
void ftKirby_CopyLink_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_CopyLink_SpecialN_ProcStatus;

    if (fp->fighter_vars.kirby.copylink_boomerang_gobj != NULL)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNEmpty, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        fp->x192_flag_b0 = TRUE;
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}

// 0x80164A40
void ftKirby_CopyLink_SpecialNReturn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialAirNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    }
    else ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyLink_SpecialNReturn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    ftAnim_Update(fighter_gobj);
}