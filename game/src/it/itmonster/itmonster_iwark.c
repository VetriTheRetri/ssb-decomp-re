#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lIwarkDataStart;  // 0x0000A140
extern intptr_t lIwarkDisplayList;  // 0x0000A640

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AA90
itCreateDesc itMonster_Iwark_ItemDesc =
{
    It_Kind_Iwark,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0x72C,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itIwark_SDefault_ProcUpdate,            // Proc Update
    itIwark_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AAC4
itStatusDesc itMonster_Iwark_StatusDesc[/* */] = 
{
    // Status 0 (Neutral Fly)
    {
        itIwark_NFly_ProcUpdate,            // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Attack)
    {
        itIwark_NAttack_ProcUpdate,         // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018AB04
wpCreateDesc wpIwark_Rock_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_IwarkRock,                      // Weapon Kind
    &gItemFileData,                         // Pointer to weapon's loaded files?
    0x774,                                  // Offset of weapon attributes in loaded files
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    wpIwark_Rock_ProcUpdate,                // Proc Update
    wpIwark_Rock_ProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    wpIwark_Rock_ProcHop,                   // Proc Hop
    NULL,                                   // Proc Set-Off
    wpIwark_Rock_ProcReflector,             // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itIwarkStatus
{
    itStatus_Iwark_NFly,
    itStatus_Iwark_NAttack,
    itStatus_Iwark_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017D740
void itIwark_NAttack_UpdateRock(GObj *iwark_gobj)
{
    itStruct *ip = itGetStruct(iwark_gobj);
    DObj *joint = DObjGetStruct(iwark_gobj);

    if (ip->item_vars.iwark.rock_spawn_wait <= 0)
    {
        wpStruct *wp;
        GObj *rock_gobj;
        Vec3f pos = joint->translate.vec.f;

        pos.x += (ITIWARK_ROCK_SPAWN_OFF_X_MUL * lbRandom_GetFloat()) + ITIWARK_ROCK_SPAWN_OFF_X_ADD;

        rock_gobj = wpIwark_Rock_MakeWeapon(iwark_gobj, &pos, lbRandom_GetIntRange(WPIWARK_ROCK_RANDOM_VEL_MAX));

        if (rock_gobj != NULL)
        {
            wp = wpGetStruct(rock_gobj);

            wp->weapon_vars.rock.unk_0xC = ip->item_vars.iwark.rock_spawn_max - ip->item_vars.iwark.rock_spawn_remain;

            ip->item_vars.iwark.rock_spawn_remain--;

            if (ip->item_vars.iwark.rock_spawn_remain == 0)
            {
                wp->weapon_vars.rock.unk_0xC = -1;
            }
            ip->item_vars.iwark.rock_spawn_wait = lbRandom_GetIntRange(ITIWARK_ROCK_SPAWN_WAIT_MAX) + ITIWARK_ROCK_SPAWN_WAIT_MIN;
        }
    }
}

// 0x8017D820
sb32 itIwark_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    f32 pos_y = gGroundInfo->blastzone_top - ITIWARK_FLY_STOP_Y;

    if (joint->translate.vec.f.y >= pos_y)
    {
        joint->translate.vec.f.y = pos_y;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->item_vars.iwark.rock_spawn_remain != 0)
        {
            itIwark_NAttack_UpdateRock(item_gobj);
        }
        else if (ip->item_vars.iwark.rock_spawn_count == ip->item_vars.iwark.rock_spawn_max)
        {
            return TRUE;
        }
        if ((ip->item_vars.iwark.rumble_wait == 0) && (ip->item_vars.iwark.rumble_frame != 0))
        {
            efParticle_Quake_MakeEffect(0);

            ip->item_vars.iwark.rumble_wait = ITIWARK_ROCK_RUMBLE_WAIT;
        }
        if (ip->item_vars.iwark.rumble_frame != 0)
        {
            ip->item_vars.iwark.rumble_wait--;
        }
        ip->item_vars.iwark.rock_spawn_wait--;
    }
    if (ip->it_multi == ITIWARK_MODEL_ROTATE_WAIT)
    {
        joint->rotate.vec.f.y += F_DEG_TO_RAD(180.0F); // PI32

        ip->it_multi = 0;
    }
    ip->it_multi++;

    return FALSE;
}

// 0x8017D948
void itIwark_NAttack_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *dl;
    Vec3f pos;

    ip->ground_or_air = GA_Air;

    ip->phys_info.vel_air.y = ITIWARK_FLY_VEL_Y;

    ip->item_vars.iwark.rock_spawn_remain = lbRandom_GetIntRange(ITIWARK_ROCK_SPAWN_COUNT_RANDOM) + ITIWARK_ROCK_SPAWN_COUNT_MIN;
    ip->item_vars.iwark.rock_spawn_max = ip->item_vars.iwark.rock_spawn_remain;
    ip->item_vars.iwark.rock_spawn_count = 0;
    ip->item_vars.iwark.rock_spawn_wait = 0;
    ip->item_vars.iwark.rumble_frame = 0;
    ip->item_vars.iwark.rumble_wait = 0;

    ip->it_multi = 0;

    pos = joint->translate.vec.f;

    if (ip->it_kind == It_Kind_Iwark)
    {
        joint->display_list = dl = itGetPData(ip, lIwarkDataStart, lIwarkDisplayList); // Linker thing

        pos.y += ITIWARK_IWARK_ADD_POS_Y;
    }
    else pos.y += ITIWARK_OTHER_ADD_POS_Y;

    efParticle_DustHeavyDouble_MakeEffect(&pos, LR_Left, 1.0F);

    if (ip->it_kind == It_Kind_Iwark)
    {
        func_800269C0(alSound_Voice_MBallIwarkSpawn);
    }
}

// 0x8017DA60
void itIwark_NAttack_SetStatus(GObj *item_gobj)
{
    itIwark_NAttack_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Iwark_StatusDesc, itStatus_Iwark_NAttack);
}

// 0x8017DA94
sb32 itIwark_NFly_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwark_NAttack_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DAD8
void itIwark_NFly_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITIWARK_FLY_WAIT;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    itMain_SetItemStatus(item_gobj, itMonster_Iwark_StatusDesc, itStatus_Iwark_NFly);
}

