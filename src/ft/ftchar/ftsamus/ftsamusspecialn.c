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

    ftParts_GetDObjWorldPosition(fp->joint[FTSAMUS_CHARGE_JOINT], pos);
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
        if (fp->ground_or_air == GA_Air)
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
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftSamusSpecialNStartSwitchStatusAir);
}

// 0x8015D4E4
void ftSamusSpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftSamusSpecialAirNStartSwitchStatusGround);
}

// 0x8015D4E4
void ftSamusSpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialNStart, fighter_gobj->anim_frame, fp->joint[ftParts_Joint_TopN]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015D540
void ftSamusSpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialAirNStart, fighter_gobj->anim_frame, fp->joint[ftParts_Joint_TopN]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

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
                ftColor_CheckSetColAnimIndex(fighter_gobj, FTSAMUS_CHARGE_COLANIM_ID, FTSAMUS_CHARGE_COLANIM_LENGTH);
                ftSamusSpecialNDestroyChargeShot(fp);
                ftCommon_Wait_SetStatus(fighter_gobj);
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
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x8015D700
void ftSamusSpecialNLoopProcMap(GObj *fighter_gobj)
{
    ftSamusSpecialNSetChargeShotPosition(ftGetStruct(fighter_gobj));
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftSamusSpecialAirNEndSetStatus);
}

// 0x8015D734
void ftSamusSpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

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
            ftCommon_StopLoopSFX(fp);

            DObjGetStruct(fp->status_vars.samus.specialn.charge_gobj)->translate.vec.f = pos;

            wp->weapon_vars.charge_shot.is_full_charge = TRUE;
            wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.samus.charge_level;

            wpMap_RunCollisionDefault(fp->status_vars.samus.specialn.charge_gobj, fp->coll_data.p_translate, &fp->coll_data);

            wp->weapon_vars.charge_shot.owner_gobj = NULL;
            fp->status_vars.samus.specialn.charge_gobj = NULL;
        }
        else wpSamusChargeShotMakeWeapon(fighter_gobj, &pos, fp->fighter_vars.samus.charge_level, TRUE);

        if (fp->ground_or_air == GA_Air)
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
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x8015D968
void ftSamusSpecialNEndProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftSamusSpecialNEndSwitchStatusAir);
}

// 0x8015D98C
void ftSamusSpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftSamusSpecialAirNEndSwitchStatusGround);
}

// 0x8015D9B0
void ftSamusSpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DA04
void ftSamusSpecialNEndSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialAirNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DA60
void ftSamusSpecialNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftSamusSpecialNProcDamage;
}

// 0x8015DAA8
void ftSamusSpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
        ftPhysics_ClampAirVelXMax(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialAirNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

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

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialNStart, 0.0F, ftSamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftSamusSpecialNStartInitStatusVars(fp);

    fp->status_vars.samus.specialn.is_release = (fp->fighter_vars.samus.charge_level == FTSAMUS_CHARGE_MAX) ? TRUE : FALSE;
}

// 0x8015DBDC
void ftSamusSpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Samus_SpecialAirNStart, 0.0F, ftSamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftSamusSpecialNStartInitStatusVars(fp);

    fp->status_vars.samus.specialn.is_release = TRUE;
}
