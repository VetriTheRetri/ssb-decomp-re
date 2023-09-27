#include <ft/fighter.h>
#include <wp/weapon.h>

#define FTNESS_SPECIALHISTART_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)
#define FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_LOOPSFX_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTNESS_SPECIALHIEND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)
#define FTNESS_SPECIALHI_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)

// PK Thunder (SpecialHi / SpecialAirHi)

// 0x80153C50
void ftNess_SpecialHi_DecThunderTimers(ftStruct *fp)
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
void ftNess_SpecialHi_CreatePKThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    func_ovl2_800EDF24(fp->joint[FTNESS_PKTHUNDER_SPAWN_JOINT], &pos);

    pos.z = 0.0F;

    vel.z = 0.0F;
    vel.y = FTNESS_PKTHUNDER_SPAWN_VEL_Y;
    vel.x = 0.0F;

    fp->status_vars.ness.specialhi.pkthunder_gobj = wpNess_PKThunderHead_MakeWeapon(fighter_gobj, &pos, &vel);
}

// 0x80153CFC
bool32 ftNess_SpecialHi_CheckCollidePKThunder(GObj *fighter_gobj)
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

            fp->status_vars.ness.specialhi.pkthunder_pos = DObjGetStruct(pkthunder_gobj)->translate;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80153E04
void ftNess_SpecialHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_SpecialHiHold_SetStatus);
}

// 0x80153E28
void ftNess_SpecialAirHiStart_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftNess_SpecialAirHiHold_SetStatus);
}

// 0x80153E4C
void ftNess_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.ness.specialhi.pkthunder_gravity_delay != 0)
    {
        fp->status_vars.ness.specialhi.pkthunder_gravity_delay--;
    }
    ftPhysics_ApplyGroundVelFrictionAir(fighter_gobj);
}

// 0x80153E80
void ftNess_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.ness.specialhi.pkthunder_gravity_delay != 0)
    {
        fp->status_vars.ness.specialhi.pkthunder_gravity_delay--;
    }
    else ftPhysics_ApplyGravityClampTVel(fp, 0.5F, attributes->fall_speed_max);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ApplyVelAirXFriction(fp, attributes);
    }
}

// 0x80153EF8
void ftNess_SpecialHiStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialHiStart_SwitchStatusAir);
}

// 0x80153F1C
void ftNess_SpecialAirHiStart_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirHiStart_SwitchStatusGround);
}

// 0x80153F40
void ftNess_SpecialAirHiStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHISTART_STATUPDATE_FLAGS);
}

// 0x80153F80
void ftNess_SpecialHiStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiStart, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHISTART_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80153FCC
void ftNess_SpecialHi_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_delay = FTNESS_PKJIBAKU_DELAY;
    fp->status_vars.ness.specialhi.pkthunder_end_delay = FTNESS_PKTHUNDER_END_DELAY;
    fp->status_vars.ness.specialhi.pkthunder_gravity_delay = FTNESS_PKTHUNDER_GRAVITY_DELAY;
    fp->fighter_vars.ness.is_thunder_destroy = FALSE;
    fp->fighter_vars.ness.pkthunder_trail_id = 0;
}

// 0x80153FF0
void ftNess_SpecialHiStart_SetStatus(GObj *fighter_gobj)
{
    ftNess_SpecialHi_InitStatusVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154030
void ftNess_SpecialAirHiStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpecialHi_InitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154098
void ftNess_SpecialHi_UpdatePKThunder(GObj *fighter_gobj)
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
    ftNess_SpecialHi_DecThunderTimers(fp);
}

// 0x801540EC
void ftNess_SpecialHiHold_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpecialHi_UpdatePKThunder(fighter_gobj);

    if ((fp->status_vars.ness.specialhi.pkjibaku_delay <= 0) && (fp->status_vars.ness.specialhi.pkthunder_end_delay <= 0) && (fp->fighter_vars.ness.is_thunder_destroy & TRUE))
    {
        ftNess_SpecialHiEnd_SetStatus(fighter_gobj);
    }

    else if (ftNess_SpecialHi_CheckCollidePKThunder(fighter_gobj) != FALSE)
    {
        ftNess_Jibaku_SetStatus(fighter_gobj);
    }
}

