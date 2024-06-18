#include <ft/fighter.h>

extern void gcSetDObjAnimPlaybackRate(GObj*, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015AF10 - Reset Giant Punch charge level
void ftDonkeySpecialNProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.donkey.charge_level = 0;
}

// 0x8015AF1C
void ftDonkeySpecialNStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftDonkeySpecialNLoopSetStatus);
}

// 0x8015AF40
void ftDonkeySpecialAirNStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftDonkeySpecialAirNLoopSetStatus);
}

// 0x8015AF64
void ftDonkeySpecialNStartProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
    {
        fp->status_vars.donkey.specialn.is_release = TRUE;
    }
}

// 0x8015AF94
void ftDonkeySpecialNStartProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftDonkeySpecialNStartSwitchStatusAir);
}

// 0x8015AFB8
void ftDonkeySpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftDonkeySpecialAirNStartSwitchStatusGround);
}

// 0x8015AFDC
void ftDonkeySpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftDonkeySpecialNProcDamage;
}

// 0x8015B030
void ftDonkeySpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftDonkeySpecialNProcDamage;

    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015B088
void ftDonkeySpecialNLoopProcUpdate(GObj *fighter_gobj)
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
                    gcSetDObjAnimPlaybackRate(fighter_gobj, FTDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);

                    ftColor_CheckSetColAnimIndex(fighter_gobj, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);

                    fp->status_vars.donkey.specialn.is_cancel = TRUE;
                }
            }
        }
        if (fp->status_vars.donkey.specialn.is_cancel != FALSE)
        {
            ftMap_SetStatusWaitOrFall(fighter_gobj);
        }
        else if (fp->status_vars.donkey.specialn.is_release != FALSE)
        {
            if (fp->ground_or_air == GA_Air)
            {
                ftDonkeySpecialAirNEndSetStatus(fighter_gobj);
            }
            else ftDonkeySpecialNEndSetStatus(fighter_gobj);
        }
        else fp->status_vars.donkey.specialn.is_charging = TRUE;
    }
}

// 0x8015B188
void ftDonkeySpecialNLoopProcInterrupt(GObj *fighter_gobj)
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
void ftDonkeySpecialNLoopProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftDonkeySpecialNLoopSwitchStatusAir);
}

// 0x8015B220
void ftDonkeySpecialAirNLoopProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftDonkeySpecialAirNLoopSwitchStatusGround);
}

// 0x8015B244
void ftDonkeySpecialNLoopSetProcDamageAnimRate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftDonkeySpecialNProcDamage;

    if (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX)
    {
        gcSetDObjAnimPlaybackRate(fighter_gobj, FTDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);
    }
}

// 0x8015B284
void ftDonkeySpecialAirNLoopSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B2CC
void ftDonkeySpecialNLoopSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015B320
void ftDonkeySpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B35C
void ftDonkeySpecialAirNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirNLoop, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x8015B398
void ftDonkeySpecialNEndProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
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
void ftDonkeySpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftDonkeySpecialAirNEndSwitchStatusGround);
}

// 0x8015B4AC
void ftDonkeySpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    ftMap_SetGround(fp);

    status_id = (fp->status_info.status_id == ftStatus_Donkey_SpecialAirNEnd) ? ftStatus_Donkey_SpecialNEnd : ftStatus_Donkey_SpecialNFull;

    ftMainSetFighterStatus(fighter_gobj, status_id, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
}

// 0x8015B508
void ftDonkeySpecialNGetStatusChargeLevelReset(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.donkey.specialn.charge_level = fp->fighter_vars.donkey.charge_level;

    fp->fighter_vars.donkey.charge_level = 0;
}

//0x8015B51C
void ftDonkeySpecialNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Donkey_SpecialNFull : ftStatus_Donkey_SpecialNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->phys_info.vel_ground.x = fp->fighter_vars.donkey.charge_level * FTDONKEY_GIANTPUNCH_VEL_MUL;

    ftDonkeySpecialNGetStatusChargeLevelReset(fighter_gobj);
}

// 0x8015B598
void ftDonkeySpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Donkey_SpecialAirNFull : ftStatus_Donkey_SpecialAirNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    ftDonkeySpecialNGetStatusChargeLevelReset(fighter_gobj);
}

// 0x8015B5EC
void ftDonkeySpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.donkey.specialn.is_release = (fp->fighter_vars.donkey.charge_level == FTDONKEY_GIANTPUNCH_CHARGE_MAX) ? TRUE : FALSE;

    fp->status_vars.donkey.specialn.is_charging = FALSE;
    fp->status_vars.donkey.specialn.is_cancel = FALSE;
}

// 0x8015B61C
void ftDonkeySpecialNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialNStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_damage = ftDonkeySpecialNProcDamage;

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftDonkeySpecialNInitStatusVars(fighter_gobj);
}

// 0x8015B674
void ftDonkeySpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Donkey_SpecialAirNStart, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->proc_damage = ftDonkeySpecialNProcDamage;

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftDonkeySpecialNInitStatusVars(fighter_gobj);
}
