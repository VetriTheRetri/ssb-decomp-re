#include <it/item.h>
#include <wp/weapon.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lSpearDataStart;        // 0x0000DF38
extern intptr_t lSpearAnimJoint;        // 0x0000DFFC
extern intptr_t lSpearMatAnimJoint;     // 0x0000E12C

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AE00
itCreateDesc itMonster_Spear_ItemDesc =
{
    It_Kind_Spear,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x98C,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itSpear_SDefault_ProcUpdate,            // Proc Update
    itSpear_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AE34
itStatusDesc itMonster_Spear_StatusDesc[/* */] =
{
    // Status 0 (Neutral Appear)
    {
        itSpear_NAppear_ProcUpdate,         // Proc Update
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
        itSpear_NFly_ProcUpdate,            // Proc Update
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
wpCreateDesc wpSpear_Swarm_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_SpearSwarm,                     // Weapon Kind
    &gItemFileData,                         // Pointer to character's loaded files?
    0x9D4,                                  // Offset of weapon attributes in loaded files
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpSpear_Swarm_ProcUpdate,               // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Absorb
};

// 0x8018AEA8
wpCreateDesc wpPippi_Swarm_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_SpearSwarm,                     // Weapon Kind
    &gItemFileData,                         // Pointer to character's loaded files?
    0xCBC,                                  // Offset of weapon attributes in loaded files
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpSpear_Swarm_ProcUpdate,               // Proc Update
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
void itSpear_NFly_CallSwarmMember(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.spear.spear_spawn_wait <= 0)
    {
        Vec3f pos = joint->translate.vec.f;
        s32 unused;

        pos.y = ip->item_vars.spear.spear_spawn_pos_y;

        pos.y += (ITSPEAR_SPAWN_OFF_Y_MUL * lbRandom_GetFloat()) + ITSPEAR_SPAWN_OFF_Y_ADD;

        itSpear_NFly_MakeSwarm(item_gobj, &pos, ip->it_kind);

        ip->item_vars.spear.spear_spawn_count--;
        ip->item_vars.spear.spear_spawn_wait = lbRandom_GetIntRange(ITSPEAR_SPAWN_WAIT_RANDOM) + ITSPEAR_SPAWN_WAIT_CONST;
    }
}

// 0x8017FE70
sb32 itSpear_NAppear_ProcUpdate(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    if (item_gobj->anim_frame == ITSPEAR_SWARM_CALL_WAIT)
    {
        joint->child->actor.p = NULL;

        itSpear_NFly_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017FEB8
void itSpear_NAppear_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = 0;

    ip->phys_info.vel_air.y = 0;

    if (ip->it_kind == It_Kind_Spear)
    {
        void *anim_joint; 
        void *matanim_joint;

        anim_joint = itGetPData(ip, lSpearDataStart, lSpearAnimJoint); // Linker thing

        omAddDObjAnimAll(joint->child, anim_joint, 0.0F);

        matanim_joint = itGetPData(ip, lSpearDataStart, lSpearMatAnimJoint); // Linker thing

        omAddMObjAnimAll(joint->child->mobj, matanim_joint, 0.0F);
        func_8000DF34(item_gobj);
        func_800269C0(alSound_Voice_MBallSpearSpawn);
    }
}

// 0x8017FF74
void itSpear_NAppear_SetStatus(GObj *item_gobj)
{
    itSpear_NAppear_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Spear_StatusDesc, itStatus_Spear_NAppear);
}

// 0x8017FFA8
sb32 itSpear_NFly_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITSPEAR_GRAVITY, ITSPEAR_T_VEL);

    ip->phys_info.vel_air.x += ITSPEAR_SWARM_CALL_VEL_X * ip->lr;

    if (ip->lr == LR_Right)
    {
        if (joint->translate.vec.f.x >= (gGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->phys_info.vel_air.x = 0.0F;
            ip->phys_info.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpear_NFly_CallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    if (ip->lr == LR_Left)
    {
        if (joint->translate.vec.f.x <= (gGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X))
        {
            ip->phys_info.vel_air.x = 0.0F;
            ip->phys_info.vel_air.y = 0.0F;

            if (ip->item_vars.spear.spear_spawn_count != 0)
            {
                itSpear_NFly_CallSwarmMember(item_gobj);
            }
            else return TRUE;

            ip->item_vars.spear.spear_spawn_wait--;
        }
    }
    return FALSE;
}

// 0x8018010C
void itSpear_NFly_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->phys_info.vel_air.y = ITSPEAR_SWARM_CALL_VEL_Y;

    ip->item_vars.spear.spear_spawn_pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y;
    ip->item_vars.spear.spear_spawn_wait = 0;
    ip->item_vars.spear.spear_spawn_count = ITSPEAR_SPAWN_COUNT;

    if (ip->it_kind == It_Kind_Spear)
    {
        func_800269C0(alSound_Voice_MBallSpearSwarm);
    }
}

// 0x80180160
void itSpear_NFly_SetStatus(GObj *item_gobj)
{
    itSpear_NFly_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Spear_StatusDesc, itStatus_Spear_NFly);
}

