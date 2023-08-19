#include "mpcoll.h"
#include <gm/gmmatch.h>
#include <gm/gmmisc.h>
#include <gr/ground.h>

mpEdgeBounds gMapEdgeBounds;
mpRoomDObj *gMapRooms;
mpLineGroup gMapLineTypeGroups[mpCollision_LineType_EnumMax];
mpGeometryInfo *gMapGeometry;
mpVertexInfoContainer *gMapVertexInfo;
mpVertexArray *gMapVertexID;
mpVertexLinks *gMapVertexLinks;   //
mpVertexPosContainer *gMapVertexData; // Vertex positions
Vec3f *gMapDynamicCollisions;
mpGPointContainer *gMapGeneralPoints;
s32 gMapLineCount;
GfxColorAlpha gMapLightColor;
s32 gMapRoomCount;
f32 gMapLightAngleX;
f32 gMapLightAngleY;
u16 D_ovl2_80131398;

extern u32 gMusicIndexCurrent;
extern u32 gMusicIndexDefault;

f32 func_ovl2_800F39F0(f32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    return (f32)arg2 + (((arg0 - (f32)arg1) / (f32)(arg3 - arg1)) * (f32)(arg4 - arg2));
}

f32 func_ovl2_800F3A34(f32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    return (f32)arg1 + (((arg0 - (f32)arg2) / (f32)(arg4 - arg2)) * (f32)(arg3 - arg1));
}

// 0x800F3A78
bool32 mpCollision_GetUUCommon(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle, s32 lr)
{
    mpVertexLinks *vlinks;
    mpRoomInfo *room_dobj;
    f32 vnear;
    u16 *pv;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    f32 vfar;
    f32 object_pos_x;
    f32 object_pos_y;
    s32 vid;
    u16 vertex1;
    s32 i;

    if ((line_id == -1) || (line_id == -2)) // -1 = not above ground, -2 = ???
    {
        while (TRUE)
        {
            fatal_printf("mpGetUUCommon() id = %d\n", line_id); // Since we're exclusively checking ground collision and the line ID passed isn't ground-valid, report the error

            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetUUCommon() no collsion\n");

            scnmgr_crash_print_gobj_state();
        }
    }
    vlinks = &gMapVertexLinks[line_id];

    if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
    {
        object_pos_x = object_pos->x - room_dobj->translate.x;
        object_pos_y = object_pos->y - room_dobj->translate.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMapVertexID->vertex_id[vertex1];
    v1x = gMapVertexData->vpos[pv[0]].pos.x;
    vid = vlinks->vertex2 - 1;
    v2x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex1 + vid]].pos.x;

    if (v2x < v1x)
    {
        vfar = v1x;
        vnear = v2x;
    }
    else
    {
        vfar = v2x;
        vnear = v1x;
    }
    if ((object_pos_x <= (vnear - 0.001F)) || ((vfar + 0.001F) <= object_pos_x))
    {
        return FALSE;
    }
    if (object_pos_x <= vnear)
    {
        object_pos_x = vnear;
    }
    else if (vfar <= object_pos_x)
    {
        object_pos_x = vfar;
    }
    if (vid != 1)
    {
        for (i = 0; i < vid; i++, pv++)
        {
            v1x = gMapVertexData->vpos[pv[0]].pos.x;
            v2x = gMapVertexData->vpos[pv[1]].pos.x;

            if (v2x == v1x)
            {
                while (TRUE)
                {
                    fatal_printf("same vtx x error mpGetUUCommon\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            if (((v1x <= object_pos_x) && (object_pos_x <= v2x)) || ((v2x <= object_pos_x) && (object_pos_x <= v1x)))
            {
                break;
            }
        }
    }
    v1y = gMapVertexData->vpos[pv[0]].pos.y;
    v2y = gMapVertexData->vpos[pv[1]].pos.y;

    if (flags != NULL)
    {
        *flags = gMapVertexData->vpos[pv[0]].vertex_flags;
    }
    if (arg2 != NULL)
    {
        *arg2 = func_ovl2_800F39F0(object_pos_x, vnear, v1y, v2x, v2y) - object_pos_y;
    }
    if (angle != NULL)
    {
        mpCollision_GetUDAngle(angle, v1x, v1y, v2x, v2y, lr);
    }
    return TRUE;
}

// 0x800F3DD8
bool32 mpCollision_GetUUCommonUp(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetUUCommon(line_id, object_pos, arg2, flags, angle, UD_Up);
}

bool32 func_ovl2_800F3E04(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetUUCommon(line_id, object_pos, arg2, flags, angle, UD_Down);
}

// 0x800F3E30
bool32 mpCollision_GetLRCommon(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle, s32 lr)
{
    mpVertexLinks *vlinks;
    mpRoomInfo *room_dobj;
    f32 vnear;
    f32 vfar;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    f32 object_pos_y;
    f32 object_pos_x;
    s32 vid;
    u16 vertex1;
    u16 *pv;
    s32 i;

    if ((line_id == -1) || (line_id == -2)) // -1 = not above ground, -2 = ???
    {
        while (TRUE)
        {
            fatal_printf("mpGetLRCommon() id = %d\n", line_id);

            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetLRCommon() no collision\n");

            scnmgr_crash_print_gobj_state();
        }
    }
    vlinks = &gMapVertexLinks[line_id];

    if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
    {
        object_pos_x = object_pos->x - room_dobj->translate.x;
        object_pos_y = object_pos->y - room_dobj->translate.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMapVertexID->vertex_id[vertex1];
    v1y = gMapVertexData->vpos[pv[0]].pos.y;
    vid = vlinks->vertex2 - 1;
    v2y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex1 + vid]].pos.y;

    if (v2y < v1y)
    {
        vfar = v1y;
        vnear = v2y;
    }
    else
    {
        vfar = v2y;
        vnear = v1y;
    }
    if ((object_pos_y <= (vnear - 0.001F)) || ((vfar + 0.001F) <= object_pos_y))
    {
        return FALSE;
    }
    if (object_pos_y <= vnear)
    {
        object_pos_y = vnear;
    }
    else if (vfar <= object_pos_y)
    {
        object_pos_y = vfar;
    }
    if (vid != 1)
    {
        for (i = 0; i < vid; i++, pv++)
        {
            v1y = gMapVertexData->vpos[pv[0]].pos.y;
            v2y = gMapVertexData->vpos[pv[1]].pos.y;

            if (v2y == v1y)
            {
                while (TRUE)
                {
                    fatal_printf("same vtx y error mpGetLRCommon\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            if (((v1y <= object_pos_y) && (object_pos_y <= v2y)) || ((v2y <= object_pos_y) && (object_pos_y <= v1y)))
            {
                break;
            }
        }
    }
    v1x = gMapVertexData->vpos[pv[0]].pos.x;
    v2x = gMapVertexData->vpos[pv[1]].pos.x;

    if (flags != NULL)
    {
        *flags = gMapVertexData->vpos[pv[0]].vertex_flags;
    }
    if (arg2 != NULL)
    {
        *arg2 = func_ovl2_800F3A34(object_pos_y, v1x, v1y, v2x, v2y) - object_pos_x;
    }
    if (angle != NULL)
    {
        mpCollision_GetLRAngle(angle, v1x, v1y, v2x, v2y, lr);
    }
    return TRUE;
}

bool32 func_ovl2_800F4194(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetLRCommon(line_id, object_pos, arg2, flags, angle, -1);
}

bool32 func_ovl2_800F41C0(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetLRCommon(line_id, object_pos, arg2, flags, angle, 1);
}

// 0x800F41EC
void mpCollision_GetLREdge(s32 line_id, Vec3f *object_pos, s32 lr)
{
    mpVertexLinks *vlinks;
    mpRoomInfo *room_dobj;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    bool32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetLREdge() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetLREdge() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    vlinks = &gMapVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    v1x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex1]].pos.x;
    v2x = gMapVertexData->vpos[gMapVertexID->vertex_id[vid]].pos.x;

    cmp_lt = (lr < LR_Center) ? (v1x < v2x) : (v2x < v1x);

    if (cmp_lt != FALSE)
    {
        object_pos->x = v1x;
        object_pos->y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex1]].pos.y;
    }
    else
    {
        object_pos->x = v2x;
        object_pos->y = gMapVertexData->vpos[gMapVertexID->vertex_id[vid]].pos.y;
    }
    object_pos->z = 0.0F;

    if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
    {
        object_pos->x += room_dobj->translate.x;
        object_pos->y += room_dobj->translate.y;
    }
}

