#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80160810
void ftKirbyCopyCaptainSpecialNUpdateEffect(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_attach_effect))
    {
        if (fp->command_vars.flags.flag0 == 1)
        {
            if (efParticle_FalconPunch_MakeEffect(fighter_gobj) != FALSE)
            {
                fp->is_attach_effect = TRUE;
            }
            fp->command_vars.flags.flag0 = 0;
        }
    }
    else if (fp->command_vars.flags.flag0 == 1)
    {
        ftCommon_ProcStopGFX(fighter_gobj);

        fp->command_vars.flags.flag0 = 2;
    }
}

// 0x80160894
f32 ftKirbyCopyCaptainSpecialNGetAngle(s32 stick_y)
{
    s32 temp_stick_y = ABS(stick_y);

    if (temp_stick_y > 50)
    {
        temp_stick_y = 50;
    }

    temp_stick_y -= 10;

    if (temp_stick_y < 0)
    {
        temp_stick_y = 0;
    }

    if (stick_y < 0)
    {
        temp_stick_y = -temp_stick_y;
    }

    return F_CLC_DTOR32((temp_stick_y * 30) / 40.0F);
}

// 0x8016090C
void ftKirbyCopyCaptainSpecialNProcPhysics(GObj *fighter_gobj)
{
    ftKirbyCopyCaptainSpecialNUpdateEffect(fighter_gobj);
    ftPhysics_ApplyGroundVelTransN(fighter_gobj);
}

// 0x80160934
void ftKirbyCopyCaptainSpecialAirNProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 unused;
    f32 boost;

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;
        fp->fighter_vars.kirby.copycaptain_falcon_punch_unk++;

        boost = ftKirbyCopyCaptainSpecialNGetAngle(fp->input.pl.stick_range.y);

        fp->phys_info.vel_air.y = __sinf(boost) * FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_BASE;
        fp->phys_info.vel_air.x = __cosf(boost) * fp->lr * FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_BASE;
    }
    ftKirbyCopyCaptainSpecialNUpdateEffect(fighter_gobj);

    switch (fp->command_vars.flags.flag2)
    {
    case 0:
        ftPhysics_ApplyAirVelFriction(fighter_gobj);
        break;

    case 1:
        fp->phys_info.vel_air.y *= FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_MUL; // Interestingly, Kirby's version multiplies by singles, 
        fp->phys_info.vel_air.x *= FTKIRBY_COPYCAPTAIN_FALCONPUNCH_VEL_MUL; // as opposed to Falcon's multiplying by doubles
        break;

    case 2:
        ftPhysics_ApplyAirVelDriftFastFall(fighter_gobj);
        break;
    }
}

// 0x80160A40
void ftKirbyCopyCaptainSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x80160A80
void ftKirbyCopyCaptainSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftPhysics_ClampAirVelXMax(fp);
}

// 0x80160ACC
void ftKirbyCopyCaptainSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_CheckGroundBreakEdgeProcMap(fighter_gobj, ftKirbyCopyCaptainSpecialNSwitchStatusAir);
}

// 0x80160AF0
void ftKirbyCopyCaptainSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyCaptainSpecialAirNSwitchStatusGround);
}

// 0x80160B14
void ftKirbyCopyCaptainSpecialNInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    
    fp->command_vars.flags.flag0 = fp->command_vars.flags.flag1 = fp->command_vars.flags.flag2 = 0;
}

// 0x80160B28
void func_ovl3_80160B28() // Unused
{
    return;
}

// 0x80160B30
void ftKirbyCopyCaptainSpecialNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyCaptainSpecialNInitStatusVars(fighter_gobj);
}

// 0x80160B70
void ftKirbyCopyCaptainSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyCaptain_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyCaptainSpecialNInitStatusVars(fighter_gobj);
}
