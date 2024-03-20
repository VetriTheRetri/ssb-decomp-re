#include <gr/ground.h>

#include <ft/fighter.h>
#include <wp/weapon.h>

#include <gm/battle.h>
#include <gm/gmsound.h>

intptr_t D_ovl2_8012E940[8] =
{
    0x0000,
    0x0250,
    0x06D0,
    0x03E0,
    0x0D10,
    0x0EB0,
    0x1510,
    0x11D0
};

intptr_t D_ovl2_8012E960[6] =
{
    0x0000,
    0x1D34,
    0x1DA4,
    0x1DC4,
    0x1D54,
    0x1DE4
};

s16 D_ovl2_8012E978[4] =
{
    0xF448,
    0x0000,
    0x2328,
    0x0000
}; // Arwing collision vertex / spawn positions? There should be another 0x0000, but the next array is u8, does it still get padded?

u8 D_ovl2_8012E980[8] =
{
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x00,
    0x00,
    0x00
};

u8 D_ovl2_8012E988[56] =
{
    0x01,
    0x01,
    0x02,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x03,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x04,
    0x04,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x03,
    0x05,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x02,
    0x03,
    0x04,
    0x04,
    0x00
};

u8 D_ovl2_8012E9C0[6][2] =
{
    { 0x00, 0x07 },
    { 0x07, 0x09 },
    { 0x10, 0x0A },
    { 0x1A, 0x0A },
    { 0x24, 0x09 },
    { 0x2D, 0x0A }
};

DObjRenderTypes D_ovl2_8012E9CC[12] =
{
    { 0x53, 0x00, 0x00 },
    { 0x1B, 0x00, 0x00 },
    { 0x12, 0x2C, 0x01 },
    { 0x12, 0x2C, 0x01 },
    { 0x12, 0x2C, 0x00 },
    { 0x12, 0x2C, 0x00 },
    { 0x12, 0x00, 0x01 },
    { 0x12, 0x00, 0x00 },
    { 0x12, 0x2C, 0x00 },
    { 0x12, 0x00, 0x00 },
    { 0x12, 0x2C, 0x01 },
    { 0x00, 0x00, 0x00 } // This might just be padding
};

wpCreateDesc wpArwing_Laser2D_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_ArwingLaser2D,                  // Weapon Kind
    &gGroundStruct.sector.weapon_head,      // Pointer to character's loaded files?
    0xBC,                                   // Offset of weapon attributes in loaded files
    0x1B,                                   // ???
    0x0,                                    // ???
    0,                                      // ???
    NULL,                                   // Proc Update
    wpArwing_Laser2D_ProcMap,               // Proc Map
    wpArwing_Laser2D_ProcHit,               // Proc Hit
    wpArwing_Laser2D_ProcHit,               // Proc Shield
    wpArwing_Laser2D_ProcHop,               // Proc Hop
    wpArwing_Laser2D_ProcHit,               // Proc Set-Off
    wpArwing_Laser2D_ProcReflector,         // Proc Reflector
    wpArwing_Laser2D_ProcHit                // Proc Absorb
};

wpCreateDesc wpArwing_Laser3D_WeaponDesc =
{
    0,                                      // Render flags?
    Wp_Kind_ArwingLaser3D,                  // Weapon Kind
    &gGroundStruct.sector.weapon_head,      // Pointer to character's loaded files?
    0xF0,                                   // Offset of weapon attributes in loaded files
    0x1B,                                   // ???
    0x0,                                    // ???
    0,                                      // ???
    NULL,                                   // Proc Update
    wpArwing_Laser3D_ProcMap,               // Proc Map
    wpArwing_Laser3D_ProcHit,               // Proc Hit
    wpArwing_Laser3D_ProcHit,               // Proc Shield
    wpArwing_Laser3D_ProcHit,               // Proc Hop
    wpArwing_Laser3D_ProcHit,               // Proc Set-Off
    wpArwing_Laser3D_ProcHit,               // Proc Reflector
    wpArwing_Laser3D_ProcAbsorb             // Proc Absorb
};

