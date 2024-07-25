#include <ft/fighter.h>

extern void gcSetDObjAnimPlaybackRate(GObj*, f32);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x801577A0
void ftKirbyCopyDonkeySpecialNProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.kirby.copydonkey_charge_level = 0;
}

// 0x801577AC
void ftKirbyCopyDonkeySpecialNStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftKirbyCopyDonkeySpecialNLoopSetStatus);
}

// 0x801577D0
void ftKirbyCopyDonkeySpecialAirNStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftKirbyCopyDonkeySpecialAirNLoopSetStatus);
}

// 0x801577F4
void ftKirbyCopyDonkeySpecialNStartProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->input.pl.button_tap & (fp->input.button_mask_b | fp->input.button_mask_a))
    {
        fp->status_vars.kirby.copydonkey_specialn.is_release = TRUE;
    }
}

// 0x80157824
void ftKirbyCopyDonkeySpecialNStartProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopyDonkeySpecialNStartSwitchStatusAir);
}

// 0x80157848
void ftKirbyCopyDonkeySpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyDonkeySpecialAirNStartSwitchStatusGround);
}

// 0x8015786C
void ftKirbyCopyDonkeySpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;
}

// 0x801578C0
void ftKirbyCopyDonkeySpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80157918
void ftKirbyCopyDonkeySpecialNLoopProcUpdate(GObj *fighter_gobj)
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
                    gcSetDObjAnimPlaybackRate(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);

                    ftColor_CheckSetColAnimIndex(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);

                    fp->status_vars.kirby.copydonkey_specialn.is_cancel = TRUE;
                }
            }
        }
        if (fp->status_vars.kirby.copydonkey_specialn.is_cancel != FALSE)
        {
            ftMap_SetStatusWaitOrFall(fighter_gobj);
        }
        else if (fp->status_vars.kirby.copydonkey_specialn.is_release != FALSE)
        {
            if (fp->ground_or_air == nMPKineticsAir)
            {
                ftKirbyCopyDonkeySpecialAirNEndSetStatus(fighter_gobj);
            }
            else ftKirbyCopyDonkeySpecialNEndSetStatus(fighter_gobj);
        }
        else fp->status_vars.kirby.copydonkey_specialn.is_charging = TRUE;
    }
}

// 0x80157A18
void ftKirbyCopyDonkeySpecialNLoopProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ground_or_air != nMPKineticsGround) || (ftCommonEscapeCheckInterruptSpecialNDonkey(fighter_gobj) == FALSE))
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
void ftKirbyCopyDonkeySpecialNLoopProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopyDonkeySpecialNLoopSwitchStatusAir);
}

// 0x80157AB0
void ftKirbyCopyDonkeySpecialAirNLoopProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyDonkeySpecialAirNLoopSwitchStatusGround);
}

// 0x80157AD4
void ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
    {
        gcSetDObjAnimPlaybackRate(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);
    }
}

// 0x80157B14
void ftKirbyCopyDonkeySpecialAirNLoopSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157B5C
void ftKirbyCopyDonkeySpecialNLoopSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80157BB0
void ftKirbyCopyDonkeySpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157BEC
void ftKirbyCopyDonkeySpecialAirNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNLoop, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157C28
void ftKirbyCopyDonkeySpecialNEndProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
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
void ftKirbyCopyDonkeySpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyDonkeySpecialAirNEndSwitchStatusGround);
}

// 0x80157D3C
void ftKirbyCopyDonkeySpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    ftMap_SetGround(fp);

    status_id = (fp->status_info.status_id == ftStatus_Kirby_CopyDonkey_SpecialAirNEnd) ? ftStatus_Kirby_CopyDonkey_SpecialNEnd : ftStatus_Kirby_CopyDonkey_SpecialNFull;

    ftMainSetFighterStatus(fighter_gobj, status_id, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
}

// 0x80157D98
void ftKirbyCopyDonkeySpecialNGetStatusChargeLevelReset(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.kirby.copydonkey_specialn.charge_level = fp->fighter_vars.kirby.copydonkey_charge_level;

    fp->fighter_vars.kirby.copydonkey_charge_level = 0;
}

// 0x80157DAC
void ftKirbyCopyDonkeySpecialNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Kirby_CopyDonkey_SpecialNFull : ftStatus_Kirby_CopyDonkey_SpecialNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->phys_info.vel_ground.x = fp->fighter_vars.kirby.copydonkey_charge_level * FTKIRBY_COPYDONKEY_GIANTPUNCH_VEL_MUL;

    ftKirbyCopyDonkeySpecialNGetStatusChargeLevelReset(fighter_gobj);
}

// 0x80157E28
void ftKirbyCopyDonkeySpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? ftStatus_Kirby_CopyDonkey_SpecialAirNFull : ftStatus_Kirby_CopyDonkey_SpecialAirNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, (FTSTATUPDATE_FASTFALL_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    ftKirbyCopyDonkeySpecialNGetStatusChargeLevelReset(fighter_gobj);
}

// 0x80157E7C
void ftKirbyCopyDonkeySpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.kirby.copydonkey_specialn.is_release = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? TRUE : FALSE;

    fp->status_vars.kirby.copydonkey_specialn.is_charging = FALSE;
    fp->status_vars.kirby.copydonkey_specialn.is_cancel = FALSE;
}

// 0x80157EAC
void ftKirbyCopyDonkeySpecialNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialNStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyDonkeySpecialNInitStatusVars(fighter_gobj);
}

// 0x80157F04
void ftKirbyCopyDonkeySpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyDonkey_SpecialAirNStart, 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyDonkeySpecialNInitStatusVars(fighter_gobj);
}
