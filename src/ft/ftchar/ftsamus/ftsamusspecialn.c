#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015D300
void ftSamusSpecialNDestroyChargeShot(ftStruct *fp)
{
    if (fp->status_vars.samus.specialn.charge_gobj != NULL)
    {
        wpMainDestroyWeapon(fp->status_vars.samus.specialn.charge_gobj);

        fp->status_vars.samus.specialn.charge_gobj = NULL;
    }
}

// 0x8015D338 - Runs when Samus is hit out of Charge Shot
void ftSamusSpecialNProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.samus.charge_level = 0;

    ftSamusSpecialNDestroyChargeShot(fp);
}

// 0x8015D35C
void ftSamusSpecialNGetChargeShotPosition(ftStruct *fp, Vec3f *pos)
{
    pos->y = pos->z = 0.0F;
    pos->x = FTSAMUS_CHARGE_OFF_X;

    gmCollisionGetFighterPartsWorldPosition(fp->joints[FTSAMUS_CHARGE_JOINT], pos);
}

// 0x8015D394
void ftSamusSpecialNSetChargeShotPosition(ftStruct *fp)
{
    Vec3f pos;

    if (fp->status_vars.samus.specialn.charge_gobj != NULL)
    {
        ftSamusSpecialNGetChargeShotPosition(fp, &pos);

        DObjGetStruct(fp->status_vars.samus.specialn.charge_gobj)->translate.vec.f = pos;
    }
}

// 0x8015D3EC
void ftSamusSpecialNStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ga == nMPKineticsAir)
        {
            ftSamusSpecialAirNEndSetStatus(fighter_gobj);
        }
        else if (fp->status_vars.samus.specialn.is_release != FALSE)
        {
            ftSamusSpecialNEndSetStatus(fighter_gobj);
        }
        else ftSamusSpecialNLoopSetStatus(fighter_gobj);
    }
}

// 0x8015D464
void ftSamusSpecialNStartProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        fp->status_vars.samus.specialn.is_release = TRUE;
    }
}

// 0x8015D49C
void ftSamusSpecialNStartProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnEdge(fighter_gobj, ftSamusSpecialNStartSwitchStatusAir);
}

// 0x8015D4E4
void ftSamusSpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftSamusSpecialAirNStartSwitchStatusGround);
}

// 0x8015D4E4
void ftSamusSpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterGround(fp);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialNStart, fighter_gobj->anim_frame, fp->joints[nFTPartsJointTopN]->anim_rate, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015D540
void ftSamusSpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirNStart, fighter_gobj->anim_frame, fp->joints[nFTPartsJointTopN]->anim_rate, FTSTATUS_PRESERVE_COLANIM);
    ftPhysicsClampAirVelXMax(fp);

    fp->proc_damage = ftSamusSpecialNProcDamage;

    fp->status_vars.samus.specialn.is_release = TRUE;
}

// 0x8015D5AC
void ftSamusSpecialNLoopProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.samus.specialn.charge_int--;

    if (fp->status_vars.samus.specialn.charge_int == 0)
    {
        fp->status_vars.samus.specialn.charge_int = FTSAMUS_CHARGE_INT;

        if (fp->fighter_vars.samus.charge_level <= (FTSAMUS_CHARGE_MAX - 1))
        {
            fp->fighter_vars.samus.charge_level++;

            if (fp->fighter_vars.samus.charge_level == FTSAMUS_CHARGE_MAX)
            {
                ftParamCheckSetFighterColAnimID(fighter_gobj, FTSAMUS_CHARGE_COLANIM_ID, FTSAMUS_CHARGE_COLANIM_LENGTH);
                ftSamusSpecialNDestroyChargeShot(fp);
                ftCommonWaitSetStatus(fighter_gobj);
            }
            else if (fp->status_vars.samus.specialn.charge_gobj != NULL)
            {
                wpStruct *wp = wpGetStruct(fp->status_vars.samus.specialn.charge_gobj);

                wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.samus.charge_level;
            }
        }
    }
}

// 0x8015D640
void ftSamusSpecialNLoopProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        ftSamusSpecialNEndSetStatus(fighter_gobj);
        return;
    }
    status_id = ftCommonEscapeGetStatus(fp);

    if (status_id != -1)
    {
        ftSamusSpecialNDestroyChargeShot(fp);

        /* WARNING: Undefined behavior. This function expects a third argument
         * for item throw buffer frames, but never receives it.
         */ 
        ftCommonEscapeSetStatus(fighter_gobj, status_id);
    }
    else if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftSamusSpecialNDestroyChargeShot(fp);
        ftCommonWaitSetStatus(fighter_gobj);
    }
}

