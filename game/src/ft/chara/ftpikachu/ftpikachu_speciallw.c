#include <ft/chara/ftpikachu/ftpikachu.h>
#include <gr/ground.h>

#define FTPIKACHU_SPECIALLWSTART_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)
#define FTPIKACHU_SPECIALLWLOOP_STATUPDATE_FLAGS (FTSTATUPDATE_RUMBLE_PRESERVE | FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTPIKACHU_SPECIALLWHIT_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE | FTSTATUPDATE_HIT_PRESERVE)
#define FTPIKACHU_SPECIALLWEND_STATUPDATE_FLAGS (FTSTATUPDATE_TEXTUREPART_PRESERVE | FTSTATUPDATE_HITSTATUS_PRESERVE | FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_COLANIM_PRESERVE)

// 0x80151DB0
void ftPikachu_SpecialLw_CreateThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    Vec3f pos;
    Vec3f vel;

    pos.x = 0.0F;
    pos.y = 0.0F;
    pos.z = 0.0F;

    func_ovl2_800EDF24(fp->joint[FTPIKACHU_THUNDER_SPAWN_JOINT], &pos);

    pos.y = gpGroundInfo->blastzone_top - FTPIKACHU_THUNDER_SPAWN_OFF_Y;

    vel.x = 0.0F;
    vel.z = 0.0F;
    vel.y = FTPIKACHU_THUNDER_VEL_Y;

    fp->status_vars.pikachu.speciallw.thunder_gobj = wpPikachu_ThunderHead_MakeWeapon(fighter_gobj, &pos, &vel);
}

// 0x80151E44
void ftPikachu_SpecialLwStart_CheckCreateThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag0 != 0)
    {
        ftPikachu_SpecialLw_CreateThunder(fighter_gobj);
    }
}

// 0x80151E74
void ftPikachu_SpecialLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftPikachu_SpecialLwStart_CheckCreateThunder(fighter_gobj);
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftPikachu_SpecialLwLoop_SetStatus);
}

// 0x80151EA4
void ftPikachu_SpecialAirLwStart_ProcUpdate(GObj *fighter_gobj)
{
    ftPikachu_SpecialLwStart_CheckCreateThunder(fighter_gobj);
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftPikachu_SpecialAirLwLoop_SetStatus);
}

// 0x80151ED4
void ftPikachu_SpecialLwStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPikachu_SpecialLwStart_SwitchStatusAir);
}

// 0x80151EF8
void ftPikachu_SpecialAirLwStart_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPikachu_SpecialAirLwStart_SwitchStatusGround);
}

// 0x80151F1C
void ftPikachu_SpecialAirLwStart_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwStart, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWSTART_STATUPDATE_FLAGS);
}

// 0x80151F5C
void ftPikachu_SpecialLwStart_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwStart, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWSTART_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80151FA8
void ftPikachu_SpecialLwStart_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;
    fp->command_vars.flags.flag0 = 0;

    fp->fighter_vars.pikachu.is_thunder_destroy = FALSE;
}

// 0x80151FBC
void ftPikachu_SpecialLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialLwStart_InitStatusVars(fighter_gobj);
}

// 0x80151FFC
void ftPikachu_SpecialAirLwStart_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwStart, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialLwStart_InitStatusVars(fighter_gobj);
}

// 0x8015203C
bool32 ftPikachu_SpecialLw_CheckCollideThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    wpStruct *wp;
    DObj *fighter_joint;
    DObj *item_joint;
    GObj *thunder_gobj;
    f32 ft_temp_x;
    f32 ft_temp_y;
    f32 it_temp_x;
    f32 it_temp_y;
    f32 dist_x;
    f32 dist_y;

    thunder_gobj = fp->status_vars.pikachu.speciallw.thunder_gobj;

    if (thunder_gobj == NULL)
    {
        fp->fighter_vars.pikachu.is_thunder_destroy |= TRUE;
    }

    if (fp->fighter_vars.pikachu.is_thunder_destroy & TRUE)
    {
        return FALSE;
    }

    wp = wpGetStruct(thunder_gobj);

    fighter_joint = DObjGetStruct(fighter_gobj);
    item_joint = DObjGetStruct(thunder_gobj);

    ft_temp_x = fighter_joint->translate.x;
    it_temp_x = item_joint->translate.x;

    dist_x = (ft_temp_x < it_temp_x) ? -(ft_temp_x - it_temp_x) : (ft_temp_x - it_temp_x);

    if (dist_x < FTPIKACHU_THUNDER_COLLIDE_X)
    {
        ft_temp_y = fighter_joint->translate.y;
        it_temp_y = item_joint->translate.y + FTPIKACHU_THUNDER_COLL_OFF_Y;

        dist_y = (ft_temp_y < it_temp_y) ? -(ft_temp_y - it_temp_y) : (ft_temp_y - it_temp_y);

        if (dist_y < FTPIKACHU_THUNDER_COLLIDE_Y)
        {
            wp->weapon_vars.thunder.thunder_state = wpPikachuThunder_Status_Collide;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x80152124
void ftPikachu_SpecialLwLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftPikachu_SpecialLw_CheckCollideThunder(fighter_gobj) != FALSE)
    {
        ftPikachu_SpecialLwHit_SetStatus(fighter_gobj);
    }
    else if (fp->fighter_vars.pikachu.is_thunder_destroy & TRUE)
    {
        ftPikachu_SpecialLwEnd_SetStatus(fighter_gobj);
    }
    else if (fp->command_vars.flags.flag1 != 0)
    {
        ftPikachu_SpecialLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x8015219C
void ftPikachu_SpecialAirLwLoop_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftPikachu_SpecialLw_CheckCollideThunder(fighter_gobj) != FALSE)
    {
        ftPikachu_SpecialAirLwHit_SetStatus(fighter_gobj);
    }
    else if (fp->fighter_vars.pikachu.is_thunder_destroy & TRUE)
    {
        ftPikachu_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
    else if (fp->command_vars.flags.flag1 != 0)
    {
        ftPikachu_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152214
void ftPikachu_SpecialLwLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPikachu_SpecialLwLoop_SwitchStatusAir);
}

// 0x80152238
void ftPikachu_SpecialAirLwLoop_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPikachu_SpecialAirLwLoop_SwitchStatusGround);
}

