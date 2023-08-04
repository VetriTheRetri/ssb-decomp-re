#include <ft/chara/ftdonkey/ftdonkey.h>

// 0x8014DD00
void ftDonkey_ThrowFF_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.common.throwff.is_turn != FALSE)
    {
        fp->status_vars.common.throwff.turn_frames--;

        if (fp->lr == RIGHT)
        {
            DObjGetStruct(fighter_gobj)->rotate.y = HALF_PI32 - (( (f32) fp->status_vars.common.throwff.turn_frames / FTCOMMON_THROWFF_TURN_FRAMES) * PI32);
        }
        else
        {
            DObjGetStruct(fighter_gobj)->rotate.y = (( (f32) fp->status_vars.common.throwff.turn_frames / FTCOMMON_THROWFF_TURN_FRAMES) * PI32) + (-HALF_PI32);
        }
        if (fp->status_vars.common.throwff.turn_frames == 0)
        {
            fp->status_vars.common.throwff.is_turn = FALSE;
        }
    }
    if (fp->command_vars.flags.flag2 != 0)
    {
        ftCommon_Thrown_ProcPhysics(fp->catch_gobj);
        func_ovl3_8014AFD0(fp->catch_gobj, -fp->lr, 0, 1);

        fp->command_vars.flags.flag2 = 0;
        fp->catch_gobj = NULL;

        ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);
    }
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x8014DE30
void ftDonkey_ThrowAirFF_SwitchStatusGround(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetGround(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowFF, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

    fp->status_vars.common.throwff.is_turn = FALSE;

    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
}

// 0x8014DE80
void ftDonkey_ThrowFF_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Donkey_ThrowAirFF, fighter_gobj->anim_frame, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
}

// 0x8014DECC
void ftDonkey_ThrowFF_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDDDC(fighter_gobj, ftDonkey_ThrowFF_SwitchStatusAir);
}

// 0x8014DEF0
void ftDonkey_ThrowAirFF_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftDonkey_ThrowAirFF_SwitchStatusGround);
}

// 0x8014DF14
void ftDonkey_ThrowFF_SetStatus(GObj *fighter_gobj, bool32 is_turn)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    s32 status_id;
    u32 flags;

    if (fp->ground_or_air == GA_Ground)
    {
        status_id = ftStatus_Donkey_ThrowFF;
        flags = FTSTATUPDATE_NONE_PRESERVE;
    }
    else
    {
        status_id = ftStatus_Donkey_ThrowAirFF;
        flags = FTSTATUPDATE_FASTFALL_PRESERVE;
    }
    ftStatus_Update(fighter_gobj, status_id, 0.0F, 1.0F, flags);
    ftAnim_Update(fighter_gobj);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);

    fp->command_vars.flags.flag2 = 0;

    fp->status_vars.common.throwff.is_turn = is_turn;

    if (is_turn != FALSE)
    {
        fp->lr = -fp->lr;

        fp->status_vars.common.throwff.turn_frames = FTCOMMON_THROWFF_TURN_FRAMES;
    }
}

// 0x8014DFA8
bool32 ftDonkey_ThrowFF_CheckInterruptThrowFCommon(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    bool32 is_turn = FALSE;

    if (fp->input.pl.button_tap & (fp->input.button_mask_a | fp->input.button_mask_b))
    {
        if ((ABS(fp->input.pl.stick_range.x) >= FTCOMMON_THROWFF_TURN_STICK_RANGE_MIN) && ((fp->input.pl.stick_range.x * fp->lr) < 0) && (fp->ground_or_air == GA_Air))
        {
            is_turn = TRUE;
        }
        ftDonkey_ThrowFF_SetStatus(fighter_gobj, is_turn);

        return TRUE;
    }
    else return FALSE;
}