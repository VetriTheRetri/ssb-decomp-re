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
intptr_t lITPakkunAppearAnimJoint;         // 0x00000CC8
extern 
intptr_t lITPakkunAppearMatAnimJoint;      // 0x00000CF8
extern 
intptr_t lITPakkunDamagedMatAnimJoint;      // 0x00000E04

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

ITCreateDesc dITPakkunItemDesc =
{
    nITKindPakkun,                          // Item Kind
    &gGRCommonStruct.inishie.item_head,     // Pointer to item file data?
    &lITPakkunItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTra,                    // Main matrix transformations
        0x30,                               // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itPakkunWaitProcUpdate,                 // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

ITStatusDesc dITPakkunStatusDescs[/* */] = 
{
    // Status 0 (Dokan Wait)
    {
        itPakkunWaitProcUpdate,             // Proc Update
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
        itPakkunAppearProcUpdate,           // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        itPakkunAppearProcDamage            // Proc Damage
    },

    // Status 2 (Neutral Damage)
    {
        itPakkunDamagedProcUpdate,          // Proc Update
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
    nITPakkunStatusWait,
    nITPakkunStatusAppear,
    nITPakkunStatusDamaged,
    nITPakkunStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017CF20
void itPakkunWaitSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDescs, nITPakkunStatusWait);

    itGetStruct(item_gobj)->proc_dead = NULL;

    // The Piranha Plant's total damage never resets, so it can be knocked out with even the weakest of attacks past a certain point.
    // Fix: itGetStruct(item_gobj)->percent_damage = 0;
}

// 0x8017CF58
void itPakkunAppearSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDescs, nITPakkunStatusAppear);
}

// 0x8017CF80
void itPakkunDamagedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITPakkunStatusDescs, nITPakkunStatusDamaged);

    itGetStruct(item_gobj)->proc_dead = itPakkunDamagedProcDead;
}

// 0x8017CFC0
void itPakkunCommonSetWaitFighter(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = TRUE;
    }
}

// 0x8017CFDC
sb32 itPakkunCommonCheckNoPlayersNear(GObj *item_gobj)
{
    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);
        GObj *fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];
        f32 it_pos_x = ip->item_vars.pakkun.pos.x;
        f32 it_pos_y = ip->item_vars.pakkun.pos.y;

        while (fighter_gobj != NULL)
        {
            FTStruct *fp = ftGetStruct(fighter_gobj);
            DObj *dobj = fp->joints[nFTPartsJointTopN];
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
sb32 itPakkunWaitProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->item_vars.pakkun.is_wait_fighter != FALSE)
    {
        ip->it_multi = ITPAKKUN_APPEAR_WAIT;
        ip->item_vars.pakkun.is_wait_fighter = FALSE;
    }
    ip->it_multi--;

    if (ip->it_multi == 0)
    {
        if (itPakkunCommonCheckNoPlayersNear(item_gobj) != FALSE)
        {
            DObj *dobj = DObjGetStruct(item_gobj);

            gcAddDObjAnimJoint(dobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunAppearAnimJoint, 0.0F);
            gcAddMObjMatAnimJoint(dobj->mobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunAppearMatAnimJoint, 0.0F);
            gcPlayAnimAll(item_gobj);

            dobj->translate.vec.f.y += ip->item_vars.pakkun.pos.y;

            itPakkunAppearSetStatus(item_gobj);
        }
        else ip->it_multi = ITPAKKUN_APPEAR_WAIT;
    }
    return FALSE;
}

// 0x8017D190
void itPakkunWaitInitItemVars(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITPAKKUN_APPEAR_WAIT;

    itPakkunWaitSetStatus(item_gobj);

    ip->damage_coll.hitstatus = nGMHitStatusNone;
    ip->hit_coll.update_state = nGMHitUpdateDisable;

    DObjGetStruct(item_gobj)->translate.vec.f.y = ip->item_vars.pakkun.pos.y;
}

