#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130F30;

wpCreateDesc dWpSamusBombWeaponDesc =
{
    0x00,                                   // Render flags?
    Wp_Kind_SamusBomb,                      // Weapon Kind
    &D_ovl2_80130F30,                       // Pointer to character's loaded files?
    0xC,                                    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x46,                               // Secondary matrix transformations?
        0,                                  // ???
    },

    wpSamus_Bomb_ProcUpdate,                // Proc Update
    wpSamus_Bomb_ProcMap,                   // Proc Map
    wpSamus_Bomb_ProcHit,                   // Proc Hit
    wpSamus_Bomb_ProcHit,                   // Proc Shield
    wpSamus_Bomb_ProcHop,                   // Proc Hop
    wpSamus_Bomb_ProcHit,                   // Proc Set-Off
    wpSamus_Bomb_ProcReflector,             // Proc Reflector
    wpSamus_Bomb_ProcAbsorb                 // Proc Absorb
};

// 0x80168F00
sb32 wpSamus_BombExplode_ProcUpdate(GObj *weapon_gobj)
{
    if (wpMain_DecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80168F2C
void wpSamus_BombExplode_InitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPSAMUSBOMB_EXPLODE_LIFETIME;

    wp->weapon_hit.can_rehit_item = TRUE;
    wp->weapon_hit.can_hop = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = WPSAMUSBOMB_EXPLODE_RADIUS;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wp->proc_update = wpSamus_BombExplode_ProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x80168F98
sb32 wpSamus_Bomb_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
        wpSamus_BombExplode_InitWeaponVars(weapon_gobj);
        func_800269C0(alSound_SFX_ExplodeS);

        return FALSE;
    }
    else
    {
        if (wp->ground_or_air == GA_Air)
        {
            wpMain_ApplyGravityClampTVel(wp, WPSAMUSBOMB_WAIT_GRAVITY, WPSAMUSBOMB_WAIT_T_VEL);
            DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_AIR * wp->lr);
        }
        else
        {
            wpMain_VelGroundTransferAir(weapon_gobj);
            DObjGetStruct(weapon_gobj)->rotate.vec.f.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_GROUND * wp->lr);
        }
        wp->weapon_vars.samus_bomb.bomb_blink_timer--;

        if (wp->weapon_vars.samus_bomb.bomb_blink_timer == 0)
        {
            MObj *mobj = DObjGetStruct(weapon_gobj)->mobj;

            mobj->image_frame = (mobj->image_frame != 0) ? 0.0F : 1.0F;

            if (wp->lifetime > WPSAMUSBOMB_WAIT_BLINK_SLOW)
            {
                wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;
            }
            else if (wp->lifetime > WPSAMUSBOMB_WAIT_BLINK_MID)
            {
                wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_MID;
            }
            else
            {
                wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_FAST;
            }
        }
    }
    return FALSE;
}

// 0x80169108
sb32 wpSamus_Bomb_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f *vel;
    sb32 is_collide;

    if (wp->ground_or_air == GA_Air)
    {
        is_collide = wpMap_TestAllCheckGround(weapon_gobj);

        if (wpMap_CheckCollideAllRebound(weapon_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), WPSAMUSBOMB_WAIT_COLLIDE_MOD_VEL, NULL) != FALSE)
        {
            wpMain_VelSetLR(weapon_gobj);
        }
        if (is_collide != FALSE)
        {
            vel = &wp->phys_info.vel;

            func_ovl0_800C7B08(vel, &wp->coll_data.ground_angle);
            func_ovl0_800C7AE0(vel, 0.6F);
            wpMain_VelSetLR(weapon_gobj);

            if (func_ovl0_800C7A84(vel) < 8.0F)
            {
                wpMap_SetGround(wp);
            }
        }
    }
    else if (wpMap_TestLRWallCheckGround(weapon_gobj) == FALSE)
    {
        wpMap_SetAir(wp);
    }
    return FALSE;
}

// 0x801691FC
sb32 wpSamus_Bomb_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    wpSamus_BombExplode_InitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x8016923C
sb32 wpSamus_Bomb_ProcAbsorb(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x80169274
sb32 wpSamus_Bomb_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);
    wpMain_VelSetLR(weapon_gobj);

    return FALSE;
}

// 0x801692C4
sb32 wpSamus_Bomb_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    if (wp->ground_or_air == GA_Air)
    {
        wpMain_ReflectorSetLR(wp, fp);
        wpMain_VelSetLR(weapon_gobj);
    }
    else wp->lr = fp->lr;
    
    return FALSE;
}

// 0x80169328
GObj* wpSamus_Bomb_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManagerMakeWeapon(fighter_gobj, &dWpSamusBombWeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    wp->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;

    wp->phys_info.vel_air.y = WPSAMUSBOMB_WAIT_VEL_Y;

    return weapon_gobj;
}
