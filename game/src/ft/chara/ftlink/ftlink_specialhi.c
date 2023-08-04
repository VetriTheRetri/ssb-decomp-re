#include <ft/chara/ftlink/ftlink.h>

// 0x80163B40
void ftLink_SpecialHi_DestroyWeapon(ftStruct *fp, wpStruct *wp)
{
    wp->is_hitlag_item = FALSE;

    wp->weapon_vars.spin_attack.is_destroy = TRUE;

    wpMain_DestroyWeapon(wp->weapon_gobj);

    fp->status_vars.link.specialhi.spin_attack_gobj = NULL;
}

// 0x80163B80
void ftLink_SpecialHi_UpdateWeaponPos(GObj *fighter_gobj, wpStruct *wp)
{
    wp->weapon_vars.spin_attack.pos_index++;
    wp->weapon_vars.spin_attack.pos_index %= WPSPINATTACK_EXTEND_POS_COUNT;

    wp->weapon_vars.spin_attack.pos_x[wp->weapon_vars.spin_attack.pos_index] = (s16) DObjGetStruct(fighter_gobj)->translate.x;
    wp->weapon_vars.spin_attack.pos_y[wp->weapon_vars.spin_attack.pos_index] = (s16) DObjGetStruct(fighter_gobj)->translate.y;
}

// 0x80163BF0
void ftLink_SpecialHi_DecWeaponLifeCheckDestroy(GObj *fighter_gobj, wpStruct *wp)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        ftLink_SpecialHi_DestroyWeapon(fp, wp);
    }
}

// 0x80163C2C
void ftLink_SpecialHi_UpdateWeaponHit(GObj *fighter_gobj, wpStruct *wp)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    switch (fp->command_vars.flags.flag2) // jtbl at 0x8018C9F0
    {
    case 0:
        break;

    case 1:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_1;

        wpManager_UpdateHitPositions(fighter_gobj);
        break;

    case 2:

        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_2;

        wpManager_UpdateHitPositions(fighter_gobj);
        break;

    case 3:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_3;

        wpManager_UpdateHitPositions(fighter_gobj);
        break;

    case 4:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_4;

        wpManager_UpdateHitPositions(fighter_gobj);
        break;

    case 13:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;
        break;

    default:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;
        break;
    }
    fp->command_vars.flags.flag2 = 0;
}

// 0x80163D00
void ftLink_SpecialHi_ProcGFX(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj);

        if (fp->hitlag_timer != 0)
        {
            wp->is_hitlag_item = TRUE;
        }
        else wp->is_hitlag_item = FALSE;
    }
}

// 0x80163D44
void ftLink_SpecialHi_UpdateWeaponVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj);

        ftLink_SpecialHi_UpdateWeaponHit(fighter_gobj, wp);
        ftLink_SpecialHi_UpdateWeaponPos(fighter_gobj, wp);
        ftLink_SpecialHi_DecWeaponLifeCheckDestroy(fighter_gobj, wp);
    }
}

// 0x80163D94
void ftLink_SpecialHi_MakeWeapon(GObj *fighter_gobj, bool32 is_skip_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *spin_attack_gobj;
    Vec3f pos;

    if ((fp->command_vars.flags.flag0 != 0) && (fp->status_vars.link.specialhi.spin_attack_gobj == NULL))
    {
        fp->command_vars.flags.flag0 = 0;

        if (func_ovl2_80103378(fighter_gobj) != NULL)
        {
            fp->is_persist_effect = TRUE;
        }
        if (is_skip_gobj == FALSE)
        {
            pos.z = 0.0F;
            pos.y = 0.0F;
            pos.x = 0.0F;

            func_ovl2_800EDF24(fp->joint[FTLINK_SPINATTACK_SPAWN_JOINT], &pos);

            fp->status_vars.link.specialhi.spin_attack_gobj = wpLink_SpinAttack_MakeWeapon(fighter_gobj, &pos);

            if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
            {
                wpStruct *wp = wpGetStruct(spin_attack_gobj);
                s32 i;

                wp->weapon_hit.update_state = 0;

                for (i = 0; i < WPSPINATTACK_EXTEND_POS_COUNT; i++)
                {
                    wp->weapon_vars.spin_attack.pos_x[i] = (s16) DObjGetStruct(fighter_gobj)->translate.x;
                    wp->weapon_vars.spin_attack.pos_y[i] = (s16) DObjGetStruct(fighter_gobj)->translate.y;
                }
            }
        }
    }
}

