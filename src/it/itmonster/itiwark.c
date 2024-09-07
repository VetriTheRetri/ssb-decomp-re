#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

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
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AA90
itCreateDesc dITIwarkItemDesc =
{
    nITKindIwark,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITIwarkItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformNull,                   // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateNew,                        // Hitbox Update State
    itIwarkCommonProcUpdate,                // Proc Update
    itIwarkCommonProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AAC4
itStatusDesc dITIwarkStatusDescs[/* */] = 
{
    // Status 0 (Neutral Fly)
    {
        itIwarkFlyProcUpdate,              // Proc Update
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
        itIwarkAttackProcUpdate,            // Proc Update
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
    nWPKindIwarkRock,                       // Weapon Kind
    &gITManagerFileData,                    // Pointer to weapon's loaded files?
    &lITIwarkWeaponRockWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformNull,                   // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
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
    nITIwarkStatusFly,
    nITIwarkStatusAttack,
    nITIwarkStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8017D740
void itIwarkAttackUpdateRock(GObj *iwark_gobj)
{
    itStruct *ip = itGetStruct(iwark_gobj);
    DObj *dobj = DObjGetStruct(iwark_gobj);

    if (ip->item_vars.iwark.rock_spawn_wait <= 0)
    {
        wpStruct *wp;
        GObj *rock_gobj;
        Vec3f pos = dobj->translate.vec.f;

        pos.x += (ITIWARK_ROCK_SPAWN_OFF_X_MUL * mtTrigGetRandomFloat()) + ITIWARK_ROCK_SPAWN_OFF_X_ADD;

        rock_gobj = itIwarkWeaponRockMakeWeapon(iwark_gobj, &pos, mtTrigGetRandomIntRange(WPIWARK_ROCK_RANDOM_VEL_MAX));

        if (rock_gobj != NULL)
        {
            wp = wpGetStruct(rock_gobj);

        #if !defined (DAIRANTOU_OPT0)
            wp->weapon_vars.rock.unk_0xC = ip->item_vars.iwark.rock_spawn_max - ip->item_vars.iwark.rock_spawn_remain;
        #endif

            ip->item_vars.iwark.rock_spawn_remain--;

        #if !defined (DAIRANTOU_OPT0)
            if (ip->item_vars.iwark.rock_spawn_remain == 0)
            {
                wp->weapon_vars.rock.unk_0xC = -1;
            }
        #endif
            ip->item_vars.iwark.rock_spawn_wait = mtTrigGetRandomIntRange(ITIWARK_ROCK_SPAWN_WAIT_MAX) + ITIWARK_ROCK_SPAWN_WAIT_MIN;
        }
    }
}

// 0x8017D820
sb32 itIwarkAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    f32 pos_y = gMPCollisionGroundData->map_bound_top - ITIWARK_FLY_STOP_Y;

    if (dobj->translate.vec.f.y >= pos_y)
    {
        dobj->translate.vec.f.y = pos_y;

        ip->phys_info.vel_air.y = 0.0F;

        if (ip->item_vars.iwark.rock_spawn_remain != 0)
        {
            itIwarkAttackUpdateRock(item_gobj);
        }
        else if (ip->item_vars.iwark.rock_spawn_count == ip->item_vars.iwark.rock_spawn_max)
        {
            return TRUE;
        }
        if ((ip->item_vars.iwark.rumble_wait == 0) && (ip->item_vars.iwark.rumble_frame != 0))
        {
            efManagerQuakeMakeEffect(0);

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
        dobj->rotate.vec.f.y += F_CST_DTOR32(180.0F); // PI32

        ip->it_multi = 0;
    }
    ip->it_multi++;

    return FALSE;
}

// 0x8017D948
void itIwarkAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Gfx *dl;
    Vec3f pos;

    ip->ga = nMPKineticsAir;

    ip->phys_info.vel_air.y = ITIWARK_FLY_VEL_Y;

    ip->item_vars.iwark.rock_spawn_remain = mtTrigGetRandomIntRange(ITIWARK_ROCK_SPAWN_COUNT_RANDOM) + ITIWARK_ROCK_SPAWN_COUNT_MIN;
    ip->item_vars.iwark.rock_spawn_max = ip->item_vars.iwark.rock_spawn_remain;
    ip->item_vars.iwark.rock_spawn_count = 0;
    ip->item_vars.iwark.rock_spawn_wait = 0;
    ip->item_vars.iwark.rumble_frame = 0;
    ip->item_vars.iwark.rumble_wait = 0;

    ip->it_multi = 0;

    pos = dobj->translate.vec.f;

    if (ip->it_kind == nITKindIwark)
    {
        dobj->display_list = dl = (Gfx*)itGetPData(ip, lITIwarkDataStart, lITIwarkDisplayList); // Linker thing

        pos.y += ITIWARK_IWARK_ADD_POS_Y;
    }
    else pos.y += ITIWARK_OTHER_ADD_POS_Y;

    efManagerDustHeavyDoubleMakeEffect(&pos, nGMFacingL, 1.0F);

    if (ip->it_kind == nITKindIwark)
    {
        func_800269C0_275C0(nSYAudioVoiceMBallIwarkAppear);
    }
}

// 0x8017DA60
void itIwarkAttackSetStatus(GObj *item_gobj)
{
    itIwarkAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITIwarkStatusDescs, nITIwarkStatusAttack);
}

// 0x8017DA94
sb32 itIwarkFlyProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwarkAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DAD8
void itIwarkFlySetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITIWARK_FLY_WAIT;

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    itMainSetItemStatus(item_gobj, dITIwarkStatusDescs, nITIwarkStatusFly);
}

