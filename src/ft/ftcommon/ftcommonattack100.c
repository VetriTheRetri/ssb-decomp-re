#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lFTKirbyAttack100Effect;            // 0x00001220

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define ftCommonAttack100CheckFighterKind(fp) \
(                                             \
    ((fp)->ft_kind == Ft_Kind_Fox)        ||  \
    ((fp)->ft_kind == Ft_Kind_PolyFox)    ||  \
    ((fp)->ft_kind == Ft_Kind_Link)       ||  \
    ((fp)->ft_kind == Ft_Kind_PolyLink)   ||  \
    ((fp)->ft_kind == Ft_Kind_Kirby)      ||  \
    ((fp)->ft_kind == Ft_Kind_PolyKirby)  ||  \
    ((fp)->ft_kind == Ft_Kind_Purin)      ||  \
    ((fp)->ft_kind == Ft_Kind_PolyPurin)  ||  \
    ((fp)->ft_kind == Ft_Kind_Captain)    ||  \
    ((fp)->ft_kind == Ft_Kind_PolyCaptain)    \
)

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8014F0D0
void ftCommonAttack100StartProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftCommonAttack100LoopSetStatus);
}

// 0x8014F0F4
void ftCommonAttack100StartSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
    {
        switch (fp->ft_kind)
        {
        case Ft_Kind_Fox:
        case Ft_Kind_PolyFox:
            status_id = ftStatus_Fox_Attack100Start;
            break;

        case Ft_Kind_Link:
        case Ft_Kind_PolyLink:
            status_id = ftStatus_Link_Attack100Start;
            break;

        case Ft_Kind_Kirby:
        case Ft_Kind_PolyKirby:
            status_id = ftStatus_Kirby_Attack100Start;
            break;

        case Ft_Kind_Purin:
        case Ft_Kind_PolyPurin:
            status_id = ftStatus_Purin_Attack100Start;
            break;

        case Ft_Kind_Captain:
        case Ft_Kind_PolyCaptain:
            status_id = ftStatus_Captain_Attack100Start;
            break;
        }
        ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftMainUpdateAnimCheckInterrupt(fighter_gobj);

        fp->status_vars.common.attack100.is_anim_end = FALSE;
        fp->status_vars.common.attack100.is_goto_loop = FALSE;

        fp->command_vars.flags.flag1 = 0;
        fp->command_vars.flags.flag2 = 0;
    }
}

// 0x8014F1BC
void ftCommonAttack100LoopKirbyUpdateEffect(ftStruct *fp)
{
    Vec3f pos;

    if (fp->ft_kind == Ft_Kind_Kirby)
    {
        if (fp->command_vars.flags.flag2 != 0)
        {
            ftKirbyAttack100Effect *effect = (ftKirbyAttack100Effect*) ((uintptr_t)gFTDataKirbyBattleMotion + (intptr_t)&lFTKirbyAttack100Effect); // Linker thing

            pos.x = effect[fp->command_vars.flags.flag2 - 1].offset.x;
            pos.y = effect[fp->command_vars.flags.flag2 - 1].offset.y;
            pos.z = effect[fp->command_vars.flags.flag2 - 1].offset.z;

            ftParts_GetDObjWorldPosition(fp->joint[ftParts_Joint_TopN], &pos);

            efParticle_VulcanJab_MakeEffect(&pos, fp->lr, effect[fp->command_vars.flags.flag2 - 1].rotate, effect[fp->command_vars.flags.flag2 - 1].vel, effect[fp->command_vars.flags.flag2 - 1].add);

            fp->command_vars.flags.flag2 = 0;
        }
    }
}