// 0x8015416C
void ftNess_SpecialAirHiHold_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpecialHi_UpdatePKThunder(fighter_gobj);

    if ((fp->status_vars.ness.specialhi.pkjibaku_delay <= 0) && (fp->status_vars.ness.specialhi.pkthunder_end_delay <= 0) && (fp->fighter_vars.ness.is_thunder_destroy & TRUE))
    {
        ftNess_SpecialAirHiEnd_SetStatus(fighter_gobj);
    }

    else if (ftNess_SpecialHi_CheckCollidePKThunder(fighter_gobj) != FALSE)
    {
        ftNess_JibakuAir_SetStatus(fighter_gobj);
    }
}

// 0x801541EC
void ftNess_SpecialHiHold_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialHiHold_SwitchStatusAir);
}

// 0x80154210
void ftNess_SpecialAirHiHold_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirHiHold_SwitchStatusGround);
}

// 0x80154234
void ftNess_SpecialHi_SetPKThunderDestroy(GObj *fighter_gobj) // Unused
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
void ftNess_SpecialAirHiHold_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS);
}

// 0x801542A8
void ftNess_SpecialHiHold_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiHold, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIHOLD_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x801542F4
void ftNess_SpecialHiHold_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftNess_SpecialHi_CreatePKThunder(fighter_gobj);

    if (!(fp->is_attach_effect) && (efParticle_PKThunderWave_MakeEffect(fighter_gobj) != NULL))
    {
        fp->is_attach_effect = TRUE;
    }
    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015435C
void ftNess_SpecialHiHold_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiHold, 0.0F, 1.0F, FTSTATUPDATE_LOOPSFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNess_SpecialHiHold_InitStatusVars(fighter_gobj);
}

// 0x801543A0
void ftNess_SpecialAirHiHold_SetStatus(GObj *fighter_gobj)
{
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiHold, 0.0F, 1.0F, FTSTATUPDATE_LOOPSFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    ftNess_SpecialHiHold_InitStatusVars(fighter_gobj);
}

// 0x801543E4
void ftNess_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTNESS_PKTHUNDER_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTNESS_PKTHUNDER_LANDING_LAG, FALSE);
    }
}

// 0x80154438
void ftNess_SpecialHiEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftNess_SpecialHiEnd_SwitchStatusAir);
}

// 0x8015445C
void ftNess_SpecialAirHiEnd_ProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundCliff(fighter_gobj, ftNess_SpecialAirHiEnd_SwitchStatusGround);
}

// 0x80154480
void ftNess_SpecialAirHiEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIEND_STATUPDATE_FLAGS);
}

// 0x801544C0
void ftNess_SpecialHiEnd_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiEnd, fighter_gobj->anim_frame, 1.0F, FTNESS_SPECIALHIEND_STATUPDATE_FLAGS);
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x8015450C
void ftNess_SpecialHi_ClearProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = NULL;
}

