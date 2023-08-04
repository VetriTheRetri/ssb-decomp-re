#include <ft/fighter.h>

// 0x8013EFB0
void ftCommon_RunBrake_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((ftCommon_KneeBend_CheckInterruptRun(fighter_gobj) == FALSE) && (fp->command_vars.flags.flag1 != 0) && (fighter_gobj->anim_frame <= 4.0F))
    {
        ftCommon_TurnRun_CheckInterruptRun(fighter_gobj);
    }
}

// 0x8013F014
void ftCommon_RunBrake_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8978(fp, attributes->traction * 1.25F);
    func_ovl2_800D87D0(fighter_gobj);
}

// 0x8013F05C
void ftCommon_RunBrake_SetStatus(GObj *fighter_gobj, u32 flag)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Common_RunBrake, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->command_vars.flags.flag1 = flag;
}

// 0x8013F0A0
bool32 ftCommon_RunBrake_CheckInterruptRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.stick_range.x * fp->lr) < FTCOMMON_RUN_STICK_RANGE_MIN)
    {
        ftCommon_RunBrake_SetStatus(fighter_gobj, 1);

        return TRUE;
    }
    else return FALSE;
}

// 0x8013F0EC
bool32 ftCommon_RunBrake_CheckInterruptTurnRun(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ABS(fp->input.pl.stick_range.x) < FTCOMMON_RUN_STICK_RANGE_MIN)
    {
        ftCommon_RunBrake_SetStatus(fighter_gobj, 0);

        if (fp->phys_info.vel_ground.x > fp->attributes->run_speed)
        {
            fp->phys_info.vel_ground.x = fp->attributes->run_speed;
        }
        return TRUE;
    }
    else return FALSE;
}