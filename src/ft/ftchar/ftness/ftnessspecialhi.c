#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define FTNESS_SPECIALHISTART_STATUPDATE_FLAGS (FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_HITSTATUS | FTSTATUS_PRESERVE_COLANIM)
#define FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS (FTSTATUS_PRESERVE_RUMBLE | FTSTATUS_PRESERVE_LOOPSFX | FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_HITSTATUS | FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM | FTSTATUS_PRESERVE_HIT)
#define FTNESS_SPECIALHIEND_STATUPDATE_FLAGS (FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_HITSTATUS | FTSTATUS_PRESERVE_COLANIM)
#define FTNESS_SPECIALHI_STATUPDATE_FLAGS (FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_HITSTATUS | FTSTATUS_PRESERVE_COLANIM | FTSTATUS_PRESERVE_HIT)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80153C50
void ftNessSpecialHiDecThunderTimers(ftStruct *fp)
{
    if (fp->status_vars.ness.specialhi.pkjibaku_delay != 0)
    {
        fp->status_vars.ness.specialhi.pkjibaku_delay--;
    }

    if (fp->fighter_vars.ness.is_thunder_destroy & TRUE)
    {
        if (fp->status_vars.ness.specialhi.pkthunder_end_delay != 0)
        {
            fp->status_vars.ness.specialhi.pkthunder_end_delay--;
        }
    }
}

// 0x80153C88
void ftNessSpecialHiCreatePKThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    ftParts_GetDObjWorldPosition(fp->joint[FTNESS_PKTHUNDER_SPAWN_JOINT], &pos);

    pos.z = 0.0F;

    vel.z = 0.0F;
    vel.y = FTNESS_PKTHUNDER_SPAWN_VEL_Y;
    vel.x = 0.0F;

    fp->status_vars.ness.specialhi.pkthunder_gobj = wpNessPKThunderHeadMakeWeapon(fighter_gobj, &pos, &vel);
}

// 0x80153CFC
sb32 ftNessSpecialHiCheckCollidePKThunder(GObj *fighter_gobj)
{
    f32 fighter_dobj_x;
    f32 fighter_dobj_y;
    f32 item_dobj_x;
    f32 item_dobj_y;
    f32 collide_x;
    f32 collide_y;
    GObj *pkthunder_gobj;
    wpStruct *ip;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    pkthunder_gobj = fp->status_vars.ness.specialhi.pkthunder_gobj;

    if (fp->status_vars.ness.specialhi.pkjibaku_delay != 0) return FALSE;

    if ((fp->fighter_vars.ness.is_thunder_destroy & TRUE) || (pkthunder_gobj == NULL)) return FALSE;

    ip = wpGetStruct(pkthunder_gobj);

    fighter_dobj_x = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    item_dobj_x = DObjGetStruct(pkthunder_gobj)->translate.vec.f.x;

    collide_x = (fighter_dobj_x < item_dobj_x) ? -(fighter_dobj_x - item_dobj_x) : (fighter_dobj_x - item_dobj_x);

    if (collide_x < FTNESS_PKTHUNDER_COLLIDE_X)
    {
        fighter_dobj_y = DObjGetStruct(fighter_gobj)->translate.vec.f.y + 150.0F;
        item_dobj_y = DObjGetStruct(pkthunder_gobj)->translate.vec.f.y;

        collide_y = (fighter_dobj_y < item_dobj_y) ? -(fighter_dobj_y - item_dobj_y) : (fighter_dobj_y - item_dobj_y);

        if (collide_y < FTNESS_PKTHUNDER_COLLIDE_Y)
        {
            ip->weapon_vars.pkthunder.status = wpNessPKThunder_Status_Collide;

            fp->status_vars.ness.specialhi.pkthunder_pos = DObjGetStruct(pkthunder_gobj)->translate.vec.f;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80153E04
void ftNessSpecialHiStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftNessSpecialHiHoldSetStatus);
}

// 0x80153E28
void ftNessSpecialAirHiStartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftNessSpecialAirHiHoldSetStatus);
}

// 0x80153E4C
void ftNessSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.ness.specialhi.pkthunder_gravity_delay != 0)
    {
        fp->status_vars.ness.specialhi.pkthunder_gravity_delay--;
    }
    ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x80153E80
void ftNessSpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.ness.specialhi.pkthunder_gravity_delay != 0)
    {
        fp->status_vars.ness.specialhi.pkthunder_gravity_delay--;
    }
    else ftPhysics_ApplyGClampTVel(fp, 0.5F, attributes->fall_speed_max);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x80153EF8
void ftNessSpecialHiStartProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialHiStartSwitchStatusAir);
}

// 0x80153F1C
void ftNessSpecialAirHiStartProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirHiStartSwitchStatusGround);
}

// 0x80153F40
void ftNessSpecialAirHiStartSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHISTART_STATUPDATE_FLAGS);
}

// 0x80153F80
void ftNessSpecialHiStartSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHISTART_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80153FCC
void ftNessSpecialHiInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_delay = FTNESS_PKJIBAKU_DELAY;
    fp->status_vars.ness.specialhi.pkthunder_end_delay = FTNESS_PKTHUNDER_END_DELAY;
    fp->status_vars.ness.specialhi.pkthunder_gravity_delay = FTNESS_PKTHUNDER_GRAVITY_DELAY;
    fp->fighter_vars.ness.is_thunder_destroy = FALSE;
    fp->fighter_vars.ness.pkthunder_trail_id = 0;
}

// 0x80153FF0
void ftNessSpecialHiStartSetStatus(GObj *fighter_gobj)
{
    ftNessSpecialHiInitStatusVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154030
void ftNessSpecialAirHiStartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialHiInitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;

    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154098
void ftNessSpecialHiUpdatePKThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = fp->status_vars.ness.specialhi.pkthunder_gobj;

    if (weapon_gobj == NULL)
    {
        fp->fighter_vars.ness.is_thunder_destroy |= TRUE;
    }
    fp->fighter_vars.ness.pkthunder_trail_id++;

    if (fp->fighter_vars.ness.pkthunder_trail_id >= FTNESS_PKTHUNDER_TRAIL_POS_COUNT)
    {
        fp->fighter_vars.ness.pkthunder_trail_id = 0;
    }
    ftNessSpecialHiDecThunderTimers(fp);
}

// 0x801540EC
void ftNessSpecialHiHoldProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialHiUpdatePKThunder(fighter_gobj);

    if ((fp->status_vars.ness.specialhi.pkjibaku_delay <= 0) && (fp->status_vars.ness.specialhi.pkthunder_end_delay <= 0) && (fp->fighter_vars.ness.is_thunder_destroy & TRUE))
    {
        ftNessSpecialHiEndSetStatus(fighter_gobj);
    }

    else if (ftNessSpecialHiCheckCollidePKThunder(fighter_gobj) != FALSE)
    {
        ftNessJibakuSetStatus(fighter_gobj);
    }
}

// 0x8015416C
void ftNessSpecialAirHiHoldProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialHiUpdatePKThunder(fighter_gobj);

    if ((fp->status_vars.ness.specialhi.pkjibaku_delay <= 0) && (fp->status_vars.ness.specialhi.pkthunder_end_delay <= 0) && (fp->fighter_vars.ness.is_thunder_destroy & TRUE))
    {
        ftNessSpecialAirHiEndSetStatus(fighter_gobj);
    }

    else if (ftNessSpecialHiCheckCollidePKThunder(fighter_gobj) != FALSE)
    {
        ftNessJibakuAirSetStatus(fighter_gobj);
    }
}

// 0x801541EC
void ftNessSpecialHiHoldProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialHiHoldSwitchStatusAir);
}

// 0x80154210
void ftNessSpecialAirHiHoldProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirHiHoldSwitchStatusGround);
}

// 0x80154234
void ftNessSpecialHiSetPKThunderDestroy(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = fp->status_vars.ness.specialhi.pkthunder_gobj;

    if (!(fp->fighter_vars.ness.is_thunder_destroy & TRUE) && (weapon_gobj != NULL))
    {
        wpStruct *wp = wpGetStruct(weapon_gobj);

        wp->weapon_vars.pkthunder.status = wpNessPKThunder_Status_Destroy;
    }
}

// 0x80154268
void ftNessSpecialAirHiHoldSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS);
}

// 0x801542A8
void ftNessSpecialHiHoldSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x801542F4
void ftNessSpecialHiHoldInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNessSpecialHiCreatePKThunder(fighter_gobj);

    if (!(fp->is_attach_effect) && (efManagerNessPKThunderWaveMakeEffect(fighter_gobj) != NULL))
    {
        fp->is_attach_effect = TRUE;
    }
    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015435C
void ftNessSpecialHiHoldSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiHold, 0.0F, 1.0F, FTSTATUS_PRESERVE_LOOPSFX);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialHiHoldInitStatusVars(fighter_gobj);
}

