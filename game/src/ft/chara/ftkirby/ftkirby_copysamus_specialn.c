#include <ft/chara/ftkirby/ftkirby.h>

// 0x80156E60
void ftKirby_CopySamus_SpecialN_DestroyChargeShot(ftStruct *fp)
{
    if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
    {
        wpMain_DestroyWeapon(fp->status_vars.kirby.copysamus_specialn.charge_gobj);

        fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
    }
}

// 0x80156E98
void ftKirby_CopySamus_SpecialN_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.kirby.copysamus_charge_level = 0;

    ftKirby_CopySamus_SpecialN_DestroyChargeShot(fp);
}

// 0x80156EBC
void ftKirby_CopySamus_SpecialN_GetChargeShotPosition(ftStruct *fp, Vec3f *pos)
{
    pos->x = 0.0F;
    pos->y = FTKIRBY_COPYSAMUS_CHARGE_OFF_Y;
    pos->z = FTKIRBY_COPYSAMUS_CHARGE_OFF_Z;

    func_ovl2_800EDF24(fp->joint[FTKIRBY_COPYSAMUS_CHARGE_JOINT], pos);
}

// 0x80156EFC
void ftKirby_CopySamus_SpecialN_SetChargeShotPosition(ftStruct *fp)
{
    Vec3f pos;

    if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
    {
        ftKirby_CopySamus_SpecialN_GetChargeShotPosition(fp, &pos);

        DObjGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj)->translate = pos;
    }
}

// 0x80156F54
void func_ovl3_80156F54(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftKirby_CopySamus_SpecialAirNEnd_SetStatus(fighter_gobj);
        }
        else if (fp->status_vars.kirby.copysamus_specialn.is_release != FALSE)
        {
            ftKirby_CopySamus_SpecialNEnd_SetStatus(fighter_gobj);
        }
        else ftKirby_CopySamus_SpecialNLoop_SetStatus(fighter_gobj);
    }
}

// 0x80156FCC
void ftKirby_CopySamus_SpecialNStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
    }
}

// 0x80157004
void ftKirby_CopySamus_SpecialNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopySamus_SpecialNStart_SwitchStatusAir);
}

// 0x80157028
void ftKirby_CopySamus_SpecialAirNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopySamus_SpecialAirNStart_SwitchStatusGround);
}

// 0x8015704C
void ftKirby_CopySamus_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNStart, fighter_gobj->anim_frame, fp->joint[ftParts_TopN_Joint]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
}

// 0x801570A8
void ftKirby_CopySamus_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNStart, fighter_gobj->anim_frame, fp->joint[ftParts_TopN_Joint]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);
    func_ovl2_800D8EB8(fp);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;

    fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
}

// 0x80157114
void ftKirby_CopySamus_SpecialNLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.kirby.copysamus_specialn.charge_int--;

    if (fp->status_vars.kirby.copysamus_specialn.charge_int == 0)
    {
        fp->status_vars.kirby.copysamus_specialn.charge_int = FTKIRBY_COPYSAMUS_CHARGE_INT;

        if (fp->fighter_vars.kirby.copysamus_charge_level <= (FTKIRBY_COPYSAMUS_CHARGE_MAX - 1))
        {
            fp->fighter_vars.kirby.copysamus_charge_level++;

            if (fp->fighter_vars.kirby.copysamus_charge_level == FTKIRBY_COPYSAMUS_CHARGE_MAX)
            {
                ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_ID, FTKIRBY_COPYSAMUS_CHARGE_COLANIM_LENGTH);
                ftKirby_CopySamus_SpecialN_DestroyChargeShot(fp);
                ftCommon_Wait_SetStatus(fighter_gobj);
            }

            else if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
            {
                wpStruct *wp = wpGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj);

                wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.kirby.copysamus_charge_level;
            }
        }
    }
}

// 0x801571A8
void ftKirby_CopySamus_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        ftKirby_CopySamus_SpecialNEnd_SetStatus(fighter_gobj);

        return;
    }

    status_id = ftCommon_Escape_GetStatus(fp);

    if (status_id != -1)
    {
        ftKirby_CopySamus_SpecialN_DestroyChargeShot(fp);
        ftCommon_Escape_SetStatus(fighter_gobj, status_id);
    }

    else if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftSamus_SpecialN_DestroyChargeShot(fp);
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80157268
void ftKirby_CopySamus_SpecialNLoop_ProcMap(GObj *fighter_gobj)
{
    ftKirby_CopySamus_SpecialN_SetChargeShotPosition(ftGetStruct(fighter_gobj));
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopySamus_SpecialAirNEnd_SetStatus);
}

