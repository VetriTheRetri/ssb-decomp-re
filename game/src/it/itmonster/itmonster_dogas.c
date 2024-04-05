#include <it/item.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

// File offsets
extern intptr_t lItDogasDataStart;          // 0x00012820
extern intptr_t lItDogasAnimJoint;          // 0x000128DC

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B2C0
itCreateDesc dItDogasItemDesc =
{
    It_Kind_Dogas,                          // Item Kind
    &gItemFileData,                         // Pointer to item file data?
    0xBF8,                                  // Offset of item attributes in file?

    // DObj transformation struct
    {
        OMMtx_Transform_Null,               // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    gmHitCollision_UpdateState_Disable,     // Hitbox Update State
    itDogasSDefaultProcUpdate,              // Proc Update
    itDogasSDefaultProcMap,                 // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80182BF4
itStatusDesc dItDogasStatusDesc[/* */] =
{
    // Status 0 (Neutral Active)
    {
        itDogasNAttackProcUpdate,           // Proc Update
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
        itDogasNDisappearProcUpdate,        // Proc Update
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
wpCreateDesc dItDogasWeaponSmogWeaponDesc = 
{
    0x03,                                   // Render flags?
    Wp_Kind_DogasSmog,                      // Weapon Kind
    &gItemFileData,                         // Pointer to weapon's loaded files?
    0xC40,                                  // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        OMMtx_Transform_TraRotRpyR,         // Main matrix transformations
        OMMtx_Transform_Null,               // Secondary matrix transformations?
        0,                                  // ???
    },

    itDogasWeaponSmogProcUpdate,            // Proc Update
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
sb32 itDogasNDisappearProcUpdate(GObj *item_gobj)
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
void itDogasNDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_DESPAWN_WAIT;

    itMainSetItemStatus(item_gobj, dItDogasStatusDesc, itStatus_Dogas_NDisappear);
}

// 0x80182CDC
void itDogasNAttackUpdateSmog(GObj *item_gobj)
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
        itDogasWeaponSmogMakeWeapon(item_gobj, &pos, &vel);
        func_800269C0(alSound_SFX_DogasSmog);

        ip->item_vars.dogas.smog_spawn_wait = ITDOGAS_SMOG_SPAWN_WAIT;

        ip->it_multi--;
    }
}

// 0x80182E1C
sb32 itDogasNAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itDogasNAttackUpdateSmog(item_gobj);

    if (ip->it_multi == 0)
    {
        itDogasNDisappearSetStatus(item_gobj);

        return FALSE;
    }
    ip->item_vars.dogas.smog_spawn_wait--;

    return FALSE;
}

// 0x80182E78
void itDogasNAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_SMOG_SPAWN_COUNT;

    ip->item_vars.dogas.smog_spawn_wait = 0;

    if (ip->it_kind == It_Kind_Dogas)
    {
        ip->item_vars.dogas.pos = joint->translate.vec.f;

        omAddDObjAnimAll(joint->child, itGetPData(ip, lItDogasDataStart, lItDogasAnimJoint), 0.0F); // Linker thing

        func_8000DF34(item_gobj);
        func_800269C0(alSound_Voice_MBallDogasSpawn);
    }
}

// 0x80182F0C
void itDogasNAttackSetStatus(GObj *item_gobj)
{
    itDogasNAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dItDogasStatusDesc, itStatus_Dogas_NAttack);
}

// 0x80182F40
sb32 itDogasSDefaultProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {   
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itDogasNAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182F94
sb32 itDogasSDefaultProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80182FD4
GObj* itDogasMakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(spawn_gobj, &dItDogasItemDesc, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = DObjGetStruct(item_gobj);

        omAddOMMtxForDObjFixed(joint, 0x28, 0);
        omAddOMMtxForDObjFixed(joint->child, OMMtx_Transform_TraRotRpyRSca, 0);

        joint->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        joint->translate.vec.f.y -= ip->attributes->objectcoll_bottom;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        omAddDObjAnimAll(joint->child, itGetPData(ip, lItDogasDataStart, lMonsterAnimBankStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x801830DC
sb32 itDogasWeaponSmogProcUpdate(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj)->child;

    ip->weapon_hit.size = joint->scale.vec.f.x * ip->weapon_vars.smog.attributes->size;

    if (wpMainDecLifeCheckExpire(ip) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80183144
GObj* itDogasWeaponSmogMakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    wpCreateDesc *weapon_desc = &dItDogasWeaponSmogWeaponDesc;
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dItDogasWeaponSmogWeaponDesc, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = ITDOGAS_SMOG_LIFETIME;

    wp->weapon_vars.smog.attributes = (wpAttributes*) (*(uintptr_t*)weapon_desc->p_weapon + (intptr_t)weapon_desc->o_attributes); // Dude I had a stroke trying to match this

    joint = DObjGetStruct(weapon_gobj);

    wp->phys_info.vel = *vel;

    omAddOMMtxForDObjFixed(joint->child, 0x2C, 0);

    joint->translate.vec.f = *pos;

    return weapon_gobj;
}
