#include <it/item.h>
#include <wp/weapon.h>

bool32 func_ovl3_8017EEB0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        return TRUE;
    }
    if (ap->it_multi == ap->item_vars.nyars.coin_spawn_wait)
    {
        func_ovl3_8017F408(item_gobj, ap->item_vars.nyars.coin_rotate_step * ITNYARS_COIN_ANGLE_STEP);

        ap->item_vars.nyars.coin_rotate_step++;
        ap->item_vars.nyars.coin_spawn_wait = ap->it_multi - ITNYARS_COIN_SPAWN_WAIT;

        func_800269C0(0x8AU);
    }
    if (ap->item_vars.nyars.model_rotate_wait == 0)
    {
        joint->rotate.y += PI32;

        ap->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
    }
    ap->item_vars.nyars.model_rotate_wait--;

    ap->it_multi--;

    return FALSE;
}

void func_ovl3_8017EFA0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->it_multi = ITNYARS_LIFETIME;

    ap->item_vars.nyars.coin_spawn_wait = ap->it_multi - (ITNYARS_COIN_SPAWN_WAIT / 2);
    ap->item_vars.nyars.coin_rotate_step = 0;
    ap->item_vars.nyars.model_rotate_wait = ITNYARS_MODEL_ROTATE_WAIT;
}

extern itStatusDesc Article_Nyars_Status[];

void func_ovl3_8017EFC4(GObj *item_gobj)
{
    func_ovl3_8017EFA0(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Nyars_Status, 0);
}

bool32 jtgt_ovl3_8017EFF8(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->phys_info.vel_air.y = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;

        func_ovl3_8017EFC4(item_gobj);

    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017F04C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_0000C130;
extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Nyars_Data;

GObj *jtgt_ovl3_8017F08C(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Nyars_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ap;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint, itGetPData(ap, D_NF_0000C130, D_NF_00013624), 0.0F);
    }
    return item_gobj;
}

bool32 func_ovl3_8017F17C(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    if (ip->weapon_vars.coin.lifetime == 0)
    {
        return TRUE;
    }
    ip->weapon_vars.coin.lifetime--;

    return FALSE;
}

bool32 jtgt_ovl3_8017F1A4(GObj *weapon_gobj)
{
    efParticle_DamageCoin_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return TRUE;
}

bool32 jtgt_ovl3_8017F1CC(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    func_80019438(&ip->phys_info.vel, &ip->shield_collide_vec, ip->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(ip->phys_info.vel_air.y, ip->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    if (ip->phys_info.vel_air.x > 0.0F)
    {
        ip->lr = RIGHT;
    }
    else ip->lr = LEFT;

    return FALSE;
}

bool32 jtgt_ovl3_8017F274(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    wpMain_ReflectorSetLR(ip, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(ip->phys_info.vel_air.y, ip->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    ip->lr = -ip->lr;

    return FALSE;
}

extern wpCreateDesc D_ovl3_8018ACF4;

GObj *func_ovl3_8017F2E4(GObj *item_gobj, u8 coin_number, f32 rotate_angle)
{
    wpStruct *ip;
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &D_ovl3_8018ACF4, &DObjGetStruct(item_gobj)->translate, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->weapon_vars.coin.lifetime = ITNYARS_COIN_LIFETIME;

    ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.x = ITNYARS_COIN_VEL_X;

    vec3_get_euler_rotation(&ip->phys_info.vel, 4, (((coin_number * ITNYARS_COIN_ANGLE_DIFF) + rotate_angle) * PI32) / 180.0F);

    joint = DObjGetStruct(weapon_gobj);

    func_80008CC0(joint, 0x1CU, 0U);
    func_80008CC0(joint, 0x46U, 0U);

    joint->translate = DObjGetStruct(item_gobj)->translate;

    return weapon_gobj;
}

void func_ovl3_8017F408(GObj *item_gobj, f32 angle)
{
    s32 coin_count;

    for (coin_count = 0; coin_count < ITNYARS_COIN_SPAWN_MAX; coin_count++)
    {
        func_ovl3_8017F2E4(item_gobj, coin_count, angle);
    }
}