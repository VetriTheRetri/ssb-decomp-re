#include "mpcoll.h"

#include <gm/battle.h>
#include <gm/gmmisc.h>
#include <gr/ground.h>

// 0x80131304
mpEdgeBounds gMPEdgeBounds;
mpRoomDObj *gMPRooms;
mpLineGroup gMPLineTypeGroups[mpCollision_LineType_EnumMax];
mpGeometryInfo *gMPGeometry;
mpVertexInfoContainer *gMPVertexInfo;
mpVertexArray *gMPVertexID;
mpVertexLinks *gMPVertexLinks;       //
mpVertexPosContainer *gMPVertexData; // Vertex positions
Vec3f *gMPDynamicCollisions;
mpMPointContainer *gMPPoints;
s32 gMPLineCount;
gsColorRGBA gMPLightColor;
s32 gMPRoomCount;
f32 gMPLightAngleX;
f32 gMPLightAngleY;
u16 gMPCollUpdateFrame;

extern u32 gMusicIndexCurrent;
extern u32 gMusicIndexDefault;

// 0x800F39F0
f32 mpCollision_GetLineDistanceUD(f32 opx, s32 v1x, s32 v1y, s32 v2x, s32 v2y)
{
    return v1y + (((opx - v1x) / (v2x - v1x)) * (v2y - v1y));
}

// 0x800F3A34
f32 mpCollision_GetLineDistanceLR(f32 opy, s32 v1x, s32 v1y, s32 v2x, s32 v2y)
{
    return v1x + (((opy - v1y) / (v2y - v1y)) * (v2x - v1x));
}

// 0x800F3A78
sb32 mpCollision_GetUDCommon(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle, s32 ud)
{
    mpVertexLinks *vlinks;
    DObj *room_dobj;
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
            gsFatalPrintF("mpGetUUCommon() id = %d\n", line_id); // Since we're exclusively checking ground collision and the line ID passed isn't ground-valid, report the error

            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUUCommon() no collsion\n");

            smCrashPrintGObjStatus();
        }
    }
    vlinks = &gMPVertexLinks[line_id];

    if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
    {
        object_pos_x = object_pos->x - room_dobj->translate.vec.f.x;
        object_pos_y = object_pos->y - room_dobj->translate.vec.f.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMPVertexID->vertex_id[vertex1];
    v1x = gMPVertexData->vpos[pv[0]].pos.x;
    vid = vlinks->vertex2 - 1;
    v2x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex1 + vid]].pos.x;

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
            v1x = gMPVertexData->vpos[pv[0]].pos.x;
            v2x = gMPVertexData->vpos[pv[1]].pos.x;

            if (v2x == v1x)
            {
                while (TRUE)
                {
                    gsFatalPrintF("same vtx x error mpGetUUCommon\n");
                    smCrashPrintGObjStatus();
                }
            }
            if (((v1x <= object_pos_x) && (object_pos_x <= v2x)) || ((v2x <= object_pos_x) && (object_pos_x <= v1x)))
            {
                break;
            }
        }
    }
    v1y = gMPVertexData->vpos[pv[0]].pos.y;
    v2y = gMPVertexData->vpos[pv[1]].pos.y;

    if (flags != NULL)
    {
        *flags = gMPVertexData->vpos[pv[0]].vertex_flags;
    }
    if (dist != NULL)
    {
        *dist = mpCollision_GetLineDistanceUD(object_pos_x, vnear, v1y, v2x, v2y) - object_pos_y;
    }
    if (angle != NULL)
    {
        mpCollision_GetUDAngle(angle, v1x, v1y, v2x, v2y, ud);
    }
    return TRUE;
}

// 0x800F3DD8
sb32 mpCollision_GetUDCommonUp(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetUDCommon(line_id, object_pos, dist, flags, angle, UD_Up);
}

// 0x800F3E04
sb32 mpCollision_GetUDCommonDown(s32 line_id, Vec3f *object_pos, f32 *dist, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetUDCommon(line_id, object_pos, dist, flags, angle, UD_Down);
}

// 0x800F3E30
sb32 mpCollision_GetLRCommon(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle, s32 lr)
{
    mpVertexLinks *vlinks;
    DObj *room_dobj;
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
            gsFatalPrintF("mpGetLRCommon() id = %d\n", line_id);

            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLRCommon() no collision\n");

            smCrashPrintGObjStatus();
        }
    }
    vlinks = &gMPVertexLinks[line_id];

    if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
    {
        object_pos_x = object_pos->x - room_dobj->translate.vec.f.x;
        object_pos_y = object_pos->y - room_dobj->translate.vec.f.y;
    }
    else
    {
        object_pos_x = object_pos->x;
        object_pos_y = object_pos->y;
    }
    vertex1 = vlinks->vertex1;
    pv = &gMPVertexID->vertex_id[vertex1];
    v1y = gMPVertexData->vpos[pv[0]].pos.y;
    vid = vlinks->vertex2 - 1;
    v2y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex1 + vid]].pos.y;

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
            v1y = gMPVertexData->vpos[pv[0]].pos.y;
            v2y = gMPVertexData->vpos[pv[1]].pos.y;

            if (v2y == v1y)
            {
                while (TRUE)
                {
                    gsFatalPrintF("same vtx y error mpGetLRCommon\n");
                    smCrashPrintGObjStatus();
                }
            }
            if (((v1y <= object_pos_y) && (object_pos_y <= v2y)) || ((v2y <= object_pos_y) && (object_pos_y <= v1y)))
            {
                break;
            }
        }
    }
    v1x = gMPVertexData->vpos[pv[0]].pos.x;
    v2x = gMPVertexData->vpos[pv[1]].pos.x;

    if (flags != NULL)
    {
        *flags = gMPVertexData->vpos[pv[0]].vertex_flags;
    }
    if (arg2 != NULL)
    {
        *arg2 = mpCollision_GetLineDistanceLR(object_pos_y, v1x, v1y, v2x, v2y) - object_pos_x;
    }
    if (angle != NULL)
    {
        mpCollision_GetLRAngle(angle, v1x, v1y, v2x, v2y, lr);
    }
    return TRUE;
}

