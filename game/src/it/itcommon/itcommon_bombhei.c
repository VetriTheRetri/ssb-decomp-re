#include <it/item.h>

enum itBombHeiStatus
{
    itStatus_BombHei_GWait,
    itStatus_BombHei_AFall,
    itStatus_BombHei_FHold,
    itStatus_BombHei_FThrow,
    itStatus_BombHei_FDrop,
    itStatus_BombHei_GWalk,
    itStatus_BombHei_MExplode,              // Explode on map collision
    itStatus_BombHei_NExplode,              // Neutral explosion
    itStatus_BombHei_GExplodeWait,          // Stall until explosion
    itStatus_BombHei_EnumMax
};

itCreateDesc itCommon_BombHei_ItemDesc =
{
    It_Kind_BombHei,                        // Item Kind
    &gpItemFileData,                        // Pointer to item file data?
    0x424,                                  // Offset of item attributes in file?
    0x12,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBombHei_AFall_ProcUpdate,             // Proc Update
    itBombHei_AFall_ProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_BombHei_StatusDesc[itStatus_BombHei_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        itBombHei_GWait_ProcUpdate,         // Proc Update
        itBombHei_GWait_ProcMap,            // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBombHei_AFall_ProcUpdate,         // Proc Update
        itBombHei_AFall_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
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
        itBombHei_FThrow_ProcUpdate,        // Proc Update
        itBombHei_FThrow_ProcMap,           // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        itBombHei_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itBombHei_SDefault_ProcHit,         // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 4 (Fighter Throw)
    {
        itBombHei_AFall_ProcUpdate,         // Proc Update
        itBombHei_FDrop_ProcMap,            // Proc Map
        itBombHei_SDefault_ProcHit,         // Proc Hit
        itBombHei_SDefault_ProcHit,         // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itBombHei_SDefault_ProcHit,         // Proc Set-Off
        itCommon_SDefault_ProcReflector,    // Proc Reflector
        itBombHei_SDefault_ProcHit          // Proc Damage
    },

    // Status 5 (Ground Walk)
    {
        itBombHei_GWalk_ProcUpdate,         // Proc Update
        itBombHei_GWalk_ProcMap,            // Proc Map
        itBombHei_MExplode_ProcHit,         // Proc Hit
        itBombHei_MExplode_ProcHit,         // Proc Shield
        NULL,                               // Proc Hop
        itBombHei_MExplode_ProcHit,         // Proc Set-Off
        itBombHei_MExplode_ProcHit,         // Proc Reflector
        itBombHei_MExplode_ProcHit          // Proc Damage
    },

    // Status 6 (Map Collision Explosion)
    {
        itBombHei_MExplode_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        itBombHei_MExplode_ProcUpdate,      // Proc Hit
        itBombHei_MExplode_ProcUpdate,      // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itBombHei_MExplode_ProcUpdate,      // Proc Reflector
        itBombHei_MExplode_ProcUpdate       // Proc Damage
    },

    // Status 7 (Neutral / Hit Explosion)
    {
        itBombHei_NExplode_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 8 (Ground Walk Explosion Stall)
    {
        itBombHei_GExplodeWait_ProcUpdate,  // Proc Update
        itBombHei_GExplodeWait_ProcMap,     // Proc Map
        itBombHei_MExplode_ProcHit,         // Proc Hit
        itBombHei_MExplode_ProcHit,         // Proc Shield
        NULL,                               // Proc Hop
        itBombHei_MExplode_ProcHit,         // Proc Set-Off
        itBombHei_MExplode_ProcHit,         // Proc Reflector
        itBombHei_MExplode_ProcHit          // Proc Damage
    }
};

// 0x80177060
void itBombHei_Default_SetExplode(GObj *item_gobj, u8 arg1)
{
    s32 unused;
    DObj *joint = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    efParticle *ep;

    itBombHei_Default_SetHitStatusNone(item_gobj);

    ep = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate); // WARNING: Actually some sprite struct

    if (ep != NULL)
    {
        ep->effect_info->scale.x = ITBOMBHEI_EXPLODE_SCALE;
        ep->effect_info->scale.y = ITBOMBHEI_EXPLODE_SCALE;
        ep->effect_info->scale.z = ITBOMBHEI_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->unk_0x54 = 2;

    ip->item_hit.hit_sfx = gmSound_SFX_ExplodeL;

    itMain_RefreshHit(item_gobj);
    itMain_ClearOwnerStats(item_gobj);
    itBombHei_NExplode_SetStatus(item_gobj);
}

extern intptr_t BombHei_Motion_WalkRight;
extern intptr_t BombHei_Motion_Data;
extern intptr_t BombHei_Motion_WalkLeft;

// 0x80177104
void func_ovl3_80177104(GObj *item_gobj, u8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *dll = itGetPData(ip, BombHei_Motion_Data, BombHei_Motion_WalkLeft);  // (void*)((uintptr_t)((uintptr_t)ip->attributes->unk_0x0 - (uintptr_t)&BombHei_Motion_Data) + &BombHei_Motion_WalkLeft); // Linker thing
    void *dlr = itGetPData(ip, BombHei_Motion_Data, BombHei_Motion_WalkRight); // (void*)((uintptr_t)((uintptr_t)ip->attributes->unk_0x0 - (uintptr_t)&BombHei_Motion_Data) + &BombHei_Motion_WalkRight); // Linker thing

    if (lr != CENTER)
    {
        ip->lr = RIGHT;
        ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;

        joint->display_list = dlr;
    }
    else
    {
        ip->lr = LEFT;
        ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

        joint->display_list = dll;
    }
}

void func_ovl3_80177180(GObj *item_gobj, u8 is_explode)
{
    s32 unused[4];
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);

    if ((ip->coll_data.coll_mask & MPCOLL_MASK_GROUND) || (is_explode != FALSE))
    {
        Vec3f pos = joint->translate;

        pos.y += attributes->objectcoll_bottom;

        efParticle_DustHeavyDouble_MakeEffect(&pos, ip->lr, 1.0F);
    }
}

// 0x80177208
void itBombHei_Default_SetHitStatusNormal(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
}

// 0x80177218
void itBombHei_Default_SetHitStatusNone(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
}

// 0x80177224
bool32 itBombHei_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80177260
s32 itBombHei_GWalk_GetMostPlayersLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    Vec3f *translate;
    s32 lr;
    s32 ret_lr = 0;
    Vec3f dist;
    DObj *aj = DObjGetStruct(item_gobj);

    if (fighter_gobj != NULL)
    {
        translate = &aj->translate;

        do
        {
            DObj *fj = DObjGetStruct(fighter_gobj);

            vec3f_sub(&dist, translate, &fj->translate);

            lr = (dist.x < 0.0F) ? LEFT : RIGHT;

            fighter_gobj = fighter_gobj->group_gobj_next;

            ret_lr += lr;
        }
        while (fighter_gobj != NULL);
    }
    return ret_lr; // I assume this is getting the number of players on either side of the Bob-Omb so it starts moving towards the most crowded area
}

