#include <mp/mpcoll.h>

#include <ft/fighter.h>
#include <wp/weapon.h>
#include <it/item.h>
#include <gm/battle.h>

// 0x80130DE0
s32 gMapMultiWallCollideCount;

// 0x80130DE8 - Simultaneous wall collisions
s32 gMapMultiWallCollideLineIDs[5];

// 0x80130DFC - Position where latest wall collision was detected
f32 gMapLastWallCollidePosition;

// 0x80130E00 - Line ID of latest wall collided with
s32 gMapLastWallLineID;

// 0x80130E04
u32 gMapLastWallFlags;

// 0x80130E08
Vec3f gMapLastWallAngle;

// 0x80130E20
sb32(*gMapLinePassFunction)(GObj*);

// 0x800D9510
void mpObjectProc_ResetMultiWallCount(void)
{
    gMapMultiWallCollideCount = 0;
}

// 0x800D951C
void mpObjectProc_SetMultiWallLineID(s32 line_id)
{
    s32 i;

    for (i = 0; i < gMapMultiWallCollideCount; i++)
    {
        if (line_id == gMapMultiWallCollideLineIDs[i])
        {
            return;
        }
    }

    if (gMapMultiWallCollideCount != ARRAY_COUNT(gMapMultiWallCollideLineIDs))
    {
        gMapMultiWallCollideLineIDs[gMapMultiWallCollideCount] = line_id;
        gMapMultiWallCollideCount++;
    }
}

// 0x800D957C
void mpObjectProc_SetLastWallCollideLeft(void)
{
    gMapLastWallCollidePosition = -65536.0F;
}

// 0x800D9590
void mpObjectProc_SetLastWallCollideRight(void)
{
    gMapLastWallCollidePosition = 65536.0F;
}

// 0x800D95A4
void mpObjectProc_SetLastWallCollideStats(f32 pos, s32 line_id, u32 flags, Vec3f *angle)
{
    gMapLastWallCollidePosition = pos;
    gMapLastWallLineID          = line_id;
    gMapLastWallFlags           = flags;
    gMapLastWallAngle           = *angle;
}

// 0x800D95E0
void mpObjectProc_GetLastWallCollideStats(f32 *pos, s32 *line_id, u32 *flags, Vec3f *angle)
{
    *pos     = gMapLastWallCollidePosition;
    *line_id = gMapLastWallLineID;
    *flags   = gMapLastWallFlags;
    *angle   = gMapLastWallAngle;
}

