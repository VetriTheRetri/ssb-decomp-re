#include <wp/weapon.h>
#include <ft/fighter.h>

#include <sys/obj_renderer.h>
#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>

extern void *D_ovl2_80130FF0;

wpCreateDesc wpYoshi_EggThrow_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_EggThrow,                       // Weapon Kind
    &D_ovl2_80130FF0,                       // Pointer to character's loaded files?
    0xC,                                    // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0x2E,                                   // ???
    0,                                      // ???
    wpYoshi_EggThrow_ProcUpdate,            // Proc Update
    wpYoshi_EggThrow_ProcMap,               // Proc Map
    wpYoshi_EggThrow_ProcHit,               // Proc Hit
    wpYoshi_EggThrow_ProcHit,               // Proc Shield
    wpYoshi_EggThrow_ProcHop,               // Proc Hop
    wpYoshi_EggThrow_ProcHit,               // Proc Set-Off
    wpYoshi_EggThrow_ProcReflector,         // Proc Reflector
    NULL                                    // Proc Absorb
};

// 0x8016BF50
bool32 wpYoshi_EggThrow_ProcDead(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.egg_throw.is_throw == FALSE)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x8016BF74
bool32 wpYoshi_EggExplode_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8016BFA0
void wpYoshi_EggHit_InitWeaponVars(GObj *weapon_gobj) // Egg Throw explodes from landing successfully
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPEGGTHROW_EXPLODE_LIFETIME;

    wp->weapon_hit.can_hop = FALSE;
    wp->weapon_hit.can_reflect = FALSE;

    wp->phys_info.vel_air.z = 0.0F;
    wp->phys_info.vel_air.y = 0.0F;
    wp->phys_info.vel_air.x = 0.0F;

    wp->weapon_hit.size = WPEGGTHROW_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wp->proc_update = wpYoshi_EggExplode_ProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x8016C00C
void wpYoshi_EggExpire_InitWeaponVars(GObj *weapon_gobj) // Egg Throw explodes from expiring 
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPEGGTHROW_EXPLODE_LIFETIME;

    wp->weapon_hit.can_reflect = FALSE;
    wp->weapon_hit.can_shield = FALSE;

    wp->phys_info.vel_air.z = 0.0F;
    wp->phys_info.vel_air.y = 0.0F;
    wp->phys_info.vel_air.x = 0.0F;

    wp->weapon_hit.size = WPEGGTHROW_EXPLODE_SIZE;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wp->proc_update = wpYoshi_EggExplode_ProcUpdate;
    wp->proc_map = NULL;
    wp->proc_hit = NULL;
    wp->proc_shield = NULL;
    wp->proc_hop = NULL;
    wp->proc_setoff = NULL;
    wp->proc_reflector = NULL;
}

// 0x8016C07C
void wpYoshi_EggThrow_InitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 angle = ABS(wp->weapon_vars.egg_throw.stick_range) / WPEGGTHROW_TRAJECTORY_DIV;

    if (angle > 1.0F)
    {
        angle = 1.0F;
    }

    angle *= WPEGGTHROW_ANGLE_MUL;

    if (angle < WPEGGTHROW_ANGLE_CLAMP)
    {
        angle = 0.0F;
    }

    angle *= ((wp->weapon_vars.egg_throw.stick_range < 0) ? LEFT : RIGHT);

    angle = (wp->weapon_vars.egg_throw.lr > 0) ? (WPEGGTHROW_TRAJECTORY_SUB_RIGHT - angle) : (WPEGGTHROW_TRAJECTORY_SUB_LEFT - angle);

    wp->phys_info.vel_air.y = __sinf(angle) * ((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_VEL_FORCE_MUL) + WPEGGTHROW_VEL_ADD);
    wp->phys_info.vel_air.x = cosf(angle) * ((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_VEL_FORCE_MUL) + WPEGGTHROW_VEL_ADD);

    wp->weapon_vars.egg_throw.angle = F_DEG_TO_RAD((wp->weapon_vars.egg_throw.throw_force * WPEGGTHROW_ANGLE_FORCE_MUL) + WPEGGTHROW_ANGLE_ADD);

    DObjGetStruct(weapon_gobj)->translate.z = 0.0F;

    wp->weapon_hit.update_state = gmHitCollision_UpdateState_New;

    wpManager_UpdateHitPositions(weapon_gobj);
}