// 0x80177304
bool32 itBombHei_GWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *dll = ((uintptr_t)ip->attributes->unk_0x0 - (uintptr_t)&BombHei_Motion_Data) + &BombHei_Motion_WalkLeft; // Linker thing
    s32 lr;

    if (ip->it_multi == ITBOMBHEI_WALK_WAIT)
    {
        lr = itBombHei_GWalk_GetMostPlayersLR(item_gobj);

        if (lr == 0)
        {
            lr = lbRandom_GetIntRange(2) - 1;
        }
        if (lr < 0)
        {
            ip->lr = RIGHT;
            ip->phys_info.vel_air.x = ITBOMBHEI_WALK_VEL_X;
        }
        else
        {
            ip->phys_info.vel_air.x = -ITBOMBHEI_WALK_VEL_X;

            joint->display_list = dll;

            ip->lr = LEFT;
        }
        itBombHei_GWalk_SetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801773F4
bool32 itBombHei_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itBombHei_AFall_SetStatus);

    return FALSE;
}

// 0x8017741C
bool32 itBombHei_SDefault_ProcHit(GObj *item_gobj)
{
    itBombHei_Default_ZeroVelSetExplode(item_gobj, 1);

    return FALSE;
}

// 0x80177440
bool32 itBombHei_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.4F, 0.3F, itBombHei_GWait_SetStatus);
}

