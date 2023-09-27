#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x80160BB0
void ftKirby_SpecialHi_UpdateGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        switch (fp->command_vars.flags.flag1)
        {
        case 1:
            if (fp->is_attach_effect)
            {
                ftCommon_ProcStopGFX(fighter_gobj);
                fp->command_vars.flags.flag1 = 0;
            }
            break;

        default:
            while (TRUE)
            {
                fatal_printf("gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n", fp->command_vars.flags.flag1);
                scnmgr_crash_print_gobj_state();
            }
        }
    }
    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        if (fp->is_attach_effect)
        {
            ftCommon_ProcStopGFX(fighter_gobj);
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 2:
        if (efParticle_FinalCutterDraw_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 3:
        if (efParticle_FinalCutterUp_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 4:
        if (efParticle_KirbyCutterDown_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 5:
        if (efParticle_FinalCutterTrail_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    default:
        while (TRUE)
        {
            fatal_printf("gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n", fp->command_vars.flags.flag2);
            scnmgr_crash_print_gobj_state();
        }
    }
}

// 0x80160D1C
void ftKirby_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftKirby_SpecialAirHiFall_SetStatus);
}

// 0x80160D40
void ftKirby_SpecialHiLanding_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTKIRBY_FINALCUTTER_BEAM_SPAWN_JOINT], &pos);

        if (fp->lr == LR_Right) pos.x += FTKIRBY_FINALCUTTER_OFF_X; // Ternary doesn't match here, only if/else :(

        else pos.x -= FTKIRBY_FINALCUTTER_OFF_X;

        wpKirby_Cutter_MakeWeapon(fighter_gobj, &pos);
    }
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Wait_SetStatus);
}

// 0x80160DF0
void ftKirby_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirby_SpecialHi_UpdateGFX(fighter_gobj);
    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, 8, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyVelAirXFriction(fp, attributes);
    }
}

// 0x80160E70
void ftKirby_SpecialHiLanding_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirby_SpecialHi_UpdateGFX(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        ftPhysics_SetGroundVelTrasnN(fighter_gobj);
    }

    else
    {
        ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ClampAirVelXStickRange(fp, 8, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
            ftPhysics_ApplyVelAirXFriction(fp, attributes);
        }
    }
}

// 0x80160F10
void ftKirby_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 temp_scale;

    ftKirby_SpecialHi_UpdateGFX(fighter_gobj);

    fp->joint[ftParts_Joint_TopN]->scale.vec.f.x = fp->joint[ftParts_Joint_TopN]->scale.vec.f.y = fp->joint[ftParts_Joint_TopN]->scale.vec.f.z = 0.8F;

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    fp->joint[ftParts_Joint_TopN]->scale.vec.f.x = fp->joint[ftParts_Joint_TopN]->scale.vec.f.y = fp->joint[ftParts_Joint_TopN]->scale.vec.f.z = 1.0F;

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, 8, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyVelAirXFriction(fp, attributes);
    }
}

// 0x80160FD8
void ftKirby_SpecialAirHiFall_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirby_SpecialHi_UpdateGFX(fighter_gobj);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, 8, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyVelAirXFriction(fp, attributes);
    }
}

// 0x8016104C
void ftKirby_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Ground)
    {
        if (func_ovl2_800DDE50(fighter_gobj) == FALSE)
        {
            fp->ground_or_air = GA_Air;
        }
    }
    else
    {
        if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_type & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
            else if ((fp->coll_data.coll_type & MPCOLL_KIND_GROUND) && (fp->phys_info.vel_air.y < 0.0F))
            {
                ftMap_SetGround(fp);
                ftKirby_SpecialHiLanding_SetStatus(fighter_gobj);
            }
        }
    }
}

// 0x80161104
void ftKirby_SpecialAirHiFall_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_KIND_GROUND)
        {
            ftMap_SetGround(fp);
            ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialHiLanding, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

            fp->proc_lagstart = ftCommon_ProcPauseGFX;
            fp->proc_lagend = ftCommon_ProcResumeGFX;
        }
        else if (fp->coll_data.coll_type & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
    }
}

// 0x80161194
void ftKirby_SpecialHi_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;
}

// 0x801611A8
void ftKirby_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_SpecialHi_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x80161210
void ftKirby_SpecialHiLanding_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialHiLanding, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x80161270
void ftKirby_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_SpecialHi_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;
}

// 0x801612D8
void ftKirby_SpecialAirHiFall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_y_bak = fp->phys_info.vel_air.y;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Kirby_SpecialAirHiFall, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_lagstart = ftCommon_ProcPauseGFX;
    fp->proc_lagend = ftCommon_ProcResumeGFX;

    fp->jumps_used = fp->attributes->jumps_max;

    fp->phys_info.vel_air.y = vel_y_bak;
}