// 0x801543A0
void ftNessSpecialAirHiHoldSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiHold, 0.0F, 1.0F, FTSTATUS_PRESERVE_LOOPSFX);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftNessSpecialHiHoldInitStatusVars(fighter_gobj);
}

// 0x801543E4
void ftNessSpecialAirHiEndProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommonFallSpecialSetStatus(fighter_gobj, FTNESS_PKTHUNDER_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTNESS_PKTHUNDER_LANDING_LAG, FALSE);
    }
}

// 0x80154438
void ftNessSpecialHiEndProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftNessSpecialHiEndSwitchStatusAir);
}

// 0x8015445C
void ftNessSpecialAirHiEndProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftNessSpecialAirHiEndSwitchStatusGround);
}

// 0x80154480
void ftNessSpecialAirHiEndSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIEND_STATUPDATE_FLAGS);
}

// 0x801544C0
void ftNessSpecialHiEndSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIEND_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015450C
void ftNessSpecialHiClearProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = NULL;
}

// 0x80154518
void ftNessSpecialHiEndSetStatus(GObj *fighter_gobj)
{
    ftNessSpecialHiClearProcDamage(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHiEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154558
void ftNessSpecialAirHiEndSetStatus(GObj *fighter_gobj)
{
    ftNessSpecialHiClearProcDamage(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154598
void ftNessSpecialHiCollideWallPhysics(GObj *fighter_gobj, mpCollData *coll_data)
{
    f32 tan_lwall_angle;
    f32 rotation;
    f32 tangent;
    f32 tan_rwall_angle;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    rotation = (fp->lr == nGMDirectionR) ? fp->status_vars.ness.specialhi.pkjibaku_angle : (F_CST_DTOR32(180.0F) - fp->status_vars.ness.specialhi.pkjibaku_angle);

    if (rotation > F_CST_DTOR32(360.0F))
    {
        rotation -= F_CST_DTOR32(360.0F);
    }

    if (coll_data->coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        tan_lwall_angle = atan2f(coll_data->lwall_angle.y, coll_data->lwall_angle.x);

        tangent = tan_lwall_angle;

        if (tan_lwall_angle > F_CST_DTOR32(360.0F))
        {
            tangent = tan_lwall_angle - F_CST_DTOR32(360.0F);
        }

        tangent = ((rotation + F_CST_DTOR32(180.0F)) < tangent) ? (tangent + F_CST_DTOR32(90.0F)) : (tangent + F_CST_DTOR32(-90.0F)); // To fix Ness's janky left wall collision, compare rotation - PI32
    }
    if (coll_data->coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        tan_rwall_angle = atan2f(coll_data->rwall_angle.y, coll_data->rwall_angle.x);

        tangent = tan_rwall_angle;

        if (tangent > F_CST_DTOR32(360.0F))
        {
            tangent = tan_rwall_angle - F_CST_DTOR32(360.0F);
        }
        tangent = ((tangent + F_CST_DTOR32(180.0F)) < rotation) ? (tangent + (F_CST_DTOR32(90.0F))) : (tangent + F_CST_DTOR32(-90.0F));
    }

    lbVector_Vec3fGetEulerRotation(&fp->phys_info.vel_air, MTVECTOR_AXIS_Z, tangent - (fp->status_vars.ness.specialhi.pkjibaku_angle * fp->lr));

    fp->status_vars.ness.specialhi.pkjibaku_angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * fp->lr);
}

// 0x80154758
void ftNessSpecialHiUpdateModelRoll(GObj *fighter_gobj) // Update joint's X rotation axis
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    
    // PK Thunder's velocity sign can sometimes end up becoming the inverse of the LR sign, causing Ness' model rotation to corrupt.

    // Solution:

    /* 

    fp->joint[4]->rotate.vec.f.x = (atan2f(((fp->phys_info.vel_air.x * fp->lr) < 0.0F) ? -fp->phys_info.vel_air.x : fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * fp->lr) - F_CST_DTOR32(90.0F); 
    
    */

    fp->joint[4]->rotate.vec.f.x = (atan2f(fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * fp->lr) - F_CST_DTOR32(90.0F);

    func_ovl2_800EB528(fp->joint[4]);
}

// 0x801547B8
void ftNessJibakuProcUpdate(GObj *fighter_gobj) // Grounded PK Thunder Blast
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length--;

    if (fp->status_vars.ness.specialhi.pkjibaku_anim_length == 0)
    {
        ftNessSpecialHiEndSetStatus(fighter_gobj);
    }
}

// 0x801547EC
void ftNessJibakuAirProcUpdate(GObj *fighter_gobj) // Aerial PK Thunder Blast
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length--;

    if (fp->status_vars.ness.specialhi.pkjibaku_anim_length == 0)
    {
        ftNessSpecialAirHiEndSetStatus(fighter_gobj);
    }
}

// 0x80154820
void ftNessJibakuProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_ground.x > 0.0F)
    {
        fp->phys_info.vel_ground.x -= FTNESS_PKJIBAKU_DECELERATE;
    }

    ftPhysics_ApplyGroundVelTransferAir(fighter_gobj);
    ftNessSpecialHiUpdateModelRoll(fighter_gobj);
}