// 0x80106730
void func_ovl2_80106730(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3)
{
    DObj *sp54 = gGroundStruct.sector.map_dobj[11];
    AObj *aobj = arg0->aobj;
    f32 vlen;

    while (aobj != NULL)
    {
        if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->flags & 2) && (aobj->unk_aobj_0x4 == 4))
        {
            vlen = func_8000CB94(aobj);

            if (vlen < 0.0F)
            {
                vlen = 0.0F;
            }
            else if (vlen > 1.0F)
            {
                vlen = 1.0F;
            }
            hal_interpolation_quadratic(vec1, aobj->interpolate, vlen);
        }
        aobj = aobj->next;
    }
    if ((sp54->dobj_f0 != AOBJ_FRAME_NULL) && (gGroundStruct.sector.arwing_laser_count == 0))
    {
        aobj = sp54->aobj;

        while (aobj != NULL)
        {
            if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->flags & 2) && (aobj->unk_aobj_0x4 == 4))
            {
                hal_interpolation_cubic(vec3, aobj->interpolate, vlen);
            }
            aobj = aobj->next;
        }
        lbVector_Vec3fNormalize(vec3);
    }
    func_ovl0_800CD5AC(vec3, vec1, vec2);
    func_ovl0_800CD5AC(vec1, vec2, vec3);
    lbVector_Vec3fNormalize(vec1);
    lbVector_Vec3fNormalize(vec2);
    lbVector_Vec3fNormalize(vec3);
}

// 0x80106904
sb32 func_ovl2_80106904(Mtx *o_mtx, DObj *dobj, f32 arg2)
{
    f32 sx;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Mtx44f n_mtx;
    f32 tx;
    f32 ty;
    f32 tz;

    tx = dobj->translate.vec.f.x;
    ty = dobj->translate.vec.f.y;
    tz = dobj->translate.vec.f.z;

    sp80.x = -1.0F;
    sp80.y = 0.0F;
    sp80.z = 0.0F;
    sp68.x = 0.0F;
    sp68.y = 1.0F;
    sp68.z = 0.0F;

    if (gGroundStruct.sector.arwing_laser_count == 2)
    {
        sp74.x = sp74.y = 0.0F;
        sp74.z = 1;
    }
    else func_ovl2_80106730(dobj, &sp80, &sp74, &sp68);

    n_mtx[0][0] = sp74.x; // sp28
    n_mtx[0][1] = sp74.y; // sp2C
    n_mtx[0][2] = sp74.z; // sp30
    n_mtx[1][0] = sp68.x; // sp38
    n_mtx[1][1] = sp68.y; // sp3C
    n_mtx[1][2] = sp68.z; // sp40
    n_mtx[2][0] = sp80.x; // sp48
    n_mtx[2][1] = sp80.y; // sp4C
    n_mtx[2][2] = sp80.z; // sp50

    n_mtx[0][3] = n_mtx[1][3] = n_mtx[2][3] = 0.0F;             // sp34, sp44, sp54

    n_mtx[3][0] = tx + gGroundStruct.sector.arwing_target_x;    // sp58
    n_mtx[3][1] = ty;                                           // sp5C
    n_mtx[3][2] = tz;                                           // sp60

    n_mtx[3][3] = 1.0F;                                         // sp64

    guMtxF2L(n_mtx, o_mtx);

    return 0;
}

// 0x80106A40
void func_ovl2_80106A40(DObj *dobj, ATrack *atrack, f32 arg2)
{
    if (atrack != NULL)
    {
        omAddDObjAnimAll(dobj, atrack, 0.0F);

        dobj->unk_dobj_0x55 = 0;

        func_8000BFE8(dobj);
        func_8000CCBC(dobj);
    }
    else
    {
        dobj->dobj_f0 = AOBJ_FRAME_NULL;
        dobj->unk_dobj_0x55 = 0;
    }
}

// 0x80106A98
void func_ovl2_80106A98(void)
{
    if (gBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.sector.arwing_status = 1;
    }
}

