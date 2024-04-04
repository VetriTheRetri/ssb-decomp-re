#include <it/item.h>

extern intptr_t Article_Taru_Hit;

enum itTaruStatus
{
    itStatus_Taru_GWait,
    itStatus_Taru_AFall,
    itStatus_Taru_FHold,
    itStatus_Taru_FThrow,
    itStatus_Taru_FDrop,
    itStatus_Taru_NExplode,
    itStatus_Taru_GRoll,
    itStatus_Taru_EnumMax
};

itCreateDesc itCommon_Taru_ItemDesc =
{
    It_Kind_Taru,                           // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0x634,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itTaru_AFall_ProcUpdate,                // Proc Update
    itTaru_AFall_ProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_Taru_StatusDesc[itStatus_Taru_EnumMax] = 
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itTaru_GWait_ProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itTaru_SDefault_ProcDamage          // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itTaru_AFall_ProcUpdate,            // Proc Update
        itTaru_AFall_ProcMap,               // Proc Map
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
        itTaru_AFall_ProcUpdate,            // Proc Update
        itTaru_FThrow_ProcMap,              // Proc Map
        itTaru_SDefault_ProcHit,            // Proc Hit
        itTaru_SDefault_ProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itTaru_SDefault_ProcHit,            // Proc Set-Off
        itTaru_SDefault_ProcHit,            // Proc Reflector
        itTaru_SDefault_ProcDamage          // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itTaru_AFall_ProcUpdate,            // Proc Update
        itTaru_FThrow_ProcMap,              // Proc Map
        itTaru_SDefault_ProcHit,            // Proc Hit
        itTaru_SDefault_ProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itTaru_SDefault_ProcHit,            // Proc Set-Off
        itTaru_SDefault_ProcHit,            // Proc Reflector
        itTaru_SDefault_ProcDamage          // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itTaru_NExplode_ProcUpdate,         // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Ground Roll)
    {
        itTaru_GRoll_ProcUpdate,            // Proc Update
        itTaru_GRoll_ProcMap,               // Proc Map
        itTaru_SDefault_ProcHit,            // Proc Hit
        itTaru_SDefault_ProcHit,            // Proc Shield
        NULL,                               // Proc Hop
        itTaru_SDefault_ProcHit,            // Proc Set-Off
        itTaru_SDefault_ProcHit,            // Proc Reflector
        itTaru_SDefault_ProcDamage          // Proc Damage
    }
};

// 0x80179BA0
sb32 itTaru_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITTARU_GRAVITY, ITTARU_T_VEL);

    DObjGetStruct(item_gobj)->rotate.vec.f.z += ip->item_vars.taru.roll_rotate_step;

    itManagerUpdateSpin(item_gobj);

    return FALSE;
}

// 0x80179BF8
sb32 itTaru_GWait_ProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itTaru_AFall_SetStatus);

    return FALSE;
}

// 0x80179C20
sb32 itTaru_SDefault_ProcHit(GObj *item_gobj)
{
    func_800269C0(0x3B);

    itBoxContainerSmashMakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    if (itMainMakeContainerItem(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itTaru_NExplode_CreateGFXGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80179C78
sb32 itTaru_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITTARU_HEALTH_MAX)
    {
        return itTaru_SDefault_ProcHit(item_gobj);
    }
    else return FALSE;
}

// 0x80179CB8
sb32 itTaru_AFall_ProcMap(GObj *item_gobj)
{
    return itMapCheckMapCollideThrownLanding(item_gobj, 0.5F, 0.2F, itTaru_GWait_SetStatus);
}

// 0x80179CE8
void itTaru_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_GWait);
}

// 0x80179D1C
void itTaru_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_AFall);
}

// 0x80179D60
void itTaru_FHold_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_FHold);
}

// 0x80179D88
sb32 itTaru_FThrow_CheckMapCollision(GObj *item_gobj, f32 vel_mod)
{
    s32 unused;
    itStruct *ip;
    sb32 is_collide_ground = itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMapCheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), vel_mod, NULL) != FALSE)
    {
        itMainVelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80179DEC
void itTaru_GRoll_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->lifetime = ITTARU_LIFETIME;

    ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_GRoll);
}

