#include <gr/ground.h>

#include <ft/fighter.h>
#include <wp/weapon.h>

#include <gm/gmmatch.h>
#include <gm/gmsound.h>

// 0x80106730
void func_ovl2_80106730(DObj *arg0, Vec3f *vec1, Vec3f *vec2, Vec3f *vec3)
{
    DObj *sp54 = gGroundStruct.sector.unk_sector_dobj;
    AObj *aobj = arg0->aobj;
    f32 vlen;

    while (aobj != NULL)
    {
        if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->obj_renderflags & 2) && (aobj->unk_aobj_0x4 == 4))
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
    if ((sp54->dobj_f0 != (f32)FLOAT_NEG_MAX) && (gGroundStruct.sector.arwing_laser_count == 0))
    {
        aobj = sp54->aobj;

        while (aobj != NULL)
        {
            if ((aobj->unk_aobj_0x5 != 0) && !(arg0->parent_gobj->obj_renderflags & 2) && (aobj->unk_aobj_0x4 == 4))
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
bool32 func_ovl2_80106904(Mtx *o_mtx, DObj *dobj, void *arg2)
{
    f32 sx;
    Vec3f sp80;
    Vec3f sp74;
    Vec3f sp68;
    Mtx44f n_mtx;
    f32 tx;
    f32 ty;
    f32 tz;

    tx = dobj->translate.x;
    ty = dobj->translate.y;
    tz = dobj->translate.z;

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
void func_ovl2_80106A40(DObj *dobj, void *atrack, void *arg2)
{
    if (atrack != NULL)
    {
        func_8000BD1C(dobj, atrack, 0.0F);

        dobj->unk_dobj_0x55 = 0;

        func_8000BFE8(dobj);
        func_8000CCBC(dobj);
    }
    else
    {
        dobj->dobj_f0 = (f32)FLOAT_NEG_MAX;
        dobj->unk_dobj_0x55 = 0;
    }
}

// 0x80106A98
void func_ovl2_80106A98(void)
{
    if (gpBattleState->game_status != gmMatch_GameStatus_Wait)
    {
        gGroundStruct.sector.unk_sector_0x48 = 1;
    }
}

intptr_t D_ovl2_8012E960[6] =
{
    0x0000,
    0x1D34,
    0x1DA4,
    0x1DC4,
    0x1D54,
    0x1DE4
};

s16 D_ovl2_8012E978[3] =
{
    0xF448, 
    0x0000,
    0x2328
}; // Arwing collision vertex / spawn positions? There should be another 0x0000, but the next array is u8, does it still get padded?

u8 D_ovl2_8012E988[] =
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

u16 D_ovl2_8012E9C0[24][2] =
{
    { 0x00, 0x07 },
    { 0x07, 0x09 },
    { 0x10, 0x0A },
    { 0x1A, 0x0A },
    { 0x24, 0x09 },
    { 0x2D, 0x0A },
    { 0x53, 0x00 },
    { 0x00, 0x1B },
    { 0x00, 0x00 },
    { 0x12, 0x2C },
    { 0x01, 0x12 },
    { 0x2C, 0x01 },
    { 0x12, 0x2C },
    { 0x00, 0x12 },
    { 0x2C, 0x00 },
    { 0x12, 0x00 },
    { 0x01, 0x12 },
    { 0x00, 0x00 },
    { 0x12, 0x2C },
    { 0x00, 0x12 },
    { 0x00, 0x00 },
    { 0x12, 0x2C },
    { 0x01, 0x00 },
    { 0x00, 0x00 } // This might just be padding
};

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
        gGroundStruct.sector.unk_sector_0x49 = random;
        gGroundStruct.sector.arwing_status = 2;
        gGroundStruct.sector.unk_sector_0x4E = 0x3C;

        gGroundStruct.sector.unk_sector_0xC->translate.x =
        gGroundStruct.sector.unk_sector_0xC->translate.y =
        gGroundStruct.sector.unk_sector_0xC->translate.z = 0.0F;

        gGroundStruct.sector.unk_sector_0xC->rotate.x =
        gGroundStruct.sector.unk_sector_0xC->rotate.y =
        gGroundStruct.sector.unk_sector_0xC->rotate.z = 0.0F;

        gGroundStruct.sector.unk_sector_0x59 = 0;
        gGroundStruct.sector.is_arwing_line_active = TRUE;
        gGroundStruct.sector.unk_sector_0x57 = 0;
        gGroundStruct.sector.arwing_laser_ammo = 0;

        func_800269C0(gmSound_SFX_SectorAmbient1);
    }
}

// 0x80106C28
void func_ovl2_80106C28(void)
{
    if (ABSF(gGroundStruct.sector.unk_sector_0x8->translate.z) < 200.0F)
    {
        gGroundStruct.sector.unk_sector_0x56 = TRUE;
    }
    else gGroundStruct.sector.unk_sector_0x56 = FALSE;
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
        gGroundStruct.sector.unk_sector_0x24->dobj_f0 = (f32)FLOAT_NEG_MAX;
        gGroundStruct.sector.unk_sector_0x24->unk_0x54 = 0;
        gGroundStruct.sector.unk_sector_0x2C->dobj_f0 = (f32)FLOAT_NEG_MAX;
        gGroundStruct.sector.unk_sector_0x2C->unk_0x54 = 2;

        func_ovl2_80106A40(gGroundStruct.sector.unk_sector_0x28, ((uintptr_t)gGroundStruct.sector.unk_sector_0x3C + (intptr_t)&D_NF_00002EB4), 0.0F); // Linker thing

    }
    else if (gGroundStruct.sector.unk_sector_0x28->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        gGroundStruct.sector.unk_sector_0x24->unk_0x54 = 2;
        gGroundStruct.sector.unk_sector_0x2C->unk_0x54 = 0;
    }
    if (gGroundStruct.sector.unk_sector_0xC->dobj_f0 == (f32)FLOAT_NEG_MAX)
    {
        gGroundStruct.sector.unk_sector_0x8->dobj_f0 = (f32)FLOAT_NEG_MAX;
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
            if (gGroundStruct.sector.unk_sector_0xC->dobj_f0 == (f32)FLOAT_NEG_MAX)
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
                    func_ovl2_80106A40(gGroundStruct.sector.unk_sector_0xC, (ATrack*) ((intptr_t)D_ovl2_8012E960[index] + (uintptr_t)gGroundStruct.sector.map_head), 0.0F);
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
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];
    f32 pos_x = gGroundStruct.sector.unk_sector_0x8->translate.x + gGroundStruct.sector.arwing_target_x;
    f32 pos_y = gGroundStruct.sector.unk_sector_0xC->translate.y + gGroundStruct.sector.unk_sector_0x8->translate.y;

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        if (gGroundStruct.sector.arwing_laser_count == 2)
        {
            DObj *joint = fp->joint[ftParts_Joint_TopN];

            if (joint->translate.x < pos_x)
            {
                if ((joint->translate.y < (pos_y + 300.0F)) && (joint->translate.y > (pos_y + -500.0F)))
                {
                    return func_ovl2_80106F2C();
                }
            }
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    return 0;
}

// 0x80107030
bool32 wpArwing_Laser_ProcMap(GObj *weapon_gobj)
{
    if (func_ovl3_80167C04(weapon_gobj) != FALSE)
    {
        efParticle_DustExpandSmall_MakeEffect(&DObjGetStruct(weapon_gobj)->translate, 1.0F);

        return TRUE;
    }
    else return FALSE;
}

// 0x80107074
bool32 wpArwing_Laser_ProcHit(GObj *weapon_gobj)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    func_ovl2_800FE068(&DObjGetStruct(weapon_gobj)->translate, wp->weapon_hit.damage);

    return TRUE;
}