// 0x80106AC0
void func_ovl2_80106AC0(void)
{
    s32 random;
    s32 modulo;

    if (gGroundStruct.sector.arwing_appear_timer != 0)
    {
        gGroundStruct.sector.arwing_appear_timer--;
    }
    else
    {
        gGroundStruct.sector.arwing_target_x = 0.0F;

        if (gGroundStruct.sector.arwing_type_cycle != 0)
        {
            random = lbRandom_GetIntRange(5);

            if (random == 4)
            {
                gGroundStruct.sector.arwing_target_x = D_ovl2_8012E978[lbRandom_GetIntRange(3)];
            }
            gGroundStruct.sector.arwing_type_cycle--;
            gGroundStruct.sector.arwing_state_timer = lbRandom_GetIntRange(540) + 180;
            gGroundStruct.sector.arwing_pilot_current = -1;
        }
        else
        {
            random = lbRandom_GetIntRange(3) + 5;
            modulo = lbRandom_GetShort() % 2;

            gGroundStruct.sector.unk_sector_0x4C = (modulo != 0) ? random - 5 : -1;

            gGroundStruct.sector.arwing_type_cycle = 3;
            gGroundStruct.sector.arwing_pilot_current = -2;
        }
        gGroundStruct.sector.arwing_flight_pattern = random;
        gGroundStruct.sector.arwing_status = 2;
        gGroundStruct.sector.unk_sector_0x4E = 0x3C;

        gGroundStruct.sector.map_dobj[1]->translate.vec.f.x =
        gGroundStruct.sector.map_dobj[1]->translate.vec.f.y =
        gGroundStruct.sector.map_dobj[1]->translate.vec.f.z = 0.0F;

        gGroundStruct.sector.map_dobj[1]->rotate.vec.f.x =
        gGroundStruct.sector.map_dobj[1]->rotate.vec.f.y =
        gGroundStruct.sector.map_dobj[1]->rotate.vec.f.z = 0.0F;

        gGroundStruct.sector.is_arwing_line_collision = 0;
        gGroundStruct.sector.is_arwing_line_active = TRUE;
        gGroundStruct.sector.is_arwing_z_collision = 0;
        gGroundStruct.sector.arwing_laser_ammo = 0;

        func_800269C0(alSound_SFX_SectorAmbient1);
    }
}

// 0x80106C28
void func_ovl2_80106C28(void)
{
    if (ABSF(gGroundStruct.sector.map_dobj[0]->translate.vec.f.z) < 200.0F)
    {
        gGroundStruct.sector.is_arwing_z_near = TRUE;
    }
    else gGroundStruct.sector.is_arwing_z_near = FALSE;
}

// 0x80106C88
void func_ovl2_80106C88(void)
{
    switch (gGroundStruct.sector.arwing_state_timer)
    {
    case 0:
        gGroundStruct.sector.is_arwing_line_active = FALSE;
        break;

    case 88:
        gGroundStruct.sector.is_arwing_line_active = TRUE;
        break;
    }
}

// 0x80106CC4
void func_ovl2_80106CC4(void)
{
    switch (gGroundStruct.sector.arwing_state_timer)
    {
    case 0:
        gGroundStruct.sector.is_arwing_line_active = FALSE;
        break;

    case 178:
        gGroundStruct.sector.is_arwing_line_active = TRUE;
        break;
    }
}

extern intptr_t D_NF_00002EB4;

// 0x80106D00
void func_ovl2_80106D00(void)
{
    if (gGroundStruct.sector.arwing_state_timer == 0)
    {
        gGroundStruct.sector.map_dobj[7]->dobj_f0 = AOBJ_FRAME_NULL;
        gGroundStruct.sector.map_dobj[7]->flags = DOBJ_RENDERFLAG_NONE;
        gGroundStruct.sector.map_dobj[9]->dobj_f0 = AOBJ_FRAME_NULL;
        gGroundStruct.sector.map_dobj[9]->flags = DOBJ_RENDERFLAG_HIDDEN;

        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[8], (ATrack*) ((uintptr_t)gGroundStruct.sector.map_file + (intptr_t)&D_NF_00002EB4), 0.0F); // Linker thing

    }
    else if (gGroundStruct.sector.map_dobj[8]->dobj_f0 == AOBJ_FRAME_NULL)
    {
        gGroundStruct.sector.map_dobj[7]->flags = DOBJ_RENDERFLAG_HIDDEN;
        gGroundStruct.sector.map_dobj[9]->flags = DOBJ_RENDERFLAG_NONE;
    }
    if (gGroundStruct.sector.map_dobj[1]->dobj_f0 == AOBJ_FRAME_NULL)
    {
        gGroundStruct.sector.map_dobj[0]->dobj_f0 = AOBJ_FRAME_NULL;
    }
}

void func_ovl2_80106DD8(void)
{
    if (gGroundStruct.sector.arwing_pilot_current != -2)
    {
        if (gGroundStruct.sector.arwing_pilot_current >= 0)
        {
            switch (gGroundStruct.sector.arwing_pilot_current)
            {
            case 1:
                func_ovl2_80106C88();
                break;

            case 4:
                func_ovl2_80106CC4();
                break;

            case 5:
                func_ovl2_80106D00();
                break;
            }
            if (gGroundStruct.sector.map_dobj[1]->dobj_f0 == AOBJ_FRAME_NULL)
            {
                gGroundStruct.sector.arwing_pilot_current = -1;
                gGroundStruct.sector.arwing_state_timer = 120;
            }
            else gGroundStruct.sector.arwing_state_timer++;
        }
        else
        {
            gGroundStruct.sector.arwing_state_timer--;

            if (gGroundStruct.sector.arwing_state_timer == 0)
            {
                u8 *bytes = &D_ovl2_8012E9C0[gGroundStruct.sector.arwing_pilot_prev][0];
                s32 index = D_ovl2_8012E988[bytes[0] + lbRandom_GetIntRange(bytes[1])];

                if (index != 0)
                {
                    func_ovl2_80106A40(gGroundStruct.sector.map_dobj[1], (ATrack*) ((intptr_t)D_ovl2_8012E960[index] + (uintptr_t)gGroundStruct.sector.map_head), 0.0F);
                }
                gGroundStruct.sector.arwing_pilot_prev = gGroundStruct.sector.arwing_pilot_current = index;
            }
        }
    }
}

