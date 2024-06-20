#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80160280
void ftCaptainSpecialHiInitCatchVars(ftStruct *fp)
{
    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_SPECIALHICAPTAIN, ftCaptainSpecialHiProcCatch, ftCommonCaptureCaptainProcCapture);
}

// 0x801602B0
void ftCaptainSpecialHiProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTCAPTAIN_FALCONDIVE_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTCAPTAIN_FALCONDIVE_LANDING_LAG, FALSE);
    }
}

// 0x80160304
void ftCaptainSpecialHiCatchProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) || (this_fp->command_vars.flags.flag0 != 0))
    {
        ftStruct *catch_fp = ftGetStruct(this_fp->catch_gobj);

        catch_fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_THROW;

        efParticle_Quake_MakeEffect(1); // Apply screen shake/rumble?
        ftCaptainSpecialHiThrowSetStatus(fighter_gobj);
    }
}

// 0x80160370
void ftCaptainSpecialHiProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        if (ABS(fp->input.pl.stick_range.x) > FTCAPTAIN_FALCONDIVE_TURN_STICK_RANGE_MIN)
        {
            ftCommon_StickInputSetLR(fp);

            fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y = fp->lr * HALF_PI32;
        }
    }
}

// 0x801603F0
void ftCaptainSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = AttributesGetStruct(fp);

    fp->phys_info.vel_air.x = fp->status_vars.captain.specialhi.vel.x;
    fp->phys_info.vel_air.y = fp->status_vars.captain.specialhi.vel.y;
    fp->phys_info.vel_air.z = 0.0F;

    if (ftPhysics_CheckClampAirVelXDec(fp, attributes->aerial_speed_max_x * FTCAPTAIN_FALCONDIVE_AIR_SPEED_MAX_MUL) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTCAPTAIN_FALCONDIVE_AIR_ACCEL_MUL, attributes->aerial_speed_max_x * FTCAPTAIN_FALCONDIVE_AIR_SPEED_MAX_MUL);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
    fp->status_vars.captain.specialhi.vel.x = fp->phys_info.vel_air.x;
    fp->status_vars.captain.specialhi.vel.y = fp->phys_info.vel_air.y;

    ftPhysics_ApplyAirVelTransNAll(fighter_gobj);

    fp->phys_info.vel_air.x += fp->status_vars.captain.specialhi.vel.x;
    fp->phys_info.vel_air.y += fp->status_vars.captain.specialhi.vel.y;
}

// 0x801604D8
void ftCaptainSpecialHiCatchProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vec;

    if (!(fp->status_vars.captain.specialhi.flags & 4))
    {
        ftCommonCaptureCaptainUpdatePositions(fighter_gobj, fp->catch_gobj, &vec);

        if (lbVector_Vec3fMagnitude(&vec) > 180.0F)
        {
            lbVector_Vec3fNormalize(&vec);
            lbVector_Vec3fScale(&vec, 180.0F);
        }
        lbVector_Vec3fSubtractFrom(&DObjGetStruct(fighter_gobj)->translate.vec.f, &vec);
    }
}

// 0x80160560
void ftCaptainSpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_air.y < 0.0F)
    {
        if (fp->command_vars.flags.flag2 == 0)
        {
            ftMap_CheckGroundCliffSetWaitOrLanding(fighter_gobj);
        }
        else
        {
            ftMap_CheckGroundEnvCatch(fighter_gobj);
            fp->command_vars.flags.flag2--;
        }
    }
    else if ((mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE) && (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK))
    {
        ftCommon_CliffCatch_SetStatus(fighter_gobj);
    }
}

// 0x801605FC
void ftCaptainSpecialHiProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;

    fp->status_vars.captain.specialhi.flags = 0;

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = FTCAPTAIN_FALCONDIVE_UNK_TIMER;

    fp->status_vars.captain.specialhi.vel.x = 0.0F;
    fp->status_vars.captain.specialhi.vel.y = 0.0F;
}

// 0x80160630
void ftCaptainSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    fp->proc_status = ftCaptainSpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCaptainSpecialHiInitCatchVars(fp);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x80160690
void ftCaptainSpecialHiProcCatch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj), *catch_fp;
    GObj *search_gobj;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialHiCatch, 0.0F, 1.0F, FTSTATUPDATE_EFFECT_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    gmCommonFighterSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);
    ftPhysics_StopVelAll(fighter_gobj);

    search_gobj = fp->search_gobj;
    fp->catch_gobj = search_gobj;

    catch_fp = ftGetStruct(search_gobj); // No NULL check, might be dangerous

    if (catch_fp->ground_or_air == GA_Air)
    {
        fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE;
        fp->x192_flag_b3 = FALSE;
    }
    else fp->x192_flag_b3 = TRUE;
}

// 0x80160730
void ftCaptainSpecialHiThrowSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialHiThrow, 0.0F, 1.0F, FTSTATUPDATE_EFFECT_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    gmCommonFighterSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);

    if ((fp->x192_flag_b3 == TRUE) && (fp->catch_gobj != NULL))
    {
        ftCommonThrownReleaseFighterLoseGrip(fighter_gobj);
    }
    fp->catch_gobj = NULL;
}

// 0x801607B4
void ftCaptainSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptainSpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCaptainSpecialHiInitCatchVars(fp);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}
