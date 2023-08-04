#include <it/item.h>

extern intptr_t D_NF_00005F88;
extern intptr_t D_NF_00006018;
extern intptr_t D_NF_00006048;

enum itRShellStatus
{
    itStatus_RShell_GWait,
    itStatus_RShell_AFall,
    itStatus_RShell_FHold,
    itStatus_RShell_FThrow,
    itStatus_RShell_FDrop,
    itStatus_RShell_GSpin,
    itStatus_RShell_ASpin,
    itStatus_RShell_EnumMax
};

itCreateDesc itCommon_RShell_CreateDesc =
{
    It_Kind_RShell,                         // Item Kind
    &gpItemFileData,                         // Pointer to item file data?
    0x584,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itRShell_AFall_ProcUpdate,              // Proc Update
    itRShell_AFall_ProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itRShell_SDefault_ProcDamage            // Proc Damage
};

itStatusDesc itCommon_RShell_StatusDesc[itStatus_RShell_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itRShell_GWait_ProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itRShell_SDefault_ProcDamage        // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itRShell_AFall_ProcUpdate,          // Proc Update
        itRShell_AFall_ProcMap,             // Proc Map
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
        itRShell_AFall_ProcUpdate,          // Proc Update
        itRShell_FThrow_ProcMap,            // Proc Map
        itRShell_SDefault_ProcHit,          // Proc Hit
        itRShell_SDefault_ProcShield,       // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itRShell_SDefault_ProcShield,       // Proc Set-Off
        itRShell_SDefault_ProcReflector,    // Proc Reflector
        itRShell_SDefault_ProcDamage        // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itRShell_AFall_ProcUpdate,          // Proc Update
        itRShell_FThrow_ProcMap,            // Proc Map
        itRShell_SDefault_ProcHit,          // Proc Hit
        itRShell_SDefault_ProcShield,       // Proc Shield
        itCommon_SDefault_ProcHop,          // Proc Hop
        itRShell_SDefault_ProcShield,       // Proc Set-Off
        itRShell_SDefault_ProcReflector,    // Proc Reflector
        itRShell_SDefault_ProcDamage        // Proc Damage
    },

    // Status 5 (Ground Spin)
    {
        itRShell_GSpin_ProcUpdate,          // Proc Update
        itRShell_GSpin_ProcMap,             // Proc Map
        itRShell_SDefault_ProcHit,          // Proc Hit
        itRShell_SDefault_ProcHit,          // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShell_SDefault_ProcReflector,    // Proc Reflector
        itRShell_GSpin_ProcDamage           // Proc Damage
    },

    // Status 6 (Ground Spin)
    {
        itRShell_AFall_ProcUpdate,          // Proc Update
        itRShell_AFall_ProcMap,             // Proc Map
        itRShell_SDefault_ProcHit,          // Proc Hit
        itRShell_SDefault_ProcHit,          // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itRShell_SDefault_ProcReflector,    // Proc Reflector
        itRShell_SDefault_ProcDamage        // Proc Damage
    }
};

// 0x8017A3A0
void itRShell_GSpin_UpdateFollowPlayer(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 vel_x;
    f32 dist_x;
    s32 lr_vel;
    s32 lr_dist;

    if (ip->ground_or_air == GA_Ground)
    {
        dist_x = (DObjGetStruct(fighter_gobj)->translate.x - DObjGetStruct(item_gobj)->translate.x);

        lr_dist = (dist_x < 0.0F) ? LEFT : RIGHT;

        vel_x = lr_dist * ITRSHELL_MUL_VEL_X;

        ip->item_vars.shell.vel_x = vel_x;

        ip->phys_info.vel_air.x += vel_x;

        lr_vel = (ip->phys_info.vel_air.x < 0.0F) ? LEFT : RIGHT;

        lr_dist = (ip->item_vars.shell.vel_x < 0.0F) ? LEFT : RIGHT;

        if (lr_dist == lr_vel)
        {
            if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_CLAMP_VEL_X)
            {
                ip->phys_info.vel_air.x = ip->lr * ITRSHELL_CLAMP_VEL_X;
            }
        }
        if (ip->item_hit.update_state == gmHitCollision_UpdateState_Disable)
        {
            if (ABSF(ip->phys_info.vel_air.x) <= ITRSHELL_HIT_INIT_VEL_X)
            {
                ip->item_hit.update_state = gmHitCollision_UpdateState_New;

                itManager_UpdateHitPositions(item_gobj);
            }
        }
        ip->lr = (ip->phys_info.vel_air.x < 0.0F) ? LEFT : RIGHT;
    }
}

