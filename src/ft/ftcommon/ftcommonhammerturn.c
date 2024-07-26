#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80147A70
void ftCommonHammerTurnUpdateModelPitch(GObj *fighter_gobj)
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
void ftCommonHammerTurnProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommonHammerTurnUpdateModelPitch(fighter_gobj);

    if (fp->command_vars.flags.flag1 == 0)
    {
        ftHammerSetStatusHammerWait(fighter_gobj);
    }
}

// 0x80147B14
void ftCommonHammerTurnProcInterrupt(GObj *fighter_gobj)
{
    ftCommonHammerKneeBendCheckInterruptCommon(fighter_gobj);
}

// 0x80147B34
void ftCommonHammerTurnSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = FTCOMMON_HAMMER_TURN_FRAMES;

    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusHammerTurn, ftHammerGetAnimFrame(fighter_gobj), 1.0F, ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);
    ftCommonHammerTurnUpdateModelPitch(fighter_gobj);
}

// 0x80147B9C
sb32 ftCommonHammerTurnCheckInterruptCommon(GObj *fighter_gobj)
{
    if (ftCommonTurnCheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommonHammerTurnSetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