// 0x80106F2C
s32 func_ovl2_80106F2C(void)
{
    if (lbRandom_GetIntRange(3) >= 3)
    {
        return 2;
    }
    else return 4;
}

// 0x80106F5C
s32 func_ovl2_80106F5C(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[GObj_LinkIndex_Fighter];
    f32 pos_x = gGroundStruct.sector.map_dobj[0]->translate.vec.f.x + gGroundStruct.sector.arwing_target_x;
    f32 pos_y = gGroundStruct.sector.map_dobj[1]->translate.vec.f.y + gGroundStruct.sector.map_dobj[0]->translate.vec.f.y;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (gGroundStruct.sector.arwing_laser_count == 2)
        {
            DObj *joint = fp->joint[ftParts_Joint_TopN];

            if (joint->translate.vec.f.x < pos_x)
            {
                if ((joint->translate.vec.f.y < (pos_y + 300.0F)) && (joint->translate.vec.f.y > (pos_y + -500.0F)))
                {
                    return func_ovl2_80106F2C();
                }
            }
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    return 0;
}

// 0x80107030
sb32 wpArwing_Laser2D_ProcMap(GObj *weapon_gobj)
{
    if (wpMap_TestAllCheckCollEnd(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80107074
sb32 wpArwing_Laser2D_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate.vec.f, wp->weapon_hit.damage);

    return TRUE;
}

// 0x801070A4
void func_ovl2_801070A4(Vec3f *rotate, Vec3f *direction, Vec3f *vec3, Vec3f *vec4)
{
    if ((vec3->z == -1.0F) || (vec3->z == 1.0F))
    {
        if (vec3->z == -1.0F)
        {
            rotate->y = F_DEG_TO_RAD(180.0F);
            rotate->x = atan2f(vec4->x, vec4->y);
        }
        else
        {
            rotate->y = F_DEG_TO_RAD(-180.0F);
            rotate->x = atan2f(-vec4->x, vec4->y);
        }
        rotate->z = 0.0F;
    }
    else
    {
        rotate->y = asinf(-vec3->z);
        rotate->x = atan2f(vec4->z, direction->z);
        rotate->z = atan2f(vec3->y, vec3->x);
    }
}

// 0x8010719C
void func_ovl2_8010719C(Vec3f *vel, Vec3f *rotate)
{
    Vec3f sp2C;
    Vec3f sp20;
    f32 unused;
    f32 rot_z;

    sp20.x = 0.0F;

    rot_z = gGroundStruct.sector.map_dobj[1]->rotate.vec.f.z + F_DEG_TO_RAD(180.0F);

    sp20.y = __sinf(rot_z);
    sp20.z = cosf(rot_z);

    func_ovl0_800CD5AC(&sp20, vel, &sp2C);
    func_ovl0_800CD5AC(vel, &sp2C, &sp20);
    lbVector_Vec3fNormalize(&sp2C);
    lbVector_Vec3fNormalize(&sp20);
    func_ovl2_801070A4(rotate, vel, &sp2C, &sp20);
}

// 0x80107238
sb32 wpArwing_Laser2D_ProcHop(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    Vec3f vel;

    func_80019438(&wp->phys_info.vel_air, &wp->shield_collide_vec, wp->shield_collide_angle * 2);

    vel = wp->phys_info.vel_air;

    lbVector_Vec3fNormalize(&vel);
    func_ovl2_8010719C(&vel, &DObjGetStruct(weapon_gobj)->rotate);

    return FALSE;
}

// 0x801072C0
sb32 wpArwing_Laser2D_ProcReflector(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);
    ftStruct *fp = ftGetStruct(wp->owner_gobj);
    Vec3f vel;

    wpMain_ReflectorSetLR(wp, fp);

    vel = wp->phys_info.vel_air;

    lbVector_Vec3fNormalize(&vel);
    func_ovl2_8010719C(&vel, &DObjGetStruct(weapon_gobj)->rotate);

    return FALSE;
}

wpCreateDesc wpArwing_Laser2D_WeaponDesc;

// 0x80107330
void wpArwing_Laser2D_MakeWeapon(void)
{
    GObj *weapon_gobj;
    wpStruct *wp;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f pos;
    Vec3f rotate;
    Vec3f vel;
    f32 zero = 0.0F;

    sp54.x = gGroundStruct.sector.map_dobj[0]->translate.vec.f.x + gGroundStruct.sector.arwing_target_x;
    sp54.y = gGroundStruct.sector.map_dobj[1]->translate.vec.f.y + gGroundStruct.sector.map_dobj[0]->translate.vec.f.y;

    sp48 = gGroundStruct.sector.map_dobj[2]->translate.vec.f;

    lbVector_Vec3fGetEulerRotation(&sp48, 4, gGroundStruct.sector.map_dobj[1]->rotate.vec.f.z);

    pos.x = (sp54.x - sp48.z) - 566.0F;
    pos.y = sp54.y + sp48.y;
    pos.z = zero + sp48.x;

    weapon_gobj = wpManager_MakeWeapon(NULL, &wpArwing_Laser2D_WeaponDesc, &pos, WEAPON_MASK_SPAWN_GROUND);

    if (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);

        wp->phys_info.vel_air.x = -230.0F;

        vel.y = vel.z = 0.0F;
        vel.x = -1.0F;

        func_ovl2_8010719C(&vel, &rotate);

        DObjGetStruct(weapon_gobj)->rotate.vec.f = rotate;

        sp48 = gGroundStruct.sector.map_dobj[3]->translate.vec.f;

        lbVector_Vec3fGetEulerRotation(&sp48, 4, gGroundStruct.sector.map_dobj[1]->rotate.vec.f.z);

        pos.x = (sp54.x - sp48.z) - 566.0F;
        pos.y = sp54.y + sp48.y;
        pos.z = zero + sp48.x;

        weapon_gobj = wpManager_MakeWeapon(NULL, &wpArwing_Laser2D_WeaponDesc, &pos, WEAPON_MASK_SPAWN_GROUND);

        if (weapon_gobj != NULL)
        {
            wp = wpGetStruct(weapon_gobj);

            wp->phys_info.vel_air.x = -230.0F;

            DObjGetStruct(weapon_gobj)->rotate.vec.f = rotate;
        }
    }
}

