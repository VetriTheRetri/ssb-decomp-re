#include <it/item.h>
#include <sc/scene.h>

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
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AFB0
itCreateDesc dITMLuckyItemDesc = 
{
    nITKindMLucky,                          // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITMLuckyItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,             // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itMLuckyCommonProcUpdate,               // Proc Update
    itMLuckyCommonProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AFE4
itStatusDesc dITMLuckyStatusDescs[/* */] =
{
    // Status 0 (Air Fall)
    {
        itMLuckyFallProcUpdate,             // Proc Update
        itMLuckyFallProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Appear)
    {
        itMLuckyAppearProcUpdate,           // Proc Update
        itMLuckyAppearProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Egg Spawn)
    {
        itMLuckyMakeEggProcUpdate,          // Proc Update
        itMLuckyMakeEggProcMap,             // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itMLuckyMakeEggProcDamage           // Proc Damage
    },

    // Status 3 (Neutral Disappear)
    {
        itMLuckyDisappearProcUpdate,        // Proc Update
        itMLuckyMakeEggProcMap,             // Proc Map
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
    nITMLuckyStatusFall,
    nITMLuckyStatusAppear,
    nITMLuckyStatusMakeEgg,
    nITMLuckyStatusDisappear,
    nITMLuckyStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80180FC0
void itMLuckyMakeEggInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->it_kind == nITKindMLucky)
    {
        gcAddDObjAnimJoint(dobj->child, itGetPData(ip, lITLuckyDataStart, lITLuckyAnimJoint), 0.0F); // Linker thing
        gcPlayAnimAll(item_gobj);
    }
    ip->item_hurt.hitstatus = nGMHitStatusNormal;

    ip->item_vars.mlucky.egg_spawn_wait = ITMLUCKY_EGG_SPAWN_WAIT_CONST;

    ip->it_multi = ITMLUCKY_EGG_SPAWN_COUNT;
}

// 0x80181048
sb32 itMLuckyFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITMLUCKY_GRAVITY, ITMLUCKY_TVEL);

    return FALSE;
}

// 0x80181074
sb32 itMLuckyFallProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_FLAG_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        if (ip->it_multi != 0)
        {
            itMLuckyMakeEggSetStatus(item_gobj);
        }
        else itMLuckyDisappearSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x801810E0
void itMLuckyFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDescs, nITMLuckyStatusFall);
}

// 0x80181124
sb32 itMLuckyAppearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITMLUCKY_GRAVITY, ITMLUCKY_TVEL);

    return FALSE;
}

// 0x80181150
sb32 itMLuckyAppearProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_FLAG_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMLuckyMakeEggSetStatus(item_gobj);

        itMLuckyMakeEggInitItemVars(item_gobj);
    }
    return FALSE;
}

// 0x801811AC
void itMLuckyAppearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_kind == nITKindMLucky)
    {
        func_800269C0_275C0(nSYAudioVoiceMBallLuckyAppear);
    }
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDescs, nITMLuckyStatusAppear);
}

// 0x80181200
sb32 itMLuckyMakeEggProcUpdate(GObj *lucky_gobj)
{
    itStruct *lucky_ip = itGetStruct(lucky_gobj), *egg_ip;
    DObj *dobj = DObjGetStruct(lucky_gobj);
    GObj *egg_gobj;
    s32 unused;
    Vec3f pos;
    Vec3f vel;

    if (lucky_ip->it_multi == 0)
    {
        itMLuckyDisappearSetStatus(lucky_gobj);

        return FALSE;
    }
    else
    {
        if (!lucky_ip->item_vars.mlucky.egg_spawn_wait)
        {
            if ((gBattleState->item_toggles & ITEM_TOGGLE_MASK_KIND(nITKindEgg)) && (gBattleState->item_switch != nSCBattleItemSwitchNone))
            {
                pos = dobj->translate.vec.f;

                vel.x = (mtTrigGetRandomFloat() * ITMLUCKY_EGG_SPAWN_BASE_VEL) + ITMLUCKY_EGG_SPAWN_ADD_VEL_X;
                vel.y = (mtTrigGetRandomFloat() * ITMLUCKY_EGG_SPAWN_BASE_VEL) + ITMLUCKY_EGG_SPAWN_ADD_VEL_Y;
                vel.z = 0.0F;

                egg_gobj = itManagerMakeItemSetupCommon(lucky_gobj, nITKindEgg, &pos, &vel, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0_275C0(nSYAudioFGMKirbySpecialLwStart);

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
sb32 itMLuckyMakeEggProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMLuckyFallSetStatus);

    return FALSE;
}

// 0x80181390
sb32 itMLuckyMakeEggProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.egg_spawn_wait += ITMLUCKY_EGG_SPAWN_WAIT_ADD;

    return FALSE;
}

// 0x801813A8
void itMLuckyMakeEggSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITMLuckyStatusDescs, nITMLuckyStatusMakeEgg);
}

// 0x801813D0
sb32 itMLuckyDisappearProcUpdate(GObj *item_gobj)
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
void itMLuckyDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_vars.mlucky.lifetime = ITMLUCKY_LIFETIME;

    ip->item_hurt.hitstatus = nGMHitStatusNone;

    itMainSetItemStatus(item_gobj, dITMLuckyStatusDescs, nITMLuckyStatusDisappear);
}

// 0x80181430
sb32 itMLuckyCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMLuckyAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80181480
sb32 itMLuckyCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x801814C0
GObj* itMLuckyMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITMLuckyItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        gcAddOMMtxForDObjFixed(dobj->child, 0x2C, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;
        
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objcoll_bottom;

        gcAddDObjAnimJoint(dobj->child, itGetMonsterAnimNode(ip, lITLuckyDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}
