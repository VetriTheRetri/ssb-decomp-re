#include <ft/fighter.h>

// 0x8015F180
void ftKirbyCopyYoshiSpecialNInitCatchVars(ftStruct *fp, void (*proc_catch)(GObj*)) // Kirby's Yoshi Copy
{
    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_SPECIALNYOSHI, proc_catch, ftCommonCaptureYoshiProcCapture);
}

// 0x8015F1AC
void ftKirbyCopyYoshiSpecialNCatchUpdateProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->command_vars.flags.flag1 != 0) && (fp->catch_gobj != NULL)) || (fighter_gobj->anim_frame <= 0.0F))
    {
        fp->command_vars.flags.flag1 = 0;

        proc_status(fighter_gobj);
    }
}

// 0x8015F200
void ftKirbyCopyYoshiSpecialNCatchProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshiSpecialNCatchUpdateProcStatus(fighter_gobj, ftKirbyCopyYoshiSpecialNReleaseSetStatus);
}

// 0x8015F224
void ftKirbyCopyYoshiSpecialAirNCatchProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshiSpecialNCatchUpdateProcStatus(fighter_gobj, ftKirbyCopyYoshiSpecialAirNReleaseSetStatus);
}

// 0x8015F248
void ftKirbyCopyYoshiSpecialAirNCatchUpdateCaptureVars(ftStruct *fp)
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

            ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_NONE);
        }
    }
}

// 0x8015F2BC
void ftKirbyCopyYoshiSpecialNReleaseProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshiSpecialAirNCatchUpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8015F2BC
void ftKirbyCopyYoshiSpecialAirNReleaseProcUpdate(GObj *fighter_gobj)
{
    ftKirbyCopyYoshiSpecialAirNCatchUpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftStatusFallOnAnimEnd(fighter_gobj);
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
void ftKirbyCopyYoshiSpecialNCatchProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialNCatchSwitchStatusAir);
}

// 0x8015F380
void ftKirbyCopyYoshiSpecialAirNCatchProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialAirNCatchSwitchStatusGround);
}

// 0x8015F3A4
void ftKirbyCopyYoshiSpecialNReleaseProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialNReleaseSwitchStatusAir);
}

// 0x8015F3C8
void ftKirbyCopyYoshiSpecialAirNReleaseProcMap(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftKirbyCopyYoshiSpecialAirNReleaseSwitchStatusGround);
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
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshiSpecialNCatchProcCatch);
}

// 0x8015F45C
void ftKirbyCopyYoshiSpecialNSwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshiSpecialAirNCatchProcCatch);
}

// 0x8015F4B0
void ftKirbyCopyYoshiSpecialAirNCatchSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
}

// 0x8015F4F0
void ftKirbyCopyYoshiSpecialNCatchSwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
}

// 0x8015F530
void ftKirbyCopyYoshiSpecialAirNReleaseSwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
}

// 0x8015F570
void ftKirbyCopyYoshiSpecialNReleaseSwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
}

// 0x8015F5B0
void ftKirbyCopyYoshiSpecialNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyYoshiSpecialNProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshiSpecialNCatchProcCatch);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015F60C
void ftKirbyCopyYoshiSpecialAirNSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirbyCopyYoshiSpecialAirNProcStatus;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirbyCopyYoshiSpecialNInitCatchVars(fp, ftKirbyCopyYoshiSpecialAirNCatchProcCatch);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8015F668
void ftKirbyCopyYoshiSpecialNCatchInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);
    ftPhysics_StopVelAll(fighter_gobj);

    fp->catch_gobj = fp->search_gobj;
}

// 0x8015F6AC
void ftKirbyCopyYoshiSpecialNCatchProcCatch(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshiSpecialNCatchInitStatusVars(fighter_gobj);
}

// 0x8015F6F0
void ftKirbyCopyYoshiSpecialAirNCatchProcCatch(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshiSpecialNCatchInitStatusVars(fighter_gobj);
}

// 0x8015F734
void ftKirbyCopyYoshiSpecialNReleaseInitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftParamSetCaptureImmuneMask(fp, FTCATCHKIND_MASK_ALL);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F768
void ftKirbyCopyYoshiSpecialNReleaseSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshiSpecialNReleaseInitStatusVars(fighter_gobj);
}

// 0x8015F7AC
void ftKirbyCopyYoshiSpecialAirNReleaseSetStatus(GObj *fighter_gobj)
{
    ftMainSetFighterStatus(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_EFFECT_PRESERVE));
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
    ftKirbyCopyYoshiSpecialNReleaseInitStatusVars(fighter_gobj);
}
