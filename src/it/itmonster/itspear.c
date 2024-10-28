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
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AE00
ITCreateDesc dITSpearItemDesc =
{
    nITKindSpear,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITSpearItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMAttackStateNew,                      // Hitbox Update State
    itSpearCommonProcUpdate,                // Proc Update
    itSpearCommonProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AE34
ITStatusDesc dITSpearStatusDescs[/* */] =
{
    // Status 0 (Neutral Appear)
    {
        itSpearAppearProcUpdate,            // Proc Update
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
        itSpearFlyProcUpdate,               // Proc Update
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
WPCreateDesc dITSpearWeaponSwarmWeaponDesc =
{
    0x01,                                   // Render flags?
    nWPKindSpearSwarm,                      // Weapon Kind
    &gITManagerFileData,                    // Pointer to character's loaded files?
    &lITSpearWeaponSwarmWeaponAttributes,   // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
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
WPCreateDesc dITPippiWeaponSwarmWeaponDesc =
{
    0x01,                                   // Render flags?
    nWPKindSpearSwarm,                      // Weapon Kind
    &gITManagerFileData,                    // Pointer to character's loaded files?
    &lITPippiWeaponSwarmWeaponAttributes,   // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
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
    nITSpearStatusAppear,
    nITSpearStatusFly,
    nITSpearStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017FDC0
void itSpearFlyCallSwarmMember(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->item_vars.spear.spear_spawn_wait <= 0)
    {
        Vec3f pos = dobj->translate.vec.f;
        s32 unused;

        pos.y = ip->item_vars.spear.spear_spawn_pos_y;

        pos.y += (ITSPEAR_SPAWN_OFF_Y_MUL * mtTrigGetRandomFloat()) + ITSPEAR_SPAWN_OFF_Y_ADD;

        itSpearFlyMakeSwarm(item_gobj, &pos, ip->it_kind);

        ip->item_vars.spear.spear_spawn_count--;
        ip->item_vars.spear.spear_spawn_wait = mtTrigGetRandomIntRange(ITSPEAR_SPAWN_WAIT_RANDOM) + ITSPEAR_SPAWN_WAIT_CONST;
    }
}

// 0x8017FE70
sb32 itSpearAppearProcUpdate(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    if (item_gobj->anim_frame == ITSPEAR_SWARM_CALL_WAIT)
    {
        dobj->child->anim_joint.event32 = NULL;

        itSpearFlySetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017FEB8
void itSpearAppearInitItemVars(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->physics.vel_air.y = 0;

    if (ip->it_kind == nITKindSpear)
    {
        void *anim_joint; 
        void *matanim_joint;

        anim_joint = itGetPData(ip, lITSpearDataStart, lITSpearAnimJoint); // Linker thing

        gcAddDObjAnimJoint(dobj->child, anim_joint, 0.0F);

        matanim_joint = itGetPData(ip, lITSpearDataStart, lITSpearMatAnimJoint); // Linker thing

        gcAddMObjMatAnimJoint(dobj->child->mobj, matanim_joint, 0.0F);
        gcPlayAnimAll(item_gobj);
        func_800269C0_275C0(nSYAudioVoiceMBallSpearAppear);
    }
}

// 0x8017FF74
void itSpearAppearSetStatus(GObj *item_gobj)
{
    itSpearAppearInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITSpearStatusDescs, nITSpearStatusAppear);
}

// 0x8017FFA8
sb32 itSpearFlyProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITSPEAR_GRAVITY, ITSPEAR_TVEL);

    ip->physics.vel_air.x += ITSPEAR_SWARM_CALL_VEL_X * ip->lr;

    if (ip->lr == nGMFacingR)
    {
        if (dobj->translate.vec.f.x >= (gMPCollisionGroundData->map_bound_right - ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->physics.vel_air.x = 0.0F;
            ip->physics.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpearFlyCallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    if (ip->lr == nGMFacingL)
    {
        if (dobj->translate.vec.f.x <= (gMPCollisionGroundData->map_bound_left + ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->physics.vel_air.x = 0.0F;
            ip->physics.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpearFlyCallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    return FALSE;
}

// 0x8018010C
void itSpearFlyInitItemVars(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->physics.vel_air.y = ITSPEAR_SWARM_CALL_VEL_Y;

    ip->item_vars.spear.spear_spawn_pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y;
    ip->item_vars.spear.spear_spawn_wait = 0;
    ip->item_vars.spear.spear_spawn_count = ITSPEAR_SPAWN_COUNT;

    if (ip->it_kind == nITKindSpear)
    {
        func_800269C0_275C0(nSYAudioVoiceMBallSpearSwarm);
    }
}

// 0x80180160
void itSpearFlySetStatus(GObj *item_gobj)
{
    itSpearFlyInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITSpearStatusDescs, nITSpearStatusFly);
}

// 0x80180194
sb32 itSpearCommonProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itSpearAppearSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x801801D8
sb32 itSpearCommonProcMap(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->physics.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80180218
GObj* itSpearMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITSpearItemDesc, pos, vel, flags);
    DObj *dobj;
    ITStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);

        itMainClearOwnerStats(item_gobj);

        dobj = DObjGetStruct(item_gobj);

        gcAddXObjForDObjFixed(dobj->child, 0x48, 0);

        dobj->translate.vec.f = *pos;

        if (mtTrigGetRandomIntRange(2) == 0)
        {
            dobj->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32

            ip->lr = nGMFacingL;

        }
        else ip->lr = nGMFacingR;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->atk_coll.interact_mask = GMHITCOLLISION_FLAG_FIGHTER;

        ip->physics.vel_air.x = ip->physics.vel_air.z = 0.0F;
        ip->physics.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->object_coll_bottom;

        gcAddDObjAnimJoint(dobj->child, itGetMonsterAnimNode(ip, lITSpearDataStart), 0.0F);
    }
    return item_gobj;
}

// 0x80180354
sb32 itSpearWeaponSwarmProcUpdate(GObj *weapon_gobj)
{
    WPStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj = DObjGetStruct(weapon_gobj);

    if ((wp->lr == nGMFacingR) && (dobj->translate.vec.f.x >= (gMPCollisionGroundData->map_bound_right - ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else if ((wp->lr == nGMFacingL) && (dobj->translate.vec.f.x <= (gMPCollisionGroundData->map_bound_left + ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80180400
void itPippiWeaponSwarmRenderSwarm(GObj *item_gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjTreeForGObj(item_gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

// 0x80180480
void itPippiWeaponSwarmFuncDisplay(GObj *item_gobj)
{
    wpDisplayMain(item_gobj, itPippiWeaponSwarmRenderSwarm);
}

// 0x801804A4
GObj* itSpearWeaponSwarmMakeWeapon(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    ITStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, ((it_kind == nITKindSpear) ? &dITSpearWeaponSwarmWeaponDesc : &dITPippiWeaponSwarmWeaponDesc), pos, WEAPON_FLAG_PARENT_ITEM);
    DObj *dobj;
    s32 unused;
    WPStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = -ip->lr;

    wp->physics.vel_air.x = wp->lr * ITSPEAR_SWARM_FLY_VEL_X;

    dobj = DObjGetStruct(weapon_gobj);

    if (it_kind == nITKindSpear)
    {
        gcAddXObjForDObjFixed(dobj->child->child, 0x48, 0);

        if (wp->lr == nGMFacingL)
        {
            dobj->child->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
        }
    }
    else
    {
        weapon_gobj->func_display = itPippiWeaponSwarmFuncDisplay;

        gcAddXObjForDObjFixed(dobj->child, 0x48, 0);

        if (wp->lr == nGMFacingR)
        {
            dobj->child->rotate.vec.f.y = F_CST_DTOR32(180.0F); // PI32
        }
    }
    dobj->translate.vec.f = *pos;

    wp->is_hitlag_victim = TRUE;

    return weapon_gobj;
}

// 0x80180608
void itSpearFlyMakeSwarm(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    itSpearWeaponSwarmMakeWeapon(item_gobj, pos, it_kind);
}
