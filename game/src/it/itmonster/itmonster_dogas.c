#include <it/item.h>
#include <wp/weapon.h>

enum itDogasStatus
{
    itStatus_Dogas_NActive,
    itStatus_Dogas_NDisappear,
    itStatus_Dogas_EnumMax
};

itStatusDesc itMonster_Dogas_StatusDesc[];

// 0x80182C80
bool32 itDogas_NDisappear_ProcUpdate(GObj *item_gobj)
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

    itMain_SetItemStatus(item_gobj, itMonster_Dogas_StatusDesc, itStatus_Dogas_NDisappear);
}

// 0x80182CDC
void itDogas_NActive_UpdateSmog(GObj *item_gobj)
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

        pos = joint->translate;

        pos.x += (lbRandom_GetFloat() * ITDOGAS_SMOG_MUL_OFF_X) - ITDOGAS_SMOG_SUB_OFF_X;
        pos.y += (lbRandom_GetFloat() * ITDOGAS_SMOG_MUL_OFF_Y) - ATDGOAS_SMOG_SUB_OFF_Y;

        if (pos.x < joint->translate.x)
        {
            vel.x = -vel.x;
        }
        if (pos.y < joint->translate.y)
        {
            vel.y = -vel.y;
        }
        wpDogas_Smog_MakeWeapon(item_gobj, &pos, &vel);
        func_800269C0(gmSound_SFX_DogasGas);

        ip->item_vars.dogas.smog_spawn_wait = ITDOGAS_SMOG_SPAWN_WAIT;

        ip->it_multi--;
    }
}

// 0x80182E1C
bool32 itDogas_NActive_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    itDogas_NActive_UpdateSmog(item_gobj);

    if (ip->it_multi == 0)
    {
        itDogas_NDisappear_SetStatus(item_gobj);

        return FALSE;
    }
    ip->item_vars.dogas.smog_spawn_wait--;

    return FALSE;
}

extern intptr_t D_NF_00012820;
extern intptr_t D_NF_000128DC;

// 0x80182E78
void itDogas_NActive_InitItemVars(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    ip->it_multi = ITDOGAS_SMOG_SPAWN_COUNT;

    ip->item_vars.dogas.smog_spawn_wait = 0;

    if (ip->it_kind == It_Kind_Dogas)
    {
        ip->item_vars.dogas.pos = joint->translate;

        func_8000BD1C(joint->next, itGetPData(ip, D_NF_00012820, D_NF_000128DC), 0.0F); // Linker thing

        func_8000DF34(item_gobj);
        func_800269C0(gmSound_Voice_MBallDogasSpawn);
    }
}

// 0x80182F0C
void itDogas_NActive_SetStatus(GObj *item_gobj)
{
    itDogas_NActive_InitItemVars(item_gobj);
    itMain_SetItemStatus(item_gobj, itMonster_Dogas_StatusDesc, itStatus_Dogas_NActive);
}

// 0x80182F40
bool32 itDogas_NAppear_ProcUpdate(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (ip->it_multi == 0)
    {
        ip->phys_info.vel_air.y = 0.0F;
        ip->phys_info.vel_air.x = 0.0F;

        itDogas_NActive_SetStatus(item_gobj);
    }
    ip->it_multi--;

    return FALSE;
}

// 0x80182F94
bool32 itDogas_NAppear_ProcMap(GObj *item_gobj)
{
    itStruct *ip = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ip->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Dogas_Data;

GObj* itMonster_Dogas_MakeItem(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Dogas_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ip;

    if (item_gobj != NULL)
    {
        joint = item_gobj->obj;

        func_80008CC0(joint, 0x28U, 0U);
        func_80008CC0(joint->next, 0x1CU, 0U);

        joint->translate = *pos;

        ip = itGetStruct(item_gobj);

        joint->translate.y -= ip->attributes->objectcoll_bottom;

        ip->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ip->phys_info.vel_air.x = 0.0F;
        ip->phys_info.vel_air.z = 0.0F;
        ip->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        func_8000BD1C(joint->next, itGetPData(ip, D_NF_00012820, D_NF_00013624), 0.0F); // Linker thing
    }
    return item_gobj;
}

// 0x801830DC
bool32 wpDogas_Smog_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    DObj *joint = DObjGetStruct(weapon_gobj)->next;

    ip->weapon_hit.size = joint->scale.x * ip->weapon_vars.smog.hit_desc->size;

    if (wpMain_DecLifeCheckExpire(ip) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

extern wpCreateDesc Item_Smog_Data;

// 0x80183144
GObj* wpDogas_Smog_MakeWeapon(GObj *item_gobj, Vec3f *pos, Vec3f *vel)
{
    wpCreateDesc *p_data = &Item_Smog_Data;
    GObj *weapon_gobj = wpManager_MakeWeapon(item_gobj, &Item_Smog_Data, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->lifetime = ITDOGAS_SMOG_LIFETIME;

    ip->weapon_vars.smog.hit_desc = (wpAttributes*) (*(uintptr_t*)p_data->p_item + (intptr_t)p_data->offset); // Dude I had a stroke trying to match this

    joint = DObjGetStruct(weapon_gobj);

    ip->phys_info.vel = *vel;

    func_80008CC0(joint->next, 0x2C, 0);

    joint->translate = *pos;

    return weapon_gobj;
}