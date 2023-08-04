#include "weapon.h"

// 0x80167880
bool32 wpMap_CheckCollideGround(mpCollData *coll_data, s32 arg1, s32 arg2)
{
    s32 ground_line_id = coll_data->ground_line_id;
    bool32 is_collide_ground = FALSE;

    if (func_ovl2_800DA294(coll_data) != FALSE)
    {
        func_ovl2_800DA658(coll_data);
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DAAA8(coll_data) != FALSE)
    {
        func_ovl2_800DAE6C(coll_data);
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DB2BC(coll_data) != FALSE)
    {
        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
            is_collide_ground = TRUE;
        }
    }
    else
    {
        coll_data->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DB474(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
            is_collide_ground = TRUE;
        }
        coll_data->unk_0x64 = FALSE;
    }
    return is_collide_ground;
}

bool32 func_ovl3_8016796C(GObj *weapon_gobj)
{
    return func_ovl2_800DA034(&wpGetStruct(weapon_gobj)->coll_data, wpMap_CheckCollideGround, weapon_gobj, FALSE);
}

bool32 func_ovl3_801679A0(mpCollData *coll_data, s32 arg1, s32 arg2)
{
    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        func_ovl2_800DBF58(coll_data);
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        func_ovl2_800DCAE8(coll_data);
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        func_ovl2_800DD160(coll_data);
        if (coll_data->coll_type & MPCOLL_MASK_CEIL)
        {
            func_ovl2_800D99B8(coll_data);
        }
    }
    if (func_ovl2_800DD578(coll_data) != FALSE)
    {
        func_ovl2_800DD6A8(coll_data);
        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
        }
    }
    return FALSE;
}

bool32 func_ovl3_80167A58(GObj *weapon_gobj)
{
    return func_ovl2_800DA034(&wpGetStruct(weapon_gobj)->coll_data, func_ovl3_801679A0, weapon_gobj, 0);
}

bool32 func_ovl3_80167A8C(mpCollData *coll_data, s32 arg1, s32 arg2)
{
    if (func_ovl2_800DB838(coll_data) != FALSE)
    {
        func_ovl2_800DBF58(coll_data);
    }
    if (func_ovl2_800DC3C8(coll_data) != FALSE)
    {
        func_ovl2_800DCAE8(coll_data);
    }
    if (func_ovl2_800DCF58(coll_data) != FALSE)
    {
        func_ovl2_800DD160(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_CEIL)
        {
            func_ovl2_800D99B8(coll_data);
        }
    }
    if (func_ovl2_800DD578(coll_data) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_type & MPCOLL_MASK_GROUND)
        {
            func_ovl2_800D9F84(coll_data);
            coll_data->unk_0x64 = TRUE;

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl3_80167B58(GObj *weapon_gobj)
{
    return func_ovl2_800DA034(&wpGetStruct(weapon_gobj)->coll_data, func_ovl3_80167A8C, weapon_gobj, 0);
}

bool32 func_ovl3_80167B8C(mpCollData *weapon_gobj, s32 arg1, s32 arg2)
{
    if (func_ovl2_800DB838(weapon_gobj) != FALSE)
    {
        weapon_gobj->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DC3C8(weapon_gobj) != FALSE)
    {
        weapon_gobj->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DCF58(weapon_gobj) != FALSE)
    {
        weapon_gobj->unk_0x64 = TRUE;
    }
    if (func_ovl2_800DD578(weapon_gobj) != FALSE)
    {
        weapon_gobj->unk_0x64 = TRUE;
    }
    return weapon_gobj->unk_0x64;
}

bool32 func_ovl3_80167C04(GObj *weapon_gobj)
{
    return func_ovl2_800DA034(&wpGetStruct(weapon_gobj)->coll_data, func_ovl3_80167B8C, weapon_gobj, 0);
}

bool32 wpMap_CheckCollideAllRebound(GObj *weapon_gobj, u32 check_flags, f32 mod_vel, Vec3f *pos) // Modify velocity based on angle of collision
{
    wpStruct *ip = wpGetStruct(weapon_gobj);
    mpCollData *coll_data = &ip->coll_data;
    bool32 return_bool = FALSE;
    Vec3f mod_pos, *translate = &DObjGetStruct(weapon_gobj)->translate;
    u16 coll_flags = (ip->coll_data.coll_mask_prev ^ ip->coll_data.coll_mask) & ip->coll_data.coll_mask & MPCOLL_MASK_MAIN_ALL;
    u32 unused;


    if (coll_flags & check_flags & MPCOLL_MASK_RWALL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->rwall_angle) < 0.0F)
        {
            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->rwall_angle);

            return_bool = TRUE;

            mod_pos.x = translate->x + coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_LWALL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->lwall_angle) < 0.0F)
        {
            return_bool = TRUE;

            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->lwall_angle);

            mod_pos.x = translate->x - coll_data->object_coll.width;
            mod_pos.y = translate->y + coll_data->object_coll.center;
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_CEIL)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->ceil_angle) < 0.0F)
        {
            return_bool = TRUE;

            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->ceil_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.top;
        }
    }

    if (coll_flags & check_flags & MPCOLL_MASK_GROUND)
    {
        if (func_ovl0_800C7C0C(&ip->phys_info.vel, &coll_data->ground_angle) < 0.0F)
        {
            return_bool = TRUE;

            func_ovl0_800C7B08(&ip->phys_info.vel, &coll_data->ground_angle);

            mod_pos.x = translate->x;
            mod_pos.y = translate->y + coll_data->object_coll.bottom;
        }
    }
    if (return_bool != FALSE)
    {
        func_ovl0_800C7AE0(&ip->phys_info.vel, mod_vel);

        if (pos != NULL)
        {
            pos->x = mod_pos.x;
            pos->y = mod_pos.y;
            pos->z = translate->z;
        }
    }
    return return_bool;
}

// 0x80167E78
void wpMap_SetGround(wpStruct *ip) // Make item grounded
{
    ip->ground_or_air = GA_Ground;
    ip->phys_info.vel_ground = ip->phys_info.vel_air.x * ip->lr;
}

// 0x80167E9C
void wpMap_SetAir(wpStruct *ip) // Make item airborne
{
    ip->ground_or_air = GA_Air;
}