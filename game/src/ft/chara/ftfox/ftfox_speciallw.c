#include <ft/chara/ftfox/ftfox.h>
#include <wp/weapon.h>
#include "effect.h"

// 0x8015CB80
void ftFox_SpecialLw_CheckSetRelease(ftStruct *fp)
{
    if (!(fp->input.pl.button_hold & fp->input.button_mask_b))
    {
        fp->status_vars.fox.speciallw.is_release = TRUE;
    }
}

// 0x8015CBA4
void ftFox_SpecialLw_UpdateGFX(ftStruct *fp)
{
    if (fp->command_vars.flags.flag2 != 4)
    {
        if (fp->status_vars.fox.speciallw.effect_gobj != NULL)
        {
            efStruct *ep = efGetStruct(fp->status_vars.fox.speciallw.effect_gobj);

            ep->effect_vars.basic1.unk_ef_0x1C = fp->command_vars.flags.flag2;
        }
        fp->command_vars.flags.flag2 = 4;
    }
}

// 0x8015CBD4
void ftFox_SpecialLw_DecReleaseLag(ftStruct *fp)
{
    if (fp->status_vars.fox.speciallw.release_lag != 0)
    {
        fp->status_vars.fox.speciallw.release_lag--;
    }
}

// 0x8015CBEC
void ftFox_SpecialLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFox_SpecialLw_UpdateGFX(fp);
    ftFox_SpecialLw_CheckSetRelease(fp);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        if (fp->ground_or_air == FALSE)
        {
            ftFox_SpecialLwLoop_SetStatus(fighter_gobj);
        }
        else ftFox_SpecialAirLwLoop_SetStatus(fighter_gobj);
    }
}

// 0x8015CC64
void ftFox_SpecialLwCommon_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if (fp->status_vars.fox.speciallw.gravity_delay != 0)
    {
        fp->status_vars.fox.speciallw.gravity_delay--;
    }
    else func_ovl2_800D8D68(fp, FTFOX_REFLECTOR_GRAVITY, attributes->fall_speed_max);
    
    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x8015CCE0
void ftFox_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFox_SpecialLw_UpdateGFX(fp);
    ftFox_SpecialLw_CheckSetRelease(fp);
    ftFox_SpecialLw_DecReleaseLag(fp);

    if ((fp->status_vars.fox.speciallw.release_lag <= 0) && (fp->status_vars.fox.speciallw.is_release != FALSE))
    {
        if (fp->ground_or_air == GA_Ground)
        {
            ftFox_SpecialLwEnd_SetStatus(fighter_gobj);
        }
        else ftFox_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x8015CD5C
void ftFox_SpecialLwLoop_ProcInterrupt(GObj *fighter_gobj)
{
    ftFox_SpecialLwTurn_CheckInterruptSpecialLwLoop(fighter_gobj);
}

// 0x8015CD7C
void ftFox_SpecialLwLoop_SetReflectFlag(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_reflect = TRUE;
}

// 0x8015CD90
void ftFox_SpecialLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialLwLoop, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftFox_SpecialLwLoop_SetReflectFlag(fighter_gobj);
}

// 0x8015CDCC
void ftFox_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirLwLoop, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftFox_SpecialLwLoop_SetReflectFlag(fighter_gobj);
}

// 0x8015CE08
void ftFox_SpecialLwHit_DecideSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->status_vars.fox.speciallw.release_lag <= 0) && (fp->status_vars.fox.speciallw.is_release != FALSE))
    {
        if (fp->ground_or_air == GA_Ground)
        {
            ftFox_SpecialLwEnd_SetStatus(fighter_gobj);
        }
        else ftFox_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
    else if (fp->ground_or_air == GA_Ground)
    {
        ftFox_SpecialLwLoop_SetStatus(fighter_gobj);
    }
    else ftFox_SpecialAirLwLoop_SetStatus(fighter_gobj);
}

// 0x8015CE8C
void ftFox_SpecialLwHit_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFox_SpecialLw_UpdateGFX(fp);
    ftFox_SpecialLw_CheckSetRelease(fp);
    ftFox_SpecialLw_DecReleaseLag(fp);

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftFox_SpecialLwHit_DecideSetStatus(fighter_gobj);
    }
}