// 0x80163EFC
void ftLink_SpecialHi_ProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
    {
        ftLink_SpecialHi_DestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
    }
}

// 0x80163F30
void ftLink_SpecialHi_ProcUpdate(GObj *fighter_gobj)
{
    ftAnim_IfAnimEnd_ProcStatus(fighter_gobj, ftLink_SpecialHiEnd_SetStatus);
}

// 0x80163F54
void ftLink_SpecialHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
        {
            ftLink_SpecialHi_DestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
        }
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
}

// 0x80163FB0
void ftLink_SpecialAirHiEnd_ProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
        {
            ftLink_SpecialHi_DestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
        }
        ftCommon_FallSpecial_SetStatus(fighter_gobj, FTLINK_SPINATTACK_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTLINK_SPINATTACK_LANDING_LAG, FALSE);
    }
}

// 0x80164030
void ftLink_SpecialHi_ProcPhysics(GObj *fighter_gobj)
{
    ftLink_SpecialHi_UpdateWeaponVars(fighter_gobj);
    ftLink_SpecialHi_MakeWeapon(fighter_gobj, FALSE);
    func_ovl2_800D8BB4(fighter_gobj);
}

// 0x80164064
void ftLink_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 gravity;

    ftLink_SpecialHi_UpdateWeaponVars(fighter_gobj);
    ftLink_SpecialHi_MakeWeapon(fighter_gobj, TRUE);

    gravity = (fp->command_vars.flags.flag1 != 0) ? fp->attributes->gravity : fp->attributes->gravity * FTLINK_SPINATTACK_GRAVITY_MUL;

    func_ovl2_800D8D68(fp, gravity, fp->attributes->fall_speed_max);

    if (func_ovl2_800D8FA8(fp, fp->attributes) == FALSE)
    {
        ftAttributes *attributes = fp->attributes;

        ftPhysics_ClampDriftStickRange(fp, 8, attributes->aerial_acceleration * FTLINK_SPINATTACK_AIR_DRIFT_MUL, attributes->aerial_speed_max_x);
        func_ovl2_800D9074(fp, fp->attributes);
    }
}

// 0x80164128
void ftLink_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DDDA8(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));

        fp->proc_damage = ftLink_SpecialHi_ProcDamage;

        fp->jumps_used = fp->attributes->jumps_max;
    }
}

// 0x80164198
void ftLink_SpecialHiEnd_ProcMap(GObj *fighter_gobj)
{
    if (func_ovl2_800DDDDC(fighter_gobj, ftCommon_Fall_SetStatus) == FALSE)
    {
        ftLink_SpecialHi_ProcDamage(fighter_gobj);
    }
}

// 0x801641D0
void ftLink_SpecialAirHiEnd_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (func_ovl2_800DE87C(fighter_gobj) != FALSE)
    {
        ftLink_SpecialHi_ProcDamage(fighter_gobj);

        if (fp->coll_data.coll_type & MPCOLL_MASK_CLIFF_ALL)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_type & MPCOLL_MASK_GROUND)
        {
            ftMap_SetGround(fp);
            ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

            fp->proc_damage = ftLink_SpecialHi_ProcDamage;
        }
    }
}

// 0x8016426C
void ftLink_SpecialHi_ProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;

    fp->status_vars.link.specialhi.spin_attack_gobj = NULL;
}

// 0x80164284
void ftLink_SpecialHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLink_SpecialHi_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}

// 0x801642EC
void ftLink_SpecialHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}

// 0x80164348
void ftLink_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLink_SpecialHi_ProcStatus;

    ftStatus_Update(fighter_gobj, ftStatus_Link_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftAnim_Update(fighter_gobj);

    fp->phys_info.vel_air.y = FTLINK_SPINATTACK_AIR_VEL_Y;

    fp->jumps_used = fp->attributes->jumps_max;

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}