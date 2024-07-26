#include <ft/fighter.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80163B40
void ftLinkSpecialHiDestroyWeapon(ftStruct *fp, wpStruct *wp)
{
    wp->is_hitlag_weapon = FALSE;

    wp->weapon_vars.spin_attack.is_destroy = TRUE;

    wpMainDestroyWeapon(wp->weapon_gobj);

    fp->status_vars.link.specialhi.spin_attack_gobj = NULL;
}

// 0x80163B80
void ftLinkSpecialHiUpdateWeaponPos(GObj *fighter_gobj, wpStruct *wp)
{
    wp->weapon_vars.spin_attack.pos_index++;
    wp->weapon_vars.spin_attack.pos_index %= WPSPINATTACK_EXTEND_POS_COUNT;

    wp->weapon_vars.spin_attack.pos_x[wp->weapon_vars.spin_attack.pos_index] = DObjGetStruct(fighter_gobj)->translate.vec.f.x;
    wp->weapon_vars.spin_attack.pos_y[wp->weapon_vars.spin_attack.pos_index] = DObjGetStruct(fighter_gobj)->translate.vec.f.y;
}

// 0x80163BF0
void ftLinkSpecialHiDecWeaponLifeCheckDestroy(GObj *fighter_gobj, wpStruct *wp)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        ftLinkSpecialHiDestroyWeapon(fp, wp);
    }
}

// 0x80163C2C
void ftLinkSpecialHiUpdateWeaponHit(GObj *fighter_gobj, wpStruct *wp)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    /*
     * WARNING: UBs everywhere. Passing a fighter_gobj to wpProcessUpdateHitPositions which expects a weapon_gobj. Quite literally one hair away from breaking the game.
     * If either ftStruct or wpStruct got shifted, this inevitably would crash the game. In base SSB, wpProcessUpdateHitPositions grabs 0x150 from the GObj's user_data,
     * which happens to be attack1_followup_frames in ftStruct and hitbox_count in wpStruct. This is bad enough on its own, because attack1_followup_frames is a float,
     * which gets loaded as an integer. Not only that, this would be used as the loop iterator for weapon hitboxes... So not only does it receive the wrong struct, it also
     * could very well iterate out of bounds until it crashes from that instead. The only saving grace of this whole situation is that attack1_followup_frames is 0 outside of jabs.
     * On top of that, fixing this function does yields results in no changes at all, because weapons are updated after fighters, and wpProcessUpdateHitPositions runs regardless.
     * It is absolutely ridiculous how close HAL were to casually making the game collapse from Link's specials on two occasions.
     */

    switch (fp->command_vars.flags.flag2) 
    {
    case 0:
        break;

    case 1:
        wp->weapon_hit.update_state = nGMHitUpdateNew;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_1;

    #if !defined (AVOID_UB)
        wpProcessUpdateHitPositions(fighter_gobj);
    #elif !defined (DAIRANTOU_OPT0)
        wpProcessUpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 2:
        wp->weapon_hit.update_state = nGMHitUpdateNew;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_2;

    #if !defined (AVOID_UB)
        wpProcessUpdateHitPositions(fighter_gobj);
    #elif !defined (DAIRANTOU_OPT0)
        wpProcessUpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 3:
        wp->weapon_hit.update_state = nGMHitUpdateNew;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_3;

    #if !defined (AVOID_UB)
        wpProcessUpdateHitPositions(fighter_gobj);
    #elif !defined (DAIRANTOU_OPT0)
        wpProcessUpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 4:
        wp->weapon_hit.update_state = nGMHitUpdateNew;
        wp->weapon_hit.size = FTLINK_SPINATTACK_FLAG_SIZE_4;

    #if !defined (AVOID_UB)
        wpProcessUpdateHitPositions(fighter_gobj);
    #elif !defined (DAIRANTOU_OPT0)
        wpProcessUpdateHitPositions(wp->weapon_gobj);
    #endif
        break;

    case 13:
        wp->weapon_hit.update_state = nGMHitUpdateDisable;
        break;

    default:
        wp->weapon_hit.update_state = nGMHitUpdateDisable;
        break;
    }
    fp->command_vars.flags.flag2 = 0;
}

// 0x80163D00
void ftLinkSpecialHiProcEffect(GObj *fighter_gobj)
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
void ftLinkSpecialHiUpdateWeaponVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
    {
        wpStruct *wp = wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj);

        ftLinkSpecialHiUpdateWeaponHit(fighter_gobj, wp);
        ftLinkSpecialHiUpdateWeaponPos(fighter_gobj, wp);
        ftLinkSpecialHiDecWeaponLifeCheckDestroy(fighter_gobj, wp);
    }
}

