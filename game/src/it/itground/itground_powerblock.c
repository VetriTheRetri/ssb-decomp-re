#include <it/item.h>

enum itPowerBlockStatus
{
    itStatus_PowerBlock_NWait,
    itStatus_PowerBlock_EnumMax
};

extern intptr_t D_NF_000011F8;
extern intptr_t D_NF_00001288;
extern void *D_ovl2_801313F4;

itCreateDesc itGround_PowerBlock_ItemDesc =
{
    It_Kind_PowerBlock,                     // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0xD8,                                   // Offset of item attributes in file?
    0x44,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itPowerBlock_SDefault_ProcUpdate,       // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itGround_PowerBlock_StatusDesc[itStatus_PowerBlock_EnumMax] = 
{
    // Status 0 (Neutral Wait)
    {
        NULL,                               // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPowerBlock_NWait_ProcDamage       // Proc Damage
    },
};

// 0x8017C090
bool32 itPowerBlock_SDefault_ProcUpdate(GObj *item_gobj)
{
    if (DObjGetStruct(item_gobj)->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        itPowerBlock_NWait_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017C0D4
void itPowerBlock_NWait_SetStatus(GObj *item_gobj)
{
    itStruct *ip;

    itMain_SetItemStatus(item_gobj, itGround_PowerBlock_StatusDesc, itStatus_PowerBlock_NWait);

    ip = itGetStruct(item_gobj), ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x8017C110
bool32 itPowerBlock_NDamage_ProcUpdate(GObj *item_gobj)
{
    if (DObjGetStruct(item_gobj)->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        func_ovl2_8010986C();

        return TRUE;
    }
    else return FALSE;
}

// 0x8017C15C
bool32 itPowerBlock_NWait_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->proc_update = itPowerBlock_NDamage_ProcUpdate;
    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    func_8000BD1C(DObjGetStruct(item_gobj), itGetPData(ip, D_NF_000011F8, D_NF_00001288), 0.0F); // Linker thing
    func_8000DF34(item_gobj);
    func_800269C0(gmSound_SFX_InishiePowerBlock);
    efParticle_Quake_MakeEffect(3);
    func_ovl2_80109B4C();

    return FALSE;
}

// 0x8017C1E0
GObj* itGround_PowerBlock_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_PowerBlock_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_hurt.interact_mask = GMHITCOLLISION_MASK_FIGHTER;
    }
    return item_gobj;
}
