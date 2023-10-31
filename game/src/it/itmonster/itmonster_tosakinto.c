#include <it/item.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lTosakintoDataStart;        // 0x0000B708
extern intptr_t lTosakintoAnimJoint;        // 0x0000B7CC
extern intptr_t lTosakintoMatAnimJoint;     // 0x0000B90C

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018ABC0
itCreateDesc itMonster_Tosakinto_ItemDesc =
{
    It_Kind_Tosakinto,                      // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x7F0,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itTosakinto_SDefault_ProcUpdate,        // Proc Update
    itTosakinto_SDefault_ProcMap,           // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018ABF4 
itStatusDesc itMonster_Tosakinto_StatusDesc[/* */] =
{
    // Status 0 (Neutral Appear)
    {
        itTosakinto_NAppear_ProcUpdate,     // Proc Update
        itTosakinto_NAppear_ProcMap,        // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Splash)
    {
        itTosakinto_NSplash_ProcUpdate,     // Proc Update
        itTosakinto_NSplash_ProcMap,        // Proc Map
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
sb32 itTosakinto_NAppear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_T_VEL);

    return FALSE;
}

// 0x8017E7CC
sb32 itTosakinto_NAppear_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_TestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        itTosakinto_NSplash_SetStatus(item_gobj);

        func_800269C0(alSound_SFX_TosakintoSplash);
    }
    return FALSE;
}

// 0x8017E828
void itTosakinto_NAppear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITTOSAKINTO_LIFETIME;

    if (ip->it_kind == It_Kind_Tosakinto)
    {
        func_800269C0(alSound_Voice_MBallTosakintoSpawn);
    }
    itMain_SetItemStatus(item_gobj, itMonster_Tosakinto_StatusDesc, itStatus_Tosakinto_NAppear);
}

// 0x8017E880
sb32 itTosakinto_NSplash_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITTOSAKINTO_GRAVITY, ITTOSAKINTO_T_VEL);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017E8CC
sb32 itTosakinto_NSplash_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_TestAllCheckCollEnd(item_gobj);

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;

        if (lbRandom_GetIntRange(2) != 0)
        {
            ip->phys_info.vel_air.x = -ip->phys_info.vel_air.x;
        }
        func_800269C0(alSound_SFX_TosakintoSplash);
    }
    return FALSE;
}

// 0x8017E93C
void itTosakinto_NSplash_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *anim_joint;
    void *matanim_joint;
    s32 unused;

    ip->item_vars.tosakinto.pos = joint->translate.vec.f;

    ip->phys_info.vel_air.y = ITTOSAKINTO_FLAP_VEL_Y;
    ip->phys_info.vel_air.x = ITTOSAKINTO_FLAP_VEL_X;

    if (ip->it_kind == It_Kind_Tosakinto)
    {
        anim_joint = itGetPData(ip, lTosakintoDataStart, lTosakintoAnimJoint); // Linker thing

        omAddDObjAnimAll(joint->child, anim_joint, 0.0F);

        matanim_joint = itGetPData(ip, lTosakintoDataStart, lTosakintoMatAnimJoint); // Linker thing

        omAddMObjAnimAll(joint->child->mobj, matanim_joint, 0.0F);

        func_8000DF34(item_gobj);
    }
}

// 0x8017EA14
void itTosakinto_NSplash_SetStatus(GObj *item_gobj)
{
    itTosakinto_NSplash_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Tosakinto_StatusDesc, itStatus_Tosakinto_NSplash);
}

// 0x8017EA48
sb32 itTosakinto_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itTosakinto_NAppear_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017EA98
sb32 itTosakinto_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x8017EAD8
GObj* itMonster_Tosakinto_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Tosakinto_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        itMain_ClearOwnerStats(item_gobj);

        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x1B, 0);
        func_80008CC0(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lTosakintoDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}