// 0x80163D94
void ftLinkSpecialHiMakeWeapon(GObj *fighter_gobj, sb32 is_skip_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *spin_attack_gobj;
    Vec3f pos;

    if ((fp->command_vars.flags.flag0 != 0) && (fp->status_vars.link.specialhi.spin_attack_gobj == NULL))
    {
        fp->command_vars.flags.flag0 = 0;

        if (efManagerLinkSpinAttackMakeEffect(fighter_gobj) != NULL)
        {
            fp->is_attach_effect = TRUE;
        }
        if (is_skip_gobj == FALSE)
        {
            pos.x = pos.y = pos.z = 0.0F;

            ftParts_GetDObjWorldPosition(fp->joint[FTLINK_SPINATTACK_SPAWN_JOINT], &pos);

            fp->status_vars.link.specialhi.spin_attack_gobj = wpLinkSpinAttackMakeWeapon(fighter_gobj, &pos);

            if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
            {
                wpStruct *wp = wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj);
                s32 i;

                wp->weapon_hit.update_state = nGMHitUpdateDisable;

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
void ftLinkSpecialHiProcDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
    {
        ftLinkSpecialHiDestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
    }
}

// 0x80163F30
void ftLinkSpecialHiProcUpdate(GObj *fighter_gobj)
{
    ftStatusSetOnAnimEnd(fighter_gobj, ftLinkSpecialHiEndSetStatus);
}

// 0x80163F54
void ftLinkSpecialHiEndProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
        {
            ftLinkSpecialHiDestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
        }
        ftCommonWaitSetStatus(fighter_gobj);
    }
}

// 0x80163FB0
void ftLinkSpecialAirHiProcUpdate(GObj *fighter_gobj)
{
    if (fighter_gobj->anim_frame <= 0.0F)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (fp->status_vars.link.specialhi.spin_attack_gobj != NULL)
        {
            ftLinkSpecialHiDestroyWeapon(fp, wpGetStruct(fp->status_vars.link.specialhi.spin_attack_gobj));
        }
        ftCommonFallSpecialSetStatus(fighter_gobj, FTLINK_SPINATTACK_FALLSPECIAL_DRIFT, FALSE, TRUE, TRUE, FTLINK_SPINATTACK_LANDING_LAG, FALSE);
    }
}

// 0x80164030
void ftLinkSpecialHiProcPhysics(GObj *fighter_gobj)
{
    ftLinkSpecialHiUpdateWeaponVars(fighter_gobj);
    ftLinkSpecialHiMakeWeapon(fighter_gobj, FALSE);
    ftPhysics_ApplyGroundVelFriction(fighter_gobj);
}

// 0x80164064
void ftLinkSpecialAirHiProcPhysics(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    f32 gravity;

    ftLinkSpecialHiUpdateWeaponVars(fighter_gobj);
    ftLinkSpecialHiMakeWeapon(fighter_gobj, TRUE);

    gravity = (fp->command_vars.flags.flag1 != 0) ? fp->attributes->gravity : fp->attributes->gravity * FTLINK_SPINATTACK_GRAVITY_MUL;

    ftPhysics_ApplyGClampTVel(fp, gravity, fp->attributes->fall_speed_max);

    if (ftPhysics_CheckClampAirVelXDecMax(fp, fp->attributes) == FALSE)
    {
        ftAttributes *attributes = fp->attributes;

        ftPhysics_ClampAirVelXStickRange(fp, FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN, attributes->aerial_acceleration * FTLINK_SPINATTACK_AIR_DRIFT_MUL, attributes->aerial_speed_max_x);
        ftPhysics_ApplyAirVelXFriction(fp, fp->attributes);
    }
}

// 0x80164128
void ftLinkSpecialHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
        ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialAirHi, fighter_gobj->anim_frame, 1.0F, (FTSTATUS_PRESERVE_EFFECT | FTSTATUS_PRESERVE_HIT));

        fp->proc_damage = ftLinkSpecialHiProcDamage;

        fp->jumps_used = fp->attributes->jumps_max;
    }
}

// 0x80164198
void ftLinkSpecialHiEndProcMap(GObj *fighter_gobj)
{
    if (ftMap_ProcFighterAirProcMap(fighter_gobj, ftCommonFallSetStatus) == FALSE)
    {
        ftLinkSpecialHiProcDamage(fighter_gobj);
    }
}

// 0x801641D0
void ftLinkSpecialAirHiProcMap(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        ftLinkSpecialHiProcDamage(fighter_gobj);

        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommonCliffCatchSetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            ftMap_SetGround(fp);
            ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialHiEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);

            fp->proc_damage = ftLinkSpecialHiProcDamage;
        }
    }
}

// 0x8016426C
void ftLinkSpecialHiProcStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->command_vars.flags.flag0 = 0;
    fp->command_vars.flags.flag2 = 0;
    fp->command_vars.flags.flag1 = 0;

    fp->status_vars.link.specialhi.spin_attack_gobj = NULL;
}

// 0x80164284
void ftLinkSpecialHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_damage = ftLinkSpecialHiProcDamage;
    fp->proc_effect = ftLinkSpecialHiProcEffect;
}

// 0x801642EC
void ftLinkSpecialHiEndSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialHiEnd, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->proc_damage = ftLinkSpecialHiProcDamage;
    fp->proc_effect = ftLinkSpecialHiProcEffect;
}

// 0x80164348
void ftLinkSpecialAirHiSetStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->proc_status = ftLinkSpecialHiProcStatus;

    ftMainSetFighterStatus(fighter_gobj, nFTLinkStatusSpecialAirHi, 0.0F, 1.0F, FTSTATUS_PRESERVE_NONE);
    ftMainUpdateAnimCheckInterrupt(fighter_gobj);

    fp->phys_info.vel_air.y = FTLINK_SPINATTACK_AIR_VEL_Y;

    fp->jumps_used = fp->attributes->jumps_max;

    fp->proc_damage = ftLinkSpecialHiProcDamage;
    fp->proc_effect = ftLinkSpecialHiProcEffect;
}