// 0x800F4194
sb32 mpCollision_GetLRCommonLeft(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetLRCommon(line_id, object_pos, arg2, flags, angle, LR_Left);
}

// 0x800F41C0
sb32 mpCollision_GetLRCommonRight(s32 line_id, Vec3f *object_pos, f32 *arg2, u32 *flags, Vec3f *angle)
{
    return mpCollision_GetLRCommon(line_id, object_pos, arg2, flags, angle, LR_Right);
}

// 0x800F41EC
void mpCollision_GetLREdge(s32 line_id, Vec3f *object_pos, s32 lr)
{
    mpVertexLinks *vlinks;
    DObj *room_dobj;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    sb32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLREdge() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetLREdge() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    vlinks = &gMPVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    v1x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex1]].pos.x;
    v2x = gMPVertexData->vpos[gMPVertexID->vertex_id[vid]].pos.x;

    cmp_lt = (lr < LR_Center) ? (v1x < v2x) : (v2x < v1x);

    if (cmp_lt != FALSE)
    {
        object_pos->x = v1x;
        object_pos->y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex1]].pos.y;
    }
    else
    {
        object_pos->x = v2x;
        object_pos->y = gMPVertexData->vpos[gMPVertexID->vertex_id[vid]].pos.y;
    }
    object_pos->z = 0.0F;

    if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
    {
        object_pos->x += room_dobj->translate.vec.f.x;
        object_pos->y += room_dobj->translate.vec.f.y;
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

// 0x800F4448
void func_ovl2_800F4448(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, LR_Right);
}

// 0x800F4468
void func_ovl2_800F4468(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetLREdge(line_id, object_pos, LR_Left);
}

// 0x800F4488
void mpCollision_GetUDEdge(s32 line_id, Vec3f *object_pos, s32 ud)
{
    mpVertexLinks *vlinks;
    DObj *room_dobj;
    mpVertexData *vpos1;
    mpVertexData *vpos2;
    s32 v1x;
    s32 v1y;
    s32 v2x;
    s32 v2y;
    s32 vid;
    u16 vertex1;
    sb32 cmp_lt;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUDEdge() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetUDEdge() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    vlinks = &gMPVertexLinks[line_id];
    vertex1 = vlinks->vertex1;
    vid = (vlinks->vertex2 + vertex1) - 1;
    vpos1 = &gMPVertexData->vpos[gMPVertexID->vertex_id[vertex1]];
    vpos2 = &gMPVertexData->vpos[gMPVertexID->vertex_id[vid]];

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

    if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
    {
        object_pos->x += room_dobj->translate.vec.f.x;
        object_pos->y += room_dobj->translate.vec.f.y;
    }
}

// 0x800F4650
void mpCollision_GetUDEdgeUp(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, UD_Up);
}

// 0x800F4670
void mpCollision_GetUDEdgeDown(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, UD_Down);
}

// 0x800F4690
void func_ovl2_800F4690(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, UD_Up);
}

// 0x800F46B0
void func_ovl2_800F46B0(s32 line_id, Vec3f *object_pos)
{
    mpCollision_GetUDEdge(line_id, object_pos, UD_Down);
}

// 0x800F46D0
void mpCollision_GetUDAngle(Vec3f *angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 ud)
{
    f32 py, sqrt_py;
    f32 dist_y;

    angle->z = 0.0F;

    dist_y = (v2y - v1y);

    if (dist_y == 0.0F)
    {
        angle->x = 0.0F;
        angle->y = ud;

        return;
    }
    py = -(dist_y / (v2x - v1x));

    sqrt_py = 1.0F / sqrtf(SQUARE(py) + 1.0F);

    if (ud < 0)
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
sb32 mpCollision_CheckGroundSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
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
sb32 mpCollision_CheckGroundLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.vec.f.x;
                vedge_y = room_dobj->translate.vec.f.y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, UD_Up);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F521C
sb32 mpCollision_CheckGroundLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.vec.f.x;
                vedge_y = room_dobj->translate.vec.f.y;

                dynamic_y = gMPDynamicCollisions[line_info->room_id].y;

                vpdist_x = (position->x - vedge_x) + gMPDynamicCollisions[line_info->room_id].x;
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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, UD_Up);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F5A64
sb32 mpCollision_CheckCeilSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
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

