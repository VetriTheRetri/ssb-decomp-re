#include <ft/fighter.h>

// 0x80147A70
void ftCommon_HammerTurn_UpdateModelPitch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1--;

        if (fp->command_vars.flags.flag1 == (FTCOMMON_HAMMER_TURN_FRAMES / 2))
        {
            fp->lr = -fp->lr;
        }
        fp->joint[ftParts_Joint_TopN]->rotate.vec.f.y += FTCOMMON_HAMMER_TURN_ROTATE_STEP;

        func_ovl2_800EB528(fp->joint[ftParts_Joint_TopN]);
    }
}

// 0x80147AD0
void ftCommon_HammerTurn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_HammerTurn_UpdateModelPitch(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 0)
    {
        ftHammer_SetStatusHammerWait(fighter_gobj);
    }
}

// 0x80147B14
void ftCommon_HammerTurn_ProcInterrupt(GObj *fighter_gobj)
{
    ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj);
}

// 0x80147B34
void ftCommon_HammerTurn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = FTCOMMON_HAMMER_TURN_FRAMES;

    ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_HammerTurn, ftHammer_GetAnimFrame(fighter_gobj), 1.0F, ftHammer_GetStatUpdateFlags(fighter_gobj));
    ftHammer_CheckSetColAnim(fighter_gobj);
    ftCommon_HammerTurn_UpdateModelPitch(fighter_gobj);
}

// 0x80147B9C
sb32 ftCommon_HammerTurn_CheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_HammerTurn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}