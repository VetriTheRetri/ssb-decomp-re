#include <it/item.h>
#include <gm/gmmatch.h>

enum itGLuckyStatus
{
    itStatus_GLucky_NDamage,
    itStatus_GLucky_EnumMax
};

extern void *D_ovl2_801313F4;

itCreateDesc itGround_Lucky_ItemDesc =
{
    It_Kind_GLucky,                         // Item Kind
    &D_ovl2_801313F4,                       // Pointer to item file data?
    0xBC,                                   // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itGLucky_SDefault_ProcUpdate,           // Proc Update
    NULL,                                   // Proc Map
    itGLucky_SDefault_ProcHit,              // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    itGLucky_SDefault_ProcDamage            // Proc Damage
};

itStatusDesc itGround_Lucky_StatusDesc[itStatus_GLucky_EnumMax] = 
{
    // Status 0 (Neutral Damage)
    {
        itGLucky_NDamage_ProcUpdate,        // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8017C240
void itGLucky_NDamage_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itGround_Lucky_StatusDesc, itStatus_GLucky_NDamage);

    itGetStruct(item_gobj)->proc_dead = itGLucky_NDamage_ProcDead;
}

// 0x8017C280
void itGLucky_SDefault_UpdateEggSpawn(GObj *lucky_gobj)
{
    itStruct *lucky_ip = itGetStruct(lucky_gobj);
    itStruct *egg_ip;
    s32 unused;
    DObj *joint = DObjGetStruct(lucky_gobj);
    GObj *egg_gobj;
    Vec3f pos;
    Vec3f vel;

    if (lucky_ip->it_multi == 0)
    {
        if (lucky_ip->item_vars.grlucky.egg_spawn_count != 0)
        {
            if ((gpBattleState->item_toggles & 8) && (gpBattleState->item_switch != 0)) // Return to this when 0x8 is mapped
            {
                pos = joint->translate;

                pos.x -= ITGRLUCKY_EGG_SPAWN_OFF_X;
                pos.y += ITGRLUCKY_EGG_SPAWN_OFF_Y;

                vel.x = -((lbRandom_GetFloat() * ITGRLUCKY_EGG_SPAWN_MUL) + ITGRLUCKY_EGG_SPAWN_ADD_X);
                vel.y = (lbRandom_GetFloat() * ITGRLUCKY_EGG_SPAWN_MUL) + ITGRLUCKY_EGG_SPAWN_ADD_Y;
                vel.z = 0.0F;

                egg_gobj = itManager_MakeItemSetupCommon(lucky_gobj, It_Kind_Egg, &pos, &vel, (ITEM_FLAG_PROJECT | ITEM_MASK_SPAWN_ITEM));

                if (egg_gobj != NULL)
                {
                    egg_ip = itGetStruct(egg_gobj);

                    func_800269C0(gmSound_SFX_KirbySpecialLwStart); // Bruh lol

                    lucky_ip->it_multi = 10;
                    lucky_ip->item_vars.grlucky.egg_spawn_count--;

                    efParticle_DustLight_MakeEffect(&pos, egg_ip->lr, 1.0F);
                }
            }
            else
            {
                lucky_ip->it_multi = 10;
                lucky_ip->item_vars.grlucky.egg_spawn_count--;
            }
        }
    }
    if (lucky_ip->item_vars.grlucky.egg_spawn_count != 0)
    {
        if (lucky_ip->it_multi > 0)
        {
            lucky_ip->it_multi--;
        }
    }
}

// 0x8017C400
bool32 itGLucky_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    joint->translate.x += ip->item_vars.grlucky.pos.x;
    joint->translate.y += ip->item_vars.grlucky.pos.y;

    if ((joint->dobj_f2 >= ITGRLUCKY_EGG_SPAWN_BEGIN) && (joint->dobj_f2 <= ITGRLUCKY_EGG_SPAWN_END))
    {
        itGLucky_SDefault_UpdateEggSpawn(item_gobj);
    }
    if (joint->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        func_ovl2_8010B0B8();

        return TRUE;
    }
    else return FALSE;
}

// 0x8017C4AC
bool32 itGLucky_SDefault_ProcHit(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->item_hit.update_state = gmHitCollision_UpdateState_Disable;

    return FALSE;
}

// 0x8017C4BC
bool32 itGLucky_NDamage_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint;

    itMain_UpdateGravityClampTVel(ip, ITGRLUCKY_GRAVITY, ITGRLUCKY_T_VEL);

    joint = DObjGetStruct(item_gobj);

    joint->rotate.z -= ITGRLUCKY_HIT_ROTATE_Z * ip->lr;

    return FALSE;
}

// 0x8017C524
bool32 itGLucky_NDamage_ProcDead(GObj *item_gobj)
{
    return TRUE;
}

// 0x8017C530
bool32 itGLucky_SDefault_ProcDamage(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->damage_knockback >= ITGRLUCKY_NDAMAGE_KNOCKBACK_MIN)
    {
        f32 angle = gmCommon_Damage_GetKnockbackAngle(ip->damage_angle, ip->ground_or_air, ip->damage_knockback);

        ip->phys_info.vel_air.x = (cosf(angle) * ip->damage_knockback * -ip->lr_damage);
        ip->phys_info.vel_air.y = (__sinf(angle) * ip->damage_knockback);

        ip->item_hit.update_state = gmHitCollision_UpdateState_Disable;
        ip->item_hurt.hitstatus = gmHitCollision_HitStatus_None;

        joint->dobj_f0 = (f32)FLOAT_NEG_MAX;

        func_ovl2_8010B0AC();
        itGLucky_NDamage_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x8017C5F4
GObj* itGround_Lucky_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itGround_Lucky_ItemDesc, pos, vel, flags);

    if (item_gobj != NULL)
    {
        itStruct *ip = itGetStruct(item_gobj);

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->item_vars.grlucky.pos = *pos;

        ip->is_allow_knockback = TRUE;

        ip->it_multi = 0;

        ip->item_vars.grlucky.egg_spawn_count = ITGRLUCKY_EGG_SPAWN_COUNT;

        func_800269C0(gmSound_Voice_YCityLucky);
    }
    return item_gobj;
}
