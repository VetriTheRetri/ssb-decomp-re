#include <ft/fighter.h>
#include <gm/gmmatch.h>

#include <sys/obj_renderer.h>
#include <sys/obj.h>

#include <PR/gbi.h>
#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

f32 func_ovl3_8013AE10(Vec3f *a, Vec3f *b, f32 f)
{
    if (b->x == a->x)
    {
        return a->y;
    }
    else return (((f - a->x) * (b->y - a->y)) / (b->x - a->x)) + a->y;
}

extern Gfx *gpDisplayListHead[4];
extern intptr_t D_NF_00003A68;
extern GfxColorAlpha gDefaultShadowColor;
extern GfxColorAlpha gTeamShadowColors[3];
extern void *D_ovl2_801313B4;
extern Gfx D_ovl3_80188410;
extern Gfx D_ovl3_80188458;
extern s32 gGtlTaskId;

typedef struct Shadow_Struct
{
    Vtx shadow_vertex1[8];
    Vtx shadow_vertex2[8];
    s32 player;
    s32 unk_0x104;

} Shadow_Struct;

void func_ovl3_8013AE60(GObj *shadow_gobj)
{
    Shadow_Struct *sp;
    ftStruct *fp;
    f32 sp13C;
    Vtx *shadow_vertex;
    f32 sp134;
    Vtx *sv;
    GObj *fighter_gobj;
    s32 i;
    s32 ground_line_id;
    Vec3f sp118;
    Vec3f sp10C;
    f32 sp108;
    f32 sp104;
    s32 unused;
    f32 var_f20;
    f32 spF8;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    s32 spD8;
    s32 spD4;
    f32 var_f22;
    s32 spCC;

    if (shadow_gobj->room_gobj_prev == NULL)
    {
        gSPDisplayList(gpDisplayListHead[0]++, &D_ovl3_80188410);

        // Linker thing here
        gDPLoadTextureBlock_4b(gpDisplayListHead[0]++, ((uintptr_t)D_ovl2_801313B4 + (intptr_t)&D_NF_00003A68), G_IM_FMT_I, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD);
    }
    sp = (Shadow_Struct*)shadow_gobj->user_data;

    fighter_gobj = gpBattleState->player_block[sp->player].fighter_gobj;

    fp = ftGetStruct(fighter_gobj);

    if (!(fp->is_invisible) && !(fp->x18E_flag_b0))
    {
        Vec3f spA0;
        Vec3f sp94;
        f32 sp90;

        if (fp->ground_or_air == GA_Ground)
        {
            ground_line_id = fp->coll_data.ground_line_id;

            sp90 = 0;
        }
        else if (func_ovl2_800F9348(&DObjGetStruct(fighter_gobj)->translate, &ground_line_id, &sp90, 0, 0) == FALSE)
        {
            ground_line_id = -1;
        }
        if ((ground_line_id != -1) && (fp->coll_data.ground_line_id != -2))
        {
            sp94.x = DObjGetStruct(fighter_gobj)->translate.x;
            sp94.y = DObjGetStruct(fighter_gobj)->translate.y - 0x10000U;

            if ((((func_ovl2_800F7F00(&DObjGetStruct(fighter_gobj)->translate, &sp94, &spA0, 0, 0, 0) == FALSE)) ||
                !((DObjGetStruct(fighter_gobj)->translate.y - spA0.y) < -sp90)) &&
                ((func_ovl2_800F6B58(&DObjGetStruct(fighter_gobj)->translate, &sp94, &spA0, 0, 0, 0) == FALSE) ||
                    !((DObjGetStruct(fighter_gobj)->translate.y - spA0.y) < -sp90)))
            {
                sp13C = DObjGetStruct(fighter_gobj)->translate.x;
                sp134 = fp->attributes->shadow_size;
                sp108 = 0.0F, sp104 = 1984.0F;

                mpCollision_GetLREdgeLeft(ground_line_id, &sp118);
                mpCollision_GetLREdgeRight(ground_line_id, &sp10C);

                var_f20 = sp13C - sp134;
                var_f22 = sp13C + sp134;

                if (var_f20 < sp118.x)
                {
                    var_f20 = sp118.x;

                    sp108 = (((var_f20 - sp13C) + sp134) * 992.0F) / sp134;

                    if (sp108 < 0.0F)
                    {
                        sp108 = 0.0F;
                    }
                    if (sp108 > 2048.0F)
                    {
                        sp108 = 2048.0F;
                    }
                }
                if (sp10C.x < var_f22)
                {
                    var_f22 = sp10C.x;

                    sp104 = (((var_f22 - sp13C) * 992.0F) / sp134) + 992.0F;

                    if (sp104 < 0.0F)
                    {
                        sp104 = 0.0F;
                    }
                    if (sp104 > 2048.0F)
                    {
                        sp104 = 2048.0F;
                    }
                }
                spD8 = 4;
                spD4 = func_ovl2_800FA518(ground_line_id);

                if (spD4 >= 3)
                {
                    func_ovl2_800FA5E8(ground_line_id, 0, &sp118);
                    func_ovl2_800FA5E8(ground_line_id, 1, &sp10C);

                    if (sp118.x < sp10C.x)
                    {
                        spCC = 0;

                        for (i = 1; i < spD4; i++)
                        {
                            func_ovl2_800FA5E8(ground_line_id, i, &sp10C);

                            if ((sp118.x <= var_f20) && (var_f20 <= sp10C.x))
                            {
                                spF8 = func_ovl3_8013AE10(&sp118, &sp10C, var_f20);

                                if ((sp118.x <= var_f22) && (var_f22 <= sp10C.x))
                                {
                                    spF4 = func_ovl3_8013AE10(&sp118, &sp10C, var_f22);
                                }
                                else
                                {
                                    spD8 = 6;
                                    sp118 = sp10C;

                                    func_ovl2_800FA5E8(ground_line_id, i + 1, &sp10C);

                                    spE8 = sp118.x;
                                    spE4 = sp118.y;
                                    spF0 = (((sp104 - sp108) * (sp118.x - var_f20)) / (var_f22 - var_f20)) + sp108;

                                    if (var_f22 <= sp10C.x)
                                    {
                                        spF4 = func_ovl3_8013AE10(&sp118, &sp10C, var_f22);
                                    }
                                    else
                                    {
                                        spD8 = 8;
                                        sp118 = sp10C;

                                        func_ovl2_800FA5E8(ground_line_id, i + 2, &sp10C);
                                        spF4 = func_ovl3_8013AE10(&sp118, &sp10C, var_f22);
                                        spE0 = sp118.x;
                                        spDC = sp118.y;
                                        spEC = (((sp104 - sp108) * (sp118.x - var_f20)) / (var_f22 - var_f20)) + sp108;
                                    }
                                }
                                break;
                            }
                            else sp118 = sp10C;
                        }
                    }
                    else
                    {
                        spCC = 1;
                        sp10C = sp118;

                        for (i = 1; i < spD4; i++)
                        {

                            func_ovl2_800FA5E8(ground_line_id, i, &sp118);

                            if ((sp118.x <= var_f22) && (var_f22 <= sp10C.x))
                            {
                                spF4 = func_ovl3_8013AE10(&sp118, &sp10C, var_f22);

                                if ((sp118.x <= var_f20) && (var_f20 <= sp10C.x))
                                {
                                    spF8 = func_ovl3_8013AE10(&sp118, &sp10C, var_f20);
                                }
                                else
                                {
                                    spD8 = 6;
                                    sp10C = sp118;

                                    func_ovl2_800FA5E8(ground_line_id, i + 1, &sp118);

                                    spE8 = sp10C.x;
                                    spE4 = sp10C.y;
                                    spF0 = (((sp104 - sp108) * (sp10C.x - var_f20)) / (var_f22 - var_f20)) + sp108;

                                    if (sp118.x <= var_f20)
                                    {
                                        spF8 = func_ovl3_8013AE10(&sp118, &sp10C, var_f20);
                                    }
                                    else
                                    {
                                        spD8 = 8;
                                        sp10C = sp118;

                                        func_ovl2_800FA5E8(ground_line_id, i + 2, &sp118);

                                        spF8 = func_ovl3_8013AE10(&sp118, &sp10C, var_f20);
                                        spE0 = sp10C.x;
                                        spDC = sp10C.y;

                                        spEC = (((sp104 - sp108) * (sp10C.x - var_f20)) / (var_f22 - var_f20)) + sp108;
                                    }
                                }
                                break;
                            }
                            else sp10C = sp118;
                        }
                    }
                }
                else
                {
                    spF8 = func_ovl3_8013AE10(&sp118, &sp10C, var_f20);
                    spF4 = func_ovl3_8013AE10(&sp118, &sp10C, var_f22);
                }

                if (spD8 != 0)
                {
                    if (gGtlTaskId != 0) shadow_vertex = &sp->shadow_vertex2[0];
                    else shadow_vertex = &sp->shadow_vertex1[0];

                    gDPPipeSync(gpDisplayListHead[0]++);

                    if ((gpBattleState->is_team_battle == TRUE) && !(gpBattleState->is_ignore_teamshadow))
                    {
                        gDPSetPrimColor(gpDisplayListHead[0]++, 0, 0, gTeamShadowColors[fp->team].r, gTeamShadowColors[fp->team].g, gTeamShadowColors[fp->team].b, gTeamShadowColors[fp->team].a);
                    }
                    else gDPSetPrimColor(gpDisplayListHead[0]++, 0, 0, gDefaultShadowColor.r, gDefaultShadowColor.g, gDefaultShadowColor.b, gDefaultShadowColor.a);

                    sv = shadow_vertex;

                    sv->n.ob[0] = var_f20;
                    sv->n.ob[1] = spF8;
                    sv->n.ob[2] = 200;
                    sv->n.tc[0] = 0;
                    sv->n.tc[1] = sp108;

                    sv++;

                    sv->n.ob[0] = var_f20;
                    sv->n.ob[1] = spF8;
                    sv->n.ob[2] = -200;
                    sv->n.tc[0] = 1984;
                    sv->n.tc[1] = sp108;

                    sv++;

                    sv->n.ob[0] = var_f22;
                    sv->n.ob[1] = spF4;
                    sv->n.ob[2] = 200;
                    sv->n.tc[0] = 0;
                    sv->n.tc[1] = sp104;

                    sv++;

                    sv->n.ob[0] = var_f22;
                    sv->n.ob[1] = spF4;
                    sv->n.ob[2] = -200;
                    sv->n.tc[0] = 1984;
                    sv->n.tc[1] = sp104;

                    if (spD8 >= 6)
                    {
                        sv++;

                        sv->n.ob[0] = spE8;
                        sv->n.ob[1] = spE4;
                        sv->n.ob[2] = 200;
                        sv->n.tc[0] = 0;

                        if (spF0 < 0.0F)
                        {
                            spF0 = 0.0F;
                        }
                        if (spF0 > 2048.0F)
                        {
                            spF0 = 2048.0F;
                        }
                        sv->n.tc[1] = spF0;

                        sv++;

                        sv->n.ob[0] = spE8;
                        sv->n.ob[1] = spE4;
                        sv->n.ob[2] = -200;
                        sv->n.tc[0] = 1984;
                        sv->n.tc[1] = spF0;

                        if (spD8 == 8)
                        {
                            sv++;

                            sv->n.ob[0] = spE0;
                            sv->n.ob[1] = spDC;
                            sv->n.ob[2] = 200;
                            sv->n.tc[0] = 0;

                            if (spEC < 0.0F)
                            {
                                spEC = 0.0F;
                            }
                            if (spEC > 2048.0F)
                            {
                                spEC = 2048.0F;
                            }
                            sv->n.tc[1] = spEC;

                            sv++;

                            sv->n.ob[0] = spE0;
                            sv->n.ob[1] = spDC;
                            sv->n.ob[2] = -200;
                            sv->n.tc[0] = 1984;
                            sv->n.tc[1] = spEC;

                            gSPVertex(gpDisplayListHead[0]++, shadow_vertex, 8, 0);

                            if (spCC != 0)
                            {
                                gSP2Triangles(gpDisplayListHead[0]++, 1, 0, 7, 0, 0, 6, 7, 0);

                                gSP2Triangles(gpDisplayListHead[0]++, 7, 6, 5, 0, 6, 4, 5, 0);

                                gSP2Triangles(gpDisplayListHead[0]++, 5, 4, 3, 0, 4, 2, 3, 0);
                            }
                            else
                            {
                                gSP2Triangles(gpDisplayListHead[0]++, 1, 0, 5, 0, 0, 4, 5, 0);

                                gSP2Triangles(gpDisplayListHead[0]++, 5, 4, 7, 0, 4, 6, 7, 0);

                                gSP2Triangles(gpDisplayListHead[0]++, 7, 6, 3, 0, 6, 2, 3, 0);
                            }
                        }
                        else
                        {
                            gSPVertex(gpDisplayListHead[0]++, shadow_vertex, 6, 0);

                            gSP2Triangles(gpDisplayListHead[0]++, 1, 0, 5, 0, 0, 4, 5, 0);

                            gSP2Triangles(gpDisplayListHead[0]++, 5, 4, 3, 0, 4, 2, 3, 0);
                        }
                    }
                    else
                    {
                        gSPVertex(gpDisplayListHead[0]++, shadow_vertex, 4, 0);

                        gSP2Triangles(gpDisplayListHead[0]++, 1, 0, 3, 0, 0, 2, 3, 0);
                    }
                }
            }
        }
    }
    if (shadow_gobj->room_gobj_next == NULL)
    {
        gSPDisplayList(gpDisplayListHead[0]++, &D_ovl3_80188458);
    }
}

