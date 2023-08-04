#include <it/item.h>
#include <ft/fighter.h>
#include <gr/ground.h>

bool32 jtgt_ovl3_80182630(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    return FALSE;
}

bool32 jtgt_ovl3_80182660(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_8018273C(item_gobj);
    }
    return FALSE;
}

extern itStatusDesc Article_Sawamura_Status[];

void func_ovl3_801826A8(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, Article_Sawamura_Status, 0);
}

bool32 jtgt_ovl3_801826D0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        func_ovl3_80182AAC(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_80182714(GObj *item_gobj)
{
    func_ovl3_801735A0(item_gobj, func_ovl3_801826A8);

    return FALSE;
}

void func_ovl3_8018273C(GObj *item_gobj)
{
    itMain_SetItemStatus(item_gobj, Article_Sawamura_Status, 1);
}

bool32 func_ovl3_80182764(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    DObj *joint = DObjGetStruct(item_gobj);

    itMain_UpdateGravityClampTVel(ap, ITSAWAMURA_GRAVITY, ITSAWAMURA_T_VEL);

    if ((ap->lr == RIGHT) && ((gpGroundInfo->blastzone_right - ITSAWAMURA_DESPAWN_OFF_X) <= joint->translate.x))
    {
        return TRUE;
    }
    else if ((ap->lr == LEFT) && (joint->translate.x <= (gpGroundInfo->blastzone_left + ITSAWAMURA_DESPAWN_OFF_X)))
    {
        return TRUE;
    }
    else if (ap->it_multi == 0)
    {
        return TRUE;
    }
    ap->it_multi--;

    return FALSE;
}

void func_ovl3_8018285C(GObj *item_gobj, GObj *fighter_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);
    ftStruct *fp = ftGetStruct(fighter_gobj);
    DObj *aj = DObjGetStruct(item_gobj);
    DObj *fj = DObjGetStruct(fighter_gobj);
    s32 unused;
    Vec3f dist;
    Vec3f target_pos;

    target_pos = fj->translate;

    target_pos.y += ITSAWAMURA_TARGET_POS_OFF_Y - fp->coll_data.object_coll.bottom;

    vec3f_sub(&dist, &target_pos, &aj->translate);

    ap->phys_info.vel_air.z = 0.0F;
    ap->phys_info.vel_air.y = 0.0F;
    ap->phys_info.vel_air.x = ITSAWAMURA_KICK_VEL_X;

    vec3_get_euler_rotation(&ap->phys_info.vel, 4, atan2f(dist.y, dist.x));

    ap->lr = (dist.x < 0.0F) ? LEFT : RIGHT;

    if (ap->lr == RIGHT)
    {
        aj->rotate.y = PI32;
    }
}

extern intptr_t D_NF_00011F40;
extern intptr_t D_NF_00012340;

void func_ovl3_80182958(GObj *item_gobj)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    itStruct *ap = itGetStruct(item_gobj);
    GObj *victim_gobj;
    s32 unused2[3];
    DObj *joint = DObjGetStruct(item_gobj);
    f32 square_xy;
    f32 dist_x;
    f32 dist_xy;
    Vec3f dist;
    s32 ft_count = 0;

    if (fighter_gobj != NULL)
    {
        do
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            if ((fighter_gobj != ap->owner_gobj) && (fp->team != ap->team))
            {
                vec3f_sub(&dist, &DObjGetStruct(fighter_gobj)->translate, &joint->translate);

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
        while (fighter_gobj != NULL);
    }
    func_ovl3_8018285C(item_gobj, victim_gobj);

    if (ap->it_kind == It_Kind_Sawamura)
    {
        void *s = itGetPData(ap, D_NF_00011F40, D_NF_00012340); // Linker thing

        joint->display_list = s;

        func_800269C0(0x13FU);
    }
    ap->it_multi = ITSAWAMURA_LIFETIME;

    ap->item_hit.size = ITSAWAMURA_KICK_SIZE;
}

void func_ovl3_80182AAC(GObj *item_gobj)
{
    func_ovl3_80182958(item_gobj);
    itMain_SetItemStatus(item_gobj, Article_Sawamura_Status, 2);
}

bool32 jtgt_ovl3_80182AE0(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (ap->it_multi == 0)
    {
        ap->it_multi = ITSAWAMURA_KICK_WAIT;

        ap->phys_info.vel_air.y = 0.0F;

        func_ovl3_801826A8(item_gobj);
    }
    ap->it_multi--;

    return FALSE;
}

bool32 jtgt_ovl3_80182B34(GObj *item_gobj)
{
    itStruct *ap = itGetStruct(item_gobj);

    if (func_ovl3_801737B8(item_gobj, MPCOLL_MASK_GROUND) != FALSE)
    {
        ap->phys_info.vel_air.y = 0.0F;
    }
    return FALSE;
}

extern intptr_t D_NF_00013624;
extern itCreateDesc Article_Sawamura_Data;

GObj* jtgt_ovl3_80182B74(GObj *spawn_gobj, Vec3f *pos, Vec3f *vel, u32 flags)
{
    GObj *item_gobj = itManager_MakeItem(spawn_gobj, &Article_Sawamura_Data, pos, vel, flags);

    if (item_gobj != NULL)
    {
        DObj *joint = DObjGetStruct(item_gobj);
        itStruct *ap = itGetStruct(item_gobj);

        ap->it_multi = ITMONSTER_RISE_STOP_WAIT;

        ap->phys_info.vel_air.z = 0.0F;
        ap->phys_info.vel_air.x = 0.0F;
        ap->phys_info.vel_air.y = ITMONSTER_RISE_VEL_Y;

        func_80008CC0(joint, 0x48U, 0U);

        joint->translate = *pos;

        joint->translate.y -= ap->attributes->objectcoll_bottom;

        func_8000BD1C(joint, itGetPData(ap, D_NF_00011F40, D_NF_00013624), 0.0F); // Linker thing

        func_800269C0(0x13EU);

        om_g_move_obj_dl_head(item_gobj, 0x12U, item_gobj->room_order);
    }
    return item_gobj;
}