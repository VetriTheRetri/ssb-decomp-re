#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftDonkeyThrowFWalkCheckInterrupt(fighter_gobj)                                    \
(                                                                                   \
    (ftCommonHeavyThrowCheckInterruptCommon(fighter_gobj) != FALSE) ||            \
    (ftDonkeyThrowFFCheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||         \
    (ftDonkeyThrowFKneeBendCheckInterruptThrowFCommon(fighter_gobj) != FALSE) ||  \
    (ftDonkeyThrowFFallCheckInterruptPass(fighter_gobj) != FALSE) ||              \
    (ftDonkeyThrowFWaitCheckInterruptThrowFWalk(fighter_gobj) != FALSE)           \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014D530
f32 ftDonkeyThrowFWalkGetWalkAnimLength(ftStruct *fp, s32 status_id)
{
    f32 walk_anim_length;

    switch (status_id)
    {
    case ftStatus_Donkey_ThrowFWalkSlow:
        walk_anim_length = fp->attributes->throw_walkslow_anim_length;
        break;

    case ftStatus_Donkey_ThrowFWalkMiddle:
        walk_anim_length = fp->attributes->throw_walkmiddle_anim_length;
        break;

    case ftStatus_Donkey_ThrowFWalkFast:
        walk_anim_length = fp->attributes->throw_walkfast_anim_length;
        break;
    }
    return walk_anim_length;
}

// 0x8014D590
void ftDonkeyThrowFWalkProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (!(ftDonkeyThrowFWalkCheckInterrupt(fighter_gobj)))
    {
        s32 status_id = ftCommon_Walk_GetWalkStatus(ABS(fp->input.pl.stick_range.x)) + (ftStatus_Donkey_ThrowFWalkSlow - ftStatus_Common_WalkSlow);

        if (status_id != fp->status_info.status_id)
        {
            f32 div = ftDonkeyThrowFWalkGetWalkAnimLength(fp, fp->status_info.status_id);
            f32 mul = ftDonkeyThrowFWalkGetWalkAnimLength(fp, status_id);

            ftDonkeyThrowFWalkSetStatusParam(fighter_gobj, (s32) (mul * (fighter_gobj->anim_frame / div)));
        }
    }
}

// 0x8014D68C
void ftDonkeyThrowFWalkSetStatusParam(GObj *fighter_gobj, f32 frame_begin)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, ftCommon_Walk_GetWalkStatus(fp->input.pl.stick_range.x) + (ftStatus_Donkey_ThrowFWalkSlow - ftStatus_Common_WalkSlow), frame_begin, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);
}

// 0x8014D6D8
void ftDonkeyThrowFWalkSetStatusDefault(GObj *fighter_gobj)
{
    ftDonkeyThrowFWalkSetStatusParam(fighter_gobj, 0.0F);
}

// 0x8014D6F8
sb32 ftDonkeyThrowFWalkCheckInterruptThrowFWait(GObj *fighter_gobj)
{
    if (ftCommon_Walk_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftDonkeyThrowFWalkSetStatusDefault(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
