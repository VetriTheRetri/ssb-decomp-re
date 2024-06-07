#include <ft/fighter.h>

// 0x8015F180
void ftKirbyCopyYoshiSpecialNInitCatchVars(ftStruct *fp, void (*proc_catch)(GObj*)) // Kirby's Yoshi Copy
{
    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_SPECIALNYOSHI, proc_catch, ftCommon_CaptureYoshi_ProcCapture);
}

// 0x8015F1AC
void ftKirbyCopyYoshi_SpecialNCatch_UpdateProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->command_vars.flags.flag1 != 0) && (fp->catch_gobj != NULL)) || (fighter_gobj->anim_frame <= 0.0F))
    {
        fp->command_vars.flags.flag1 = 0;

        proc_status(fighter_gobj);
    }
}

// 0x8015F200
void ftKirbyCopyYoshi_SpecialNCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshi_SpecialNCatch_UpdateProcStatus(fighter_gobj, ftKirbyCopyYoshi_SpecialNRelease_SetStatus);
}

// 0x8015F224
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshi_SpecialNCatch_UpdateProcStatus(fighter_gobj, ftKirbyCopyYoshi_SpecialAirNRelease_SetStatus);
}

// 0x8015F248
void ftKirbyCopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftStruct *fp)
{
    if (fp->command_vars.flags.flag2 != 0)
    {
        if (fp->catch_gobj != NULL)
        {
            ftStruct *catch_fp = ftGetStruct(fp->catch_gobj);

            catch_fp->status_vars.common.captureyoshi.stage = 1;

            fp->command_vars.flags.flag2 = 0;
        }
    }
    if (fp->command_vars.flags.flag1 != 0)
    {
        if (fp->catch_gobj != NULL)
        {
            ftStruct *catch_fp = ftGetStruct(fp->catch_gobj);

            catch_fp->status_vars.common.captureyoshi.stage = 3;

            fp->catch_gobj = NULL;

            fp->command_vars.flags.flag1 = 0;

            ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);
        }
    }
}

// 0x8015F2BC
void ftKirbyCopyYoshi_SpecialNRelease_ProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftStatus_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8015F2BC
void ftKirbyCopyYoshi_SpecialAirNRelease_ProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftStatus_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x8015F314
void ftKirbyCopyYoshiSpecialNProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialNSwitchStatusAir);
}

// 0x8015F338
void ftKirbyCopyYoshiSpecialAirNProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialAirNSwitchStatusGround);
}

// 0x8015F35C
void ftKirbyCopyYoshi_SpecialNCatch_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyYoshi_SpecialNCatch_SwitchStatusAir);
}

// 0x8015F380
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyYoshi_SpecialAirNCatch_SwitchStatusGround);
}

// 0x8015F3A4
void ftKirbyCopyYoshi_SpecialNRelease_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyYoshi_SpecialNRelease_SwitchStatusAir);
}

// 0x8015F3C8
void ftKirbyCopyYoshi_SpecialAirNRelease_ProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyYoshi_SpecialAirNRelease_SwitchStatusGround);
}

// 0x8015F3EC
void ftKirbyCopyYoshiSpecialNProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F3F8
void ftKirbyCopyYoshiSpecialAirNProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F408
void ftKirbyCopyYoshiSpecialAirNSwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshi_SpecialNCatch_ProcCatch);
}

// 0x8015F45C
void ftKirbyCopyYoshiSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshi_SpecialAirNCatch_ProcCatch);
}

// 0x8015F4B0
void ftKirbyCopyYoshi_SpecialAirNCatch_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F4F0
void ftKirbyCopyYoshi_SpecialNCatch_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F530
void ftKirbyCopyYoshi_SpecialAirNRelease_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F570
void ftKirbyCopyYoshi_SpecialNRelease_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F5B0
void ftKirbyCopyYoshiSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyYoshiSpecialNProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshi_SpecialNCatch_ProcCatch);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015F60C
void ftKirbyCopyYoshiSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyYoshiSpecialAirNProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshi_SpecialAirNCatch_ProcCatch);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015F668
void ftKirbyCopyYoshi_SpecialNCatch_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->catch_gobj = fp->search_gobj;
}

// 0x8015F6AC
void ftKirbyCopyYoshi_SpecialNCatch_ProcCatch(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshi_SpecialNCatch_InitStatusVars(fighter_gobj);
}

// 0x8015F6F0
void ftKirbyCopyYoshi_SpecialAirNCatch_ProcCatch(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshi_SpecialNCatch_InitStatusVars(fighter_gobj);
}

// 0x8015F734
void ftKirbyCopyYoshi_SpecialNRelease_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftSetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F768
void ftKirbyCopyYoshi_SpecialNRelease_SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshi_SpecialNRelease_InitStatusVars(fighter_gobj);
}

// 0x8015F7AC
void ftKirbyCopyYoshi_SpecialAirNRelease_SetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshi_SpecialNRelease_InitStatusVars(fighter_gobj);
}