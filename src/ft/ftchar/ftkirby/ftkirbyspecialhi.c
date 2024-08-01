#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80160BB0
void ftKirbySpecialHiUpdateEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        switch (fp->command_vars.flags.flag1)
        {
        case 1:
            if (fp->is_attach_effect)
            {
                ftParamProcStopEffect(fighter_gobj);
                fp->command_vars.flags.flag1 = 0;
            }
            break;

        default:
            while (TRUE)
            {
                gsFatalPrintF("gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n", fp->command_vars.flags.flag1);
                smRunPrintGObjStatus();
            }
        }
    }
    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        break;

    case 1:
        if (fp->is_attach_effect)
        {
            ftParamProcStopEffect(fighter_gobj);
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 2:
        if (efManagerKirbyCutterDrawMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 3:
        if (efManagerKirbyCutterUpMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 4:
        if (efManagerKirbyCutterDownMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    case 5:
        if (efManagerKirbyCutterTrailMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
            fp->command_vars.flags.flag2 = 0;
        }
        break;

    default:
        while (TRUE)
        {
            gsFatalPrintF("gcFighterSpecialHiEffectKirby : Error  Unknown value %d \n", fp->command_vars.flags.flag2);
            smRunPrintGObjStatus();
        }
    }
}

// 0x80160D1C
void ftKirbySpecialHiProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftKirbySpecialAirHiFallSetStatus);
}

// 0x80160D40
void ftKirbySpecialHiLandingProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        gmCollisionGetFighterPartsWorldPosition(fp->joint[FTKIRBY_FINALCUTTER_BEAM_SPAWN_JOINT], &pos);

        if (fp->lr == nGMDirectionR) pos.x += FTKIRBY_FINALCUTTER_OFF_X; // Ternary doesn't match here, only if/else :(

        else pos.x -= FTKIRBY_FINALCUTTER_OFF_X;

        wpKirbyCutterMakeWeapon(fighter_gobj, &pos);
    }
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonWaitSetStatus);
}

// 0x80160DF0
void ftKirbySpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirbySpecialHiUpdateEffect(fighter_gobj);
    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x80160E70
void ftKirbySpecialHiLandingProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirbySpecialHiUpdateEffect(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        ftPhysics_ApplyGroundVelTransN(fighter_gobj);
    }

    else
    {
        ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

        if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
        {
            ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
            ftPhysics_ApplyAirVelXFriction(fp, attributes);
        }
    }
}

// 0x80160F10
void ftKirbySpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;
    f32 temp_scale;

    ftKirbySpecialHiUpdateEffect(fighter_gobj);

    fp->joint[nFTPartsJointTopN]->scale.vec.f.x = fp->joint[nFTPartsJointTopN]->scale.vec.f.y = fp->joint[nFTPartsJointTopN]->scale.vec.f.z = 0.8F;

    ftPhysics_ApplyAirVelTransNYZ(fighter_gobj);

    fp->joint[nFTPartsJointTopN]->scale.vec.f.x = fp->joint[nFTPartsJointTopN]->scale.vec.f.y = fp->joint[nFTPartsJointTopN]->scale.vec.f.z = 1.0F;

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x80160FD8
void ftKirbySpecialAirHiFallProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    ftKirbySpecialHiUpdateEffect(fighter_gobj);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTKIRBY_FINALCUTTER_AIR_ACCEL_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyAirVelXFriction(fp, attributes);
    }
}

// 0x8016104C
void ftKirbySpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsGround)
    {
        if (ftMap_CheckGroundStopEdge(fighter_gobj) == FALSE)
        {
            fp->ga = nMPKineticsAir;
        }
    }
    else
    {
        if (mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
            {
                ftCommonCliffCatchSetStatus(fighter_gobj);
            }
            else if ((fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND) && (fp->phys_info.vel_air.y < 0.0F))
            {
                ftMap_SetGround(fp);
                ftKirbySpecialHiLandingSetStatus(fighter_gobj);
            }
        }
    }
}

// 0x80161104
void ftKirbySpecialAirHiFallProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            ftMap_SetGround(fp);
            ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusSpecialHiLanding, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

            fp->proc_lagstart = ftParamProcPauseEffect;
            fp->proc_lagend = ftParamProcResumeEffect;
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
    }
}

// 0x80161194
void ftKirbySpecialHiProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    
    fp->command_vars.flags.flag0 = fp->command_vars.flags.flag1 = fp->command_vars.flags.flag2 = 0;
}

// 0x801611A8
void ftKirbySpecialHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbySpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusSpecialHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x80161210
void ftKirbySpecialHiLandingSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusSpecialHiLanding, 0.0F, 1.0F, FTSTATUS_PRESERVE_EFFECT);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x80161270
void ftKirbySpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbySpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusSpecialAirHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;
}

// 0x801612D8
void ftKirbySpecialAirHiFallSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_y_bak = fp->phys_info.vel_air.y;

    ftMainSetFighterStatus(fighter_gobj, nFTKirbyStatusSpecialAirHiFall, 0.0F, 1.0F, FTSTATUS_PRESERVE_EFFECT);
    ftMainPlayAnimNoEffect(fighter_gobj);

    fp->proc_lagstart = ftParamProcPauseEffect;
    fp->proc_lagend = ftParamProcResumeEffect;

    fp->jumps_used = fp->attributes->jumps_max;

    fp->phys_info.vel_air.y = vel_y_bak;
}
