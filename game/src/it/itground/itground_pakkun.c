#include <it/item.h>
#include <ft/fighter.h>

enum itPakkunStatus
{
    itStatus_Pakkun_DWait,
    itStatus_Pakkun_DAppear,
    itStatus_Pakkun_NDamage,
    itStatus_Pakkun_EnumMax
};

extern intptr_t D_NF_00000CC8;
extern intptr_t D_NF_00000CF8;
extern intptr_t D_NF_00000E04;
extern void *D_ovl2_801313F0;
extern void *D_ovl2_801313F4;

itCreateDesc itGround_Pakkun_ItemDesc =
{
    It_Kind_Pakkun,                         // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0x120,                                  // Offset of item attributes in file?
    0x12,                                   // ???
    0x30,                                   // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itPakkun_DWait_ProcUpdate,              // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc itGround_Pakkun_StatusDesc[itStatus_Pakkun_EnumMax] = 
{
    // Status 0 (Dokan Wait)
    {
        itPakkun_DWait_ProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Dokan Appear)
    {
        itPakkun_DAppear_ProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPakkun_DAppear_ProcDamage         // Proc Damage
    },

    // Status 2 (Neutral Damage)
    {
        itPakkun_NDamage_ProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },
};

// 0x8017CF20
void itPakkun_DWait_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itGround_Pakkun_StatusDesc, itStatus_Pakkun_DWait);

    itGetStruct(item_gobj)->proc_dead = NULL;
}

// 0x8017CF58
void itPakkun_DAppear_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itGround_Pakkun_StatusDesc, itStatus_Pakkun_DAppear);
}

// 0x8017CF80
void itPakkun_NDamage_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itGround_Pakkun_StatusDesc, itStatus_Pakkun_NDamage);

    itGetStruct(item_gobj)->proc_dead = itPakkun_NDamage_ProcDead;
}

// 0x8017CFC0
void func_ovl3_8017CFC0(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = TRUE;
    }
}

// 0x8017CFDC
bool32 itPakkun_SDefault_CheckNoFighterNear(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        f32 pos_x = ip->item_vars.pakkun.pos.x, pos_y = ip->item_vars.pakkun.pos.y;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *joint = fp->joint[ftParts_TopN_Joint];
            f32 dist_x, translate_y;

            if (joint->translate.x < pos_x)
            {
                dist_x = -(joint->translate.x - pos_x);
            }
            else
            {
                dist_x = joint->translate.x - pos_x;
            }
            translate_y = joint->translate.y;

            if ((dist_x < ITPAKKUN_DETECT_SIZE_WIDTH) && (pos_y + ITPAKKUN_DETECT_SIZE_BOTTOM < translate_y) && (translate_y < (pos_y + ITPAKKUN_DETECT_SIZE_TOP)))
            {
                return FALSE;
            }
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
    }
    return TRUE;
}

// 0x8017D0A4
bool32 itPakkun_DWait_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.pakkun.is_wait_fighter != FALSE)
    {
        ip->it_multi = ITPAKKUN_APPEAR_WAIT;
        ip->item_vars.pakkun.is_wait_fighter = FALSE;
    }
    ip->it_multi--;

    if (ip->it_multi == 0)
    {
        if (itPakkun_SDefault_CheckNoFighterNear(item_gobj) != FALSE)
        {
            DObj *joint = DObjGetStruct(item_gobj);

            func_8000BD1C(joint, (uintptr_t)D_ovl2_801313F0 + (intptr_t)&D_NF_00000CC8, 0.0F);
            func_8000BD54(joint->mobj, (uintptr_t)D_ovl2_801313F0 + (intptr_t)&D_NF_00000CF8, 0.0F);
            func_8000DF34(item_gobj);

            joint->translate.y += ap->item_vars.pakkun.pos.y;

            itPakkun_DAppear_SetStatus(item_gobj);
        }
        else ip->it_multi = ITPAKKUN_APPEAR_WAIT;
    }
    return FALSE;
}

