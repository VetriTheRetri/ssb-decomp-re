#include <it/item.h>
#include <wp/weapon.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern intptr_t lITDogasItemAttributes;     // 0x00000BF8
extern intptr_t
lITDogasWeaponSmogWeaponAttributes;         // 0x00000C40
extern intptr_t lITDogasDataStart;          // 0x00012820
extern intptr_t lITDogasAnimJoint;          // 0x000128DC

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8018B2C0
itCreateDesc dITDogasItemDesc =
{
    nITKindDogas,                           // Item Kind
    &gITManagerFileData,                    // Pointer to item file data?
    &lITDogasItemAttributes,                // Offset of item attributes in file?

    // DObj transformation struct
    {
        nOMTransformNull,                   // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
        0,                                  // ???
    },

    nGMHitUpdateDisable,                    // Hitbox Update State
    itDogasCommonProcUpdate,                // Proc Update
    itDogasCommonProcMap,                   // Proc Map
    NULL,                                   // Proc Hit
    NULL,                                   // Proc Shield
    NULL,                                   // Proc Hop
    NULL,                                   // Proc Set-Off
    NULL,                                   // Proc Reflector
    NULL                                    // Proc Damage
};

// 0x80182BF4
itStatusDesc dITDogasStatusDescs[/* */] =
{
    // Status 0 (Neutral Active)
    {
        itDogasAttackProcUpdate,            // Proc Update
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
        itDogasDisappearProcUpdate,         // Proc Update
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
wpCreateDesc dITDogasWeaponSmogWeaponDesc = 
{
    0x03,                                   // Render flags?
    nWPKindDogasSmog,                       // Weapon Kind
    &gITManagerFileData,                    // Pointer to weapon's loaded files?
    &lITDogasWeaponSmogWeaponAttributes,    // Offset of weapon attributes in loaded files

    // DObj transformation struct
    {
        nOMTransformTraRotRpyR,             // Main matrix transformations
        nOMTransformNull,                   // Secondary matrix transformations?
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
    itDogasStatusAttack,
    itDogasStatusDisappear,
    itDogasStatusEnumMax
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80182C80
sb32 itDogasDisappearProcUpdate(GObj *item_gobj)
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
void itDogasDisappearSetStatus(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_DESPAWN_WAIT;

    itMainSetItemStatus(item_gobj, dITDogasStatusDescs, itDogasStatusDisappear);
}

// 0x80182CDC
void itDogasAttackUpdateSmog(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);
    Vec3f pos;
    Vec3f vel;

    if (ip->item_vars.dogas.smog_spawn_wait <= 0)
    {
        vel.x = ITDOGAS_SMOG_VEL_XY;
        vel.y = ITDOGAS_SMOG_VEL_XY;
        vel.z = 0.0F;

        pos = dobj->translate.vec.f;

        pos.x += (mtTrigGetRandomFloat() * ITDOGAS_SMOG_MUL_OFF_X) - ITDOGAS_SMOG_SUB_OFF_X;
        pos.y += (mtTrigGetRandomFloat() * ITDOGAS_SMOG_MUL_OFF_Y) - ITDGOAS_SMOG_SUB_OFF_Y;

        if (pos.x < dobj->translate.vec.f.x)
        {
            vel.x = -vel.x;
        }
        if (pos.y < dobj->translate.vec.f.y)
        {
            vel.y = -vel.y;
        }
        itDogasWeaponSmogMakeWeapon(item_gobj, &pos, &vel);
        func_800269C0_275C0(nSYAudioFGMDogasSmog);

        ip->item_vars.dogas.smog_spawn_wait = ITDOGAS_SMOG_SPAWN_WAIT;

        ip->it_multi--;
    }
}

// 0x80182E1C
sb32 itDogasAttackProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itDogasAttackUpdateSmog(item_gobj);

    if (ip->it_multi == 0)
    {
        itDogasDisappearSetStatus(item_gobj);

        return FALSE;
    }
    ip->item_vars.dogas.smog_spawn_wait--;

    return FALSE;
}

// 0x80182E78
void itDogasAttackInitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *dobj = DObjGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_SMOG_SPAWN_COUNT;

    ip->item_vars.dogas.smog_spawn_wait = 0;

    if (ip->it_kind == nITKindDogas)
    {
        ip->item_vars.dogas.pos = dobj->translate.vec.f;

        gcAddDObjAnimJoint(dobj->child, itGetPData(ip, lITDogasDataStart, lITDogasAnimJoint), 0.0F); // Linker thing

        gcPlayAnimAll(item_gobj);
        func_800269C0_275C0(nSYAudioVoiceMBallDogasAppear);
    }
}

// 0x80182F0C
void itDogasAttackSetStatus(GObj *item_gobj)
{
    itDogasAttackInitItemVars(item_gobj);
    itMainSetItemStatus(item_gobj, dITDogasStatusDescs, itDogasStatusAttack);
}

// 0x80182F40
sb32 itDogasCommonProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {   
        ip->phys_info.vel_air.x = ip->phys_info.vel_air.y = 0.0F;

        itDogasAttackSetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182F94
sb32 itDogasCommonProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (itMapTestAllCollisionFlag(item_gobj, MPCOLL_KIND_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

// 0x80182FD4
GObj* itDogasMakeItem(GObj *parent_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManagerMakeItem(parent_gobj, &dITDogasItemDesc, pos, vel, flags);
    DObj *dobj;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        dobj = DObjGetStruct(item_gobj);

        gcAddOMMtxForDObjFixed(dobj, 0x28, 0);
        gcAddOMMtxForDObjFixed(dobj->child, nOMTransformTraRotRpyRSca, 0);

        dobj->translate.vec.f = *pos;

        ip = itGetStruct(item_gobj);

        dobj->translate.vec.f.y -= ip->attributes->objcoll_bottom;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        gcAddDObjAnimJoint(dobj->child, itGetMonsterAnimNode(ip, lITDogasDataStart), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x801830DC
sb32 itDogasWeaponSmogProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    DObj *dobj = DObjGetStruct(weapon_gobj)->child;

    wp->weapon_hit.size = dobj->scale.vec.f.x * wp->weapon_vars.smog.attributes->size;

    if (wpMainDecLifeCheckExpire(wp) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80183144
GObj* itDogasWeaponSmogMakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    wpCreateDesc *weapon_desc = &dITDogasWeaponSmogWeaponDesc;
    GObj *weapon_gobj = wpManagerMakeWeapon(item_gobj, &dITDogasWeaponSmogWeaponDesc, pos, WEAPON_FLAG_PARENT_ITEM);
    DObj *dobj;
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = ITDOGAS_SMOG_LIFETIME;

    wp->weapon_vars.smog.attributes = (wpAttributes*) ((uintptr_t)*weapon_desc->p_weapon + (intptr_t)weapon_desc->o_attributes); // Dude I had a stroke trying to match this

    dobj = DObjGetStruct(weapon_gobj);

    wp->phys_info.vel_air = *vel;

    gcAddOMMtxForDObjFixed(dobj->child, 0x2C, 0);

    dobj->translate.vec.f = *pos;

    return weapon_gobj;
}
