#include <it/item.h>
#include "ground.h"
#include <gm/gmmatch.h>

itCreateDesc itGround_Bumper_ItemDesc =
{
    It_Kind_GBumper,                        // Item Kind
    &gpItemFileData,                         // Pointer to item file data?
    0xCF0,                                  // Offset of item attributes in file?
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itGBumper_SDefault_ProcUpdate,          // Proc Update
    NULL,                                   // Proc Map
    itGBumper_SDefault_ProcHit,             // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8017D590
bool32 itGBumper_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (joint->mobj->anim_frame == 1.0F))
    {
        joint->mobj->anim_frame = 0;
    }
    else ip->item_vars.bumper.hit_anim_length--;
    
    if (ip->it_multi != 0)
    {
        joint->scale.x = joint->scale.y = ( 2.0F - ( (10 - ip->it_multi) * 0.1F ) );

        ip->it_multi--;
    }
    else joint->scale.x = joint->scale.y = 1;
    
    return FALSE;
}

// 0x8017D63C
bool32 itGBumper_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->scale.x = 2.0F;
    joint->scale.y = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    joint->mobj->anim_frame = 1.0F;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    return FALSE;
}

// 0x8017D67C
GObj* itGround_Bumper_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Bumper_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip;
        DObj *joint;

        itMain_ClearOwnerStats(item_gobj);

        ip = itGetStruct(item_gobj);
        joint = DObjGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;
        ip->item_hit.can_rehit_shield = TRUE;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;

        joint->mobj->anim_frame = 0;

        if (gpBattleState->gr_kind == Gr_Kind_Castle)
        {
            ip->item_hit.knockback_weight = ITBUMPER_CASTLE_KNOCKBACK;
            ip->item_hit.angle = ITBUMPER_CASTLE_ANGLE;
        }
    }
    return item_gobj;
}
