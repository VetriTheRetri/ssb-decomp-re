#include <ft/chara/ftyoshi/ftyoshi.h>

// 0x8015EDC0
void ftYoshi_SpecialLw_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftYoshi_SpecialAirLwLoop_SetStatus);
}

// 0x8015EDE4
void ftYoshi_SpecialLwLanding_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;

    if (fp->command_vars.flags.flag0 != 0)
    {
        fp->command_vars.flags.flag0 = 0;

        pos.x = 0.0F;
        pos.y = 0.0F;
        pos.z = 0.0F;

        func_ovl2_800EDF24(fp->joint[FTYOSHI_YOSHIBOMB_STAR_SPAWN_JOINT], &pos);
        wpYoshi_Star_MakeWeaponLR(fighter_gobj, &pos);
    }
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Wait_SetStatus);
}

// 0x8015EE4C
void ftYoshi_SpecialAirLwLoop_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800D8FA8(fp, fp->attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, fp->attributes);
    }
}

// 0x8015EE84
void ftYoshi_SpecialLw_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if ((fp->command_vars.flags.flag1 != 0) && (fp->phys_info.vel_air.y <= 0.0F))
    {
        if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
        {
            if (fp->coll_data.coll_type & MPCOLL_MASK_GROUND)
            {
                ftMap_SetGround(fp);
                ftStatus_Update(fighter_gobj, ftStatus_Yoshi_SpecialLwLanding, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
            }
            else if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
            {
                ftCommon_CliffCatch_SetStatus(fighter_gobj);
            }
        }
    }
    else if ((func_ovl2_800DE8B0(fighter_gobj) != FALSE) && (fp->coll_data.coll_mask & MPCOLL_MASK_CEILHEAVY))
    {
        ftYoshi_SpecialAirLwLoop_SetStatus(fighter_gobj);
    }
}

// 0x8015EF5C
void ftYoshi_SpecialAirLwLoop_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_type & MPCOLL_MASK_GROUND)
        {
            ftMap_SetGround(fp);
            ftStatus_Update(fighter_gobj, ftStatus_Yoshi_SpecialLwLanding, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
        }
        else if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
    }
}

// 0x8015EFD4
void ftYoshi_SpecialLw_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag1 = 0;
}

// 0x8015EFE4
void ftYoshi_SpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftYoshi_SpecialLw_ProcStatus;

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Yoshi_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015F04C
void ftYoshi_SpecialAirLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftYoshi_SpecialLw_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Yoshi_SpecialAirLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->jumps_used = fp->attributes->jumps_max;
}

// 0x8015F0A8
void ftYoshi_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 vel_y_bak;

    if (ABSF(fp->phys_info.vel_air.x) > FTYOSHI_YOSHIBOMB_VEL_X_CLAMP)
    {
        fp->phys_info.vel_air.x = ((fp->phys_info.vel_air.x < 0.0F) ? LEFT : RIGHT) * FTYOSHI_YOSHIBOMB_VEL_X_CLAMP;
    }

    vel_y_bak = fp->phys_info.vel_air.y;

    ftStatus_Update(fighter_gobj, ftStatus_Yoshi_SpecialAirLwLoop, fighter_gobj->anim_frame, 0, FTSTATUPDATE_HIT_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->phys_info.vel_air.y = vel_y_bak;

    if (vel_y_bak > FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP)
    {
        fp->phys_info.vel_air.y = FTYOSHI_YOSHIBOMB_VEL_Y_CLAMP;
    }
}