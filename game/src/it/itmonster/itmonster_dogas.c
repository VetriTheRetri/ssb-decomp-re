#include <it/item.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// File offsets
extern intptr_t lDogasDataStart;  // 0x00012820
extern intptr_t lDogasAnimJoint;  // 0x000128DC

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B2C0
itCreateDesc itMonster_Dogas_ItemDesc =
{
    It_Kind_Dogas,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xBF8,                                  // Offset of item attributes in file?
    0,                                      // ???
    0,                                      // ???
    0,                                      // ???
    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itDogas_SDefault_ProcUpdate,            // Proc Update
    itDogas_SDefault_ProcMap,               // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80182BF4
itStatusDesc itMonster_Dogas_StatusDesc[/* */] =
{
    // Status 0 (Neutral Active)
    {
        itDogas_NAttack_ProcUpdate,         // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    },

    // Status 1 (Neutral Disappear)
    {
        itDogas_NDisappear_ProcUpdate,      // Proc Update
        NULL,                               // Proc Map
        NULL,                               // Proc Hit
        NULL,                               // Proc Shield
        NULL,                               // Proc Hop
        NULL,                               // Proc Set-Off
        NULL,                               // Proc Reflector
        NULL                                // Proc Damage
    }
};

// 0x8018B334
wpCreateDesc wpDogas_Smog_WeaponDesc = 
{
    3,                                      // Render flags?
    Wp_Kind_DogasSmog,                      // Weapon Kind
    &gItemFileData,                         // Pointer to weapon's loaded files?
    0xC40,                                  // Offset of weapon attributes in loaded files
    0x1B,                                   // ???
    0,                                      // ???
    0,                                      // ???
    wpDogas_Smog_ProcUpdate,                // Proc Update
    NULL,                                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Absorb
};

// // // // // // // // // // // //
//                               //
//          ENUMERATORS          //
//                               //
// // // // // // // // // // // //

enum itDogasStatus
{
    itStatus_Dogas_NAttack,
    itStatus_Dogas_NDisappear,
    itStatus_Dogas_EnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80182C80
sb32 itDogas_NDisappear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        return TRUE;
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182CA8
void itDogas_NDisappear_SetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_DESPAWN_WAIT;

    itMainSetItemStatus(item_gobj, itMonster_Dogas_StatusDesc, itStatus_Dogas_NDisappear);
}

// 0x80182CDC
void itDogas_NAttack_UpdateSmog(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    Vec3f pos;
    Vec3f vel;

    if (ip->item_vars.dogas.smog_spawn_wait <= 0)
    {
        vel.x = ITDOGAS_SMOG_VEL_XY;
        vel.y = ITDOGAS_SMOG_VEL_XY;
        vel.z = 0.0F;

        pos = joint->translate.vec.f;

        pos.x += (lbRandom_GetFloat() * ITDOGAS_SMOG_MUL_OFF_X) - ITDOGAS_SMOG_SUB_OFF_X;
        pos.y += (lbRandom_GetFloat() * ITDOGAS_SMOG_MUL_OFF_Y) - ATDGOAS_SMOG_SUB_OFF_Y;

        if (pos.x < joint->translate.vec.f.x)
        {
            vel.x = -vel.x;
        }
        if (pos.y < joint->translate.vec.f.y)
        {
            vel.y = -vel.y;
        }
        wpDogas_Smog_MakeWeapon(item_gobj, &pos, &vel);
        func_800269C0(alSound_SFX_DogasSmog);

        ip->item_vars.dogas.smog_spawn_wait = ITDOGAS_SMOG_SPAWN_WAIT;

        ip->it_multi--;
    }
}

// 0x80182E1C
sb32 itDogas_NAttack_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itDogas_NAttack_UpdateSmog(item_gobj);

    if (ip->it_multi == 0)
    {
        itDogas_NDisappear_SetStatus(item_gobj);

        return FALSE;
    }
    ip->item_vars.dogas.smog_spawn_wait--;

    return FALSE;
}

// 0x80182E78
void itDogas_NAttack_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_SMOG_SPAWN_COUNT;

    ip->item_vars.dogas.smog_spawn_wait = 0;

    if (ip->it_kind == It_Kind_Dogas)
    {
        ip->item_vars.dogas.pos = joint->translate.vec.f;

        omAddDObjAnimAll(joint->child, itGetPData(ip, lDogasDataStart, lDogasAnimJoint), 0.0F); // Linker thing

        func_8000DF34(item_gobj);
        func_800269C0(alSound_Voice_MBallDogasSpawn);
    }
}

// 0x80182F0C
void itDogas_NAttack_SetStatus(GObj *item_gobj)
{
    itDogas_NAttack_InitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, itMonster_Dogas_StatusDesc, itStatus_Dogas_NAttack);
}

// 0x80182F40
sb32 itDogas_SDefault_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {   
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itDogas_NAttack_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182F94
sb32 itDogas_SDefault_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMap_TestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80182FD4
GObj* itMonster_Dogas_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &itMonster_Dogas_ItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x28, 0);
        func_80008CC0(joint->child, 0x1C, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddDObjAnimAll(joint->child, itGetPData(ip, lDogasDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x801830DC
sb32 wpDogas_Smog_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj)->next;

    ip->weapon_hit.size = joint->scale.vec.f.x * ip->weapon_vars.smog.attributes->size;

    if (wpMain_DecLifeCheckExpire(ip) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80183144
GObj* wpDogas_Smog_MakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    wpCreateDesc *create_desc = &wpDogas_Smog_WeaponDesc;
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &wpDogas_Smog_WeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = ITDOGAS_SMOG_LIFETIME;

    wp->weapon_vars.smog.attributes = (wpAttributes*) (*(uintptr_t*)create_desc->p_weapon + (intptr_t)create_desc->offset); // Dude I had a stroke trying to match this

    joint = DObjGetStruct(weapon_gobj);

    wp->phys_info.vel = *vel;

    func_80008CC0(joint->child, 0x2C, 0);

    joint->translate.vec.f = *pos;

    return weapon_gobj;
}