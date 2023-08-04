#include <ft/fighter.h>
#include <it/item.h>
#include <gm/gmmatch.h>

// 0x800F36E0
void ftCommon_HammerUpdateStats(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->hammer_timer != 0)
    {
        fp->hammer_timer--;
    }
    if (fp->hammer_timer == ITHAMMER_WARN_BEGIN_FRAME)
    {
        itHammer_SDefault_SetColAnim(fp->item_hold);
    }
    if (fp->hammer_timer == 0)
    {
        bool32 is_colanim_reset = FALSE;

        itMain_DestroyItem(fp->item_hold);
        ftSpecialItem_BGMCheckFighters();

        if (fp->colanim.colanim_id == FTCOMMON_HAMMER_COLANIM_ID)
        {
            is_colanim_reset = TRUE;
        }
        if (ftCommon_HammerCheckStatusID(fighter_gobj) != FALSE)
        {
            func_ovl2_800DEE54(fighter_gobj);
        }
        if (is_colanim_reset != FALSE)
        {
            ftCommon_ResetColAnimStatUpdate(fighter_gobj);
        }
    }
}

// 0x800F3794
bool32 ftCommon_HammerCheckHold(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->item_hold != NULL) && (itGetStruct(fp->item_hold)->it_kind == It_Kind_Hammer))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37CC
bool32 ftCommon_HammerCheckStatusID(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.status_id >= ftStatus_Common_HammerWait) && (fp->status_info.status_id <= ftStatus_Common_HammerLanding))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F37FC
bool32 ftCommon_HammerCheckScriptID(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_info.script_id == 0x84) || (fp->status_info.script_id == 0x85))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800F3828
f32 ftCommon_HammerGetAnimFrame(GObj *fighter_gobj)
{
    if (ftCommon_HammerCheckScriptID(fighter_gobj) != FALSE)
    {
        return fighter_gobj->anim_frame;
    }
    else return 0.0F;
}

// 0x800F385C
u32 ftCommon_HammerGetStatUpdateFlags(GObj *fighter_gobj)
{
    u32 flags;

    if (ftCommon_HammerCheckScriptID(fighter_gobj) != FALSE)
    {
        flags = (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_SLOPECONTOUR_PRESERVE | FTSTATUPDATE_MODELPART_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE);
    }
    else flags = 0;

    return flags;
}

// 0x800F388C
void ftCommon_HammerCheckSetColAnim(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->colanim.colanim_id != FTCOMMON_HAMMER_COLANIM_ID)
    {
        ftColor_CheckSetColAnimIndex(fighter_gobj, FTCOMMON_HAMMER_COLANIM_ID, FTCOMMON_HAMMER_COLANIM_LENGTH);
    }
}

// 0x800F38C4
void ftCommon_HammerProcInterrupt(GObj *fighter_gobj)
{
    if ((ftCommon_HammerKneeBend_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_HammerFall_CheckInterruptCommon(fighter_gobj) == FALSE) && (ftCommon_HammerTurn_CheckInterruptCommon(fighter_gobj) == FALSE))
    {
        ftCommon_HammerWalk_CheckInterruptCommon(fighter_gobj);
    }
}

// 0x800F3914
void ftCommon_HammerCommon_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftCommon_HammerFall_SetStatus);
}

// 0x800F3938
void ftCommon_HammerWait_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftMap_SetGround(fp);
    }
    ftStatus_Update(fighter_gobj, ftStatus_Common_HammerWait, ftCommon_HammerGetAnimFrame(fighter_gobj), 1.0F, ftCommon_HammerGetStatUpdateFlags(fighter_gobj));
    ftCommon_HammerCheckSetColAnim(fighter_gobj);
}

// 0x800F39AC
bool32 ftCommon_HammerWaitCheckSetStatus(GObj *fighter_gobj)
{
    if (ftCommon_Wait_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        ftCommon_HammerWait_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}