// 0x80177474
void itBombHei_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GWait);
}

// 0x801774B0
void itBombHei_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_AFall);
}

// 0x801774FC
void itBombHei_FHold_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNone(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FHold);
}

// 0x80177530
bool32 itBombHei_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITBOMBHEI_GRAVITY, ITBOMBHEI_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x8017756C
bool32 itBombHei_FThrow_ProcMap(GObj *item_gobj)
{
    return func_ovl3_80173E58(item_gobj, itBombHei_MExplode_SetStatus);
}

// 0x80177590
void itBombHei_FThrow_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FThrow);
}

// 0x801775C4
bool32 itBombHei_FDrop_ProcMap(GObj *item_gobj)
{
    return func_ovl3_80173E58(item_gobj, itBombHei_MExplode_SetStatus);
}

// 0x801775E8
void itBombHei_FDrop_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_FDrop);
}

// 0x8017761C
void itBombHei_GWalk_UpdateGFX(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.bombhei.smoke_delay == 0)
    {
        Vec3f pos = joint->translate;

        pos.y += 120.0F;

        efParticle_DustLight_MakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;
    }
    ip->item_vars.bombhei.smoke_delay--;
}

// 0x801776A0
bool32 itBombHei_GWalk_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    itBombHei_GWalk_UpdateGFX(item_gobj);

    if (func_ovl2_800FC67C(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LEFT)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.x - attributes->objectcoll_width))
            {
                func_ovl3_80177104(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.x + attributes->objectcoll_width))
            {
                func_ovl3_80177104(item_gobj, 0);
            }
        }
    }
    if (ip->it_multi == ITBOMBHEI_FLASH_WAIT)
    {
        ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = 0.0F;
        ip->phys_info.vel_air.x = 0.0F;

        itBombHei_GExplodeWait_SetStatus(item_gobj);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x801777D8
bool32 itBombHei_GWalk_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    func_ovl3_801735A0(item_gobj, itBombHei_FDrop_SetStatus);

    if (ip->coll_data.coll_mask & MPCOLL_MASK_RWALL)
    {
        func_ovl3_80177104(item_gobj, 0);
    }
    if (ip->coll_data.coll_mask & MPCOLL_MASK_LWALL)
    {
        func_ovl3_80177104(item_gobj, 1);
    }
    return FALSE;
}

extern intptr_t BombHei_Motion_Unk;

// 0x80177848
void itBombHei_GWalk_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    void *texture;
    s32 unused;
    Vec3f pos;

    ip->is_allow_pickup = FALSE;

    ip->it_multi = 0;

    ip->item_vars.bombhei.smoke_delay = ITBOMBHEI_SMOKE_WAIT;

    itMain_RefreshHit(item_gobj);

    texture = itGetPData(ip, BombHei_Motion_Data, BombHei_Motion_Unk); // ((uintptr_t)ip->attributes->unk_0x0 - (uintptr_t)&BombHei_Motion_Data) + &BombHei_Motion_Unk; // Linker thing

    func_8000BD54(joint->mobj, texture, 0.0F); // Set texture animation?

    func_8000DF34(item_gobj);

    if (func_ovl2_800FC67C(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LEFT)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.x - attributes->objectcoll_width))
            {
                func_ovl3_80177104(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.x + attributes->objectcoll_width))
            {
                func_ovl3_80177104(item_gobj, 0);
            }
        }
    }
    itMain_ClearOwnerStats(item_gobj);

    func_800269C0(0x2DU);
}

// 0x801779A8
void itBombHei_GWalk_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itBombHei_GWalk_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GWalk);
}