// 0x800F5E90
sb32 mpCollision_CheckCeilLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.vec.f.x;
                vedge_y = room_dobj->translate.vec.f.y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, UD_Down);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F64D4
sb32 mpCollision_CheckCeilLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_x = room_dobj->translate.vec.f.x;
                vedge_y = room_dobj->translate.vec.f.y;

                dynamic_y = gMPDynamicCollisions[line_info->room_id].y;

                vpdist_x = (position->x - vedge_x) + gMPDynamicCollisions[line_info->room_id].x;
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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s1 = vpos_x;
                        temp_s0 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetUDAngle(angle, temp_s1, temp_s0, vpos_x, vpos_y, UD_Down);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F6B58
sb32 mpCollision_CheckRWallLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.vec.f.x;
                vedge_x = room_dobj->translate.vec.f.y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, LR_Right);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F71A0
void mpCollision_GetLRAngle(Vec3f *angle, s32 v1x, s32 v1y, s32 v2x, s32 v2y, s32 lr)
{
    f32 py, sqrt_py;
    f32 dist_x;

    angle->z = 0.0F;

    dist_x = (v2x - v1x);

    if (dist_x == 0.0F)
    {
        angle->x = lr;
        angle->y = 0.0F;

        return;
    }
    py = -(dist_x / (v2y - v1y));

    sqrt_py = 1.0F / sqrtf(SQUARE(py) + 1.0F);

    if (lr < 0)
    {
        // -sqrt_py
        angle->x = -sqrt_py;
        angle->y = (-py * sqrt_py);
    }
    else
    {
        angle->x = sqrt_py;
        angle->y = (py * sqrt_py);
    }
    lbVector_Vec3fNormalize(angle);
}

// 0x800F7270
sb32 mpCollision_CheckRWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
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

// 0x800F769C
sb32 mpCollision_CheckRWallLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.vec.f.x;
                vedge_x = room_dobj->translate.vec.f.y;

                dynamic_x = gMPDynamicCollisions[line_info->room_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMPDynamicCollisions[line_info->room_id].y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, LR_Right);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F7D24
sb32 mpCollision_CheckLRSurfaceFlat(s32 v1x, s32 v1y, s32 vpos_x, f32 vpdist_x, f32 vpdist_y, f32 vtdist_x, f32 vtdist_y, f32 *arg7, f32 *arg8)
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

// 0x800F7F00
sb32 mpCollision_CheckLWallLineCollisionSame(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.vec.f.x;
                vedge_x = room_dobj->translate.vec.f.y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F8548
sb32 mpCollision_CheckLWallSurfaceTilt(s32 v1x, s32 v1y, s32 v2x, s32 v2y, f32 d1x, f32 d1y, f32 d2x, f32 d2y, f32 *dfx, f32 *dfy)
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

// 0x800F8974
sb32 mpCollision_CheckLWallLineCollisionDiff(Vec3f *position, Vec3f *translate, Vec3f *ga_last, s32 *stand_line_id, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
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

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vedge_y = room_dobj->translate.vec.f.x;
                vedge_x = room_dobj->translate.vec.f.y;

                dynamic_x = gMPDynamicCollisions[line_info->room_id].x;

                vpdist_x = (position->x - vedge_y) + dynamic_x;
                vpdist_y = (position->y - vedge_x) + gMPDynamicCollisions[line_info->room_id].y;

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
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next < vdist1)
                {
                    continue;
                }
                else if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev > vdist2)
                {
                    goto lbl_break; // Bruhhhhhhhhhhhhhhh
                }
                else
                {
                    vertex_id = gMPVertexLinks[line_id].vertex1;

                    vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.x;
                    vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].pos.y;

                    for (vertex_id = gMPVertexLinks[line_id].vertex1; vertex_id < (gMPVertexLinks[line_id].vertex1 + gMPVertexLinks[line_id].vertex2) - 1; vertex_id++)
                    {
                        temp_s0 = vpos_x;
                        temp_s1 = vpos_y;

                        vpos_x = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.x;
                        vpos_y = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id + 1]].pos.y;

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
                                        *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
                                mpCollision_GetLRAngle(angle, temp_s0, temp_s1, vpos_x, vpos_y, LR_Left);
                            }
                            if (stand_coll_flags != NULL)
                            {
                                *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id]].vertex_flags;
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
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F8FFC
sb32 func_ovl2_800F8FFC(Vec3f *position)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    s32 i, j;
    DObj *room_dobj;
    f32 vpdist_x, vpdist_y;
    s32 line_id;

    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.vec.f.x);
                vpdist_y = (position->y - room_dobj->translate.vec.f.y) + 0.001F;
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y + 0.001F;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMPVertexLinks->vertex_links[line_id].vertex1;
                    s32 vertex_id2 = gMPVertexLinks->vertex_links[line_id].vertex2 - 1;

                    s32 x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if (mpCollision_GetLineDistanceUD(vpdist_x, x1, gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y, x2, gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
                                {
                                    return TRUE;
                                }
                            }
                        }
                        else if (mpCollision_GetLineDistanceUD(vpdist_x, x1, gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y, x2, gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y) < vpdist_y)
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