// 0x801070A4
void func_ovl2_801070A4(Vec3f *vec1, Vec3f *vec2, Vec3f *vec3, Vec3f *vec4)
{
    if ((vec3->z == -1.0F) || (vec3->z == 1.0F))
    {
        if (vec3->z == -1.0F)
        {
            vec1->y = F_DEG_TO_RAD(180.0F);
            vec1->x = atan2f(vec4->x, vec4->y);
        }
        else
        {
            vec1->y = F_DEG_TO_RAD(-180.0F);
            vec1->x = atan2f(-vec4->x, vec4->y);
        }
        vec1->z = 0.0F;
    }
    else
    {
        vec1->y = asinf(-vec3->z);
        vec1->x = atan2f(vec4->z, vec2->z);
        vec1->z = atan2f(vec3->y, vec3->x);
    }
}

// 0x8010719C
void func_ovl2_8010719C(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp2C;
    Vec3f sp20;
    f32 unused;
    f32 rotate;

    sp20.x = 0.0F;

    rotate = gGroundStruct.sector.unk_sector_0xC->rotate.z + F_DEG_TO_RAD(180.0F);

    sp20.y = __sinf(rotate);
    sp20.z = cosf(rotate);

    func_ovl0_800CD5AC(&sp20, arg0, &sp2C);
    func_ovl0_800CD5AC(arg0, &sp2C, &sp20);
    lbVector_Vec3fNormalize(&sp2C);
    lbVector_Vec3fNormalize(&sp20);
    func_ovl2_801070A4(arg1, arg0, &sp2C, &sp20);
}