// 0x8015729C
void ftKirby_CopySamus_SpecialNLoop_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
    fp->status_vars.samus.specialn.charge_int = FTKIRBY_COPYSAMUS_CHARGE_INT;

    ftKirby_CopySamus_SpecialN_GetChargeShotPosition(fp, &pos);
    fp->status_vars.kirby.copysamus_specialn.charge_gobj = wpSamus_ChargeShot_MakeWeapon(fighter_gobj, &pos, fp->fighter_vars.kirby.copysamus_charge_level, 0);
}

// 0x80157314
void ftKirby_CopySamus_SpecialNEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    wpStruct *wp;
    f32 charge_recoil_x;
    f32 charge_recoil_y;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        ftKirby_CopySamus_SpecialN_GetChargeShotPosition(fp, &pos);

        if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
        {
            wp = wpGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj);
            ftCommon_StopLoopSFX(fp);

            DObjGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj)->translate = pos;

            wp->weapon_vars.charge_shot.is_full_charge = TRUE;
            wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.kirby.copysamus_charge_level;

            func_ovl2_800DF09C(fp->status_vars.kirby.copysamus_specialn.charge_gobj, fp->coll_data.p_translate, &fp->coll_data);

            wp->weapon_vars.charge_shot.owner_gobj = NULL;
            fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
        }
        else wpSamus_ChargeShot_MakeWeapon(fighter_gobj, &pos, fp->fighter_vars.kirby.copysamus_charge_level, 1);

        if (fp->ground_or_air == GA_Air)
        {
            charge_recoil_x = fp->fighter_vars.kirby.copysamus_charge_level + 1;

            fp->phys_info.vel_air.x = ((FTKIRBY_COPYSAMUS_CHARGE_RECOIL_MUL * charge_recoil_x) + FTKIRBY_COPYSAMUS_CHARGE_RECOIL_BASE) * -fp->lr;

            charge_recoil_y = charge_recoil_x + FTKIRBY_COPYSAMUS_CHARGE_RECOIL_ADD + (fp->fighter_vars.kirby.copysamus_charge_recoil * -FTKIRBY_COPYSAMUS_CHARGE_RECOIL_BASE);

            if (fp->phys_info.vel_air.y < charge_recoil_y)
            {
                fp->phys_info.vel_air.y = charge_recoil_y;
            }
            fp->fighter_vars.kirby.copysamus_charge_recoil++;
        }
        else fp->phys_info.vel_ground.x = -((FTKIRBY_COPYSAMUS_CHARGE_RECOIL_MUL * (fp->fighter_vars.kirby.copysamus_charge_level + 1)) + FTKIRBY_COPYSAMUS_CHARGE_RECOIL_BASE);
        
        fp->fighter_vars.kirby.copysamus_charge_level = 0;

        fp->proc_damage = NULL;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x801574D0
void ftKirby_CopySamus_SpecialNEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopySamus_SpecialNEnd_SwitchStatusAir);
}

// 0x801574F4
void ftKirby_CopySamus_SpecialAirNEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopySamus_SpecialAirNEnd_SwitchStatusGround);
}

// 0x80157518
void ftKirby_CopySamus_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
}

// 0x8015756C
void ftKirby_CopySamus_SpecialNEnd_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    func_ovl2_800D8EB8(fp);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
}

// 0x801575C8
void ftKirby_CopySamus_SpecialNEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
}

// 0x80157610
void ftKirby_CopySamus_SpecialAirNEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
        func_ovl2_800D8EB8(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
}

// 0x8015767C
f32 ftKirby_CopySamus_SpecialNStart_GetAnimPlaybackRate(ftStruct *fp)
{
    f32 ret = fp->fighter_vars.kirby.copysamus_charge_level / (f32) FTKIRBY_COPYSAMUS_CHARGE_MAX;

    ret = (-0.16000003F) * ret + 1.0F;

    return ret;
}

// 0x801576B4
void ftKirby_CopySamus_SpecialN_InitStatusVars(ftStruct *fp)
{
    fp->proc_damage = ftKirby_CopySamus_SpecialN_ProcDamage;
    fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
    fp->command_vars.flags.flag0 = 0;
}

// 0x801576CC
void ftKirby_CopySamus_SpecialNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNStart, 0.0F, ftKirby_CopySamus_SpecialNStart_GetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopySamus_SpecialN_InitStatusVars(fp);

    fp->status_vars.kirby.copysamus_specialn.is_release = (fp->fighter_vars.kirby.copysamus_charge_level == FTKIRBY_COPYSAMUS_CHARGE_MAX) ? TRUE : FALSE;
}

// 0x80157744
void ftKirby_CopySamus_SpecialAirNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNStart, 0.0F, ftKirby_CopySamus_SpecialNStart_GetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftKirby_CopySamus_SpecialN_InitStatusVars(fp);

    fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
}