// 0x800F9348
sb32 func_ovl2_800F9348(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ground];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.vec.f.x);
                vpdist_y = (position->y - room_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_y)
                {
                    s32 vertex_id1 = gMPVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                        y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = mpCollision_GetLineDistanceUD(vpdist_x, x1, y1, x2, y2);

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
                                    *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, UD_Up);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
sb32 func_ovl2_800F97BC(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_Ceil];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.vec.f.x);
                vpdist_y = (position->y - room_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_y)
                {
                    s32 vertex_id1 = gMPVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPVertexLinks[line_id].vertex2 - 1;

                    s32 x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                    s32 x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.x;
                    s32 y1;
                    s32 y2;

                    if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                                x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                                if ((x1 <= vpdist_x && x2 >= vpdist_x) || (x2 <= vpdist_x && x1 >= vpdist_x))
                                {
                                    break;
                                }
                            }
                        }
                        y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                        y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                        fpos = mpCollision_GetLineDistanceUD(vpdist_x, x1, y1, x2, y2);

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
                                    *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, UD_Down);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800F9C30
sb32 func_ovl2_800F9C30(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_RWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.vec.f.x);
                vpdist_y = (position->y - room_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_prev <= vpdist_x)
                {
                    s32 vertex_id1 = gMPVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                                y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                        x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = mpCollision_GetLineDistanceLR(vpdist_y, x1, y1, x2, y2);

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
                                    *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, UD_Up);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// Unused?
sb32 func_ovl2_800FA0A4(Vec3f *position, s32 *project_line_id, f32 *ga_dist, u32 *stand_coll_flags, Vec3f *angle)
{
    mpLineInfo *line_info;
    mpLineData *line_data;
    DObj *room_dobj;
    s32 i, j;
    f32 vpdist_x, vpdist_y;
    s32 line_id;
    f32 line_project_pos;
    f32 fpos;
    f32 gdist;

    line_project_pos = F32_MAX;
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[mpCollision_LineType_LWall];
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((line_data->line_count != 0) && (room_dobj->user_data.s < mpCollision_Yakumono_Off))
        {
            if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
            {
                // This runs when the corner of the character's map collision diamond collides with a wall?
                vpdist_x = (position->x - room_dobj->translate.vec.f.x);
                vpdist_y = (position->y - room_dobj->translate.vec.f.y);
            }
            else
            {
                vpdist_x = position->x;
                vpdist_y = position->y;
            }
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                if (gMPVertexInfo->vertex_info[line_id].coll_pos_next >= vpdist_x)
                {
                    s32 vertex_id1 = gMPVertexLinks[line_id].vertex1;
                    s32 vertex_id2 = gMPVertexLinks[line_id].vertex2 - 1;

                    s32 y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                    s32 y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + vertex_id2]].pos.y;
                    s32 x1;
                    s32 x2;

                    if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                    {
                        if (vertex_id2 != 1)
                        {
                            for (j = 0; j < vertex_id2; j++, vertex_id1++)
                            {
                                y1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.y;
                                y2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.y;

                                if ((y1 <= vpdist_y && y2 >= vpdist_y) || (y2 <= vpdist_y && y1 >= vpdist_y))
                                {
                                    break;
                                }
                            }
                        }
                        x1 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].pos.x;
                        x2 = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1 + 1]].pos.x;

                        fpos = mpCollision_GetLineDistanceLR(vpdist_y, x1, y1, x2, y2);

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
                                    *stand_coll_flags = gMPVertexData->vpos[gMPVertexID->vertex_id[vertex_id1]].vertex_flags;
                                }
                                if (angle != NULL)
                                {
                                    mpCollision_GetUDAngle(angle, x1, y1, x2, y2, UD_Down);
                                }
                                line_project_pos = ABSF(gdist);
                            }
                        }
                    }
                }
            }
        }
    }
    if (line_project_pos == F32_MAX)
    {
        return FALSE;
    }
    else return TRUE;
}

// 0x800FA518
s32 mpCollision_GetVertexCountLineID(s32 line_id)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetNbVertex() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetNbVertex() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return gMPVertexLinks[line_id].vertex2;
}

// 0x800F15E8
void mpCollision_GetVertexPositionID(s32 line_id, s32 vertex_id, Vec3f *pos)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetVertex() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetVertex() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    pos->x = gMPVertexData->vpos[gMPVertexID->vertex_id[gMPVertexLinks[line_id].vertex1 + vertex_id]].pos.x;
    pos->y = gMPVertexData->vpos[gMPVertexID->vertex_id[gMPVertexLinks[line_id].vertex1 + vertex_id]].pos.y;
    pos->z = 0.0F;

    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s != mpCollision_Yakumono_None))
    {
        pos->x += room_dobj->translate.vec.f.x;
        pos->y += room_dobj->translate.vec.f.y;
    }
}

// 0x800FA7B8
void mpCollision_GetSpeedLineID(s32 line_id, Vec3f *speed)
{
    DObj *room_dobj;
    u8 room_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetSpeedId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_id = gMPVertexInfo->vertex_info[line_id].room_id;

    room_dobj = gMPRooms->room_dobj[room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetSpeedId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    *speed = gMPDynamicCollisions[room_id];
}

// 0x800FA8A4
s32 mpCollision_GetLineTypeID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;
    u8 room_id;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetKindId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s == mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetKindId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->line_type;
}