// 0x8015CEE8
void ftFox_SpecialLwHit_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->lr = fp->lr_reflect;

    ftStatus_Update(fighter_gobj, ((fp->ground_or_air == GA_Ground) ? ftStatus_Fox_SpecialLwHit : ftStatus_Fox_SpecialAirLwHit), 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));

    fp->is_reflect = TRUE;
}

// 0x8015CF50
void ftFox_SpecialLwTurn_DecTurnFrames(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.speciallw.turn_frames--;

    if ((fp->command_vars.flags.flag1 == 0) && (fp->status_vars.fox.speciallw.turn_frames <= FTFOX_REFLECTOR_TURN_FRAMES))
    {
        fp->command_vars.flags.flag1 = 1;
        fp->lr = -fp->lr;
    }
    fp->joint[ftParts_TopN_Joint]->rotate.y += (-QUART_PI32);

    func_ovl2_800EB528(fp->joint[ftParts_TopN_Joint]);
}

// 0x8015CFC0
void ftFox_SpecialLwTurn_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftFox_SpecialLw_UpdateGFX(fp);
    ftFox_SpecialLw_CheckSetRelease(fp);
    ftFox_SpecialLw_DecReleaseLag(fp);
    ftFox_SpecialLwTurn_DecTurnFrames(fighter_gobj);

    if (fp->status_vars.fox.speciallw.turn_frames <= 0)
    {
        ftFox_SpecialLwHit_DecideSetStatus(fighter_gobj);
    }
}

// 0x8015D01C
void ftFox_SpecialLwTurn_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->is_reflect = TRUE;
    fp->status_vars.fox.speciallw.turn_frames = FTFOX_REFLECTOR_TURN_FRAMES;
    fp->command_vars.flags.flag1 = 0;

    ftFox_SpecialLwTurn_DecTurnFrames(fighter_gobj);
}

// 0x8015D054
void ftFox_SpecialLwTurn_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialLwTurn, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftFox_SpecialLwTurn_InitStatusVars(fighter_gobj);
}

// 0x8015D090
void ftFox_SpecialAirLwTurn_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirLwTurn, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
    ftFox_SpecialLwTurn_InitStatusVars(fighter_gobj);
}

bool32 ftFox_SpecialLwTurn_CheckInterruptSpecialLwLoop(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftCommon_Turn_CheckInputSuccess(fighter_gobj) != FALSE)
    {
        if (fp->ground_or_air == GA_Ground)
        {
            ftFox_SpecialLwTurn_SetStatus(fighter_gobj);

            return TRUE;
        }
        else ftFox_SpecialAirLwTurn_SetStatus(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x8015D130
void ftFox_SpecialLwEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftFox_SpecialLw_UpdateGFX(ftGetStruct(fighter_gobj));

    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_ProcStopGFX(fighter_gobj);
        func_ovl2_800DEE54(fighter_gobj);
    }
}

// 0x8015D180
void ftFox_SpecialLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialLwEnd, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

// 0x8015D1B0
void ftFox_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirLwEnd, 0.0F, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE));
}

extern intptr_t ftFox_LoadedFiles_SpecialLwData;
extern void *D_ovl2_80130E94;

// 0x8015D1E0
void ftFox_SpecialLwStart_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.fox.speciallw.release_lag = FTFOX_REFLECTOR_RELEASE_LAG;
    fp->status_vars.fox.speciallw.is_release = FALSE;
    fp->command_vars.flags.flag2 = 4;
    fp->status_vars.fox.speciallw.gravity_delay = FTFOX_REFLECTOR_GRAVITY_DELAY;

    fp->status_vars.fox.speciallw.effect_gobj = efParticle_Reflector_MakeEffect(fighter_gobj);

    if (fp->status_vars.fox.speciallw.effect_gobj != NULL)
    {
        fp->is_persist_effect = TRUE;
    }
    fp->special_hit = (ftSpecialHit*) ((uintptr_t)D_ovl2_80130E94 + (intptr_t)&ftFox_LoadedFiles_SpecialLwData); // Another linker thing
}

// 0x8015D250
void ftFox_SpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialLwStart_InitStatusVars(fighter_gobj);
}

// 0x8015D290
void ftFox_SpecialAirLwStart_SetStatus(GObj* fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Fox_SpecialAirLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftFox_SpecialLwStart_InitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.y = 0.0F;
    fp->phys_info.vel_air.x /= 2;
}