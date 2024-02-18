#include <it/item.h>
#include <gr/ground.h>

extern intptr_t lRBombHitEvent;             // 0x000000F0
extern intptr_t lRBombDataStart;            // 0x00000788
extern intptr_t lRBombDisplayList;          // 0x000008A0

itCreateDesc itGround_RBomb_ItemDesc =
{
    It_Kind_RBomb,                          // Item Kind
    &gGroundStruct.bonus3.item_head,        // Pointer to item file data?
    0xA8,                                   // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itRBomb_AFall_ProcUpdate,               // Proc Update
    itRBomb_AFall_ProcMap,                  // Proc Map
    itRBomb_SDefault_ProcHit,               // Proc Hit
    itRBomb_SDefault_ProcHit,               // Proc Shield
    NULL,                                   // Proc Hop
    itRBomb_SDefault_ProcHit,               // Proc Set-Off
    itRBomb_SDefault_ProcHit,               // Proc Reflector
    itRBomb_SDefault_ProcDamage             // Proc Damage
};

itStatusDesc itGround_RBomb_StatusDesc[/* */] =
{
    // Status 0 (Air Wait Fall)
    {
        itRBomb_AFall_ProcUpdate,           // Proc Update
        itRBomb_AFall_ProcMap,              // Proc Map
        itRBomb_SDefault_ProcHit,           // Proc Hit
        itRBomb_SDefault_ProcHit,           // Proc Shield
        NULL,                               // Proc Hop
        itRBomb_SDefault_ProcHit,           // Proc Set-Off
        itRBomb_SDefault_ProcHit,           // Proc Reflector
        itRBomb_SDefault_ProcDamage         // Proc Damage
    },

    // Status 1 (Neutral Explosion)
    {
        itRBomb_NExplode_ProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Ground Roll)
    {
        itRBomb_GRoll_ProcUpdate,           // Proc Update
        itRBomb_GRoll_ProcMap,              // Proc Map
        itRBomb_SDefault_ProcHit,           // Proc Hit
        itRBomb_SDefault_ProcHit,           // Proc Shield
        NULL,                               // Proc Hop
        itRBomb_SDefault_ProcHit,           // Proc Set-Off
        itRBomb_SDefault_ProcHit,           // Proc Reflector
        itRBomb_SDefault_ProcDamage         // Proc Damage
    }
};

enum itRBombStatus
{
    itStatus_RBomb_AFall,
    itStatus_RBomb_NExplode,
    itStatus_RBomb_GRoll,
    itStatus_RBomb_EnumMax
};

// 0x80184A70
void itEffect_UpdateRBombSmashGFX(GObj *effect_gobj) // RTTF bomb explode GFX process
{
    efStruct *ep = efGetStruct(effect_gobj);
    DObj *joint = DObjGetStruct(effect_gobj);

    ep->effect_vars.basic1.lifetime--;

    if (ep->effect_vars.basic1.lifetime == 0)
    {
        efManager_SetPrevAlloc(ep);
        omEjectGObjCommon(effect_gobj);
    }
    else while (joint != NULL)
    {
        joint->scale.vec.f.y -= 1.3F;

        joint->translate.vec.f.x += joint->scale.vec.f.x; // This makes no sense, seems this custom effect is very... custom
        joint->translate.vec.f.y += joint->scale.vec.f.y;
        joint->translate.vec.f.z += joint->scale.vec.f.z;

        joint->rotate.vec.f.x += joint->dobj_f0; // ??? Seems to be rotation step, but only in this case? Otherwise -FLOAT32_MAX?
        joint->rotate.vec.f.y += joint->dobj_f1;
        joint->rotate.vec.f.z += joint->dobj_f2;

        joint = joint->sib_next;
    }
}

// 0x80184B44
void itEffect_CreateRBombSmashGFX(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep = efManager_GetStructNoForceReturn();
    DObj *joint;
    s32 i;
    void *dl;

    if (ep != NULL)
    {
        effect_gobj = omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6U, 0x80000000);

        if (effect_gobj != NULL)
        {
            omAddGObjRenderProc(effect_gobj, func_80014038, 0xB, 0x80000000U, -1);

            dl = (*(uintptr_t*)((uintptr_t)*itGround_RBomb_ItemDesc.p_file + itGround_RBomb_ItemDesc.offset) - (uintptr_t)&lRBombDataStart) + (uintptr_t)&lRBombDisplayList; // Linker thing

            for (i = 0; i < ITRBOMB_GFX_COUNT; i++)
            {
                joint = func_800092D0(effect_gobj, dl);

                func_80008CC0(joint, 0x1B, 0);

                joint->translate.vec.f = *pos;

                joint->scale.vec.f.x = (lbRandom_GetFloat() * 48.0F) + -24.0F;
                joint->scale.vec.f.y = (lbRandom_GetFloat() * 50.0F) + 10.0F;
                joint->scale.vec.f.z = (lbRandom_GetFloat() * 32.0F) + -16.0F;

                joint->dobj_f0 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                joint->dobj_f1 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                joint->dobj_f2 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.basic1.lifetime = ITRBOMB_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            omAddGObjCommonProc(effect_gobj, itEffect_UpdateRBombSmashGFX, 1, 3);
        }
    }
}

// 0x80184D74
sb32 itRBomb_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint;

    itMain_ApplyGravityClampTVel(ip, ITRBOMB_GRAVITY, ITRBOMB_T_VEL);

    joint = DObjGetStruct(item_gobj);
    joint->rotate.vec.f.z += ip->item_vars.rbomb.roll_rotate_step;

    return FALSE;
}