// 0x800FA964
s32 mpCollision_GetEdgeUnderRLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderRId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderRId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAA24
s32 mpCollision_GetEdgeUnderLLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderLId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUnderLId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAAE4
s32 mpCollision_GetEdgeUpperRLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperRId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperRId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FABA4
s32 mpCollision_GetEdgeUpperLLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperLId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeUpperLId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAC64
s32 mpCollision_GetEdgeRightULineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightUId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightUId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAD24
s32 mpCollision_GetEdgeRightDLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightDId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeRightDId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FADE4
s32 mpCollision_GetEdgeLeftULineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftUId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftUId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_psign_id;
}

// 0x800FAEA4
s32 mpCollision_GetEdgeLeftDLineID(s32 line_id)
{
    DObj *room_dobj;
    mpVertexInfo *vertex_info;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftDId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    vertex_info = &gMPVertexInfo->vertex_info[line_id];
    room_dobj = gMPRooms->room_dobj[vertex_info->room_id];

    if (room_dobj->user_data.s >= mpCollision_Yakumono_Off)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetEdgeLeftDId() no collision\n");
            smCrashPrintGObjStatus();
        }
    }
    return vertex_info->edge_nsign_id;
}

// 0x800FAF64
void mpCollision_GetPlayerMPointPosition(s32 player, Vec3f *pos)
{
    if (!gMPGeometry->mpoint_count)
    {
        pos->x = pos->y = pos->z = 0.0F;
    }
    else
    {
        s32 i, index = player;

        for (i = 0; i < gMPGeometry->mpoint_count; i++)
        {
            if (index == gMPPoints->mpoints[i].mpoint_kind)
            {
                pos->x = gMPPoints->mpoints[i].pos.x;
                pos->y = gMPPoints->mpoints[i].pos.y;
                pos->z = 0;

                break;
            }
        }
    }
}

// 0x800FB010
void mpCollision_AllocVertexInfo(void)
{
    gMPVertexInfo = gsMemoryAlloc(gMPLineCount * sizeof(mpVertexInfo), 0x8);
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

    line_info = gMPGeometry->line_info;

    for (i = l = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];
        room_id = line_info->room_id;

        for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
        {
            for (index = line_data[j].group_id, line_id = 0; line_id < line_data[j].line_count; line_id++, index++)
            {
                mpVertexLinks *vlinks = &gMPVertexLinks[index];

                vfar = vnear = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMPVertexData->vpos[gMPVertexID->vertex_id[vlinks->vertex1]].pos.y:
                                                                             gMPVertexData->vpos[gMPVertexID->vertex_id[vlinks->vertex1]].pos.x;

                for (k = vlinks->vertex1 + 1; k < (vlinks->vertex1 + vlinks->vertex2); k++)
                {
                    // There are various ways to fake-match this function (e.g. do {} while (0), if(1), if(!gMPVertexData->vpos) right where this comment is)...

                    vp2 = (j < ARRAY_COUNT(line_info->line_data) / 2) ? gMPVertexData->vpos[gMPVertexID->vertex_id[k]].pos.y:
                                                                        gMPVertexData->vpos[gMPVertexID->vertex_id[k]].pos.x;

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
                gMPVertexInfo->vertex_info[l].coll_pos_next = vfar;
                gMPVertexInfo->vertex_info[l].coll_pos_prev = vnear;
                gMPVertexInfo->vertex_info[l].room_id = room_id;

                l++;
            }
        }
    }
}

// 0x800FB2A0
void mpCollision_InitLineTypesAll(void)
{
    s32 line_type, line_id;

    for (line_type = 0; line_type < ARRAY_COUNT(gMPLineTypeGroups); line_type++)
    {
        for (line_id = 0; line_id < gMPLineTypeGroups[line_type].line_count; line_id++)
        {
            gMPVertexInfo->vertex_info[gMPLineTypeGroups[line_type].line_id[line_id]].line_type = line_type;
        }
    }
}

// 0x800FB31C
void func_ovl2_800FB31C(void)
{
    s32 line_id;
    s32 line_next;
    s32 line_prev;
    s32 i;
    sb32 unk_bool;
    s32 vertex_id1;
    s32 vertex_id2;
    s32 vid;
    s32 vtemp1, vtemp2;

    for (i = 0; i < gMPLineCount; i++)
    {
        line_next = -1;
        line_prev = -1;

        unk_bool = FALSE;

        vtemp1 = gMPVertexLinks[i].vertex1;

        vertex_id1 = gMPVertexID->vertex_id[vtemp1];
        vertex_id2 = gMPVertexID->vertex_id[vtemp1 + gMPVertexLinks[i].vertex2 - 1];

        for (line_id = 0; line_id < gMPLineCount; line_id++)
        {
            if (i != line_id)
            {
                vtemp2 = gMPVertexLinks[line_id].vertex1;

                vid = vtemp2 + gMPVertexLinks[line_id].vertex2 - 1;

                if ((vertex_id1 == gMPVertexID->vertex_id[vtemp2]) || (vertex_id1 == gMPVertexID->vertex_id[vid]))
                {
                    line_prev = line_id;
                }
                if ((vertex_id2 == gMPVertexID->vertex_id[vtemp2]) || (vertex_id2 == gMPVertexID->vertex_id[vid]))
                {
                    line_next = line_id;
                }
            }
            continue;
        }
        switch (gMPVertexInfo->vertex_info[i].line_type)
        {
        default:
            break;

        case mpCollision_LineType_Ground:
        case mpCollision_LineType_Ceil:
            if (gMPVertexData->vpos[vertex_id2].pos.x < gMPVertexData->vpos[vertex_id1].pos.x)
            {
                unk_bool = TRUE;
            }
            break;

        case mpCollision_LineType_RWall:
        case mpCollision_LineType_LWall:
            if (gMPVertexData->vpos[vertex_id2].pos.y < gMPVertexData->vpos[vertex_id1].pos.y)
            {
                unk_bool = TRUE;
            }
            break;
        }
        if (unk_bool != FALSE)
        {
            gMPVertexInfo->vertex_info[i].edge_psign_id = line_prev;
            gMPVertexInfo->vertex_info[i].edge_nsign_id = line_next;
        }
        else
        {
            gMPVertexInfo->vertex_info[i].edge_psign_id = line_next;
            gMPVertexInfo->vertex_info[i].edge_nsign_id = line_prev;
        }
        continue;
    }
}

