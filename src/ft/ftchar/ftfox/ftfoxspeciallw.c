#include <ft/fighter.h>
#include <ef/effect.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lFTFoxSpecialLwReflector;           // 0x000019B0

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8015CB80
void ftFoxSpecialLwCheckSetRelease(ftStruct *fp)
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_b))
    {
        fp->status_vars.fox.speciallw.is_release = TRUE;
    }
}

// 0x8015CBA4
void ftFoxSpecialLwUpdateEffect(ftStruct *fp)
{
    if (fp->command_vars.flags.flag2 != 4)
    {
        if (fp->status_vars.fox.speciallw.effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(fp->status_vars.fox.speciallw.effect_gobj);

            ep->effect_vars.reflector.status = fp->command_vars.flags.flag2;
        }
        fp->command_vars.flags.flag2 = 4;
    }
}

// 0x8015CBD4
void ftFoxSpecialLwDecReleaseLag(ftStruct *fp)
{
    if (fp->status_vars.fox.speciallw.release_lag != 0)
    {
        fp->status_vars.fox.speciallw.release_lag--;
    }
}

// 0x8015CBEC
void ftFoxSpecialLwStartProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFoxSpecialLwUpdateEffect(fp);
    ftFoxSpecialLwCheckSetRelease(fp);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ga == FALSE)
        {
            ftFoxSpecialLwLoopSetStatus(fighter_gobj);
        }
        else ftFoxSpecialAirLwLoopSetStatus(fighter_gobj);
    }
}

// 0x8015CC64
void ftFoxSpecialAirLwCommonProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.fox.speciallw.gravity_delay != 0)
    {
        fp->status_vars.fox.speciallw.gravity_delay--;
    }
    else ftPhysicsApplyGravityClampTVel(fp, FTFOX_REFLECTOR_GRAVITY, attributes->tvel_default);
    
    if (ftPhysicsCheckClampAirVelXDecMax(fp, attributes) == FALSE)
    {
        ftPhysicsApplyAirVelXFriction(fp, attributes);
    }
}

// 0x8015CCE0
void ftFoxSpecialLwLoopProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFoxSpecialLwUpdateEffect(fp);
    ftFoxSpecialLwCheckSetRelease(fp);
    ftFoxSpecialLwDecReleaseLag(fp);

    if ((fp->status_vars.fox.speciallw.release_lag <= 0) && (fp->status_vars.fox.speciallw.is_release != FALSE))
    {
        if (fp->ga == nMPKineticsGround)
        {
            ftFoxSpecialLwEndSetStatus(fighter_gobj);
        }
        else ftFoxSpecialAirLwEndSetStatus(fighter_gobj);
    }
}

// 0x8015CD5C
void ftFoxSpecialLwLoopProcInterrupt(GObj *fighter_gobj)
{
    ftFoxSpecialLwTurnCheckInterruptLoop(fighter_gobj);
}

// 0x8015CD7C
void ftFoxSpecialLwLoopSetReflectFlag(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_reflect = TRUE;
}

// 0x8015CD90
void ftFoxSpecialLwLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialLwLoop, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
    ftFoxSpecialLwLoopSetReflectFlag(fighter_gobj);
}

// 0x8015CDCC
void ftFoxSpecialAirLwLoopSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialAirLwLoop, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
    ftFoxSpecialLwLoopSetReflectFlag(fighter_gobj);
}

// 0x8015CE08
void ftFoxSpecialLwHitDecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.fox.speciallw.release_lag <= 0) && (fp->status_vars.fox.speciallw.is_release != FALSE))
    {
        if (fp->ga == nMPKineticsGround)
        {
            ftFoxSpecialLwEndSetStatus(fighter_gobj);
        }
        else ftFoxSpecialAirLwEndSetStatus(fighter_gobj);
    }
    else if (fp->ga == nMPKineticsGround)
    {
        ftFoxSpecialLwLoopSetStatus(fighter_gobj);
    }
    else ftFoxSpecialAirLwLoopSetStatus(fighter_gobj);
}

// 0x8015CE8C
void ftFoxSpecialLwHitProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFoxSpecialLwUpdateEffect(fp);
    ftFoxSpecialLwCheckSetRelease(fp);
    ftFoxSpecialLwDecReleaseLag(fp);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftFoxSpecialLwHitDecideSetStatus(fighter_gobj);
    }
}

