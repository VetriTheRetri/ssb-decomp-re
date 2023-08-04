#include <wp/weapon.h>
#include <ft/fighter.h>

extern void *D_ovl2_801310BC;

wpCreateDesc wpPikachu_ThunderJoltAir_WeaponDesc =
{
    0,                                          // Render flags?
    Wp_Kind_ThunderJoltAir,                     // Weapon Kind
    &D_ovl2_801310BC,                           // Pointer to character's loaded files?
    0x0,                                        // Offset of weapon attributes in loaded files
    0x12,                                       // ???
    0x2E,                                       // ???
    0,                                          // ???
    wpPikachu_ThunderJoltAir_ProcUpdate,        // Proc Update
    wpPikachu_ThunderJoltAir_ProcMap,           // Proc Map
    wpPikachu_ThunderJoltAir_ProcHit,           // Proc Hit
    wpPikachu_ThunderJoltAir_ProcHit,           // Proc Shield
    wpPikachu_ThunderJoltAir_ProcHop,           // Proc Hop
    wpPikachu_ThunderJoltAir_ProcHit,           // Proc Set-Off
    wpPikachu_ThunderJoltAir_ProcReflector,     // Proc Reflector
    wpPikachu_ThunderJoltAir_ProcHit            // Proc Absorb
};

wpCreateDesc wpPikachu_ThunderJoltGround_WeaponDesc =
{
    3,                                          // Render flags?
    Wp_Kind_ThunderJoltGround,                  // Weapon Kind
    &D_ovl2_801310BC,                           // Pointer to character's loaded files?
    0x34,                                       // Offset of weapon attributes in loaded files
    0x1C,                                       // ???
    0,                                          // ???
    0,                                          // ???
    wpPikachu_ThunderJoltGround_ProcUpdate,     // Proc Update
    wpPikachu_ThunderJoltGround_ProcMap,        // Proc Map
    wpPikachu_ThunderJoltGround_ProcHit,        // Proc Hit
    wpPikachu_ThunderJoltGround_ProcHit,        // Proc Shield
    NULL,                                       // Proc Hop
    wpPikachu_ThunderJoltGround_ProcHit,        // Proc Set-Off
    wpPikachu_ThunderJoltGround_ProcReflector,  // Proc Reflector
    wpPikachu_ThunderJoltGround_ProcHit         // Proc Absorb
};

// 0x80169390
bool32 wpPikachu_ThunderJoltAir_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else wpMain_UpdateGravityClampTVel(wp, WPPIKACHUJOLT_GRAVITY, WPPIKACHUJOLT_T_VEL);

    return FALSE;
}

// 0x801693EC
bool32 wpPikachu_ThunderJoltAir_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    u32 unused[2];

    if (func_ovl3_80167B58(weapon_gobj) != FALSE)
    {
        wpPikachu_ThunderJoltGround_MakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate, 0);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask & MPCOLL_MASK_RWALL)
    {
        func_ovl2_800F4650(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.y = pos.y;
        }

        func_ovl2_800F4670(wp->coll_data.rwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.y = pos.y;
        }
        wpPikachu_ThunderJoltGround_MakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate, 3);

        return TRUE;
    }

    else if (wp->coll_data.coll_mask & MPCOLL_MASK_LWALL)
    {
        func_ovl2_800F4690(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.y > pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.y = pos.y;
        }
        func_ovl2_800F46B0(wp->coll_data.lwall_line_id, &pos);

        if (DObjGetStruct(weapon_gobj)->translate.y < pos.y)
        {
            DObjGetStruct(weapon_gobj)->translate.y = pos.y;
        }
        wpPikachu_ThunderJoltGround_MakeWeapon(weapon_gobj, &DObjGetStruct(weapon_gobj)->translate, 1);

        return TRUE;
    }
    return FALSE;
}

// 0x8016953C
bool32 wpPikachu_ThunderJoltAir_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016956C
bool32 wpPikachu_ThunderJoltAir_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_80019438(&wp->phys_info.vel, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    return FALSE;
}

