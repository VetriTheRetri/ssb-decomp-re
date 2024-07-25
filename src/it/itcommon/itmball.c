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
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITMBallItemDesc =
{
    It_Kind_MBall,                          // Item Kind
    &gITFileData,                           // Pointer to item file data?
    &lITMBallITemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMBallAFallProcUpdate,                 // Proc Update
    itMBallAFallProcMap,                    // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITMBallStatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itMBallGWaitProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itMBallAFallProcUpdate,             // Proc Update
        itMBallAFallProcMap,                // Proc Map
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
        itMBallFThrowProcUpdate,            // Proc Update
        itMBallFThrowProcMap,               // Proc Map
        itMBallSDefaultProcHit,             // Proc Hit
        itMBallSDefaultProcHit,             // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itMBallSDefaultProcHit,             // Proc Set-Off
        itMBallSDefaultProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itMBallAFallProcUpdate,             // Proc Update
        itMBallFThrowProcMap,               // Proc Map
        itMBallSDefaultProcHit,             // Proc Hit
        itMBallSDefaultProcHit,             // Proc Shield
        itMainSDefaultProcHop,            // Proc Hop
        itMBallSDefaultProcHit,             // Proc Set-Off
        itMBallSDefaultProcReflector,       // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Open)
    {
        itMBallGOpenProcUpdate,             // Proc Update
        itMBallGOpenProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Air Open)
    {
        itMBallAOpenProcUpdate,             // Proc Update
        itMBallAOpenProcMap,                // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itMBallSDefaultProcReflector,       // Proc Reflector
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
    itStatus_MBall_GWait,
    itStatus_MBall_AFall,
    itStatus_MBall_FHold,
    itStatus_MBall_FThrow,
    itStatus_MBall_FDrop,
    itStatus_MBall_GOpen,
    itStatus_MBall_AOpen,
    itStatus_MBall_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017C690
void itMBallGOpenAddAnim(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    void *matanim_joint = itGetPData(ip, lITMBallDataStart, lITMBallMatAnimJoint); // Linker thing

    omAddMObjAnimAll(dobj->child->child->sib_next->mobj, matanim_joint, 0.0F);
    func_8000DF34_EB34(item_gobj);
}

// 0x8017C6F8
void itMBallGOpenClearAnim(GObj *item_gobj)
{
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->child->sib_next->mobj->actor.p = NULL;
}

// 0x8017C710
sb32 itMBallAFallProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->sib_next->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C768
sb32 itMBallGWaitProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMBallAFallSetStatus);

    return FALSE;
}

// 0x8017C790
sb32 itMBallAFallProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBallGWaitSetStatus);

    return FALSE;
}

// 0x8017C7C8
void itMBallGWaitSetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_GWait);
}

// 0x8017C7FC
void itMBallAFallSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_AFall);
}

// 0x8017C840
void itMBallFHoldSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    ip->item_vars.m_ball.owner_gobj = ip->owner_gobj;

    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_FHold);
}

// 0x8017C880
sb32 itMBallFThrowProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itVisualsUpdateSpin(item_gobj);

    dobj->child->sib_next->rotate.vec.f.z = dobj->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C8D8
sb32 itMBallFThrowProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.m_ball.is_rebound != FALSE)
    {
        itMapCheckMapCollideLanding(item_gobj, 0.2F, 0.2F, itMBallGOpenSetStatus);
    }
    else itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBallGOpenSetStatus);
    
    return FALSE;
}

// 0x8017C94C
sb32 itMBallSDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->item_vars.m_ball.is_rebound = TRUE;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017C97C
sb32 itMBallSDefaultProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp;
    GObj *fighter_gobj;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->item_vars.m_ball.is_rebound = TRUE;

    itMainVelSetRebound(item_gobj);

    fighter_gobj = ip->item_vars.m_ball.owner_gobj;
    ip->owner_gobj = fighter_gobj;
    fp = ftGetStruct(fighter_gobj);

    ip->team = fp->team;
    ip->player = fp->player;
    ip->player_number = fp->player_number;
    ip->handicap = fp->handicap;

    return FALSE;
}

