#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lKamexDataStart;    // 0x0000EA60
extern intptr_t lKamexDisplayList;  // 0x0000ED60

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018AEE0
itCreateDesc itMonster_Kamex_ItemDesc = 
{
    It_Kind_Kamex,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xA08,                                  // Offset of item attributes in file?
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_New,         // Hitbox Update State
    itKamex_SDefault_ProcUpdate,            // Proc Update
    itKamex_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x8018AF14
itStatusDesc itMonster_Kamex_StatusDesc[/* */] =
{
    // Status 0 (Air Fall)
    {
        itKamex_AFall_ProcUpdate,           // Proc Update
        itKamex_AFall_ProcMap,              // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Appear)
    {
        itKamex_NAppear_ProcUpdate,         // Proc Update
        itKamex_NAppear_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 2 (Neutral Attack)
    {
        itKamex_NAttack_ProcUpdate,         // Proc Update
        itKamex_NAttack_ProcMap,            // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018AF74
wpCreateDesc wpKamex_Hydro_WeaponDesc =
{
    1,                                      // Render flags?
    Wp_Kind_KamexHydro,                     // Weapon Kind
    &gItemFileData,                         // Pointer to weapon's loaded files?
    0xA50,                                  // Offset of weapon attributes in loaded files
    0x1C,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpKamex_Hydro_ProcUpdate,               // Proc Update
    NULL,                                   // Proc Map
    wpKamex_Hydro_ProcHit,                  // Proc Hit
    wpKamex_Hydro_ProcHit,                  // Proc Shield
    NULL,                                   // Proc Hop
    wpKamex_Hydro_ProcHit,                  // Proc Set-Off
    wpKamex_Hydro_ProcReflector,            // Proc Reflector
    wpKamex_Hydro_ProcHit,                  // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itKamexStatus
{
    itStatus_Kamex_AFall,
    itStatus_Kamex_NAppear,
    itStatus_Kamex_NAttack
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80180630
void itKamex_NAttack_UpdateHydro(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (ip->item_vars.kamex.hydro_spawn_wait <= 0)
    {
        Vec3f pos = joint->translate.vec.f;

        if (ip->it_kind == It_Kind_Kamex)
        {
            pos.x += ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_X * ip->lr;
            pos.y += ITKAMEX_KAMEX_HYDRO_SPAWN_OFF_Y;
        }
        else pos.x += ITKAMEX_OTHER_HYDRO_SPAWN_OFF_X * ip->lr;

        itKamex_NAttack_MakeHydro(item_gobj, &pos);
        efParticle_DamageSpawnSparks_MakeEffect(&pos, ip->lr);
        func_800269C0(alSound_SFX_KamexHydro);

        ip->item_vars.kamex.hydro_spawn_wait = lbRandom_GetIntRange(ITKAMEX_HYDRO_SPAWN_WAIT_RANDOM) + ITKAMEX_HYDRO_SPAWN_WAIT_CONST;

        pos = joint->translate.vec.f;

        pos.y += ip->attributes->objectcoll_bottom;

        if (ip->it_kind == It_Kind_Kamex)
        {
            pos.x += (ip->attributes->objectcoll_width + ITKAMEX_DUST_SPAWN_OFF_X) * -ip->lr;
        }
        ip->item_vars.kamex.is_apply_push = TRUE;

        ip->phys_info.vel_air.x = -ip->lr * ITKAMEX_CONST_VEL_X;

        efParticle_DustHeavy_MakeEffect(&pos, -ip->lr);
    }
}

// 0x801807DC
sb32 itKamex_AFall_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITKAMEX_GRAVITY, ITKAMEX_T_VEL);

    return FALSE;
}

// 0x80180808
sb32 itKamex_AFall_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_TestAllCollisionFlag(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL));

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        itKamex_NAttack_InitItemVars(item_gobj, TRUE);
        itKamex_NAttack_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80180860
void itKamex_AFall_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_SetAir(ip);

    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

    ip->is_allow_pickup = FALSE;

    ip->item_vars.kamex.hydro_push_vel_x = 0.0F;
}

// 0x801808A4
void itKamex_AFall_SetStatus(GObj *item_gobj)
{
    itKamex_AFall_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Kamex_StatusDesc, itStatus_Kamex_AFall);
}

// 0x801808D8
sb32 itKamex_NAppear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMain_ApplyGravityClampTVel(ip, ITKAMEX_GRAVITY, ITKAMEX_T_VEL);

    return FALSE;
}

// 0x80180904
sb32 itKamex_NAppear_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itMap_TestAllCollisionFlag(item_gobj, (MPCOLL_KIND_CEIL | MPCOLL_KIND_RWALL | MPCOLL_KIND_LWALL));

    if (ip->coll_data.coll_mask_curr & MPCOLL_KIND_GROUND)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itKamex_NAttack_InitItemVars(item_gobj, FALSE);
        itKamex_NAttack_SetStatus(item_gobj);
    }
    return FALSE;
}

// 0x80180964
void itKamex_NAppear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITKAMEX_LIFETIME;

    if (ip->it_kind == It_Kind_Kamex)
    {
        func_800269C0(alSound_Voice_MBallKamexSpawn);
    }
    itMain_SetItemStatus(item_gobj, itMonster_Kamex_StatusDesc, itStatus_Kamex_NAppear);
}

