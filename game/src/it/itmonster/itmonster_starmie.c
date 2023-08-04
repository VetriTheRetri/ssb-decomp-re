#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

void func_ovl3_80181C20(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ap->item_vars.starmie.swift_spawn_wait <= 0)
    {
        Vec3f pos = joint->translate;

        if (ap->it_kind == It_Kind_Starmie)
        {
            pos.x += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_X * ap->lr;
            pos.y += ITSTARMIE_STARMIE_SWIFT_SPAWN_OFF_Y;
        }
        else pos.x += ITSTARMIE_OTHER_SWIFT_SPAWN_OFF_X * ap->lr;

        func_ovl3_80182608(item_gobj, &pos);

        func_800269C0(0x8CU);

        ap->item_vars.starmie.swift_spawn_wait = (lbRandom_GetIntRange(ITSTARMIE_SWIFT_SPAWN_WAIT_RANDOM) + ITSTARMIE_SWIFT_SPAWN_WAIT_CONST);

        ap->phys_info.vel_air.x = -ap->lr * ITSTARMIE_PUSH_VEL_X;
    }
}

bool32 func_ovl3_80181D24(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        return TRUE;
    }
    func_ovl3_80181C20(item_gobj);

    ap->item_vars.starmie.swift_spawn_wait--;

    ap->phys_info.vel_air.x += ap->item_vars.starmie.add_vel_x;

    ap->it_multi--;

    return FALSE;
}

void func_ovl3_80181D8C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    s32 lr_bak = ap->lr;

    ap->lr = (ap->item_vars.starmie.victim_pos.x < joint->translate.x) ? LEFT : RIGHT;

    if (ap->lr != lr_bak)
    {
        joint->rotate.y += PI32;
    }
    ap->it_multi = ITSTARMIE_LIFETIME;

    ap->item_vars.starmie.swift_spawn_wait = 0;
    ap->item_vars.starmie.add_vel_x = ap->lr * ITSTARMIE_ADD_VEL_X;
}

extern itStatusDesc Article_Starmie_Status[];

void func_ovl3_80181E0C(GObj *item_gobj)
{
    func_ovl3_80181D8C(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Starmie_Status, 1);
}

bool32 func_ovl3_80181E40(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ap->lr == RIGHT) && (ap->item_vars.starmie.target_pos.x <= joint->translate.x))
    {
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_80181E0C(item_gobj);
    }
    if ((ap->lr == LEFT) && (joint->translate.x <= ap->item_vars.starmie.target_pos.x))
    {
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_80181E0C(item_gobj);
    }
    return FALSE;
}

extern intptr_t D_NF_000112A0;
extern intptr_t D_NF_00011338;

void func_ovl3_80181EF4(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *aj = DObjGetStruct(item_gobj);
    DObj *fj = DObjGetStruct(fighter_gobj);
    Vec3f dist;
    Vec3f target_pos;
    Vec3f *victim_pos;

    target_pos = fj->translate;

    dist.x = fj->translate.x - aj->translate.x;

    target_pos.y += ITSTARMIE_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    target_pos.x -= (fp->coll_data.object_coll.width + ITSTARMIE_TARGET_POS_OFF_X) * ((dist.x < 0.0F) ? LEFT : RIGHT);

    victim_pos = &fj->translate;

    vec3f_sub(&dist, &target_pos, &aj->translate);

    ap->phys_info.vel_air.z = 0.0F;
    ap->phys_info.vel_air.y = 0.0F;
    ap->phys_info.vel_air.x = ITSTARMIE_FOLLOW_VEL_X;

    vec3_get_euler_rotation(&ap->phys_info.vel, 4, atan2f(dist.y, dist.x));

    ap->item_vars.starmie.target_pos = target_pos;

    ap->item_vars.starmie.victim_pos = *victim_pos;

    ap->lr = (dist.x < 0.0F) ? LEFT : RIGHT;

    if (ap->lr == RIGHT)
    {
        aj->rotate.y = PI32;
    }
    if (ap->it_kind == It_Kind_Starmie)
    {
        func_8000BD54(aj->mobj, itGetPData(ap, D_NF_000112A0, D_NF_00011338), 0); // Linker thing

        func_8000DF34(item_gobj);
    }
}

void func_ovl3_801820CC(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    itStruct *ap = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[2];
    DObj *joint = DObjGetStruct(item_gobj);
    f32 square_xy;
    f32 dist_x;
    f32 dist_xy;
    Vec3f dist;
    s32 ft_count = 0;

    if (fighter_gobj != NULL)
    {
        do
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            if ((fighter_gobj != ap->owner_gobj) && (fp->team != ap->team))
            {
                vec3f_sub(&dist, &DObjGetStruct(fighter_gobj)->translate, &joint->translate);

                if (ft_count == 0)
                {
                    dist_xy = SQUARE(dist.x) + SQUARE(dist.y);
                }
                ft_count++;

                square_xy = SQUARE(dist.x) + SQUARE(dist.y);

                if (square_xy <= dist_xy)
                {
                    dist_xy = square_xy;

                    victim_gobj = fighter_gobj;
                }
            }
            fighter_gobj = fighter_gobj->group_gobj_next;
        } 
        while (fighter_gobj != NULL);
    }
    func_ovl3_80181EF4(item_gobj, victim_gobj);

    if (ap->it_kind == It_Kind_Starmie)
    {
        func_800269C0(0x142U);
    }
}

void func_ovl3_801821E8(GObj *item_gobj)
{
    func_ovl3_801820CC(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Starmie_Status, 0);
}

bool32 jtgt_ovl3_8018221C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->phys_info.vel_air.y = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;

        func_ovl3_801821E8(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_80182270(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Starmie_Data;

GObj* jtgt_ovl3_801822B0(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Starmie_Data, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint, itGetPData(ap, D_NF_000112A0, D_NF_00013624), 0.0F); // Linker thing

        om_g_move_obj_dl_head(item_gobj, 0x12, item_gobj->room_order);
    }
    return item_gobj;
}

bool32 func_ovl3_801823B4(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.x; // Bruh

    if (wpMain_DecLifeCheckExpire(ip) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

bool32 jtgt_ovl3_801823E8(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    func_ovl2_80102070(&DObjGetStruct(weapon_gobj)->translate, ip->lr);

    return TRUE;
}

bool32 jtgt_ovl3_80182418(GObj *weapon_gobj)
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

bool32 jtgt_ovl3_801824C0(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    wpMain_ReflectorSetLR(ip, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(ip->phys_info.vel_air.y, ip->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    ip->lr = -ip->lr;

    return FALSE;
}

extern wpCreateDesc Item_Swift_Data;

GObj* func_ovl3_80182530(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ap = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &Item_Swift_Data, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    s32 unused;
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->lr = ap->lr;

    ip->phys_info.vel_air.x = ip->lr * ITSTARMIE_SWIFT_VEL_X;

    joint = DObjGetStruct(weapon_gobj);

    joint->translate = *pos;

    efParticle_SparkleWhiteScale_MakeEffect(&joint->translate, 1.0F);

    ip->lifetime = ITSTARMIE_SWIFT_LIFETIME;

    if (ip->lr == RIGHT)
    {
        joint->rotate.y = PI32;
    }
    return weapon_gobj;
}

void func_ovl3_80182608(GObj *item_gobj, Vec3f *pos)
{
    func_ovl3_80182530(item_gobj, pos);
}
