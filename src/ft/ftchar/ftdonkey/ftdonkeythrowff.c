#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014DD00
void ftDonkeyThrowFFProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.throwff.is_turn != FALSE)
    {
        fp->status_vars.common.throwff.turn_frames--;

        if (fp->lr == nGMDirectionR)
        {
            DObjGetStruct(fighter_gobj)->rotate.vec.f.y = F_CST_DTOR32(90.0F) - (((f32)fp->status_vars.common.throwff.turn_frames / FTCOMMON_THROWFF_TURN_FRAMES) * F_CST_DTOR32(180.0F)); // HALF_PI32, PI32
        }
        else DObjGetStruct(fighter_gobj)->rotate.vec.f.y = F_CST_DTOR32(-90.0F) + (((f32)fp->status_vars.common.throwff.turn_frames / FTCOMMON_THROWFF_TURN_FRAMES) * F_CST_DTOR32(180.0F)); // -HALF_PI32, PI32
        
        if (fp->status_vars.common.throwff.turn_frames == 0)
        {
            fp->status_vars.common.throwff.is_turn = FALSE;
        }
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        ftCommonThrownProcPhysics(fp->catch_gobj);
        ftCommonThrownReleaseThrownUpdateStats(fp->catch_gobj, -fp->lr, 0, TRUE);

        fp->command_vars.flags.flag2 = 0;
        fp->catch_gobj = NULL;

        ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftMap_SetStatusWaitOrFall(fighter_gobj);
    }
}

// 0x8014DE30
void ftDonkeyThrowAirFFSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTDonkeyStatusThrowFF, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);

    fp->status_vars.common.throwff.is_turn = FALSE;

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);
}

// 0x8014DE80
void ftDonkeyThrowFFSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, nFTDonkeyStatusThrowAirFF, fighter_gobj->anim_frame, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);
}

// 0x8014DECC
void ftDonkeyThrowFFProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftDonkeyThrowFFSwitchStatusAir);
}

// 0x8014DEF0
void ftDonkeyThrowAirFFProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftDonkeyThrowAirFFSwitchStatusGround);
}

// 0x8014DF14
void ftDonkeyThrowFFSetStatus(GObj *fighter_gobj, sb32 is_turn)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    u32 flags;

    if (fp->ga == nMPKineticsGround)
    {
        status_id = nFTDonkeyStatusThrowFF;
        flags = FTSTATUS_PRESERVE_NONE;
    }
    else
    {
        status_id = nFTDonkeyStatusThrowAirFF;
        flags = FTSTATUS_PRESERVE_FASTFALL;
    }
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, flags);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);

    fp->command_vars.flags.flag2 = 0;

    fp->status_vars.common.throwff.is_turn = is_turn;

    if (is_turn != FALSE)
    {
        fp->lr = -fp->lr;

        fp->status_vars.common.throwff.turn_frames = FTCOMMON_THROWFF_TURN_FRAMES;
    }
}

// 0x8014DFA8
sb32 ftDonkeyThrowFFCheckInterruptThrowFCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    sb32 is_turn = FALSE;

    if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
    {
        if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_THROWFF_TURN_STICK_RANGE_MIN) && ((fp->input.pl.stick_range.x * fp->lr) < 0) && (fp->ga == nMPKineticsAir))
        {
            is_turn = TRUE;
        }
        ftDonkeyThrowFFSetStatus(fighter_gobj, is_turn);

        return TRUE;
    }
    else return FALSE;
}
