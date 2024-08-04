#include <it/item.h>
#include <ft/fighter.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITMBallITemAttributes;     // 0x000006E4
extern intptr_t lITMBallDataStart;          // 0x00009430
extern intptr_t lITMBallMatAnimJoint;       // 0x00009520

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITMBallItemDesc =
{
    nITKindMBall,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITMBallITemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformNull,                   // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itMBallFallProcUpdate,                  // Proc Update
    itMBallFallProcMap,                     // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITMBallStatusDescs[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itMBallWaitProcMap,                 // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itMBallFallProcUpdate,              // Proc Update
        itMBallFallProcMap,                 // Proc Map
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
        itMBallThrownProcUpdate,            // Proc Update
        itMBallThrownProcMap,               // Proc Map
        itMBallCommonProcHit,               // Proc Hit
        itMBallCommonProcHit,               // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itMBallCommonProcHit,               // Proc Set-Off
        itMBallCommonProcReflector,         // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itMBallFallProcUpdate,              // Proc Update
        itMBallThrownProcMap,               // Proc Map
        itMBallCommonProcHit,               // Proc Hit
        itMBallCommonProcHit,               // Proc Shield
        itMainCommonProcHop,                // Proc Hop
        itMBallCommonProcHit,               // Proc Set-Off
        itMBallCommonProcReflector,         // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Open)
    {
        itMBallOpenProcUpdate,             // Proc Update
        itMBallOpenProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Air Open)
    {
        itMBallOpenAirProcUpdate,             // Proc Update
        itMBallOpenAirProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itMBallCommonProcReflector,         // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itMBallStatus
{
    nITMBallStatusWait,
    nITMBallStatusFall,
    nITMBallStatusHold,
    nITMBallStatusThrown,
    nITMBallStatusDropped,
    nITMBallStatusOpen,
    nITMBallStatusOpenAir,
    nITMBallStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017C690
void itMBallOpenAddAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    void *matanim_joint = itGetPData(ip, lITMBallDataStart, lITMBallMatAnimJoint); // Linker thing

    omAddMObjAnimAll(dobj->child->child->sib_next->mobj, matanim_joint, 0.0F);
    func_8000DF34_EB34(item_gobj);
}

// 0x8017C6F8
void itMBallOpenClearAnim(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->child->sib_next->mobj->actor.p = NULL;
}

// 0x8017C710
sb32 itMBallFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_TVEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->sib_next->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C768
sb32 itMBallWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMBallFallSetStatus);

    return FALSE;
}

// 0x8017C790
sb32 itMBallFallProcMap(GObj *item_gobj)
{
    itMapCheckDestroyDropped(item_gobj, ITMBALL_MAP_REBOUND_COMMON, ITMBALL_MAP_REBOUND_GROUND, itMBallWaitSetStatus);

    return FALSE;
}

// 0x8017C7C8
void itMBallWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusWait);
}

// 0x8017C7FC
void itMBallFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusFall);
}

// 0x8017C840
void itMBallHoldSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    ip->item_vars.mball.owner_gobj = ip->owner_gobj;

    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusHold);
}

// 0x8017C880
sb32 itMBallThrownProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_TVEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->sib_next->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C8D8
sb32 itMBallThrownProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.mball.is_rebound != FALSE)
    {
        itMapCheckLanding(item_gobj, ITMBALL_MAP_REBOUND_COMMON, ITMBALL_MAP_REBOUND_GROUND, itMBallOpenSetStatus);
    }
    else itMapCheckDestroyDropped(item_gobj, ITMBALL_MAP_REBOUND_COMMON, ITMBALL_MAP_REBOUND_GROUND, itMBallOpenSetStatus);
    
    return FALSE;
}

// 0x8017C94C
sb32 itMBallCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->item_vars.mball.is_rebound = TRUE;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017C97C
sb32 itMBallCommonProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp;
    GObj *fighter_gobj;

    ip->item_hit.update_state = nGMHitUpdateDisable;

    ip->item_vars.mball.is_rebound = TRUE;

    itMainVelSetRebound(item_gobj);

    fighter_gobj = ip->item_vars.mball.owner_gobj;
    ip->owner_gobj = fighter_gobj;
    fp = ftGetStruct(fighter_gobj);

    ip->team = fp->team;
    ip->player = fp->player;
    ip->player_number = fp->player_number;
    ip->handicap = fp->handicap;

    return FALSE;
}

// 0x8017C9E0
void itMBallThrownSetStatus(GObj *item_gobj)
{
    itMBallOpenAddAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusThrown);
}

// 0x8017CA14
void itMBallDroppedSetStatus(GObj *item_gobj)
{
    itMBallOpenAddAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusDropped);
}