// 0x800F4408
void mpCollision_GetLREdgeRight(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, LR_Right);
}

// 0x800F4428
void mpCollision_GetLREdgeLeft(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, LR_Left);
}

void func_ovl2_800F4448(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, 1);
}

void func_ovl2_800F4468(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, -1);
}

// 0x800F4488
void mpCollision_GetUDEdge(s32 line_id, Vec3f *object_pos, s32 ud)
{
    mpVertexLinks *vlinks;
    mpRoomInfo *room_dobj;
    mpVertexData *vpos1;
    mpVertexData *vpos2;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    bool32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetUDEdge() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetUDEdge() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    vlinks = &gMapVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    vpos1 = &gMapVertexData->vpos[gMapVertexID->vertex_id[vertex1]];
    vpos2 = &gMapVertexData->vpos[gMapVertexID->vertex_id[vid]];

    v1y = vpos1->pos.y;
    v2y = vpos2->pos.y;

    cmp_lt = (ud < UD_Center) ? (v1y < v2y) : (v2y < v1y);

    if (cmp_lt != FALSE)
    {
        object_pos->x = vpos1->pos.x;
        object_pos->y = v1y;
    }
    else
    {
        object_pos->x = vpos2->pos.x;
        object_pos->y = v2y;
    }
    object_pos->z = 0.0F;

    if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
    {
        object_pos->x += room_dobj->translate.x;
        object_pos->y += room_dobj->translate.y;
    }
}

void func_ovl2_800F4650(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, 1);
}

void func_ovl2_800F4670(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, -1);
}

void func_ovl2_800F4690(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, 1);
}

void func_ovl2_800F46B0(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, -1);
}

// 0x800F46D0
void mpCollision_GetUDAngle(Vec3f *angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr)
{
    f32 py, sqrt_py;
    f32 dist_y;

    angle->z = 0.0F;

    dist_y = (v2y - v1y);

    if (dist_y == 0.0F)
    {
        angle->x = 0.0F;
        angle->y = lr;

        return;
    }
    py = -(dist_y / (v2x - v1x));

    sqrt_py = 1.0F / sqrtf(SQUARE(py) + 1.0F);

    if (lr < 0)
    {
        angle->x = (-py * sqrt_py);
        angle->y = -sqrt_py;
    }
    else
    {
        angle->x = (py * sqrt_py);
        angle->y = sqrt_py;
    }
    lbVector_Vec3fNormalize(angle);
}

