#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015EDC0
void ftYoshiSpecialLwStartProcUpdate(GObj *fighter_gobj)
{
    ftAnimEndCheckSetStatus(fighter_gobj, ftYoshiSpecialAirLwLoopSetStatus);
}

// 0x8015EDE4
void ftYoshiSpecialLwLandingProcUpdate(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        gmCollisionGetFighterPartsWorldPosition(fp->joints[FTYOSHI_YOSHIBOMB_STAR_SPAWN_JOINT], &pos);
        wpYoshiStarMakeStars(fighter_gobj, &pos);
    }
    ftAnimEndCheckSetStatus(fighter_gobj, ftCommonWaitSetStatus);
}

// 0x8015EE4C
void ftYoshiSpecialAirLwLoopProcPhysics(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (ftPhysicsCheckClampAirVelXDecMax(fp, fp->attributes) == FALSE)
    {
        ftPhysicsApplyAirVelXFriction(fp, fp->attributes);
    }
}

// 0x8015EE84
void ftYoshiSpecialLwStartProcMap(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->physics.vel_air.y <= 0.0F))
    {
        if (mpCommonCheckFighterCeilHeavyCliff(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_GROUND)
            {
                mpCommonSetFighterGround(fp);
                ftMainSetFighterStatus(fighter_gobj, nFTYoshiStatusSpecialLwLanding, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
            }
            else if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_CLIFF_MASK)
            {
                ftCommonCliffCatchSetStatus(fighter_gobj);
            }
        }
    }
    else if ((mpCommonCheckFighterCeilHeavy(fighter_gobj) != FALSE) && (fp->coll_data.coll_mask_current & MPCOLL_FLAG_CEILHEAVY))
    {
        ftYoshiSpecialAirLwLoopSetStatus(fighter_gobj);
    }
}

// 0x8015EF5C
void ftYoshiSpecialAirLwLoopProcMap(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    if (mpCommonCheckFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_GROUND)
        {
            mpCommonSetFighterGround(fp);
            ftMainSetFighterStatus(fighter_gobj, nFTYoshiStatusSpecialLwLanding, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_FLAG_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
    }
}

// 0x8015EFD4
void ftYoshiSpecialLwStartProcStatus(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015EFE4
void ftYoshiSpecialLwStartSetStatus(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftYoshiSpecialLwStartProcStatus;

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTYoshiStatusSpecialLwStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015F04C
void ftYoshiSpecialAirLwStartSetStatus(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftYoshiSpecialLwStartProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTYoshiStatusSpecialAirLwStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015F0A8
void ftYoshiSpecialAirLwLoopSetStatus(GObj *fighter_gobj)
{
    FTStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_y_bak;

    if (ABSF(fp->physics.vel_air.x) > FTYOSHI_YOSHIBOMB_VEL_X_CLAMP)
    {
        fp->physics.vel_air.x = ((fp->physics.vel_air.x < 0.0F) ? -1 : +1) * FTYOSHI_YOSHIBOMB_VEL_X_CLAMP;
    }

    vel_y_bak = fp->physics.vel_air.y;

    ftMainSetFighterStatus(fighter_gobj, nFTYoshiStatusSpecialAirLwLoop, fighter_gobj->anim_frame, 0, FTSTATUS_PRESERVE_HIT);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->physics.vel_air.y = vel_y_bak;

    if (vel_y_bak > FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP)
    {
        fp->physics.vel_air.y = FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP;
    }
}