// 0x800FB554
void func_ovl2_800FB554(void)
{
    func_ovl2_800FB04C();
    mpCollision_InitLineTypesAll();
    func_ovl2_800FB31C();
}

// 0x800FB584
void mpCollision_AllocMapRooms(DObjDesc *gr_room)
{
    s32 room_count;
    s32 i;

    for (room_count = 0; gr_room->index != 0x12; room_count++)
    {
        gr_room++;
    }
    gMPRooms = gsMemoryAlloc(room_count * sizeof(gMPRooms), 0x4);
    gMPDynamicCollisions = gsMemoryAlloc(room_count * sizeof(Vec3f), 0x4);

    for (i = 0; i < room_count; i++)
    {
        gMPDynamicCollisions[i].x = gMPDynamicCollisions[i].y = gMPDynamicCollisions[i].z = 0.0F;
    }
    gMPRoomCount = room_count;
}

// 0x800FB808
void func_ovl2_800FB808(void)
{
    s32 index;
    mpDirection dir;
    mpLineData *line_data;
    mpLineInfo *line_info;
    DObj *room_dobj;
    mpVertexLinks *vlinks;
    s32 i, j, k, l;

    dir = gMPEdgeBounds.d1;

    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((room_dobj->actor.p != NULL) || (room_dobj->user_data.s < mpCollision_Yakumono_Off && room_dobj->user_data.s != mpCollision_Yakumono_None))
        {
            f32 x = room_dobj->translate.vec.f.x, y = room_dobj->translate.vec.f.y;

            line_data = &line_info->line_data[0];

            for (j = 0; j < ARRAY_COUNT(line_info->line_data); j++)
            {
                for (index = line_data[j].group_id, k = 0; k < line_data[j].line_count; k++, index++)
                {
                    vlinks = &gMPVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        s32 vx = gMPVertexData->vpos[gMPVertexID->vertex_id[l]].pos.x + x;
                        s32 vy = gMPVertexData->vpos[gMPVertexID->vertex_id[l]].pos.y + y;

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
    gMPEdgeBounds.d2 = dir;
}

// 0x800FBA84
void func_ovl2_800FBA84(void)
{
    gMPEdgeBounds.d3.top      =   gMPEdgeBounds.d2.top      -   gMPEdgeBounds.d0.top;
    gMPEdgeBounds.d3.bottom   =   gMPEdgeBounds.d2.bottom   -   gMPEdgeBounds.d0.bottom;
    gMPEdgeBounds.d3.right    =   gMPEdgeBounds.d2.right    -   gMPEdgeBounds.d0.right;
    gMPEdgeBounds.d3.left     =   gMPEdgeBounds.d2.left     -   gMPEdgeBounds.d0.left;
}

// 0x800FBAD0
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
        if (dobj == gMPRooms->room_info[i])
        {
            if ((dobj->user_data.s != mpCollision_Yakumono_On) && (dobj->user_data.s != mpCollision_Yakumono_Off))
            {
                temp_s2 = dobj->flags;

                func_8000BFE8(dobj);

                translate = dobj->translate.vec.f;

                func_8000CCBC(dobj);

                gMPDynamicCollisions[i].x = dobj->translate.vec.f.x - translate.x;
                gMPDynamicCollisions[i].y = dobj->translate.vec.f.y - translate.y;
                gMPDynamicCollisions[i].z = dobj->translate.vec.f.z - translate.z;

                if (temp_s2 == 0)
                {
                    if (dobj->flags != 0)
                    {
                        dobj->user_data.s = 4;
                    }
                }
                else if (dobj->flags == 0)
                {
                    dobj->user_data.s = 2;
                }
            }
            if (i < (gMPRoomCount - 1))
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

            mobj = mobj->next;
        }
        if (dobj->child != NULL)
        {
            dobj = dobj->child;
        }
        else if (dobj->sib_next != NULL)
        {
            dobj = dobj->sib_next;
        }
        else while (TRUE)
        {
            if (dobj->parent == DOBJ_PARENT_NULL)
            {
                dobj = NULL;

                break;
            }
            else if (dobj->parent->sib_next != NULL)
            {
                dobj = dobj->parent->sib_next;

                break;
            }
            else
            {
                dobj = dobj->parent;

                continue;
            }
        }
    }

    func_ovl2_800FB808();
    func_ovl2_800FBA84();

    gMPCollUpdateFrame++;
}

// 0x800FBCF8
void mpCollision_AdvanceUpdateFrame(GObj *ground_gobj)
{
    gMPCollUpdateFrame++;
}

// 0x800FBD14
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

    line_info = gMPGeometry->line_info;

    dir1.top = -65536.0F;
    dir1.right = -65536.0F;
    dir2.top = -65536.0F;
    dir2.right = -65536.0F;
    dir2.left = 65536.0F;
    dir2.bottom = 65536.0F;
    dir1.left = 65536.0F;
    dir1.bottom = 65536.0F;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        room_dobj = gMPRooms->room_dobj[line_info->room_id];

        if ((room_dobj->user_data.s != mpCollision_Yakumono_On) && (room_dobj->user_data.s != mpCollision_Yakumono_Off))
        {
            if (room_dobj->actor.p != NULL)
            {
                tx = room_dobj->translate.vec.f.x;
                ty = room_dobj->translate.vec.f.y;
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
                    vlinks = &gMPVertexLinks[index];

                    for (l = vlinks->vertex1; l < (vlinks->vertex1 + vlinks->vertex2); l++)
                    {
                        vx = gMPVertexData->vpos[gMPVertexID->vertex_id[l]].pos.x;
                        vy = gMPVertexData->vpos[gMPVertexID->vertex_id[l]].pos.y;

                        if (room_dobj->actor.p == NULL)
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
    // Slight WARNING: not sure about this. The member names in the struct don't seem to correspond to their suggested purpose...
    // ...or I just don't understand what is going on. Or both.
    gMPEdgeBounds.d0 = dir1;
    gMPEdgeBounds.d1 = dir2;
    gMPEdgeBounds.d2 = dir1;
    gMPEdgeBounds.d3.top = gMPEdgeBounds.d3.bottom = gMPEdgeBounds.d3.right = gMPEdgeBounds.d3.left = 0.0F;
}

// 0x800FC09C
s32 mpCollision_AllocLinesGetCountTotal(void)
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
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            line_count[j] += line_data->line_count;
        }
    }
    for (i = 0, line_total = 0; i < (ARRAY_COUNT(line_count) + ARRAY_COUNT(gMPLineTypeGroups)) / 2; i++)
    {
        gMPLineTypeGroups[i].line_count = line_count[i];

        line_total += line_count[i];

        if (line_count[i] != 0)
        {
            gMPLineTypeGroups[i].line_id = (u16*) gsMemoryAlloc(line_count[i] * sizeof(*gMPLineTypeGroups[i].line_id), sizeof(*gMPLineTypeGroups[i].line_id));
        }
    }
    return line_total;
}