// 0x8017C9E0
void itMBallFThrowSetStatus(GObj *item_gobj)
{
    itMBallGOpenAddAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_FThrow);
}

// 0x8017CA14
void itMBallFDropSetStatus(GObj *item_gobj)
{
    itMBallGOpenAddAnim(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_FDrop);
}

// 0x8017CA48
sb32 itMBallGOpenProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dITMonsterSpawnID == 0)
        {
            itMainMakeMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemID(m_ball_gobj, dITMonsterSpawnID + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

        if (monster_gobj != NULL)
        {
            monster_ip = itGetStruct(monster_gobj);

            monster_ip->owner_gobj = m_ball_ip->owner_gobj;
            monster_ip->team = m_ball_ip->team;
            monster_ip->player = m_ball_ip->player;
            monster_ip->handicap = m_ball_ip->handicap;
            monster_ip->player_number = m_ball_ip->player_number;
            monster_ip->display_mode = m_ball_ip->display_mode;
        }
        return TRUE;
    }
    m_ball_ip->it_multi--;

    if (m_ball_ip->item_vars.m_ball.effect_gobj != NULL)
    {
        DObjGetStruct(m_ball_ip->item_vars.m_ball.effect_gobj)->translate.vec.f = DObjGetStruct(m_ball_gobj)->translate.vec.f;
    }
    return FALSE;
}

// 0x8017CB38
sb32 itMBallGOpenProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (mpCollision_CheckExistLineID(ip->attach_line_id) == FALSE)
    {
        ip->is_attach_surface = FALSE;

        itMBallAOpenSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017CB84
void itMBallGOpenInitItemVars(GObj *item_gobj)
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

    func_800269C0_275C0(alSound_SFX_MBallOpen);

    ip->attach_line_id = ip->coll_data.ground_line_id;

    ip->is_attach_surface = TRUE;

    if ((ip->player != -1) && (ip->player != GMMATCH_PLAYERS_MAX))
    {
        GObj *fighter_gobj = gBattleState->player_block[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            ftMainMakeRumble(fp, 8, 20);
        }
    }
    ip->item_vars.m_ball.effect_gobj = efManagerMBallRaysMakeEffect(&dobj->translate.vec.f);

    itMBallGOpenClearAnim(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    ip->item_hit.can_reflect = FALSE;
}

// 0x8017CC88
void itMBallGOpenSetStatus(GObj *item_gobj)
{
    itMBallGOpenInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_GOpen);
}

// 0x8017CCBC
sb32 itMBallAOpenProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dITMonsterSpawnID == 0)
        {
            itMainMakeMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemID(m_ball_gobj, dITMonsterSpawnID + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

        if (monster_gobj != NULL)
        {
            monster_ip = itGetStruct(monster_gobj);

            monster_ip->owner_gobj = m_ball_ip->owner_gobj;
            monster_ip->team = m_ball_ip->team;
            monster_ip->player = m_ball_ip->player;
            monster_ip->handicap = m_ball_ip->handicap;
            monster_ip->player_number = m_ball_ip->player_number;
            monster_ip->display_mode = m_ball_ip->display_mode;
        }
        return TRUE;
    }
    m_ball_ip->it_multi--;

    if (m_ball_ip->item_vars.m_ball.effect_gobj != NULL)
    {
        DObjGetStruct(m_ball_ip->item_vars.m_ball.effect_gobj)->translate.vec.f = DObjGetStruct(m_ball_gobj)->translate.vec.f;
    }
    return FALSE;
}

// 0x8017CDAC
sb32 itMBallAOpenProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBallGOpenSetStatus);

    return FALSE;
}

// 0x8017CDE4
void itMBallAOpenSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITMBallStatusDesc, itStatus_MBall_AOpen);
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

        omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj->child->sib_next, 0x46, 0);

        dobj->translate.vec.f = translate;

        ip->it_multi = ITMBALL_SPAWN_WAIT;

        ip->item_vars.m_ball.is_rebound = FALSE;

        ip->is_unused_item_bool = TRUE;

        dobj->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifCommonItemArrowMakeInterface(ip);
    }
    return item_gobj;
}