// 0x80107518
sb32 wpArwing_LaserExplode_ProcUpdate(GObj *weapon_gobj)
{
    if (wpMain_DecLifeCheckExpire(wpGetStruct(weapon_gobj)) != FALSE)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x80107544
void wpArwing_LaserExplode_InitWeaponVars(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    wp->lifetime = 16;

    wp->weapon_hit.can_reflect = FALSE;
    wp->weapon_hit.can_absorb = TRUE;
    wp->weapon_hit.can_shield = FALSE;

    wp->phys_info.vel_air.x = wp->phys_info.vel_air.y = wp->phys_info.vel_air.z = 0.0F;

    wp->weapon_hit.size = 200.0F;

    DObjGetStruct(weapon_gobj)->display_list = NULL;

    wpMain_ClearHitRecord(wp);

    wp->proc_update = wpArwing_LaserExplode_ProcUpdate;

    wp->proc_map        =
    wp->proc_hit        =
    wp->proc_shield     =
    wp->proc_hop        =
    wp->proc_setoff     =
    wp->proc_hop        =
    wp->proc_reflector  =  NULL;
}

// 0x801075E0
sb32 wpArwing_Laser3D_ProcMap(GObj *weapon_gobj)
{
    DObj *dobj = DObjGetStruct(weapon_gobj);

    if (ABSF(dobj->translate.vec.f.z) < 1000.0F)
    {
        if (wpMap_TestAllCheckCollEnd(weapon_gobj) != FALSE)
        {
            func_800269C0(alSound_SFX_ExplodeS);
            efParticle_SparkleWhiteMultiExplode_MakeEffect(&dobj->translate.vec.f);
            wpArwing_LaserExplode_InitWeaponVars(weapon_gobj);
        }
    }
    return FALSE;
}

// 0x80107670
sb32 wpArwing_Laser3D_ProcHit(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);
    wpArwing_LaserExplode_InitWeaponVars(weapon_gobj);

    return FALSE;
}

// 0x801076B0
sb32 wpArwing_Laser3D_ProcAbsorb(GObj *weapon_gobj)
{
    func_800269C0(alSound_SFX_ExplodeS);
    efParticle_SparkleWhiteMultiExplode_MakeEffect(&DObjGetStruct(weapon_gobj)->translate.vec.f);

    return TRUE;
}