// 0x80184DC4
sb32 itRBomb_SDefault_ProcHit(GObj *item_gobj)
{
    func_800269C0(alSound_SFX_RBombHit);
    itEffect_CreateRBombSmashGFX(&DObjGetStruct(item_gobj)->translate.vec.f);
    itRBomb_NExplode_CreateGFXGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x80184E04
sb32 itRBomb_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITRBOMB_HEALTH_MAX)
    {
        return itRBomb_SDefault_ProcHit(item_gobj);
    }
    return FALSE;
} 

// 0x80184E44
void itRBomb_GRoll_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itGround_RBomb_StatusDesc, itStatus_RBomb_GRoll);
}

// 0x80184E78
sb32 itRBomb_AFall_CheckCollideGround(GObj *item_gobj, f32 vel_mod)
{
    s32 unused;
    itStruct *ip;
    sb32 is_collide_ground = itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND);

    if (itMap_CheckCollideAllRebound(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL), vel_mod, NULL) != FALSE)
    {
        itMain_VelSetRotateStepLR(item_gobj);
    }
    if (is_collide_ground != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80184EDC
sb32 itRBomb_AFall_ProcMap(GObj *item_gobj)
{
    if (itRBomb_AFall_CheckCollideGround(item_gobj, 0.5F) != FALSE)
    {
        itStruct *ip = itGetStruct(item_gobj);

        if (ip->phys_info.vel_air.y >= 90.0F) // Is it even possible to meet this condition? Didn't they mean ABSF(ap->phys_info.vel_air.y)?
        {
            itRBomb_SDefault_ProcHit(item_gobj); // This causes the bomb to smash on impact when landing from too high; doesn't seem possible to trigger

            return TRUE;
        }
        else if (ip->phys_info.vel_air.y < 30.0F)
        {
            itRBomb_GRoll_SetStatus(item_gobj);
        }
        else
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &ip->coll_data.ground_angle);

            ip->phys_info.vel_air.y *= 0.2F;

            itMain_VelSetRotateStepLR(item_gobj);
        }
        func_800269C0(alSound_SFX_RBombMap);
        itMain_ClearOwnerStats(item_gobj);
    }
    return FALSE;
}


// 0x80184FAC
void itRBomb_SDefault_SetMapCollisionBox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.x = F_DEG_TO_RAD(90.0F); // HALF_PI32

    ip->coll_data.object_coll.top = ip->coll_data.object_coll.width;
    ip->coll_data.object_coll.bottom = -ip->coll_data.object_coll.width;
}

// 0x80184FD4
sb32 itRBomb_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi++;

    if (ip->it_multi == ITRBOMB_EXPLODE_LIFETIME)
    {
        return TRUE;
    }
    else itMain_UpdateHitEvent(item_gobj, itGetHitEvent(itGround_RBomb_ItemDesc, lRBombHitEvent)); // Linker thing

    return FALSE;
}

// 0x80185030
sb32 itRBomb_GRoll_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 roll_rotate_step;
    f32 sqrt_vel;

    ip->phys_info.vel_air.x += (-(atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_DEG_TO_RAD(90.0F) /*HALF_PI32*/) * ITRBOMB_MUL_VEL_X);

    ip->lr = (ip->phys_info.vel_air.x >= 0.0F) ? LR_Right : LR_Left;

    sqrt_vel = sqrtf(SQUARE(ip->phys_info.vel_air.x) + SQUARE(ip->phys_info.vel_air.y));

    roll_rotate_step = ((ip->lr == LR_Left) ? ITRBOMB_ROLL_ROTATE_MUL : -ITRBOMB_ROLL_ROTATE_MUL) * sqrt_vel;

    ip->item_vars.rbomb.roll_rotate_step = roll_rotate_step;

    DObjGetStruct(item_gobj)->rotate.vec.f.z += roll_rotate_step;

    return FALSE;
}

// 0x8018511C
sb32 itRBomb_GRoll_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestLRWallCheckGround(item_gobj) == FALSE)
    {
        itMain_SetItemStatus(item_gobj, itGround_RBomb_StatusDesc, itStatus_RBomb_AFall);
    }
    else if (ip->coll_data.coll_mask_curr & (MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL))
    {
        return itRBomb_SDefault_ProcHit(item_gobj);
    }
    return FALSE;
}

// 0x8018518C
GObj* itGround_RBomb_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_RBomb_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.rbomb.roll_rotate_step = 0.0F;

        itRBomb_SDefault_SetMapCollisionBox(item_gobj);
    }
    return item_gobj;
}

// 0x801851F4
void itRBomb_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = 0;
    ip->item_event_index = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMain_RefreshHit(item_gobj);
    itMain_UpdateHitEvent(item_gobj, itGetHitEvent(itGround_RBomb_ItemDesc, lRBombHitEvent));
}

// 0x80185284
void itRBomb_NExplode_SetStatus(GObj *item_gobj)
{
    itRBomb_NExplode_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itGround_RBomb_StatusDesc, itStatus_RBomb_NExplode);
}

// 0x801852B8
void itRBomb_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    efParticle *ef_part;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    ef_part = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate.vec.f);

    if (ef_part != NULL)
    {
        ef_part->effect_info->scale.vec.f.x = ef_part->effect_info->scale.vec.f.y = ef_part->effect_info->scale.vec.f.z = ITRBOMB_EXPLODE_GFX_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_RENDERFLAG_HIDDEN;

    itRBomb_NExplode_SetStatus(item_gobj);
}