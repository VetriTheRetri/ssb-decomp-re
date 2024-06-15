#include <it/item.h>
#include <wp/weapon.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //


extern intptr_t lITSpearItemAttributes;     // 0x0000098C
extern intptr_t 
lITSpearWeaponSwarmWeaponAttributes;        // 0x000009D4
extern intptr_t 
lITPippiWeaponSwarmWeaponAttributes;        // 0x00000CBC
extern intptr_t lITSpearDataStart;          // 0x0000DF38
extern intptr_t lITSpearAnimJoint;          // 0x0000DFFC
extern intptr_t lITSpearMatAnimJoint;       // 0x0000E12C

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AE00
itCreateDesc dITSpearItemDesc =
{
    It_Kind_Spear,                          // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITSpearItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itSpearSDefaultProcUpdate,              // Proc Update
    itSpearSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AE34
itStatusDesc dITSpearStatusDesc[/* */] =
{
    // Status 0 (Neutral Appear)
    {
        itSpearNAppearProcUpdate,           // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Fly)
    {
        itSpearNFlyProcUpdate,              // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018AE74
wpCreateDesc dITSpearWeaponSwarmWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_SpearSwarm,                     // Weapon Kind
    &gITFileData,                           // Pointer to character's loaded files?
    &lITSpearWeaponSwarmWeaponAttributes,   // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itSpearWeaponSwarmProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Absorb
};

// 0x8018AEA8
wpCreateDesc dITPippiWeaponSwarmWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_SpearSwarm,                     // Weapon Kind
    &gITFileData,                           // Pointer to character's loaded files?
    0xCBC,                                  // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itSpearWeaponSwarmProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itSpearStatus
{
    itStatus_Spear_NAppear,
    itStatus_Spear_NFly,
    itStatus_Spear_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017FDC0
void itSpearNFlyCallSwarmMember(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.spear.spear_spawn_wait <= 0)
    {
        Vec3f pos = dobj->translate.vec.f;
        s32 unused;

        pos.y = ip->item_vars.spear.spear_spawn_pos_y;

        pos.y += (ITSPEAR_SPAWN_OFF_Y_MUL * mtTrigGetRandomFloat()) + ITSPEAR_SPAWN_OFF_Y_ADD;

        itSpearNFlyMakeSwarm(item_gobj, &pos, ip->it_kind);

        ip->item_vars.spear.spear_spawn_count--;
        ip->item_vars.spear.spear_spawn_wait = mtTrigGetRandomIntRange(ITSPEAR_SPAWN_WAIT_RANDOM) + ITSPEAR_SPAWN_WAIT_CONST;
    }
}

// 0x8017FE70
sb32 itSpearNAppearProcUpdate(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    if (item_gobj->anim_frame == ITSPEAR_SWARM_CALL_WAIT)
    {
        dobj->child->actor.p = NULL;

        itSpearNFlySetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017FEB8
void itSpearNAppearInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->phys_info.vel_air.y = 0;

    if (ip->it_kind == It_Kind_Spear)
    {
        void *anim_joint; 
        void *matanim_joint;

        anim_joint = itGetPData(ip, lITSpearDataStart, lITSpearAnimJoint); // Linker thing

        omAddDObjAnimAll(dobj->child, anim_joint, 0.0F);

        matanim_joint = itGetPData(ip, lITSpearDataStart, lITSpearMatAnimJoint); // Linker thing

        omAddMObjAnimAll(dobj->child->mobj, matanim_joint, 0.0F);
        func_8000DF34_EB34(item_gobj);
        func_800269C0_275C0(alSound_Voice_MBallSpearSpawn);
    }
}

// 0x8017FF74
void itSpearNAppearSetStatus(GObj *item_gobj)
{
    itSpearNAppearInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITSpearStatusDesc, itStatus_Spear_NAppear);
}

// 0x8017FFA8
sb32 itSpearNFlyProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITSPEAR_GRAVITY, ITSPEAR_T_VEL);

    ip->phys_info.vel_air.x += ITSPEAR_SWARM_CALL_VEL_X * ip->lr;

    if (ip->lr == LR_Right)
    {
        if (dobj->translate.vec.f.x >= (gGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->phys_info.vel_air.x = 0.0F;
            ip->phys_info.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpearNFlyCallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    if (ip->lr == LR_Left)
    {
        if (dobj->translate.vec.f.x <= (gGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->phys_info.vel_air.x = 0.0F;
            ip->phys_info.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpearNFlyCallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    return FALSE;
}

// 0x8018010C
void itSpearNFlyInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.y = ITSPEAR_SWARM_CALL_VEL_Y;

    ip->item_vars.spear.spear_spawn_pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y;
    ip->item_vars.spear.spear_spawn_wait = 0;
    ip->item_vars.spear.spear_spawn_count = ITSPEAR_SPAWN_COUNT;

    if (ip->it_kind == It_Kind_Spear)
    {
        func_800269C0_275C0(alSound_Voice_MBallSpearSwarm);
    }
}

// 0x80180160
void itSpearNFlySetStatus(GObj *item_gobj)
{
    itSpearNFlyInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITSpearStatusDesc, itStatus_Spear_NFly);
}

// 0x80180194
sb32 itSpearSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itSpearNAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x801801D8
sb32 itSpearSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80180218
GObj* itSpearMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITSpearItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);

        itMainClearOwnerStats(item_gobj);

        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj->child, 0x48, 0);

        dobj->translate.vec.f = *pos;

        if (mtTrigGetRandomIntRange(2) == 0)
        {
            dobj->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32

            ip->lr = LR_Left;

        }
        else ip->lr = LR_Right;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj->child, itGetMonsterAnimNode(ip, lITSpearDataStart), 0.0F);
    }
    return item_gobj;
}

// 0x80180354
sb32 itSpearWeaponSwarmProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj = DObjGetStruct(weapon_gobj);

    if ((wp->lr == LR_Right) && (dobj->translate.vec.f.x >= (gGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else if ((wp->lr == LR_Left) && (dobj->translate.vec.f.x <= (gGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80180400
void itPippiWeaponSwarmRenderSwarm(GObj *item_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    odRenderDObjTreeForGObj(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80180480
void itPippiWeaponSwarmProcRender(GObj *item_gobj)
{
    wpRenderMain(item_gobj, itPippiWeaponSwarmRenderSwarm);
}

// 0x801804A4
GObj* itSpearWeaponSwarmMakeWeapon(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, ((it_kind == It_Kind_Spear) ? &dITSpearWeaponSwarmWeaponDesc : &dITPippiWeaponSwarmWeaponDesc), pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *dobj;
    s32 unused;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = -ip->lr;

    wp->phys_info.vel_air.x = wp->lr * ITSPEAR_SWARM_FLY_VEL_X;

    dobj = DObjGetStruct(weapon_gobj);

    if (it_kind == It_Kind_Spear)
    {
        omAddOMMtxForDObjFixed(dobj->child->child, 0x48, 0);

        if (wp->lr == LR_Left)
        {
            dobj->child->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
        }
    }
    else
    {
        weapon_gobj->proc_render = itPippiWeaponSwarmProcRender;

        omAddOMMtxForDObjFixed(dobj->child, 0x48, 0);

        if (wp->lr == LR_Right)
        {
            dobj->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
        }
    }
    dobj->translate.vec.f = *pos;

    wp->is_hitlag_victim = TRUE;

    return weapon_gobj;
}

// 0x80180608
void itSpearNFlyMakeSwarm(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    itSpearWeaponSwarmMakeWeapon(item_gobj, pos, it_kind);
}
