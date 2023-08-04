#include <ft/chara/ftcaptain/ftcaptain.h>

// 0x80160280
void ftCaptain_SpecialHi_InitCatchVars(ftStruct *fp)
{
    ftCommon_SetCatchVars(fp, FTCATCHKIND_MASK_SPECIALHICAPTAIN, ftCaptain_SpecialHi_ProcCatch, ftCommon_CaptureCaptain_ProcCapture);
}

// 0x801602B0
void ftCaptain_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTCAPTAIN_FALCONDIVE_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTCAPTAIN_FALCONDIVE_LANDING_LAG, FALSE);
    }
}

// 0x80160304
void ftCaptain_SpecialHiCatch_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);

    if ((fighter_gobj->anim_frame <= 0.0F) || (this_fp->command_vars.flags.flag0 != 0))
    {
        ftStruct *catch_fp = ftGetStruct(fp->catch_gobj);

        catch_fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_THROW;

        efParticle_Quake_MakeEffect(1); // Apply screen shake/rumble?
        ftCaptain_SpecialHiThrow_SetStatus(fighter_gobj);
    }
}

// 0x80160370
void ftCaptain_SpecialHi_ProcInterrupt(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        fp->command_vars.flags.flag1 = 0;

        if (ABS(fp->input.pl.stick_range.x) > FTCAPTAIN_FALCONDIVE_TURN_STICK_RANGE_MIN)
        {
            ftCommon_StickInputSetLR(fp);

            fp->joint[ftParts_TopN_Joint]->rotate.y = fp->lr * HALF_PI32;
        }
    }
}

// 0x801603F0
void ftCaptain_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = AttributesGetStruct(fp);

    fp->phys_info.vel_air.x = fp->status_vars.captain.specialhi.vel.x;
    fp->phys_info.vel_air.y = fp->status_vars.captain.specialhi.vel.y;
    fp->phys_info.vel_air.z = 0.0F;

    if (func_ovl2_800D8EDC(fp, attributes->aerial_speed_max_x * FTCAPTAIN_FALCONDIVE_AIR_SPEED_MAX_MUL) == FALSE)
    {
        ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration * FTCAPTAIN_FALCONDIVE_AIR_ACCEL_MUL, attributes->aerial_speed_max_x * FTCAPTAIN_FALCONDIVE_AIR_SPEED_MAX_MUL);
        func_ovl2_800D9074(fp, attributes);
    }
    fp->status_vars.captain.specialhi.vel.x = fp->phys_info.vel_air.x;
    fp->status_vars.captain.specialhi.vel.y = fp->phys_info.vel_air.y;

    func_ovl2_800D93E4(fighter_gobj);

    fp->phys_info.vel_air.x += fp->status_vars.captain.specialhi.vel.x;
    fp->phys_info.vel_air.y += fp->status_vars.captain.specialhi.vel.y;
}

// 0x80160D48
void ftCaptain_SpecialHiCatch_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f vec;

    if (!(fp->status_vars.captain.specialhi.unk_0x0 & 4))
    {
        ftCommon_CaptureCaptain_UpdateCapturePos(fighter_gobj, fp->catch_gobj, &vec);

        if (vec3f_mag(&vec) > 180.0F)
        {
            vec3f_normalize(&vec);
            vec3f_scale(&vec, 180.0F);
        }
        vec3f_sub_from(&DObjGetStruct(fighter_gobj)->translate, &vec);
    }
}

// 0x80160560
void ftCaptain_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_air.y < 0.0F)
    {
        if (fp->command_vars.flags.flag2 == 0)
        {
            func_ovl2_800DE978(fighter_gobj);
        }
        else
        {
            func_ovl2_800DE958(fighter_gobj);
            fp->command_vars.flags.flag2--;
        }
    }
    else if ((func_ovl2_800DE87C(fighter_gobj) != FALSE) && (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL))
    {
        ftCommon_CliffCatch_SetStatus(fighter_gobj);
    }
}

// 0x801605FC
void ftCaptain_SpecialHi_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;

    fp->status_vars.captain.specialhi.unk_0x0 = 0;

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag2 = FTCAPTAIN_FALCONDIVE_UNK_TIMER;

    fp->status_vars.captain.specialhi.vel.x = 0.0F;
    fp->status_vars.captain.specialhi.vel.y = 0.0F;
}

// 0x80160630
void ftCaptain_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);

    fp->proc_status = ftCaptain_SpecialHi_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCaptain_SpecialHi_InitCatchVars(fp);
    ftAnim_Update(fighter_gobj);
}

// 0x80160690
void ftCaptain_SpecialHi_ProcCatch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj), *catch_fp;
    GObj *search_gobj;

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialHiCatch, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_ALL);
    func_ovl2_800D9444(fighter_gobj);

    search_gobj = fp->search_gobj;
    fp->catch_gobj = search_gobj;

    catch_fp = ftGetStruct(search_gobj); // No NULL check, might be dangerous

    if (catch_fp->ground_or_air == GA_Air)
    {
        fp->status_vars.common.capturecaptain.capture_flag |= FTCOMMON_CAPTURECAPTAIN_MASK_NOUPDATE;
        fp->x192_flag_b3 = FALSE;
    }
    else fp->x192_flag_b3 = TRUE;
}

// 0x80160730
void ftCaptain_SpecialHiThrow_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialHiThrow, 0.0F, 1.0F, FTSTATUPDATE_GFX_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftCommon_SetCaptureIgnoreMask(fp, FTCATCHKIND_MASK_NONE);

    if ((fp->x192_flag_b3 == TRUE) && (fp->catch_gobj != NULL))
    {
        func_ovl3_8014ADB0(fighter_gobj);
    }
    fp->catch_gobj = NULL;
}

// 0x801607B4
void ftCaptain_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftCaptain_SpecialHi_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Captain_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftCaptain_SpecialHi_InitCatchVars(fp);
    ftAnim_Update(fighter_gobj);
}