// 0x800FC1A4
void mpCollision_InitLineIDsAll(void)
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
    line_info = gMPGeometry->line_info;

    for (i = 0; i < gMPGeometry->room_count; i++, line_info++)
    {
        line_data = &line_info->line_data[0];

        for (j = 0; j < (ARRAY_COUNT(line_count) + ARRAY_COUNT(line_info->line_data)) / 2; j++, line_data++)
        {
            for (line_id = line_data->group_id; line_id < (line_data->group_id + line_data->line_count); line_id++)
            {
                gMPLineTypeGroups[j].line_id[line_count[j]] = line_id;
                line_count[j]++;
            }
        }
    }
}

extern grFileInfo D_ovl2_8012C520[];

// 0x800FC284
void mpCollision_InitMapCollisionData(void)
{
    mpGeometryInfo *geometry_info;

    gGroundInfo = 
    (
        rdManagerGetFileWithExternHeap(
                                    D_ovl2_8012C520[gBattleState->gr_kind].size, gsMemoryAlloc(
                                                                                      rdManagerGetFileSize(D_ovl2_8012C520[gBattleState->gr_kind].size), 0x10))
        
                                                                                                                   + D_ovl2_8012C520[gBattleState->gr_kind].offset
    );

    gMPGeometry = gGroundInfo->map_geometry;
    geometry_info = gMPGeometry;

    if (geometry_info == NULL)
    {
        while (TRUE)
        {
            gsFatalPrintF("not found cll data!\n");
            smCrashPrintGObjStatus();
        }
    }
    gMPVertexData  = geometry_info->vertex_data;
    gMPVertexID    = geometry_info->vertex_id;
    gMPVertexLinks = geometry_info->vertex_links;
    gMPPoints      = geometry_info->mpoints;

    gMPLineCount = mpCollision_AllocLinesGetCountTotal();

    mpCollision_InitLineIDsAll();
    mpCollision_AllocVertexInfo();
    func_ovl2_800FB554();
    mpCollision_AllocMapRooms(gGroundInfo->gr_desc[1].dobj_desc);

    gMPLightColor.r = 0xFF;
    gMPLightColor.g = 0xFF;
    gMPLightColor.b = 0xFF;
    gMPLightColor.a = 0xFF;

    gMPLightAngleX = gGroundInfo->light_angle.x;
    gMPLightAngleY = gGroundInfo->light_angle.y;
}