// 0x8015CEE8
void ftFoxSpecialLwHitSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = fp->lr_reflect;

    ftMainSetFighterStatus(fighter_gobj, (fp->ga == nMPKineticsGround) ? nFTFoxStatusSpecialLwHit : nFTFoxStatusSpecialAirLwHit, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));

    fp->is_reflect = TRUE;
}

// 0x8015CF50
void ftFoxSpecialLwTurnDecTurnFrames(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.speciallw.turn_frames--;

    if ((fp->command_vars.flags.flag1 == 0) && (fp->status_vars.fox.speciallw.turn_frames <= FTFOX_REFLECTOR_TURN_FRAMES))
    {
        fp->command_vars.flags.flag1 = 1;
        fp->lr = -fp->lr;
    }
    fp->joint[nFTPartsJointTopN]->rotate.vec.f.y += (F_CLC_DTOR32(-(180.0F / (f32)FTFOX_REFLECTOR_TURN_FRAMES))); // -QUART_PI32

    func_ovl2_800EB528(fp->joint[nFTPartsJointTopN]);
}

// 0x8015CFC0
void ftFoxSpecialLwTurnProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFoxSpecialLwUpdateEffect(fp);
    ftFoxSpecialLwCheckSetRelease(fp);
    ftFoxSpecialLwDecReleaseLag(fp);
    ftFoxSpecialLwTurnDecTurnFrames(fighter_gobj);

    if (fp->status_vars.fox.speciallw.turn_frames <= 0)
    {
        ftFoxSpecialLwHitDecideSetStatus(fighter_gobj);
    }
}

// 0x8015D01C
void ftFoxSpecialLwTurnInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_reflect = TRUE;
    fp->status_vars.fox.speciallw.turn_frames = FTFOX_REFLECTOR_TURN_FRAMES;
    fp->command_vars.flags.flag1 = 0;

    ftFoxSpecialLwTurnDecTurnFrames(fighter_gobj);
}

// 0x8015D054
void ftFoxSpecialLwTurnSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialLwTurn, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
    ftFoxSpecialLwTurnInitStatusVars(fighter_gobj);
}

// 0x8015D090
void ftFox_SpecialAirLwTurn_SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialAirLwTurn, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
    ftFoxSpecialLwTurnInitStatusVars(fighter_gobj);
}

// 0x8015D0CC
sb32 ftFoxSpecialLwTurnCheckInterruptLoop(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommonTurnCheckInputSuccess(fighter_gobj) != FALSE)
    {
        if (fp->ga == nMPKineticsGround)
        {
            ftFoxSpecialLwTurnSetStatus(fighter_gobj);

            return TRUE;
        }
        else ftFox_SpecialAirLwTurn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x8015D130
void ftFoxSpecialLwEndProcUpdate(GObj *fighter_gobj)
{
    ftFoxSpecialLwUpdateEffect(ftGetStruct(fighter_gobj));

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftParamProcStopEffect(fighter_gobj);
        mpCommonSetFighterWaitOrFall(fighter_gobj);
    }
}

// 0x8015D180
void ftFoxSpecialLwEndSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialLwEnd, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
}

// 0x8015D1B0
void ftFoxSpecialAirLwEndSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialAirLwEnd, 0.0F, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_COLANIM));
}

// 0x8015D1E0
void ftFoxSpecialLwStartInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.speciallw.release_lag = FTFOX_REFLECTOR_RELEASE_LAG;
    fp->status_vars.fox.speciallw.is_release = FALSE;
    fp->command_vars.flags.flag2 = 4;
    fp->status_vars.fox.speciallw.gravity_delay = FTFOX_REFLECTOR_GRAVITY_DELAY;

    fp->status_vars.fox.speciallw.effect_gobj = efManagerFoxReflectorMakeEffect(fighter_gobj);

    if (fp->status_vars.fox.speciallw.effect_gobj != NULL)
    {
        fp->is_attach_effect = TRUE;
    }
    fp->special_hit = (ftSpecialHit*) ((uintptr_t)gFTDataFoxMainMotion + (intptr_t)&lFTFoxSpecialLwReflector); // Another linker thing
}

// 0x8015D250
void ftFoxSpecialLwStartSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialLwStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftFoxSpecialLwStartInitStatusVars(fighter_gobj);
}

// 0x8015D290
void ftFoxSpecialAirLwStartSetStatus(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTFoxStatusSpecialAirLwStart, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainPlayAnimNoEffect(fighter_gobj);
    ftFoxSpecialLwStartInitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;
}
