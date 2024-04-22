#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lItGBumperItemAttributes;   // 0x00000CF0

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dItGBumperItemDesc =
{
    It_Kind_GBumper,                        // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    &lItGBumperItemAttributes,              // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyRSca,      // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itGBumperSDefaultProcUpdate,            // Proc Update
    NULL,                                   // Proc Map
    itGBumperSDefaultProcHit,               // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017D590
sb32 itGBumperSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (dobj->mobj->image_frame == 1.0F))
    {
        dobj->mobj->image_frame = 0;
    }
    else ip->item_vars.bumper.hit_anim_length--;
    
    if (ip->it_multi != 0)
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = ( 2.0F - ( (10 - ip->it_multi) * 0.1F ) );

        ip->it_multi--;
    }
    else dobj->scale.vec.f.x = dobj->scale.vec.f.y = 1;
    
    return FALSE;
}

// 0x8017D63C
sb32 itGBumperSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->scale.vec.f.x = 2.0F;
    dobj->scale.vec.f.y = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    dobj->mobj->image_frame = 1.0F;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    return FALSE;
}

// 0x8017D67C
GObj* itGBumperMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dItGBumperItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip;
        DObj *dobj;

        itMainClearOwnerStats(item_gobj);

        ip = itGetStruct(item_gobj);
        dobj = DObjGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;
        ip->item_hit.can_rehit_shield = TRUE;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;

        dobj->mobj->image_frame = 0;

        if (gBattleState->gr_kind == Gr_Kind_Castle)
        {
            ip->item_hit.knockback_weight = ITBUMPER_CASTLE_KNOCKBACK;
            ip->item_hit.angle = ITBUMPER_CASTLE_ANGLE;
        }
    }
    return item_gobj;
}