// 0x801695B0
bool32 wpPikachu_ThunderJoltAir_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);

    return FALSE;
}

// 0x801695E4
GObj* wpPikachu_ThunderJoltAir_MakeWeapon(GObj *fighter_gobj, Vec3f *pos, Vec3f *vel)
{
    GObj *weapon_gobj = wpManager_MakeWeapon(fighter_gobj, &wpPikachu_ThunderJoltAir_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_FIGHTER));
    wpStruct *wp;

    if (weapon_gobj == NULL)
    {
        return NULL;
    }
    wp = wpGetStruct(weapon_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wp->phys_info.vel = *vel;

    return weapon_gobj;
}

extern intptr_t D_NF_00001A20;
extern intptr_t D_NF_00001AE0;
extern void *D_ovl2_801310C4;

void func_ovl3_80169654(GObj *weapon_gobj)
{
    func_8000BED8(weapon_gobj, (uintptr_t)D_ovl2_801310C4 + (intptr_t)&D_NF_00001A20, (uintptr_t)D_ovl2_801310C4 + (intptr_t)&D_NF_00001AE0, 0.0F); // Linker thing
    func_8000DF34(weapon_gobj);
}

// 0x801696A0
bool32 wpPikachu_ThunderJoltGround_ProcUpdate(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    if (weapon_gobj->anim_frame == WPPIKACHUJOLT_ANIM_PUSH_FRAME)
    {
        func_ovl2_80101C34(&DObjGetStruct(weapon_gobj)->translate, DObjGetStruct(weapon_gobj)->rotate.z);
        func_ovl3_80169654(weapon_gobj);
    }
    if (wpMain_DecLifeCheckExpire(wp) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
        return TRUE;
    }

    wp->phys_info.vel_air.x = cosf(DObjGetStruct(weapon_gobj)->rotate.z) * WPPIKACHUJOLT_VEL;
    wp->phys_info.vel_air.y = __sinf(DObjGetStruct(weapon_gobj)->rotate.z) * WPPIKACHUJOLT_VEL;

    switch (wp->weapon_vars.thunder_jolt.coll_type)
    {
    case CENTER:
        wp->phys_info.vel_air.x *= wp->lr;
        break;

    case WALL_UP:
    case WALL_DOWN:
        if (wp->lr == WALL_UP)
        {
            if (wp->phys_info.vel_air.y < 0.0F)
            {
                wp->phys_info.vel_air.y *= -1.0F;
            }
        }
        if (wp->lr == WALL_DOWN)
        {
            if (wp->phys_info.vel_air.y > 0.0F)
            {
                wp->phys_info.vel_air.y *= -1.0F;
            }
        }
        break;
    }
    return FALSE;
}