// 0x8017DB18
sb32 itIwarkCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        itIwarkFlySetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x8017DB5C
sb32 itIwarkCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_FLAG_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itMapSetGround(ip);
    }
    return FALSE;
}

// 0x8017DBA0
GObj* itIwarkMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITIwarkItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        itMainClearOwnerStats(item_gobj);

        dobj = DObjGetStruct(item_gobj);

        gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
        gcAddOMMtxForDObjFixed(dobj, 0x48, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->item_hit.interact_mask = GMHITCOLLISION_FLAG_FIGHTER;

        ip->phys_info.vel_air.x = ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        dobj->translate.vec.f.y -= ip->attributes->objcoll_bottom;

        gcAddDObjAnimJoint(dobj, itGetMonsterAnimNode(ip, lITIwarkDataStart), 0.0F); // Linker thing
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

    wpMainApplyGravityClampTVel(wp, WPIWARK_ROCK_GRAVITY, WPIWARK_ROCK_TVEL);

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

    if (coll_data->coll_mask_curr & MPCOLL_FLAG_GROUND)
    {
        if (line_id != coll_data->ground_line_id)
        {
            lbMathReflect2D(&wp->phys_info.vel_air, &coll_data->ground_angle);
            lbMathScale2D(&wp->phys_info.vel_air, WPIWARK_ROCK_COLLIDE_MUL_VEL_Y);

            wp->weapon_vars.rock.ground_line_id = coll_data->ground_line_id;

            func_800269C0_275C0(nSYAudioFGMIwarkRockMake);

            pos.y += WPIWARK_ROCK_COLLIDE_ADD_VEL_Y;

            efManagerDustLightMakeEffect(&pos, wp->lr, 1.0F);

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

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    if (wp->phys_info.vel_air.x > 0.0F)
    {
        wp->lr = nGMFacingR;
    }
    else wp->lr = nGMFacingL;

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
GObj* itIwarkWeaponRockMakeWeapon(GObj *parent_gobj, Vec3f *pos, u8 random)
{
    u32 random32;
    GObj *weapon_gobj = wpManagerMakeWeapon(parent_gobj, &dITIwarkWeaponRockWeaponDesc, pos, WEAPON_FLAG_PARENT_ITEM);
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
    else wp->phys_info.vel_air.y = vel_y = (random32 == 1) ? WPIWARK_ROCK_VEL_Y_START_B : WPIWARK_ROCK_VEL_Y_START_C;

    if (mtTrigGetRandomIntRange(2) == 0)
    {
        wp->lr = nGMFacingL;
    }
    else wp->lr = nGMFacingR;

    dobj = DObjGetStruct(weapon_gobj);

    gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyR, 0);
    gcAddOMMtxForDObjFixed(dobj, 0x46, 0);

    dobj->translate.vec.f = *pos;

    dobj->child->mobj->texture_id_current = random;

    wp->weapon_vars.rock.owner_gobj = parent_gobj;

    wp->is_hitlag_victim = TRUE;

    wp->proc_dead = itIwarkWeaponRockProcDead;

    return weapon_gobj;
}