// 0x801076E8
void wpArwing_Laser3D_MakeWeapon(void)
{
    GObj *weapon_gobj;
    GObj *fighter_gobj;
    s32 random;
    s32 player;
    ftStruct *fp;
    wpStruct *wp;
    Vec3f wp_pos;
    Vec3f ft_pos;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f wp_angle;
    Mtx44f mtx;
    DObj *dobj;

    dobj = gGroundStruct.sector.map_dobj[0];

    func_ovl2_80106730(dobj, &sp94, &sp88, &sp7C);

    mtx[0][0] = sp88.x; // sp30
    mtx[0][1] = sp88.y; // sp34
    mtx[0][2] = sp88.z; // sp38

    mtx[1][0] = sp7C.x; // sp40
    mtx[1][1] = sp7C.y; // sp44
    mtx[1][2] = sp7C.z; // sp48

    mtx[2][0] = sp94.x; // sp50
    mtx[2][1] = sp94.y; // sp54
    mtx[2][2] = sp94.z; // sp58

    mtx[0][3] = mtx[1][3] = mtx[2][3] = 0.0F;// sp3C, sp4C, sp5C

    mtx[3][0] = dobj->translate.vec.f.x + gGroundStruct.sector.arwing_target_x; // sp60
    mtx[3][1] = dobj->translate.vec.f.y; // sp64
    mtx[3][2] = dobj->translate.vec.f.z;

    mtx[3][3] = 1.0F;

    wp_pos.y = 0.0F;
    wp_pos.x = 0;

    wp_pos.z = 666.0F;

    gcGetVectorWorldPosition(&mtx, &wp_pos);

    random = lbRandom_GetIntRange(gBattleState->pl_count + gBattleState->cp_count);

    fighter_gobj = gOMObjCommonLinks[GObj_LinkIndex_Fighter];

    for (player = 0; player < random; player++)
    {
        fighter_gobj = fighter_gobj->link_next;
    }
    fp = ftGetStruct(fighter_gobj);

    if ((fp->coll_data.ground_line_id == -1) || (fp->coll_data.ground_line_id == -2))
    {
        ft_pos.x = ft_pos.y = ft_pos.z = 0;
    }
    else
    {
        ft_pos = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

        ft_pos.y += fp->coll_data.ground_dist;
    }
    wp_angle.x = ft_pos.x - wp_pos.x;
    wp_angle.y = ft_pos.y - wp_pos.y;
    wp_angle.z = ft_pos.z - wp_pos.z;

    lbVector_Vec3fNormalize(&wp_angle);

    weapon_gobj = wpManager_MakeWeapon(NULL, &wpArwing_Laser3D_WeaponDesc, &wp_pos, WEAPON_MASK_SPAWN_GROUND);

    if (weapon_gobj != NULL)
    {
        wp = wpGetStruct(weapon_gobj);

        wp->phys_info.vel_air.x = wp_angle.x * 230.0F;
        wp->phys_info.vel_air.y = wp_angle.y * 230.0F;
        wp->phys_info.vel_air.z = wp_angle.z * 230.0F;

        func_ovl2_8010719C(&wp_angle, &DObjGetStruct(weapon_gobj)->rotate);
    }
}

// 0x80107910
void func_ovl2_80107910(void)
{
    if (gGroundStruct.sector.arwing_laser_count == 2)
    {
        wpArwing_Laser2D_MakeWeapon();
    }
    else wpArwing_Laser3D_MakeWeapon();

    func_800269C0(alSound_SFX_SectorArwingLaser);
}

extern intptr_t D_NF_00001B34;
extern intptr_t D_NF_00001B84;

