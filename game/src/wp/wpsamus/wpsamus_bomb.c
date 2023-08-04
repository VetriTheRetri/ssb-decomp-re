#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130F30;

wpCreateDesc wpSamus_Bomb_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_SamusBomb,                      // Weapon Kind
    &D_ovl2_80130F30,                       // Pointer to character's loaded files?
    0xC,                                    // Offset of weapon attributes in loaded files
    0x12,                                   // ???
    0x46,                                   // ???
    0,                                      // ???
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
bool32 wpSamus_BombExplode_ProcUpdate(GObj *weapon_gobj)
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
    wpStruct *ip = wpGetStruct(weapon_gobj);

    ip->lifetime = WPSAMUSBOMB_EXPLODE_LIFETIME;

    ip->weapon_hit.can_rehit_item = TRUE;
    ip->weapon_hit.can_hop = FALSE;

    ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.x = 0.0F;

    ip->weapon_hit.size = WPSAMUSBOMB_EXPLODE_RADIUS;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    ip->proc_update = wpSamus_BombExplode_ProcUpdate;
    ip->proc_map = NULL;
    ip->proc_hit = NULL;
    ip->proc_shield = NULL;
    ip->proc_hop = NULL;
    ip->proc_setoff = NULL;
    ip->proc_reflector = NULL;
}

// 0x80168F98
bool32 wpSamus_Bomb_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(ip) != FALSE)
    {
        efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);
        wpSamus_BombExplode_InitWeaponVars(weapon_gobj);
        func_800269C0(0);

        return FALSE;
    }
    else
    {
        if (ip->ground_or_air == GA_Air)
        {
            wpMain_UpdateGravityClampTVel(ip, WPSAMUSBOMB_WAIT_GRAVITY, WPSAMUSBOMB_WAIT_T_VEL);
            DObjGetStruct(weapon_gobj)->rotate.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_AIR * ip->lr);
        }
        else
        {
            wpMain_VelGroundTransferAir(weapon_gobj);
            DObjGetStruct(weapon_gobj)->rotate.z -= (WPSAMUSBOMB_WAIT_ROTATE_SPEED_GROUND * ip->lr);
        }

        ip->weapon_vars.samus_bomb.bomb_blink_timer--;

        if (ip->weapon_vars.samus_bomb.bomb_blink_timer == 0)
        {
            MObj *image = DObjGetStruct(weapon_gobj)->mobj;

            image->anim_frame = (image->anim_frame != 0) ? 0.0F : 1.0F;

            if (ip->lifetime > WPSAMUSBOMB_WAIT_BLINK_SLOW)
            {
                ip->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;
            }
            else if (ip->lifetime > WPSAMUSBOMB_WAIT_BLINK_MID)
            {
                ip->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_MID;
            }
            else
            {
                ip->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_FAST;
            }
        }
    }
    return FALSE;
}

// 0x80169108
bool32 wpSamus_Bomb_ProcMap(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    Vec3f *vel;
    bool32 is_collide;

    if (ip->ground_or_air == GA_Air)
    {
        is_collide = func_ovl3_80167B58(weapon_gobj);

        if (wpMap_CheckCollideAllRebound(weapon_gobj, (MPCOLL_MASK_CEIL | MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL), WPSAMUSBOMB_WAIT_COLLIDE_MOD_VEL, NULL) != FALSE)
        {
            wpMain_VelSetLR(weapon_gobj);
        }
        if (is_collide != FALSE)
        {
            vel = &ip->phys_info.vel;

            func_ovl0_800C7B08(vel, &ip->coll_data.ground_angle);
            func_ovl0_800C7AE0(vel, 0.6F);
            wpMain_VelSetLR(weapon_gobj);

            if (func_ovl0_800C7A84(vel) < 8.0F)
            {
                wpMap_SetGround(ip);
            }
        }
    }
    else if (func_ovl3_8016796C(weapon_gobj) == FALSE)
    {
        wpMap_SetAir(ip);
    }
    return FALSE;
}

// 0x801691FC
bool32 wpSamus_Bomb_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(0);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);
    wpSamus_BombExplode_InitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x8016923C
bool32 wpSamus_Bomb_ProcAbsorb(GObj *weapon_gobj)
{
    func_800269C0(0);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

// 0x80169274
bool32 wpSamus_Bomb_ProcHop(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    func_80019438(&ip->phys_info.vel, &ip->shield_collide_vec, ip->shield_collide_angle * 2);
    wpMain_VelSetLR(weapon_gobj);

    return FALSE;
}

// 0x801692C4
bool32 wpSamus_Bomb_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    ip->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    if (ip->ground_or_air == GA_Air)
    {
        wpMain_ReflectorSetLR(ip, fp);
        wpMain_VelSetLR(weapon_gobj);
    }
    else ip->lr = fp->lr;
    
    return FALSE;
}

// 0x80169328
GObj* wpSamus_Bomb_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpSamus_Bomb_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->lifetime = WPSAMUSBOMB_WAIT_LIFETIME;

    ip->weapon_vars.samus_bomb.bomb_blink_timer = WPSAMUSBOMB_WAIT_BLINK_TIMER_SLOW;

    ip->phys_info.vel_air.y = WPSAMUSBOMB_WAIT_VEL_Y;

    return weapon_gobj;
}
