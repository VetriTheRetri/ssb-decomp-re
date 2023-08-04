#include <ft/chara/ftkirby/ftkirby.h>

// 0x8015F180
void ftKirby_CopyYoshi_SpecialN_InitCatchVars(ftStruct *fp, void (*proc_catch)(GObj*)) // Kirby's Yoshi Copy
{
    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_SPECIALNYOSHI, proc_catch, ftCommon_CaptureYoshi_ProcCapture);
}

// 0x8015F1AC
void ftKirby_CopyYoshi_SpecialNCatch_UpdateProcStatus(GObj *fighter_gobj, void (*proc_status)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->command_vars.flags.flag1 != 0) && (fp->catch_gobj != NULL)) || (fighter_gobj->anim_frame <= 0.0F))
    {
        fp->command_vars.flags.flag1 = 0;

        proc_status(fighter_gobj);
    }
}

// 0x8015F200
void ftKirby_CopyYoshi_SpecialNCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyYoshi_SpecialNCatch_UpdateProcStatus(fighter_gobj, ftKirby_CopyYoshi_SpecialNRelease_SetStatus);
}

// 0x8015F224
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyYoshi_SpecialNCatch_UpdateProcStatus(fighter_gobj, ftKirby_CopyYoshi_SpecialAirNRelease_SetStatus);
}

// 0x8015F248
void ftKirby_CopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftStruct *fp)
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

            ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);
        }
    }
}

// 0x8015F2BC
void ftKirby_CopyYoshi_SpecialNRelease_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftCommon_IfAnimEnd_SetStatusWait(fighter_gobj);
}

// 0x8015F2BC
void ftKirby_CopyYoshi_SpecialAirNRelease_ProcUpdate(GObj *fighter_gobj)
{
    ftKirby_CopyYoshi_SpecialAirNCatch_UpdateCaptureVars(ftGetStruct(fighter_gobj));
    ftCommon_IfAnimEnd_SetStatusFall(fighter_gobj);
}

// 0x8015F314
void ftKirby_CopyYoshi_SpecialN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyYoshi_SpecialN_SwitchStatusAir);
}

// 0x8015F338
void ftKirby_CopyYoshi_SpecialAirN_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyYoshi_SpecialAirN_SwitchStatusGround);
}

// 0x8015F35C
void ftKirby_CopyYoshi_SpecialNCatch_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyYoshi_SpecialNCatch_SwitchStatusAir);
}

// 0x8015F380
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyYoshi_SpecialAirNCatch_SwitchStatusGround);
}

// 0x8015F3A4
void ftKirby_CopyYoshi_SpecialNRelease_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftKirby_CopyYoshi_SpecialNRelease_SwitchStatusAir);
}

// 0x8015F3C8
void ftKirby_CopyYoshi_SpecialAirNRelease_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftKirby_CopyYoshi_SpecialAirNRelease_SwitchStatusGround);
}

// 0x8015F3EC
void ftKirby_CopyYoshi_SpecialN_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F3F8
void ftKirby_CopyYoshi_SpecialAirN_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F408
void ftKirby_CopyYoshi_SpecialAirN_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirby_CopyYoshi_SpecialN_InitCatchVars(fp, ftKirby_CopyYoshi_SpecialNCatch_ProcCatch);
}

// 0x8015F45C
void ftKirby_CopyYoshi_SpecialN_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));
    ftKirby_CopyYoshi_SpecialN_InitCatchVars(fp, ftKirby_CopyYoshi_SpecialAirNCatch_ProcCatch);
}

// 0x8015F4B0
void ftKirby_CopyYoshi_SpecialAirNCatch_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F4F0
void ftKirby_CopyYoshi_SpecialNCatch_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F530
void ftKirby_CopyYoshi_SpecialAirNRelease_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

void ftKirby_CopyYoshi_SpecialNRelease_SwitchStatusAir(GObj *fighter_gobj)
{
    ftMap_SetAir(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
}

// 0x8015F5B0
void ftKirby_CopyYoshi_SpecialN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_CopyYoshi_SpecialN_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirby_CopyYoshi_SpecialN_InitCatchVars(fp, ftKirby_CopyYoshi_SpecialNCatch_ProcCatch);
    ftAnim_Update(fighter_gobj);
}

// 0x8015F60C
void ftKirby_CopyYoshi_SpecialAirN_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftKirby_CopyYoshi_SpecialAirN_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirN, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftKirby_CopyYoshi_SpecialN_InitCatchVars(fp, ftKirby_CopyYoshi_SpecialAirNCatch_ProcCatch);
    ftAnim_Update(fighter_gobj);
}

// 0x8015F668
void ftKirby_CopyYoshi_SpecialNCatch_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
    func_ovl2_800D9444(fighter_gobj);

    fp->catch_gobj = fp->search_gobj;
}

// 0x8015F6AC
void ftKirby_CopyYoshi_SpecialNCatch_ProcCatch(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyYoshi_SpecialNCatch_InitStatusVars(fighter_gobj);
}

// 0x8015F6F0
void ftKirby_CopyYoshi_SpecialAirNCatch_ProcCatch(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNCatch, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyYoshi_SpecialNCatch_InitStatusVars(fighter_gobj);
}

// 0x8015F734
void ftKirby_CopyYoshi_SpecialNRelease_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015F768
void ftKirby_CopyYoshi_SpecialNRelease_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyYoshi_SpecialNRelease_InitStatusVars(fighter_gobj);
}

// 0x8015F7AC
void ftKirby_CopyYoshi_SpecialAirNRelease_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Kirby_CopyYoshi_SpecialAirNRelease, 0.0F, 1.0F, (FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_GFX_PRESERVE));
    ftAnim_Update(fighter_gobj);
    ftKirby_CopyYoshi_SpecialNRelease_InitStatusVars(fighter_gobj);
}