// 0x8014F2A8
void ftCommonAttack100LoopProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        fp->status_vars.common.attack100.is_anim_end = TRUE;

        ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_Attack100);
        ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
        ftCommon_Update1PGameAttackStats(fp, 0);
    }
    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        if ((fp->status_vars.common.attack100.is_anim_end != FALSE) && (fp->status_vars.common.attack100.is_goto_loop == FALSE))
        {
            ftCommonAttack100EndSetStatus(fighter_gobj);

            return;
        }
        else if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
        {
            fp->status_vars.common.attack100.is_goto_loop = FALSE;
        }
        else return;
    }
    ftCommonAttack100LoopKirbyUpdateEffect(fp);
}

// 0x8014F388
void ftCommonAttack100LoopProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) || (fp->input.pl.button_tap_prev & fp->input.button_mask_a))
    {
        fp->status_vars.common.attack100.is_goto_loop = TRUE;
    }
}

// 0x8014F3C0
void ftCommonAttack100LoopSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    switch (fp->ft_kind)
    {
    case Ft_Kind_Fox:
    case Ft_Kind_PolyFox:
        status_id = ftStatus_Fox_Attack100Loop;
        break;

    case Ft_Kind_Link:
    case Ft_Kind_PolyLink:
        status_id = ftStatus_Link_Attack100Loop;
        break;

    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        status_id = ftStatus_Kirby_Attack100Loop;
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        status_id = ftStatus_Purin_Attack100Loop;
        break;

    case Ft_Kind_Captain:
    case Ft_Kind_PolyCaptain:
        status_id = ftStatus_Captain_Attack100Loop;
        break;
    }
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommonAttack100LoopKirbyUpdateEffect(fp);
}

// 0x8014F45C
void ftCommonAttack100EndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;

    switch (fp->ft_kind)
    {
    case Ft_Kind_Fox:
    case Ft_Kind_PolyFox:
        status_id = ftStatus_Fox_Attack100End;
        break;

    case Ft_Kind_Link:
    case Ft_Kind_PolyLink:
        status_id = ftStatus_Link_Attack100End;
        break;

    case Ft_Kind_Kirby:
    case Ft_Kind_PolyKirby:
        status_id = ftStatus_Kirby_Attack100End;
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        status_id = ftStatus_Purin_Attack100End;
        break;

    case Ft_Kind_Captain:
    case Ft_Kind_PolyCaptain:
        status_id = ftStatus_Captain_Attack100End;
        break;
    }
    ftMainSetFighterStatus(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8014F4EC
sb32 ftCommonAttack100StartCheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 inputs_req;

    if(!ftCommonAttack100CheckFighterKind(fp))
    {
        return FALSE;
    }
    if ((fp->input.pl.button_tap & fp->input.button_mask_a) || (fp->input.pl.button_tap_prev & fp->input.button_mask_a))
    {
        fp->attack1_input_count++;

        switch (fp->ft_kind)
        {
        case Ft_Kind_Fox:
        case Ft_Kind_PolyFox:
            inputs_req = 4;
            status_id = ftStatus_Common_Attack12;
            break;

        case Ft_Kind_Link:
        case Ft_Kind_PolyLink:
            inputs_req = 5;
            status_id = ftStatus_Common_Attack12;
            break;

        case Ft_Kind_Kirby:
        case Ft_Kind_PolyKirby:
            inputs_req = 4;
            status_id = ftStatus_Common_Attack12;
            break;

        case Ft_Kind_Purin:
        case Ft_Kind_PolyPurin:
            inputs_req = 4;
            status_id = ftStatus_Common_Attack12;
            break;

        case Ft_Kind_Captain:
        case Ft_Kind_PolyCaptain:
            inputs_req = 6;
            status_id = ftStatus_Captain_Attack13;
            break;
        }
        if (fp->attack1_input_count >= inputs_req)
        {
            if ((status_id == fp->status_info.status_id) && (fp->command_vars.flags.flag1 != 0))
            {
                ftCommonAttack100StartSetStatus(fighter_gobj);

                return TRUE;
            }
            else fp->is_goto_attack100 = TRUE;
        }
    }
    return FALSE;
}
