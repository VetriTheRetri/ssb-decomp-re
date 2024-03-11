#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lBoxHitEvents; // 0x614
extern intptr_t D_NF_00006778;
extern intptr_t D_NF_000068F0;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018A320
Vec2f itBox_SDefault_ItemSpawnVel[/* */] =
{
    {  0.0F, 48.0F },
    { -2.0F, 48.0F },
    {  2.0F, 48.0F },
    { -5.0F, 48.2F },
    {  0.0F, 48.2F },
    {  5.2F, 48.2F }
};

// 0x8018A350
itCreateDesc itCommon_Box_ItemDesc = 
{
    It_Kind_Box,                            // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x5CC,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itBox_AFall_ProcUpdate,                 // Proc Update
    itBox_AFall_ProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018A384
itStatusDesc itCommon_Box_StatusDesc[itStatus_Box_EnumMax] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itBox_GWait_ProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itBox_SDefault_ProcDamage           // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itBox_AFall_ProcUpdate,             // Proc Update
        itBox_AFall_ProcMap,                // Proc Map
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
        itBox_AFall_ProcUpdate,             // Proc Update
        itBox_FThrow_ProcMap,               // Proc Map
        itBox_SDefault_ProcHit,             // Proc Hit
        itBox_SDefault_ProcHit,             // Proc Shield
        NULL,                               // Proc Hop
        itBox_SDefault_ProcHit,             // Proc Set-Off
        itBox_SDefault_ProcHit,             // Proc Reflector
        itBox_SDefault_ProcDamage           // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itBox_AFall_ProcUpdate,             // Proc Update
        itBox_FDrop_ProcMap,                // Proc Map
        itBox_SDefault_ProcHit,             // Proc Hit
        itBox_SDefault_ProcHit,             // Proc Shield
        NULL,                               // Proc Hop
        itBox_SDefault_ProcHit,             // Proc Set-Off
        itBox_SDefault_ProcHit,             // Proc Reflector
        itBox_SDefault_ProcDamage           // Proc Damage
    },

    // Status 5 (Neutral Explosion)
    {
        itBox_NExplode_ProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itBoxStatus
{
    itStatus_Box_GWait,
    itStatus_Box_AFall,
    itStatus_Box_FHold,
    itStatus_Box_FThrow,
    itStatus_Box_FDrop,
    itStatus_Box_NExplode,
    itStatus_Box_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80179120
void itEffect_UpdateBoxSmashGFX(GObj *effect_gobj) // Barrel/Crate smash GFX process
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

// 0x801791F4
void efParticle_BoxSmash_MakeEffect(Vec3f *pos)
{
    GObj *effect_gobj;
    efStruct *ep = efManager_GetStructNoForceReturn();
    DObj *joint;
    s32 i;
    void *temp_s4;

    if (ep != NULL)
    {
        effect_gobj = omMakeGObjCommon(omGObj_Kind_Effect, NULL, 6, 0x80000000);

        if (effect_gobj != NULL)
        {
            omAddGObjRenderProc(effect_gobj, func_80014038, 0xB, 0x80000000U, -1);

            temp_s4 = (*(uintptr_t*) ((uintptr_t)*itCommon_Box_ItemDesc.p_file + itCommon_Box_ItemDesc.offset) - (intptr_t)&D_NF_00006778) + (intptr_t)&D_NF_000068F0; // Linker thing

            for (i = 0; i < ITCONTAINER_GFX_COUNT; i++)
            {
                joint = func_800092D0(effect_gobj, temp_s4);

                func_80008CC0(joint, 0x1B, 0);

                joint->translate.vec.f = *pos;

                joint->scale.vec.f.x = (lbRandom_GetFloat() * 48.0F) + -24.0F;
                joint->scale.vec.f.y = (lbRandom_GetFloat() * 50.0F) + 10.0F;
                joint->scale.vec.f.z = (lbRandom_GetFloat() * 32.0F) + -16.0F;

                joint->dobj_f0 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                joint->dobj_f1 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
                joint->dobj_f2 = F_DEG_TO_RAD((lbRandom_GetFloat() * 100.0F) + -50.0F);
            }
            ep->effect_vars.basic1.lifetime = ITCONTAINER_GFX_LIFETIME;

            effect_gobj->user_data.p = ep;

            omAddGObjCommonProc(effect_gobj, itEffect_UpdateBoxSmashGFX, 1, 3);
        }
    }
}

// 0x80179424
sb32 itBox_SDefault_CheckSpawnItems(GObj *item_gobj)
{
    s32 random, spawn_item_num, index;
    s32 i, j;
    Vec2f *spawn_pos;
    Vec3f vel1;
    s32 unused;
    s32 sp64;
    s32 var;
    Vec3f vel2;

    func_800269C0(alSound_SFX_ContainerSmash);

    efParticle_BoxSmash_MakeEffect(&DObjGetStruct(item_gobj)->translate.vec.f);

    if (D_ovl3_8018D048.unk_0x10 != 0)
    {
        index = func_ovl3_80173090(&D_ovl3_8018D048);

        if (index <= It_Kind_CommonEnd)
        {
            random = lbRandom_GetIntRange(5);

            if (random < 2)
            {
                spawn_item_num = 1;

                spawn_pos = &itBox_SDefault_ItemSpawnVel[0];
            }
            else if (random < 3)
            {
                spawn_item_num = 2;

                spawn_pos = &itBox_SDefault_ItemSpawnVel[1];
            }
            else
            {
                spawn_item_num = 3;

                spawn_pos = &itBox_SDefault_ItemSpawnVel[3];
            }

            if (lbRandom_GetIntRange(32) == 0) // 1 in 32 chance to spawn identical items
            {
                vel1.z = 0.0F;

                for (i = 0; i < spawn_item_num; i++)
                {
                    vel1.x = spawn_pos[i].x;
                    vel1.y = spawn_pos[i].y;

                    itManager_MakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel1, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));
                }
            }
            else
            {
                sp64 = (s32)D_ovl3_8018D048.unk_0x10;

                var = D_ovl3_8018D048.unk_0x8 - 1;

                D_ovl3_8018D048.unk_0x10 = D_ovl3_8018D048.unk_0x14[var];
                D_ovl3_8018D048.unk_0x8--;

                vel2.z = 0.0F;

                for (j = 0; j < spawn_item_num; j++)
                {
                    if (j != 0)
                    {
                        index = func_ovl3_80173090(&D_ovl3_8018D048);
                    }
                    vel2.x = spawn_pos[j].x;
                    vel2.y = spawn_pos[j].y;

                    itManager_MakeItemSetupCommon(item_gobj, index, &DObjGetStruct(item_gobj)->translate.vec.f, &vel2, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));
                }
                D_ovl3_8018D048.unk_0x8++;
                D_ovl3_8018D048.unk_0x10 = (u16)sp64;
            }
            func_800269C0(alSound_SFX_FireFlowerShoot);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x8017963C
sb32 itBox_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITBOX_GRAVITY, ITBOX_T_VEL);
    itManager_UpdateSpin(item_gobj);

    return FALSE;
}

