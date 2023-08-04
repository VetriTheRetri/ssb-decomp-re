#include <it/item.h>
#include <ft/fighter.h>

enum itNBumperStatus
{
    itStatus_NBumper_GWait,                 // Ground neutral
    itStatus_NBumper_AFall,                 // Airborne neutral
    itStatus_NBumper_FHold,                 // Fighter hold
    itStatus_NBumper_FThrow,                // Fighter throw
    itStatus_NBumper_FDrop,                 // Fighter drop
    itStatus_NBumper_GWaitHit,              // Ground active
    itStatus_NBumper_AHit,                  // Airborne hit
    itStatus_NBumper_GDisappear,            // Ground despawn
    itStatus_NBumper_EnumMax
};

itCreateDesc itCommon_NBumper_ItemDesc =
{
    It_Kind_NBumper,                        // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x69C,                                  // Offset of item attributes in file?
    0x12,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itNBumper_AFall_ProcUpdate,             // Proc Update
    itNBumper_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_NBumper_StatusDesc[itStatus_NBumper_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itNBumper_GWait_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itNBumper_AFall_ProcUpdate,         // Proc Update
        itNBumper_AFall_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Fighter Hold)
    {
        NULL,                               // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 3 (Fighter Throw)
    {
        itNBumper_FThrow_ProcUpdate,        // Proc Update
        itNBumper_FThrow_ProcMap,           // Proc Map
        itNBumper_FThrow_ProcHit,           // Proc Hit
        itNBumper_FThrow_ProcShield,        // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumper_FThrow_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itNBumper_FThrow_ProcUpdate,        // Proc Update
        itNBumper_FThrow_ProcMap,           // Proc Map
        itNBumper_FThrow_ProcHit,           // Proc Hit
        itNBumper_FThrow_ProcShield,        // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumper_FThrow_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Active Wait)
    {
        itNBumper_GWaitHit_ProcUpdate,      // Proc Update
        itNBumper_GWaitHit_ProcMap,         // Proc Map
        itNBumper_GWaitHit_ProcHit,         // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumper_GWaitHit_ProcReflector,   // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Airborne after Ground Active Wait)
    {
        itNBumper_AHit_ProcUpdate,          // Proc Update
        itNBumper_FThrow_ProcUpdate,        // Proc Map
        itNBumper_FThrow_ProcHit,           // Proc Hit
        itNBumper_FThrow_ProcShield,        // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        NULL,                               // Proc Set-Off
        itNBumper_FThrow_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 7 (Despawn)
    {
        itNBumper_GDisappear_ProcUpdate,    // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8017B430
bool32 itNBumper_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_T_VEL);

    if (ip->it_multi != 0)
    {
        joint->scale.x = joint->scale.y = joint->scale.z = (2.0F - (10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else joint->scale.x = joint->scale.y = joint->scale.z = 1.0F;
    
    if (!ip->item_vars.bumper.damage_all_delay)
    {
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B520
bool32 itNBumper_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itNBumper_AFall_SetStatus);

    return FALSE;
}

// 0x8017B548
bool32 itNBumper_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.8F, 0.8F, itNBumper_GWait_SetStatus);
}

// 0x8017B57C
bool32 itNBumper_FThrow_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->scale.x = 2.0F;
    joint->scale.y = 2.0F;
    joint->scale.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    joint->mobj->anim_frame = 1.0F;

    ip->phys_info.vel_air.x = ITBUMPER_REBOUND_AIR_X * ip->lr_attack;

    ip->phys_info.vel_air.y = ITBUMPER_REBOUND_AIR_Y;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itNBumper_AHit_SetStatus(item_gobj);

    return FALSE;
}

// 0x8017B600
void itNBumper_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_GWait);
}

// 0x8017B634
void itNBumper_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_AFall);
}

// 0x8017B678
void itNBumper_FHold_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_FHold);
}