// 0x8017D1DC
void itPakkunAppearUpdateHurtbox(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    f32 pos_y = DObjGetStruct(item_gobj)->translate.vec.f.y - ip->item_vars.pakkun.pos.y;
    f32 off_y = pos_y + ITPAKKUN_APPEAR_OFF_Y;

    if (off_y <= ITPAKKUN_CLAMP_OFF_Y)
    {
        ip->damage_coll.hitstatus = nGMHitStatusNone;
        ip->hit_coll.update_state = nGMHitUpdateDisable;
    }
    else
    {
        if (ip->damage_coll.hitstatus == nGMHitStatusNone)
        {
            ip->damage_coll.hitstatus = nGMHitStatusNormal;

            itMainRefreshHit(item_gobj);
        }
        ip->damage_coll.size.y = (off_y - ITPAKKUN_CLAMP_OFF_Y) * ITPAKKUN_HURT_SIZE_MUL_Y;
        ip->damage_coll.offset.y = (ip->damage_coll.size.y + ITPAKKUN_CLAMP_OFF_Y) - pos_y;
    }
}

// 0x8017D298
sb32 itPakkunAppearProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    if (ip->item_vars.pakkun.is_wait_fighter != FALSE)
    {
        DObjGetStruct(item_gobj)->anim_wait = AOBJ_ANIM_NULL;

        itPakkunWaitInitItemVars(item_gobj);

        ip->item_vars.pakkun.is_wait_fighter = FALSE;
    }
    dobj = DObjGetStruct(item_gobj);

    if (dobj->anim_wait == AOBJ_ANIM_NULL)
    {
        itPakkunWaitInitItemVars(item_gobj);
    }
    else dobj->translate.vec.f.y += ip->item_vars.pakkun.pos.y;
    
    itPakkunAppearUpdateHurtbox(item_gobj);

    return FALSE;
}

// 0x8017D334
sb32 itPakkunAppearProcDamage(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    if (ip->damage_knockback >= ITPAKKUN_NDAMAGE_KNOCKBACK_MIN)
    {
        DObj *dobj = DObjGetStruct(item_gobj);
        f32 angle;

        dobj->xobj[1]->kind = 0x46;

        dobj->rotate.vec.f.z = F_CST_DTOR32(180.0F); // PI32

        angle = ftCommonDamageGetKnockbackAngle(ip->damage_angle, ip->ga, ip->damage_knockback);

        ip->physics.vel_air.x = __cosf(angle) * ip->damage_knockback * -ip->damage_lr;
        ip->physics.vel_air.y = __sinf(angle) * ip->damage_knockback;

        ip->damage_coll.hitstatus = nGMHitStatusNone;
        ip->hit_coll.update_state = nGMHitUpdateDisable;

        itPakkunDamagedSetStatus(item_gobj);

        dobj->anim_wait = AOBJ_ANIM_NULL;

        gcAddMObjMatAnimJoint(dobj->mobj, (uintptr_t)gGRCommonStruct.inishie.map_head + (intptr_t)&lITPakkunDamagedMatAnimJoint, 0.0F);
        gcPlayAnimAll(item_gobj);
    }
    return FALSE;
}

// 0x8017D434
sb32 itPakkunDamagedProcUpdate(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);

    itMainApplyGravityClampTVel(ip, ITPAKKUN_GRAVITY, ITPAKKUN_TVEL);

    return FALSE;
}

// 0x8017D460
sb32 itPakkunDamagedProcDead(GObj *item_gobj)
{
    ITStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f = ip->item_vars.pakkun.pos;

    ip->it_multi = ITPAKKUN_REBIRTH_WAIT;

    ip->physics.vel_air.x = 0.0F;
    ip->physics.vel_air.y = 0.0F;
    ip->physics.vel_air.z = 0.0F;

    dobj->rotate.vec.f.z = 0.0F;

    dobj->mobj->anim_wait = AOBJ_ANIM_NULL;

    itPakkunWaitSetStatus(item_gobj);

    ip->item_vars.pakkun.is_wait_fighter = FALSE;

    return FALSE;
}

// 0x8017D4D8
GObj* itPakkunMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITPakkunItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        ITStruct *ip = itGetStruct(item_gobj);

        ip->item_vars.pakkun.pos = *pos;

        DObjGetStruct(item_gobj)->translate.vec.f = *pos;

        ip->it_multi = ITPAKKUN_APPEAR_WAIT;

        ip->is_allow_knockback = TRUE;

        ip->item_vars.pakkun.is_wait_fighter = FALSE;

        ip->hit_coll.can_rehit_shield = TRUE;
    }
    return item_gobj;
}
