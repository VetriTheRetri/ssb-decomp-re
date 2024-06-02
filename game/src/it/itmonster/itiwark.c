#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITIwarkItemAttributes;     // 0x0000072C
extern intptr_t
lITIwarkWeaponRockWeaponAttributes;         // 0x00000774
extern intptr_t lITIwarkDataStart;          // 0x0000A140
extern intptr_t lITIwarkDisplayList;        // 0x0000A640

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AA90
itCreateDesc dITIwarkItemDesc =
{
    It_Kind_Iwark,                          // Item Kind
    &gITFileData,                         // Pointer to item file data?
    &lITIwarkItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itIwarkSDefaultProcUpdate,              // Proc Update
    itIwarkSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AAC4
itStatusDesc dITIwarkStatusDesc[/* */] = 
{
    // Status 0 (Neutral Fly)
    {
        itIwarkNFlyProcUpdate,              // Proc Update
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
        itIwarkNAttackProcUpdate,           // Proc Update
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
wpCreateDesc dITIwarkWeaponRockWeaponDesc =
{
    0x01,                                   // Render flags?
    Wp_Kind_IwarkRock,                      // Weapon Kind
    &gITFileData,                         // Pointer to weapon's loaded files?
    &lITIwarkWeaponRockWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itIwarkWeaponRockProcUpdate,            // Proc Update
    itIwarkWeaponRockProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    itIwarkWeaponRockProcHop,               // Proc Hop
    NULL,                                   // Proc Set-Off
    itIwarkWeaponRockProcReflector,         // Proc Reflector
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
void itIwarkNAttackUpdateRock(GObj *iwark_gobj)
{
    itStruct *ip = itGetStruct(iwark_gobj);
    DObj *dobj = DObjGetStruct(iwark_gobj);

    if (ip->item_vars.iwark.rock_spawn_wait <= 0)
    {
        wpStruct *wp;
        GObj *rock_gobj;
        Vec3f pos = dobj->translate.vec.f;

        pos.x += (ITIWARK_ROCK_SPAWN_OFF_X_MUL * lbRandom_GetFloat()) + ITIWARK_ROCK_SPAWN_OFF_X_ADD;

        rock_gobj = itIwarkWeaponRockMakeWeapon(iwark_gobj, &pos, lbRandom_GetIntRange(WPIWARK_ROCK_RANDOM_VEL_MAX));

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
sb32 itIwarkNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    f32 pos_y = gGroundInfo->blastzone_top - ITIWARK_FLY_STOP_Y;

    if (dobj->translate.vec.f.y >= pos_y)
    {
        dobj->translate.vec.f.y = pos_y;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->item_vars.iwark.rock_spawn_remain != 0)
        {
            itIwarkNAttackUpdateRock(item_gobj);
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
        dobj->rotate.vec.f.y += F_DEG_TO_RAD(180.0F); // PI32

        ip->it_multi = 0;
    }
    ip->it_multi++;

    return FALSE;
}

// 0x8017D948
void itIwarkNAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Gfx *dl;
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

    pos = dobj->translate.vec.f;

    if (ip->it_kind == It_Kind_Iwark)
    {
        dobj->display_list = dl = (Gfx*)itGetPData(ip, lITIwarkDataStart, lITIwarkDisplayList); // Linker thing

        pos.y += ITIWARK_IWARK_ADD_POS_Y;
    }
    else pos.y += ITIWARK_OTHER_ADD_POS_Y;

    efParticle_DustHeavyDouble_MakeEffect(&pos, LR_Left, 1.0F);

    if (ip->it_kind == It_Kind_Iwark)
    {
        func_800269C0(alSound_Voice_MBallITIwarkSpawn);
    }
}

// 0x8017DA60
void itIwarkNAttackSetStatus(GObj *item_gobj)
{
    itIwarkNAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITIwarkStatusDesc, itStatus_Iwark_NAttack);
}

// 0x8017DA94
sb32 itIwarkNFlyProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwarkNAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DAD8
void itIwarkNFlySetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITIWARK_FLY_WAIT;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITIwarkStatusDesc, itStatus_Iwark_NFly);
}

// 0x8017DB18
sb32 itIwarkSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwarkNFlySetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DB5C
sb32 itIwarkSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMapSetGround(ip);
    }
    return FALSE;
}

// 0x8017DBA0
GObj* itIwarkMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dITIwarkItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        itMainClearOwnerStats(item_gobj);

        dobj = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
        omAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(dobj, itGetPData(ip, lITIwarkDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x8017DCAC
sb32 itIwarkWeaponRockProcDead(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip = itGetStruct(wp->weapon_vars.rock.owner_gobj);

    ip->item_vars.iwark.rock_spawn_count++;

    return TRUE;
}

// 0x8017DCCC
sb32 itIwarkWeaponRockProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj;

    wpMainApplyGClampTVel(wp, WPIWARK_ROCK_GRAVITY, WPIWARK_ROCK_T_VEL);

    dobj = DObjGetStruct(weapon_gobj);

    dobj->rotate.vec.f.z += WPIWARK_ROCK_ROTATE_STEP;

    return FALSE;
}

// 0x8017DD18
sb32 itIwarkWeaponRockProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    itStruct *ip = itGetStruct(wp->weapon_vars.rock.owner_gobj);
    mpCollData *coll_data = &wp->coll_data;
    Vec3f pos = DObjGetStruct(weapon_gobj)->translate.vec.f;
    s32 line_id = wp->weapon_vars.rock.ground_line_id;

    wpMapTestAllCheckCollEnd(weapon_gobj);

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
sb32 itIwarkWeaponRockProcHop(GObj *weapon_gobj)
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
sb32 itIwarkWeaponRockProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMainReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x8017DF28
GObj* itIwarkWeaponRockMakeWeapon(GObj *spawn_gobj, Vec3f *pos, u8 random)
{
    u32 random32;
    GObj *weapon_gobj = wpManagerMakeWeapon(spawn_gobj, &dITIwarkWeaponRockWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *dobj;
    f32 vel_y;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->weapon_vars.rock.ground_line_id = -1;

    random32 = random;

    if (random32 == 0)
    {
        wp->phys_info.vel_air.y = WPIWARK_ROCK_VEL_Y_START_A;
    }
    else
    {
        if (random32 == 1)
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

    dobj = DObjGetStruct(weapon_gobj);

    omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
    omAddOMMtxForDObjFixed(dobj, 0x46, 0);

    dobj->translate.vec.f = *pos;

    dobj->child->mobj->current_image_id = random;

    wp->weapon_vars.rock.owner_gobj = spawn_gobj;

    wp->is_hitlag_victim = TRUE;

    wp->proc_dead = itIwarkWeaponRockProcDead;

    return weapon_gobj;
}