// 0x80154518
void ftNess_SpecialHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftNess_SpecialHi_ClearProcDamage(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154558
void ftNess_SpecialAirHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftNess_SpecialHi_ClearProcDamage(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80154598
void ftNess_SpecialHi_CollideWallPhysics(GObj *fighter_gobj, mpCollData *coll_data)
{
    f32 tan_lwall_angle;
    f32 rotation;
    f32 tangent;
    f32 tan_rwall_angle;
    ftStruct *fp = ftGetStruct(fighter_gobj);

    rotation = (fp->lr == LR_Right) ? fp->status_vars.ness.specialhi.pkjibaku_angle : (F_DEG_TO_RAD(180.0F) - fp->status_vars.ness.specialhi.pkjibaku_angle);

    if (rotation > F_DEG_TO_RAD(360.0F))
    {
        rotation -= F_DEG_TO_RAD(360.0F);
    }

    if (coll_data->coll_mask & MPCOLL_KIND_LWALL)
    {
        tan_lwall_angle = atan2f(coll_data->lwall_angle.y, coll_data->lwall_angle.x);

        tangent = tan_lwall_angle;

        if (tan_lwall_angle > F_DEG_TO_RAD(360.0F))
        {
            tangent = tan_lwall_angle - F_DEG_TO_RAD(360.0F);
        }

        tangent = ((rotation + F_DEG_TO_RAD(180.0F)) < tangent) ? (tangent + F_DEG_TO_RAD(180.0F)) : (tangent + F_DEG_TO_RAD(90.0F)); // To fix Ness's janky left wall collision, compare rotation - PI32
    }
    if (coll_data->coll_mask & MPCOLL_KIND_RWALL)
    {
        tan_rwall_angle = atan2f(coll_data->rwall_angle.y, coll_data->rwall_angle.x);

        tangent = tan_rwall_angle;

        if (tangent > F_DEG_TO_RAD(360.0F))
        {
            tangent = tan_rwall_angle - F_DEG_TO_RAD(360.0F);
        }
        tangent = ((tangent + F_DEG_TO_RAD(180.0F)) < rotation) ? (tangent + (F_DEG_TO_RAD(-180.0F))) : (tangent + F_DEG_TO_RAD(90.0F));
    }

    lbVector_Vec3fGetEulerRotation(&fp->phys_info.vel_air, 4, tangent - (fp->status_vars.ness.specialhi.pkjibaku_angle * fp->lr));

    fp->status_vars.ness.specialhi.pkjibaku_angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * fp->lr);
}

// 0x80154758
void ftNess_SpecialHi_UpdateModelPitch(GObj *fighter_gobj) // Update joint's X rotation axis
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    
    // PK Thunder's velocity sign can sometimes end up becoming the inverse of the LR sign, causing Ness' model rotation to corrupt.

    // Solution:

    /* 
    
    f32 vel_x, vel_y;

    vel_x = ((fp->phys_info.vel_air.x * fp->lr) < 0.0F) ? -fp->phys_info.vel_air.x : fp->phys_info.vel_air.x;
    vel_y = fp->phys_info.vel_air.y;
    
    fp->joint[4]->rotate.vec.f.x = (atan2f(vel_x, vel_y) * fp->lr) - F_DEG_TO_RAD(90.0F); 
    
    */

    fp->joint[4]->rotate.vec.f.x = (atan2f(fp->phys_info.vel_air.x, fp->phys_info.vel_air.y) * fp->lr) - F_DEG_TO_RAD(90.0F);

    func_ovl2_800EB528(fp->joint[4]);
}

// 0x801547B8
void ftNess_Jibaku_ProcUpdate(GObj *fighter_gobj) // Grounded PK Thunder Blast
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length--;

    if (fp->status_vars.ness.specialhi.pkjibaku_anim_length == 0)
    {
        ftNess_SpecialHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x801547EC
void ftNess_JibakuAir_ProcUpdate(GObj *fighter_gobj) // Aerial PK Thunder Blast
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length--;

    if (fp->status_vars.ness.specialhi.pkjibaku_anim_length == 0)
    {
        ftNess_SpecialAirHiEnd_SetStatus(fighter_gobj);
    }
}

// 0x80154820
void ftNess_Jibaku_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_ground.x > 0.0F)
    {
        fp->phys_info.vel_ground.x -= FTNESS_PKJIBAKU_DECELERATE;
    }

    ftPhysics_ApplyGroundVelTransferAir(fighter_gobj);
    ftNess_SpecialHi_UpdateModelPitch(fighter_gobj);
}

