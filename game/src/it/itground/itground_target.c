#include <it/item.h>

// Part of Overlay 6; the only item that shouldn't really be here, but I'm doing it anyway because it makes sense for itfunctions.h

extern void *gBonusGameFileData[/* */];

// 0x8018F130
itCreateDesc itGround_Target_ItemDesc =
{
    It_Kind_GBumper,                        // Item Kind
    gBonusGameFileData,                     // Pointer to item file data?
    0,                                      // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    NULL,                                   // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itTarget_SDefault_ProcDamage            // Proc Damage
};

// 0x8018EE10
sb32 itTarget_SDefault_ProcDamage(GObj *item_gobj)
{
    efParticle_ShieldBreak_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);
    efParticle_FireGrind_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    func_800269C0(alSound_SFX_Bonus1TargetBreak);

    scBonusGame_UpdateBonus1TargetCount();

    return TRUE;
}

// 0x8018EE5C
GObj* itGround_Target_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itGround_Target_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->ground_or_air = GA_Ground;
        ip->coll_data.ground_line_id = -1;
    }
    return item_gobj;
}
