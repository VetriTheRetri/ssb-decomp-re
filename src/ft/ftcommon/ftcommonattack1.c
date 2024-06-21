#include <ft/fighter.h>
#include <it/item.h>

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftCommonAttack13CheckFighterKind(fp)  \
(                                             \
    ((fp)->ft_kind == Ft_Kind_Mario)      ||  \
    ((fp)->ft_kind == Ft_Kind_MetalMario) ||  \
    ((fp)->ft_kind == Ft_Kind_PolyMario)  ||  \
    ((fp)->ft_kind == Ft_Kind_Luigi)      ||  \
    ((fp)->ft_kind == Ft_Kind_PolyLuigi)  ||  \
    ((fp)->ft_kind == Ft_Kind_Captain)    ||  \
    ((fp)->ft_kind == Ft_Kind_PolyCaptain)||  \
    ((fp)->ft_kind == Ft_Kind_Link)       ||  \
    ((fp)->ft_kind == Ft_Kind_PolyLink)   ||  \
    ((fp)->ft_kind == Ft_Kind_Ness)       ||  \
    ((fp)->ft_kind == Ft_Kind_PolyNess)       \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014E7B0
void ftCommonAttack11ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->status_vars.common.attack1.is_goto_followup != FALSE))
    {
        if ((fp->ft_kind == Ft_Kind_Pikachu) || (fp->ft_kind == Ft_Kind_PolyPikachu))
        {
            ftCommonAttack11SetStatus(fighter_gobj);
        }
        else ftCommonAttack12SetStatus(fighter_gobj);
    }
    else ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8014E824
void ftCommonAttack12ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->ft_kind != Ft_Kind_Captain) && (fp->ft_kind != Ft_Kind_PolyCaptain) && (fp->command_vars.flags.flag1 != 0) && (fp->is_goto_attack100))
    {
        ftCommonAttack100StartSetStatus(fighter_gobj);
    }
    else if ((fp->command_vars.flags.flag1 != 0) && (fp->status_vars.common.attack1.is_goto_followup != FALSE))
    {
        ftCommonAttack13SetStatus(fighter_gobj);
    }
    else ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8014E8B4
void ftCommonAttack13ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (((fp->ft_kind == Ft_Kind_Captain) || (fp->ft_kind == Ft_Kind_PolyCaptain)) && (fp->command_vars.flags.flag1 != 0) && (fp->is_goto_attack100))
    {
        ftCommonAttack100StartSetStatus(fighter_gobj);
    }
    else ftStatusWaitOnAnimEnd(fighter_gobj);
}

// 0x8014E91C
void ftCommonAttack11ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.attack1.interrupt_catch_timer < 2)
    {
        fp->status_vars.common.attack1.interrupt_catch_timer++;

        if (ftCommonCatchCheckInterruptAttack11(fighter_gobj) != FALSE)
        {
            return;
        }
    }
    if (ftCommonAttack100StartCheckInterruptCommon(fighter_gobj) == FALSE)
    {
        if ((fp->ft_kind == Ft_Kind_Pikachu) || (fp->ft_kind == Ft_Kind_PolyPikachu))
        {
            if (ftCommonAttack11CheckGoto(fighter_gobj) != FALSE)
            {
                return;
            }
        }
        else ftCommonAttack12CheckGoto(fighter_gobj);
    }
}

// 0x8014E9B4
void ftCommonAttack12ProcInterrupt(GObj *fighter_gobj)
{
    if (ftCommonAttack13CheckGoto(fighter_gobj) == FALSE)
    {
        ftCommonAttack100StartCheckInterruptCommon(fighter_gobj);
    }
}

// 0x8014E9E4
void ftCommonAttack13ProcInterrupt(GObj *fighter_gobj)
{
    ftCommonAttack100StartCheckInterruptCommon(fighter_gobj);
}

// 0x8014EA04
void ftCommonAttack11ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_Attack11);
    ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
    ftCommon_Update1PGameAttackStats(fp, 0);
}

// 0x8014EA44
void ftCommonAttack11SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        fp->proc_status = ftCommonAttack11ProcStatus;

        ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Attack11, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;

        fp->status_vars.common.attack1.is_goto_followup = FALSE;
        fp->status_vars.common.attack1.interrupt_catch_timer = 0;

        fp->attack1_input_count = 0;
        fp->attack1_status_id = fp->status_info.status_id;
        fp->is_goto_attack100 = FALSE;
        fp->attack1_followup_frames = attributes->attack1_followup_frames;
    }
}

// 0x8014EAD8
void ftCommonAttack12SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        ftMainSetFighterStatus(fighter_gobj, ftStatus_Common_Attack12, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;

        fp->status_vars.common.attack1.is_goto_followup = FALSE;

        fp->attack1_status_id = fp->status_info.status_id;

        switch (fp->ft_kind)
        {
        case Ft_Kind_Mario:
        case Ft_Kind_MetalMario:
        case Ft_Kind_PolyMario:
            fp->attack1_followup_frames = FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT;
            break;

        case Ft_Kind_Luigi:
        case Ft_Kind_PolyLuigi:
            fp->attack1_followup_frames = FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT;
            break;

        case Ft_Kind_Captain:
        case Ft_Kind_PolyCaptain:
            fp->attack1_followup_frames = FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT;
            break;

        case Ft_Kind_Link:
        case Ft_Kind_PolyLink:
            fp->attack1_followup_frames = FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT;
            break;

        case Ft_Kind_Ness:
        case Ft_Kind_PolyNess:
            fp->attack1_followup_frames = FTCOMMON_ATTACK1_FOLLOWUP_FRAMES_DEFAULT;
            break;
        }
    }
}

