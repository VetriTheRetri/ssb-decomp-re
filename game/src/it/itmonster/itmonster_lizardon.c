#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

bool32 jtgt_ovl3_8017F470(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

extern itStatusDesc Article_Lizardon_Status[];

bool32 jtgt_ovl3_8017F49C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMap_CheckMapCollideLanding(item_gobj, 0.2F, 1.0F, func_ovl3_8017F8E4);

    if (ap->coll_data.coll_mask & MPCOLL_MASK_GROUND)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

bool32 func_ovl3_8017F49C(GObj *item_gobj) // Unused
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->is_allow_pickup = FALSE;

    itMap_SetAir(ap);
    itMain_SetItemStatus(item_gobj, Article_Lizardon_Status, 0);
}

bool32 jtgt_ovl3_8017F53C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITLIZARDON_GRAVITY, ITLIZARDON_T_VEL);

    return FALSE;
}

bool32 jtgt_ovl3_8017F568(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_ovl3_80173680(item_gobj);

    if (ap->coll_data.coll_mask & MPCOLL_MASK_GROUND)
    {
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_8017F8E4(item_gobj);
        func_ovl3_8017F810(item_gobj);
    }
    return FALSE;
}

void func_ovl3_8017F5C4(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, Article_Lizardon_Status, 1);
}

bool32 jtgt_ovl3_8017F5EC(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos = joint->translate;

    if (ap->it_kind == It_Kind_Lizardon)
    {
        pos.y += ITLIZARDON_LIZARDON_FLAME_OFF_Y;

        pos.x += (ITLIZARDON_LIZARDON_FLAME_OFF_X * ap->lr);
    }
    else
    {
        pos.x += (ITLIZARDON_OTHER_FLAME_OFF_X * ap->lr);
    }
    if (ap->item_vars.lizardon.flame_spawn_wait == 0)
    {
        func_ovl3_8017FD2C(item_gobj, &pos, ap->lr);

        ap->item_vars.lizardon.flame_spawn_wait = ITLIZARDON_FLAME_SPAWN_WAIT;
    }
    ap->item_vars.lizardon.flame_spawn_wait--;

    if (ap->it_multi == 0)
    {
        return TRUE;
    }
    if (ap->item_vars.lizardon.turn_wait == 0)
    {
        ap->item_vars.lizardon.turn_wait = ITLIZARDON_TURN_WAIT;

        ap->lr = -ap->lr;

        pos = joint->translate;

        pos.y += ap->attributes->objectcoll_bottom;

        pos.x += (ap->attributes->objectcoll_width + ITLIZARDON_DUST_GFX_OFF_X) * -ap->lr;

        efParticle_DustHeavy_MakeEffect(&pos, -ap->lr);

        if (ap->it_kind == It_Kind_Pippi)
        {
            joint->rotate.y += PI32;
        }
    }
    ap->item_vars.lizardon.turn_wait--;

    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017F7E8(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, func_ovl3_8017F5C4);

    return FALSE;
}

extern intptr_t D_NF_0000D5C0;
extern intptr_t D_NF_0000D658;
extern intptr_t D_NF_0000D688;

void func_ovl3_8017F810(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    s32 unused[2];
    void *s;
    Vec3f pos;


    ap->item_vars.lizardon.turn_wait = ITLIZARDON_TURN_WAIT;

    pos = joint->translate;

    ap->item_vars.lizardon.pos = pos;

    ap->item_vars.lizardon.flame_spawn_wait = 0;

    ap->lr = LEFT;

    if (ap->it_kind == It_Kind_Lizardon)
    {
        s = (void*) ((uintptr_t)ap->attributes->unk_0x0 - (intptr_t)&D_NF_0000D5C0); // Linker thing

        func_8000BD1C(joint, (uintptr_t)s + (intptr_t)&D_NF_0000D658, 0.0F); // Linker thing
        func_8000BD54(joint->mobj, (uintptr_t)s + (intptr_t)&D_NF_0000D688, 0.0F); // Linker thing
        func_8000DF34(item_gobj);
    }
}

void func_ovl3_8017F8E4(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, Article_Lizardon_Status, 2);
}

bool32 jtgt_ovl3_8017F90C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->it_multi = ITLIZARDON_LIFETIME;
        ap->phys_info.vel_air.y = 0.0F;

        if (ap->it_kind == It_Kind_Lizardon)
        {
            func_800269C0(0x13DU);
        }
        func_ovl3_8017F5C4(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017F98C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_0000D5C0;
extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Lizardon_Data;

GObj *jtgt_ovl3_8017F9CC(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Lizardon_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ap;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x1BU, 0U);
        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint, itGetPData(ap, D_NF_0000D5C0, D_NF_00013624), 0.0F);
    }
    return item_gobj;
}

bool32 jtgt_ovl3_8017FACC(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(ip) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

bool32 jtgt_ovl3_8017FAF8(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

bool32 jtgt_ovl3_8017FB3C(GObj *weapon_gobj)
{
    func_800269C0(gmSound_SFX_ExplodeS);
    efParticle_SparkWhiteLarge_MakeEffect(&DObjGetStruct(weapon_gobj)->translate);

    return FALSE;
}

extern s32 D_ovl3_8018D044;

bool32 jtgt_ovl3_8017FB74(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);
    Vec3f *translate;

    ip->lifetime = ITLIZARDON_FLAME_LIFETIME;

    wpMain_ReflectorSetLR(ip, fp);

    translate = &DObjGetStruct(weapon_gobj)->translate;

    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 2, translate->x, translate->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F);
    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 0, translate->x, translate->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F);

    return FALSE;
}

extern wpCreateDesc Item_Lizardon_Flame_Data;

GObj *func_ovl3_8017FC38(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &Item_Lizardon_Flame_Data, pos, WEAPON_MASK_SPAWN_ITEM);
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->phys_info.vel = *vel;

    ip->lifetime = ITLIZARDON_FLAME_LIFETIME;

    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 2, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F); // This needs to something in v0 to match
    func_ovl0_800CE8C0(D_ovl3_8018D044 | 8, 0, pos->x, pos->y, 0.0F, ip->phys_info.vel_air.x, ip->phys_info.vel_air.y, 0.0F);

    return weapon_gobj;
}

void func_ovl3_8017FD2C(GObj *item_gobj, Vec3f *pos, s32 lr)
{
    s32 unused;
    Vec3f vel;

    vel.x = cosf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY * lr;
    vel.y = __sinf(ITLIZARDON_FLAME_SPAWN_ANGLE) * ITLIZARDON_FLAME_VEL_XY;
    vel.z = 0.0F;

    func_ovl3_8017FC38(item_gobj, pos, &vel);

    func_800269C0(0x88U);
}