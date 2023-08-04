#include <ft/chara/ftdonkey/ftdonkey.h>

#define ftCheckInterruptThrowFTurn(fighter_gobj)                     \
(                                                                           \
    (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) != FALSE) ||    \
    (ftDonkey_ThrowFF_CheckInterruptThrowFCommon(fighter_gobj) != FALSE)    \
)                                                                           \

// 0x8014D740
void ftDonkey_ThrowFTurn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        fp->lr = -fp->lr;

        fp->phys_info.vel_ground.x = -fp->phys_info.vel_ground.x;
    }
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftDonkey_ThrowFWait_SetStatus);
}

// 0x8014D790
void ftDonkey_ThrowFTurn_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftCheckInterruptThrowFTurn(fighter_gobj))
    {
        ftDonkey_ThrowFKneeBend_CheckInterruptThrowFCommon(fighter_gobj);
    }
}

// 0x8014D7D0
void ftDonkey_ThrowFTurn_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFTurn, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x8014D810
bool32 ftDonkey_ThrowFTurn_CheckInterruptThrowFCommon(GObj *fighter_gobj)
{
    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkey_ThrowFTurn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}