// 0x80179E28
sb32 itTaru_FThrow_ProcMap(GObj *item_gobj)
{
    if (itTaru_FThrow_CheckMapCollision(item_gobj, 0.5F) != FALSE)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->phys_info.vel_air.y >= 90.0F)       // Is it even possible to meet this condition? Didn't they mean ABSF(ip->phys_info.vel_air.y)?
        {
            itTaru_SDefault_ProcHit(item_gobj);     // This causes the barrel to smash on impact when landing from too high; doesn't seem possible to trigger

            return TRUE;
        }
        else if (ip->phys_info.vel_air.y < 30.0F)
        {
            itTaru_GRoll_SetStatus(item_gobj);
        }
        else
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &ip->coll_data.ground_angle);

            ip->phys_info.vel_air.y *= 0.2F;

            itMainVelSetRotateStepLR(item_gobj);
        }
        itMainClearOwnerStats(item_gobj);
    }
    return FALSE;
}

// 0x80179EF0
void itTaru_FThrow_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->child->rotate.vec.f.x = F_DEG_TO_RAD(90.0F); // HALF_PI32

    ip->coll_data.object_coll.top = ip->coll_data.object_coll.width;
    ip->coll_data.object_coll.bottom = -ip->coll_data.object_coll.width;
}

// 0x80179F1C
void itTaru_FThrow_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_FThrow);
    itTaru_FThrow_InitItemVars(item_gobj);
}

// 0x80179F50 - Unused
sb32 func_ovl3_80179F50(GObj *item_gobj)
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x80179F74
void itTaru_FDrop_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_FDrop);
    itTaru_FThrow_InitItemVars(item_gobj);
}

// 0x80179FA8
sb32 itTaru_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITTARU_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Taru_ItemDesc, Article_Taru_Hit)); // Linker thing

    return FALSE;
}

// 0x8017A004
sb32 itTaru_GRoll_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 roll_rotate_step;
    f32 sqrt_vel;

    ip->phys_info.vel_air.x += (-(atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_DEG_TO_RAD(90.0F)) * ITTARU_MUL_VEL_X);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

    sqrt_vel = sqrtf(SQUARE(ip->phys_info.vel_air.x) + SQUARE(ip->phys_info.vel_air.y));

    if (sqrt_vel < ITTARU_MIN_VEL_XY)
    {
        ip->lifetime--;

        if (ip->lifetime < ITTARU_DESPAWN_FLASH_START)
        {
            if (ip->lifetime == 0)
            {
                return TRUE;
            }
            else if ((ip->lifetime % 2) != 0)
            {
                DObjGetStruct(item_gobj)->flags ^= DOBJ_FLAG_NORENDER;
            }
        }
    }
    roll_rotate_step = ((ip->lr == LR_Left) ? ITTARU_ROLL_ROTATE_MUL : -ITTARU_ROLL_ROTATE_MUL) * sqrt_vel;

    ip->item_vars.taru.roll_rotate_step = roll_rotate_step;

    DObjGetStruct(item_gobj)->rotate.vec.f.z += roll_rotate_step;

    return FALSE;
}

// 0x8017A148
sb32 itTaru_GRoll_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestLRWallCheckGround(item_gobj) == FALSE)
    {
        itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_FDrop);
    }
    else if (ip->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        return itTaru_SDefault_ProcHit(item_gobj);
    }
    return FALSE;
}

// 0x8017A1B8
GObj* itCommon_Taru_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itCommon_Taru_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.taru.roll_rotate_step = 0.0F;

        ip->is_damage_all = TRUE;

        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}

// 0x8017A240
void itTaru_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.throw_mul = ITEM_STALE_DEFAULT;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Taru_ItemDesc, Article_Taru_Hit));
}

// 0x8017A2D8
void itTaru_NExplode_SetStatus(GObj *item_gobj)
{
    itTaru_NExplode_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Taru_StatusDesc, itStatus_Taru_NExplode);
}

// 0x8017A30C
void itTaru_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    efParticle *effect_unk;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    effect_unk = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate.vec.f);

    if (effect_unk != NULL)
    {
        effect_unk->effect_info->scale.vec.f.x = effect_unk->effect_info->scale.vec.f.y = effect_unk->effect_info->scale.vec.f.z = ITTARU_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_FLAG_NORENDER;

    itTaru_NExplode_SetStatus(item_gobj);
}