// 0x8014EBB4
void ftCommonAttack13SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        switch (fp->ft_kind)
        {
        case Ft_Kind_Mario:
        case Ft_Kind_MetalMario:
        case Ft_Kind_PolyMario:
            status_id = ftStatus_Mario_Attack13;
            break;

        case Ft_Kind_Luigi:
        case Ft_Kind_PolyLuigi:
            status_id = ftStatus_Mario_Attack13;
            break;

        case Ft_Kind_Captain:
        case Ft_Kind_PolyCaptain:
            status_id = ftStatus_Captain_Attack13;
            break;

        case Ft_Kind_Link:
        case Ft_Kind_PolyLink:
            status_id = ftStatus_Link_Attack13;
            break;

        case Ft_Kind_Ness:
        case Ft_Kind_PolyNess:
            status_id = ftStatus_Ness_Attack13;
            break;
        }
        ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);

        fp->command_vars.flags.flag1 = 0;

        fp->status_vars.common.attack1.is_goto_followup = FALSE;

        fp->attack1_status_id = fp->status_info.status_id;
    }
}

// 0x8014EC78
sb32 ftCommon_Attack1_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->input.pl.button_tap & fp->input.button_mask_a)
    {
        if (fp->item_hold != NULL)
        {
            if (itGetStruct(fp->item_hold)->type == It_Type_Throw)
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowF);

                return TRUE;
            }
            if (fp->input.pl.button_hold & fp->input.button_mask_z)
            {
                ftCommon_ItemThrow_SetStatus(fighter_gobj, ftStatus_Common_LightThrowDrop);

                return TRUE;
            }
            switch (itGetStruct(fp->item_hold)->type)
            {
            case It_Type_Swing:
                ftCommonItemSwingSetStatus(fighter_gobj, ftItemSwing_Type_Attack1);
                return TRUE;

            case It_Type_Shoot:
                ftCommon_ItemShoot_SetStatus(fighter_gobj);
                return TRUE;
            }
        }
        if (fp->attack1_followup_frames != 0.0F)
        {
            switch (fp->attack1_status_id)
            {
            case ftStatus_Common_Attack11:
                if ((fp->ft_kind == Ft_Kind_Pikachu) || (fp->ft_kind == Ft_Kind_PolyPikachu))
                {
                    if (attributes->is_have_attack11)
                    {
                        ftCommonAttack11SetStatus(fighter_gobj);

                        fp->attack1_input_count++;

                        return TRUE;
                    }
                    break;
                }
                else if (attributes->is_have_attack12)
                {
                    ftCommonAttack12SetStatus(fighter_gobj);

                    fp->attack1_input_count++;

                    return TRUE;
                }
                break;

            case ftStatus_Common_Attack12:
                if(ftCommonAttack13CheckFighterKind(fp))
                {
                    ftCommonAttack13SetStatus(fighter_gobj);

                    return TRUE;
                }
                break;
            }
        }
        else if (attributes->is_have_attack11)
        {
            ftCommonAttack11SetStatus(fighter_gobj);

            return TRUE;
        }
    }
    if (fp->attack1_followup_frames != 0.0F)
    {
        fp->attack1_followup_frames -= DObjGetStruct(fighter_gobj)->dobj_f1;
    }
    return FALSE;
}

// 0x8014EEC0
sb32 ftCommonAttack11CheckGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->attack1_followup_frames != 0.0F)
    {
        fp->attack1_followup_frames -= DObjGetStruct(fighter_gobj)->dobj_f1;

        if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_attack11))
        {
            if (fp->command_vars.flags.flag1 != 0)
            {
                ftCommonAttack11SetStatus(fighter_gobj);

                return TRUE;
            }
            fp->status_vars.common.attack1.is_goto_followup = TRUE;
        }
    }
    return FALSE;
}

// 0x8014EF50
sb32 ftCommonAttack12CheckGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->attack1_followup_frames != 0.0F)
    {
        fp->attack1_followup_frames -= DObjGetStruct(fighter_gobj)->dobj_f1;

        if ((fp->input.pl.button_tap & fp->input.button_mask_a) && (attributes->is_have_attack12))
        {
            if (fp->command_vars.flags.flag1 != 0)
            {
                ftCommonAttack12SetStatus(fighter_gobj);

                return TRUE;
            }
            fp->status_vars.common.attack1.is_goto_followup = TRUE;
        }
    }
    return FALSE;
}

// 0x8014EFE0
sb32 ftCommonAttack13CheckGoto(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if(!(ftCommonAttack13CheckFighterKind(fp)))
    {
        return FALSE;
    }
    else
    {
        if (fp->attack1_followup_frames != 0.0F)
        {
            fp->attack1_followup_frames -= DObjGetStruct(fighter_gobj)->dobj_f1;

            if (fp->input.pl.button_tap & fp->input.button_mask_a)
            {
                if (fp->command_vars.flags.flag1 != 0)
                {
                    ftCommonAttack13SetStatus(fighter_gobj);

                    return TRUE;
                }
                fp->status_vars.common.attack1.is_goto_followup = TRUE;
            }
        }
    }
    return FALSE;
}