// 0x8016981C
s32 wpPikachu_ThunderJoltGround_GetSurfaceType(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f pos;
    Vec3f rotate;
    s32 line_id;

    switch (wp->weapon_vars.thunder_jolt.coll_type)
    {
    case 0:
        if (wp->lr == RIGHT)
        {
            if ((func_ovl2_800F8974(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && (func_ovl2_800FAA24(wp->coll_data.ground_line_id) != line_id))
            {
                if (func_ovl2_800F4194(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.coll_type = 3;
                    wp->coll_data.rwall_line_id = line_id;
                    wp->lr = WALL_UP;

                    DObjGetStruct(weapon_gobj)->translate = pos;

                    func_ovl3_80169654(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-rotate.x, rotate.y);

                    return 1;
                }
                return 2;
            }
            break;
        }
        else if ((func_ovl2_800F769C(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && (func_ovl2_800FA964(wp->coll_data.ground_line_id) != line_id))
        {
            if (func_ovl2_800F41C0(line_id, &pos, NULL, NULL, &rotate) != FALSE)
            {
                wp->weapon_vars.thunder_jolt.coll_type = 2;
                wp->coll_data.lwall_line_id = line_id;
                wp->lr = WALL_UP;

                DObjGetStruct(weapon_gobj)->translate = pos;

                func_ovl3_80169654(weapon_gobj);

                DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-rotate.x, rotate.y);

                return 1;
            }
            return 2;
        }
        break;

    case 3:
        if (wp->lr == WALL_DOWN)
        {
            if ((func_ovl2_800F521C(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && (func_ovl2_800FAC64(wp->coll_data.rwall_line_id) != line_id))
            {
                if (mpCollision_GetUUCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.coll_type = 0;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = LEFT;

                    DObjGetStruct(weapon_gobj)->translate = pos;

                    func_ovl3_80169654(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-rotate.x, rotate.y);
                    return 1;
                }
                return 2;
            }
            break;
        }
        else if (func_ovl2_800F64D4(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return 2;
        }
        break;

    case 2:
        if (wp->lr == WALL_DOWN)
        {
            if ((func_ovl2_800F521C(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE) && (func_ovl2_800FADE4(wp->coll_data.lwall_line_id) != line_id))
            {
                if (mpCollision_GetUUCommonUp(line_id, &pos, NULL, NULL, &rotate) != FALSE)
                {
                    wp->weapon_vars.thunder_jolt.coll_type = 0;
                    wp->coll_data.ground_line_id = line_id;
                    wp->lr = RIGHT;

                    DObjGetStruct(weapon_gobj)->translate = pos;

                    func_ovl3_80169654(weapon_gobj);

                    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-rotate.x, rotate.y);
                    return 1;
                }
                return 2;
            }
        }
        else if (func_ovl2_800F64D4(&wp->coll_data.pos_curr, wp->coll_data.p_translate, &pos, &line_id, NULL, NULL) != FALSE)
        {
            return 2;
        }
        break;

    default: 
        break;
    }
    DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-wp->weapon_vars.thunder_jolt.rotate.x, wp->weapon_vars.thunder_jolt.rotate.y);

    return 0;
}

// 0x80169BF0
bool32 func_ovl3_80169BF0(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f angle;

    func_ovl3_80169654(weapon_gobj);

    switch (wp->weapon_vars.thunder_jolt.coll_type)
    {
    case 0:
        mpCollision_GetUUCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate, NULL, NULL, &angle);
        break;
    case 3:
        func_ovl2_800F4194(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate, NULL, NULL, &angle);
        break;
    case 2:
        func_ovl2_800F41C0(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate, NULL, NULL, &angle);
        break;
    }

    if (vec3f_angle_diff(&angle, &wp->weapon_vars.thunder_jolt.rotate) > WPPIKACHUJOLT_ROTATE_ANGLE_MAX)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else DObjGetStruct(weapon_gobj)->rotate.z = atan2f(-angle.x, angle.y);

    return FALSE;
}

// 0x80169D08
bool32 wpPikachu_ThunderJoltGround_ProcMap(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    s32 coll_type;
    Vec3f pos;
    s32 line_id;
    s32 unused;

    switch (wp->weapon_vars.thunder_jolt.coll_type)
    {
    case 0:

        if (func_ovl2_800FC67C(wp->coll_data.ground_line_id) == FALSE)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }

        if (mpCollision_GetUUCommonUp(wp->coll_data.ground_line_id, &DObjGetStruct(weapon_gobj)->translate, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.y += pos.x;

            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) == 2)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

                return TRUE;
            }
            return FALSE;
        }

        if (wp->lr == RIGHT)
        {
            line_id = func_ovl2_800FA964(wp->coll_data.ground_line_id);
        }
        else
        {
            if (wp->lr == LEFT)
            {
                line_id = func_ovl2_800FAA24(wp->coll_data.ground_line_id);
            }
            else line_id = -1;
        }
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

                return TRUE;
            }
            return FALSE;
        }

        coll_type = func_ovl2_800FA8A4(line_id);

        if (wp->lr == RIGHT)
        {
            if (coll_type == 3)
            {
                wp->coll_data.rwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.coll_type = coll_type;
                wp->lr = WALL_UP;

                func_ovl2_800F4670(line_id, &DObjGetStruct(weapon_gobj)->translate);

                return func_ovl3_80169BF0(weapon_gobj);
            }
            if (coll_type == 2)
            {
                wp->coll_data.lwall_line_id = line_id;
                wp->weapon_vars.thunder_jolt.coll_type = coll_type;
                wp->lr = WALL_DOWN;

                func_ovl2_800F4690(line_id, &DObjGetStruct(weapon_gobj)->translate);

                return func_ovl3_80169BF0(weapon_gobj);
            }
        }
        else if (coll_type == 3)
        {
            wp->coll_data.rwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.coll_type = coll_type;
            wp->lr = WALL_DOWN;

            func_ovl2_800F4650(line_id, &DObjGetStruct(weapon_gobj)->translate);

            return func_ovl3_80169BF0(weapon_gobj);
        }
        else if (coll_type == 2)
        {
            wp->coll_data.lwall_line_id = line_id;
            wp->weapon_vars.thunder_jolt.coll_type = coll_type;
            wp->lr = WALL_UP;

            func_ovl2_800F46B0(line_id, &DObjGetStruct(weapon_gobj)->translate);

            return func_ovl3_80169BF0(weapon_gobj);
        }

        if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }
        return FALSE;

        break;

    case 3:

        if (func_ovl2_800FC67C(wp->coll_data.rwall_line_id) == 0)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }

        if (func_ovl2_800F4194(wp->coll_data.rwall_line_id, &DObjGetStruct(weapon_gobj)->translate, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.x += pos.x;

            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) == 2)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == WALL_UP)
        {
            line_id = func_ovl2_800FAC64(wp->coll_data.rwall_line_id);
        }
        else
        {
            line_id = func_ovl2_800FAD24(wp->coll_data.rwall_line_id);
        }
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
                return TRUE;
            }
            return FALSE;
        }

        coll_type = func_ovl2_800FA8A4(line_id);

        if (wp->lr == WALL_UP)
        {
            if (coll_type == 0)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.coll_type = coll_type;
                wp->lr = RIGHT;

                mpCollision_GetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate);

                return func_ovl3_80169BF0(weapon_gobj);
            }
        }
        else if (coll_type == 0)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.coll_type = coll_type;
            wp->lr = LEFT;

            mpCollision_GetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate);

            return func_ovl3_80169BF0(weapon_gobj);
        }

        if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }
        return FALSE;

        break;

    case 2:

        if (func_ovl2_800FC67C(wp->coll_data.lwall_line_id) == FALSE)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }

        if (func_ovl2_800F41C0(wp->coll_data.lwall_line_id, &DObjGetStruct(weapon_gobj)->translate, &pos, NULL, &wp->weapon_vars.thunder_jolt.rotate) != FALSE)
        {
            DObjGetStruct(weapon_gobj)->translate.x += pos.x;

            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) == 2)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0f);
                return TRUE;
            }
            return FALSE;
        }
        if (wp->lr == WALL_UP)
        {
            line_id = func_ovl2_800FADE4(wp->coll_data.lwall_line_id);
        }
        else
        {
            line_id = func_ovl2_800FAEA4(wp->coll_data.lwall_line_id);
        }
        if ((line_id == -1) || (line_id == -2))
        {
            if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
            {
                efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
                return TRUE;
            }
            return FALSE;
        }

        coll_type = func_ovl2_800FA8A4(line_id);

        if (wp->lr == WALL_UP)
        {
            if (coll_type == 0)
            {
                wp->coll_data.ground_line_id = line_id;
                wp->weapon_vars.thunder_jolt.coll_type = coll_type;
                wp->lr = LEFT;

                mpCollision_GetLREdgeRight(line_id, &DObjGetStruct(weapon_gobj)->translate);

                return func_ovl3_80169BF0(weapon_gobj);
            }
        }
        else if (coll_type == 0)
        {
            wp->coll_data.ground_line_id = line_id;
            wp->weapon_vars.thunder_jolt.coll_type = coll_type;
            wp->lr = RIGHT;

            mpCollision_GetLREdgeLeft(line_id, &DObjGetStruct(weapon_gobj)->translate);

            return func_ovl3_80169BF0(weapon_gobj);
        }

        if (wpPikachu_ThunderJoltGround_GetSurfaceType(weapon_gobj) != 1)
        {
            efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);
            return TRUE;
        }
        return FALSE;

    default:
        return FALSE;
    }
}

