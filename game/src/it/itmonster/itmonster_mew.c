#include <it/item.h>

bool32 func_ovl3_8017EBE0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    Vec3f pos = DObjGetStruct(item_gobj)->translate;

    if (ap->it_multi == 0)
    {
        return TRUE;
    }
    if (ap->item_vars.mew.esper_gfx_int == 0)
    {
        ap->item_vars.mew.esper_gfx_int = ITMEW_GFX_SPAWN_INT;

        func_ovl2_80102E90(&pos);
    }
    ap->item_vars.mew.esper_gfx_int--;

    ap->it_multi--;

    ap->phys_info.vel_air.y += ITMEW_FLY_ADD_VEL_Y;

    return FALSE;
}

void func_ovl3_8017EC84(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->it_multi = ITMEW_LIFETIME;

    if (lbRandom_GetIntRange(2) != 0)
    {
        ap->phys_info.vel_air.x = ITMEW_START_VEL_X;
    }
    else
    {
        ap->phys_info.vel_air.x = -ITMEW_START_VEL_X;
    }
    ap->phys_info.vel_air.y = ITMEW_START_VEL_Y;

    func_800269C0(0x89U);

    if (ap->it_kind == It_Kind_Mew)
    {
        func_800269C0(0x13BU);
    }
    efGenerator_Ripple_MakeEffect(&DObjGetStruct(item_gobj)->translate);

    ap->item_vars.mew.esper_gfx_int = 0;
}

extern itStatusDesc Article_Mew_Status[];

void func_ovl3_8017ED20(GObj *item_gobj)
{
    func_ovl3_8017EC84(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Mew_Status, 0);
}

bool32 jtgt_ovl3_8017ED54(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_8017ED20(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017EDA4(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_0000BCC0;
extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Mew_Data;

GObj* jtgt_ovl3_8017EDE4(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Mew_Data, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y; // Starting to think this is a macro

        joint->translate.y -= ap->attributes->objectcoll_bottom;
            
        // This ptr stuff is likely also a macro
        func_8000BD1C(joint, itGetPData(ap, D_NF_0000BCC0, D_NF_00013624), 0.0F); // Linker thing
    }
    return item_gobj;
}