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
    ftAnimEndSetStatus(fighter_gobj, ftKirbyCopyDonkeySpecialNLoopSetStatus);
}

// 0x801577D0
void ftKirbyCopyDonkeySpecialAirNStartProcUpdate(GObj *fighter_gobj)
{
    ftAnimEndSetStatus(fighter_gobj, ftKirbyCopyDonkeySpecialAirNLoopSetStatus);
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
    mpCommonProcFighterOnEdge(fighter_gobj, ftKirbyCopyDonkeySpecialNStartSwitchStatusAir);
}

// 0x80157848
void ftKirbyCopyDonkeySpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyDonkeySpecialAirNStartSwitchStatusGround);
}

// 0x8015786C
void ftKirbyCopyDonkeySpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;
}

// 0x801578C0
void ftKirbyCopyDonkeySpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialAirNStart, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftPhysicsClampAirVelXMax(fp);
}

// 0x80157918
void ftKirbyCopyDonkeySpecialNLoopProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->anim_rate))
    {
        if (fp->status_vars.kirby.copydonkey_specialn.is_charging != FALSE)
        {
            if (fp->fighter_vars.kirby.copydonkey_charge_level < FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
            {
                fp->fighter_vars.kirby.copydonkey_charge_level++;

                if (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX)
                {
                    gcSetDObjAnimPlaybackRate(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHRAGE_ANIM_SPEED);

                    ftParamCheckSetFighterColAnimID(fighter_gobj, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_ID, FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_COLANIM_LENGTH);

                    fp->status_vars.kirby.copydonkey_specialn.is_cancel = TRUE;
                }
            }
        }
        if (fp->status_vars.kirby.copydonkey_specialn.is_cancel != FALSE)
        {
            mpCommonSetFighterWaitOrFall(fighter_gobj);
        }
        else if (fp->status_vars.kirby.copydonkey_specialn.is_release != FALSE)
        {
            if (fp->ga == nMPKineticsAir)
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

    if ((fp->ga != nMPKineticsGround) || (ftCommonEscapeCheckInterruptSpecialNDonkey(fighter_gobj) == FALSE))
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
    mpCommonProcFighterOnEdge(fighter_gobj, ftKirbyCopyDonkeySpecialNLoopSwitchStatusAir);
}

// 0x80157AB0
void ftKirbyCopyDonkeySpecialAirNLoopProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyDonkeySpecialAirNLoopSwitchStatusGround);
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
    mpCommonSetFighterGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUS_PRESERVE_RUMBLE | FTSTATUS_PRESERVE_COLANIM));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157B5C
void ftKirbyCopyDonkeySpecialNLoopSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialAirNLoop, fighter_gobj->anim_frame, 1.0F, (FTSTATUS_PRESERVE_RUMBLE | FTSTATUS_PRESERVE_COLANIM));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
    ftPhysicsClampAirVelXMax(fp);
}

// 0x80157BB0
void ftKirbyCopyDonkeySpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialNLoop, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157BEC
void ftKirbyCopyDonkeySpecialAirNLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialAirNLoop, 0.0F, 1.0F, (FTSTATUS_PRESERVE_FASTFALL | FTSTATUS_PRESERVE_COLANIM));
    ftKirbyCopyDonkeySpecialNLoopSetProcDamageAnimRate(fighter_gobj);
}

// 0x80157C28
void ftKirbyCopyDonkeySpecialNEndProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        mpCommonSetFighterWaitOrFall(fighter_gobj);
    }
    else if ((fp->status_info.status_id == nFTKirbyStatusCopyDonkeySpecialNEnd) || (fp->status_info.status_id == nFTKirbyStatusCopyDonkeySpecialAirNEnd))
    {
        s32 i;

        for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
        {
            ftHitbox *ft_hit = &fp->fighter_hit[i];

            if (ft_hit->update_state == nGMHitUpdateNew)
            {
                ft_hit->damage += fp->status_vars.kirby.copydonkey_specialn.charge_level * FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_DAMAGE_MUL;
            }
        }
    }
}

// 0x80157D18
void ftKirbyCopyDonkeySpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftKirbyCopyDonkeySpecialAirNEndSwitchStatusGround);
}

// 0x80157D3C
void ftKirbyCopyDonkeySpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    mpCommonSetFighterGround(fp);

    status_id = (fp->status_info.status_id == nFTKirbyStatusCopyDonkeySpecialAirNEnd) ? nFTKirbyStatusCopyDonkeySpecialNEnd : nFTKirbyStatusCopyDonkeySpecialNFull;

    ftMainSetFighterStatus(fighter_gobj, status_id, fighter_gobj->anim_frame, 1.0F, (FTSTATUS_PRESERVE_COLANIM | FTSTATUS_PRESERVE_HIT));
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

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? nFTKirbyStatusCopyDonkeySpecialNFull : nFTKirbyStatusCopyDonkeySpecialNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->phys_info.vel_ground.x = fp->fighter_vars.kirby.copydonkey_charge_level * FTKIRBY_COPYDONKEY_GIANTPUNCH_VEL_MUL;

    ftKirbyCopyDonkeySpecialNGetStatusChargeLevelReset(fighter_gobj);
}

// 0x80157E28
void ftKirbyCopyDonkeySpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    s32 status_id = (fp->fighter_vars.kirby.copydonkey_charge_level == FTKIRBY_COPYDONKEY_GIANTPUNCH_CHARGE_MAX) ? nFTKirbyStatusCopyDonkeySpecialAirNFull : nFTKirbyStatusCopyDonkeySpecialAirNEnd;

    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, (FTSTATUS_PRESERVE_FASTFALL | FTSTATUS_PRESERVE_COLANIM));

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

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialNStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyDonkeySpecialNInitStatusVars(fighter_gobj);
}

// 0x80157F04
void ftKirbyCopyDonkeySpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusCopyDonkeySpecialAirNStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_FASTFALL);

    fp->proc_damage = ftKirbyCopyDonkeySpecialNProcDamage;

    ftMainPlayAnimNoEffect(fighter_gobj);
    ftKirbyCopyDonkeySpecialNInitStatusVars(fighter_gobj);
}