// 0x8017D190
void itPakkun_DWait_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITPAKKUN_APPEAR_WAIT;

    itPakkun_DWait_SetStatus(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    DObjGetStruct(item_gobj)->translate.y = ip->item_vars.pakkun.pos.y;
}

// 0x8017D1DC
void itPakkun_DAppear_UpdateHurtbox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 pos_y = DObjGetStruct(item_gobj)->translate.y - ip->item_vars.pakkun.pos.y;
    f32 off_y = pos_y + ITPAKKUN_APPEAR_OFF_Y;

    if (off_y <= ITPAKKUN_CLAMP_OFF_Y)
    {
        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
    }
    else
    {
        if (ip->item_hurt.hitstatus == gmHitCollision_HitStatus_None)
        {
            ip->item_hurt.hitstatus = gmHitCollision_HitStatus_Normal;

            itMain_RefreshHit(item_gobj);
        }
        ip->item_hurt.size.y = (off_y - ITPAKKUN_CLAMP_OFF_Y) * ITPAKKUN_HURT_SIZE_MUL_Y;
        ip->item_hurt.offset.y = (ip->item_hurt.size.y + ITPAKKUN_CLAMP_OFF_Y) - pos_y;
    }
}

// 0x8017D298
bool32 itPakkun_DAppear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint;

    if (ip->item_vars.pakkun.is_wait_fighter != FALSE)
    {
        DObjGetStruct(item_gobj)->dobj_f0 = (f32)FLOAT_NEG_MAX;

        itPakkun_DWait_InitItemVars(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = FALSE;
    }

    joint = DObjGetStruct(item_gobj);

    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        itPakkun_DWait_InitItemVars(item_gobj);
    }
    else joint->translate.y += ip->item_vars.pakkun.pos.y;
    
    itPakkun_DAppear_UpdateHurtbox(item_gobj);

    return FALSE;
}

// 0x8017D334
bool32 itPakkun_DAppear_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->damage_knockback >= ITPAKKUN_NDAMAGE_KNOCKBACK_MIN)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        f32 angle;

        joint->om_mtx[0]->unk04 = 0x46;

        joint->rotate.z = F_DEG_TO_RAD(180.0F); // PI32

        angle = gmCommon_Damage_GetKnockbackAngle(ip->damage_angle, ip->ground_or_air, ip->damage_knockback);

        ip->phys_info.vel_air.x = cosf(angle) * ip->damage_knockback * -ip->lr_damage;
        ip->phys_info.vel_air.y = __sinf(angle) * ip->damage_knockback;

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        itPakkun_NDamage_SetStatus(item_gobj);

        joint->dobj_f0 = (f32)FLOAT_NEG_MAX;

        func_8000BD54(joint->mobj, (uintptr_t)D_ovl2_801313F0 + (intptr_t)&D_NF_00000E04, 0.0F);
        func_8000DF34(item_gobj);
    }
    return FALSE;
}

// 0x8017D434
bool32 itPakkun_NDamage_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ip, ITPAKKUN_GRAVITY, ITPAKKUN_T_VEL);

    return FALSE;
}

// 0x8017D460
bool32 itPakkun_NDamage_ProcDead(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->translate = ip->item_vars.pakkun.pos;

    ip->it_multi = ITPAKKUN_REBIRTH_WAIT;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    joint->rotate.z = 0.0F;

    joint->mobj->unk_mobj_0x98 = (f32)FLOAT_NEG_MAX;

    itPakkun_DWait_SetStatus(item_gobj);

    ip->item_vars.pakkun.is_wait_fighter = FALSE;

    return FALSE;
}

// 0x8017D4D8
GObj* itGround_Pakkun_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Pakkun_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.pos = *pos;

        DObjGetStruct(item_gobj)->translate = *pos;

        ip->it_multi = ITPAKKUN_APPEAR_WAIT;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.pakkun.is_wait_fighter = FALSE;

        ip->item_hit.can_rehit_shield = TRUE;
    }
    return item_gobj;
}