// 0x80180194
sb32 itSpear_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itSpear_NAppear_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x801801D8
sb32 itSpear_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80180218
GObj* itMonster_Spear_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Spear_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        ip = itGetStruct(item_gobj);

        itMainClearOwnerStats(item_gobj);

        joint = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(joint->child, 0x48, 0);

        joint->translate.vec.f = *pos;

        if (lbRandom_GetIntRange(2) == 0)
        {
            joint->child->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32

            ip->lr = LR_Left;

        }
        else ip->lr = LR_Right;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint->child, itGetPData(ip, lSpearDataStart, lMonsterAnimBankStart), 0.0F);
    }
    return item_gobj;
}

// 0x80180354
sb32 wpSpear_Swarm_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj);

    if ((wp->lr == LR_Right) && (joint->translate.vec.f.x >= (gGroundInfo->blastzone_right - ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else if ((wp->lr == LR_Left) && (joint->translate.vec.f.x <= (gGroundInfo->blastzone_left + ITSPEAR_SWARM_CALL_OFF_X)))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80180400
void wpPippi_Swarm_RenderSwarm(GObj *item_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014038(item_gobj);

    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80180480
void wpPippi_Swarm_ProcRender(GObj *item_gobj)
{
    func_ovl3_80167520(item_gobj, wpPippi_Swarm_RenderSwarm);
}

// 0x801804A4
GObj* wpSpear_Swarm_MakeWeapon(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    itStruct *ap = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, ((it_kind == It_Kind_Spear) ? &wpSpear_Swarm_WeaponDesc : &wpPippi_Swarm_WeaponDesc), pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    s32 unused;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = -ap->lr;

    wp->phys_info.vel_air.x = wp->lr * ITSPEAR_SWARM_FLY_VEL_X;

    joint = DObjGetStruct(weapon_gobj);

    if (it_kind == It_Kind_Spear)
    {
        omAddOMMtxForDObjFixed(joint->child->child, 0x48, 0);

        if (wp->lr == LR_Left)
        {
            joint->child->child->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
        }
    }
    else
    {
        weapon_gobj->proc_render = wpPippi_Swarm_ProcRender;

        omAddOMMtxForDObjFixed(joint->child, 0x48, 0);

        if (wp->lr == LR_Right)
        {
            joint->child->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
        }
    }
    joint->translate.vec.f = *pos;

    wp->is_hitlag_victim = TRUE;

    return weapon_gobj;
}

// 0x80180608
void itSpear_NFly_MakeSwarm(GObj *item_gobj, Vec3f *pos, s32 it_kind)
{
    wpSpear_Swarm_MakeWeapon(item_gobj, pos, it_kind);
}