// 0x8016A374
bool32 wpPikachu_ThunderJoltGround_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return TRUE;
}

// 0x8016A3A4
bool32 wpPikachu_ThunderJoltGround_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);

    wp->lifetime = WPPIKACHUJOLT_LIFETIME;

    wpMain_ReflectorSetLR(wp, fp);

    DObjGetStruct(weapon_gobj)->rotate.y = (wp->phys_info.vel_air.x >= 0.0F) ? PI32 : 0;

    wpMain_VelSetLR(weapon_gobj);

    return FALSE;
}

// 0x8016A42C
GObj* wpPikachu_ThunderJoltGround_MakeWeapon(GObj *prev_gobj, Vec3f *pos, s32 coll_type)
{
    s32 unused[2];
    wpStruct *prev_wp = prev_gobj->user_data;
    wpStruct *new_wp;
    GObj *new_gobj = wpManager_MakeWeapon(prev_gobj, &wpPikachu_ThunderJoltGround_WeaponDesc, pos, (WEAPON_FLAG_PROJECT | WEAPON_MASK_SPAWN_WEAPON));

    if (new_gobj == NULL)
    {
        return NULL;
    }
    new_wp = wpGetStruct(new_gobj);

    new_wp->weapon_vars.thunder_jolt.coll_type = coll_type;

    new_wp->lifetime = prev_wp->lifetime;

    new_wp->coll_data.ground_line_id = prev_wp->coll_data.ground_line_id;
    new_wp->coll_data.rwall_line_id = prev_wp->coll_data.rwall_line_id;
    new_wp->coll_data.lwall_line_id = prev_wp->coll_data.lwall_line_id;

    func_8000BB4C(new_gobj, 0.5F);

    wpPikachu_ThunderJoltGround_ProcMap(new_gobj);

    switch (new_wp->weapon_vars.thunder_jolt.coll_type)
    {
    case 0:
        new_wp->lr = (prev_wp->phys_info.vel_air.x >= 0.0F) ? RIGHT : LEFT;

        DObjGetStruct(new_gobj)->rotate.y = (new_wp->lr >= 0.0F) ? PI32 : 0;
        break;

    case 3:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_DEG_TO_RAD(135.0F)) // 2.3561945F
        {
            DObjGetStruct(new_gobj)->rotate.y = 0;
            new_wp->lr = WALL_DOWN;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.y = PI32;
            new_wp->lr = WALL_UP;
        }
        break;

    case 2:
        if (atan2f(new_wp->weapon_vars.thunder_jolt.rotate.y, new_wp->weapon_vars.thunder_jolt.rotate.x) > F_DEG_TO_RAD(45.0F)) // QUART_PI32
        {
            DObjGetStruct(new_gobj)->rotate.y = 0;
            new_wp->lr = WALL_UP;
        }
        else
        {
            DObjGetStruct(new_gobj)->rotate.y = PI32;
            new_wp->lr = WALL_DOWN;
        }
        break;
    }
    func_ovl2_80101C34(&DObjGetStruct(new_gobj)->translate, DObjGetStruct(new_gobj)->rotate.z);
    wpMain_PlaySFX(new_wp, 0xE6);

    return new_gobj;
}