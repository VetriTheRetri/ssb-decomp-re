#include <ft/chara/ftdonkey/ftdonkey.h>

#define ftCheckInterruptThrowFWalk(fighter_gobj)    \
(                                                          \
    (ftCommon_LightThrow_CheckInterruptCommon(fighter_gobj) != FALSE) ||         \
    (ftDonkey_ThrowFF_CheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||         \
    (ftDonkey_ThrowFKneeBend_CheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||         \
    (ftDonkey_ThrowFFall_CheckInterruptPass(fighter_gobj) != FALSE) ||         \
    (ftDonkey_ThrowFWait_CheckInterruptThrowFWalk(fighter_gobj) != FALSE)            \
)                                                          \

// 0x8014D530
f32 ftDonkey_ThrowFWalk_GetWalkAnimSpeed(ftStruct *fp, s32 status_id)
{
    f32 walk_anim_speed;

    switch (status_id)
    {
    case ftStatus_Donkey_ThrowFWalkSlow:
        walk_anim_speed = fp->attributes->throw_walkslow_anim_speed;
        break;

    case ftStatus_Donkey_ThrowFWalkMiddle:
        walk_anim_speed = fp->attributes->throw_walkmiddle_anim_speed;
        break;

    case ftStatus_Donkey_ThrowFWalkFast:
        walk_anim_speed = fp->attributes->throw_walkfast_anim_speed;
        break;
    }
    return walk_speed;
}

// 0x8014D590
void ftDonkey_ThrowFWalk_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!ftCheckInterruptThrowFWalk(fighter_gobj))
    {
        s32 status_id = ftCommon_Walk_GetWalkStatus(ABS(fp->input.pl.stick_range.x)) + (ftStatus_Donkey_ThrowFWalkSlow - ftStatus_Common_WalkSlow);

        if (status_id != fp->status_info.status_id)
        {
            f32 div = ftDonkey_ThrowFWalk_GetWalkAnimSpeed(fp, fp->status_info.status_id);
            f32 mul = ftDonkey_ThrowFWalk_GetWalkAnimSpeed(fp, status_id);

            ftDonkey_ThrowFWalk_SetStatusParam(fighter_gobj, (s32) (mul * (fighter_gobj->anim_frame / div)));
        }
    }
}

// 0x8014D68C
void ftDonkey_ThrowFWalk_SetStatusParam(GObj *fighter_gobj, f32 frame_begin)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftCommon_Walk_GetWalkStatus(fp->input.pl.stick_range.x) + (ftStatus_Donkey_ThrowFWalkSlow - ftStatus_Common_WalkSlow), frame_begin, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x8014D6D8
void ftDonkey_ThrowFWalk_SetStatusDefault(GObj *fighter_gobj)
{
    ftDonkey_ThrowFWalk_SetStatusParam(fighter_gobj, 0.0F);
}

// 0x8014D6F8
bool32 ftDonkey_ThrowFWalk_CheckInterruptThrowFWait(GObj *fighter_gobj)
{
    if (ftCommon_Walk_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkey_ThrowFWalk_SetStatusDefault(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}