// 0x800FC3E8
void mpCollision_SetPlayMusicID(void)
{
    gMusicIndexDefault = gGroundInfo->music_id;

    func_80020AB4(0, gMusicIndexDefault);

    gMusicIndexCurrent = gMusicIndexDefault;
}

// 0x800FC42C
void mpCollision_SetMusicID(void)
{
    gMusicIndexCurrent = gMusicIndexDefault = gGroundInfo->music_id;
}

// 0x800FC450
void mpCollision_ClearYakumonoAll(void)
{
    DObjDesc *dobj_desc = gGroundInfo->gr_desc[1].dobj_desc;
    s32 i;

    for (i = 0; dobj_desc->index != 0x12; i++, dobj_desc++)
    {
        gMPRooms->room_dobj[i]->user_data.s = mpCollision_Yakumono_None;
    }
    gMPCollUpdateFrame = 0;
}

// 0x800FC4A8
void mpCollision_SetYakumonoPosID(s32 line_id, Vec3f *yakumono_pos)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoPosId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[line_id];

    gMPDynamicCollisions[line_id].x = yakumono_pos->x - room_dobj->translate.vec.f.x;
    gMPDynamicCollisions[line_id].y = yakumono_pos->y - room_dobj->translate.vec.f.y;
    gMPDynamicCollisions[line_id].z = yakumono_pos->z - room_dobj->translate.vec.f.z;

    room_dobj->translate.vec.f.x = yakumono_pos->x;
    room_dobj->translate.vec.f.y = yakumono_pos->y;
    room_dobj->translate.vec.f.z = yakumono_pos->z;
}

// 0x800FC58C
void mpCollision_SetYakumonoOnID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoOnId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    gMPRooms->room_dobj[line_id]->user_data.s = mpCollision_Yakumono_On;
}

// 0x800FC604
void mpCollision_SetYakumonoOffID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpSetYakumonoOffId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    gMPRooms->room_dobj[line_id]->user_data.s = mpCollision_Yakumono_Off;
}

// 0x800FC67C
sb32 mpCollision_CheckExistLineID(s32 line_id)
{
    if (line_id == -1)
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetExistCollisionId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    if (line_id == -2)
    {
        return FALSE;
    }
    if (gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id]->user_data.s < mpCollision_Yakumono_Off)
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
            gsFatalPrintF("mpSetDObjNoId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    return gMPVertexInfo->vertex_info[line_id].room_id;
}

// 0x800FC7A4
s32 mpCollision_GetMPointCountKind(s32 mpoint_kind)
{
    s32 i, count;

    if (!gMPGeometry->mpoint_count)
    {
        return 0;
    }
    else for (i = count = 0; i < gMPGeometry->mpoint_count; i++)
    {
        if (mpoint_kind == gMPPoints->mpoints[i].mpoint_kind)
        {
            count++;
        }
    }
    return count;
}

// 0x800FC814
void mpCollision_GetMPointIDsKind(s32 mpoint_kind, s32 *mpoints)
{
    s32 i, count;

    if (gMPGeometry->mpoint_count)
    {
        for (i = count = 0; i < gMPGeometry->mpoint_count; i++)
        {
            if (mpoint_kind == gMPPoints->mpoints[i].mpoint_kind)
            {
                mpoints[count] = i;

                count++;
            }
        }
    }
}

// 0x800FC894
void mpCollision_GetMPointPositionID(s32 mpoint_kind, Vec3f *pos)
{
    pos->x = gMPPoints->mpoints[mpoint_kind].pos.x;
    pos->y = gMPPoints->mpoints[mpoint_kind].pos.y;
    pos->z = 0.0F;
}

// 0x800FC8EC
s32 mpCollision_GetLineCountType(s32 line_type)
{
    return gMPLineTypeGroups[line_type].line_count;
}

// 0x800FC900
void mpCollision_GetLineIDsTypeCount(s32 type, s32 count, s32 *line_ids)
{
    s32 i;

    for (i = 0; i < count; i++)
    {
        line_ids[i] = gMPLineTypeGroups[type].line_id[i];
    }
}

// 0x800FC9C8
u8 mpCollision_SetLightColorGetAlpha(Gfx **display_list)
{
    gDPSetEnvColor(display_list[0]++, gMPLightColor.r, gMPLightColor.g, gMPLightColor.b, gMPLightColor.a);

    return gMPLightColor.a;
}

// 0x800FCA18
sb32 mpCollision_CheckExistPlatformLineID(s32 line_id)
{
    DObj *room_dobj;

    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetCllFloatId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    room_dobj = gMPRooms->room_dobj[gMPVertexInfo->vertex_info[line_id].room_id];

    if ((room_dobj->user_data.s != mpCollision_Yakumono_None) || (room_dobj->actor.p != NULL))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800FCAC8
u16 mpCollision_GetVertexFlagsLineID(s32 line_id)
{
    if ((line_id == -1) || (line_id == -2))
    {
        while (TRUE)
        {
            gsFatalPrintF("mpGetAttrId() id = %d\n", line_id);
            smCrashPrintGObjStatus();
        }
    }
    return gMPVertexData->vpos[gMPVertexID->vertex_id[gMPVertexLinks[line_id].vertex1]].vertex_flags;
}
