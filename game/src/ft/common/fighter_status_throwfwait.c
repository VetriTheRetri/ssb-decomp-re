#include <ft/chara/ftdonkey/ftdonkey.h>

// Donkey Kong's Cargo Wait

#define ftStatus_CheckInteruptThrowFWait(fighter_gobj)                             \
(                                                                                  \
    (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) != FALSE) ||           \
    (ftDonkey_ThrowFF_CheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||        \
    (ftDonkey_ThrowFKneeBend_CheckInterruptThrowFCommon(fighter_gobj) != FALSE) || \
    (ftDonkey_ThrowFFall_CheckInterruptPass(fighter_gobj) != FALSE) ||             \
    (ftDonkey_ThrowFTurn_CheckInterruptThrowFCommon(fighter_gobj) != FALSE)        \
)                                                                                  \

// 0x8014D400
void ftDonkey_ThrowFWait_ProcInterrupt(GObj *fighter_gobj)
{
    if (!ftStatus_CheckInteruptThrowFWait(fighter_gobj))
    {
        ftDonkey_ThrowFWalk_CheckInterruptThrowFWait(fighter_gobj);
    }
}

// 0x8014D478
void ftDonkey_ThrowFWait_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftDonkey_ThrowFFall_SetStatus);
}

// 0x8014D49C
void ftDonkey_ThrowFWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFWait, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8014D4EC
bool32 ftDonkey_ThrowFWait_CheckInterruptThrowFWalk(GObj *fighter_gobj)
{
    if (ftCommon_Wait_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkey_ThrowFWait_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}