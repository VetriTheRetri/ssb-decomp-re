#include <it/item.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern
intptr_t lITPakkunItemAttributes;           // 0x00000120
extern 
intptr_t lITPakkunDAppearAnimJoint;         // 0x00000CC8
extern 
intptr_t lITPakkunDAppearMatAnimJoint;      // 0x00000CF8
extern 
intptr_t lITPakkunNDamageMatAnimJoint;      // 0x00000E04

// // // // // // // // // // // //
//                               //
//        INITIALIZED DATA       //
//                               //
// // // // // // // // // // // //

itCreateDesc dITPakkunItemDesc =
{
    nITKindPakkun,                         // Item Kind
    &gGRCommonStruct.inishie.item_head,       // Pointer to item file data?
    &lITPakkunItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Tra,                // Main matrix transformations
        0x30,                               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itPakkunDWaitProcUpdate,                // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

itStatusDesc dITPakkunStatusDesc[/* */] = 
{
    // Status 0 (Dokan Wait)
    {
        itPakkunDWaitProcUpdate,            // Proc Update
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
        itPakkunDAppearProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPakkunDAppearProcDamage           // Proc Damage
    },

    // Status 2 (Neutral Damage)
    {
        itPakkunNDamageProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itPakkunStatus
{
    itStatus_Pakkun_DWait,
    itStatus_Pakkun_DAppear,
    itStatus_Pakkun_NDamage,
    itStatus_Pakkun_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017CF20
void itPakkunDWaitSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDesc, itStatus_Pakkun_DWait);

    itGetStruct(item_gobj)->proc_dead = NULL;

    // The Piranha Plant's total damage never resets, so it can be knocked out with even the weakest attacks past a certain point.
    // Fix: itGetStruct(item_gobj)->percent_damage = 0;
}

// 0x8017CF58
void itPakkunDAppearSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDesc, itStatus_Pakkun_DAppear);
}

// 0x8017CF80
void itPakkunNDamageSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDesc, itStatus_Pakkun_NDamage);

    itGetStruct(item_gobj)->proc_dead = itPakkunNDamageProcDead;
}

// 0x8017CFC0
void itPakkunSDefaultSetWaitFighter(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = TRUE;
    }
}

// 0x8017CFDC
sb32 itPakkunSDefaultCheckNoFighterNear(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);
        GObj *fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];
        f32 it_pos_x = ip->item_vars.pakkun.pos.x;
        f32 it_pos_y = ip->item_vars.pakkun.pos.y;

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);
            DObj *dobj = fp->joint[nFTPartsJointTopN];
            f32 dist_x, ft_pos_y;

            if (dobj->translate.vec.f.x < it_pos_x)
            {
                dist_x = -(dobj->translate.vec.f.x - it_pos_x);
            }
            else dist_x = (dobj->translate.vec.f.x - it_pos_x);
            
            ft_pos_y = dobj->translate.vec.f.y;

            if ((dist_x < ITPAKKUN_DETECT_SIZE_WIDTH) && (ft_pos_y > (it_pos_y + ITPAKKUN_DETECT_SIZE_BOTTOM)) && (ft_pos_y < (it_pos_y + ITPAKKUN_DETECT_SIZE_TOP)))
            {
                return FALSE;
            }
            fighter_gobj = fighter_gobj->link_next;
        }
    }
    return TRUE;
}

// 0x8017D0A4
sb32 itPakkunDWaitProcUpdate(GObj *item_gobj)
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
        if (itPakkunSDefaultCheckNoFighterNear(item_gobj) != FALSE)
        {
            DObj *dobj = DObjGetStruct(item_gobj);

            omAddDObjAnimAll(dobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunDAppearAnimJoint, 0.0F);
            omAddMObjAnimAll(dobj->mobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunDAppearMatAnimJoint, 0.0F);
            func_8000DF34_EB34(item_gobj);

            dobj->translate.vec.f.y += ip->item_vars.pakkun.pos.y;

            itPakkunDAppearSetStatus(item_gobj);
        }
        else ip->it_multi = ITPAKKUN_APPEAR_WAIT;
    }
    return FALSE;
}