GObj *func_ovl3_8013BB88(GObj *fighter_gobj)
{
    GObj *shadow_gobj = omMakeGObjCommon(0x3FC, 0, 0xD, 0x80000000);
    ftStruct *fp;
    Shadow_Struct *sp = hal_alloc(sizeof(Shadow_Struct), 8);
    s32 i;

    if (sp == NULL) return NULL;

    fp = ftGetStruct(fighter_gobj);

    sp->player = fp->player;

    for (i = 0; i < (ARRAY_COUNT(sp->shadow_vertex1) + ARRAY_COUNT(sp->shadow_vertex2)) / 2; i++)
    {
        sp->shadow_vertex1[i].n.flag = 0;
        sp->shadow_vertex1[i].n.n[0] = 0;
        sp->shadow_vertex1[i].n.n[1] = 0;
        sp->shadow_vertex1[i].n.n[2] = 0;
        sp->shadow_vertex1[i].n.a = 128;
        sp->shadow_vertex2[i].n.flag = 0;
        sp->shadow_vertex2[i].n.n[0] = 0;
        sp->shadow_vertex2[i].n.n[1] = 0;
        sp->shadow_vertex2[i].n.n[2] = 0;
        sp->shadow_vertex2[i].n.a = 128;
    }
    shadow_gobj->user_data = sp;

    func_80009DF4(shadow_gobj, func_ovl3_8013AE60, 7, 0x80000000, -1);

    return shadow_gobj;
}