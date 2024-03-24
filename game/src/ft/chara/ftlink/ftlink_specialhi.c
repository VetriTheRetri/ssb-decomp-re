#include <ft/fighter.h>
#include <wp/weapon.h>

// 0x80163B40
void ftLink_SpecialHi_DestroyWeapon(ftStruct *fp, wpStruct *wp)
{
    wp->is_hitlag_weapon = FALSE;

    wp->weapon_vars.spin_attack.is_destroy = TRUE;

    wpMain_DestroyWeapon(wp->weapon_gobj);

    fp->status_vars.link.specialhi.spin_attack_gobj = NULL;
}

// 0x80163B80
void ftLink_SpecialHi_UpdateWeaponPos(GObj *fighter_gobj, wpStruct *wp)
{
    wp->weapon_vars.spin_attack.pos_index++;
    wp->weapon_vars.spin_attack.pos_index %= WPSPINATTACK_EXTEND_POS_COUNT;

    wp->weapon_vars.spin_attack.pos_x[wp->weapon_vars.spin_attack.pos_index] = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    wp->weapon_vars.spin_attack.pos_y[wp->weapon_vars.spin_attack.pos_index] = DObjGetStruct(fighter_gobj)->translate.vec.f.y;
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

    /*
     * WARNING: UBs everywhere. Passing a fighter_gobj to wpManager_UpdateHitPositions which expects a weapon_gobj. Quite literally one hair away from breaking the game.
     * If either ftStruct or wpStruct got shifted, this inevitably would crash the game. In base SSB, wpManager_UpdateHitPositions grabs 0x150 from the GObj's user_data,
     * which happens to be attack1_followup_frames in ftStruct and hitbox_count in wpStruct. This is bad enough on its own, because attack1_followup_frames is a float,
     * which gets loaded as an integer. Not only that, this would be used as the loop iterator for weapon hitboxes... So not only does it receive the wrong struct, it also
     * could very well iterate out of bounds until it crashes from that instead. The only saving grace of this whole situation is that attack1_followup_frames is 0 outside of jabs.
     * On top of that, fixing this function does yields results in no changes at all, because weapons are updated after fighters, and wpManager_UpdateHitPositions runs regardless.
     * It is absolutely ridiculous how close HAL were to casually making the game collapse from Link's specials on two occasions.
     */

    switch (fp->command_vars.flags.flag2) 
    {
    case 0:
        break;

    case 1:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_1;

    #if !defined(AVOID_UB)
        wpManager_UpdateHitPositions(fighter_gobj);
    #elif !defined(DAIRANTOU_OPT0)
        wpManager_UpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 2:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_2;

    #if !defined(AVOID_UB)
        wpManager_UpdateHitPositions(fighter_gobj);
    #elif !defined(DAIRANTOU_OPT0)
        wpManager_UpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 3:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_3;

    #if !defined(AVOID_UB)
        wpManager_UpdateHitPositions(fighter_gobj);
    #elif !defined(DAIRANTOU_OPT0)
        wpManager_UpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 4:
        wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_4;

    #if !defined(AVOID_UB)
        wpManager_UpdateHitPositions(fighter_gobj);
    #elif !defined(DAIRANTOU_OPT0)
        wpManager_UpdateHitPositions(wp->weapon_gobj);
    #endif
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
            wp->is_hitlag_weapon = TRUE;
        }
        else wp->is_hitlag_weapon = FALSE;
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
void ftLink_SpecialHi_MakeWeapon(GObj *fighter_gobj, sb32 is_skip_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *spin_attack_gobj;
    Vec3f pos;

    if ((fp->command_vars.flags.flag0 != 0) && (fp->status_vars.link.specialhi.spin_attack_gobj == NULL))
    {
        fp->command_vars.flags.flag0 = 0;

        if (efParticle_SpinAttackTrail_MakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
        if (is_skip_gobj == FALSE)
        {
            pos.x = pos.y = pos.z = 0.0F;

            ftParts_GetDObjWorldPosition(fp->joint[FTLINK_SPINATTACK_SPAWN_JOINT], &pos);

            fp->status_vars.link.specialhi.spin_attack_gobj = wpLink_SpinAttack_MakeWeapon(fighter_gobj, &pos);

            if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
            {
                wpStruct *wp = wpGetStruct(spin_attack_gobj);
                s32 i;

                wp->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;

                for (i = 0; i < WPSPINATTACK_EXTEND_POS_COUNT; i++)
                {
                    wp->weapon_vars.spin_attack.pos_x[i] = (s16) DObjGetStruct(fighter_gobj)->translate.vec.f.x;
                    wp->weapon_vars.spin_attack.pos_y[i] = (s16) DObjGetStruct(fighter_gobj)->translate.vec.f.y;
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
    ftStatus_IfAnimEnd_ProcStatus(fighter_gobj, ftLink_SpecialHiEnd_SetStatus);
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
void ftLink_SpecialAirHi_ProcUpdate(GObj *fighter_gobj)
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
    ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x80164064
void ftLink_SpecialAirHi_ProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 gravity;

    ftLink_SpecialHi_UpdateWeaponVars(fighter_gobj);
    ftLink_SpecialHi_MakeWeapon(fighter_gobj, TRUE);

    gravity = (fp->command_vars.flags.flag1 != 0) ? fp->attributes->gravity : fp->attributes->gravity * FTLINK_SPINATTACK_GRAVITY_MUL;

    ftPhysics_ApplyGravityClampTVel(fp, gravity, fp->attributes->fall_speed_max);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, fp->attributes) == FALSE)
    {
        ftAttributes *attributes = fp->attributes;

        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTLINK_SPINATTACK_AIR_DRIFT_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyAirVelXFriction(fp, fp->attributes);
    }
}

// 0x80164128
void ftLink_SpecialHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirHi, fighter_gobj->anim_frame, 1.0F, (FTSTATUPDATE_GFX_PRESERVE | FTSTATUPDATE_HIT_PRESERVE));

        fp->proc_damage = ftLink_SpecialHi_ProcDamage;

        fp->jumps_used = fp->attributes->jumps_max;
    }
}

// 0x80164198
void ftLink_SpecialHiEnd_ProcMap(GObj *fighter_gobj)
{
    if (ftMap_ProcFighterAirProcMap(fighter_gobj, ftCommon_Fall_SetStatus) == FALSE)
    {
        ftLink_SpecialHi_ProcDamage(fighter_gobj);
    }
}

// 0x801641D0
void ftLink_SpecialAirHi_ProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        ftLink_SpecialHi_ProcDamage(fighter_gobj);

        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            ftMap_SetGround(fp);
            ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);

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

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}

// 0x801642EC
void ftLink_SpecialHiEnd_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialHiEnd, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}

// 0x80164348
void ftLink_SpecialAirHi_SetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLink_SpecialHi_ProcStatus;

    ftMain_SetFighterStatus(fighter_gobj, ftStatus_Link_SpecialAirHi, 0.0F, 1.0F, FTSTATUPDATE_NONE_PRESERVE);
    ftMain_UpdateAnimCheckInterrupt(fighter_gobj);

    fp->phys_info.vel_air.y = FTLINK_SPINATTACK_AIR_VEL_Y;

    fp->jumps_used = fp->attributes->jumps_max;

    fp->proc_damage = ftLink_SpecialHi_ProcDamage;
    fp->proc_gfx = ftLink_SpecialHi_ProcGFX;
}