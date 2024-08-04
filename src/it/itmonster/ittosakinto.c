#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITTosakintoItemAttributes; // 0x000007F0
extern intptr_t lITTosakintoDataStart;      // 0x0000B708
extern intptr_t lITTosakintoAnimJoint;      // 0x0000B7CC
extern intptr_t lITTosakintoMatAnimJoint;   // 0x0000B90C

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018ABC0
itCreateDesc dITTosakintoItemDesc =
{
    nITKindTosakinto,                      // Item Kind
    &gITManagerFileData,                           // Pointer to item file data?
    &lITTosakintoItemAttributes,            // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformNull,               // Main matrix transformations
        nOMTransformNull,               // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateDisable,     // Hitbox Update State
    itTosakintoCommonProcUpdate,          // Proc Update
    itTosakintoCommonProcMap,             // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018ABF4 
itStatusDesc dITTosakintoStatusDescs[/* */] =
{
    // Status 0 (Neutral Appear)
    {
        itTosakintoNAppearProcUpdate,       // Proc Update
        itTosakintoNAppearProcMap,          // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Splash)
    {
        itTosakintoNSplashProcUpdate,       // Proc Update
        itTosakintoNSplashProcMap,          // Proc Map
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

enum itTosakintoStatus
{
    itStatus_Tosakinto_NAppear,
    itStatus_Tosakinto_NSplash,
    itStatus_Tosakinto_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017E7A0
sb32 itTosakintoNAppearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_TVEL);

    return FALSE;
}

// 0x8017E7CC
sb32 itTosakintoNAppearProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        itTosakintoNSplashSetStatus(item_gobj);

        func_800269C0_275C0(nGMSoundFGMTosakintoSplash);
    }
    return FALSE;
}

// 0x8017E828
void itTosakintoNAppearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITTOSAKINTO_LIFETIME;

    if (ip->it_kind == nITKindTosakinto)
    {
        func_800269C0_275C0(nGMSoundVoiceMBallTosakintoSpawn);
    }
    itMainSetItemStatus(item_gobj, dITTosakintoStatusDescs, itStatus_Tosakinto_NAppear);
}

// 0x8017E880
sb32 itTosakintoNSplashProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_TVEL);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017E8CC
sb32 itTosakintoNSplashProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMapTestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        if (mtTrigGetRandomIntRange(2) != 0)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
        }
        func_800269C0_275C0(nGMSoundFGMTosakintoSplash);
    }
    return FALSE;
}

// 0x8017E93C
void itTosakintoNSplashInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    void *anim_joint;
    void *matanim_joint;
    s32 unused;

    ip->item_vars.tosakinto.pos = dobj->translate.vec.f;

    ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;
    ip->phys_info.vel_air.x = ITTOSAKINTO_FLAP_VEL_X;

    if (ip->it_kind == nITKindTosakinto)
    {
        anim_joint = itGetPData(ip, lITTosakintoDataStart, lITTosakintoAnimJoint); // Linker thing

        omAddDObjAnimAll(dobj->child, anim_joint, 0.0F);

        matanim_joint = itGetPData(ip, lITTosakintoDataStart, lITTosakintoMatAnimJoint); // Linker thing

        omAddMObjAnimAll(dobj->child->mobj, matanim_joint, 0.0F);

        func_8000DF34_EB34(item_gobj);
    }
}

// 0x8017EA14
void itTosakintoNSplashSetStatus(GObj *item_gobj)
{
    itTosakintoNSplashInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITTosakintoStatusDescs, itStatus_Tosakinto_NSplash);
}

// 0x8017EA48
sb32 itTosakintoCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itTosakintoNAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017EA98
sb32 itTosakintoCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017EAD8
GObj* itTosakintoMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITTosakintoItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        itMainClearOwnerStats(item_gobj);

        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetMonsterAnimNode(ip, lITTosakintoDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}