// 0x80154874
void ftNess_JibakuAir_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_x_bak = fp->phys_info.vel_air.x;
    f32 vel_y_bak = fp->phys_info.vel_air.y;

    fp->phys_info.vel_air.x -= (FTNESS_PKJIBAKU_DECELERATE * cosf(fp->status_vars.ness.specialhi.pkjibaku_angle) * fp->lr);

    fp->phys_info.vel_air.y -= (FTNESS_PKJIBAKU_DECELERATE * __sinf(fp->status_vars.ness.specialhi.pkjibaku_angle));

    if (ABSF(fp->phys_info.vel_air.x) > ABSF(vel_x_bak))
    {
        fp->phys_info.vel_air.x = vel_x_bak;
    }

    if (ABSF(fp->phys_info.vel_air.y) > ABSF(vel_y_bak))
    {
        fp->phys_info.vel_air.y = vel_y_bak;
    }
    ftNess_SpecialHi_UpdateModelPitch(fighter_gobj);
}

// 0x801549B0
bool32 ftNess_SpecialHi_CheckIgnorePass(GObj *fighter_gobj) // Check if Ness can pass through platforms, TRUE actually denies?
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (!(fp->coll_data.ground_flags & MPCOLL_VERTEX_CLL_PASS) || (fp->status_vars.ness.specialhi.pkjibaku_anim_length <= FTNESS_PKJIBAKU_PASS_FRAME_END))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x801549FC
void ftNess_Jibaku_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_mask & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
        {
            ftMap_SetAir(fp);
            ftNess_SpecialAirHiEnd_SetStatus(fighter_gobj);
        }
        else ftNess_Jibaku_SwitchStatusAir(fighter_gobj);
    }
    else if (fp->coll_data.coll_mask & (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        fp->phys_info.vel_ground.x = 0.0F;
        ftCommon_DownBounce_SetStatus(fighter_gobj);
    }
}

// 0x80154A8C
void ftNess_JibakuAir_ProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    f32 unused;
    Vec3f pos;

    if (func_ovl2_800DE798(fighter_gobj, ftNess_SpecialHi_CheckIgnorePass) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
            return;
        }
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.ground_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            fp->phys_info.vel_air.x = 0.0F;
            fp->phys_info.vel_air.y = 0.0F;

            ftMap_SetGround(fp);
            ftCommon_DownBounce_SetStatus(fighter_gobj);
            return;
        }
        ftNess_JibakuAir_SwitchStatusGround(fighter_gobj);
        return;
    }

    pos.x = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    pos.y = DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    pos.z = 0.0F;

    if (fp->coll_data.coll_mask & MPCOLL_KIND_CEIL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.ceil_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.y += fp->coll_data.object_coll.top;

            ftNess_JibakuAirBound_SetStatus(fighter_gobj, &fp->coll_data.ceil_angle, &pos);
        }
    }
    if (fp->coll_data.coll_mask & MPCOLL_KIND_LWALL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.lwall_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.x += fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            ftNess_JibakuAirBound_SetStatus(fighter_gobj, &fp->coll_data.lwall_angle, &pos);
        }
        else ftNess_SpecialHi_CollideWallPhysics(fighter_gobj, &fp->coll_data);
    }
    if (fp->coll_data.coll_mask & MPCOLL_KIND_RWALL)
    {
        if (lbVector_Vec3fAngleDiff(&fp->coll_data.rwall_angle, &fp->phys_info.vel_air) > FTNESS_PKJIBAKU_HALT_ANGLE)
        {
            pos.x -= fp->coll_data.object_coll.width;
            pos.y += fp->coll_data.object_coll.center;

            ftNess_JibakuAirBound_SetStatus(fighter_gobj, &fp->coll_data.rwall_angle, &pos);
        }
        else ftNess_SpecialHi_CollideWallPhysics(fighter_gobj, &fp->coll_data);
    }
}

// 0x80154CBC
void ftNess_JibakuAir_SwitchStatusGround(GObj *fighter_gobj)
{
    f32 frame_begin;

    ftMap_SetGround(ftGetStruct(fighter_gobj));

    frame_begin = fighter_gobj->anim_frame;

    if (frame_begin == 0.0F)
    {
        frame_begin = 1.0F;
    }
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHi, frame_begin, 1.0F, FTNESS_SPECIALHI_STATUPDATE_FLAGS); // Change Action State to PK Thunder Blast
}

