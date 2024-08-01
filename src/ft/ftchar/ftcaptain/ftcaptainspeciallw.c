#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015FC30
void ftCaptainSpecialLwUpdateEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (fp->command_vars.flags.flag2 == 1)
        {
            if (efManagerCaptainFalconKickMakeEffect(fighter_gobj) != NULL)
            {
                fp->is_attach_effect = TRUE;
            }
            fp->command_vars.flags.flag2 = 0;
        }
    }
    else if (fp->command_vars.flags.flag2 == 2)
    {
        ftParamProcStopEffect(fighter_gobj);
        fp->command_vars.flags.flag2 = 0;
    }
}

// 0x8015FCB0
void ftCaptainSpecialLwSetAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->ga = nMPKineticsAir;
    fp->jumps_used = 1;
}

// 0x8015FCC8
void ftCaptainSpecialLwSetGround(GObj *fighter_gobj) // Unused?
{
    mpCommonSetFighterGround(ftGetStruct(fighter_gobj));
}

// 0x8015FCE8
void ftCaptainSpecialLwDecideMapCollide(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        if (fp->command_vars.flags.flag3 != 0)
        {
            mpCommonProcFighterOnEdge(fighter_gobj, ftCaptainSpecialLwSetAir);
        }
        else mpCommonProcFighterOnGround(fighter_gobj, ftCaptainSpecialLwSetAir);
    }
    else mpCommonProcFighterLanding(fighter_gobj, ftCaptainSpecialLwSetGround);
}

// 0x8015FD50
void ftCaptainSpecialLwDecideSetEndStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        ftCommonWaitSetStatus(fighter_gobj);
    }
    else ftCommonFallSetStatus(fighter_gobj);
}

// 0x8015FD90
void ftCaptainSpecialLwProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCaptainSpecialLwDecideSetEndStatus);
}

// 0x8015FDB4
void ftCaptainSpecialLwProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        fp->joint[nFTPartsJointTopN]->rotate.vec.f.z = -atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y);
        ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }
    else if (fp->command_vars.flags.flag0 != 0)
    {
        ftPhysics_ApplyAirVelFriction(fighter_gobj);
    }
    else ftPhysics_ApplyAirVelTransNAll(fighter_gobj);

    lbVector_Vec3fScale(&fp->phys_info.vel_air, fp->status_vars.captain.speciallw.vel_scale);

    ftCaptainSpecialLwUpdateEffect(fighter_gobj);
}

// 0x8015FE4C
void ftCaptainSpecialLwLandingProcPhysics(GObj *fighter_gobj)
{
    ftPhysics_ApplyGroundVelTransN(fighter_gobj);
}

// 0x8015FE6C
void ftCaptainSpecialAirLwProcPhysics(GObj *fighter_gobj)
{
    ftCaptainSpecialLwUpdateEffect(fighter_gobj);
    ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
}

// 0x8015FE94
void ftCaptainSpecialLwBoundProcPhysics(GObj *fighter_gobj)
{
    ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
}

// 0x8015FEB4
sb32 ftCaptainSpecialLwBoundCheckMapCollideGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 == 1) && (fp->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL)))
    {
        mpCommonSetFighterAir(fp);
        ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialLwBound, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

        fp->command_vars.flags.flag1 = 0;

        return TRUE;
    }
    else return FALSE;
}

// 0x8015FF2C
sb32 ftCaptainSpecialLwAirCheckAirGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 2)
    {
        if (fp->ga == nMPKineticsAir)
        {
            ftCaptainSpecialLwAirSetStatus(fighter_gobj);

            fp->command_vars.flags.flag1 = 0;

            return TRUE;
        }
        fp->command_vars.flags.flag1 = 0;
    }
    return FALSE;
}

// 0x8015FF88
void ftCaptainSpecialLwProcMap(GObj *fighter_gobj)
{
    ftCaptainSpecialLwDecideMapCollide(fighter_gobj);

    if (ftCaptainSpecialLwBoundCheckMapCollideGoto(fighter_gobj) == FALSE)
    {
        ftCaptainSpecialLwAirCheckAirGoto(fighter_gobj);
    }
}

// 0x8015FFC0
void ftCaptainSpecialLwAirProcMap(GObj *fighter_gobj)
{
    ftCaptainSpecialLwDecideMapCollide(fighter_gobj);
}

// 0x8015FFE0
void ftCaptainSpecialAirLwProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterLanding(fighter_gobj, ftCaptainSpecialLwLandingSetStatus);
}

// 0x80160004
void ftCaptainSpecialLwProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.captain.speciallw.scale_apply_timer < FTCAPTAIN_FALCONKICK_VEL_SCALE_APPLY_TIME)
    {
        fp->status_vars.captain.speciallw.scale_apply_timer++;

        fp->status_vars.captain.speciallw.vel_scale /= FTCAPTAIN_FALCONKICK_VEL_SCALE_DIV;
    }
}

// 0x80160038
void ftCaptainSpecialLwProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.captain.speciallw.scale_apply_timer = 0;

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag3 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = 0;

    fp->status_vars.captain.speciallw.vel_scale = 1.0F;
}

// 0x80160060
void ftCaptainSpecialLwAirSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 rot_z = fp->joint[nFTPartsJointTopN]->rotate.vec.f.z;

    mpCommonSetFighterAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialLwAir, 0.0F, 1.0F, FTSTATUS_PRESERVE_EFFECT);

    fp->joint[nFTPartsJointTopN]->rotate.vec.f.z = rot_z;
    fp->joint[nFTPartsJointTransN]->rotate.vec.f.z = fp->joint[nFTPartsJointTopN]->rotate.vec.f.z;

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x801600EC
void ftCaptainSpecialLwLandingSetStatus(GObj *fighter_gobj)
{
    mpCommonSetFighterGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialLwLanding, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
}

// 0x80160128
void ftCaptainSpecialLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptainSpecialLwProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_shield = ftCaptainSpecialLwProcHit;
    fp->proc_hit = ftCaptainSpecialLwProcHit;

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x801601A0
void jtgt_ovl3_801601A0(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialLwAir, 0.0F, 1.0F, FTSTATUS_PRESERVE_EFFECT);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_hit = ftCaptainSpecialLwProcHit;

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x8016020C
void ftCaptainSpecialAirLwSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptainSpecialLwProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTCaptainStatusSpecialAirLw, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}
