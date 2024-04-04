#include <it/item.h>
#include <ft/fighter.h>
#include <gm/battle.h>

extern intptr_t D_NF_00009430;
extern intptr_t D_NF_00009520;

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

itCreateDesc itCommon_MBall_ItemDesc =
{
    It_Kind_MBall,                          // Item Kind
    &gItemFileData,                        // Pointer to item file data?
    0x6E4,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itMBall_AFall_ProcUpdate,               // Proc Update
    itMBall_AFall_ProcMap,                  // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itCommon_MBall_StatusDesc[/* */] =
{
    // Status 0 (Ground Wait)
    {
        NULL,                               // Proc Update
        itMBall_GWait_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Air Wait Fall)
    {
        itMBall_AFall_ProcUpdate,           // Proc Update
        itMBall_AFall_ProcMap,              // Proc Map
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
        itMBall_FThrow_ProcUpdate,          // Proc Update
        itMBall_FThrow_ProcMap,             // Proc Map
        itMBall_SDefault_ProcHit,           // Proc Hit
        itMBall_SDefault_ProcHit,           // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itMBall_SDefault_ProcHit,           // Proc Set-Off
        itMBall_SDefault_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 4 (Fighter Drop)
    {
        itMBall_AFall_ProcUpdate,           // Proc Update
        itMBall_FThrow_ProcMap,             // Proc Map
        itMBall_SDefault_ProcHit,           // Proc Hit
        itMBall_SDefault_ProcHit,           // Proc Shield
        itCommonSDefaultProcHop,          // Proc Hop
        itMBall_SDefault_ProcHit,           // Proc Set-Off
        itMBall_SDefault_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 5 (Ground Open)
    {
        itMBall_GOpen_ProcUpdate,           // Proc Update
        itMBall_GOpen_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 6 (Air Open)
    {
        itMBall_AOpen_ProcUpdate,           // Proc Update
        itMBall_AOpen_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        itMBall_SDefault_ProcReflector,     // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8017C690
void func_ovl3_8017C690(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *t = itGetPData(ip, D_NF_00009430, D_NF_00009520); // (void*) (((uintptr_t)ip->attributes->model_desc - (intptr_t)&D_NF_00009430) + (intptr_t)&D_NF_00009520); // Linker thing

    omAddMObjAnimAll(joint->child->child->sib_next->mobj, t, 0.0F);
    func_8000DF34(item_gobj);
}

// 0x8017C6F8
void itMBall_GOpen_ClearAnim(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    joint->child->sib_next->mobj->actor.p = NULL;
}

// 0x8017C710
sb32 itMBall_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itManagerUpdateSpin(item_gobj);

    joint->child->sib_next->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C768
sb32 itMBall_GWait_ProcMap(GObj *item_gobj)
{
    itMapCheckLRWallProcGround(item_gobj, itMBall_AFall_SetStatus);

    return FALSE;
}

// 0x8017C790
sb32 itMBall_AFall_ProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GWait_SetStatus);

    return FALSE;
}

// 0x8017C7C8
void itMBall_GWait_SetStatus(GObj *item_gobj)
{
    itMainSetGroundAllowPickup(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_GWait);
}

// 0x8017C7FC
void itMBall_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMapSetAir(ip);
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_AFall);
}

// 0x8017C840
void itMBall_FHold_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.vec.f.y = 0.0F;

    ip->item_vars.m_ball.owner_gobj = ip->owner_gobj;

    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FHold);
}

// 0x8017C880
sb32 itMBall_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itManagerUpdateSpin(item_gobj);

    joint->next->unk_0x8->rotate.vec.f.z = joint->rotate.vec.f.z;

    return FALSE;
}

// 0x8017C8D8
sb32 itMBall_FThrow_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.m_ball.is_rebound != FALSE)
    {
        itMapCheckMapCollideLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);
    }
    else itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);
    
    return FALSE;
}

// 0x8017C94C
sb32 itMBall_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->item_vars.m_ball.is_rebound = TRUE;

    itMainVelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017C97C
sb32 itMBall_SDefault_ProcReflector(GObj *item_gobj)
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
void itMBall_FThrow_SetStatus(GObj *item_gobj)
{
    func_ovl3_8017C690(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FThrow);
}

// 0x8017CA14
void itMBall_FDrop_SetStatus(GObj *item_gobj)
{
    func_ovl3_8017C690(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FDrop);
}

extern u32 dItMonsterSpawnID;

// 0x8017CA48
sb32 itMBall_GOpen_ProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dItMonsterSpawnID == 0)
        {
            itMainMakeMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemIndex(m_ball_gobj, dItMonsterSpawnID + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

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
sb32 itMBall_GOpen_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (mpCollision_CheckExistLineID(ip->attach_line_id) == FALSE)
    {
        ip->is_attach_surface = FALSE;

        itMBall_AOpen_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017CB84
void itMBall_GOpen_InitItemVars(GObj *item_gobj)
{
    s32 unused[2];
    DObj *joint = DObjGetStruct(item_gobj);
    itStruct *ip = itGetStruct(item_gobj);
    DObj *child;
    DObj *sibling;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    child = joint->child;
    child->flags ^= DOBJ_FLAG_NORENDER;

    sibling = joint->child->sib_next;
    sibling->flags ^= DOBJ_FLAG_NORENDER;

    func_800269C0(alSound_SFX_MBallOpen);

    ip->attach_line_id = ip->coll_data.ground_line_id;

    ip->is_attach_surface = TRUE;

    if ((ip->player != -1) && (ip->player != GMMATCH_PLAYERS_MAX))
    {
        GObj *fighter_gobj = gBattleState->player_block[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            ftMain_MakeRumble(fp, 8, 20);
        }
    }
    ip->item_vars.m_ball.effect_gobj = efParticle_MBallRays_MakeEffect(&joint->translate.vec.f);

    itMBall_GOpen_ClearAnim(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    ip->item_hit.can_reflect = FALSE;
}

// 0x8017CC88
void itMBall_GOpen_SetStatus(GObj *item_gobj)
{
    itMBall_GOpen_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_GOpen);
}

// 0x8017CCBC
sb32 itMBall_AOpen_ProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (dItMonsterSpawnID == 0)
        {
            itMainMakeMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManagerMakeItemIndex(m_ball_gobj, dItMonsterSpawnID + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate.vec.f, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

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
sb32 itMBall_AOpen_ProcMap(GObj *item_gobj)
{
    itMapCheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);

    return FALSE;
}

// 0x8017CDE4
void itMBall_AOpen_SetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_AOpen);
}

// 0x8017CE0C
GObj* itCommon_MBall_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &itCommon_MBall_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);
        Vec3f translate = joint->translate.vec.f;

        joint->child->flags = DOBJ_FLAG_NORENDER;
        joint->child->sib_next->flags = DOBJ_FLAG_NONE;

        omAddOMMtxForDObjFixed(joint, 0x1B, 0);
        omAddOMMtxForDObjFixed(joint->next->sib_next, 0x46, 0);

        joint->translate.vec.f = translate;

        ip->it_multi = ITMBALL_SPAWN_WAIT;

        ip->item_vars.m_ball.is_rebound = FALSE;

        ip->is_unused_item_bool = TRUE;

        joint->rotate.vec.f.z = 0.0F;

        ip->indicator_gobj = ifItem_PickupArrow_MakeInterface(ip);
    }
    return item_gobj;
}