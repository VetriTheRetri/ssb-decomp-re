#include <it/item.h>
#include <ft/fighter.h>
#include <gm/gmmatch.h>

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
    &gpItemFileData,                        // Pointer to item file data?
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

itStatusDesc itCommon_MBall_StatusDesc[itStatus_MBall_EnumMax] =
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
        itCommon_SDefault_ProcHop,          // Proc Hop
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
        itCommon_SDefault_ProcHop,          // Proc Hop
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
    void *t = itGetPData(ip, D_NF_00009430, D_NF_00009520); // (void*) (((uintptr_t)ip->attributes->unk_0x0 - (intptr_t)&D_NF_00009430) + (intptr_t)&D_NF_00009520); // Linker thing

    func_8000BD54(joint->next->next->unk_0x8->mobj, t, 0.0F);
    func_8000DF34(item_gobj);
}

void func_ovl3_8017C6F8(GObj *item_gobj)
{
    DObj *joint = DObjGetStruct(item_gobj);

    joint->next->unk_0x8->mobj->unk_mobj_0x94 = 0;
}

// 0x8017C710
bool32 itMBall_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->unk_0x8->rotate.z = joint->rotate.z;

    return FALSE;
}

// 0x8017C768
bool32 itMBall_GWait_ProcMap(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, itMBall_AFall_SetStatus);

    return FALSE;
}

// 0x8017C790
bool32 itMBall_AFall_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GWait_SetStatus);

    return FALSE;
}

// 0x8017C7C8
void itMBall_GWait_SetStatus(GObj *item_gobj)
{
    itMain_SetGroundAllowPickup(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_GWait);
}

// 0x8017C7FC
void itMBall_AFall_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->is_allow_pickup = FALSE;

    itMap_SetAir(ip);
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_AFall);
}

// 0x8017C840
void itMBall_FHold_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    DObjGetStruct(item_gobj)->rotate.y = 0.0F;

    ip->item_vars.m_ball.owner_gobj = ip->owner_gobj;

    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FHold);
}

// 0x8017C880
bool32 itMBall_FThrow_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITMBALL_GRAVITY, ITMBALL_T_VEL);
    itManager_UpdateSpin(item_gobj);

    joint->next->unk_0x8->rotate.z = joint->rotate.z;

    return FALSE;
}

// 0x8017C8D8
bool32 itMBall_FThrow_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.m_ball.is_rebound != FALSE)
    {
        itMap_CheckMapCollideLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);
    }
    else itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);
    
    return FALSE;
}

// 0x8017C94C
bool32 itMBall_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->item_vars.m_ball.is_rebound = TRUE;

    itMain_VelSetRebound(item_gobj);

    return FALSE;
}

// 0x8017C97C
bool32 itMBall_SDefault_ProcReflector(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    ftStruct *fp;
    GObj *fighter_gobj;

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    ip->item_vars.m_ball.is_rebound = TRUE;

    itMain_VelSetRebound(item_gobj);

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
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FThrow);
}

// 0x8017CA14
void itMBall_FDrop_SetStatus(GObj *item_gobj)
{
    func_ovl3_8017C690(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_FDrop);
}

extern u32 itMonster_Global_SelectMonsterIndex;

// 0x8017CA48
bool32 itMBall_GOpen_ProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (itMonster_Global_SelectMonsterIndex == 0)
        {
            itMain_CreateMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManager_MakeItemIndex(m_ball_gobj, itMonster_Global_SelectMonsterIndex + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

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
        DObjGetStruct(m_ball_ip->item_vars.m_ball.effect_gobj)->translate = DObjGetStruct(m_ball_gobj)->translate;
    }
    return FALSE;
}

// 0x8017CB38
bool32 itMBall_GOpen_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (func_ovl2_800FC67C(ip->attach_line_id) == FALSE)
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
    DObj *next;
    DObj *child;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    next = joint->next;
    next->unk_0x54 ^= 2;

    child = joint->next->unk_0x8;
    child->unk_0x54 ^= 2;

    func_800269C0(0x8BU);

    ip->attach_line_id = ip->coll_data.ground_line_id;

    ip->is_attach_surface = TRUE;

    if ((ip->player != -1) && (ip->player != GMMATCH_PLAYERS_MAX))
    {
        GObj *fighter_gobj = gpBattleState->player_block[ip->player].fighter_gobj;

        if (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            ftMain_MakeRumble(fp, 8, 20);
        }
    }
    ip->item_vars.m_ball.effect_gobj = func_ovl2_80102C28(&joint->translate);

    func_ovl3_8017C6F8(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    ip->item_hit.can_reflect = FALSE;
}

// 0x8017CC88
void itMBall_GOpen_SetStatus(GObj *item_gobj)
{
    itMBall_GOpen_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_GOpen);
}

// 0x8017CCBC
bool32 itMBall_AOpen_ProcUpdate(GObj *m_ball_gobj)
{
    itStruct *m_ball_ip = itGetStruct(m_ball_gobj);
    itStruct *monster_ip;
    GObj *monster_gobj;
    Vec3f vel;
    s32 unused[2];

    if (m_ball_ip->it_multi == 0)
    {
        vel.x = vel.y = vel.z = 0.0F;

        if (itMonster_Global_SelectMonsterIndex == 0)
        {
            itMain_CreateMonster(m_ball_gobj);

            return TRUE;
        }
        monster_gobj = itManager_MakeItemIndex(m_ball_gobj, itMonster_Global_SelectMonsterIndex + (It_Kind_MbMonsterStart - 1), &DObjGetStruct(m_ball_gobj)->translate, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

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
        DObjGetStruct(m_ball_ip->item_vars.m_ball.effect_gobj)->translate = DObjGetStruct(m_ball_gobj)->translate;
    }
    return FALSE;
}

// 0x8017CDAC
bool32 itMBall_AOpen_ProcMap(GObj *item_gobj)
{
    itMap_CheckMapCollideThrownLanding(item_gobj, 0.2F, 0.2F, itMBall_GOpen_SetStatus);

    return FALSE;
}

// 0x8017CDE4
void itMBall_AOpen_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itCommon_MBall_StatusDesc, itStatus_MBall_AOpen);
}

// 0x8017CE0C
GObj* itCommon_MBall_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itCommon_MBall_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ip = itGetStruct(item_gobj);
        Vec3f translate = joint->translate;

        joint->next->unk_0x54 = 2;
        joint->next->unk_0x8->unk_0x54 = 0;

        func_80008CC0(joint, 0x1B, 0);
        func_80008CC0(joint->next->unk_0x8, 0x46, 0);

        joint->translate = translate;

        ip->it_multi = ITMBALL_SPAWN_WAIT;

        ip->item_vars.m_ball.is_rebound = FALSE;

        ip->is_unused_item_bool = TRUE;

        joint->rotate.z = 0.0F;

        ip->indicator_gobj = ifManager_ItemIndicator_CreateInterface(ip);
    }
    return item_gobj;
}