// 0x8016C218
bool32 wpYoshi_EggThrow_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wp->weapon_vars.egg_throw.is_spin != FALSE)
    {
        if (wpMain_DecLifeCheckExpire(wp) != FALSE)
        {
            func_800269C0(0xFC);

            func_ovl2_80103A88(&DObjGetStruct(weapon_gobj)->translate);
            func_ovl2_801041A0(&DObjGetStruct(weapon_gobj)->translate);

            wpYoshi_EggExpire_InitWeaponVars(weapon_gobj);

            return FALSE;
        }
        else
        {
            DObjGetStruct(weapon_gobj)->rotate.z += wp->weapon_vars.egg_throw.angle;
            wpMain_UpdateGravityClampTVel(wp, WPEGGTHROW_GRAVITY, WPEGGTHROW_T_VEL);

            return FALSE;
        }
    }
    else if (wp->weapon_vars.egg_throw.is_throw != FALSE)
    {
        wp->weapon_vars.egg_throw.is_spin = TRUE;

        wpYoshi_EggThrow_InitWeaponVars(weapon_gobj);
    }
    return FALSE;
}

// 0x8016C2E0
bool32 wpYoshi_EggThrow_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if ((wp->weapon_vars.egg_throw.is_spin != FALSE) && (func_ovl3_80167C04(weapon_gobj) != FALSE))
    {
        efParticle_Quake_MakeEffect(2);

        func_800269C0(0xFC);

        func_ovl2_80103A88(&DObjGetStruct(weapon_gobj)->translate);
        func_ovl2_801041A0(&DObjGetStruct(weapon_gobj)->translate);

        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        wpYoshi_EggHit_InitWeaponVars(weapon_gobj);
    }
    return FALSE;
}

// 0x8016C374
bool32 wpYoshi_EggThrow_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(0xFC);

    func_ovl2_80103A88(&DObjGetStruct(weapon_gobj)->translate);
    func_ovl2_801041A0(&DObjGetStruct(weapon_gobj)->translate);

    wpYoshi_EggHit_InitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x8016C3B4
bool32 wpYoshi_EggThrow_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    wpMain_VelSetModelYaw(weapon_gobj);

    return FALSE;
}

// 0x8016C404
bool32 wpYoshi_EggThrow_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPEGGTHROW_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);
    wpMain_VelSetModelYaw(weapon_gobj);

    return FALSE;
}

// 0x8016C444
void wpYoshi_EggThrow_ProcRender(GObj *weapon_gobj)
{
    gDPPipeSync(gpDisplayListHead[1]++);

    gDPSetEnvColor(gpDisplayListHead[1]++, 0, 0, 0, 0);

    func_ovl3_801675D0(weapon_gobj);
}

// 0x8016C498
GObj* wpYoshi_EggThrow_MakeWeapon(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpYoshi_EggThrow_WeaponDesc, pos, WEAPON_MASK_SPAWN_FIGHTER);
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }

    wp = wpGetStruct(weapon_gobj);

    weapon_gobj->renderer = wpYoshi_EggThrow_ProcRender;

    wp->weapon_vars.egg_throw.is_throw = FALSE;

    wp->proc_dead = wpYoshi_EggThrow_ProcDead;

    wp->lifetime = WPEGGTHROW_LIFETIME;

    wp->weapon_hit.update_state = gmHitCollision_UpdateState_Disable;

    wp->is_camera_follow = TRUE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = 0.0F;

    wp->weapon_vars.egg_throw.is_spin = wp->weapon_vars.egg_throw.is_throw;
    wp->weapon_vars.egg_throw.lr = fp->lr;

    return weapon_gobj;
}