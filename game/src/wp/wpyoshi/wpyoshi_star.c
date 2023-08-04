#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_80130FF0;

wpCreateDesc wpYoshi_Star_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_YoshiStar,                      // Weapon Kind
    &D_ovl2_80130FF0,                       // Pointer to character's loaded files?
    0x40,                                   // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpYoshi_Star_ProcUpdate,                // Proc Update
    wpYoshi_Star_ProcMap,                   // Proc Map
    wpYoshi_Star_ProcHit,                   // Proc Hit
    wpYoshi_Star_ProcShield,                // Proc Shield
    wpYoshi_Star_ProcHop,                   // Proc Hop
    wpYoshi_Star_ProcHit,                   // Proc Set-Off
    wpYoshi_Star_ProcReflector,             // Proc Reflector
    wpYoshi_Star_ProcShield                 // Proc Absorb
};

// 0x8016C540
f32 wpYoshi_Star_GetScale(wpStruct *wp)
{
    f32 scale = (wp->lifetime * WPYOSHISTAR_LIFETIME_SCALE_MUL) + WPYOSHISTAR_LIFETIME_SCALE_ADD;

    if (scale > 1.0F)
    {
        scale = 1.0F;
    }
    return scale;
}

// 0x8016C588
bool32 wpYoshi_Star_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    f32 scale;
    f32 vel_sqrt;
    f32 vel_mul;

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    scale = wpYoshi_Star_GetScale(wp);

    DObjGetStruct(weapon_gobj)->scale.x = scale;
    DObjGetStruct(weapon_gobj)->scale.y = scale;

    DObjGetStruct(weapon_gobj)->rotate.z += (WPYOSHISTAR_ROTATE_SPEED * wp->lr);

    vel_sqrt = sqrtf(SQUARE(wp->phys_info.vel_air.x) + SQUARE(wp->phys_info.vel_air.y));

    if (vel_sqrt > 0.0F)
    {
        if (vel_sqrt < WPYOSHISTAR_VEL_CLAMP)
        {
            vel_mul = 0.0F;
        }
        else
        {
            vel_mul = vel_sqrt - WPYOSHISTAR_VEL_CLAMP;
        }
        wp->phys_info.vel_air.x = (wp->phys_info.vel_air.x * vel_mul) / vel_sqrt;
        wp->phys_info.vel_air.y = (wp->phys_info.vel_air.y * vel_mul) / vel_sqrt;
    }
    return FALSE;
}

// 0x8016C6A0
bool32 wpYoshi_Star_ProcMap(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x8016C6AC
bool32 wpYoshi_Star_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    if (wp->hit_normal_damage != 0)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8016C6F0
bool32 wpYoshi_Star_ProcShield(GObj *weapon_gobj)
{
    efParticle_SparkleWhite_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

// 0x8016C718
bool32 wpYoshi_Star_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = RIGHT;
    }
    else wp->lr = LEFT;

    return FALSE;
}

// 0x8016C7B0
bool32 wpYoshi_Star_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPYOSHISTAR_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);

    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;
    DObjGetStruct(weapon_gobj)->scale.y = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8016C834
GObj* wpYoshi_Star_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, s32 lr)
{
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f offset = *pos;

    offset.y += WPYOSHISTAR_OFF_Y;

    if (lr == RIGHT)
    {
        offset.x += WPYOSHISTAR_OFF_X;
    }
    else
    {
        offset.x -= WPYOSHISTAR_OFF_X;
    }
    weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpYoshi_Star_WeaponDesc, &offset, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = lr;

    wp->lifetime = WPYOSHISTAR_LIFETIME;

    wp->phys_info.vel_air.x = (cosf(WPYOSHISTAR_ANGLE) * (WPYOSHISTAR_VEL * wp->lr));
    wp->phys_info.vel_air.y = (__sinf(WPYOSHISTAR_ANGLE) * WPYOSHISTAR_VEL);

    return; // Undefined behavior here, no return value
}

// 0x8016C954
GObj* wpYoshi_Star_MakeWeaponLR(GObj *fighter_gobj, Vec3f *pos)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    wpYoshi_Star_MakeWeapon(fighter_gobj, pos, fp->lr);
    wpYoshi_Star_MakeWeapon(fighter_gobj, pos, -fp->lr);

    return NULL;
}