// 0x80179674
sb32 itBox_GWait_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itBox_AFall_SetStatus);

    return FALSE;
}

// 0x8017969C
sb32 itBox_SDefault_ProcHit(GObj *item_gobj)
{
    if (itBox_SDefault_CheckSpawnItems(item_gobj) != FALSE)
    {
        return TRUE;
    }
    else itBox_NExplode_CreateGFXGotoSetStatus(item_gobj);

    return FALSE;
}

// 0x801796D8
sb32 itBox_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->percent_damage >= ITBOX_HEALTH_MAX)
    {
        return itBox_SDefault_ProcHit(item_gobj);
    }
    else return FALSE;
}

// 0x80179718
sb32 itBox_AFall_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBox_GWait_SetStatus);
}

// 0x80179748
void itBox_GWait_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.z = atan2f(ip->coll_data.ground_angle.y, ip->coll_data.ground_angle.x) - F_DEG_TO_RAD(90.0F); // HALF_PI32

    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_GWait);
}

// 0x801797A4
void itBox_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_AFall);
}

// 0x801797E8
void itBox_FHold_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->next->rotate.vec.f.z = 0.0F;
    DObjGetStruct(item_gobj)->next->rotate.vec.f.y = 0.0F;

    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_FHold);
}

// 0x8017982C
sb32 itBox_FThrow_ProcMap(GObj *item_gobj)
{
    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_MAIN_MASK) != FALSE)
    {
        if (itBox_SDefault_CheckSpawnItems(item_gobj) != FALSE)
        {
            return TRUE;
        }
        else itBox_NExplode_CreateGFXGotoSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017987C
void itBox_FThrow_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32

    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_FThrow);
}

