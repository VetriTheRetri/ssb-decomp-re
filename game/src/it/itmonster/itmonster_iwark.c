#include <it/item.h>
#include <wp/weapon.h>
#include <ft/fighter.h>
#include <gr/ground.h>

void func_ovl3_8017D740(GObj *iwark_gobj)
{
    itStruct *ap = itGetStruct(iwark_gobj);
    DObj *joint = DObjGetStruct(iwark_gobj);

    if (ap->item_vars.iwark.rock_spawn_wait <= 0)
    {
        wpStruct *ip;
        GObj *rock_gobj;
        Vec3f pos = joint->translate;

        pos.x += (ITIWARK_ROCK_SPAWN_OFF_X_MUL * lbRandom_GetFloat()) + ITIWARK_ROCK_SPAWN_OFF_X_ADD;

        rock_gobj = func_ovl3_8017DF28(iwark_gobj, &pos, lbRandom_GetIntRange(WPIWARK_ROCK_RANDOM_VEL_MAX));

        if (rock_gobj != NULL)
        {
            ip = wpGetStruct(rock_gobj);

            ip->weapon_vars.rock.unk_0xC = ap->item_vars.iwark.rock_timer2 - ap->item_vars.iwark.rock_timer1;

            ap->item_vars.iwark.rock_timer1--;

            if (ap->item_vars.iwark.rock_timer1 == 0)
            {
                ip->weapon_vars.rock.unk_0xC = -1;
            }
            ap->item_vars.iwark.rock_spawn_wait = lbRandom_GetIntRange(ITIWARK_ROCK_SPAWN_WAIT_MAX) + ITIWARK_ROCK_SPAWN_WAIT_MIN;
        }
    }
}

bool32 func_ovl3_8017D820(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    f32 pos_y = gpGroundInfo->blastzone_top - ITIWARK_FLY_STOP_Y;

    if (pos_y <= joint->translate.y)
    {
        joint->translate.y = pos_y;

        ap->phys_info.vel_air.y = 0.0F;

        if (ap->item_vars.iwark.rock_timer1 != 0)
        {
            func_ovl3_8017D740(item_gobj);
        }
        else if (ap->item_vars.iwark.rock_spawn_count == ap->item_vars.iwark.rock_timer2)
        {
            return TRUE;
        }
        if ((ap->item_vars.iwark.rumble_wait == 0) && (ap->item_vars.iwark.is_rumble != FALSE))
        {
            efParticle_Quake_MakeEffect(0);

            ap->item_vars.iwark.rumble_wait = ITIWARK_ROCK_RUMBLE_WAIT;
        }
        if (ap->item_vars.iwark.is_rumble != FALSE)
        {
            ap->item_vars.iwark.rumble_wait--;
        }
        ap->item_vars.iwark.rock_spawn_wait--;
    }
    if (ap->it_multi == ITIWARK_MODEL_ROTATE_WAIT)
    {
        joint->rotate.y += PI32;

        ap->it_multi = 0;
    }
    ap->it_multi++;

    return FALSE;
}

extern intptr_t D_NF_0000A140;
extern intptr_t D_NF_0000A640;

void func_ovl3_8017D948(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);
    void *dl;
    Vec3f pos;

    ap->ground_or_air = GA_Air;

    ap->phys_info.vel_air.y = ITIWARK_FLY_VEL_Y;

    ap->item_vars.iwark.rock_timer1 = lbRandom_GetIntRange(ITIWARK_ROCK_SPAWN_COUNT_MAX) + ITIWARK_ROCK_SPAWN_COUNT_MIN;
    ap->item_vars.iwark.rock_timer2 = ap->item_vars.iwark.rock_timer1;
    ap->item_vars.iwark.rock_spawn_count = 0;
    ap->item_vars.iwark.rock_spawn_wait = 0;
    ap->item_vars.iwark.is_rumble = FALSE;
    ap->item_vars.iwark.rumble_wait = 0;

    ap->it_multi = 0;

    pos = joint->translate;

    if (ap->it_kind == It_Kind_Iwark)
    {
        joint->display_list = dl = itGetPData(ap, D_NF_0000A140, D_NF_0000A640); // Linker thing

        pos.y += ITIWARK_IWARK_ADD_POS_Y;
    }
    else pos.y += ITIWARK_OTHER_ADD_POS_Y;

    efParticle_DustHeavyDouble_MakeEffect(&pos, LEFT, 1.0F);

    if (ap->it_kind == It_Kind_Iwark)
    {
        func_800269C0(0x136U);
    }
}

extern itStatusDesc Article_Iwark_Status[];

void func_ovl3_8017DA60(GObj *item_gobj)
{
    func_ovl3_8017D948(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Iwark_Status, 1);
}

