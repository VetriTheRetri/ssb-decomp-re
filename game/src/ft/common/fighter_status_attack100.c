#include <ft/fighter.h>
#include <ft/chara/ftfox/ftfox.h>
#include <ft/chara/ftlink/ftlink.h>
#include <ft/chara/ftkirby/ftkirby.h>
#include <ft/chara/ftpurin/ftpurin.h>
#include <ft/chara/ftcaptain/ftcaptain.h>

#define ftStatus_CheckAttack100Kind(fp)       \
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
)                                             \

// 0x8014F0D0
void ftCommon_Attack100Start_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Attack100Loop_SetStatus);
}

// 0x8014F0F4
void ftCommon_Attack100Start_SetStatus(GObj *fighter_gobj)
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
        ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        ftAnim_Update(fighter_gobj);

        fp->status_vars.common.attack100.is_anim_end = FALSE;
        fp->status_vars.common.attack100.is_goto_loop = FALSE;

        fp->command_vars.flags.flag1 = 0;
        fp->command_vars.flags.flag2 = 0;
    }
}

extern intptr_t D_NF_00001220;
extern void *D_ovl2_80131074;

// 0x8014F1BC
void ftCommon_Attack100Start_KirbyUpdateGFX(ftStruct *fp)
{
    Vec3f offset;

    if (fp->ft_kind == Ft_Kind_Kirby)
    {
        if (fp->command_vars.flags.flag2 != 0)
        {
            ftKirbyAttack100Gfx *attack_gfx = ((uintptr_t)D_ovl2_80131074 + (intptr_t)&D_NF_00001220); // Linker thing

            offset.x = attack_gfx[fp->command_vars.flags.flag2 - 1].offset.x;
            offset.y = attack_gfx[fp->command_vars.flags.flag2 - 1].offset.y;
            offset.z = attack_gfx[fp->command_vars.flags.flag2 - 1].offset.z;

            func_ovl2_800EDF24(fp->joint[ftParts_TopN_Joint], &offset);

            func_ovl2_80101D34(&offset, fp->lr, attack_gfx[fp->command_vars.flags.flag2 - 1].vel.x, attack_gfx[fp->command_vars.flags.flag2 - 1].vel.y, attack_gfx[fp->command_vars.flags.flag2 - 1].vel.z);

            fp->command_vars.flags.flag2 = 0;
        }
    }
}

// 0x8014F2A8
void ftCommon_Attack100Loop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame >= 0.0F) && (fighter_gobj->anim_frame < DObjGetStruct(fighter_gobj)->dobj_f1))
    {
        fp->status_vars.common.attack100.is_anim_end = TRUE;

        ftCommon_MotionCountIncSetAttackID(fp, ftMotion_AttackIndex_Attack100Loop);
        ftCommon_StatUpdateCountIncSetFlags(fp, fp->stat_flags.halfword);
        ftCommon_Update1PGameAttackStats(fp, 0);
    }
    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        if ((fp->status_vars.common.attack100.is_anim_end != FALSE) && (fp->status_vars.common.attack100.is_goto_loop == FALSE))
        {
            ftCommon_Attack100End_SetStatus(fighter_gobj);

            return;
        }
        else if (ftCommon_Get_CheckInterruptCommon(fighter_gobj) == FALSE)
        {
            fp->status_vars.common.attack100.is_goto_loop = FALSE;
        }
        else return;
    }
    ftCommon_Attack100Start_KirbyUpdateGFX(fp);
}

// 0x8014F388
void ftCommon_Attack100Loop_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->input.pl.button_tap & fp->input.button_mask_a) || (fp->input.pl.button_tap_prev & fp->input.button_mask_a))
    {
        fp->status_vars.common.attack100.is_goto_loop = TRUE;
    }
}

// 0x8014F3C0
void ftCommon_Attack100Loop_SetStatus(GObj *fighter_gobj)
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
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_Attack100Start_KirbyUpdateGFX(fp);
}

// 0x8014F45C
void ftCommon_Attack100End_SetStatus(GObj *fighter_gobj)
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
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
}

// 0x8014F4EC
bool32 ftCommon_Attack100Start_CheckInterruptCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    s32 inputs_req;

    if(!ftStatus_CheckAttack100Kind(fp))
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
                ftCommon_Attack100Start_SetStatus(fighter_gobj);

                return TRUE;
            }
            else fp->is_goto_attack100 = TRUE;
        }
    }
    return FALSE;
}