// 0x801798B8
sb32 func_ovl3_801798B8(GObj *item_gobj) // Unused
{
    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x801798DC
sb32 itBox_FDrop_ProcMap(GObj *item_gobj)
{
    return itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.5F, itBox_GWait_SetStatus);
}

// 0x8017990C
void itBox_FDrop_SetStatus(GObj *item_gobj)
{
    DObjGetStruct(item_gobj)->child->rotate.vec.f.y = F_DEG_TO_RAD(90.0F); // HALF_PI32

    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_FDrop);
}

// 0x80179948
sb32 itBox_NExplode_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi--;

    if (ip->it_multi == ITBOX_EXPLODE_FRAME_END)
    {
        return TRUE;
    }
    else itMainUpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Box_ItemDesc, lBoxHitEvents)); // Linker thing

    return FALSE;
}

// 0x801799A4
GObj* itCommon_Box_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_Box_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        DObjGetStruct(item_gobj)->rotate.vec.f.y = F_DEG_TO_RAD(90.0F);

        ip->is_damage_all = TRUE;
        ip->is_unused_item_bool = TRUE;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}

// 0x80179A34
void itBox_NExplode_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_event_index = 0;
    ip->it_multi = 0;

    ip->item_hit.hit_sfx = alSound_SFX_ExplodeL;

    ip->item_hit.can_rehit_item = TRUE;
    ip->item_hit.can_hop = FALSE;
    ip->item_hit.can_reflect = FALSE;

    ip->item_hit.stale = ITEM_STALE_DEFAULT;
    ip->item_hit.element = gmHitCollision_Element_Fire;

    ip->item_hit.can_setoff = FALSE;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainClearOwnerStats(item_gobj);
    itMainRefreshHit(item_gobj);
    itMainUpdateHitEvent(item_gobj, itGetHitEvent(itCommon_Box_ItemDesc, lBoxHitEvents)); // Linker thing
}

// 0x80179AD4
void itBox_NExplode_SetStatus(GObj *item_gobj)
{
    itBox_NExplode_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_Box_StatusDesc, itStatus_Box_NExplode);
}

// 0x80179B08
void itBox_NExplode_CreateGFXGotoSetStatus(GObj *item_gobj)
{
    efParticle *efpart;
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    efpart = efParticle_SparkleWhiteMultiExplode_MakeEffect(&joint->translate.vec.f);

    if (efpart != NULL)
    {
        efpart->effect_info->scale.vec.f.x = efpart->effect_info->scale.vec.f.y = efpart->effect_info->scale.vec.f.z = ITBOX_EXPLODE_SCALE;
    }
    efParticle_Quake_MakeEffect(1);

    DObjGetStruct(item_gobj)->flags = DOBJ_RENDERFLAG_HIDDEN;

    itBox_NExplode_SetStatus(item_gobj);
}