// 0x80154D1C
void ftNess_Jibaku_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 frame_begin;

    ftMap_SetAir(fp);

    frame_begin = fighter_gobj->anim_frame;

    if (frame_begin == 0.0F)
    {
        frame_begin = 1.0F;
    }
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHi, frame_begin, 1.0F, FTNESS_SPECIALHI_STATUPDATE_FLAGS);

    fp->status_vars.ness.specialhi.pkjibaku_angle = atan2f(fp->phys_info.vel_air.y, fp->phys_info.vel_air.x * fp->lr);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80154DBC
void ftNess_Jibaku_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.ness.specialhi.pkjibaku_anim_length = FTNESS_PKJIBAKU_ANIM_LENGTH;

    ftNess_SpecialHi_UpdateModelPitch(fighter_gobj);

    fp->proc_damage = NULL;

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x80154DFC
void ftNess_Jibaku_SetStatus(GObj *fighter_gobj)
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

    if (angle_diff < F_DEG_TO_RAD(90.0F)) goto setair; // HALF_PI32
    
    if (angle_diff > F_DEG_TO_RAD(135.0F)) goto setdown; // 2.3561945F
        
    fp->lr = (pos.x >= 0) ? LR_Right : LR_Left;

    if (pos.x < 0)
    {
        pos.x = -pos.x;
    }
    fp->phys_info.vel_ground.x = FTNESS_PKJIBAKU_VEL;

    ftNess_Jibaku_InitStatusVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    return;  
   
setair:
    ftMap_SetAir(fp);       
    ftNess_JibakuAir_SetStatus(fighter_gobj);       
    return;
    
setdown:
    ftCommon_DownBounce_SetStatus(fighter_gobj);
}

// 0x80154F54
void ftNess_JibakuAir_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *dobj = DObjGetStruct(fighter_gobj);
    f32 dist_x = dobj->translate.vec.f.x - fp->status_vars.ness.specialhi.pkthunder_pos.x;
    f32 dist_y = (dobj->translate.vec.f.y + 150.0F) - fp->status_vars.ness.specialhi.pkthunder_pos.y;

    fp->lr = (dist_x >= 0.0F) ? LR_Right : LR_Left;

    fp->status_vars.ness.specialhi.pkjibaku_angle  = atan2f(dist_y, fp->lr * dist_x);

    fp->phys_info.vel_air.x = (cosf(fp->status_vars.ness.specialhi.pkjibaku_angle) * FTNESS_PKJIBAKU_VEL * fp->lr);
    fp->phys_info.vel_air.y = (__sinf(fp->status_vars.ness.specialhi.pkjibaku_angle) * FTNESS_PKJIBAKU_VEL);

    ftNess_Jibaku_InitStatusVars(fighter_gobj);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_COLANIM_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80155058
void ftNess_JibakuAirBound_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTNESS_PKTHUNDER_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTNESS_PKTHUNDER_LANDING_LAG, FALSE);
    }
}

// 0x801550AC
void ftNess_JibakuAirBound_ProcMap(GObj *fighter_gobj)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE7D8(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else
        {
            ftMap_SetGround(fp);
            ftCommon_DownBounce_SetStatus(fighter_gobj);
        }
    }
}

// 0x80155114
void ftNess_JibakuAirBound_SetStatus(GObj *fighter_gobj, Vec3f *angle, Vec3f *pos)
{
    ftStruct* fp = ftGetStruct(fighter_gobj);
    Vec3f *vel = &fp->phys_info.vel_air;

    func_ovl0_800C7B08(vel);
    func_ovl0_800C7AE0(vel, FTNESS_PKJIBAKU_REBOUND_VEL_MAG);
    func_ovl0_800C7A84(vel);
    ftPhysics_ClampAirVelXMax(fp);

    fp->lr = (fp->phys_info.vel_air.x < 0.0F) ? LR_Right : LR_Left;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Ness_SpecialAirHiBound, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);
    efParticle_ImpactSW_MakeEffect(pos, 4, atan2f(-angle->x, angle->y));
    efParticle_Quake_MakeEffect(2);
}