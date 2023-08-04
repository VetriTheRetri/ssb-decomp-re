#include <ft/fighter.h>

// 0x8013F9A0
void ftCommon_Fall_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_SpecialAir_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_AttackAir_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_JumpAerial_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x8013F9E0
void ftCommon_Fall_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_HammerCheckHold(fighter_gobj) != FALSE)
    {
        ftCommon_HammerFall_SetStatus(fighter_gobj);
    }
    else
    {
        if (fp->ground_or_air == GA_Ground)
        {
            ftMap_SetAir(fp);
        }
        ftStatus_Update(fighter_gobj, ((fp->jumps_used >= fp->attributes->jumps_max) ? ftStatus_Common_FallAerial : ftStatus_Common_Fall), 0.0F, 1.0F, FTSTATUPDATE_FASTFALL_PRESERVE);

        func_ovl2_800D8EB8(fp);

        fp->x192_flag_b0 = TRUE;
    }
}