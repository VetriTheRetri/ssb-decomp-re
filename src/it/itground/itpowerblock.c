#include <it/item.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITPowerBlockItemAttributes;// 0x000000D8
extern intptr_t lITPowerBlockDataStart;     // 0x000011F8
extern intptr_t lITPowerBlockAnimJoint;     // 0x00001288

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITPowerBlockItemDesc =
{
    nITKindPowerBlock,                     // Item Kind
    &gGRCommonStruct.inishie.item_head,       // Pointer to item file data?
    &lITPowerBlockItemAttributes,           // Offset of item attributes in file?

    // DObj transformation struct
    {
        0x44,                               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,     // Hitbox Update State
    itPowerBlockCommonProcUpdate,         // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITPowerBlockStatusDescs[/* */] =
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
        itPowerBlockNWaitProcDamage         // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itPowerBlockStatus
{
    itStatus_PowerBlock_NWait,
    itStatus_PowerBlock_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017C090
sb32 itPowerBlockCommonProcUpdate(GObj *item_gobj)
{
    if (DObjGetStruct(item_gobj)->anim_remain == AOBJ_FRAME_NULL)
    {
        itPowerBlockNWaitSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017C0D4
void itPowerBlockNWaitSetStatus(GObj *item_gobj)
{
    itStruct *ip;

    itMainSetItemStatus(item_gobj, dITPowerBlockStatusDescs, itStatus_PowerBlock_NWait);

    ip = itGetStruct(item_gobj), ip->item_hurt.hitstatus = nGMHitStatusNormal;
}

// 0x8017C110
sb32 itPowerBlockNDamageProcUpdate(GObj *item_gobj)
{
    if (DObjGetStruct(item_gobj)->anim_remain == AOBJ_FRAME_NULL)
    {
        grInishiePowerBlockSetWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x8017C15C
sb32 itPowerBlockNWaitProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->proc_update = itPowerBlockNDamageProcUpdate;
    ip->item_hurt.hitstatus = nGMHitStatusNone;

    omAddDObjAnimAll(DObjGetStruct(item_gobj), itGetPData(ip, lITPowerBlockDataStart, lITPowerBlockAnimJoint), 0.0F); // Linker thing
    func_8000DF34_EB34(item_gobj);
    func_800269C0_275C0(nGMSoundFGMInishiePowerBlock);
    efManagerQuakeMakeEffect(3);
    grInishiePowerBlockSetDamage();

    return FALSE;
}

// 0x8017C1E0
GObj* itPowerBlockMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITPowerBlockItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_hurt.interact_mask = GMHITCOLLISION_MASK_FIGHTER;
    }
    return item_gobj;
}
