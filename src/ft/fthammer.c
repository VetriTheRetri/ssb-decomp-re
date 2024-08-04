#include <ft/fighter.h>
#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800F36E0
void ftHammerUpdateStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hammer_timer != 0)
    {
        fp->hammer_timer--;
    }
    if (fp->hammer_timer == ITHAMMER_WARN_BEGIN_FRAME)
    {
        itHammerCommonSetColAnim(fp->item_hold);
    }
    if (fp->hammer_timer == 0)
    {
        sb32 is_colanim_reset = FALSE;

        itMainDestroyItem(fp->item_hold);
        ftParamTryUpdateItemMusic();

        if (fp->colanim.colanim_id == FTCOMMON_HAMMER_COLANIM_ID)
        {
            is_colanim_reset = TRUE;
        }
        if (ftHammerCheckStatusHammerAll(fighter_gobj) != FALSE)
        {
            mpCommonSetFighterWaitOrFall(fighter_gobj);
        }
        if (is_colanim_reset != FALSE)
        {
            ftParamResetStatUpdateColAnim(fighter_gobj);
        }
    }
}

// 0x800F3794
sb32 ftHammerCheckHoldHammer(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == nITKindHammer))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37CC
sb32 ftHammerCheckStatusHammerAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.status_id >= nFTCommonStatusHammerStart) && (fp->status_info.status_id <= nFTCommonStatusHammerEnd))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37FC
sb32 ftHammerCheckMotionWaitOrWalk(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.motion_id == nFTCommonMotionHammerWait) || (fp->status_info.motion_id == nFTCommonMotionHammerWalk))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F3828
f32 ftHammerGetAnimFrame(GObj *fighter_gobj)
{
    if (ftHammerCheckMotionWaitOrWalk(fighter_gobj) != FALSE)
    {
        return fighter_gobj->anim_frame;
    }
    else return 0.0F;
}

// 0x800F385C
u32 ftHammerGetStatUpdateFlags(GObj *fighter_gobj)
{
    u32 flags;

    if (ftHammerCheckMotionWaitOrWalk(fighter_gobj) != FALSE)
    {
        flags = (FTSTATUS_PRESERVE_RUMBLE | FTSTATUS_PRESERVE_TEXTUREPART | FTSTATUS_PRESERVE_SLOPECONTOUR | FTSTATUS_PRESERVE_MODELPART | FTSTATUS_PRESERVE_COLANIM | FTSTATUS_PRESERVE_HIT);
    }
    else flags = FTSTATUS_PRESERVE_NONE;

    return flags;
}

// 0x800F388C
void ftHammerSetColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->colanim.colanim_id != FTCOMMON_HAMMER_COLANIM_ID)
    {
        ftParamCheckSetFighterColAnimID(fighter_gobj, FTCOMMON_HAMMER_COLANIM_ID, FTCOMMON_HAMMER_COLANIM_LENGTH);
    }
}

// 0x800F38C4
void ftHammerProcInterrupt(GObj *fighter_gobj)
{
    if
    (
        (ftCommonHammerKneeBendCheckInterruptCommon(fighter_gobj) == FALSE) && 
        (ftCommonHammerFallCheckInterruptCommon(fighter_gobj) == FALSE)     && 
        (ftCommonHammerTurnCheckInterruptCommon(fighter_gobj) == FALSE)
    )
    {
        ftCommonHammerWalkCheckInterruptCommon(fighter_gobj);
    }
}

// 0x800F3914
void ftHammerProcMap(GObj *fighter_gobj)
{
    mpCommonProcFighterOnGround(fighter_gobj, ftCommonHammerFallSetStatus);
}

// 0x800F3938
void ftHammerSetStatusHammerWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ga == nMPKineticsAir)
    {
        mpCommonSetFighterGround(fp);
    }
    ftMainSetFighterStatus(fighter_gobj, nFTCommonStatusHammerWait, ftHammerGetAnimFrame(fighter_gobj), 1.0F, ftHammerGetStatUpdateFlags(fighter_gobj));
    ftHammerSetColAnim(fighter_gobj);
}

// 0x800F39AC
sb32 ftHammerCheckGotoHammerWait(GObj *fighter_gobj)
{
    if (ftCommonWaitCheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftHammerSetStatusHammerWait(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}
