#include <it/item.h>

bool32 jtgt_ovl3_8017E7A0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_T_VEL);

    return FALSE;
}

bool32 jtgt_ovl3_8017E7CC(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_ovl3_80173680(item_gobj);

    if (ap->coll_data.coll_mask & MPCOLL_MASK_GROUND)
    {
        ap->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        func_ovl3_8017EA14(item_gobj);

        func_800269C0(0x8DU);
    }
    return FALSE;
}

extern itStatusDesc Article_Tosakinto_Status[];

void func_ovl3_8017E828(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->it_multi = ITTOSAKINTO_LIFETIME;

    if (ap->it_kind == It_Kind_Tosakinto)
    {
        func_800269C0(0x143U);
    }
    itMain_SetItemStatus(item_gobj, Article_Tosakinto_Status, 0);
}

bool32 jtgt_ovl3_8017E880(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_T_VEL);

    if (ap->it_multi == 0)
    {
        return TRUE;
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017E8CC(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    func_ovl3_80173680(item_gobj);

    if (ap->coll_data.coll_mask & MPCOLL_MASK_GROUND)
    {
        ap->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        if (lbRandom_GetIntRange(2) != 0)
        {
            ap->phys_info.vel_air.x = -ap->phys_info.vel_air.x;
        }
        func_800269C0(0x8DU);
    }
    return FALSE;
}

extern intptr_t D_NF_0000B708;
extern intptr_t D_NF_0000B7CC;
extern intptr_t D_NF_0000B90C;

void func_ovl3_8017E93C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *s;
    s32 unused[2];

    ap->item_vars.tosakinto.pos = joint->translate;

    ap->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;
    ap->phys_info.vel_air.x = ITTOSAKINTO_FLAP_VEL_X;

    if (ap->it_kind == It_Kind_Tosakinto)
    {
        s = itGetPData(ap, D_NF_0000B708, D_NF_0000B7CC); // Linker thing

        func_8000BD1C(joint->next, s, 0.0F);

        s = itGetPData(ap, D_NF_0000B708, D_NF_0000B90C); // Linker thing

        func_8000BD54(joint->next->mobj, s, 0.0F);

        func_8000DF34(item_gobj);
    }
}

void func_ovl3_8017EA14(GObj *item_gobj)
{
    func_ovl3_8017E93C(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Tosakinto_Status, 1);
}

bool32 jtgt_ovl3_8017EA48(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_8017E828(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017EA98(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Tosakinto_Data;

GObj* jtgt_ovl3_8017EAD8(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Tosakinto_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ap;

    if (item_gobj != NULL)
    {
        itMain_ClearOwnerStats(item_gobj);

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

        func_8000BD1C(joint, itGetPData(ap, D_NF_0000B708, D_NF_00013624), 0.0F); // Linker thing
    }
    return item_gobj;
}