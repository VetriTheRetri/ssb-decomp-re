#include <it/item.h>
#include <gr/ground.h>
#include <sc/scene.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITGLuckyItemAttributes;    // 0x000000BC

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

itCreateDesc dITGLuckyItemDesc =
{
    nITKindGLucky,                          // Item Kind
    &gGRCommonStruct.yamabuki.item_head,    // Pointer to item file data?
    &lITGLuckyItemAttributes,               // Offset of item attributes in file?

    // DObj transformation struct
    {
        nGCTransformTraRotRpyR,             // Main matrix transformations
        nGCTransformNull,                   // Secondary matrix transformations?
        0                                   // ???
    },

    nGMHitUpdateNew,                        // Hitbox Update State
    itGLuckyCommonProcUpdate,               // Proc Update
    NULL,                                   // Proc Map
    itGLuckyCommonProcHit,                  // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itGLuckyCommonProcDamage                // Proc Damage
};

itStatusDesc dITGLuckyStatusDescs[/* */] =
{
    // Status 0 (Neutral Damage)
    {
        itGLuckyDamagedProcUpdate,          // Proc Update
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
    nITGLuckyStatusDamaged,
    nITGLuckyStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017C240
void itGLuckyDamagedSetStatus(GObj *item_gobj)
{
    itMainSetItemStatus(item_gobj, dITGLuckyStatusDescs, nITGLuckyStatusDamaged);

    itGetStruct(item_gobj)->proc_dead = itGLuckyDamagedProcDead;
}

// 0x8017C280
void itGLuckyCommonUpdateEggSpawn(GObj *lucky_gobj)
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
            if ((gBattleState->item_toggles & ITEM_TOGGLE_MASK_KIND(nITKindEgg)) && (gBattleState->item_appearance_rate != nSCBattleItemSwitchNone)) // Return to this when 0x8 is mapped
            {
                pos = dobj->translate.vec.f;

                pos.x -= ITGLUCKY_EGG_SPAWN_OFF_X;
                pos.y += ITGLUCKY_EGG_SPAWN_OFF_Y;

                vel.x = -((mtTrigGetRandomFloat() * ITGLUCKY_EGG_SPAWN_MUL) + ITGLUCKY_EGG_SPAWN_ADD_X);
                vel.y = (mtTrigGetRandomFloat() * ITGLUCKY_EGG_SPAWN_MUL) + ITGLUCKY_EGG_SPAWN_ADD_Y;
                vel.z = 0.0F;

                egg_gobj = itManagerMakeItemSetupCommon(lucky_gobj, nITKindEgg, &pos, &vel, (ITEM_FLAG_COLLPROJECT | ITEM_FLAG_PARENT_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0_275C0(nSYAudioFGMKirbySpecialLwStart); // Bruh lol

                    lucky_ip->it_multi = 10;
                    lucky_ip->item_vars.glucky.egg_spawn_count--;

                    efManagerDustLightMakeEffect(&pos, egg_ip->lr, 1.0F);
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
sb32 itGLuckyCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    dobj->translate.vec.f.x += ip->item_vars.glucky.pos.x;
    dobj->translate.vec.f.y += ip->item_vars.glucky.pos.y;

    if ((dobj->anim_frame >= ITGLUCKY_EGG_SPAWN_BEGIN) && (dobj->anim_frame <= ITGLUCKY_EGG_SPAWN_END))
    {
        itGLuckyCommonUpdateEggSpawn(item_gobj);
    }
    if (dobj->anim_wait == AOBJ_ANIM_NULL)
    {
        grYamabukiGateSetClosedWait();

        return TRUE;
    }
    else return FALSE;
}

// 0x8017C4AC
sb32 itGLuckyCommonProcHit(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->item_hit.update_state = nGMHitUpdateDisable;

    return FALSE;
}

// 0x8017C4BC
sb32 itGLuckyDamagedProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj;

    itMainApplyGravityClampTVel(ip, ITGLUCKY_GRAVITY, ITGLUCKY_TVEL);

    dobj = DObjGetStruct(item_gobj);

    dobj->rotate.vec.f.z -= ITGLUCKY_HIT_ROTATE_Z * ip->lr;

    return FALSE;
}

// 0x8017C524
sb32 itGLuckyDamagedProcDead(GObj *item_gobj)
{
    return TRUE;
}

// 0x8017C530
sb32 itGLuckyCommonProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    if (ip->damage_knockback >= ITGLUCKY_NDAMAGE_KNOCKBACK_MIN)
    {
        f32 angle = ftCommonDamageGetKnockbackAngle(ip->damage_angle, ip->ga, ip->damage_knockback);

        ip->phys_info.vel_air.x = (__cosf(angle) * ip->damage_knockback * -ip->lr_damage);
        ip->phys_info.vel_air.y = (__sinf(angle) * ip->damage_knockback);

        ip->item_hit.update_state = nGMHitUpdateDisable;
        ip->item_hurt.hitstatus = nGMHitStatusNone;

        dobj->anim_wait = AOBJ_ANIM_NULL;

        grYamabukiGateClearMonsterGObj();
        itGLuckyDamagedSetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017C5F4
GObj* itGLuckyMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITGLuckyItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_FLAG_FIGHTER;

        ip->item_vars.glucky.pos = *pos;

        ip->is_allow_knockback = TRUE;

        ip->it_multi = 0;

        ip->item_vars.glucky.egg_spawn_count = ITGLUCKY_EGG_SPAWN_COUNT;

        func_800269C0_275C0(nSYAudioVoiceYamabukiLucky);
    }
    return item_gobj;
}