// 0x800F47AC Also calculates angle? Runs whenever character lands directly on a line surface that isn't 0 degrees
bool32 mpCollision_CheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfary;
    s32 vneary;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfarx;
    s32 vnearx;
    s32 vdist_y;
    s32 vdist_x;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_y = v2y - v1y;
    ddist_y = d1y - d2y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if (((vfary + 0.001F) < d2y) || (d1y < (vneary - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfary + 0.001F) < d1y) || (d2y < (vneary - 0.001F)))
    {
        return FALSE;
    }
    ddist_x = d1x - d2x;
    vdist_x = v2x - v1x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if ((vfarx < d2x) || (d1x < vnearx))
        {
            return FALSE;
        }
    }
    else if ((vfarx < d1x) || (d2x < vnearx))
    {
        return FALSE;
    }
    if ((d2y - (v1y + (((d2x - v1x) / vdist_x) * vdist_y))) <= (-0.001F))
    {
        temp_f12_2 = v1y + (((d1x - v1x) / vdist_x) * vdist_y);

        if ((d1y - temp_f12_2) < 0.001F)
        {
            if (((-0.001F) < (d1y - temp_f12_2)) && (d1x <= vfarx) && (vnearx <= d1x))
            {
                *dfx = d1x;
                *dfy = temp_f12_2;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + (var_f18 * vdist_x * vdscale);
            *dfy = v1y + (var_f18 * vdist_y * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800F4BD8
bool32 func_ovl2_800F4BD8(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.x;
                vedge_y = room_dobj->translate.y;

                vpdist_x = position->x - vedge_x;
                vpdist_y = position->y - vedge_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y < vpdist_y)
                            {
                                if (mpCollision_CheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                                }
                            }
                        }
                        else if (mpCollision_CheckGroundSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, 1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl2_800F521C(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_y;
    f32 dynamic_y;
    f32 vedge_x;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.x;
                vedge_y = room_dobj->translate.y;

                dynamic_y = gMapDynamicCollisions[line_info->room_id].y;

                vpdist_x = (position->x - vedge_x) + gMapDynamicCollisions[line_info->room_id].x;
                vpdist_y = (position->y - vedge_y) + dynamic_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                dynamic_y = 0.0F;
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y < vpdist_y)
                            {
                                if (mpCollision_CheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                                }
                            }
                        }
                        else if (mpCollision_CheckGroundSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, 1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F5A64
bool32 mpCollision_CheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfary;
    s32 vneary;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfarx;
    s32 vnearx;
    s32 vdist_y;
    s32 vdist_x;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_y = v2y - v1y;
    ddist_y = d1y - d2y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if (((vfary + 0.001F) < d2y) || (d1y < (vneary - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfary + 0.001F) < d1y) || (d2y < (vneary - 0.001F)))
    {
        return FALSE;
    }
    ddist_x = d1x - d2x;
    vdist_x = v2x - v1x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if ((vfarx < d2x) || (d1x < vnearx))
        {
            return FALSE;
        }
    }
    else if ((vfarx < d1x) || (d2x < vnearx))
    {
        return FALSE;
    }
    if ((d2y - (v1y + (((d2x - v1x) / vdist_x) * vdist_y))) >= (-0.001F))
    {
        temp_f12_2 = v1y + (((d1x - v1x) / vdist_x) * vdist_y);

        if ((d1y - temp_f12_2) > 0.001F)
        {
            if (((-0.001F) > (d1y - temp_f12_2)) && (d1x <= vfarx) && (vnearx <= d1x))
            {
                *dfx = d1x;
                *dfy = temp_f12_2;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);
            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + (var_f18 * vdist_x * vdscale);
            *dfy = v1y + (var_f18 * vdist_y * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl2_800F5E90(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.x;
                vedge_y = room_dobj->translate.y;

                vpdist_x = position->x - vedge_x;
                vpdist_y = position->y - vedge_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y > vpdist_y)
                            {
                                if (mpCollision_CheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                                }
                            }
                        }
                        else if (mpCollision_CheckCeilSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, -1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < vpdist_y) ? -(spAC - vpdist_y) : (spAC - vpdist_y);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl2_800F64D4(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_y;
    f32 dynamic_y;
    f32 vedge_x;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.x;
                vedge_y = room_dobj->translate.y;

                dynamic_y = gMapDynamicCollisions[line_info->room_id].y;

                vpdist_x = (position->x - vedge_x) + gMapDynamicCollisions[line_info->room_id].x;
                vpdist_y = (position->y - vedge_y) + dynamic_y;

                vtdist_x = translate->x - vedge_x;
                vtdist_y = translate->y - vedge_y;
            }
            else
            {
                dynamic_y = 0.0F;
                vedge_x = vedge_y = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_y < vtdist_y)
            {
                vdist1 = vpdist_y - 0.001F;
                vdist2 = vtdist_y + 0.001F;
            }
            else
            {
                vdist1 = vtdist_y - 0.001F;
                vdist2 = vpdist_y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_y)
                        {
                            if (vtdist_y > vpdist_y)
                            {
                                if (mpCollision_CheckUDSurfaceFlat(temp_s1, temp_s0, vpos_x, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_x;
                                        ga_last->y = spAC + vedge_y;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->x = angle->z = 0.0F;
                                        angle->y = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                                }
                            }
                        }
                        else if (mpCollision_CheckCeilSurfaceTilt(temp_s1, temp_s0, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_x;
                                ga_last->y = spAC + vedge_y;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, -1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spAC < (vpdist_y - dynamic_y)) ? -(spAC - (vpdist_y - dynamic_y)) : (spAC - (vpdist_y - dynamic_y));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl2_800F6B58(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.x;
                vedge_x = room_dobj->translate.y;

                vpdist_x = position->x - vedge_y;
                vpdist_y = position->y - vedge_x;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x < vpdist_x)
                            {
                                if (mpCollision_CheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                                }
                            }
                        }
                        else if (mpCollision_CheckRWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, 1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F7270
bool32 mpCollision_CheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfarx;
    s32 vnearx;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfary;
    s32 vneary;
    s32 vdist_x;
    s32 vdist_y;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_x = v2x - v1x;
    ddist_x = d1x - d2x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if (((vfarx + 0.001F) < d2x) || (d1x < (vnearx - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfarx + 0.001F) < d1x) || (d2x < (vnearx - 0.001F)))
    {
        return FALSE;
    }
    ddist_y = d1y - d2y;
    vdist_y = v2y - v1y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if ((vfary < d2y) || (d1y < vneary))
        {
            return FALSE;
        }
    }
    else if ((vfary < d1y) || (d2y < vneary))
    {
        return FALSE;
    }
    if ((d2x - (v1x + (((d2y - v1y) / (v2y - v1y)) * vdist_x))) <= (-0.001F))
    {
        temp_f12_2 = v1x + (((d1y - v1y) / vdist_y) * vdist_x);

        if ((d1x - temp_f12_2) < 0.001F)
        {
            if ((((-0.001F) < (d1x - temp_f12_2)) && (d1y <= vfary)) && (vneary <= d1y))
            {
                *dfx = temp_f12_2;
                *dfy = d1y;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + ((var_f18 * vdist_x) * vdscale);
            *dfy = v1y + ((var_f18 * vdist_y) * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl2_800F769C(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 dynamic_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.x;
                vedge_x = room_dobj->translate.y;

                dynamic_x = gMapDynamicCollisions[line_info->room_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMapDynamicCollisions[line_info->room_id].y;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                dynamic_x = 0.0F;
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x < vpdist_x)
                            {
                                if (mpCollision_CheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = 1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                                }
                            }
                        }
                        else if (mpCollision_CheckRWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, 1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 mpCollision_CheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8)
{
    s32 unused[2];
    f32 temp_f18;
    s32 vnear;
    s32 vfar;
    f32 ddist_y;
    s32 vdist_x = vpos_x - v1y;
    f32 ddist_x = vpdist_x - vtdist_x;
    f32 vddist_x = v1x - vpdist_x;

    if (ddist_x > 0.0F)
    {
        if (((v1x - 0.001F) > vpdist_x) || (vtdist_x >= v1x))
        {
            return FALSE;
        }
    }
    else if (((v1x + 0.001F) < vpdist_x) || (vtdist_x <= v1x))
    {
        return FALSE;
    }
    ddist_y = vpdist_y - vtdist_y;

    if (vdist_x < 0)
    {
        vnear = vpos_x;
        vfar = v1y;
    }
    else
    {
        vfar = vpos_x;
        vnear = v1y;
    }

    if (ddist_y > 0.0F)
    {
        if ((vfar < vtdist_y) || (vpdist_y < vnear))
        {
            return FALSE;
        }
    }
    else if ((vfar < vpdist_y) || (vtdist_y < vnear))
    {
        return FALSE;
    }
    temp_f18 = ((vddist_x / ddist_x) * ddist_y) + vpdist_y;

    if ((temp_f18 < vnear) || (temp_f18 > vfar))
    {
        return FALSE;
    }

    *arg7 = v1x;
    *arg8 = temp_f18;

    return TRUE;
}

bool32 func_ovl2_800F7F00(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.x;
                vedge_x = room_dobj->translate.y;

                vpdist_x = position->x - vedge_y;
                vpdist_y = position->y - vedge_x;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x > vpdist_x)
                            {
                                if (mpCollision_CheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                                }
                            }
                        }
                        else if (mpCollision_CheckLWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, -1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < vpdist_x) ? -(spB0 - vpdist_x) : (spB0 - vpdist_x);
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 mpCollision_CheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
{
    s32 vfarx;
    s32 vnearx;
    f32 ddist_x;
    f32 ddist_y;
    s32 vfary;
    s32 vneary;
    s32 vdist_x;
    s32 vdist_y;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 vddiv;
    f32 vddist_x;
    f32 vddist_y;
    f32 vddistdiv;
    f32 vdscale;
    f32 scale;
    f32 var_f18;

    vdist_x = v2x - v1x;
    ddist_x = d1x - d2x;

    if (vdist_x < 0)
    {
        vnearx = v2x;
        vfarx = v1x;
    }
    else
    {
        vfarx = v2x;
        vnearx = v1x;
    }
    if (ddist_x > 0.0F)
    {
        if (((vfarx + 0.001F) < d2x) || (d1x < (vnearx - 0.001F)))
        {
            return FALSE;
        }
    }
    else if (((vfarx + 0.001F) < d1x) || (d2x < (vnearx - 0.001F)))
    {
        return FALSE;
    }
    ddist_y = d1y - d2y;
    vdist_y = v2y - v1y;

    if (vdist_y < 0)
    {
        vneary = v2y;
        vfary = v1y;
    }
    else
    {
        vfary = v2y;
        vneary = v1y;
    }
    if (ddist_y > 0.0F)
    {
        if ((vfary < d2y) || (d1y < vneary))
        {
            return FALSE;
        }
    }
    else if ((vfary < d1y) || (d2y < vneary))
    {
        return FALSE;
    }
    if ((d2x - (v1x + (((d2y - v1y) / (v2y - v1y)) * vdist_x))) >= (-0.001F))
    {
        temp_f12_2 = v1x + (((d1y - v1y) / vdist_y) * vdist_x);

        if ((d1x - temp_f12_2) > 0.001F)
        {
            if ((((-0.001F) > (d1x - temp_f12_2)) && (d1y <= vfary)) && (vneary <= d1y))
            {
                *dfx = temp_f12_2;
                *dfy = d1y;

                return TRUE;
            }
        }
        else
        {
            vddist_x = v1x - d1x;
            vddist_y = v1y - d1y;

            var_f18 = (ddist_y * vddist_x) - (ddist_x * vddist_y);
            scale = (vdist_y * ddist_x) - (vdist_x * ddist_y);

            vddiv = var_f18 / scale;

            if (vddiv < 0.0F)
            {
                if (vddiv < (-0.001F))
                {
                    return FALSE;
                }
                var_f18 = 0.0F;
            }
            else if (vddiv > 1.0F)
            {
                if (1.001F < vddiv)
                {
                    return FALSE;
                }
                var_f18 = scale;
            }
            vddistdiv = ((vdist_x * vddist_y) - (vdist_y * vddist_x)) / scale;

            if ((vddistdiv < (-0.001F)) || (1.001F < vddistdiv))
            {
                return FALSE;
            }
            vdscale = 1.0F / scale;

            *dfx = v1x + ((var_f18 * vdist_x) * vdscale);
            *dfy = v1y + ((var_f18 * vdist_y) * vdscale);

            return TRUE;
        }
    }
    return FALSE;
}

bool32 func_ovl2_800F8974(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i;
    f32 vdist1;
    f32 vdist2;
    f32 vpdist_x, vpdist_y;
    f32 vtdist_x, vtdist_y;
    f32 line_project_pos;
    f32 vedge_x;
    f32 dynamic_x;
    f32 vedge_y;
    s32 line_id, vertex_id;
    s32 temp_s0;
    s32 temp_s1;
    s32 vpos_x;
    s32 vpos_y;
    f32 spB0;
    f32 spAC;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.x;
                vedge_x = room_dobj->translate.y;

                dynamic_x = gMapDynamicCollisions[line_info->room_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMapDynamicCollisions[line_info->room_id].y;

                vtdist_x = translate->x - vedge_y;
                vtdist_y = translate->y - vedge_x;
            }
            else
            {
                dynamic_x = 0.0F;
                vedge_y = vedge_x = 0.0F;

                vpdist_x = position->x;
                vpdist_y = position->y;

                vtdist_x = translate->x;
                vtdist_y = translate->y;
            }
            if (vpdist_x < vtdist_x)
            {
                vdist1 = vpdist_x - 0.001F;
                vdist2 = vtdist_x + 0.001F;
            }
            else
            {
                vdist1 = vtdist_x - 0.001F;
                vdist2 = vpdist_x + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMapVertexLinks[line_id].vertex1;

                    vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMapVertexLinks[line_id].vertex1; vertex_id < (gMapVertexLinks[line_id].vertex1 + gMapVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id + 1]].pos.y;

                        if (temp_s0 == vpos_x)
                        {
                            if (vtdist_x > vpdist_x)
                            {
                                if (mpCollision_CheckLRSurfaceFlat(temp_s0, temp_s1, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                                {
                                    if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                                    if (ga_last != NULL)
                                    {
                                        ga_last->x = spB0 + vedge_y;
                                        ga_last->y = spAC + vedge_x;
                                        ga_last->z = 0.0F;
                                    }
                                    if (stand_line_id != NULL)
                                    {
                                        *stand_line_id = line_id;
                                    }
                                    if (angle != NULL)
                                    {
                                        angle->y = angle->z = 0.0F;
                                        angle->x = -1.0F;
                                    }
                                    if (stand_coll_flags != NULL)
                                    {
                                        *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                                    }
                                    line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                                }
                            }
                        }
                        else if (mpCollision_CheckLWallSurfaceTilt(temp_s0, temp_s1, vpos_x, vpos_y, vpdist_x, vpdist_y, vtdist_x, vtdist_y, &spB0, &spAC) == TRUE)
                        {
                            if (line_project_pos <= ((spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x)))) continue;

                            if (ga_last != NULL)
                            {
                                ga_last->x = spB0 + vedge_y;
                                ga_last->y = spAC + vedge_x;
                                ga_last->z = 0.0F;
                            }
                            if (stand_line_id != NULL)
                            {
                                *stand_line_id = line_id;
                            }
                            if (angle != NULL)
                            {
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, -1);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id]].vertex_flags;
                            }
                            line_project_pos = (spB0 < (vpdist_x - dynamic_x)) ? -(spB0 - (vpdist_x - dynamic_x)) : (spB0 - (vpdist_x - dynamic_x));
                        }
                    }
                }
            }
        lbl_break: // BRUHHHHHHHHHHHHHHHHH
            continue;
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl2_800F8FFC(Vec3f *position)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 i, j;
    mpRoomInfo *room_dobj;
    f32 vpdist_x, vpdist_y;
    s32 line_id;

    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.x);
                vpdist_y = (position->y - room_dobj->translate.y) + 0.001F;
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMapVertexLinks->vertex_links[line_id].vertex1;
                    s32 vertex_id2 = gMapVertexLinks->vertex_links[line_id].vertex2 - 1;

                    s32 x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if (func_ovl2_800F39F0(vpdist_x, x1, gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y, x2, gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
                                {
                                    return TRUE;
                                }
                            }
                        }
                        else if (func_ovl2_800F39F0(vpdist_x, x1, gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y, x2, gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
                        {
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

bool32 func_ovl2_800F9348(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.x);
                vpdist_y = (position->y - room_dobj->translate.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMapVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMapVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                        y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = func_ovl2_800F39F0(vpdist_x, x1, y1, x2, y2);

                        gdist = fpos - vpdist_y;

                        if (fpos <= vpdist_y)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, 1);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
bool32 func_ovl2_800F97BC(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.x);
                vpdist_y = (position->y - room_dobj->translate.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_y)
                {
                    s32 vertex_id1 = gMapVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMapVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                        y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = func_ovl2_800F39F0(vpdist_x, x1, y1, x2, y2);

                        gdist = fpos - vpdist_y;

                        if (fpos >= vpdist_y)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, -1);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

bool32 func_ovl2_800F9C30(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.x);
                vpdist_y = (position->y - room_dobj->translate.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_x)
                {
                    s32 vertex_id1 = gMapVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMapVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                                y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                        x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = func_ovl2_800F3A34(vpdist_y, x1, y1, x2, y2);

                        gdist = fpos - vpdist_x;

                        if (fpos <= vpdist_x)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, 1);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
bool32 func_ovl2_800FA0A4(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    mpRoomInfo *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = (f32)FLOAT_MAX;
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->yakumono_id < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.x);
                vpdist_y = (position->y - room_dobj->translate.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMapVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_x)
                {
                    s32 vertex_id1 = gMapVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMapVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.y;
                                y2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].pos.x;
                        x2 = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = func_ovl2_800F3A34(vpdist_y, x1, y1, x2, y2);

                        gdist = fpos - vpdist_x;

                        if (fpos >= vpdist_x)
                        {
                            if (ABSF(gdist) < line_project_pos)
                            {
                                if (project_line_id != NULL)
                                {
                                    *project_line_id = line_id;
                                }
                                if (ga_dist != NULL)
                                {
                                    *ga_dist = gdist;
                                }
                                if (stand_coll_flags != NULL)
                                {
                                    *stand_coll_flags = gMapVertexData->vpos[gMapVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, -1);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == (f32)FLOAT_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800FA518
s32 func_ovl2_800FA518(s32 line_id)
{
    mpRoomInfo *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetNbVertex() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetNbVertex() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return gMapVertexLinks[line_id].vertex2;
}

// 0x800F15E8
void func_ovl2_800FA5E8(s32 line_id, s32 vertex_id, Vec3f *pos)
{
    mpRoomInfo *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetVertex() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetVertex() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    pos->x = gMapVertexData->vpos[gMapVertexID->vertex_id[gMapVertexLinks[line_id].vertex1 + vertex_id]].pos.x;
    pos->y = gMapVertexData->vpos[gMapVertexID->vertex_id[gMapVertexLinks[line_id].vertex1 + vertex_id]].pos.y;
    pos->z = 0.0F;

    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id != mpCollision_Yakumono_None))
    {
        pos->x += room_dobj->translate.x;
        pos->y += room_dobj->translate.y;
    }
}

// 0x800FA7B8
void func_ovl2_800FA7B8(s32 line_id, Vec3f *speed)
{
    mpRoomInfo *room_dobj;
    u8 room_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetSpeedId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_id = gMapVertexInfo->vertex_info[line_id].room_id;

    room_dobj = gMapRooms->room_dobj[room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetSpeedId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    *speed = gMapDynamicCollisions[room_id];
}

// 0x800FA8A4
s32 func_ovl2_800FA8A4(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;
    u8 room_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetKindId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id == mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetKindId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->line_type;
}

// 0x800FA964
s32 func_ovl2_800FA964(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUnderRId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUnderRId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAA24
s32 func_ovl2_800FAA24(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUnderLId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUnderLId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAAE4
s32 func_ovl2_800FAAE4(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUpperRId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUpperRId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FABA4
s32 func_ovl2_800FABA4(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUpperLId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeUpperLId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAC64
s32 func_ovl2_800FAC64(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeRightUId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeRightUId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0X800FAD24
s32 func_ovl2_800FAD24(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeRightDId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeRightDId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FADE4
s32 func_ovl2_800FADE4(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeLeftUId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeLeftUId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAEA4
s32 func_ovl2_800FAEA4(s32 line_id)
{
    mpRoomInfo *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeLeftDId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    vertex_info = &gMapVertexInfo->vertex_info[line_id];
    room_dobj = gMapRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->yakumono_id >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            fatal_printf("mpGetEdgeLeftDId() no collision\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    return vertex_info->edge_nsign_id;
}

void func_ovl2_800FAF64(s32 arg0, Vec3f *vec)
{
    if (!gMapGeometry->gpoint_count)
    {
        vec->x = vec->y = vec->z = 0.0F;
    }
    else
    {
        s32 i, index = arg0;

        for (i = 0; i < gMapGeometry->gpoint_count; i++)
        {
            if (index == gMapGeneralPoints->gpoints[i].gpoint_kind)
            {
                vec->x = gMapGeneralPoints->gpoints[i].pos.x;
                vec->y = gMapGeneralPoints->gpoints[i].pos.y;
                vec->z = 0;

                break;
            }
        }
    }
}

void func_ovl2_800FB010(void)
{
    gMapVertexInfo = hal_alloc(gMapLineCount * sizeof(mpVertexInfo), 8);
}

// 0x800FB04C
void func_ovl2_800FB04C(void)
{
    s32 line_id;
    s32 i;
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 j;
    s32 k;
    s32 l;
    s32 room_id;
    s32 vnear;
    s32 vfar;
    s32 vp2;
    s32 index;

    line_info = gMapGeometry->line_info;

    for (i = l = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];
        room_id = line_info->room_id;

        for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
        {
            for (index = line_data[j].group_id, line_id = 0; line_id < line_data[j].line_count; line_id++, index++)
            {
                mpVertexLinks *vlinks = &gMapVertexLinks[index];

                vfar = vnear = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMapVertexData->vpos[gMapVertexID->vertex_id[vlinks->vertex1]].pos.y:
                                                                             gMapVertexData->vpos[gMapVertexID->vertex_id[vlinks->vertex1]].pos.x;

                for (k = vlinks->vertex1 + 1; k < (vlinks->vertex1 + vlinks->vertex2); k++)
                {
                    // There are various ways to fake-match this function (e.g. do {} while (0), if(1), if(!gMapVertexData->vpos) right where this comment is)...

                    vp2 = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMapVertexData->vpos[gMapVertexID->vertex_id[k]].pos.y:
                                                                        gMapVertexData->vpos[gMapVertexID->vertex_id[k]].pos.x;

                    if (vp2 >= vfar)
                    {
                        vfar = vp2;
                    }
                    if (vnear >= vp2)
                    {
                        vnear = vp2;
                    }
                    else continue; // ...but this seems to be the most realistic solution for now.
                }
                gMapVertexInfo->vertex_info[l].coll_pos_next = vfar;
                gMapVertexInfo->vertex_info[l].coll_pos_prev = vnear;
                gMapVertexInfo->vertex_info[l].room_id = room_id;

                l++;
            }
        }
    }
}

// 0x800FB2A0
void func_ovl2_800FB2A0(void)
{
    s32 line_type, line_id;

    for (line_type = 0; i < ARRAY_COUNT(gMapLineTypeGroups); line_type++)
    {
        for (line_id = 0; line_id < gMapLineTypeGroups[line_type].line_count; line_id++)
        {
            gMapVertexInfo->vertex_info[gMapLineTypeGroups[line_type].line_id[line_id]].line_type = line_type;
        }
    }
}

void func_ovl2_800FB31C(void)
{
    s32 line_id;
    s32 line_next;
    s32 line_prev;
    s32 i;
    bool32 unk_bool;
    s32 vertex_id1;
    s32 vertex_id2;
    s32 vid;
    s32 vtemp1, vtemp2;

    for (i = 0; i < gMapLineCount; i++)
    {
        line_next = -1;
        line_prev = -1;

        unk_bool = FALSE;

        vtemp1 = gMapVertexLinks[i].vertex1;

        vertex_id1 = gMapVertexID->vertex_id[vtemp1];
        vertex_id2 = gMapVertexID->vertex_id[vtemp1 + gMapVertexLinks[i].vertex2 - 1];

        for (line_id = 0; line_id < gMapLineCount; line_id++)
        {
            if (i != line_id)
            {
                vtemp2 = gMapVertexLinks[line_id].vertex1;

                vid = vtemp2 + gMapVertexLinks[line_id].vertex2 - 1;

                if ((vertex_id1 == gMapVertexID->vertex_id[vtemp2]) || (vertex_id1 == gMapVertexID->vertex_id[vid]))
                {
                    line_prev = line_id;
                }
                if ((vertex_id2 == gMapVertexID->vertex_id[vtemp2]) || (vertex_id2 == gMapVertexID->vertex_id[vid]))
                {
                    line_next = line_id;
                }
            }
            continue;
        }
        switch (gMapVertexInfo->vertex_info[i].line_type)
        {
        default:
            break;

        case mpCollision_LineType_Ground:
        case mpCollision_LineType_Ceil:
            if (gMapVertexData->vpos[vertex_id2].pos.x < gMapVertexData->vpos[vertex_id1].pos.x)
            {
                unk_bool = TRUE;
            }
            break;

        case mpCollision_LineType_RWall:
        case mpCollision_LineType_LWall:
            if (gMapVertexData->vpos[vertex_id2].pos.y < gMapVertexData->vpos[vertex_id1].pos.y)
            {
                unk_bool = TRUE;
            }
            break;
        }
        if (unk_bool != FALSE)
        {
            gMapVertexInfo->vertex_info[i].edge_psign_id = line_prev;
            gMapVertexInfo->vertex_info[i].edge_nsign_id = line_next;
        }
        else
        {
            gMapVertexInfo->vertex_info[i].edge_psign_id = line_next;
            gMapVertexInfo->vertex_info[i].edge_nsign_id = line_prev;
        }
        continue;
    }
}

void func_ovl2_800FB554(void)
{
    func_ovl2_800FB04C();
    func_ovl2_800FB2A0();
    func_ovl2_800FB31C();
}

void func_ovl2_800FB584(grMapCollisionRoom *gr_room)
{
    s32 room_count;
    s32 i;

    for (room_count = 0; gr_room->room_id != 0x12; room_count++)
    {
        gr_room++;
    }
    gMapRooms = hal_alloc(room_count * sizeof(gMapRooms), 4);
    gMapDynamicCollisions = hal_alloc(room_count * sizeof(Vec3f), 4);

    for (i = 0; i < room_count; i++)
    {
        gMapDynamicCollisions[i].x = gMapDynamicCollisions[i].y = gMapDynamicCollisions[i].z = 0.0F;
    }
    gMapRoomCount = room_count;
}

void func_ovl2_800FB808(void)
{
    s32 index;
    mpDirection dir;
    mpLineData *line_data;
    mpLineInfo *line_info;
    mpRoomInfo *room_dobj;
    mpVertexLinks *vlinks;
    s32 i, j, k, l;

    dir = gMapEdgeBounds.d1;

    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((room_dobj->atrack != NULL) || (room_dobj->yakumono_id < mpCollision_Yakumono_Off && room_dobj->yakumono_id != mpCollision_Yakumono_None))
        {
            f32 x = room_dobj->translate.x, y = room_dobj->translate.y;

            line_data = &line_info->line_data[0];

            for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
            {
                for (index = line_data[j].group_id, k = 0; k < line_data[j].line_count; k++, index++)
                {
                    vlinks = &gMapVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        s32 vx = gMapVertexData->vpos[gMapVertexID->vertex_id[l]].pos.x + x;
                        s32 vy = gMapVertexData->vpos[gMapVertexID->vertex_id[l]].pos.y + y;

                        if (dir.top < vy)
                        {
                            dir.top = vy;
                        }
                        else if (vy < dir.bottom)
                        {
                            dir.bottom = vy;
                        }
                        if (dir.left < vx)
                        {
                            dir.left = vx;
                        }
                        else if (vx < dir.right)
                        {
                            dir.right = vx;
                        }
                    }
                }
            }
        }
    }
    gMapEdgeBounds.d2 = dir;
}

void func_ovl2_800FBA84(void)
{
    gMapEdgeBounds.d3.top      =   gMapEdgeBounds.d2.top      -   gMapEdgeBounds.d0.top;
    gMapEdgeBounds.d3.bottom   =   gMapEdgeBounds.d2.bottom   -   gMapEdgeBounds.d0.bottom;
    gMapEdgeBounds.d3.right    =   gMapEdgeBounds.d2.right    -   gMapEdgeBounds.d0.right;
    gMapEdgeBounds.d3.left     =   gMapEdgeBounds.d2.left     -   gMapEdgeBounds.d0.left;
}

void jtgt_ovl2_800FBAD0(GObj *ground_gobj)
{
    DObj *dobj;
    MObj *mobj;
    s32 i;
    Vec3f translate;
    u8 temp_s2;

    dobj = DObjGetStruct(ground_gobj);

    i = 0;

    while (dobj != NULL)
    {
        if (dobj == gMapRooms->room_info[i])
        {
            if ((dobj->yakumono_id != 1) && (dobj->yakumono_id != 3))
            {
                temp_s2 = dobj->unk_0x54;

                func_8000BFE8(dobj);

                translate = dobj->translate;

                func_8000CCBC(dobj);

                gMapRoomVectors[i].x = dobj->translate.x - translate.x;
                gMapRoomVectors[i].y = dobj->translate.y - translate.y;
                gMapRoomVectors[i].z = dobj->translate.z - translate.z;

                if (temp_s2 == 0)
                {
                    if (dobj->unk_0x54 != 0)
                    {
                        dobj->yakumono_id = 4;
                    }
                }
                else if (dobj->unk_0x54 == 0)
                {
                    dobj->yakumono_id = 2;
                }
            }
            if (i < (gMapRoomCount - 1))
            {
                i++;
            }
        }
        else
        {
            func_8000BFE8(dobj);
            func_8000CCBC(dobj);
        }
        mobj = dobj->mobj;

        while (mobj != NULL)
        {
            func_8000CF6C(mobj);
            func_8000DA40(mobj);

            mobj = mobj->mobj_next;
        }
        if (dobj->next != NULL)
        {
            dobj = dobj->next;
        }
        else if (dobj->unk_0x8 != NULL)
        {
            dobj = dobj->unk_0x8;
        }
        else while (TRUE)
        {
            if (dobj->prev == (DObj *)1)
            {
                dobj = NULL;

                break;
            }
            else if (dobj->prev->unk_0x8 != NULL)
            {
                dobj = dobj->prev->unk_0x8;

                break;
            }
            else
            {
                dobj = dobj->prev;

                continue;
            }
        }
    }

    func_ovl2_800FB808();
    func_ovl2_800FBA84();

    D_ovl2_80131398++;
}

void func_ovl2_800FBCF8(GObj *ground_gobj)
{
    D_ovl2_80131398++;
}

void func_ovl2_800FBD14(void)
{
    s32 index;
    DObj *room_dobj;
    mpDirection dir1;
    mpDirection dir2;
    s32 vx;
    s32 vy;
    f32 tx;
    f32 ty;
    mpLineData *line_data;
    mpLineInfo *line_info;
    mpVertexLinks *vlinks;
    s32 i, j, k, l;
    s32 unused[2];

    line_info = gMapGeometry->line_info;

    dir1.top = -65536.0F;
    dir1.right = -65536.0F;
    dir2.top = -65536.0F;
    dir2.right = -65536.0F;
    dir2.left = 65536.0F;
    dir2.bottom = 65536.0F;
    dir1.left = 65536.0F;
    dir1.bottom = 65536.0F;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        room_dobj = gMapRooms->room_dobj[line_info->room_id];

        if ((room_dobj->yakumono_id != mpCollision_Yakumono_On) && (room_dobj->yakumono_id != mpCollision_Yakumono_Off))
        {
            if (room_dobj->atrack != NULL)
            {
                tx = room_dobj->translate.x;
                ty = room_dobj->translate.y;
            }
            else
            {
                tx = 0.0F;
                ty = 0.0F;
            }
            line_data = &line_info->line_data[0];

            for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
            {
                for (index = line_data[j].group_id, k = 0; k < line_data[j].line_count; k++, index++)
                {
                    vlinks = &gMapVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        vx = gMapVertexData->vpos[gMapVertexID->vertex_id[l]].pos.x;
                        vy = gMapVertexData->vpos[gMapVertexID->vertex_id[l]].pos.y;

                        if (room_dobj->atrack == NULL)
                        {
                            if (dir2.top < vy)
                            {
                                dir2.top = vy;
                            }
                            if (vy < dir2.bottom)
                            {
                                dir2.bottom = vy;
                            }
                            if (dir2.right < vx)
                            {
                                dir2.right = vx;
                            }
                            if (vx < dir2.left)
                            {
                                dir2.left = vx;
                            }
                        }
                        vx += tx;
                        vy += ty;

                        if (dir1.top < vy)
                        {
                            dir1.top = vy;
                        }
                        if (vy < dir1.bottom)
                        {
                            dir1.bottom = vy;
                        }
                        if (dir1.right < vx)
                        {
                            dir1.right = vx;
                        }
                        if (vx < dir1.left)
                        {
                            dir1.left = vx;
                        }
                    }
                }
            }
        }
    }
    gMapEdgeBounds.d0 = dir1;
    gMapEdgeBounds.d1 = dir2;
    gMapEdgeBounds.d2 = dir1;
    gMapEdgeBounds.d3.top = gMapEdgeBounds.d3.bottom = gMapEdgeBounds.d3.right = gMapEdgeBounds.d3.left = 0.0F;
}

s32 func_ovl2_800FC09C(void)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 i;
    s32 line_count[mpCollision_LineType_EnumMax];
    s32 line_total, j;

    for (i = 0; i < ARRAY_COUNT(line_count); i++)
    {
        line_count[i] = 0;
    }
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            line_count[j] += line_data->line_count;
        }
    }
    for (i = 0, line_total = 0; i < (ARRAY_COUNT(line_count) + ARRAY_COUNT(gMapLineTypeGroups)) / 2; i++)
    {
        gMapLineTypeGroups[i].line_count = line_count[i];

        line_total += line_count[i];

        if (line_count[i] != 0)
        {
            gMapLineTypeGroups[i].line_id = hal_alloc(line_count[i] * sizeof(*gMapLineTypeGroups[i].line_id), 2);
        }
    }
    return line_total;
}

void func_ovl2_800FC1A4(void)
{
    mpLineData *line_data;
    mpLineInfo *line_info;
    s32 i;
    s32 line_count[mpCollision_LineType_EnumMax];
    s32 j, line_id;

    for (i = 0; i < ARRAY_COUNT(line_count); i++)
    {
        line_count[i] = 0;
    }
    line_info = gMapGeometry->line_info;

    for (i = 0; i < gMapGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                gMapLineTypeGroups[j].line_id[line_count[j]] = line_id;
                line_count[j]++;
            }
        }
    }
}

extern grFileInfo D_ovl2_8012C520[];

void func_ovl2_800FC284(void)
{
    mpGeometryInfo *geometry_info;

    gGroundInfo = 
    (
        rldm_get_file_with_external_heap(
                                    D_ovl2_8012C520[gBattleState->gr_kind].size, hal_alloc(
                                                                                      rldm_bytes_needed_to_load(D_ovl2_8012C520[gBattleState->gr_kind].size), 16))
        
                                                                                                                   + D_ovl2_8012C520[gBattleState->gr_kind].offset
    );

    gMapGeometry = gGroundInfo->map_geometry;
    geometry_info = gMapGeometry;

    if (geometry_info == NULL)
    {
        while (TRUE)
        {
            fatal_printf("not found cll data!\n");
            scnmgr_crash_print_gobj_state();
        }
    }
    gMapVertexData     =   geometry_info->vertex_data;
    gMapVertexID       =   geometry_info->vertex_id;
    gMapVertexLinks    =   geometry_info->vertex_links;
    gMapGeneralPoints    =   geometry_info->vectors;

    gMapLineCount = func_ovl2_800FC09C();

    func_ovl2_800FC1A4();
    func_ovl2_800FB010();
    func_ovl2_800FB554();
    func_ovl2_800FB584(gGroundInfo->gr_desc[1].dobj_desc);

    gMapLightColor.r = 0xFF;
    gMapLightColor.g = 0xFF;
    gMapLightColor.b = 0xFF;
    gMapLightColor.a = 0xFF;

    gMapLightAngleX = gGroundInfo->light_angle.x;
    gMapLightAngleY = gGroundInfo->light_angle.y;
}

void func_ovl2_800FC3E8(void)
{
    gMusicIndexDefault = gGroundInfo->music_id;

    func_80020AB4(0, gMusicIndexDefault);

    gMusicIndexCurrent = gMusicIndexDefault;
}

void func_ovl2_800FC42C(void)
{
    gMusicIndexCurrent = gMusicIndexDefault = gGroundInfo->music_id;
}

void func_ovl2_800FC450(void)
{
    DObjDesc *dobj_desc;
    s32 i;

    dobj_desc = gGroundInfo->gr_desc[1].dobj_desc;

    for (i = 0; dobj_desc->index != 0x12; i++, dobj_desc++)
    {
        gMapRooms->room_dobj[i]->yakumono_id = 0;
    }
    D_ovl2_80131398 = 0;
}

// 0x800FC4A8
void mpCollision_SetYakumonoPosID(s32 line_id, Vec3f *yakumono_pos)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpSetYakumonoPosId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[line_id];

    gMapDynamicCollisions[line_id].x = yakumono_pos->x - room_dobj->translate.x;
    gMapDynamicCollisions[line_id].y = yakumono_pos->y - room_dobj->translate.y;
    gMapDynamicCollisions[line_id].z = yakumono_pos->z - room_dobj->translate.z;

    room_dobj->translate.x = yakumono_pos->x;
    room_dobj->translate.y = yakumono_pos->y;
    room_dobj->translate.z = yakumono_pos->z;
}

// 0x800FC58C
void mpCollision_SetYakumonoOnID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpSetYakumonoOnId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    gMapRooms->room_dobj[line_id]->yakumono_id = mpCollision_Yakumono_On;
}

// 0x800FC604
void mpCollision_SetYakumonoOffID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpSetYakumonoOffId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    gMapRooms->room_dobj[line_id]->yakumono_id = mpCollision_Yakumono_Off;
}

// 0x800FC67C
bool32 mpCollision_CheckExistLineID(s32 line_id)
{
    if (line_id == -1)
    {
        while (TRUE)
        {
            fatal_printf("mpGetExistCollisionId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    if (line_id == -2)
    {
        return FALSE;
    }
    if (gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id]->yakumono_id < mpCollision_Yakumono_Off)
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800FC72C
s32 mpCollision_SetDObjNoID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpSetDObjNoId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    return gMapVertexInfo->vertex_info[line_id].room_id;
}

// 0x800FC7A4
s32 mpCollision_GetGPointCountKind(s32 gpoint_kind)
{
    s32 i, count;

    if (!gMapGeometry->gpoint_count)
    {
        return 0;
    }
    else for (i = count = 0; i < gMapGeometry->gpoint_count; i++)
    {
        if (gpoint_kind == gMapGeneralPoints->gpoints[i].gpoint_kind)
        {
            count++;
        }
    }
    return count;
}

void func_ovl2_800FC814(s32 gpoint_kind, s32 *arg1)
{
    s32 i, count;

    if (gMapGeometry->gpoint_count)
    {
        for (i = count = 0; i < gMapGeometry->gpoint_count; i++)
        {
            if (gpoint_kind == gMapGeneralPoints->gpoints[i].gpoint_kind)
            {
                arg1[count] = i;

                count++;
            }
        }
    }
}

// 0x800FC894
void mpCollision_GetGPointPositionsID(s32 gpoint_kind, Vec3f *pos)
{
    pos->x = gMapGeneralPoints->gpoints[gpoint_kind].pos.x;
    pos->y = gMapGeneralPoints->gpoints[gpoint_kind].pos.y;
    pos->z = 0.0F;
}

// 0x800FC8EC
s32 mpCollision_GetLineCountType(s32 line_type)
{
    return gMapLineTypeGroups[line_type].line_count;
}

void func_ovl2_800FC900(s32 arg0, s32 arg1, s32 *arg2)
{
    s32 i;

    for (i = 0; i < arg1; i++)
    {
        arg2[i] = gMapLineTypeGroups[arg0].line_id[i];
    }
}

// 0x800FC9C8
u8 mpCollision_SetLightColorGetAlpha(Gfx **display_list)
{
    gDPSetEnvColor(display_list[0]++, gMapLightColor.r, gMapLightColor.g, gMapLightColor.b, gMapLightColor.a);

    return gMapLightColor.a;
}

bool32 func_ovl2_800FCA18(s32 line_id)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetCllFloatId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    room_dobj = gMapRooms->room_dobj[gMapVertexInfo->vertex_info[line_id].room_id];

    if ((room_dobj->yakumono_id != mpCollision_Yakumono_None) || (room_dobj->atrack != NULL))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800FCAC8
u16 mpCollision_GetAttrID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            fatal_printf("mpGetAttrId() id = %d\n", line_id);
            scnmgr_crash_print_gobj_state();
        }
    }
    return gMapVertexData->vpos[gMapVertexID->vertex_id[gMapVertexLinks[line_id].vertex1]].vertex_flags;
}