bool32 func_ovl3_8017DA94(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        func_ovl3_8017DA60(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

void func_ovl3_8017DAD8(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    ap->it_multi = ITIWARK_FLY_WAIT;

    ap->phys_info.vel_air.y = 0.0F;
    ap->phys_info.vel_air.x = 0.0F;

    itMain_SetItemStatus(item_gobj, Article_Iwark_Status, 0);
}

bool32 jtgt_ovl3_8017DB18(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        func_ovl3_8017DAD8(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_8017DB5C(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;

        itMap_SetGround(ap);
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Iwark_Data;

GObj* jtgt_ovl3_8017DBA0(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Iwark_Data, pos, vel, flags);
    DObj *joint;
    itStruct *ap;

    if (item_gobj != NULL)
    {
        itMain_ClearOwnerStats(item_gobj);

        joint = DObjGetStruct(item_gobj);

        func_80008CC0(joint, 0x1BU, 0U);
        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->item_hit.interact_mask = GMHITCOLLISION_MASK_FIGHTER;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint, itGetPData(ap, D_NF_0000A140, D_NF_00013624), 0.0F); // Linker thing
    }
    return item_gobj;
}

bool32 func_ovl3_8017DCAC(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    itStruct *ap = itGetStruct(ip->weapon_vars.rock.owner_gobj);

    ap->item_vars.iwark.rock_spawn_count++;

    return TRUE;
}

bool32 jtgt_ovl3_8017DCCC(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    DObj *joint;

    wpMain_UpdateGravityClampTVel(ip, WPIWARK_ROCK_GRAVITY, WPIWARK_ROCK_T_VEL);

    joint = DObjGetStruct(weapon_gobj);

    joint->rotate.z += WPIWARK_ROCK_ROTATE_STEP;

    return FALSE;
}

bool32 jtgt_ovl3_8017DD18(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    itStruct *ap = itGetStruct(ip->weapon_vars.rock.owner_gobj);
    mpCollData *coll_data = &ip->coll_data;
    Vec3f pos = DObjGetStruct(weapon_gobj)->translate;
    s32 line_id = ip->weapon_vars.rock.ground_line_id;

    func_ovl3_80167C04(weapon_gobj);

    if (coll_data->coll_mask & MPCOLL_MASK_GROUND)
    {
        if (line_id != coll_data->ground_line_id)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->ground_angle);

            func_ovl0_800C7AE0(&ip->phys_info.vel, WPIWARK_ROCK_COLLIDE_MUL_VEL_Y);

            ip->weapon_vars.rock.ground_line_id = coll_data->ground_line_id;

            func_800269C0(0x84U);

            pos.y += WPIWARK_ROCK_COLLIDE_ADD_VEL_Y;

            efParticle_DustLight_MakeEffect(&pos, ip->lr, 1.0F);

            ip->lr = -ip->lr;

            ap->item_vars.iwark.is_rumble++;
        }
    }
    return FALSE;
}

bool32 func_ovl3_8017DE10(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);

    func_80019438(&ip->phys_info.vel, &ip->shield_collide_vec, ip->shield_collide_angle * 2);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(ip->phys_info.vel_air.y, ip->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    if (ip->phys_info.vel_air.x > 0.0F)
    {
        ip->lr = RIGHT;
    }
    else ip->lr = LEFT;

    return FALSE;
}

bool32 func_ovl3_8017DEB8(GObj *weapon_gobj)
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(ip->owner_gobj);

    wpMain_ReflectorSetLR(ip, fp);

    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(ip->phys_info.vel_air.y, ip->phys_info.vel_air.x);
    DObjGetStruct(weapon_gobj)->scale.x = 1.0F;

    ip->lr = -ip->lr;

    return FALSE;
}

extern wpCreateDesc Item_Iwark_Rock_Data;

GObj *func_ovl3_8017DF28(GObj *spawn_gobj, Vec3f *pos, u8 random)
{
    s32 unused;
    GObj *weapon_gobj = wpManager_MakeWeapon(spawn_gobj, &Item_Iwark_Rock_Data, pos, WEAPON_MASK_SPAWN_ITEM);
    DObj *joint;
    f32 vel_y;
    wpStruct *ip;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    ip = wpGetStruct(weapon_gobj);

    ip->weapon_vars.rock.ground_line_id = -1;

    if ((u32)random == 0)
    {
        ip->phys_info.vel_air.y = WPIWARK_ROCK_VEL_Y_START_A;
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
        ip->phys_info.vel_air.y = vel_y;
    }

    if (lbRandom_GetIntRange(2) == 0)
    {
        ip->lr = LEFT;
    }
    else ip->lr = RIGHT;

    joint = DObjGetStruct(weapon_gobj);

    func_80008CC0(joint, 0x1BU, 0U);
    func_80008CC0(joint, 0x46U, 0U);

    joint->translate = *pos;

    joint->next->mobj->index = random;

    ip->weapon_vars.rock.owner_gobj = spawn_gobj;

    ip->is_hitlag_victim = TRUE;

    ip->proc_dead = func_ovl3_8017DCAC;

    return weapon_gobj;
}