// 0x8017DB18
sb32 itIwark_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwark_NFly_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DB5C
sb32 itIwark_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMap_SetGround(ip);
    }
    return FALSE;
}

// 0x8017DBA0
GObj* itMonster_Iwark_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Iwark_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        itMain_ClearOwnerStats(item_gobj);

        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x1B, 0);
        func_80008CC0(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(ip, lIwarkDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x8017DCAC
sb32 wpIwark_Rock_ProcDead(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip = itGetStruct(wp->weapon_vars.rock.owner_gobj);

    ip->item_vars.iwark.rock_spawn_count++;

    return TRUE;
}

// 0x8017DCCC
sb32 wpIwark_Rock_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint;

    wpMain_ApplyGravityClampTVel(wp, WPIWARK_ROCK_GRAVITY, WPIWARK_ROCK_T_VEL);

    joint = DObjGetStruct(weapon_gobj);

    joint->rotate.vec.f.z += WPIWARK_ROCK_ROTATE_STEP;

    return FALSE;
}

// 0x8017DD18
sb32 wpIwark_Rock_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip = itGetStruct(wp->weapon_vars.rock.owner_gobj);
    mpCollData *coll_data = &wp->coll_data;
    Vec3f pos = DObjGetStruct(weapon_gobj)->translate.vec.f;
    s32 line_id = wp->weapon_vars.rock.ground_line_id;

    wpMap_TestAllCheckCollEnd(weapon_gobj);

    if (coll_data->coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        if (line_id != coll_data->ground_line_id)
        {
            func_ovl0_800C7B08(&wp->phys_info.vel, &coll_data->ground_angle);

            func_ovl0_800C7AE0(&wp->phys_info.vel, WPIWARK_ROCK_COLLIDE_MUL_VEL_Y);

            wp->weapon_vars.rock.ground_line_id = coll_data->ground_line_id;

            func_800269C0(alSound_SFX_IwarkRockCreate);

            pos.y += WPIWARK_ROCK_COLLIDE_ADD_VEL_Y;

            efParticle_DustLight_MakeEffect(&pos, wp->lr, 1.0F);

            wp->lr = -wp->lr;

            ip->item_vars.iwark.rumble_frame++;
        }
    }
    return FALSE;
}

// 0x8017DE10
sb32 wpIwark_Rock_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = LR_Right;
    }
    else wp->lr = LR_Left;

    return FALSE;
}

// 0x8017DEB8
sb32 wpIwark_Rock_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8017DF28
GObj* wpIwark_Rock_MakeWeapon(GObj *spawn_gobj, Vec3f *pos, u8 random)
{
    s32 unused;
    GObj *weapon_gobj = wpManager_MakeWeapon(spawn_gobj, &wpIwark_Rock_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    f32 vel_y;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.rock.ground_line_id = -1;

    if ((u32)random == 0)
    {
        wp->phys_info.vel_air.y = WPIWARK_ROCK_VEL_Y_START_A;
    }
    else
    {
        if ((u32)random == 1)
        {
            vel_y = WPIWARK_ROCK_VEL_Y_START_B;
        }
        else
        {
            vel_y = WPIWARK_ROCK_VEL_Y_START_C;
        }
        wp->phys_info.vel_air.y = vel_y;
    }

    if (lbRandom_GetIntRange(2) == 0)
    {
        wp->lr = LR_Left;
    }
    else wp->lr = LR_Right;

    joint = DObjGetStruct(weapon_gobj);

    func_80008CC0(joint, 0x1B, 0);
    func_80008CC0(joint, 0x46, 0);

    joint->translate.vec.f = *pos;

    joint->child->mobj->index = random;

    wp->weapon_vars.rock.owner_gobj = spawn_gobj;

    wp->is_hitlag_victim = TRUE;

    wp->proc_dead = wpIwark_Rock_ProcDead;

    return weapon_gobj;
}