// 0x800D9628
sb32 mpObjectProc_CheckCeilEdgeCollisionLeft(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = mpCollision_GetEdgeUpperRLineID(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->top;
    a.x = translate->x + object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((mpCollision_CheckLWallLineCollisionSame(&b, &a, NULL, &sp2C, NULL, NULL) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D96D8
void mpObjectProc_CeilEdgeAdjustLeft(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f object_pos;
    f32 ceil_dist;

    object_pos.x = translate->x + object_coll->width;
    sp3C.x = object_pos.x;

    object_pos.y = translate->y + object_coll->center;
    sp3C.y = object_pos.y;

    sp3C.x += (2.0F * (coll_data->ceil_angle.y * object_coll->width));
    sp3C.y += (2.0F * (-coll_data->ceil_angle.x * object_coll->width));

    if (mpCollision_CheckLWallLineCollisionSame(&sp3C, &object_pos, &coll_data->line_collision_dist, NULL, NULL, NULL) != FALSE)
    {
        object_pos.x = coll_data->line_collision_dist.x - object_coll->width;
        object_pos.y = translate->y + object_coll->top;

        if (mpCollision_GetUUCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
        {
            translate->y += ceil_dist;
            translate->x = object_pos.x;
        }
    }
}

// 0x800D97F0
sb32 mpObjectProc_CheckCeilEdgeCollisionRight(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = mpCollision_GetEdgeUpperLLineID(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->top;
    a.x = translate->x - object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((mpCollision_CheckRWallLineCollisionSame(&b, &a, NULL, &sp2C, NULL, NULL) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D98A0
void mpObjectProc_CeilEdgeAdjustRight(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f object_pos;
    f32 ceil_dist;

    object_pos.x = translate->x - object_coll->width;
    sp3C.x = object_pos.x;

    object_pos.y = translate->y + object_coll->center;
    sp3C.y = object_pos.y;

    sp3C.x += (2.0F * (-coll_data->ceil_angle.y * object_coll->width));
    sp3C.y += (2.0F * (coll_data->ceil_angle.x * object_coll->width));

    if (mpCollision_CheckRWallLineCollisionSame(&sp3C, &object_pos, &coll_data->line_collision_dist, NULL, NULL, NULL) != 0)
    {
        object_pos.x = coll_data->line_collision_dist.x + object_coll->width;
        object_pos.y = translate->y + object_coll->top;

        if (mpCollision_GetUUCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
        {
            translate->y += ceil_dist;
            translate->x = object_pos.x;
        }
    }
}

// 0x800D99B8
void mpObjectProc_RunCeilEdgeAdjust(mpCollData *coll_data)
{
    if (mpObjectProc_CheckCeilEdgeCollisionLeft(coll_data) != FALSE)
    {
        mpObjectProc_CeilEdgeAdjustLeft(coll_data);
    }
    if (mpObjectProc_CheckCeilEdgeCollisionRight(coll_data) != FALSE)
    {
        mpObjectProc_CeilEdgeAdjustRight(coll_data);
    }
}

// 0x800D9A00
sb32 mpObjectProc_CheckGroundEdgeCollisionLeft(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = mpCollision_GetEdgeUnderLLineID(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->bottom;
    a.x = translate->x + object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((mpCollision_CheckLWallLineCollisionSame(&b, &a, NULL, &coll_data->ewall_line_id, NULL, NULL) != FALSE) && (sp2C != coll_data->ewall_line_id))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D9AB0
void mpObjectProc_GroundEdgeLeftAdjust(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;

    sp38.x = translate->x + object_coll->width;
    sp38.y = translate->y + object_coll->center;

    if (mpCollision_GetLRCommonLeft(coll_data->ewall_line_id, &sp38, NULL, NULL, NULL) != FALSE)
    {
        sp38.x = translate->x + object_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + object_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (-coll_data->ground_angle.y * object_coll->width));
        sp44.y += (2.0F * (coll_data->ground_angle.x * object_coll->width));

        if (mpCollision_CheckLWallLineCollisionSame(&sp44, &sp38, &coll_data->line_collision_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_collision_dist.x - object_coll->width;
            sp38.y = translate->y + object_coll->bottom;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
    else
    {
        mpCollision_GetUDEdgeUp(coll_data->ewall_line_id, &sp44);

        sp44.x -= 2.0F;
        sp38.x = sp44.x - (2.0F * object_coll->width);
        sp38.y = sp44.y - (2.0F * (object_coll->center - object_coll->bottom));

        if (mpCollision_CheckGroundLineCollisionSame(&sp44, &sp38, &coll_data->line_collision_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_collision_dist.x;
            sp38.y = translate->y;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
}

// 0x800D9CC0
sb32 mpObjectProc_CheckGroundEdgeCollisionRight(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = mpCollision_GetEdgeUnderRLineID(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + object_coll->bottom;
    a.x = translate->x - object_coll->width;
    a.y = translate->y + object_coll->center;

    if ((mpCollision_CheckRWallLineCollisionSame(&b, &a, NULL, &coll_data->ewall_line_id, NULL, NULL) != FALSE) && (sp2C != coll_data->ewall_line_id))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D9D70
void mpObjectProc_GroundEdgeRightAdjust(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 ground_dist;

    sp38.x = translate->x - object_coll->width;
    sp38.y = translate->y + object_coll->center;

    if (mpCollision_GetLRCommonRight(coll_data->ewall_line_id, &sp38, NULL, NULL, NULL) != FALSE)
    {
        sp38.x = translate->x - object_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + object_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (coll_data->ground_angle.y * object_coll->width));
        sp44.y += (2.0F * (-coll_data->ground_angle.x * object_coll->width));

        if (mpCollision_CheckRWallLineCollisionSame(&sp44, &sp38, &coll_data->line_collision_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_collision_dist.x + object_coll->width;
            sp38.y = translate->y + object_coll->bottom;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += ground_dist;
                translate->x = sp38.x;
            }
        }
    }
    else
    {
        func_ovl2_800F4690(coll_data->ewall_line_id, &sp44);

        sp44.x += 2.0F;
        sp44.x = sp38.x + (2.0F * object_coll->width);
        sp44.y = sp38.y - (2.0F * (object_coll->center - object_coll->bottom));

        if (mpCollision_CheckGroundLineCollisionSame(&sp44, &sp38, &coll_data->line_collision_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_collision_dist.x;
            sp38.y = translate->y;

            if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &sp38, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += ground_dist;
                translate->x = sp38.x;
            }
        }
    }
}

// 0x800D9F84
void mpObjectProc_RunGroundEdgeAdjust(mpCollData *coll_data)
{
    if (mpObjectProc_CheckGroundEdgeCollisionLeft(coll_data) != FALSE)
    {
        mpObjectProc_GroundEdgeLeftAdjust(coll_data);
    }
    if (mpObjectProc_CheckGroundEdgeCollisionRight(coll_data) != FALSE)
    {
        mpObjectProc_GroundEdgeRightAdjust(coll_data);
    }
}

// 0x800D9FCC
void mpObjectProc_SetCollProjectGroundID(mpCollData *coll_data) // Check if object is above ground while airborne
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp2C;

    sp2C.x = translate->x;
    sp2C.y = translate->y + object_coll->bottom;

    if (func_ovl2_800F9348(&sp2C, &coll_data->ground_line_id, &coll_data->ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) == FALSE)
    {
        coll_data->ground_line_id = -1;
    }
}

// 0x800DA034
sb32 mpObjectProc_UpdateMapProcMain(mpCollData *coll_data, sb32(*proc_coll)(mpCollData*, GObj*, u32), GObj *gobj, u32 flags)
{
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    f32 project_y;
    f32 project_x;
    f32 add_x;
    f32 add_y;
    f32 add_z;
    s32 i;
    s32 update_count;
    sb32 result;

    if (translate->x < pcurr->x)
    {
        project_x = -(translate->x - pcurr->x);
    }
    else project_x = translate->x - pcurr->x;

    if (translate->y < pcurr->y)
    {
        project_y = -(translate->y - pcurr->y);
    }
    else project_y = translate->y - pcurr->y;

    if ((project_x > 250.0F) || (project_y > 250.0F))
    {
        update_count = (project_y < project_x) ? (s32)(project_x / 250.0F) : (s32)(project_y / 250.0F);

        update_count++;

        add_x = coll_data->pos_speed.x / update_count;
        add_y = coll_data->pos_speed.y / update_count;
        add_z = coll_data->pos_speed.z / update_count;
    }
    else
    {
        update_count = 1;

        add_x = coll_data->pos_speed.x;
        add_y = coll_data->pos_speed.y;
        add_z = coll_data->pos_speed.z;
    }
    *translate = *pcurr;

    for (i = 0; (i < update_count) && (coll_data->is_coll_complete == FALSE); i++)
    {
        *pcurr = *translate;

        if (i == 0)
        {
            translate->x += coll_data->pos_speed.x + coll_data->vel_push.x;
            translate->y += coll_data->pos_speed.y + coll_data->vel_push.y;
            translate->z += coll_data->pos_speed.z + coll_data->vel_push.z;
        }
        translate->x += add_x;
        translate->y += add_y;
        translate->z += add_z;

        result = proc_coll(coll_data, gobj, flags);
    }
    coll_data->coll_update_frame = gMapCollUpdateFrame;

    return result;
}

// 0x800DA294
sb32 mpObjectProc_CheckTestLWallCollision(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 is_collide_lwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    sb32 wall_collide;

    mpObjectProc_ResetMultiWallCount();

    ground_line_id = (mpCollision_CheckExistLineID(coll_data->ground_line_id) != FALSE) ? mpCollision_GetEdgeUnderLLineID(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x + p_object_coll->width;
    sp4C.y = pcurr->y + p_object_coll->center;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
                    
                                            ? 
    
    mpCollision_CheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
        
                                            : 
        
    mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
            
                                            ? 

    mpCollision_CheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 

                                            : 

    mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
            
                                            ? 

    mpCollision_CheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 

                                            :

    mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->bottom;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->top;
    sp40.x = translate->x + object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_LWALL;
    }
    return is_collide_lwall;
}

// 0x800DA658
void mpCollision_RunLWallCollision(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    f32 line_dist;
    s32 wall_line_id;
    f32 last_wall_x;

    mpObjectProc_SetLastWallCollideRight();

    for (i = 0; i < gMapMultiWallCollideCount; i++)
    {
        wall_line_id = gMapMultiWallCollideLineIDs[i];

        mpCollision_GetUDEdgeUp(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((sp94.x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, NULL, &line_dist, &wall_angle) != FALSE))
            {
                mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, line_dist, &wall_angle);
            }
        }
        else
        {
            mpCollision_GetUDEdgeDown(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((sp94.x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, NULL, &line_dist, &wall_angle) != FALSE))
                {
                    mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, line_dist, &wall_angle);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x + object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                vertex_count = mpCollision_GetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollision_GetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + object_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->center))
                        {
                            last_wall_x = vertex_pos.x - (((vertex_pos.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + object_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->top))
                        {
                            last_wall_x = vertex_pos.x - ((((translate->y + object_coll->top) - vertex_pos.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        next:
                            if ((last_wall_x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &vertex_pos, NULL, &line_dist, &wall_angle) != FALSE))
                            {
                                mpObjectProc_SetLastWallCollideStats(last_wall_x, wall_line_id, line_dist, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpObjectProc_GetLastWallCollideStats(&last_wall_x, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x > last_wall_x)
    {
        translate->x = last_wall_x;
    }
}

// 0x800DAAA8
sb32 mpObjectProc_CheckTestRWallCollision(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 is_collide_rwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    sb32 wall_collide;

    mpObjectProc_ResetMultiWallCount();

    ground_line_id = (mpCollision_CheckExistLineID(coll_data->ground_line_id) != FALSE) ? mpCollision_GetEdgeUnderRLineID(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x - p_object_coll->width;
    sp4C.y = pcurr->y + p_object_coll->center;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
            
                                            ? 

    mpCollision_CheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
            
                                            : 

    mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
            
                                            ? 
            
    mpCollision_CheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL)
            
                                            : 
    
    mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

        wall_collide = (coll_data->coll_update_frame != gMapCollUpdateFrame) 
            
                                            ? 
            
    mpCollision_CheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
            
                                            : 
            
    mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->bottom;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + object_coll->top;
    sp40.x = translate->x - object_coll->width;
    sp40.y = translate->y + object_coll->center;

    if ((mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_RWALL;
    }
    return is_collide_rwall;
}

// 0x800DAE6C
void mpObjectProc_RunRWallCollision(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    u32 line_dist;
    s32 wall_line_id;
    f32 last_wall_x;

    mpObjectProc_SetLastWallCollideLeft();

    for (i = 0; i < gMapMultiWallCollideCount; i++)
    {
        wall_line_id = gMapMultiWallCollideLineIDs[i];

        func_ovl2_800F4690(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((gMapLastWallCollidePosition < sp94.x) && (mpCollision_GetLRCommonRight(wall_line_id, &sp94, NULL, &line_dist, &wall_angle) != FALSE))
            {
                mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, line_dist, &wall_angle);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((gMapLastWallCollidePosition < sp94.x) && (mpCollision_GetLRCommonRight(wall_line_id, &sp94, NULL, &line_dist, &wall_angle) != FALSE))
                {
                    mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, line_dist, &wall_angle);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x - object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &line_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, line_dist, &wall_angle);
                    }
                }
                vertex_count = mpCollision_GetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollision_GetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + object_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->center))
                        {
                            last_wall_x = vertex_pos.x + (((vertex_pos.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + object_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->top))
                        {
                            last_wall_x = vertex_pos.x + ((((translate->y + object_coll->top) - vertex_pos.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        next:
                            if ((gMapLastWallCollidePosition < last_wall_x) && (mpCollision_GetLRCommonRight(wall_line_id, &vertex_pos, NULL, &line_dist, &wall_angle) != FALSE))
                            {
                                mpObjectProc_SetLastWallCollideStats(last_wall_x, wall_line_id, line_dist, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpObjectProc_GetLastWallCollideStats(&last_wall_x, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (translate->x < last_wall_x)
    {
        translate->x = last_wall_x;
    }
}

// 0x800DB2BC
sb32 mpObjectProc_CheckTestGroundCollisionNew(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    s32 wall_line_id;
    Vec3f object_pos;
    s32 unused;
    sb32 is_wall_edge;
    f32 ground_dist;

    coll_data->coll_mask_stat &= ~MPCOLL_KIND_GROUND;

    object_pos.x = translate->x;
    object_pos.y = translate->y + coll_data->object_coll.bottom;

    if (mpCollision_CheckExistLineID(coll_data->ground_line_id) == FALSE)
    {
        mpObjectProc_SetCollProjectGroundID(coll_data);

        return FALSE;
    }
    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;

        coll_data->ground_dist = 0.0F;
        coll_data->coll_mask_stat |= MPCOLL_KIND_GROUND;

        return TRUE;
    }
    is_wall_edge = FALSE;

    mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        wall_line_id = mpCollision_GetEdgeUnderLLineID(coll_data->ground_line_id);

        if ((wall_line_id != -1) && (mpCollision_GetLineTypeID(wall_line_id) == mpCollision_LineType_RWall))
        {
            is_wall_edge = TRUE;
        }
    }
    else
    {
        mpCollision_GetLREdgeRight(coll_data->ground_line_id, &object_pos);

        wall_line_id = mpCollision_GetEdgeUnderRLineID(coll_data->ground_line_id);

        if ((wall_line_id != -1) && (mpCollision_GetLineTypeID(wall_line_id) == mpCollision_LineType_LWall))
        {
            is_wall_edge = TRUE;
        }
    }
    translate->y = object_pos.y - coll_data->object_coll.bottom;

    if (is_wall_edge != FALSE)
    {
        translate->x = object_pos.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_mask_stat |= MPCOLL_KIND_GROUND;
        coll_data->ground_dist = 0.0F;

        return TRUE;
    }
    mpObjectProc_SetCollProjectGroundID(coll_data);

    return FALSE;
}

// 0x800DB474
sb32 mpObjectProc_CheckTestGroundCollision(mpCollData *coll_data, s32 line_id)
{
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 is_collide_ground;
    Vec3f sp4C;
    Vec3f sp40;
    s32 ground_line_id;
    u32 ground_flags;
    Vec3f ground_angle;

    sp4C.x = coll_data->pos_curr.x;
    sp4C.y = coll_data->pos_curr.y + p_object_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

                    is_collide_ground
                              
                            =

        (coll_data->coll_update_frame != gMapCollUpdateFrame)

                            ?

    mpCollision_CheckGroundLineCollisionDiff(&sp4C, &sp40, &coll_data->line_collision_dist, &ground_line_id, &ground_flags, &ground_angle)

                            :

    mpCollision_CheckGroundLineCollisionSame(&sp4C, &sp40, &coll_data->line_collision_dist, &ground_line_id, &ground_flags, &ground_angle);

    if ((is_collide_ground != FALSE) && (ground_line_id != line_id))
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_GROUND;
        coll_data->ground_line_id = ground_line_id;
        coll_data->ground_flags = ground_flags;
        coll_data->ground_angle = ground_angle;

        return TRUE;
    }
    else return FALSE;
}

// 0x800DB590
sb32 mpObjectProc_CheckTestLCliffCollision(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp48;
    Vec3f object_pos;
    u32 ground_flags;
    s32 is_collide_ground;

    if (*coll_data->p_lr != LR_Right)
    {
        return FALSE;
    }

    sp48.x = pcurr->x + cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    object_pos.x = translate->x + cliffcatch_coll->x;
    object_pos.y = translate->y + cliffcatch_coll->y;

               is_collide_ground

                       =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                       ?

    mpCollision_CheckGroundLineCollisionDiff(&sp48, &object_pos, &coll_data->line_collision_dist, &coll_data->cliff_id, &ground_flags, NULL)

                       :

    mpCollision_CheckGroundLineCollisionSame(&sp48, &object_pos, &coll_data->line_collision_dist, &coll_data->cliff_id, &ground_flags, NULL);


    if ((is_collide_ground != FALSE) && (ground_flags & MPCOLL_VERTEX_CLL_CLIFF) && ((ground_flags & MPCOLL_VERTEX_MAT_MASK) != mpCollision_Material_4))
    {
        mpCollision_GetLREdgeLeft(coll_data->cliff_id, &object_pos);

        if ((coll_data->line_collision_dist.x - object_pos.x) < 800.0F)
        {
            coll_data->coll_mask_curr |= MPCOLL_KIND_LCLIFF;
            coll_data->coll_mask_stat |= MPCOLL_KIND_LCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DB6F0
sb32 mpObjectProc_CheckTestRCliffCollision(mpCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp48;
    Vec3f object_pos;
    u32 ground_flags;
    s32 is_collide_ground;

    if (*coll_data->p_lr != LR_Left)
    {
        return FALSE;
    }

    sp48.x = pcurr->x - cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    object_pos.x = translate->x - cliffcatch_coll->x;
    object_pos.y = translate->y + cliffcatch_coll->y;

               is_collide_ground

                       =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                       ?

    mpCollision_CheckGroundLineCollisionDiff(&sp48, &object_pos, &coll_data->line_collision_dist, &coll_data->cliff_id, &ground_flags, NULL)

                       :

    mpCollision_CheckGroundLineCollisionSame(&sp48, &object_pos, &coll_data->line_collision_dist, &coll_data->cliff_id, &ground_flags, NULL);

    if ((is_collide_ground != FALSE) && (ground_flags & MPCOLL_VERTEX_CLL_CLIFF))
    {
        mpCollision_GetLREdgeRight(coll_data->cliff_id, &object_pos);

        if ((object_pos.x - coll_data->line_collision_dist.x) < 800.0F)
        {
            coll_data->coll_mask_curr |= MPCOLL_KIND_RCLIFF;
            coll_data->coll_mask_stat |= MPCOLL_KIND_RCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DB838
sb32 mpObjectProc_CheckTestLWallCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp54;
    Vec3f sp48;
    sb32 is_collide_lwall;
    s32 test_line_id;
    s32 ud_line_id;
    s32 edge_line_id;
    u32 ground_flags;
    s32 line_collide;

    is_collide_lwall = FALSE;

    coll_data->coll_mask_unk &= ~MPCOLL_KIND_LWALL;
    coll_data->coll_mask_stat &= ~MPCOLL_KIND_LWALL;

    mpObjectProc_ResetMultiWallCount();

    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                          line_collide

                                =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                ?

    mpCollision_CheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                                :

    mpCollision_CheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->bottom;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                            ?

    mpCollision_CheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                            :

    mpCollision_CheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->top;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                        ?

    mpCollision_CheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollision_CheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->bottom;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (mpCollision_CheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->top;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (mpCollision_CheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                        ?

    mpCollision_CheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        edge_line_id = mpCollision_GetEdgeUpperLLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_LWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->top;

                                  line_collide

                                        =

                    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                        ?

                mpCollision_CheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                        :

                mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->top;
                    sp48.x = translate->x + object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpObjectProc_SetMultiWallLineID(edge_line_id);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x + p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x + object_coll->width;
    sp48.y = translate->y + object_coll->center;

                       line_collide

                            =

        (coll_data->coll_update_frame != gMapCollUpdateFrame)

                            ?

    mpCollision_CheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL)

                            :

    mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL);

    if ((line_collide != FALSE) && !(ground_flags & MPCOLL_VERTEX_CLL_PASS)) // 0x4000
    {
        edge_line_id = mpCollision_GetEdgeUnderLLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_LWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->bottom;

                               line_collide

                                    =

                (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                    ?

                mpCollision_CheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                    :

                mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->bottom;
                    sp48.x = translate->x + object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpObjectProc_SetMultiWallLineID(edge_line_id);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_LWALL;
    }
    return is_collide_lwall;
}

// 0x800DBF58
void mpObjectProc_RunLWallCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    f32 wall_dist;
    s32 wall_line_id;
    f32 last_wall_x;

    mpObjectProc_SetLastWallCollideRight();

    for (i = 0; i < gMapMultiWallCollideCount; i++)
    {
        wall_line_id = gMapMultiWallCollideLineIDs[i];

        mpCollision_GetUDEdgeUp(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((sp94.x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, NULL, &wall_dist, &wall_angle) != FALSE))
            {
                mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, wall_dist, &wall_angle);
            }
        }
        else
        {
            mpCollision_GetUDEdgeDown(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((sp94.x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, NULL, &wall_dist, &wall_angle) != FALSE))
                {
                    mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, wall_dist, &wall_angle);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x + object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (mpCollision_GetLRCommonLeft(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                vertex_count = mpCollision_GetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollision_GetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + object_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->center))
                        {
                            last_wall_x = vertex_pos.x - (((vertex_pos.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + object_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->top))
                        {
                            last_wall_x = vertex_pos.x - ((((translate->y + object_coll->top) - vertex_pos.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        next:
                            if ((last_wall_x < gMapLastWallCollidePosition) && (mpCollision_GetLRCommonLeft(wall_line_id, &vertex_pos, NULL, &wall_dist, &wall_angle) != FALSE))
                            {
                                mpObjectProc_SetLastWallCollideStats(last_wall_x, wall_line_id, wall_dist, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpObjectProc_GetLastWallCollideStats(&last_wall_x, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x > last_wall_x)
    {
        translate->x = last_wall_x;

        coll_data->coll_mask_stat |= MPCOLL_KIND_LWALL;
    }
    coll_data->coll_mask_unk |= MPCOLL_KIND_LWALL;
}

// 0x800DC3C8
sb32 mpObjectProc_CheckTestRWallCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp54;
    Vec3f sp48;
    sb32 is_collide_rwall;
    s32 test_line_id;
    s32 ud_line_id;
    s32 edge_line_id;
    u32 ground_flags;
    s32 line_collide;

    is_collide_rwall = FALSE;

    coll_data->coll_mask_unk &= ~MPCOLL_KIND_RWALL;
    coll_data->coll_mask_stat &= ~MPCOLL_KIND_RWALL;

    mpObjectProc_ResetMultiWallCount();

    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                          line_collide

                                =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                ?

    mpCollision_CheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                                :

    mpCollision_CheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->bottom;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                            ?

    mpCollision_CheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                            :

    mpCollision_CheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_object_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + object_coll->top;

                   line_collide

                        =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                        ?

    mpCollision_CheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollision_CheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->bottom;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (mpCollision_CheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + object_coll->top;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

    if (mpCollision_CheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpObjectProc_SetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                        ?

    mpCollision_CheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        edge_line_id = mpCollision_GetEdgeUpperRLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_RWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->top;

                                  line_collide

                                        =

                (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                        ?

                mpCollision_CheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                        :

                mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->top;
                    sp48.x = translate->x - object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((mpCollision_CheckCeilLineCollisionSame(&sp54, &sp48, 0, &ud_line_id, 0, 0) == 0) || (test_line_id != ud_line_id))
                    {
                        mpObjectProc_SetMultiWallLineID(edge_line_id);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x - p_object_coll->width;
    sp54.y = pcurr->y + p_object_coll->center;
    sp48.x = translate->x - object_coll->width;
    sp48.y = translate->y + object_coll->center;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMapCollUpdateFrame)

                            ?

    mpCollision_CheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL)

                            :

    mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL);

    if ((line_collide != FALSE) && !(ground_flags & MPCOLL_VERTEX_CLL_PASS))
    {
        edge_line_id = mpCollision_GetEdgeUnderRLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_RWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_object_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + object_coll->bottom;

                              line_collide

                                    =

                (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                    ?

                mpCollision_CheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                    :

                mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + object_coll->bottom;
                    sp48.x = translate->x - object_coll->width;
                    sp48.y = translate->y + object_coll->center;

                    if ((mpCollision_CheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpObjectProc_SetMultiWallLineID(edge_line_id);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_RWALL;
    }
    return is_collide_rwall;
}

// 0x800DCAE8
void mpObjectProc_RunRWallCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp94;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    f32 wall_dist;
    s32 wall_line_id;
    f32 last_wall_x;

    mpObjectProc_SetLastWallCollideLeft();

    for (i = 0; i < gMapMultiWallCollideCount; i++)
    {
        wall_line_id = gMapMultiWallCollideLineIDs[i];

        func_ovl2_800F4690(wall_line_id, &sp94);

        if (sp94.y < (translate->y + object_coll->bottom))
        {
            if ((gMapLastWallCollidePosition < sp94.x) && (mpCollision_GetLRCommonRight(wall_line_id, &sp94, NULL, &wall_dist, &wall_angle) != FALSE))
            {
                mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, wall_dist, &wall_angle);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &sp94);

            if ((translate->y + object_coll->top) < sp94.y)
            {
                if ((gMapLastWallCollidePosition < sp94.x) && (mpCollision_GetLRCommonRight(wall_line_id, &sp94, NULL, &wall_dist, &wall_angle) != FALSE))
                {
                    mpObjectProc_SetLastWallCollideStats(sp94.x, wall_line_id, wall_dist, &wall_angle);
                }
            }
            else
            {
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->bottom;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x - object_coll->width;
                sp94.y = translate->y + object_coll->center;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                sp94.x = translate->x;
                sp94.y = translate->y + object_coll->top;

                if (mpCollision_GetLRCommonRight(wall_line_id, &sp94, &last_wall_x, &wall_dist, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > gMapLastWallCollidePosition)
                    {
                        mpObjectProc_SetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_dist, &wall_angle);
                    }
                }
                vertex_count = mpCollision_GetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollision_GetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + object_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->center))
                        {
                            last_wall_x = vertex_pos.x + (((vertex_pos.y - (translate->y + object_coll->bottom)) * object_coll->width) / (object_coll->center - object_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + object_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + object_coll->top))
                        {
                            last_wall_x = vertex_pos.x + ((((translate->y + object_coll->top) - vertex_pos.y) * object_coll->width) / (object_coll->top - object_coll->center));

                        next:
                            if ((gMapLastWallCollidePosition < last_wall_x) && (mpCollision_GetLRCommonRight(wall_line_id, &vertex_pos, NULL, &wall_dist, &wall_angle) != FALSE))
                            {
                                mpObjectProc_SetLastWallCollideStats(last_wall_x, wall_line_id, wall_dist, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpObjectProc_GetLastWallCollideStats(&last_wall_x, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (translate->x < last_wall_x)
    {
        translate->x = last_wall_x;

        coll_data->coll_mask_stat |= MPCOLL_KIND_RWALL;
    }
    coll_data->coll_mask_unk |= MPCOLL_KIND_RWALL;
}

// 0x800DCF58
sb32 mpObjectProc_CheckTestCeilCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 unused;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 ceil_collide;
    f32 ceil_dist;
    s32 line_id;

    coll_data->coll_mask_stat &= ~MPCOLL_KIND_CEIL;

    sp4C.x = coll_data->pos_curr.x;
    sp4C.y = coll_data->pos_curr.y + p_object_coll->top;

    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->top;

    ceil_collide

        = 
    (coll_data->coll_update_frame != gMapCollUpdateFrame)

        ?

    mpCollision_CheckCeilLineCollisionDiff(&sp4C, &sp40, &coll_data->line_collision_dist, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle)

        :

    mpCollision_CheckCeilLineCollisionSame(&sp4C, &sp40, &coll_data->line_collision_dist, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle);

    if (ceil_collide != FALSE)
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_CEIL;

        return TRUE;
    }
    if (coll_data->coll_mask_unk & MPCOLL_KIND_LWALL)
    {
        line_id = mpCollision_GetEdgeRightULineID(coll_data->lwall_line_id);

        if ((line_id != -1) && (mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_Ceil) && (mpCollision_GetUUCommonDown(line_id, &sp40, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE) && (ceil_dist < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask_curr |= MPCOLL_KIND_CEIL;

            return TRUE;
        }
    }
    else if (coll_data->coll_mask_unk & MPCOLL_KIND_RWALL)
    {
        line_id = mpCollision_GetEdgeLeftULineID(coll_data->rwall_line_id);

        if ((line_id != -1) && (mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_Ceil) && (mpCollision_GetUUCommonDown(line_id, &sp40, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE) && (ceil_dist < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask_curr |= MPCOLL_KIND_CEIL;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DD160
void mpObjectProc_RunCeilCollisionAdjNew(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    s32 line_id;
    sb32 is_collide_ceil;
    f32 ceil_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + object_coll->top;

    if (mpCollision_GetUUCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
    {
        translate->y += ceil_dist;
        coll_data->coll_mask_stat |= MPCOLL_KIND_CEIL;

        return;
    }
    is_collide_ceil = FALSE;

    func_ovl2_800F4468(coll_data->ceil_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        line_id = mpCollision_GetEdgeUpperLLineID(coll_data->ceil_line_id);

        if ((line_id != -1) && (mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_RWall))
        {
            is_collide_ceil = TRUE;
        }
    }
    else
    {
        func_ovl2_800F4448(coll_data->ceil_line_id, &object_pos);

        line_id = mpCollision_GetEdgeUpperRLineID(coll_data->ceil_line_id);

        if ((line_id != -1) && (mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_LWall))
        {
            is_collide_ceil = TRUE;
        }
    }
    translate->y = object_pos.y - object_coll->top;

    if (is_collide_ceil != FALSE)
    {
        translate->x = object_pos.x;

        mpCollision_GetUUCommonDown(coll_data->ceil_line_id, &object_pos, NULL, &coll_data->ceil_flags, &coll_data->ceil_angle);

        coll_data->coll_mask_stat |= MPCOLL_KIND_CEIL;
    }
}

// 0x800DD2C8
sb32 mpObjectProc_CheckTestGroundCollisionAdjNew(mpCollData *coll_data, sb32(*proc_map)(GObj*), GObj *gobj)
{
    mpObjectColl *p_object_coll = coll_data->p_object_coll;
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_curr;
    Vec3f sp4C;
    Vec3f sp40;
    s32 line_id;
    f32 ground_dist;
    s32 var_v0;

    coll_data->coll_mask_stat &= ~MPCOLL_KIND_GROUND;

    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_object_coll->bottom;

    sp40.x = translate->x;
    sp40.y = translate->y + object_coll->bottom;

                                                                         var_v0 
                                                                            
                                                                            = 
                                        
                                                        (coll_data->coll_update_frame != gMapCollUpdateFrame)

                                                                            ?

    mpCollision_CheckGroundLineCollisionDiff(&sp4C, &sp40, &coll_data->line_collision_dist, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle)

                                                                            :

    mpCollision_CheckGroundLineCollisionSame(&sp4C, &sp40, &coll_data->line_collision_dist, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle);

    if ((var_v0 != 0) && (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id)) && ((proc_map == NULL) || (proc_map(gobj) != FALSE)))
    {
        coll_data->coll_mask_curr |= MPCOLL_KIND_GROUND;

        return TRUE;
    }
    if (coll_data->coll_mask_unk & MPCOLL_KIND_LWALL)
    {
        line_id = mpCollision_GetEdgeRightDLineID(coll_data->lwall_line_id);

        if (line_id != -1)
        {
            if ((mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_Ground) && (mpCollision_GetUUCommonUp(line_id, &sp40, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (ground_dist > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask_curr |= MPCOLL_KIND_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    else if (coll_data->coll_mask_unk & MPCOLL_KIND_RWALL)
    {
        line_id = mpCollision_GetEdgeLeftDLineID(coll_data->rwall_line_id);

        if (line_id != -1)
        {
            if ((mpCollision_GetLineTypeID(line_id) == mpCollision_LineType_Ground) && (mpCollision_GetUUCommonUp(line_id, &sp40, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (ground_dist > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask_curr |= MPCOLL_KIND_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

// 0x800DD578
sb32 mpObjectProc_RunGroundCollisionAdjNewNULL(mpCollData *coll_data)
{
    return mpObjectProc_CheckTestGroundCollisionAdjNew(coll_data, NULL, NULL);
}

// 0x800DD59C
void func_ovl2_800DD59C(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    f32 ground_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + object_coll->bottom;

    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;
    }
    else
    {
        mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &object_pos);

        if (object_pos.x <= translate->x)
        {
            mpCollision_GetLREdgeRight(coll_data->ground_line_id, &object_pos);
        }
        translate->y = object_pos.y - object_coll->bottom;
        translate->x = object_pos.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);
    }
    coll_data->coll_mask_stat |= MPCOLL_KIND_GROUND;
    coll_data->ground_dist = 0.0F;
}

// 0x800DD6A8
void func_ovl2_800DD6A8(mpCollData *coll_data)
{
    mpObjectColl *object_coll = &coll_data->object_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    s32 edge_line_id;
    s32 is_collide_ground;
    f32 ground_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + object_coll->bottom;

    if (mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;

        coll_data->coll_mask_stat |= MPCOLL_KIND_GROUND;
        coll_data->ground_dist = 0.0F;

        return;
    }
    is_collide_ground = FALSE;

    mpCollision_GetLREdgeLeft(coll_data->ground_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        edge_line_id = mpCollision_GetEdgeUnderLLineID(coll_data->ground_line_id);

        if ((edge_line_id != -1) && (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_RWall))
        {
            is_collide_ground = TRUE;
        }
    }
    else
    {
        mpCollision_GetLREdgeRight(coll_data->ground_line_id, &object_pos);

        edge_line_id = mpCollision_GetEdgeUnderRLineID(coll_data->ground_line_id);

        if ((edge_line_id != -1) && (mpCollision_GetLineTypeID(edge_line_id) == mpCollision_LineType_LWall))
        {
            is_collide_ground = TRUE;
        }
    }
    translate->y = object_pos.y - object_coll->bottom;

    if (is_collide_ground != FALSE)
    {
        translate->x = object_pos.x;

        mpCollision_GetUUCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_mask_stat |= MPCOLL_KIND_GROUND;
        coll_data->ground_dist = 0.0F;
    }
}

// 0x800DD820
sb32 mpObjectProc_CheckSetFighterCliffEdge(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f edge_pos;
    Vec3f sp4C;
    Vec3f angle;
    u32 flags;
    f32 ground_dist;

    if (mpCollision_CheckExistLineID(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollision_GetLREdgeLeft(ground_line_id, &edge_pos);

        if (translate->x <= edge_pos.x)
        {
            if ((fp->lr == LR_Left) && (fp->input.pl.stick_range.x > -60))
            {
                edge_pos.x += 40.0F;

                mpCollision_GetUUCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle);

                edge_pos.y += ground_dist;
                sp4C.x = object_coll->width + edge_pos.x;
                sp4C.y = (object_coll->center + edge_pos.y) - object_coll->bottom;

                if (mpCollision_CheckLWallLineCollisionSame(&edge_pos, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
                {
                    fp->lr = LR_Left;

                    goto setground;
                }
            }
        }
        else if ((fp->lr == LR_Right) && (fp->input.pl.stick_range.x < 60))
        {
            mpCollision_GetLREdgeRight(ground_line_id, &edge_pos);

            edge_pos.x -= 40.0F;

            mpCollision_GetUUCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle);

            edge_pos.y += ground_dist;
            sp4C.x = edge_pos.x - object_coll->width;
            sp4C.y = (object_coll->center + edge_pos.y) - object_coll->bottom;

            if (mpCollision_CheckRWallLineCollisionSame(&edge_pos, &sp4C, NULL, NULL, NULL, NULL) == FALSE)
            {
                fp->lr = LR_Right;

                goto setground;
            }
        }
    }
    return FALSE;

setground: // ???
    *translate = edge_pos; // This is what causes the infamous Dream Land teleport

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = angle;
    fp->coll_data.ground_dist = 0.0F;

    fp->coll_data.coll_mask_stat |= MPCOLL_VERTEX_CLL_CLIFF;

    return TRUE;
}

// 0x800DDA6C
sb32 mpObjectProc_CheckSetFighterEdge(GObj *fighter_gobj, s32 ground_line_id)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    mpObjectColl *object_coll = &fp->coll_data.object_coll;
    Vec3f *translate = fp->coll_data.p_translate;
    Vec3f edge_pos;
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f angle;
    u32 flags;
    f32 ground_dist;

    if (mpCollision_CheckExistLineID(ground_line_id) == FALSE)
    {
        return FALSE;
    }
    else
    {
        mpCollision_GetLREdgeLeft(ground_line_id, &edge_pos);

        if (translate->x <= edge_pos.x)
        {
            if (mpCollision_GetUUCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle));

            sp4C.x = edge_pos.x + 1.0F;
            sp4C.y = edge_pos.y + 1.0F;

            sp40.x = object_coll->width + edge_pos.x;
            sp40.y = (object_coll->center + edge_pos.y) - object_coll->bottom;

            if (mpCollision_CheckLWallLineCollisionSame(&sp4C, &sp40, NULL, NULL, NULL, NULL) == FALSE)
            {
                if (TRUE) goto setground;
            }
        }
        else
        {
            mpCollision_GetLREdgeRight(ground_line_id, &edge_pos);

            if (mpCollision_GetUUCommonUp(ground_line_id, &edge_pos, &ground_dist, &flags, &angle));

            sp4C.x = edge_pos.x - 1.0F;
            sp4C.y = edge_pos.y + 1.0F;

            sp40.x = edge_pos.x - object_coll->width;
            sp40.y = (object_coll->center + edge_pos.y) - object_coll->bottom;

            if (mpCollision_CheckRWallLineCollisionSame(&sp4C, &sp40, NULL, NULL, NULL, NULL) == FALSE)
            {
                if (TRUE) goto setground;
            }
        }
    }
    return FALSE;

setground: // Absolutely ridiculous match
    *translate = edge_pos;

    fp->coll_data.ground_line_id = ground_line_id;
    fp->coll_data.ground_flags = flags;
    fp->coll_data.ground_angle = angle;
    fp->coll_data.ground_dist = 0.0F;

    return TRUE;
}

// 0x800DDC50
sb32 mpObjectProc_RunFighterAllCollisions(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    s32 ground_line_id = coll_data->ground_line_id;
    sb32 sp20 = FALSE;

    if (mpObjectProc_CheckTestLWallCollision(coll_data) != FALSE)
    {
        mpCollision_RunLWallCollision(coll_data);

        coll_data->is_coll_complete = TRUE;
    }
    if (mpObjectProc_CheckTestRWallCollision(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollision(coll_data);

        coll_data->is_coll_complete = TRUE;
    }
    if (mpObjectProc_CheckTestGroundCollisionNew(coll_data) != FALSE)
    {
        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);

            sp20 = TRUE;
        }
    }
    else if (flags & MPCOLL_PROC_TYPE_CLIFFEDGE)
    {
        mpObjectProc_CheckSetFighterCliffEdge(fighter_gobj, ground_line_id);

        coll_data->is_coll_complete = TRUE;
    }
    else if (flags & MPCOLL_PROC_TYPE_STOPEDGE)
    {
        if (mpObjectProc_CheckSetFighterEdge(fighter_gobj, ground_line_id) != FALSE)
        {
            sp20 = TRUE;
        }
        else coll_data->is_coll_complete = TRUE;
    }
    else coll_data->is_coll_complete = TRUE;

    if (mpObjectProc_CheckTestGroundCollision(coll_data, ground_line_id) != FALSE)
    {
        func_ovl2_800DD59C(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);

            sp20 = TRUE;
        }
        coll_data->coll_mask_stat &= ~MPCOLL_VERTEX_CLL_CLIFF;
        coll_data->is_coll_complete = FALSE;
    }
    return sp20;
}

// 0x800DDDA8
sb32 ftMap_CheckGroundStanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DDDDC
sb32 ftMap_ProcFighterAirProcMap(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x800DDE1C
void ftMap_CheckGroundStopCliffEdge(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CLIFFEDGE);
}

// 0x800DDE50
void ftMap_CheckGroundStopEdge(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterAllCollisions, fighter_gobj, MPCOLL_PROC_TYPE_STOPEDGE);
}

// 0x800DDE84
sb32 ftMap_CheckGroundBreakEdgeProcMap(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    if (ftMap_CheckGroundStopEdge(fighter_gobj) == FALSE)
    {
        proc_map(fighter_gobj);

        return FALSE;
    }
    else return TRUE;
}

// 0x800DDEC4
void ftMap_CheckGroundBreakSetFall(GObj *fighter_gobj)
{
    ftMap_ProcFighterAirProcMap(fighter_gobj, ftCommon_Fall_SetStatus);
}

// 0x800DDEE8
void ftMap_CheckGroundEdgeOttottoOrFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (ftMap_CheckGroundStopCliffEdge(fighter_gobj) == FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            ftCommon_Ottotto_SetStatus(fighter_gobj);
        }
        else ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x800DDF44
void ftMap_CheckGroundStopEdgeFall(GObj *fighter_gobj)
{
    if (ftMap_CheckGroundStopEdge(fighter_gobj) == FALSE)
    {
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
}

// 0x800DDF74
sb32 func_ovl2_800DDF74(GObj *fighter_gobj, ftStruct *fp, ftAttributes *attributes, DObj *target_joint, Vec3f *vec)
{
    Vec3f sp64;
    Vec3f vec_translate;
    Vec3f sp4C;
    f32 sp48;
    DObj *joint;
    f32 tangent;
    u32 sp3C;
    f32 ternary;
    f32 translate_y;

    if (mpCollision_GetUUCommonUp(fp->coll_data.ground_line_id, vec, &sp48, &sp3C, &sp64) != FALSE)
    {
        translate_y = (vec->y + sp48) - DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    }
    else
    {
        mpCollision_GetLREdgeLeft(fp->coll_data.ground_line_id, &vec_translate);

        if (vec_translate.x < vec->x)
        {
            mpCollision_GetLREdgeRight(fp->coll_data.ground_line_id, &vec_translate);
        }
        translate_y = vec_translate.y - DObjGetStruct(fighter_gobj)->translate.vec.f.y;
    }

    ternary = ABSF(translate_y);

    if (ternary < 0.0001F)
    {
        return FALSE;
    }

    vec->y += translate_y;

    joint = DObjGetStruct(fighter_gobj);

    if (vec->y < joint->translate.vec.f.y)
    {
        ternary = ((joint->translate.vec.f.x < vec->x) ? -(joint->translate.vec.f.x - vec->x) : (joint->translate.vec.f.x - vec->x));

        tangent = DObjGetStruct(fighter_gobj)->translate.vec.f.y - ternary * tanf(attributes->unk_0x320);

        if (vec->y < tangent)
        {
            vec->y = tangent;
        }
    }

    sp4C.x = sp4C.y = sp4C.z = 0;

    ftParts_GetDObjWorldPosition(target_joint, &sp4C);

    if (vec->y > sp4C.y - attributes->unk_0x31C)
    {
        vec->y = sp4C.y - attributes->unk_0x31C;
    }
    return TRUE;
}

// 0x800DE150
void ftMap_UpdateSlopeContour(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *common_attrs = fp->attributes;
    DObj *joint;
    Vec3f sp30;
    f32 sp2C;

    if (fp->ground_or_air == GA_Ground)
    {
        if ((fp->coll_data.ground_line_id != -1) && (fp->coll_data.ground_line_id != -2) && (fp->hitlag_timer <= 0))
        {
            if (fp->slope_contour & 2)
            {
                joint = fp->joint[common_attrs->joint_index1];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, common_attrs->joint_float1, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, common_attrs, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joint[common_attrs->joint_index1], &sp30);
                    func_ovl2_800EBD08(fp->joint[common_attrs->joint_index1], common_attrs->joint_float1, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & 1)
            {
                joint = fp->joint[common_attrs->joint_index2];

                func_ovl2_800EBC0C(fp, &sp30, &sp2C, common_attrs->joint_float2, joint);

                if (func_ovl2_800DDF74(fighter_gobj, fp, common_attrs, joint, &sp30) != FALSE)
                {
                    func_ovl2_800EE018(fp->joint[common_attrs->joint_index2], &sp30);
                    func_ovl2_800EBD08(fp->joint[common_attrs->joint_index2], common_attrs->joint_float2, &sp30, sp2C);
                }
            }
            if (fp->slope_contour & 4)
            {
                DObjGetStruct(fighter_gobj)->rotate.vec.f.x = (atan2f(fp->coll_data.ground_angle.x, fp->coll_data.ground_angle.y) * fp->lr);
            }
        }
    }
    else return;
}

// 0x800DE324
void mpObjectProc_SetFighterProjectGroundID(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpObjectProc_SetCollProjectGroundID(&fp->coll_data);
}

// 0x800DE348
void ftMap_UpdateProjectGroundID(GObj *fighter_gobj)
{
    mpObjectProc_SetFighterProjectGroundID(fighter_gobj);
}

// 0x800DE368
void ftMap_SetFighterLandingVars(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->publicity_knockback != 0.0F)
    {
        if (fp->publicity_knockback >= 100.0F)
        {
            if 
            (
                (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x < (gMapEdgeBounds.d2.left + 450.0F)) || 
                (fp->joint[ftParts_Joint_TopN]->translate.vec.f.x > (gMapEdgeBounds.d2.right - 450.0F))
            )
            {
                func_ovl3_80164F70(fighter_gobj, fp->publicity_knockback);
            }   
        }
        fp->publicity_knockback = 0.0F;
    }
    switch (fp->ft_kind)
    {
    case Ft_Kind_Mario:
    case Ft_Kind_MetalMario:
    case Ft_Kind_PolyMario:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_Samus:
    case Ft_Kind_PolySamus:
        fp->fighter_vars.samus.charge_recoil = 0;
        return;

    case Ft_Kind_Luigi:
    case Ft_Kind_PolyLuigi:
        fp->fighter_vars.mario.is_expend_tornado = FALSE;
        break;

    case Ft_Kind_Captain:
    case Ft_Kind_PolyCaptain:
        fp->fighter_vars.captain.falcon_punch_unk = FALSE;
        break;

    case Ft_Kind_Purin:
    case Ft_Kind_PolyPurin:
        fp->fighter_vars.purin.unk_0x0 = FALSE;
        break;
    }
}

// 0x800DE45C
sb32 mpObjectProc_RunFighterSpecialCollisions(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    ftStruct *this_fp = ftGetStruct(fighter_gobj);
    GObj *cliffcatch_gobj;
    ftStruct *cliffcatch_fp;
    s32 unused;
    s32 sp24 = FALSE;
    s32 var_v0;

    if (mpObjectProc_CheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunLWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_CEIL)
        {
            mpObjectProc_RunCeilEdgeAdjust(coll_data);
        }
        if ((flags & MPCOLL_PROC_TYPE_CEILHEAVY) && (this_fp->phys_info.vel_air.y >= 30.0F))
        {
            coll_data->coll_mask_curr |= MPCOLL_KIND_CEILHEAVY;

            sp24 = TRUE;

            coll_data->is_coll_complete = TRUE;
        }
    }
                                         var_v0 
                             
                                            =
        
                            (flags & MPCOLL_PROC_TYPE_PASS) 

                                            ? 
        
    mpObjectProc_CheckTestGroundCollisionAdjNew(coll_data, gMapLinePassFunction, fighter_gobj) 
        
                                            :
        
                    mpObjectProc_RunGroundCollisionAdjNewNULL(coll_data);

    if (var_v0 != FALSE)
    {
        if (flags & MPCOLL_PROC_TYPE_UNK)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
            {
                mpObjectProc_RunGroundEdgeAdjust(coll_data);
            }
            else mpObjectProc_SetCollProjectGroundID(coll_data);
        }
        else
        {
            func_ovl2_800DD59C(coll_data);
            ftMap_SetFighterLandingVars(fighter_gobj);

            if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
            {
                mpObjectProc_RunGroundEdgeAdjust(coll_data);

                coll_data->is_coll_complete = TRUE;

                return TRUE;
            }
        }
    }
    else mpObjectProc_SetCollProjectGroundID(coll_data);

    if ((flags & MPCOLL_PROC_TYPE_CLIFF) && (this_fp->cliffcatch_wait == 0))
    {
        if ((mpObjectProc_CheckTestLCliffCollision(coll_data) != FALSE) || (mpObjectProc_CheckTestRCliffCollision(coll_data) != FALSE))
        {
            cliffcatch_gobj = gOMObjCommonLinks[omGObj_LinkIndex_Fighter];

            while (cliffcatch_gobj != NULL)
            {
                if (cliffcatch_gobj != fighter_gobj)
                {
                    cliffcatch_fp = ftGetStruct(cliffcatch_gobj);

                    if ((cliffcatch_fp->x190_flag_b7) && (this_fp->coll_data.cliff_id == cliffcatch_fp->coll_data.cliff_id) && (this_fp->lr == cliffcatch_fp->lr))
                    {
                        return sp24;
                    }
                    else goto next_gobj; // Bruh
                }
            next_gobj:
                cliffcatch_gobj = cliffcatch_gobj->group_gobj_next;
            }
            ftMap_SetFighterLandingVars(fighter_gobj);

            coll_data->is_coll_complete = TRUE;

            return TRUE;
        }
    }
    return sp24;
}

// 0x800DE6B0
sb32 ftMap_CheckAirLanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DE6E4
sb32 mpObjectProc_ProcFighterGroundProcMap(GObj *fighter_gobj, void(*proc_map)(GObj*))
{
    if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
    {
        proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x800DE724
sb32 mpObjectProc_ProcFighterEnvCatch(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_UNK);
}

// 0x800DE758
sb32 mpObjectProc_ProcFighterPass(GObj *fighter_gobj, sb32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gMapLinePassFunction = proc_map;

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_PASS);
}

// 0x800DE798
sb32 mpObjectProc_ProcFighterPassCliff(GObj *fighter_gobj, sb32(*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    gMapLinePassFunction = proc_map;

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_PASS | MPCOLL_PROC_TYPE_CLIFF);
}

// 0x800DE7D8
sb32 mpObjectProc_ProcFighterCliff(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CLIFF);
}

// Check if fighter becomes grounded, allow CliffCatch interrupt
sb32 mpObjectProc_ProcFighterCliffProcMap(GObj *fighter_gobj, void (*proc_map)(GObj*))
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);

            return TRUE;
        }
        else proc_map(fighter_gobj);

        return TRUE;
    }
    else return FALSE;
}

// 0x800DE87C
sb32 mpObjectProc_ProcFighterCeilHeavyCliff(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CEILHEAVY | MPCOLL_PROC_TYPE_CLIFF);
}

// 0x800DE8B0
sb32 mpObjectProc_ProcFighterCeilHeavy(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_RunFighterSpecialCollisions, fighter_gobj, MPCOLL_PROC_TYPE_CEILHEAVY);
}

// 0x800DE8E4
void ftMap_SetStatusWaitOrLanding(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->phys_info.vel_air.y > FTCOMMON_ATTACKAIR_SKIP_LANDING_VEL_Y_MAX)
    {
        ftCommon_Wait_SetStatus(fighter_gobj);
    }
    else ftCommon_Landing_SetStatus(fighter_gobj);
}

// 0x800DE934
void ftMap_CheckGroundSetWaitOrLanding(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterGroundProcMap(fighter_gobj, ftMap_SetStatusWaitOrLanding);
}

// 0x800DE958
void ftMap_CheckGroundEnvCatch(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterEnvCatch(fighter_gobj);
}

// 0x800DE978
void ftMap_CheckGroundCliffSetWaitOrLanding(GObj *fighter_gobj)
{
    mpObjectProc_ProcFighterCliffProcMap(fighter_gobj, ftMap_SetStatusWaitOrLanding);
}

// 0x800DE99C
void ftMap_CheckCliffGroundCeilStatus(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (mpObjectProc_ProcFighterCeilHeavyCliff(fighter_gobj) != FALSE)
    {
        if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_CLIFF_MASK)
        {
            ftCommon_CliffCatch_SetStatus(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            ftMap_SetStatusWaitOrLanding(fighter_gobj);
        }
        else if (fp->coll_data.coll_mask_curr & MPCOLL_KIND_CEILHEAVY) // Enter ceiling bonk if true?
        {
            ftCommon_StopCeil_SetStatus(fighter_gobj);
        }
    }
}

// 0x800DEA20
sb32 mpObjectProc_ProcFighterDamage(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    sb32 is_collide = FALSE;

    if (mpObjectProc_CheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunLWallCollisionAdjNew(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_KIND_LWALL) && (func_ovl0_800C7A84(&coll_data->pos_speed) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_speed, &coll_data->lwall_angle) > F_DEG_TO_RAD(110.0F))) // 1.9198622F
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_KIND_LWALL;

            is_collide = TRUE;

            coll_data->is_coll_complete = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_KIND_LWALL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_KIND_LWALL;
        }
    }
    if (mpObjectProc_CheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollisionAdjNew(coll_data);

        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_KIND_RWALL) && (func_ovl0_800C7A84(&coll_data->pos_speed) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_speed, &coll_data->rwall_angle) > F_DEG_TO_RAD(110.0F))) // 1.9198622F
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_KIND_RWALL;

            is_collide = TRUE;

            coll_data->is_coll_complete = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_KIND_RWALL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_KIND_RWALL;
        }
    }
    if (mpObjectProc_CheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_CEIL)
        {
            mpObjectProc_RunCeilEdgeAdjust(coll_data);
        }
        if (!(fp->status_vars.common.damage.coll_mask_prev & MPCOLL_KIND_CEIL) && (func_ovl0_800C7A84(&coll_data->pos_speed) > 30.0F) && (lbVector_Vec3fAngleDiff(&coll_data->pos_speed, &coll_data->ceil_angle) > F_DEG_TO_RAD(110.0F)))
        {
            fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_KIND_CEIL;

            is_collide = TRUE;

            coll_data->is_coll_complete = TRUE;
        }
        else if (!(coll_data->coll_mask_prev & MPCOLL_KIND_CEIL))
        {
            fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_KIND_CEIL;
        }
    }
    if (mpObjectProc_RunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        if (fp->hitlag_timer > 0)
        {
            func_ovl2_800DD6A8(coll_data);

            if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
            {
                mpObjectProc_RunGroundEdgeAdjust(coll_data);
            }
            else mpObjectProc_SetCollProjectGroundID(coll_data);

        }
        else
        {
            if (lbVector_Vec3fAngleDiff(&coll_data->pos_speed, &coll_data->ground_angle) > F_DEG_TO_RAD(110.0F))
            {
                func_ovl2_800DD59C(coll_data);
                ftMap_SetFighterLandingVars(fighter_gobj);

                if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
                {
                    mpObjectProc_RunGroundEdgeAdjust(coll_data);

                    fp->status_vars.common.damage.coll_mask_curr |= MPCOLL_KIND_GROUND;

                    is_collide = TRUE;

                    coll_data->is_coll_complete = TRUE;
                }
            }
            else
            {
                func_ovl2_800DD6A8(coll_data);

                if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
                {
                    mpObjectProc_RunGroundEdgeAdjust(coll_data);

                    if (!(coll_data->coll_mask_prev & MPCOLL_KIND_GROUND))
                    {
                        fp->status_vars.common.damage.coll_mask_ignore |= MPCOLL_KIND_GROUND;

                        fp->status_vars.common.damage.wall_collide_angle = coll_data->ground_angle;
                    }
                }
                else mpObjectProc_SetCollProjectGroundID(coll_data);
            }
        }
    }
    else mpObjectProc_SetCollProjectGroundID(coll_data);

    return is_collide;
}

// 0x800DEDAC
sb32 ftMap_CheckAllFighterDamage(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    fp->status_vars.common.damage.coll_mask_prev = fp->status_vars.common.damage.coll_mask_curr;
    fp->status_vars.common.damage.coll_mask_curr = 0;
    fp->status_vars.common.damage.coll_mask_ignore = 0;

    return mpObjectProc_UpdateMapProcMain(&fp->coll_data, mpObjectProc_ProcFighterDamage, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
}

// 0x800DEDF0
void ftMap_UpdateFighterGroundOrAir(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        if (ftMap_CheckAirLanding(fighter_gobj) != FALSE)
        {
            ftMap_SetGround(fp);
        }
    }
    else if (ftMap_CheckGroundStanding(fighter_gobj) == FALSE)
    {
        ftMap_SetAir(fp);
    }
}

// 0x800DEE54
void ftMap_SetStatusWaitOrFall(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    if (fp->ground_or_air == GA_Air)
    {
        ftCommon_Fall_SetStatus(fighter_gobj);
    }
    else ftCommon_Wait_SetStatus(fighter_gobj);
}

// 0x800DEE98
void ftMap_SetGround(ftStruct *fp)
{
    fp->phys_info.vel_ground.x = fp->phys_info.vel_air.x * fp->lr;

    fp->ground_or_air = GA_Ground;

    fp->jumps_used = 0;

    fp->stat_flags.is_ground_or_air = GA_Ground; // Ground/Air bool?
}

// 0x800DEEC8
void ftMap_SetAir(ftStruct *fp)
{
    fp->ground_or_air = GA_Air;

    fp->phys_info.vel_air.z = fp->joint[ftParts_Joint_TopN]->translate.vec.f.z = 0.0F;

    fp->jumps_used = 1;
}

// 0x800DEEF4
void mpObjectProc_ProcObjectCollisionDefault(mpCollData *coll_data, GObj *fighter_gobj, u32 flags)
{
    if (mpObjectProc_CheckTestLWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunLWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestRWallCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunRWallCollisionAdjNew(coll_data);
    }
    if (mpObjectProc_CheckTestCeilCollisionAdjNew(coll_data) != FALSE)
    {
        mpObjectProc_RunCeilCollisionAdjNew(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_CEIL)
        {
            mpObjectProc_RunCeilEdgeAdjust(coll_data);
        }
    }
    if (mpObjectProc_RunGroundCollisionAdjNewNULL(coll_data) != FALSE)
    {
        func_ovl2_800DD6A8(coll_data);

        if (coll_data->coll_mask_stat & MPCOLL_KIND_GROUND)
        {
            mpObjectProc_RunGroundEdgeAdjust(coll_data);
        }
    }
    else mpObjectProc_SetCollProjectGroundID(coll_data);
}

// 0x800DEFBC
void mpObjectProc_CopyCollDataStats(mpCollData *this_coll_data, Vec3f *pos, mpCollData *other_coll_data)
{
    this_coll_data->pos_curr = *pos;

    this_coll_data->p_object_coll = &other_coll_data->object_coll;
    this_coll_data->coll_mask_curr = 0;
    this_coll_data->coll_mask_unk = 0;
    this_coll_data->coll_mask_stat = 0;
    this_coll_data->is_coll_complete = FALSE;
    this_coll_data->coll_update_frame = other_coll_data->coll_update_frame;
}

// 0x800DEFF8
void mpObjectProc_ResetCollDataStats(mpCollData *coll_data)
{
    coll_data->p_object_coll = &coll_data->object_coll;

    coll_data->coll_update_frame = gMapCollUpdateFrame;
    coll_data->coll_mask_curr = 0;
}

// 0x800DF014
void ftMap_RunCollisionDefault(GObj *fighter_gobj, Vec3f *pos, mpCollData *coll_data)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);

    mpObjectProc_CopyCollDataStats(&fp->coll_data, pos, coll_data);
    mpObjectProc_ProcObjectCollisionDefault(&fp->coll_data, fighter_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpObjectProc_ResetCollDataStats(&fp->coll_data);
}

// 0x800DF058
void itMap_RunCollisionDefault(GObj *item_gobj, Vec3f *pos, mpCollData *coll_data)
{
    itStruct *ip = itGetStruct(item_gobj);

    mpObjectProc_CopyCollDataStats(&ip->coll_data, pos, coll_data);
    mpObjectProc_ProcObjectCollisionDefault(&ip->coll_data, item_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpObjectProc_ResetCollDataStats(&ip->coll_data);
}

// 0x800DF09C
void wpMap_RunCollisionDefault(GObj *weapon_gobj, Vec3f *pos, mpCollData *coll_data)
{
    wpStruct *wp = wpGetStruct(weapon_gobj);

    mpObjectProc_CopyCollDataStats(&wp->coll_data, pos, coll_data);
    mpObjectProc_ProcObjectCollisionDefault(&wp->coll_data, weapon_gobj, MPCOLL_PROC_TYPE_DEFAULT);
    mpObjectProc_ResetCollDataStats(&wp->coll_data);
}