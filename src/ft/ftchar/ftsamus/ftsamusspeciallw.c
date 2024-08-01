#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015DF00
void ftSamusSpecialLwCreateBomb(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    DObj *joint;

    if (fp->command_vars.flags.flag0 != FALSE)
    {
        fp->command_vars.flags.flag0 = FALSE;

        pos.x = pos.z = 0.0F;
        pos.y = FTSAMUS_BOMB_OFF_Y;

        joint = fp->joint[nFTPartsJointTopN]; // Not required but stack frame might be suggesting they wrote it like this

        gmCollisionGetFighterPartsWorldPosition(joint, &pos);
        wpSamusBombMakeWeapon(fighter_gobj, &pos);
    }
}

// 0x8015DF64
void ftSamusSpecialLwProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftSamusSpecialLwCreateBomb(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        ftSamusSpecialLwTransferStatusAir(fighter_gobj);
    }
    else ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8015DFBC
void ftSamusSpecialAirLwProcUpdate(GObj *fighter_gobj)
{
    ftSamusSpecialLwCreateBomb(fighter_gobj);
    ftStatusFallOnAnimEnd(fighter_gobj);
}

// 0x8015DFE4
void ftSamusSpecialLwProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->command_vars.flags.flag3 != FALSE)
    {
        ftPhysics_SetGroundVelStickRange(fp, attributes->walk_speed_mul * FTSAMUS_BOMB_DRIFT, attributes->traction);
        ftPhysics_SetGroundVelTransferAir(fighter_gobj);
    }
    else ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x8015E050
void ftSamusSpecialAirLwProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftPhysics_ApplyGravityDefault(fp, attributes);

    if (ftPhysics_CheckClampAirVelXDec(fp, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTSAMUS_BOMB_DRIFT, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x8015E0E8
void ftSamusSpecialLwProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnEdge(fighter_gobj, ftSamusSpecialLwSwitchStatusAir);
}

// 0x8015E10C
void ftSamusSpecialAirLwProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftSamusSpecialAirLwSwitchStatusGround);
}

// 0x8015E130
void ftSamusSpecialAirLwSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag3 = FALSE;

    mpCommonSetFighterGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialLw, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);
}

// 0x8015E170 - Go to aerial Screw Attack from grounded update process
void ftSamusSpecialLwTransferStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->phys_info.vel_air.y = FTSAMUS_BOMB_VEL_Y_BASE;
    fp->jumps_used = attributes->jumps_max;
}

// 0x8015E1DC
void ftSamusSpecialLwSwitchStatusAir(GObj *fighter_gobj)
{
    mpCommonSetFighterAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirLw, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);
}

// 0x8015E218
void ftSamusSpecialLwInitStatusVars(ftStruct *fp)
{
    fp->command_vars.flags.flag0 = FALSE;
}

// 0x8015E220
void ftSamusSpecialLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag3 = FALSE;

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftSamusSpecialLwInitStatusVars(fp);

    fp->status_vars.samus.speciallw.unused = FALSE;
}

// 0x8015E274
void ftSamusSpecialAirLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftMainSetFighterStatus(fighter_gobj, nFTSamusStatusSpecialAirLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftSamusSpecialLwInitStatusVars(fp);

    fp->phys_info.vel_air.y = FTSAMUS_BOMB_VEL_Y_BASE - FTSAMUS_BOMB_VEL_Y_SUB;

    ftPhysics_ClampAirVelX(fp, attributes->aerial_speed_max_x * FTSAMUS_BOMB_DRIFT);

    fp->jumps_used = attributes->jumps_max; // Why tho

    fp->status_vars.samus.speciallw.unused = TRUE;
}