// 0x801809BC
sb32 itKamex_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    itKamex_NAttack_UpdateHydro(item_gobj);

    if (ip->item_vars.kamex.is_apply_push != FALSE)
    {
        ip->phys_info.vel_air.x += ip->item_vars.kamex.hydro_push_vel_x;
    }
    ip->item_vars.kamex.hydro_spawn_wait--;

    ip->it_multi--;

    return FALSE;
}

// 0x80180A30
sb32 itKamex_NAttack_ProcMap(GObj *item_gobj)
{
    itMap_CheckLRWallProcGround(item_gobj, itKamex_AFall_SetStatus);

    return FALSE;
}

// 0x80180A58
void itKamex_NAttack_InitItemVars(GObj *item_gobj, sb32 is_ignore_setup)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    if (is_ignore_setup == FALSE)
    {
        ip->it_multi = ITKAMEX_LIFETIME;

        if (ip->it_kind == It_Kind_Kamex)
        {
            void *dl = itGetPData(ip, lKamexDataStart, lKamexDisplayList); // Linker thing

            joint->display_list = dl;

            ip->coll_data.object_coll.top = ITKAMEX_COLL_SIZE;
            ip->coll_data.object_coll.center = 0.0F;
            ip->coll_data.object_coll.bottom = -ITKAMEX_COLL_SIZE;
            ip->coll_data.object_coll.width = ITKAMEX_COLL_SIZE;
        }
    }
    ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0;

    ip->item_vars.kamex.hydro_push_vel_x = ip->lr * ITKAMEX_PUSH_VEL_X;
    ip->item_vars.kamex.hydro_spawn_wait = 0;
    ip->item_vars.kamex.is_apply_push = FALSE;
}

// 0x80180AF4
void itKamex_NAttack_SetStatus(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, itMonster_Kamex_StatusDesc, itStatus_Kamex_NAttack);
}

// 0x80180B1C
sb32 itKamex_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;

        itKamex_NAppear_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80180B6C
sb32 itKamex_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80180BAC - Turn Blastoise towards the side with the most enemy players
void itKamex_SDefault_FindTargetsSetLR(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];
    s32 unused1;
    GObj *victim_gobj;
    s32 unused2[3];
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    f32 dist_xy;
    f32 dist_x;
    Vec3f dist;
    f32 square_xy;
    s32 ft_count = 0;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if ((fighter_gobj != ip->owner_gobj) && (fp->team != ip->team))
        {
            lbVector_Vec3fSubtract(&dist, &DObjGetStruct(fighter_gobj)->translate.vec.f, &joint->translate.vec.f);

            if (ft_count == 0)
            {
                dist_xy = SQUARE(dist.x) + SQUARE(dist.y);
            }
            ft_count++;

            square_xy = SQUARE(dist.x) + SQUARE(dist.y);

            if (square_xy <= dist_xy)
            {
                dist_xy = square_xy;

                victim_gobj = fighter_gobj;
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    dist_x = DObjGetStruct(victim_gobj)->translate.vec.f.x - joint->translate.vec.f.x;

    ip->lr = (dist_x < 0.0F) ? LR_Left : LR_Right;
}

// 0x80180CDC
GObj* itMonster_Kamex_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Kamex_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *kamex_ip;
    itStruct *mball_ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x48, 0);

        joint->translate.vec.f = *pos;

        kamex_ip = itGetStruct(item_gobj);

        kamex_ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        kamex_ip->phys_info.vel_air.x = kamex_ip->phys_info.vel_air.z = 0.0F;
        kamex_ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        mball_ip = itGetStruct(spawn_gobj);

        kamex_ip->owner_gobj = mball_ip->owner_gobj;
        kamex_ip->team = mball_ip->team;

        itKamex_SDefault_FindTargetsSetLR(item_gobj);

        if (kamex_ip->lr == LR_Left)
        {
            joint->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
        }
        joint->translate.vec.f.y -= kamex_ip->attributes->objectcoll_bottom;

        omAddDObjAnimAll(joint, itGetPData(kamex_ip, lKamexDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x80180E10
sb32 wpKamex_Hydro_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj);

    wp->weapon_hit.offset[0].x = joint->child->translate.vec.f.x * wp->lr;

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80180E60
sb32 wpKamex_Hydro_ProcHit(GObj *weapon_gobj)
{
    return FALSE;
}

// 0x80180E6C
sb32 wpKamex_Hydro_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.vec.f.z = atan2f(wp->phys_info.vel_air.y, wp->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.vec.f.x = 1.0F;

    wp->lr = -wp->lr;

    return FALSE;
}

// 0x80180EDC
GObj* wpKamex_Hydro_MakeWeapon(GObj *item_gobj, Vec3f *pos)
{
    itStruct *ip = itGetStruct(item_gobj);
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &wpKamex_Hydro_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    s32 unused;
    wpStruct *wp;
    Vec3f translate;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lr = ip->lr;

    joint = DObjGetStruct(weapon_gobj);

    translate = joint->translate.vec.f;

    efParticle_SparkleWhiteScale_MakeEffect(&translate, 1.0F);

    if (wp->lr == LR_Left)
    {
        joint->rotate.vec.f.y = F_DEG_TO_RAD(180.0F); // PI32
    }
    wp->weapon_vars.hydro.unk_0x0 = 0; // Set but never used?
    wp->weapon_vars.hydro.unk_0x4 = 0; // Set but never used?

    wp->lifetime = ITKAMEX_HYDRO_LIFETIME;

    return weapon_gobj;
}

// 0x80180F9C
void itKamex_NAttack_MakeHydro(GObj *item_gobj, Vec3f *pos)
{
    wpKamex_Hydro_MakeWeapon(item_gobj, pos);
}