// 0x8017B6A0
bool32 itNBumper_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITBUMPER_GRAVITY_NORMAL, ITBUMPER_T_VEL);

    if (!(ip->item_vars.bumper.damage_all_delay))
    {
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017B720
bool32 itNBumper_FThrow_ProcMap(GObj *item_gobj)
{
    return func_ovl3_80173EE8(item_gobj, 0.8F, itNBumper_GWaitHit_SetStatus);
}

// 0x8017B74C
bool32 itNBumper_FThrow_ProcShield(GObj *item_gobj)
{
    itMain_VelSetRebound(item_gobj);
    itMain_ClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017B778
bool32 itNBumper_FThrow_ProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    if ((ip->phys_info.vel_air.x * fp->lr) < 0.0F)
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
    }
    itMain_ClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017B7DC
void itNBumper_FThrow_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_FThrow);
}

// 0x8017B828
void itNBumper_FDrop_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_FDrop);
}

// 0x8017B874
void itNBumper_GWaitHit_SetModelRoll(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    s32 filler;
    Vec3f ground_angle;
    DObj *joint = DObjGetStruct(item_gobj);

    ground_angle = ip->coll_data.ground_angle;

    ip->attach_line_id = ip->coll_data.ground_line_id;

    joint->rotate.z = (atan2f(ground_angle.y, ground_angle.x) - HALF_PI32);
}

extern intptr_t D_NF_00007648;
extern intptr_t D_NF_00007A38;
extern intptr_t D_NF_00007AF8;

// 0x8017B8DC
void itNBumper_GWaitHit_InitItemVars(GObj *item_gobj)
{
    void *sp2C;
    void *sp24;
    DObj *joint;
    itStruct *ip;
    void *dl2, *dl1;

    ip = itGetStruct(item_gobj);
    joint = DObjGetStruct(item_gobj);

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    dl1 = itGetPData(ip, D_NF_00007648, D_NF_00007AF8); // (uintptr_t)((uintptr_t)ip->attributes->unk_0x0 - (intptr_t)&D_NF_00007648) + (intptr_t)&D_NF_00007AF8; Linker thing

    joint->display_list = dl1;

    dl2 = itGetPData(ip, D_NF_00007648, D_NF_00007A38); // ((uintptr_t)((uintptr_t)ip->attributes->unk_0x0 - (intptr_t)&D_NF_00007648) + (intptr_t)&D_NF_00007A38); // Linker thing

    func_800091F4(joint);
    func_800090DC(joint, dl2);

    joint->scale.z = 1.0F;
    joint->scale.y = 1.0F;
    joint->scale.x = 1.0F;

    ip->coll_data.object_coll.top = ITBUMPER_COLL_SIZE;
    ip->coll_data.object_coll.bottom = -ITBUMPER_COLL_SIZE;

    itNBumper_GWaitHit_SetModelRoll(item_gobj);

    ip->is_attach_surface = TRUE;

    ip->lifetime = ITBUMPER_LIFETIME;

    itMain_ClearOwnerStats(item_gobj);
}

// 0x8017B9C8
bool32 itNBumper_GWaitHit_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->scale.x = 2.0F;
    joint->scale.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = ITBUMPER_HIT_ANIM_LENGTH;

    joint->mobj->anim_frame = 1.0F;

    ip->lr = -ip->lr_attack;

    ip->phys_info.vel_air.x = ip->lr_attack * ITBUMPER_REBOUND_VEL_X;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    return FALSE;
}

