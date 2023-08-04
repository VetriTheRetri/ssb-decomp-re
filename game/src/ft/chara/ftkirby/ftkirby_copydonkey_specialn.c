#include <ft/chara/ftkirby/ftkirby.h>

// 0x801577A0
void ftKirby_CopyDonkey_SpecialN_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.kirby.copydonkey_charge_level = 0;
}

// 0x801577AC
void ftKirby_CopyDonkey_SpecialNStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftKirby_CopyDonkey_SpecialNLoop_SetStatus);
}

// 0x801577D0
void ftKirby_CopyDonkey_SpecialAirNStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftKirby_CopyDonkey_SpecialAirNLoop_SetStatus);
}

// 0x801577F4
void ftKirby_CopyDonkey_SpecialNStart_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
    {
        fp->status_vars.kirby.copydonkey_specialn.is_release = TRUE;
    }
}

// 0x80157824
void ftKirby_CopyDonkey_SpecialNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopyDonkey_SpecialNStart_SwitchStatusAir);
}

// 0x80157848
void ftKirby_CopyDonkey_SpecialAirNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyDonkey_SpecialAirNStart_SwitchStatusGround);
}

// 0x8015786C
void ftKirby_CopyDonkey_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopyDonkey_SpecialN_ProcDamage;
}

// 0x801578C0
void ftKirby_CopyDonkey_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirby_CopyDonkey_SpecialN_ProcDamage;

    func_ovl2_800D8EB8(fp);
}

// 0x80157918
void ftKirby_CopyDonkey_SpecialNLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        if (fp->status_vars.kirby.copydonkey_specialn.is_charging != FALSE)
        {
            if (fp->fighter_vars.kirby.copydonkey_charge_level < FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                fp->fighter_vars.kirby.copydonkey_charge_level++;

                if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
                {
                    gOMObj_SetAnimPlaybackRate(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);

                    ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);

                    fp->status_vars.kirby.copydonkey_specialn.is_cancel = TRUE;
                }
            }
        }
        if (fp->status_vars.kirby.copydonkey_specialn.is_cancel != FALSE)
        {
            func_ovl2_800DEE54(fighter_gobj);
        }
        else if (fp->status_vars.kirby.copydonkey_specialn.is_release != FALSE)
        {
            if (fp->ground_or_air == GA_Air)
            {
                ftKirby_CopyDonkey_SpecialNEnd_SetStatus(fighter_gobj);
            }
            else func_ovl3_80157DAC(fighter_gobj);
        }
        else fp->status_vars.kirby.copydonkey_specialn.is_charging = TRUE;
    }
}

// 0x80157A18
void ftKirby_CopyDonkey_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ground_or_air != GA_Ground) || (ftCommon_Escape_CheckInterruptSpecialNDonkey(fighter_gobj) == FALSE))
    {
        if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
        {
            fp->status_vars.kirby.copydonkey_specialn.is_release = TRUE;
        }
        if (fp->input.pl.button_tap & fp->input.button_mask_z)
        {
            fp->status_vars.kirby.copydonkey_specialn.is_cancel = TRUE;
        }
    }
}

// 0x80157A8C
void ftKirby_CopyDonkey_SpecialNLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftKirby_CopyDonkey_SpecialNLoop_SwitchStatusAir);
}

// 0x80157AB0
void ftKirby_CopyDonkey_SpecialAirNLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyDonkey_SpecialAirNLoop_SwitchStatusGround);
}

// 0x80157AD4
void ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftKirby_CopyDonkey_SpecialN_ProcDamage;

    if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
    {
        gOMObj_SetAnimPlaybackRate(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);
    }
}

// 0x80157B14
void ftKirby_CopyDonkey_SpecialAirNLoop_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x80157B5C
void ftKirby_CopyDonkey_SpecialNLoop_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
    func_ovl2_800D8EB8(fp);
}

// 0x80157BB0
void ftKirby_CopyDonkey_SpecialNLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x80157BEC
void ftKirby_CopyDonkey_SpecialAirNLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNLoop, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirby_CopyDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x80157C28
void ftKirby_CopyDonkey_SpecialNEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
    else if ((fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialNEnd) || (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNEnd))
    {
        s32 i;

        for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
        {
            ftHitbox *ft_hit = &fp->fighter_hit[i];

            if (ft_hit->update_state == gmHitCollision_UpdateState_New)
            {
                ft_hit->damage += fp->status_vars.kirby.copydonkey_specialn.charge_level * FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_DAMAGE_MUL;
            }
        }
    }
}

// 0x80157D18
void ftKirby_CopyDonkey_SpecialAirNEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyDonkey_SpecialAirNEnd_SwitchStatusGround);
}

// 0x80157D3C
void ftKirby_CopyDonkey_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    ftMap_SetGround(fp);

    status_id = (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNEnd) ? ftStatus_Kirby_CopyDonkey_SpecialNEnd : ftStatus_Kirby_CopyDonkey_SpecialNFull;

    ftStatus_Update(fighter_gobj, status_id, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
}

// 0x80157D98
void ftKirby_CopyDonkey_SpecialN_GetStatusChargeLevelReset(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.kirby.copydonkey_specialn.charge_level = fp->fighter_vars.kirby.copydonkey_charge_level;

    fp->fighter_vars.kirby.copydonkey_charge_level = 0;
}

// 0x80157DAC
void func_ovl3_80157DAC(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Kirby_CopyDonkey_SpecialNFull : ftStatus_Kirby_CopyDonkey_SpecialNEnd;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->phys_info.vel_ground.x = fp->fighter_vars.kirby.copydonkey_charge_level * FTKIRBY_COPYDONKEY_GIANTPUNCH_VEL_MUL;

    ftKirby_CopyDonkey_SpecialN_GetStatusChargeLevelReset(fighter_gobj);
}

// 0x80157E28
void ftKirby_CopyDonkey_SpecialNEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Kirby_CopyDonkey_SpecialAirNFull : ftStatus_Kirby_CopyDonkey_SpecialAirNEnd;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    ftKirby_CopyDonkey_SpecialN_GetStatusChargeLevelReset(fighter_gobj);
}

// 0x80157E7C
void ftKirby_CopyDonkey_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.kirby.copydonkey_specialn.is_release = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? TRUE : FALSE;

    fp->status_vars.kirby.copydonkey_specialn.is_charging = FALSE;
    fp->status_vars.kirby.copydonkey_specialn.is_cancel = FALSE;
}

// 0x80157EAC
void ftKirby_CopyDonkey_SpecialNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_damage = ftKirby_CopyDonkey_SpecialN_ProcDamage;

    ftAnim_Update(fighter_gobj);
    ftKirby_CopyDonkey_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x80157F04
void ftKirby_CopyDonkey_SpecialAirNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNStart, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->proc_damage = ftKirby_CopyDonkey_SpecialN_ProcDamage;

    ftAnim_Update(fighter_gobj);
    ftKirby_CopyDonkey_SpecialN_InitStatusVars(fighter_gobj);
}
