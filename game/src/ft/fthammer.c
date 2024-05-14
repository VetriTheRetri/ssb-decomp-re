#include <ft/fighter.h>
#include <it/item.h>
#include <gm/battle.h>

// 0x800F36E0
void ftHammer_UpdateStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hammer_timer != 0)
    {
        fp->hammer_timer--;
    }
    if (fp->hammer_timer == ITHAMMER_WARN_BEGIN_FRAME)
    {
        itHammerSDefaultSetColAnim(fp->item_hold);
    }
    if (fp->hammer_timer == 0)
    {
        sb32 is_colanim_reset = FALSE;

        itMainDestroyItem(fp->item_hold);
        ftSpecialITem_BGMCheckFighters();

        if (fp->colanim.colanim_id == FTCOMMON_HAMMER_COLANIM_ID)
        {
            is_colanim_reset = TRUE;
        }
        if (ftHammer_CheckStatusHammerAll(fighter_gobj) != FALSE)
        {
            ftMap_SetStatusWaitOrFall(fighter_gobj);
        }
        if (is_colanim_reset != FALSE)
        {
            ftCommon_ResetColAnimStatUpdate(fighter_gobj);
        }
    }
}

// 0x800F3794
sb32 ftHammer_CheckItemHold(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37CC
sb32 ftHammer_CheckStatusHammerAll(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.status_id >= ftStatus_Common_HammerStart) && (fp->status_info.status_id <= ftStatus_Common_HammerEnd))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37FC
sb32 ftHammer_CheckMotionWaitOrWalk(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.motion_id == ftMotion_Common_HammerWait) || (fp->status_info.motion_id == ftMotion_Common_HammerWalk))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F3828
f32 ftHammer_GetAnimFrame(GObj *fighter_gobj)
{
    if (ftHammer_CheckMotionWaitOrWalk(fighter_gobj) != FALSE)
    {
        return fighter_gobj->anim_frame;
    }
    else return 0.0F;
}

// 0x800F385C
u32 ftHammer_GetStatUpdateFlags(GObj *fighter_gobj)
{
    u32 flags;

    if (ftHammer_CheckMotionWaitOrWalk(fighter_gobj) != FALSE)
    {
        flags = (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_SLOPECONTOUR_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE);
    }
    else flags = FTSTATUPDATE_NONE_PRESERVE;

    return flags;
}

// 0x800F388C
void ftHammer_CheckSetColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->colanim.colanim_id != FTCOMMON_HAMMER_COLANIM_ID)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTCOMMON_HAMMER_COLANIM_ID, FTCOMMON_HAMMER_COLANIM_LENGTH);
    }
}

// 0x800F38C4
void ftHammer_ProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_HammerFall_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_HammerTurn_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_HammerWalk_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x800F3914
void ftHammer_ProcMap(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftCommon_HammerFall_SetStatus);
}

// 0x800F3938
void ftHammer_SetStatusHammerWait(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Common_HammerWait, ftHammer_GetAnimFrame(fighter_gobj), 1.0F, ftHammer_GetStatUpdateFlags(fighter_gobj));
    ftHammer_CheckSetColAnim(fighter_gobj);
}

// 0x800F39AC
sb32 ftHammer_CheckGotoHammerWait(GObj *fighter_gobj)
{
    if (ftCommon_Wait_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftHammer_SetStatusHammerWait(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}