// 0x80107958
void func_ovl2_80107958(void)
{
    // Many linker things here
    s32 ammo;
    void *mh1, *mh2;

    if (gGroundStruct.sector.arwing_laser_ammo == 0)
    {
        ammo = 0;

        if (gGroundStruct.sector.arwing_pilot_current == -2)
        {
            if 
            (
                ((gGroundStruct.sector.unk_sector_0x4C == 0) && (gGroundStruct.sector.arwing_appear_timer == 5)) || 
                ((gGroundStruct.sector.unk_sector_0x4C == 1) && (gGroundStruct.sector.arwing_appear_timer == 5))
            )
            {
                ammo = func_ovl2_80106F2C();
            }
        }
        else if (gGroundStruct.sector.is_arwing_z_near == 0)
        {
            gGroundStruct.sector.unk_sector_0x4E = 60;
            gGroundStruct.sector.arwing_laser_ammo = 0;
        }
        else
        {
            gGroundStruct.sector.unk_sector_0x4E--;

            if (gGroundStruct.sector.unk_sector_0x4E == 0)
            {
                ammo = func_ovl2_80106F5C();

                gGroundStruct.sector.unk_sector_0x4E = 60;
            }
        }
        if (ammo != 0)
        {
            gGroundStruct.sector.arwing_laser_ammo = ammo;
            gGroundStruct.sector.arwing_laser_timer = 0;
            gGroundStruct.sector.unk_sector_0x52 = 0;
        }
    }
    else
    {
        if (gGroundStruct.sector.arwing_laser_timer == 0)
        {
            if (gGroundStruct.sector.unk_sector_0x52 == 0)
            {
                mh1 = gGroundStruct.sector.map_head;

                func_ovl2_80106A40(gGroundStruct.sector.map_dobj[4], (ATrack*)((uintptr_t)mh1 + (intptr_t)&D_NF_00001B84), 0.0F);
                func_ovl2_80106A40(gGroundStruct.sector.map_dobj[5], (ATrack*)((uintptr_t)mh1 + (intptr_t)&D_NF_00001B84), 0.0F);

                gGroundStruct.sector.unk_sector_0x52++;
            }
            else if (gGroundStruct.sector.map_dobj[4]->dobj_f0 == AOBJ_FRAME_NULL)
            {
                mh2 = gGroundStruct.sector.map_head;

                func_ovl2_80107910();

                func_ovl2_80106A40(gGroundStruct.sector.map_dobj[2], (ATrack*)((uintptr_t)mh2 + (intptr_t)&D_NF_00001B34), 0.0F);
                func_ovl2_80106A40(gGroundStruct.sector.map_dobj[3], (ATrack*)((uintptr_t)mh2 + (intptr_t)&D_NF_00001B34), 0.0F);

                gGroundStruct.sector.arwing_laser_timer = 30;
                gGroundStruct.sector.arwing_laser_ammo--;
            }
        }
        if (gGroundStruct.sector.arwing_laser_timer)
        {
            gGroundStruct.sector.arwing_laser_timer--;
        }
        if (gGroundStruct.sector.arwing_laser_ammo == 0)
        {
            gGroundStruct.sector.unk_sector_0x4E = 240;
        }
    }
}

extern intptr_t D_NF_00002EB4;

// 0x80107B30
void func_ovl2_80107B30(void)
{
    if ((gGroundStruct.sector.map_dobj[8]->dobj_f0 == AOBJ_FRAME_NULL) && (gGroundStruct.sector.map_dobj[7]->flags == 0))
    {
        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[8], (ATrack*)((uintptr_t)gGroundStruct.sector.map_file + (intptr_t)&D_NF_00002EB4), 0.0F); // Linker thing

        func_800269C0(alSound_SFX_SectorAmbient2);
    }
}

// 0x80107BA0
void grCommon_Sector_UpdateArwingCollisions(void)
{
    Vec3f pos;

    if (gGroundStruct.sector.arwing_pilot_current != -2)
    {
        if ((gGroundStruct.sector.is_arwing_line_active) && (gGroundStruct.sector.is_arwing_z_near))
        {
            pos.x = gGroundStruct.sector.map_dobj[0]->translate.vec.f.x + gGroundStruct.sector.arwing_target_x;
            pos.y = gGroundStruct.sector.map_dobj[1]->translate.vec.f.y + gGroundStruct.sector.map_dobj[0]->translate.vec.f.y;
            pos.z = 0.0F;

            if ((gGroundStruct.sector.is_arwing_z_collision == 0) || (gGroundStruct.sector.is_arwing_line_collision == 0))
            {
                mpCollision_SetYakumonoOnID(1);
                mpCollision_SetYakumonoPosID(1, &pos);
            }
            mpCollision_SetYakumonoPosID(1, &pos);
        }
        if (((!gGroundStruct.sector.is_arwing_line_active) || (!gGroundStruct.sector.is_arwing_z_near)) && (gGroundStruct.sector.is_arwing_z_collision != 0) && (gGroundStruct.sector.is_arwing_line_collision != 0))
        {
            mpCollision_SetYakumonoOffID(1);
        }
        gGroundStruct.sector.is_arwing_line_collision = gGroundStruct.sector.is_arwing_line_active;
        gGroundStruct.sector.is_arwing_z_collision = gGroundStruct.sector.is_arwing_z_near;
    }
}