// 0x8017D190
void itPakkunDWaitInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITPAKKUN_APPEAR_WAIT;

    itPakkunDWaitSetStatus(item_gobj);

    ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    DObjGetStruct(item_gobj)->translate.vec.f.y = ip->item_vars.pakkun.pos.y;
}

// 0x8017D1DC
void itPakkunDAppearUpdateHurtbox(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    f32 pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y - ip->item_vars.pakkun.pos.y;
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

            itMainRefreshHit(item_gobj);
        }
        ip->item_hurt.size.y = (off_y - ITPAKKUN_CLAMP_OFF_Y) * ITPAKKUN_HURT_SIZE_MUL_Y;
        ip->item_hurt.offset.y = (ip->item_hurt.size.y + ITPAKKUN_CLAMP_OFF_Y) - pos_y;
    }
}

// 0x8017D298
sb32 itPakkunDAppearProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    if (ip->item_vars.pakkun.is_wait_fighter != FALSE)
    {
        DObjGetStruct(item_gobj)->dobj_f0 = AOBJ_FRAME_NULL;

        itPakkunDWaitInitItemVars(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = FALSE;
    }
    dobj = DObjGetStruct(item_gobj);

    if (dobj->dobj_f0 == AOBJ_FRAME_NULL)
    {
        itPakkunDWaitInitItemVars(item_gobj);
    }
    else dobj->translate.vec.f.y += ip->item_vars.pakkun.pos.y;
    
    itPakkunDAppearUpdateHurtbox(item_gobj);

    return FALSE;
}

// 0x8017D334
sb32 itPakkunDAppearProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->damage_knockback >= ITPAKKUN_NDAMAGE_KNOCKBACK_MIN)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        f32 angle;

        dobj->ommtx[1]->kind = 0x46;

        dobj->rotate.vec.f.z = F_CST_DTOR32(180.0F); // PI32

        angle = ftCommonDamageGetKnockbackAngle(ip->damage_angle, ip->ga, ip->damage_knockback);

        ip->phys_info.vel_air.x = __cosf(angle) * ip->damage_knockback * -ip->lr_damage;
        ip->phys_info.vel_air.y = __sinf(angle) * ip->damage_knockback;

        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;
        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

        itPakkunNDamageSetStatus(item_gobj);

        dobj->dobj_f0 = AOBJ_FRAME_NULL;

        omAddMObjAnimAll(dobj->mobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunNDamageMatAnimJoint, 0.0F);
        func_8000DF34_EB34(item_gobj);
    }
    return FALSE;
}

// 0x8017D434
sb32 itPakkunNDamageProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMainApplyGClampTVel(ip, ITPAKKUN_GRAVITY, ITPAKKUN_T_VEL);

    return FALSE;
}

// 0x8017D460
sb32 itPakkunNDamageProcDead(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f = ip->item_vars.pakkun.pos;

    ip->it_multi = ITPAKKUN_REBIRTH_WAIT;

    ip->phys_info.vel_air.x = 0.0F;
    ip->phys_info.vel_air.y = 0.0F;
    ip->phys_info.vel_air.z = 0.0F;

    dobj->rotate.vec.f.z = 0.0F;

    dobj->mobj->mobj_f0 = AOBJ_FRAME_NULL;

    itPakkunDWaitSetStatus(item_gobj);

    ip->item_vars.pakkun.is_wait_fighter = FALSE;

    return FALSE;
}

// 0x8017D4D8
GObj* itPakkunMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITPakkunItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.pos = *pos;

        DObjGetStruct(item_gobj)->translate.vec.f = *pos;

        ip->it_multi = ITPAKKUN_APPEAR_WAIT;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.pakkun.is_wait_fighter = FALSE;

        ip->item_hit.can_rehit_shield = TRUE;
    }
    return item_gobj;
}
