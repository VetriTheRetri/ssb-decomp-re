#include <ft/fighter.h>

// 0x8015FC30
void ftCaptain_SpecialLw_UpdateGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (fp->command_vars.flags.flag2 == 1)
        {
            if (efParticle_FalconKick_MakeEffect(fighter_gobj) != NULL)
            {
                fp->is_attach_effect = TRUE;
            }
            fp->command_vars.flags.flag2 = 0;
        }
    }
    else if (fp->command_vars.flags.flag2 == 2)
    {
        ftCommon_ProcStopGFX(fighter_gobj);
        fp->command_vars.flags.flag2 = 0;
    }
}

// 0x8015FCB0
void ftCaptain_SpecialLw_SetAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->ground_or_air = GA_Air;
    fp->jumps_used = 1;
}

// 0x8015FCC8
void func_ovl3_8015FCC8(GObj *fighter_gobj) // Unused?
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
}

// 0x8015FCE8
void ftCaptain_SpecialLw_DecideMapCollide(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        if (fp->command_vars.flags.flag3 != 0)
        {
            ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftCaptain_SpecialLw_SetAir);
        }
        else ftMap_ProcFighterAirProcMap(fighter_gobj, ftCaptain_SpecialLw_SetAir);
    }
    else mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCaptain_SpecialLw_SetAir);
}

// 0x8015FD50
void ftCaptain_SpecialLw_DecideSetEndStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
    else ftCommon_Fall_SetStatus(fighter_gobj);
}

// 0x8015FD90
void ftCaptain_SpecialLw_ProcUpdate(GObj *fighter_gobj)
{
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftCaptain_SpecialLw_DecideSetEndStatus);
}

// 0x8015FDB4
void ftCaptain_SpecialLw_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.z = -atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y);
        ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }
    else if (fp->command_vars.flags.flag0 != 0)
    {
        ftPhysics_ApplyAirVelFriction(fighter_gobj);
    }
    else ftPhysics_ApplyAirVelTransNAll(fighter_gobj);

    lbVector_Vec3fScale(&fp->phys_info.vel_air, fp->status_vars.captain.speciallw.vel_scale);

    ftCaptain_SpecialLw_UpdateGFX(fighter_gobj);
}

// 0x8015FE4C
void ftCaptain_SpecialLwLanding_ProcPhysics(GObj *fighter_gobj)
{
    ftPhysics_ApplyGroundVelTransN(fighter_gobj);
}

// 0x8015FE6C
void ftCaptain_SpecialAirLw_ProcPhysics(GObj *fighter_gobj)
{
    ftCaptain_SpecialLw_UpdateGFX(fighter_gobj);
    ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
}

// 0x8015FE94
void ftCaptain_SpecialLwBound_ProcPhysics(GObj *fighter_gobj)
{
    ftPhysics_ApplyAirVelTransNAll(fighter_gobj);
}

// 0x8015FEB4
sb32 ftCaptain_SpecialLwBound_CheckMapCollideGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 == 1) && (fp->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL)))
    {
        ftMap_SetAir(fp);
        ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialLwBound, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

        fp->command_vars.flags.flag1 = 0;

        return TRUE;
    }
    else return FALSE;
}

// 0x8015FF2C
sb32 ftCaptain_SpecialLwAir_CheckAirGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 2)
    {
        if (fp->ground_or_air == GA_Air)
        {
            ftCaptain_SpecialLwAir_SetStatus(fighter_gobj);

            fp->command_vars.flags.flag1 = 0;

            return TRUE;
        }
        fp->command_vars.flags.flag1 = 0;
    }
    return FALSE;
}

// 0x8015FF88
void ftCaptain_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    ftCaptain_SpecialLw_DecideMapCollide(fighter_gobj);

    if (ftCaptain_SpecialLwBound_CheckMapCollideGoto(fighter_gobj) == FALSE)
    {
        ftCaptain_SpecialLwAir_CheckAirGoto(fighter_gobj);
    }
}

// 0x8015FFC0
void ftCaptain_SpecialLwAir_ProcMap(GObj *fighter_gobj)
{
    ftCaptain_SpecialLw_DecideMapCollide(fighter_gobj);
}

// 0x8015FFE0
void ftCaptain_SpecialAirLw_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftCaptain_SpecialLwLanding_SetStatus);
}

// 0x80160004
void ftCaptain_SpecialLw_ProcHit(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.captain.speciallw.scale_apply_timer < FTCAPTAIN_FALCONKICK_VEL_SCALE_APPLY_TIME)
    {
        fp->status_vars.captain.speciallw.scale_apply_timer++;

        fp->status_vars.captain.speciallw.vel_scale /= FTCAPTAIN_FALCONKICK_VEL_SCALE_DIV;
    }
}

// 0x80160038
void ftCaptain_SpecialLw_ProcStatus(GObj *fighter_gobj)
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
void ftCaptain_SpecialLwAir_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 rot_z = fp->joint[ftParts_Joint_TopN]->rotate.vec.f.z;

    ftMap_SetAir(fp);
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialLwAir, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);

    fp->joint[ftParts_Joint_TopN]->rotate.vec.f.z = rot_z;
    fp->joint[ftParts_Joint_TransN]->rotate.vec.f.z = fp->joint[ftParts_Joint_TopN]->rotate.vec.f.z;

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x801600EC
void ftCaptain_SpecialLwLanding_SetStatus(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialLwLanding, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x80160128
void ftCaptain_SpecialLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptain_SpecialLw_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_shield = ftCaptain_SpecialLw_ProcHit;
    fp->proc_hit = ftCaptain_SpecialLw_ProcHit;

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

void jtgt_ovl3_801601A0(GObj *fighter_gobj) // Unused
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialLwAir, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_hit = ftCaptain_SpecialLw_ProcHit;

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x8016020C
void ftCaptain_SpecialAirLw_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptain_SpecialLw_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Captain_SpecialAirLw, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}