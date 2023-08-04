#include <ft/chara/ftdonkey/ftdonkey.h>

// 0x8015AF10 - Reset Giant Punch charge level
void ftDonkey_SpecialN_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.donkey.charge_level = 0;
}

// 0x8015AF1C
void ftDonkey_SpecialNStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftDonkey_SpecialNLoop_SetStatus);
}

// 0x8015AF40
void ftDonkey_SpecialAirNStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftDonkey_SpecialAirNLoop_SetStatus);
}

// 0x8015AF64
void ftDonkey_SpecialNStart_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
    {
        fp->status_vars.donkey.specialn.is_release = TRUE;
    }
}

// 0x8015AF94
void ftDonkey_SpecialNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftDonkey_SpecialNStart_SwitchStatusAir);
}

// 0x8015AFB8
void ftDonkey_SpecialAirNStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftDonkey_SpecialAirNStart_SwitchStatusGround);
}

// 0x8015AFDC
void ftDonkey_SpecialAirNStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftDonkey_SpecialN_ProcDamage;
}

// 0x8015B030
void ftDonkey_SpecialNStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialAirNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftDonkey_SpecialN_ProcDamage;

    func_ovl2_800D8EB8(fp);
}

// 0x8015B088
void ftDonkey_SpecialNLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        if (fp->status_vars.donkey.specialn.is_charging != FALSE)
        {
            if (fp->fighter_vars.donkey.charge_level < FTDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                fp->fighter_vars.donkey.charge_level++;

                if (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX)
                {
                    gOMObj_SetAnimPlaybackRate(fighter_gobj, FTDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);

                    ftColor_CheckSetColAnimIndex(fighter_gobj, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, 0);

                    fp->status_vars.donkey.specialn.is_cancel = TRUE;
                }
            }
        }
        if (fp->status_vars.donkey.specialn.is_cancel != FALSE)
        {
            func_ovl2_800DEE54(fighter_gobj);
        }
        else if (fp->status_vars.donkey.specialn.is_release != FALSE)
        {
            if (fp->ground_or_air == GA_Air)
            {
                ftDonkey_SpecialAirNEnd_SetStatus(fighter_gobj);
            }
            else ftDonkey_SpecialNEnd_SetStatus(fighter_gobj);
        }
        else fp->status_vars.donkey.specialn.is_charging = TRUE;
    }
}

// 0x8015B188
void ftDonkey_SpecialNLoop_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ground_or_air != GA_Ground) || (ftCommon_Escape_CheckInterruptSpecialNDonkey(fighter_gobj) == FALSE))
    {
        if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
        {
            fp->status_vars.donkey.specialn.is_release = TRUE;
        }
        if (fp->input.pl.button_tap & fp->input.button_mask_z)
        {
            fp->status_vars.donkey.specialn.is_cancel = TRUE;
        }
    }
}

// 0x8015B1FC
void ftDonkey_SpecialNLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftDonkey_SpecialNLoop_SwitchStatusAir);
}

// 0x8015B220
void ftDonkey_SpecialAirNLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftDonkey_SpecialAirNLoop_SwitchStatusGround);
}

// 0x8015B244
void ftDonkey_SpecialNLoop_SetProcDamageAnimRate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftDonkey_SpecialN_ProcDamage;

    if (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX)
    {
        gOMObj_SetAnimPlaybackRate(fighter_gobj, FTDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);
    }
}

// 0x8015B284
void ftDonkey_SpecialAirNLoop_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B2CC
void ftDonkey_SpecialNLoop_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialAirNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
    func_ovl2_800D8EB8(fp);
}

// 0x8015B320
void ftDonkey_SpecialNLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B35C
void ftDonkey_SpecialAirNLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialAirNLoop, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkey_SpecialNLoop_SetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B398
void ftDonkey_SpecialNEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
    else if ((fp->status_info.status_id == ftStatus_Donkey_SpecialNEnd) || (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNEnd))
    {
        s32 i;

        for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
        {
            ftHitbox *ft_hit = &fp->fighter_hit[i];

            if (ft_hit->update_state == gmHitCollision_UpdateState_New)
            {
                ft_hit->damage += fp->status_vars.donkey.specialn.charge_level * FTDONKEY_GIANTPUNCH_CHARGE_DAMAGE_MUL;
            }
        }
    }
}

// 0x8015B488
void ftDonkey_SpecialAirNEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftDonkey_SpecialAirNEnd_SwitchStatusGround);
}

// 0x8015B4AC
void ftDonkey_SpecialAirNEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    ftMap_SetGround(fp);

    status_id = (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNEnd) ? ftStatus_Donkey_SpecialNEnd : ftStatus_Donkey_SpecialNFull;

    ftStatus_Update(fighter_gobj, status_id, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
}

// 0x8015B508
void ftDonkey_SpecialN_GetStatusChargeLevelReset(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.donkey.specialn.charge_level = fp->fighter_vars.donkey.charge_level;

    fp->fighter_vars.donkey.charge_level = 0;
}

//0x8015B51C
void ftDonkey_SpecialNEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Donkey_SpecialNFull : ftStatus_Donkey_SpecialNEnd;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->phys_info.vel_ground.x = fp->fighter_vars.donkey.charge_level * FTDONKEY_GIANTPUNCH_VEL_MUL;

    ftDonkey_SpecialN_GetStatusChargeLevelReset(fighter_gobj);
}

// 0x8015B598
void ftDonkey_SpecialAirNEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Donkey_SpecialAirNFull : ftStatus_Donkey_SpecialAirNEnd;

    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    ftDonkey_SpecialN_GetStatusChargeLevelReset(fighter_gobj);
}

// 0x8015B5EC
void ftDonkey_SpecialN_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.donkey.specialn.is_release = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? TRUE : FALSE;

    fp->status_vars.donkey.specialn.is_charging = FALSE;
    fp->status_vars.donkey.specialn.is_cancel = FALSE;
}

// 0x8015B61C
void ftDonkey_SpecialNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialNStart, 0.0F, 1.0F, 0);

    fp->proc_damage = ftDonkey_SpecialN_ProcDamage;

    ftAnim_Update(fighter_gobj);
    ftDonkey_SpecialN_InitStatusVars(fighter_gobj);
}

// 0x8015B674
void ftDonkey_SpecialAirNStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Donkey_SpecialAirNStart, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->proc_damage = ftDonkey_SpecialN_ProcDamage;

    ftAnim_Update(fighter_gobj);
    ftDonkey_SpecialN_InitStatusVars(fighter_gobj);
}