// 0x8017A534
void itRShell_GSpin_SearchFollowPlayer(GObj *item_gobj)
{
    s32 unused;
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    GObj *nearest_gobj;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f *translate = &joint->translate;
    s32 ft_count = 0;
    f32 next_dist;
    f32 nearest_dist;
    Vec3f dist;

    while (fighter_gobj != NULL)
    {
        vec3f_sub(&dist, &DObjGetStruct(fighter_gobj)->translate, translate);

        if (ft_count == 0)
        {
            nearest_dist = SQUARE(dist.x) + SQUARE(dist.y);
        }
        next_dist = SQUARE(dist.x) + SQUARE(dist.y);

        if (nearest_dist >= next_dist)
        {
            nearest_dist = next_dist;

            nearest_gobj = fighter_gobj;
        }
        fighter_gobj = fighter_gobj->group_gobj_next;

        ft_count++;
    }
    itRShell_GSpin_UpdateFollowPlayer(item_gobj, nearest_gobj);
}

// 0x8017A610
void itRShell_GSpin_UpdateGFX(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.shell.dust_gfx_int == 0)
    {
        Vec3f pos = joint->translate;

        pos.y += ip->attributes->objectcoll_bottom;

        efParticle_DustLight_MakeEffect(&pos, ip->lr, 1.0F);

        ip->item_vars.shell.dust_gfx_int = ITRSHELL_GFX_SPAWN_INT;
    }
    ip->item_vars.shell.dust_gfx_int--;
}

// 0x8017A6A0
void func_ovl3_8017A6A0(GObj *item_gobj) // Identical to Green Shell function
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    s32 unused[2];

    func_8000BD1C(joint, itGetPData(ip, D_NF_00005F88, D_NF_00006018), 0.0F); // Linker thing
    func_8000BD54(joint->mobj, itGetPData(ip, D_NF_00005F88, D_NF_00006048), 0.0F); // Linker thing
    func_8000DF34(item_gobj);
}

void func_ovl3_8017A734(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->mobj->unk_mobj_0x94 = 0;
    DObjGetStruct(item_gobj)->unk_dobj_0x70 = 0;
}

// 0x8017A74C
bool32 itRShell_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITRSHELL_GRAVITY, ITRSHELL_T_VEL);

    if (!(ip->item_vars.shell.damage_all_delay))
    {
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.shell.damage_all_delay = -1;
    }
    if (ip->item_vars.shell.damage_all_delay != -1)
    {
        ip->item_vars.shell.damage_all_delay--;
    }
    return FALSE;
}

// 0x8017A7C4
bool32 itRShell_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itRShell_AFall_SetStatus);

    return FALSE;
}

// 0x8017A7EC
bool32 itRShell_AFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.shell.health == 0)
    {
        return func_ovl3_80173DF4(item_gobj, 0.25F);
    }
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.25F, 0.5F, func_ovl3_8017A964);

    return FALSE;
}

extern itStatusDesc itCommon_RShell_StatusDesc[];

// 0x8017A83C
void itRShell_GWait_UpdateStatusVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_SetGround(ip);

    if (ABSF(ip->phys_info.vel_air.x) < ITRSHELL_STOP_VEL_X)
    {
        itMain_SetGroundAllowPickup(item_gobj);

        ip->item_vars.shell.is_damage = FALSE;
        ip->phys_info.vel_air.x = 0.0F;

        itMain_ClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        func_ovl3_8017A734(item_gobj);
        itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_GWait);
    }
    else if (ip->item_vars.shell.is_damage != FALSE)
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itManager_UpdateHitPositions(item_gobj);
        itRShell_GSpin_SetStatus(item_gobj);
    }
    else
    {
        itMain_SetGroundAllowPickup(item_gobj);

        ip->phys_info.vel_air.x = 0.0F;

        itMain_ClearOwnerStats(item_gobj);

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        func_ovl3_8017A734(item_gobj);
        itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_GWait);
    }
}

void func_ovl3_8017A964(GObj *item_gobj) // Unused
{
    itRShell_GWait_UpdateStatusVars(item_gobj);
}

// 0x8017A984
void itRShell_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_AFall);
}