// 0x80154874
void ftNessJibakuAirProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_x_bak = fp->phys_info.vel_air.x;
    f32 vel_y_bak = fp->phys_info.vel_air.y;

    fp->phys_info.vel_air.x -= (FTNESS_PKJIBAKU_DECELERATE * __cosf(fp->status_vars.ness.specialhi.pkjibaku_angle) * fp->lr);

    fp->phys_info.vel_air.y -= (FTNESS_PKJIBAKU_DECELERATE * __sinf(fp->status_vars.ness.specialhi.pkjibaku_angle));

    if (ABSF(fp->phys_info.vel_air.x) > ABSF(vel_x_bak))
    {
        fp->phys_info.vel_air.x = vel_x_bak;
    }

    if (ABSF(fp->phys_info.vel_air.y) > ABSF(vel_y_bak))
    {
        fp->phys_info.vel_air.y = vel_y_bak;
    }
    ftNessSpecialHiUpdateModelRoll(fighter_gobj);
}

// 0x801549B0
sb32 ftNessSpecialHiCheckIgnorePass(GObj *fighter_gobj) // Check if Ness can pass through platforms, TRUE actually denies?
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->status_vars.ness.specialhi.pkjibaku_anim_length <= FTNESS_PKJIBAKU_PASS_FRAME_END))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801549FC
void ftNessJibakuProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
        {
            ftMap_SetAir(fp);
            ftNessSpecialAirHiEndSetStatus(fighter_gobj);
        }
        else ftNessJibakuSwitchStatusAir(fighter_gobj);
    }
    else if (fp->coll_data.coll_mask_curr & (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        fp->phys_info.vel_ground.x = 0.0F;
        ftCommonDownBounceSetStatus(fighter_gobj);
    }
}

// 0x80154A8C
void ftNessJibakuAirProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    f32 unused;
    Vec3f pos;

    if (mpObjectProc_ProcFighterPassCliff(fighter_gobj, ftNessSpecialHiCheckIgnorePass) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if (lbVector_Vec3fAngleDiff(&fp->coll_data.ground_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;

            ftMap_SetGround(fp);
            ftCommonDownBounceSetStatus(fighter_gobj);
        }
        else ftNessJibakuAirSwitchStatusGround(fighter_gobj);

        return;
    }

    pos.x = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    if (fp->coll_data.coll_mask_curr & MPCOLL_KIND_CEIL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.ceil_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.y += fp->coll_data.object_coll.top;

            ftNessJibakuAirBoundSetStatus(fighter_gobj, &fp->coll_data.ceil_angle, &pos);
        }
    }
    if (fp->coll_data.coll_mask_curr & MPCOLL_KIND_LWALL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.lwall_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.x += fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            ftNessJibakuAirBoundSetStatus(fighter_gobj, &fp->coll_data.lwall_angle, &pos);
        }
        else ftNessSpecialHiCollideWallPhysics(fighter_gobj, &fp->coll_data);
    }
    if (fp->coll_data.coll_mask_curr & MPCOLL_KIND_RWALL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.rwall_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.x -= fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            ftNessJibakuAirBoundSetStatus(fighter_gobj, &fp->coll_data.rwall_angle, &pos);
        }
        else ftNessSpecialHiCollideWallPhysics(fighter_gobj, &fp->coll_data);
    }
}

// 0x80154CBC
void ftNessJibakuAirSwitchStatusGround(GObj *fighter_gobj)
{
    f32 frame_begin;

    ftMap_SetGround(ftGetStruct(fighter_gobj));

    frame_begin = fighter_gobj->anim_frame;

    if (frame_begin == 0.0F)
    {
        frame_begin = 1.0F;
    }
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHi, frame_begin, 1.0F, FTNESS_SPECIALHI_STATUPDATE_FLAGS); // Change Action State to PK Thunder Blast
}