// 0x8017BA2C
bool32 itNBumper_GWaitHit_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f sp30;

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (joint->mobj->anim_frame == 1.0F))
    {
        joint->mobj->anim_frame = 0.0F;
    }
    else
    {
        ip->item_vars.bumper.hit_anim_length--;
    }

    if (func_ovl2_800FC67C(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LEFT)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &sp30);

            if (sp30.x >= (joint->translate.x - attributes->objectcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &sp30);

            if (sp30.x <= (joint->translate.x + attributes->objectcoll_width))
            {
                ip->phys_info.vel_air.x = 0.0F;
            }
        }
    }
    if (ip->it_multi < ITBUMPER_RESET_VEL_TIMER)
    {
        ip->phys_info.vel_air.x = 0.0F;
    }
    if (ip->it_multi != 0)
    {
        joint->scale.x = joint->scale.z = 2.0F - ((10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else
    {
        joint->scale.z = 1.0F;
        joint->scale.y = 1.0F;
        joint->scale.x = 1.0F;
    }
    if (ip->lifetime == 0)
    {
        itNBumper_GDisappear_SetStatus(item_gobj);
    }
    ip->lifetime--;

    return FALSE;
}

// 0x8017BBFC
bool32 itNBumper_GWaitHit_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (func_ovl3_801735A0(item_gobj, itNBumper_FDrop_SetStatus) != FALSE)
    {
        if (func_ovl2_800FC67C(ip->attach_line_id) == FALSE)
        {
            ip->is_attach_surface = FALSE;

            itNBumper_FDrop_SetStatus(item_gobj);

            joint->scale.z = 1.0F;
            joint->scale.y = 1.0F;
            joint->scale.x = 1.0F;

            joint->mobj->anim_frame = 0.0F;
        }
        else if (ip->it_multi == 0)
        {
            itNBumper_GWaitHit_SetModelRoll(item_gobj);
        }
    }
    return FALSE;
}

// 0x8017BCC0
bool32 itNBumper_GWaitHit_ProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->scale.x = 2.0F;
    joint->scale.z = 2.0F;

    ip->item_vars.bumper.hit_anim_length = 3;

    joint->mobj->anim_frame = 1.0F;

    ip->phys_info.vel_air.x = (-fp->lr * ITBUMPER_REBOUND_VEL_X);

    ip->lr = fp->lr;

    ip->it_multi = ITBUMPER_HIT_SCALE;

    itMain_ClearOwnerStats(item_gobj);

    return FALSE;
}

// 0x8017BD4C
void itNBumper_GWaitHit_SetStatus(GObj *item_gobj)
{
    itNBumper_GWaitHit_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_GWaitHit);
}

// 0x8017BD80
bool32 itNBumper_AHit_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ip->item_vars.bumper.hit_anim_length == 0) && (joint->mobj->anim_frame == 1.0F))
    {
        joint->mobj->anim_frame = 0.0F;
    }
    else ip->item_vars.bumper.hit_anim_length--;

    itMain_UpdateGravityClampTVel(ip, ITBUMPER_GRAVITY_HIT, ITBUMPER_T_VEL);

    if (ip->it_multi != 0)
    {
        joint->scale.x = joint->scale.y = joint->scale.z = (2.0F - (10 - ip->it_multi) * 0.1F);

        ip->it_multi--;
    }
    else joint->scale.x = joint->scale.y = joint->scale.z = 1;
    
    if (!ip->item_vars.bumper.damage_all_delay)
    {
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.bumper.damage_all_delay = -1;
    }
    if (ip->item_vars.bumper.damage_all_delay != -1)
    {
        ip->item_vars.bumper.damage_all_delay--;
    }
    return FALSE;
}

// 0x8017BEA0
void itNBumper_AHit_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.bumper.damage_all_delay = ITBUMPER_DAMAGE_ALL_WAIT;

    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_AHit);
}

// 0x8017BED4
bool32 itNBumper_GDisappear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else if (ip->lifetime & 1)
    {
        DObj *joint = DObjGetStruct(item_gobj);

        joint->unk_0x54 ^= 2;
    }
    ip->lifetime--;

    return FALSE;
}

// 0x8017BF1C
void itNBumper_GDisappear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->mobj->anim_frame = 0;

    joint->scale.x = 1.0F;
    joint->scale.y = 1.0F;
    joint->scale.z = 1.0F;

    ip->lifetime = ITBUMPER_DESPAWN_TIMER;

    joint->unk_0x54 = 0;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_NBumper_StatusDesc, itStatus_NBumper_GDisappear);
}

// 0x8017BF8C
GObj* itCommon_NBumper_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_NBumper_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = joint->translate;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->item_hit.can_rehit_shield = TRUE;

        joint->mobj->anim_frame = 0.0F;

        func_80008CC0(joint, 0x2EU, 0U);

        joint->translate = translate;

        joint->rotate.z = 0.0F;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}