// 0x8017A9D0
bool32 itRShell_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = ip->damage_queue * ITRSHELL_DAMAGE_MUL_NORMAL * (-ip->lr_damage);

    if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_STOP_VEL_X)
    {
        ip->item_vars.shell.is_damage = TRUE;

        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itManager_UpdateHitPositions(item_gobj);

        itMain_CopyDamageStats(item_gobj);

        if (ip->ground_or_air != GA_Ground)
        {
            itRShell_ASpin_SetStatus(item_gobj);
        }
        else itRShell_GSpin_SetStatus(item_gobj);
    }
    else
    {
        ip->phys_info.vel_air.x = 0.0F;

        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    return FALSE;
}

// 0x8017AABC
void itRShell_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_FHold);
}

// 0x8017AAF0
void itRShell_FThrow_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_FThrow);
}

// 0x8017AB48
void itRShell_FDrop_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.health = 1;
    ip->item_vars.shell.is_damage = TRUE;
    ip->item_vars.shell.damage_all_delay = ITRSHELL_DAMAGE_ALL_WAIT;

    ip->times_thrown = 0;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_FDrop);
}

// 0x8017ABA0
bool32 itRShell_FThrow_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_CheckMapCollideLanding(item_gobj, 0.25F, 0.5F, itRShell_GSpin_SetStatus) != FALSE)
    {
        if (ip->phys_info.vel_air.x < 0.0F)
        {
            ip->lr = LEFT;
        }
        else ip->lr = RIGHT;

        ip->phys_info.vel_air.x = ((ip->lr * -8.0F) + -10.0F) * 0.7F;
    }
    return FALSE;
}

// 0x8017AC40 - 0 = left, 1 = right
void itRShell_GSpin_EdgeInvertVelLR(GObj *item_gobj, u8 lr)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

    ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;

    if (lr != 0)
    {
        ip->lr = RIGHT;
    }
    else ip->lr = LEFT;
}

// 0x8017AC84
void itRShell_GSpin_CheckCollisionEdge(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    itAttributes *attributes = ip->attributes;
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;

    if (func_ovl2_800FC67C(ip->coll_data.ground_line_id) != FALSE)
    {
        if (ip->lr == LEFT)
        {
            mpCollision_GetLREdgeLeft(ip->coll_data.ground_line_id, &pos);

            if (pos.x >= (joint->translate.x - attributes->objectcoll_width))
            {
                itRShell_GSpin_EdgeInvertVelLR(item_gobj, 1);
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ip->coll_data.ground_line_id, &pos);

            if (pos.x <= (joint->translate.x + attributes->objectcoll_width))
            {
                itRShell_GSpin_EdgeInvertVelLR(item_gobj, 0);
            }
        }
    }
}

// 0x8017AD7C
bool32 itRShell_GSpin_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itRShell_GSpin_UpdateGFX(item_gobj);
    itRShell_GSpin_SearchFollowPlayer(item_gobj);
    itRShell_GSpin_CheckCollisionEdge(item_gobj);

    if (ip->lifetime == 0)
    {
        return TRUE;
    }
    else ip->lifetime--;

    return FALSE;
}

// 0x8017ADD4
bool32 itRShell_GSpin_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if ((func_ovl3_801735A0(item_gobj, itRShell_ASpin_SetStatus) != FALSE) && (ip->coll_data.coll_mask & (MPCOLL_MASK_LWALL | MPCOLL_MASK_RWALL)))
    {
        ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;

        itMain_VelSetRotateStepLR(item_gobj);
        itMain_ClearOwnerStats(item_gobj);

        ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
    }
    return FALSE;
}

// 0x8017AE48
bool32 itRShell_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }
    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_vars.shell.health = lbRandom_GetIntRange(ITRSHELL_HEALTH_MAX);

    ip->phys_info.vel_air.x = ((ip->phys_info.vel_air.x * -1.0F) + (ITRSHELL_RECOIL_VEL_X * ip->lr_attack)) * ITRSHELL_RECOIL_MUL_X;

    func_ovl3_8017A734(item_gobj);

    if (ip->ground_or_air != GA_Ground)
    {
        itRShell_ASpin_SetStatus(item_gobj);
    }
    else itRShell_GSpin_SetStatus(item_gobj);
    
    return FALSE;
}