// 0x80154D1C
void ftNessJibakuSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 frame_begin;

    ftMap_SetAir(fp);

    frame_begin = fighter_gobj->anim_frame;

    if (frame_begin == 0.0F)
    {
        frame_begin = 1.0F;
    }
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHi, frame_begin, 1.0F, FTNESS_SPECIALHI_STATUPDATE_FLAGS);

    fp->status_vars.ness.specialhi.pkjibaku_angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * fp->lr);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80154DBC
void ftNessJibakuInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length = FTNESS_PKJIBAKU_ANIM_LENGTH;

    ftNessSpecialHiUpdateModelRoll(fighter_gobj);

    fp->proc_damage = NULL;

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80154DFC
void ftNessJibakuSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 angle_diff;
    s32 unused;
    Vec3f pos;

    if (fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) goto setair;
    
    pos.x = DObjGetStruct(fighter_gobj)->translate.vec.f.x - fp->status_vars.ness.specialhi.pkthunder_pos.x;
    pos.y = (DObjGetStruct(fighter_gobj)->translate.vec.f.y + 150.0F) - fp->status_vars.ness.specialhi.pkthunder_pos.y;
    pos.z = 0.0F;

    angle_diff = lbVector_Vec3fAngleDiff(&fp->coll_data.ground_angle, &pos);

    if (angle_diff < F_CST_DTOR32(90.0F)) goto setair; // HALF_PI32
    
    if (angle_diff > F_CST_DTOR32(155.0F)) goto setdown; // 2.3561945F
        
    fp->lr = (pos.x >= 0) ? nGMDirectionR : nGMDirectionL;

    if (pos.x < 0)
    {
        pos.x = -pos.x;
    }
    fp->phys_info.vel_ground.x = FTNESS_PKJIBAKU_VEL;

    ftNessJibakuInitStatusVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    return;  
   
setair:
    ftMap_SetAir(fp);       
    ftNessJibakuAirSetStatus(fighter_gobj);       
    return;
    
setdown:
    ftCommonDownBounceSetStatus(fighter_gobj);
}

// 0x80154F54
void ftNessJibakuAirSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *dobj = DObjGetStruct(fighter_gobj);
    f32 dist_x = dobj->translate.vec.f.x - fp->status_vars.ness.specialhi.pkthunder_pos.x;
    f32 dist_y = (dobj->translate.vec.f.y + 150.0F) - fp->status_vars.ness.specialhi.pkthunder_pos.y;

    fp->lr = (dist_x >= 0.0F) ? nGMDirectionR : nGMDirectionL;

    fp->status_vars.ness.specialhi.pkjibaku_angle  = atan2f(dist_y, fp->lr * dist_x);

    fp->phys_info.vel_air.x = (__cosf(fp->status_vars.ness.specialhi.pkjibaku_angle) * FTNESS_PKJIBAKU_VEL * fp->lr);
    fp->phys_info.vel_air.y = (__sinf(fp->status_vars.ness.specialhi.pkjibaku_angle) * FTNESS_PKJIBAKU_VEL);

    ftNessJibakuInitStatusVars(fighter_gobj);
    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_COLANIM);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80155058
void ftNessJibakuAirBoundProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommonFallSpecialSetStatus(fighter_gobj, FTNESS_PKTHUNDER_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTNESS_PKTHUNDER_LANDING_LAG, FALSE);
    }
}

// 0x801550AC
void ftNessJibakuAirBoundProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else
        {
            ftMap_SetGround(fp);
            ftCommonDownBounceSetStatus(fighter_gobj);
        }
    }
}

// 0x80155114
void ftNessJibakuAirBoundSetStatus(GObj *fighter_gobj, Vec3f *angle, Vec3f *pos)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    Vec3f *vel = &fp->phys_info.vel_air;

    func_ovl0_800C7B08(vel, angle);
    func_ovl0_800C7AE0(vel, FTNESS_PKJIBAKU_REBOUND_VEL_MAG);
    func_ovl0_800C7A84(vel);
    ftPhysics_ClampAirVelXMax(fp);

    fp->lr = (fp->phys_info.vel_air.x < 0.0F) ? nGMDirectionR : nGMDirectionL;

    ftMainSetFighterStatus(fighter_gobj, nFTNessStatusSpecialAirHiBound, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    efManagerImpactWaveMakeEffect(pos, MTVECTOR_AXIS_Z, atan2f(-angle->x, angle->y));
    efManagerQuakeMakeEffect(2);
}
