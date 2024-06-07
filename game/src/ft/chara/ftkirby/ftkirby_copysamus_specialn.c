#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x80156E60
void ftKirbyCopySamusSpecialNDestroyChargeShot(ftStruct *fp)
{
    if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
    {
        wpMainDestroyWeapon(fp->status_vars.kirby.copysamus_specialn.charge_gobj);

        fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
    }
}

// 0x80156E98
void ftKirbyCopySamusSpecialNProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->fighter_vars.kirby.copysamus_charge_level = 0;

    ftKirbyCopySamusSpecialNDestroyChargeShot(fp);
}

// 0x80156EBC
void ftKirbyCopySamusSpecialNGetChargeShotPosition(ftStruct *fp, Vec3f *pos)
{
    pos->x = 0.0F;
    pos->y = FTKIRBY_COPYSAMUS_CHARGE_OFF_Y;
    pos->z = FTKIRBY_COPYSAMUS_CHARGE_OFF_Z;

    ftParts_GetDObjWorldPosition(fp->joint[FTKIRBY_COPYSAMUS_CHARGE_JOINT], pos);
}

// 0x80156EFC
void ftKirbyCopySamusSpecialNSetChargeShotPosition(ftStruct *fp)
{
    Vec3f pos;

    if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
    {
        ftKirbyCopySamusSpecialNGetChargeShotPosition(fp, &pos);

        DObjGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj)->translate.vec.f = pos;
    }
}

// 0x80156F54
void ftKirbyCopySamusSpecialNStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftKirbyCopySamusSpecialAirNEndSetStatus(fighter_gobj);
        }
        else if (fp->status_vars.kirby.copysamus_specialn.is_release != FALSE)
        {
            ftKirbyCopySamusSpecialNEndSetStatus(fighter_gobj);
        }
        else ftKirbyCopySamusSpecialNLoopSetStatus(fighter_gobj);
    }
}

// 0x80156FCC
void ftKirbyCopySamusSpecialNStartProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
    }
}

// 0x80157004
void ftKirbyCopySamusSpecialNStartProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopySamusSpecialNStartSwitchStatusAir);
}

// 0x80157028
void ftKirbyCopySamusSpecialAirNStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopySamusSpecialAirNStartSwitchStatusGround);
}

// 0x8015704C
void ftKirbyCopySamusSpecialAirNStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNStart, fighter_gobj->anim_frame, fp->joint[ftParts_Joint_TopN]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
}

// 0x801570A8
void ftKirbyCopySamusSpecialNStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNStart, fighter_gobj->anim_frame, fp->joint[ftParts_Joint_TopN]->dobj_f1, FTSTATUPDATE_COLANIM_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;

    fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
}

// 0x80157114
void ftKirbyCopySamusSpecialNLoopProcUpdate(GObj *fighter_gobj)
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
                ftKirbyCopySamusSpecialNDestroyChargeShot(fp);
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
void ftKirbyCopySamusSpecialNLoopProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if ((fp->input.pl.button_tap & fp->input.button_mask_b) || (fp->input.pl.button_tap & fp->input.button_mask_a))
    {
        ftKirbyCopySamusSpecialNEndSetStatus(fighter_gobj);

        return;
    }

    status_id = ftCommon_Escape_GetStatus(fp);

    if (status_id != -1)
    {
        ftKirbyCopySamusSpecialNDestroyChargeShot(fp);
        ftCommon_Escape_SetStatus(fighter_gobj, status_id);
    }

    else if (fp->input.pl.button_tap & fp->input.button_mask_z)
    {
        ftSamusSpecialNDestroyChargeShot(fp);
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80157268
void ftKirbyCopySamusSpecialNLoopProcMap(GObj *fighter_gobj)
{
    ftKirbyCopySamusSpecialNSetChargeShotPosition(ftGetStruct(fighter_gobj));
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopySamusSpecialAirNEndSetStatus);
}

