#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITGLuckyItemAttributes;    // 0x000000BC

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITGLuckyItemDesc =
{
    It_Kind_GLucky,                         // Item Kind
    &gGroundStruct.yama.item_head,      // Pointer to item file data?
    &lITGLuckyItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0                                   // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itGLuckySDefaultProcUpdate,             // Proc Update
    NULL,                                   // Proc Map
    itGLuckySDefaultProcHit,                // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itGLuckySDefaultProcDamage              // Proc Damage
};

itStatusDesc dITGLuckyStatusDesc[/* */] =
{
    // Status 0 (Neutral Damage)
    {
        itGLuckyNDamageProcUpdate,          // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itGLuckyStatus
{
    itStatus_GLucky_NDamage,
    itStatus_GLucky_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017C240
void itGLuckyNDamageSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITGLuckyStatusDesc, itStatus_GLucky_NDamage);

    itGetStruct(item_gobj)->proc_dead = itGLuckyNDamageProcDead;
}

// 0x8017C280
void itGLuckySDefaultUpdateEggSpawn(GObj *lucky_gobj)
{
    itStruct *lucky_ip = itGetStruct(lucky_gobj);
    itStruct *egg_ip;
    s32 unused;
    DObj *dobj = DObjGetStruct(lucky_gobj);
    GObj *egg_gobj;
    Vec3f pos;
    Vec3f vel;

    if (lucky_ip->it_multi == 0)
    {
        if (lucky_ip->item_vars.glucky.egg_spawn_count != 0)
        {
            if ((gBattleState->item_toggles & ITEM_TOGGLE_MASK_KIND(It_Kind_Egg)) && (gBattleState->item_switch != gmMatch_ItemSwitch_None)) // Return to this when 0x8 is mapped
            {
                pos = dobj->translate.vec.f;

                pos.x -= ITGLUCKY_EGG_SPAWN_OFF_X;
                pos.y += ITGLUCKY_EGG_SPAWN_OFF_Y;

                vel.x = -((mtTrigGetRandomFloat() * ITGLUCKY_EGG_SPAWN_MUL) + ITGLUCKY_EGG_SPAWN_ADD_X);
                vel.y = (mtTrigGetRandomFloat() * ITGLUCKY_EGG_SPAWN_MUL) + ITGLUCKY_EGG_SPAWN_ADD_Y;
                vel.z = 0.0F;

                egg_gobj = itManagerMakeItemSetupCommon(lucky_gobj, It_Kind_Egg, &pos, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0_275C0(alSound_SFX_KirbySpecialLwStart); // Bruh lol

                    lucky_ip->it_multi = 10;
                    lucky_ip->item_vars.glucky.egg_spawn_count--;

                    efParticle_DustLight_MakeEffect(&pos, egg_ip->lr, 1.0F);
                }
            }
            else
            {
                lucky_ip->it_multi = 10;
                lucky_ip->item_vars.glucky.egg_spawn_count--;
            }
        }
    }
    if (lucky_ip->item_vars.glucky.egg_spawn_count != 0)
    {
        if (lucky_ip->it_multi > 0)
        {
            lucky_ip->it_multi--;
        }
    }
}

// 0x8017C400
sb32 itGLuckySDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.glucky.pos.x;
    dobj->translate.vec.f.y += ip->item_vars.glucky.pos.y;

    if ((dobj->dobj_f2 >= ITGLUCKY_EGG_SPAWN_BEGIN) && (dobj->dobj_f2 <= ITGLUCKY_EGG_SPAWN_END))
    {
        itGLuckySDefaultUpdateEggSpawn(item_gobj);
    }
    if (dobj->dobj_f0 == AOBJ_FRAME_NULL)
    {
        grYamaGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x8017C4AC
sb32 itGLuckySDefaultProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    return FALSE;
}

// 0x8017C4BC
sb32 itGLuckyNDamageProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    itMainApplyGClampTVel(ip, ITGLUCKY_GRAVITY, ITGLUCKY_T_VEL);

    dobj = DObjGetStruct(item_gobj);

    dobj->rotate.vec.f.z -= ITGLUCKY_HIT_ROTATE_Z * ip->lr;

    return FALSE;
}

// 0x8017C524
sb32 itGLuckyNDamageProcDead(GObj *item_gobj)
{
    return TRUE;
}

// 0x8017C530
sb32 itGLuckySDefaultProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->damage_knockback >= ITGLUCKY_NDAMAGE_KNOCKBACK_MIN)
    {
        f32 angle = ftCommonDamageGetKnockbackAngle(ip->damage_angle, ip->ground_or_air, ip->damage_knockback);

        ip->phys_info.vel_air.x = (__cosf(angle) * ip->damage_knockback * -ip->lr_damage);
        ip->phys_info.vel_air.y = (__sinf(angle) * ip->damage_knockback);

        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

        dobj->dobj_f0 = AOBJ_FRAME_NULL;

        grYamaGateClearMonsterGObj();
        itGLuckyNDamageSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017C5F4
GObj* itGLuckyMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITGLuckyItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->item_vars.glucky.pos = *pos;

        ip->is_allow_knockback = TRUE;

        ip->it_multi = 0;

        ip->item_vars.glucky.egg_spawn_count = ITGLUCKY_EGG_SPAWN_COUNT;

        func_800269C0_275C0(alSound_Voice_YamabukiLucky);
    }
    return item_gobj;
}