// 0x80107CA0
void func_ovl2_80107CA0(void)
{
    func_ovl2_80106C28();
    func_ovl2_80106DD8();
    func_ovl2_80107958();
    func_ovl2_80107B30();
    grCommon_Sector_UpdateArwingCollisions();

    if (gGroundStruct.sector.map_dobj[0]->dobj_f0 == AOBJ_FRAME_NULL)
    {
        gGroundStruct.sector.map_gobj->flags = 1;

        gGroundStruct.sector.arwing_appear_timer = lbRandom_GetIntRange(1140) + 960;
        gGroundStruct.sector.arwing_status = 1;

        mpCollision_SetYakumonoOffID(1);
    }
    else gGroundStruct.sector.arwing_appear_timer++;
}

// 0x80107D50
void func_ovl2_80107D50(void)
{
    GObj *map_gobj;
    grSectorDesc *desc;

    if (gGroundStruct.sector.arwing_flight_pattern != -1)
    {
        map_gobj = gGroundStruct.sector.map_gobj;
        gGroundStruct.sector.arwing_laser_count = D_ovl2_8012E980[gGroundStruct.sector.arwing_flight_pattern];

        desc = (grSectorDesc*) ((intptr_t)D_ovl2_8012E940[gGroundStruct.sector.arwing_flight_pattern] + (uintptr_t)gGroundStruct.sector.map_head);

        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[0], desc->atrack_0x0, 0.0F);
        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[7], desc->atrack_0x1C, 0.0F);
        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[9], desc->atrack_0x24, 0.0F);
        func_ovl2_80106A40(gGroundStruct.sector.map_dobj[11], desc->atrack_0x2C, 0.0F);

        gGroundStruct.sector.arwing_flight_pattern = -1;
        map_gobj->flags = 0;
    }
}

// 0x80107E08
void func_ovl2_80107E08(GObj *ground_gobj)
{
    switch (gGroundStruct.sector.arwing_status)
    {
    case 0:
        func_ovl2_80106A98();
        break;

    case 1:
        func_ovl2_80106AC0();
        break;

    case 2:
        func_ovl2_80107CA0();
        break;
    }
    func_ovl2_80107D50();
}

extern intptr_t D_NF_00000000;
extern intptr_t D_NF_00000014;
extern intptr_t D_NF_000000A1;
extern intptr_t D_NF_00002C30;
extern intptr_t D_NF_00002E74;

// 0x80107E7C
void grCommon_Sector_InitGroundVars(void)
{
    // Many linker things here
    GObj *map_gobj;
    void *map_file;

    gGroundStruct.sector.map_head = (void*) ((uintptr_t)gGroundInfo->map_nodes - (intptr_t)&D_NF_00000000);

    map_file = rldm_get_file_force((intptr_t)&D_NF_000000A1);

    gGroundStruct.sector.map_file = map_file;

    map_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000);

    gGroundStruct.sector.map_gobj = map_gobj;

    omAddGObjRenderProc(map_gobj, func_80014768, 6, 0x80000000, -1);
    func_ovl2_80105760(map_gobj, (DObjDesc*) ((uintptr_t)map_file + (intptr_t)&D_NF_00002C30), gGroundStruct.sector.map_dobj, D_ovl2_8012E9CC);
    omAddGObjCommonProc(map_gobj, func_8000DF34, 1, 5);

    gGroundStruct.sector.arwing_status = 0;
    gGroundStruct.sector.arwing_flight_pattern = -1;
    gGroundStruct.sector.arwing_appear_timer = 600;
    gGroundStruct.sector.arwing_type_cycle = 3;
    gGroundStruct.sector.arwing_pilot_current = -1;
    gGroundStruct.sector.arwing_pilot_prev = 0;
    gGroundStruct.sector.arwing_target_x = 0.0F;

    map_gobj->flags = 1;

    omAddDObjAnimAll(gGroundStruct.sector.map_dobj[10], (ATrack*) ((uintptr_t)map_file + (intptr_t)&D_NF_00002E74), 0.0F);
    func_8000DF34(map_gobj);
    mpCollision_SetYakumonoOffID(1);
    gGroundStruct.sector.weapon_head = (void*) ((uintptr_t)gGroundInfo - (intptr_t)&D_NF_00000014);
}

// 0x80107FCC
GObj* grCommon_Sector_MakeGround(void)
{
    GObj *map_gobj = omMakeGObjCommon(GObj_Kind_Ground, NULL, 1, 0x80000000);

    grCommon_Sector_InitGroundVars();
    omAddGObjCommonProc(map_gobj, func_ovl2_80107E08, 1, 4);

    return map_gobj;
}