// 0x8015729C
void ftKirbyCopySamusSpecialNLoopSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNLoop, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
    fp->status_vars.samus.specialn.charge_int = FTKIRBY_COPYSAMUS_CHARGE_INT;

    ftKirbyCopySamusSpecialNGetChargeShotPosition(fp, &pos);
    fp->status_vars.kirby.copysamus_specialn.charge_gobj = wpSamusChargeShotMakeWeapon(fighter_gobj, &pos, fp->fighter_vars.kirby.copysamus_charge_level, 0);
}

// 0x80157314
void ftKirbyCopySamusSpecialNEndProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    wpStruct *wp;
    f32 charge_recoil_x;
    f32 charge_recoil_y;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        ftKirbyCopySamusSpecialNGetChargeShotPosition(fp, &pos);

        if (fp->status_vars.kirby.copysamus_specialn.charge_gobj != NULL)
        {
            wp = wpGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj);
            ftCommon_StopLoopSFX(fp);

            DObjGetStruct(fp->status_vars.kirby.copysamus_specialn.charge_gobj)->translate.vec.f = pos;

            wp->weapon_vars.charge_shot.is_full_charge = TRUE;
            wp->weapon_vars.charge_shot.charge_size = fp->fighter_vars.kirby.copysamus_charge_level;

            wpMap_RunCollisionDefault(fp->status_vars.kirby.copysamus_specialn.charge_gobj, fp->coll_data.p_translate, &fp->coll_data);

            wp->weapon_vars.charge_shot.owner_gobj = NULL;
            fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
        }
        else wpSamusChargeShotMakeWeapon(fighter_gobj, &pos, fp->fighter_vars.kirby.copysamus_charge_level, 1);

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
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x801574D0
void ftKirbyCopySamusSpecialNEndProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopySamusSpecialNEndSwitchStatusAir);
}

// 0x801574F4
void ftKirbyCopySamusSpecialAirNEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopySamusSpecialAirNEndSwitchStatusGround);
}

// 0x80157518
void ftKirbyCopySamusSpecialAirNEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
}

// 0x8015756C
void ftKirbyCopySamusSpecialNEndSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNEnd, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftPhysics_ClampAirVelXMax(fp);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
}

// 0x801575C8
void ftKirbyCopySamusSpecialNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
}

// 0x80157610
void ftKirbyCopySamusSpecialAirNEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftMap_SetAir(fp);
        ftPhysics_ClampAirVelXMax(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNEnd, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);

    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
}

// 0x8015767C
f32 ftKirbyCopySamusSpecialNStartGetAnimPlaybackRate(ftStruct *fp)
{
    f32 ret = fp->fighter_vars.kirby.copysamus_charge_level / (f32)FTKIRBY_COPYSAMUS_CHARGE_MAX;

    ret = (-0.16000003F) * ret + 1.0F;

    return ret;
}

// 0x801576B4
void ftKirbyCopySamusSpecialNInitStatusVars(ftStruct *fp)
{
    fp->proc_damage = ftKirbyCopySamusSpecialNProcDamage;
    fp->status_vars.kirby.copysamus_specialn.charge_gobj = NULL;
    fp->command_vars.flags.flag0 = 0;
}

// 0x801576CC
void ftKirbyCopySamusSpecialNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialNStart, 0.0F, ftKirbyCopySamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopySamusSpecialNInitStatusVars(fp);

    fp->status_vars.kirby.copysamus_specialn.is_release = (fp->fighter_vars.kirby.copysamus_charge_level == FTKIRBY_COPYSAMUS_CHARGE_MAX) ? TRUE : FALSE;
}

// 0x80157744
void ftKirbyCopySamusSpecialAirNStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopySamus_SpecialAirNStart, 0.0F, ftKirbyCopySamusSpecialNStartGetAnimPlaybackRate(fp), FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopySamusSpecialNInitStatusVars(fp);

    fp->status_vars.kirby.copysamus_specialn.is_release = TRUE;
}