// 0x8015225C
void ftPikachu_SpecialLw_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *thunder_gobj = fp->status_vars.pikachu.speciallw.thunder_gobj;

    if (thunder_gobj == NULL)
    {
        fp->fighter_vars.pikachu.is_thunder_destroy |= TRUE;
    }
    if (!(fp->fighter_vars.pikachu.is_thunder_destroy & TRUE))
    {
        wpStruct *wp = wpGetStruct(thunder_gobj);

        wp->weapon_vars.thunder.thunder_state = wpPikachuThunder_Status_Destroy;
    }
}

// 0x8015229C
void ftPikachu_SpecialAirLwLoop_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwLoop, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWLOOP_STATUPDATE_FLAGS);
}

// 0x801522DC
void ftPikachu_SpecialLwLoop_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwLoop, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWLOOP_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80152328
void ftPikachu_SpecialLwLoop_CheckCreateThunder(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag0 == 0)
    {
        ftPikachu_SpecialLw_CreateThunder(fighter_gobj);
    }
    fp->command_vars.flags.flag0 = 0;

    fp->proc_damage = ftPikachu_SpecialLw_ProcDamage;
}

// 0x8015236C
void ftPikachu_SpecialLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialLwLoop_CheckCreateThunder(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwLoop, 0.0F, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x801523B0
void ftPikachu_SpecialAirLwLoop_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialLwLoop_CheckCreateThunder(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwLoop, 0.0F, 1.0F, FTSTATUPDATE_RUMBLE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x801523F4
void ftPikachu_SpecialLwHit_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftPikachu_SpecialLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152424
void ftPikachu_SpecialAirLwHit_ProcUpdate(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->command_vars.flags.flag1 != 0)
    {
        ftPikachu_SpecialAirLwEnd_SetStatus(fighter_gobj);
    }
}

// 0x80152454
void ftPikachu_SpecialLwHit_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    func_ovl2_800D8D68(fp, FTPIKACHU_THUNDER_HIT_GRAVITY, attributes->fall_speed_max);

    if (func_ovl2_800D8FA8(fp, attributes) == FALSE)
    {
        func_ovl2_800D9074(fp, attributes);
    }
}

// 0x801524A4
void ftPikachu_SpecialLwHit_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPikachu_SpecialLwHit_SwitchStatusAir);
}

// 0x801524C8
void ftPikachu_SpecialAirLwHit_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPikachu_SpecialAirLwHit_SwitchStatusGround);
}

// 0x801524EC
void ftPikachu_SpecialAirLwHit_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwHit, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWHIT_STATUPDATE_FLAGS);
}

// 0x8015252C
void ftPikachu_SpecialLwHit_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwHit, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWHIT_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80152578
void ftPikachu_SpecialLwHit_InitStatusVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag1 = 0;

    fp->proc_damage = NULL;
}

// 0x80152588
void ftPikachu_SpecialLwHit_SetStatus(GObj *fighter_gobj)
{
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwHit, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialLwHit_InitStatusVars(fighter_gobj);
}

// 0x801525C8
void ftPikachu_SpecialAirLwHit_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwHit, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
    ftPikachu_SpecialLwHit_InitStatusVars(fighter_gobj);

    fp->phys_info.vel_air.y = FTPIKACHU_THUNDER_HIT_VEL_Y;
}

// 0x80152620
void ftPikachu_SpecialAirLwEnd_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x80152644
void ftPikachu_SpecialLwEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DDE84(fighter_gobj, ftPikachu_SpecialLwEnd_SwitchStatusAir);
}

// 0x80152668
void ftPikachu_SpecialAirLwEnd_ProcMap(GObj *fighter_gobj)
{
    func_ovl2_800DE6E4(fighter_gobj, ftPikachu_SpecialAirLwEnd_SwitchStatusGround);
}

// 0x8015268C
void ftPikachu_SpecialAirLwEnd_SwitchStatusGround(GObj *fighter_gobj)
{
    ftMap_SetGround(ftGetStruct(fighter_gobj));
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwEnd, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWEND_STATUPDATE_FLAGS);
}

// 0x801526CC
void ftPikachu_SpecialLwEnd_SwitchStatusAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMap_SetAir(fp);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwEnd, fighter_gobj->anim_frame, 1.0F, FTPIKACHU_SPECIALLWEND_STATUPDATE_FLAGS);
    func_ovl2_800D8EB8(fp);
}

// 0x80152718
void ftPikachu_SpecialLw_ClearProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_damage = NULL;
}

// 0x80152724
void ftPikachu_SpecialLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialLw_ClearProcDamage(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}

// 0x80152764
void ftPikachu_SpecialAirLwEnd_SetStatus(GObj *fighter_gobj)
{
    ftPikachu_SpecialLw_ClearProcDamage(fighter_gobj);
    ftStatus_Update(fighter_gobj, ftStatus_Pikachu_SpecialAirLwEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);
}
