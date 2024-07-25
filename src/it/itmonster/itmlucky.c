#include <it/item.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMLuckyItemAttributes;    // 0x00000A84
extern intptr_t lITLuckyDataStart;          // 0x00010000
extern intptr_t lITLuckyAnimJoint;          // 0x000100BC

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

// 0x8018AFB0
itCreateDesc dITMLuckyItemDesc = 
{
    It_Kind_MLucky,                         // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITMLuckyItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMLuckySDefaultProcUpdate,             // Proc Update
    itMLuckySDefaultProcMap,                // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AFE4
itStatusDesc dITMLuckyStatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itMLuckyAFallProcUpdate,            // Proc Update
        itMLuckyAFallProcMap,               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Appear)
    {
        itMLuckyNAppearProcUpdate,          // Proc Update
        itMLuckyNAppearProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Egg Spawn)
    {
        itMLuckyNSpawnProcUpdate,           // Proc Update
        itMLuckyNSpawnProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMLuckyNSpawnProcDamage            // Proc Damage
    },

    // Status 3 (Neutral Disappear)
    {
        itMLuckyNDisappearProcUpdate,       // Proc Update
        itMLuckyNSpawnProcMap,              // Proc Map
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

enum itMLuckyStatus
{
    itStatus_MLucky_AFall,
    itStatus_MLucky_NAppear,
    itStatus_MLucky_NSpawn,
    itStatus_MLucky_NDisappear,
    itStatus_MLucky_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80180FC0
void itMLuckyNSpawnInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->it_kind == It_Kind_MLucky)
    {
        omAddDObjAnimAll(dobj->child, itGetPData(ip, lITLuckyDataStart, lITLuckyAnimJoint), 0.0F); // Linker thing
        func_8000DF34_EB34(item_gobj);
    }
    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

    ip->item_vars.mlucky.egg_spawn_wait = ITMLUCKY_EGG_SPAWN_WAIT_CONST;

    ip->it_multi = ITMLUCKY_EGG_SPAWN_COUNT;
}

// 0x80181048
sb32 itMLuckyAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMLUCKY_GRAVITY, ITMLUCKY_T_VEL);

    return FALSE;
}

// 0x80181074
sb32 itMLuckyAFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi != 0)
        {
            itMLuckyNSpawnSetStatus(item_gobj);
        }
        else itMLuckyNDisappearSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801810E0
void itMLuckyAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDesc, itStatus_MLucky_AFall);
}

// 0x80181124
sb32 itMLuckyNAppearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMLUCKY_GRAVITY, ITMLUCKY_T_VEL);

    return FALSE;
}

// 0x80181150
sb32 itMLuckyNAppearProcMap(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ap->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ap->phys_info.vel_air.y = 0.0F;

        itMLuckyNSpawnSetStatus(item_gobj);

        itMLuckyNSpawnInitItemVars(item_gobj);
    }
    return FALSE;
}

// 0x801811AC
void itMLuckyNAppearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_kind == It_Kind_MLucky)
    {
        func_800269C0_275C0(alSound_Voice_MBallLuckySpawn);
    }
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDesc, itStatus_MLucky_NAppear);
}

// 0x80181200
sb32 itMLuckyNSpawnProcUpdate(GObj *lucky_gobj)
{
    itStruct *lucky_ip = itGetStruct(lucky_gobj), *egg_ip;
    DObj *dobj = DObjGetStruct(lucky_gobj);
    GObj *egg_gobj;
    s32 unused;
    Vec3f pos;
    Vec3f vel;

    if (lucky_ip->it_multi == 0)
    {
        itMLuckyNDisappearSetStatus(lucky_gobj);

        return FALSE;
    }
    else
    {
        if (!lucky_ip->item_vars.mlucky.egg_spawn_wait)
        {
            if ((gBattleState->item_toggles & ITEM_TOGGLE_MASK_KIND(It_Kind_Egg)) && (gBattleState->item_switch != gmMatch_ItemSwitch_None))
            {
                pos = dobj->translate.vec.f;

                vel.x = (mtTrigGetRandomFloat() * ITMLUCKY_EGG_SPAWN_BASE_VEL) + ITMLUCKY_EGG_SPAWN_ADD_VEL_X;
                vel.y = (mtTrigGetRandomFloat() * ITMLUCKY_EGG_SPAWN_BASE_VEL) + ITMLUCKY_EGG_SPAWN_ADD_VEL_Y;
                vel.z = 0.0F;

                egg_gobj = itManagerMakeItemSetupCommon(lucky_gobj, It_Kind_Egg, &pos, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0_275C0(alSound_SFX_KirbySpecialLwStart);

                    lucky_ip->item_vars.mlucky.egg_spawn_wait = ITMLUCKY_EGG_SPAWN_WAIT_CONST;
                    lucky_ip->it_multi--;

                    efManagerDustLightMakeEffect(&pos, egg_ip->lr, 1.0F);
                }
            }
            else
            {
                lucky_ip->item_vars.mlucky.egg_spawn_wait = ITMLUCKY_EGG_SPAWN_WAIT_CONST;
                lucky_ip->it_multi--;
            }
        }
        if (lucky_ip->item_vars.mlucky.egg_spawn_wait > 0)
        {
            lucky_ip->item_vars.mlucky.egg_spawn_wait--;
        }
    }
    return FALSE;
}

// 0x80181368
sb32 itMLuckyNSpawnProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMLuckyAFallSetStatus);

    return FALSE;
}

// 0x80181390
sb32 itMLuckyNSpawnProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.egg_spawn_wait += ITMLUCKY_EGG_SPAWN_WAIT_ADD;

    return FALSE;
}

// 0x801813A8
void itMLuckyNSpawnSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDesc, itStatus_MLucky_NSpawn);
}

// 0x801813D0
sb32 itMLuckyNDisappearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.mlucky.lifetime == 0)
    {
        return TRUE;
    }
    ip->item_vars.mlucky.lifetime--;

    return FALSE;
}

// 0x801813F8
void itMLuckyNDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.lifetime = ITMLUCKY_LIFETIME;

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

    itMainSetItemStatus(item_gobj, dITMLuckyStatusDesc, itStatus_MLucky_NDisappear);
}

// 0x80181430
sb32 itMLuckySDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMLuckyNAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80181480
sb32 itMLuckySDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801814C0
GObj* itMLuckyMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITMLuckyItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj->child, 0x2C, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;
        
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj->next, itGetMonsterAnimNode(ip, lITLuckyDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}