// 0x8017CA48
sb32 itMBallOpenProcUpdate(GObj *mball_gobj)
{
    itStruct *mball_ip = itGetStruct(mball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (mball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dITManagerMonsterSpawnID == 0)
        {
            itMainMakeMonster(mball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemKind(mball_gobj, dITManagerMonsterSpawnID + (nITKindMBallMonsterStart - 1), &DObjGetStruct(mball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

        if (monster_gobj != NULL)
        {
            monster_ip = itGetStruct(monster_gobj);

            monster_ip->owner_gobj = mball_ip->owner_gobj;
            monster_ip->team = mball_ip->team;
            monster_ip->player = mball_ip->player;
            monster_ip->handicap = mball_ip->handicap;
            monster_ip->player_number = mball_ip->player_number;
            monster_ip->display_mode = mball_ip->display_mode;
        }
        return TRUE;
    }
    mball_ip->it_multi--;

    if (mball_ip->item_vars.mball.effect_gobj != NULL)
    {
        DObjGetStruct(mball_ip->item_vars.mball.effect_gobj)->translate.vec.f = DObjGetStruct(mball_gobj)->translate.vec.f;
    }
    return FALSE;
}

// 0x8017CB38
sb32 itMBallOpenProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (mpCollisionCheckExistLineID(ip->attach_line_id) == FALSE)
    {
        ip->is_attach_surface = FALSE;

        itMBallOpenAirSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017CB84
void itMBallOpenInitItemVars(GObj *item_gobj)
{
    s32 unused[2];
    DObj *dobj = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    DObj *child;
    DObj *sibling;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    child = dobj->child;
    child->flags ^= DOBJ_FLAG_NORENDER;

    sibling = dobj->child->sib_next;
    sibling->flags ^= DOBJ_FLAG_NORENDER;

    func_800269C0_275C0(nGMSoundFGMMBallOpen);

    ip->attach_line_id = ip->coll_data.ground_line_id;

    ip->is_attach_surface = TRUE;

    if ((ip->player != -1) && (ip->player != GMBATTLE_PLAYERS_MAX))
    {
        GObj *fighter_gobj = gBattleState->players[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            ftParamMakeRumble(fp, 8, 20);
        }
    }
    ip->item_vars.mball.effect_gobj = efManagerMBallRaysMakeEffect(&dobj->translate.vec.f);

    itMBallOpenClearAnim(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;
    ip->item_hit.can_reflect = FALSE;
}

// 0x8017CC88
void itMBallOpenSetStatus(GObj *item_gobj)
{
    itMBallOpenInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusOpen);
}

// 0x8017CCBC
sb32 itMBallOpenAirProcUpdate(GObj *mball_gobj)
{
    itStruct *mball_ip = itGetStruct(mball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (mball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dITManagerMonsterSpawnID == 0)
        {
            itMainMakeMonster(mball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemKind(mball_gobj, dITManagerMonsterSpawnID + (nITKindMBallMonsterStart - 1), &DObjGetStruct(mball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

        if (monster_gobj != NULL)
        {
            monster_ip = itGetStruct(monster_gobj);

            monster_ip->owner_gobj = mball_ip->owner_gobj;
            monster_ip->team = mball_ip->team;
            monster_ip->player = mball_ip->player;
            monster_ip->handicap = mball_ip->handicap;
            monster_ip->player_number = mball_ip->player_number;
            monster_ip->display_mode = mball_ip->display_mode;
        }
        return TRUE;
    }
    mball_ip->it_multi--;

    if (mball_ip->item_vars.mball.effect_gobj != NULL)
    {
        DObjGetStruct(mball_ip->item_vars.mball.effect_gobj)->translate.vec.f = DObjGetStruct(mball_gobj)->translate.vec.f;
    }
    return FALSE;
}

// 0x8017CDAC
sb32 itMBallOpenAirProcMap(GObj *item_gobj)
{
    itMapCheckDestroyDropped(item_gobj, ITMBALL_MAP_REBOUND_COMMON, ITMBALL_MAP_REBOUND_GROUND, itMBallOpenSetStatus);

    return FALSE;
}

// 0x8017CDE4
void itMBallOpenAirSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITMBallStatusDescs, nITMBallStatusOpenAir);
}

// 0x8017CE0C
GObj* itMBallMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITMBallItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);
        Vec3f translate = dobj->translate.vec.f;

        dobj->child->flags = DOBJ_FLAG_NORENDER;
        dobj->child->sib_next->flags = DOBJ_FLAG_NONE;

        omAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj->child->sib_next, 0x46, 0);

        dobj->translate.vec.f = translate;

        ip->it_multi = ITMBALL_SPAWN_WAIT;

        ip->item_vars.mball.is_rebound = FALSE;

        ip->is_unused_item_bool = TRUE;

        dobj->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