// 0x8017AF18
bool32 itRShell_GSpin_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }
    ip->phys_info.vel_air.x += (ip->damage_queue * 2.0F) * -ip->lr_damage;

    if (ABSF(ip->phys_info.vel_air.x) > ITRSHELL_STOP_VEL_X)
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_New;

        itManager_UpdateHitPositions(item_gobj);
        itMain_CopyDamageStats(item_gobj);
        itRShell_GSpin_SetStatus(item_gobj);
    }
    else
    {
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    return FALSE;
}

// 0x8017AFEC
void itRShell_GSpin_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;
    ip->pickup_wait = ITEM_PICKUP_WAIT_DEFAULT;

    if (ip->phys_info.vel_air.x > ITRSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = ITRSHELL_CLAMP_VEL_X;
    }
    if (ip->phys_info.vel_air.x < -ITRSHELL_CLAMP_VEL_X)
    {
        ip->phys_info.vel_air.x = -ITRSHELL_CLAMP_VEL_X;
    }
    ip->phys_info.vel_air.y = 0.0F;

    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = LEFT;
    }
    else ip->lr = RIGHT;

    if (ip->item_vars.shell.is_setup_vars == FALSE)
    {
        ip->lifetime = ITRSHELL_LIFETIME;

        ip->item_vars.shell.is_setup_vars = TRUE;

        ip->item_vars.shell.interact = ITRSHELL_INTERACT_MAX;
    }
    ip->item_vars.shell.dust_gfx_int = ITRSHELL_GFX_SPAWN_INT;

    func_ovl3_8017A6A0(item_gobj);
    func_800269C0(0x37);
    itMain_ClearOwnerStats(item_gobj);
    itMap_SetGround(ip);
}

// 0x8017B0D4
void itRShell_GSpin_SetStatus(GObj *item_gobj)
{
    itRShell_GSpin_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_GSpin);
}

// 0x8017B108
void itRShell_ASpin_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    if (ip->phys_info.vel_air.x > ITRSHELL_CLAMP_AIR_X)
    {
        ip->phys_info.vel_air.x = ITRSHELL_CLAMP_AIR_X;
    }
    if (ip->phys_info.vel_air.x < -ITRSHELL_CLAMP_AIR_X)
    {
        ip->phys_info.vel_air.x = -ITRSHELL_CLAMP_AIR_X;
    }
    if (ip->phys_info.vel_air.x < 0.0F)
    {
        ip->lr = LEFT;
    }
    else ip->lr = RIGHT;

    itMain_ClearOwnerStats(item_gobj);
    itMap_SetAir(ip);
}

// 0x8017B1A4
void itRShell_ASpin_SetStatus(GObj *item_gobj)
{
    itRShell_ASpin_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_RShell_StatusDesc, itStatus_RShell_ASpin);
}

extern itCreateDesc itCommon_RShell_ItemDesc;

// 0x8017B1D8
GObj* itCommon_RShell_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_RShell_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip;
        Vec3f translate = joint->translate;

        joint->rotate.y = HALF_PI32;

        func_80008CC0(joint, 0x1B, 0);
        func_80008CC0(joint, 0x48, 0);

        joint->translate = translate;

        joint->mobj->anim_frame = 0.0F;

        ip = itGetStruct(item_gobj);

        ip->item_hit.can_rehit_shield = TRUE;

        ip->item_vars.shell.health = 1;
        ip->item_vars.shell.is_setup_vars = FALSE;
        ip->item_vars.shell.is_damage = FALSE;
        ip->item_vars.shell.damage_all_delay = -1;
        ip->item_vars.shell.vel_x = 0;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}

// 0x8017B2F8
bool32 itRShell_SDefault_ProcShield(GObj *item_gobj)
{
    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017B31C
bool32 itRShell_SDefault_ProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *aj = DObjGetStruct(item_gobj), *fj = DObjGetStruct(ip->owner_gobj);

    ip->item_vars.shell.interact--;

    if (ip->item_vars.shell.interact == 0)
    {
        return TRUE;
    }

    if (aj->translate.x < fj->translate.x)
    {
        ip->lr = LEFT;

        if (ip->phys_info.vel_air.x >= 0.0F)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
            ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
        }
    }
    else
    {
        ip->lr = RIGHT;

        if (ip->phys_info.vel_air.x < 0.0F)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
            ip->item_vars.shell.vel_x = -ip->item_vars.shell.vel_x;
        }
    }
    ip->phys_info.vel_air.x += (ITRSHELL_ADD_VEL_X * ip->lr);

    itMain_ClearOwnerStats(item_gobj);

    return FALSE;
}