// 0x801779E4
void itBombHei_Default_ZeroVelSetExplode(GObj *item_gobj, u8 arg1)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.z = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.x = 0.0F;

    itBombHei_Default_SetExplode(item_gobj, arg1);

    func_800269C0(1U);
}

extern intptr_t BombHei_Event;
extern itCreateDesc itCommon_BombHei_ItemDesc;

// 0x80177A24
void itBombHei_Default_UpdateHitEvent(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itHitEvent *ev = (itHitEvent*) ((uintptr_t)*itCommon_BombHei_ItemDesc.p_file + (intptr_t)&BombHei_Event); // Linker thing

    if (ip->it_multi == ev[ip->item_event_index].timer)
    {
        ip->item_hit.angle = ev[ip->item_event_index].angle;
        ip->item_hit.damage = ev[ip->item_event_index].damage;
        ip->item_hit.size = ev[ip->item_event_index].size;

        ip->item_hit.can_rehit_item = TRUE;
        ip->item_hit.can_hop = FALSE;
        ip->item_hit.can_reflect = FALSE;
        ip->item_hit.rebound = FALSE;

        ip->item_hit.element = gmHitCollision_Element_Fire;

        ip->item_event_index++;

        if (ip->item_event_index == 4)
        {
            ip->item_event_index = 3;
        }
    }
}

// 0x80177B10
bool32 itBombHei_MExplode_ProcUpdate(GObj *item_gobj)
{
    func_ovl3_80177180(item_gobj, 0);
    itBombHei_Default_ZeroVelSetExplode(item_gobj, 1);

    return FALSE;
}

// 0x80177B44
bool32 itBombHei_MExplode_ProcHit(GObj *item_gobj)
{
    func_ovl3_80177180(item_gobj, 1);
    itBombHei_Default_ZeroVelSetExplode(item_gobj, 0);

    return FALSE;
}

// 0x80177B78
void itBombHei_MExplode_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_MExplode);
}

// 0x80177BAC
void itBombHei_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;

    ip->item_event_index = 0;

    itBombHei_Default_UpdateHitEvent(item_gobj);
}

// 0x80177BE8
bool32 itBombHei_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHei_Default_UpdateHitEvent(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITBOMBHEI_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80177C30
void itBombHei_NExplode_SetStatus(GObj *item_gobj)
{
    itBombHei_NExplode_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_NExplode);
}

// 0x80177C64
bool32 itBombHei_GExplodeWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itBombHei_GWalk_UpdateGFX(item_gobj);

    if (ip->it_multi == ITBOMBHEI_EXPLODE_WAIT)
    {
        func_ovl3_80177180(item_gobj, 1);
        itBombHei_Default_ZeroVelSetExplode(item_gobj, 0);
        func_800269C0(1U);
    }
    ip->it_multi++;

    return FALSE;
}

// 0x80177D00
bool32 itBombHei_GExplodeWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itBombHei_FDrop_SetStatus);

    return FALSE;
}

// 0x80177D28
void itBombHei_GExplodeWait_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    joint->mobj->unk_mobj_0x94 = 0;

    itMain_CheckSetColAnimIndex(item_gobj, ITBOMBHEI_EXPLODE_COLANIM_ID, ITBOMBHEI_EXPLODE_COLANIM_DURATION);
}

// 0x80177D60
void itBombHei_GExplodeWait_SetStatus(GObj *item_gobj)
{
    itBombHei_Default_SetHitStatusNormal(item_gobj);
    itBombHei_GExplodeWait_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_BombHei_StatusDesc, itStatus_BombHei_GExplodeWait);
}

// 0x80177D9C
GObj* itCommon_BombHei_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_BombHei_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;
    Vec3f translate;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        translate = joint->translate;

        ip = itGetStruct(item_gobj);

        ip->it_multi = 0;

        itMain_ClearOwnerStats(item_gobj);

        func_80008CC0(joint, 0x2EU, 0U);

        joint->translate = translate;

        ip->is_unused_item_bool = TRUE;

        joint->rotate.z = 0.0F;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}