// 0x8015D700
void ftSamusSpecialNLoopProcMap(GObj *fighter_gobj)
{
    ftSamusSpecialNSetChargeShotPosition(ftGetStruct(fighter_gobj));
    mpCommonProcFighterOnEdge(fighter_gobj, ftSamusSpecialAirNEndSetStatus);
}

// 0x8015D734
void ftSamusSpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialNLoop, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftSamusSpecialNProcDamage;
    fp->status_vars.samus.specialn.charge_int = FTSAMUS_CHARGE_INT;

    ftSamusSpecialNGetChargeShotPosition(fp, &pos);
    fp->status_vars.samus.specialn.charge_gobj = wpSamusChargeShotMakeWeapon(fighter_gobj, &pos, fp->fighter_vars.samus.charge_level, FALSE);
}

// 0x8015D7AC
void ftSamusSpecialNEndProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    wpStruct *wp;
    f32 charge_recoil_x;
    f32 charge_recoil_y;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        ftSamusSpecialNGetChargeShotPosition(fp, &pos);

        if (fp->status_vars.samus.specialn.charge_gobj != NULL)
        {
            wp = wpGetStruct(fp->status_vars.samus.specialn.charge_gobj);
            ftParamStopLoopSFX(fp);

            DObjGetStruct(fp->status_vars.samus.specialn.charge_gobj)->translate.vec.f = pos;

            wp->weapon_vars.charge_shot.is_full_charge = TRUE;
            wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.samus.charge_level;

            mpCommonRunWeaponCollisionDefault(fp->status_vars.samus.specialn.charge_gobj, fp->coll_data.p_translate, &fp->coll_data);

            wp->weapon_vars.charge_shot.owner_gobj = NULL;
            fp->status_vars.samus.specialn.charge_gobj = NULL;
        }
        else wpSamusChargeShotMakeWeapon(fighter_gobj, &pos, fp->fighter_vars.samus.charge_level, TRUE);

        if (fp->ga == nMPKineticsAir)
        {
            charge_recoil_x = (fp->fighter_vars.samus.charge_level + 1);

            fp->phys_info.vel_air.x = ((FTSAMUS_CHARGE_RECOIL_MUL * charge_recoil_x) + FTSAMUS_CHARGE_RECOIL_BASE) * -fp->lr;

            charge_recoil_y = charge_recoil_x + FTSAMUS_CHARGE_RECOIL_ADD + (fp->fighter_vars.samus.charge_recoil * -FTSAMUS_CHARGE_RECOIL_BASE);

            if (fp->phys_info.vel_air.y < charge_recoil_y)
            {
                fp->phys_info.vel_air.y = charge_recoil_y;
            }
            fp->fighter_vars.samus.charge_recoil++;
        }
        else fp->phys_info.vel_ground.x = -((FTSAMUS_CHARGE_RECOIL_MUL * (fp->fighter_vars.samus.charge_level + 1)) + FTSAMUS_CHARGE_RECOIL_BASE);
        
        fp->fighter_vars.samus.charge_level = 0;
        fp->proc_damage = NULL;
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        mpCommonSetFighterWaitOrFall(fighter_gobj);
    }
}

// 0x8015D968
void ftSamusSpecialNEndProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnEdge(fighter_gobj, ftSamusSpecialNEndSwitchStatusAir);
}

// 0x8015D98C
void ftSamusSpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftSamusSpecialAirNEndSwitchStatusGround);
}

// 0x8015D9B0
void ftSamusSpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DA04
void ftSamusSpecialNEndSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_COLANIM);
    ftPhysicsClampAirVelXMax(fp);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DA60
void ftSamusSpecialNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialNEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DAA8
void ftSamusSpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        mpCommonSetFighterAir(fp);
        ftPhysicsClampAirVelXMax(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirNEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DB14
f32 ftSamusSpecialNStartGetAnimPlaybackRate(ftStruct *fp)
{
    f32 ret = fp->fighter_vars.samus.charge_level / (f32)FTSAMUS_CHARGE_MAX;

    ret = (-0.16000003F) * ret + 1.0F;

    return ret;
}

// 0x8015DB4C
void ftSamusSpecialNStartInitStatusVars(ftStruct *fp)
{
    fp->proc_damage = ftSamusSpecialNProcDamage;
    fp->status_vars.samus.specialn.charge_gobj = NULL;
    fp->command_vars.flags.flag0 = FALSE;
}

// 0x8015DB64
void ftSamusSpecialNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialNStart, 0.0F, ftSamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftSamusSpecialNStartInitStatusVars(fp);

    fp->status_vars.samus.specialn.is_release = (fp->fighter_vars.samus.charge_level == FTSAMUS_CHARGE_MAX) ? TRUE : FALSE;
}

// 0x8015DBDC
void ftSamusSpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirNStart, 0.0F, ftSamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftSamusSpecialNStartInitStatusVars(fp);

    fp->status_vars.samus.specialn.is_release = TRUE;
}
