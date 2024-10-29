#include <sys/obj.h>
#include <mp/map.h>

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80130DE0
s32 sMPProcessMultiWallCollidesNum;

// 0x80130DE4
s32 sMPProcessPad0x80130DE4;

// 0x80130DE8 - Simultaneous wall collisions
s32 sMPProcessMultiWallCollideLineIDs[5];

// 0x80130DFC - Position where latest wall collision was detected
f32 sMPProcessLastWallCollidePosition;

// 0x80130E00 - Line ID of latest wall collided with
s32 sMPProcessLastWallLineID;

// 0x80130E04
u32 sMPProcessLastWallFlags;

// 0x80130E08
Vec3f sMPProcessLastWallAngle;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D9510
void mpProcessResetMultiWallCount(void)
{
    sMPProcessMultiWallCollidesNum = 0;
}

// 0x800D951C
void mpProcessSetMultiWallLineID(s32 line_id)
{
    s32 i;

    for (i = 0; i < sMPProcessMultiWallCollidesNum; i++)
    {
        if (line_id == sMPProcessMultiWallCollideLineIDs[i])
        {
            return;
        }
    }

    if (sMPProcessMultiWallCollidesNum != ARRAY_COUNT(sMPProcessMultiWallCollideLineIDs))
    {
        sMPProcessMultiWallCollideLineIDs[sMPProcessMultiWallCollidesNum] = line_id;
        sMPProcessMultiWallCollidesNum++;
    }
}

// 0x800D957C
void mpProcessSetLastWallCollideLeft(void)
{
    sMPProcessLastWallCollidePosition = -65536.0F;
}

// 0x800D9590
void mpProcessSetLastWallCollideRight(void)
{
    sMPProcessLastWallCollidePosition = 65536.0F;
}

// 0x800D95A4
void mpProcessSetLastWallCollideStats(f32 pos, s32 line_id, u32 flags, Vec3f *angle)
{
    sMPProcessLastWallCollidePosition = pos;
    sMPProcessLastWallLineID          = line_id;
    sMPProcessLastWallFlags           = flags;
    sMPProcessLastWallAngle           = *angle;
}

// 0x800D95E0
void mpProcessGetLastWallCollideStats(f32 *pos, s32 *line_id, u32 *flags, Vec3f *angle)
{
    *pos     = sMPProcessLastWallCollidePosition;
    *line_id = sMPProcessLastWallLineID;
    *flags   = sMPProcessLastWallFlags;
    *angle   = sMPProcessLastWallAngle;
}

// 0x800D9628
sb32 mpProcessCheckCeilEdgeCollisionLeft(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = mpCollisionGetEdgeUpperRLineID(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + obj_coll->top;
    a.x = translate->x + obj_coll->width;
    a.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckLWallLineCollisionSame(&b, &a, NULL, &sp2C, NULL, NULL) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D96D8
void mpProcessCeilEdgeAdjustLeft(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f object_pos;
    f32 ceil_dist;

    object_pos.x = translate->x + obj_coll->width;
    sp3C.x = object_pos.x;

    object_pos.y = translate->y + obj_coll->center;
    sp3C.y = object_pos.y;

    sp3C.x += (2.0F * (coll_data->ceil_angle.y * obj_coll->width));
    sp3C.y += (2.0F * (-coll_data->ceil_angle.x * obj_coll->width));

    if (mpCollisionCheckLWallLineCollisionSame(&sp3C, &object_pos, &coll_data->line_coll_dist, NULL, NULL, NULL) != FALSE)
    {
        object_pos.x = coll_data->line_coll_dist.x - obj_coll->width;
        object_pos.y = translate->y + obj_coll->top;

        if (mpCollisionGetUDCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
        {
            translate->y += ceil_dist;
            translate->x = object_pos.x;
        }
    }
}

// 0x800D97F0
sb32 mpProcessCheckCeilEdgeCollisionRight(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C;
    s32 sp28;

    sp28 = mpCollisionGetEdgeUpperLLineID(coll_data->ceil_line_id);

    b.x = translate->x;
    b.y = translate->y + obj_coll->top;
    a.x = translate->x - obj_coll->width;
    a.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckRWallLineCollisionSame(&b, &a, NULL, &sp2C, NULL, NULL) != FALSE) && (sp2C != sp28))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D98A0
void mpProcessCeilEdgeAdjustRight(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp3C;
    Vec3f object_pos;
    f32 ceil_dist;

    object_pos.x = translate->x - obj_coll->width;
    sp3C.x = object_pos.x;

    object_pos.y = translate->y + obj_coll->center;
    sp3C.y = object_pos.y;

    sp3C.x += (2.0F * (-coll_data->ceil_angle.y * obj_coll->width));
    sp3C.y += (2.0F * (coll_data->ceil_angle.x * obj_coll->width));

    if (mpCollisionCheckRWallLineCollisionSame(&sp3C, &object_pos, &coll_data->line_coll_dist, NULL, NULL, NULL) != 0)
    {
        object_pos.x = coll_data->line_coll_dist.x + obj_coll->width;
        object_pos.y = translate->y + obj_coll->top;

        if (mpCollisionGetUDCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
        {
            translate->y += ceil_dist;
            translate->x = object_pos.x;
        }
    }
}

// 0x800D99B8
void mpProcessRunCeilEdgeAdjust(MPCollData *coll_data)
{
    if (mpProcessCheckCeilEdgeCollisionLeft(coll_data) != FALSE)
    {
        mpProcessCeilEdgeAdjustLeft(coll_data);
    }
    if (mpProcessCheckCeilEdgeCollisionRight(coll_data) != FALSE)
    {
        mpProcessCeilEdgeAdjustRight(coll_data);
    }
}

// 0x800D9A00
sb32 mpProcessCheckGroundEdgeCollisionLeft(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = mpCollisionGetEdgeUnderLLineID(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + obj_coll->bottom;
    a.x = translate->x + obj_coll->width;
    a.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckLWallLineCollisionSame(&b, &a, NULL, &coll_data->ewall_line_id, NULL, NULL) != FALSE) && (sp2C != coll_data->ewall_line_id))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D9AB0
void mpProcessGroundEdgeLeftAdjust(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 sp34;

    sp38.x = translate->x + obj_coll->width;
    sp38.y = translate->y + obj_coll->center;

    if (mpCollisionGetLRCommonLeft(coll_data->ewall_line_id, &sp38, NULL, NULL, NULL) != FALSE)
    {
        sp38.x = translate->x + obj_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + obj_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (-coll_data->ground_angle.y * obj_coll->width));
        sp44.y += (2.0F * (coll_data->ground_angle.x * obj_coll->width));

        if (mpCollisionCheckLWallLineCollisionSame(&sp44, &sp38, &coll_data->line_coll_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_coll_dist.x - obj_coll->width;
            sp38.y = translate->y + obj_coll->bottom;

            if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
    else
    {
        mpCollisionGetUDEdgeUp(coll_data->ewall_line_id, &sp44);

        sp44.x -= 2.0F;
        sp38.x = sp44.x - (2.0F * obj_coll->width);
        sp38.y = sp44.y - (2.0F * (obj_coll->center - obj_coll->bottom));

        if (mpCollisionCheckGroundLineCollisionSame(&sp44, &sp38, &coll_data->line_coll_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_coll_dist.x;
            sp38.y = translate->y;

            if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &sp38, &sp34, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += sp34;
                translate->x = sp38.x;
            }
        }
    }
}

// 0x800D9CC0
sb32 mpProcessCheckGroundEdgeCollisionRight(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f b;
    Vec3f a;
    s32 sp2C = mpCollisionGetEdgeUnderRLineID(coll_data->ground_line_id);

    b.x = translate->x;
    b.y = translate->y + obj_coll->bottom;
    a.x = translate->x - obj_coll->width;
    a.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckRWallLineCollisionSame(&b, &a, NULL, &coll_data->ewall_line_id, NULL, NULL) != FALSE) && (sp2C != coll_data->ewall_line_id))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x800D9D70
void mpProcessGroundEdgeRightAdjust(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp44;
    Vec3f sp38;
    f32 ground_dist;

    sp38.x = translate->x - obj_coll->width;
    sp38.y = translate->y + obj_coll->center;

    if (mpCollisionGetLRCommonRight(coll_data->ewall_line_id, &sp38, NULL, NULL, NULL) != FALSE)
    {
        sp38.x = translate->x - obj_coll->width;
        sp44.x = sp38.x;
        sp38.y = translate->y + obj_coll->center;
        sp44.y = sp38.y;

        sp44.x += (2.0F * (coll_data->ground_angle.y * obj_coll->width));
        sp44.y += (2.0F * (-coll_data->ground_angle.x * obj_coll->width));

        if (mpCollisionCheckRWallLineCollisionSame(&sp44, &sp38, &coll_data->line_coll_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_coll_dist.x + obj_coll->width;
            sp38.y = translate->y + obj_coll->bottom;

            if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &sp38, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
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
        sp44.x = sp38.x + (2.0F * obj_coll->width);
        sp44.y = sp38.y - (2.0F * (obj_coll->center - obj_coll->bottom));

        if (mpCollisionCheckGroundLineCollisionSame(&sp44, &sp38, &coll_data->line_coll_dist, NULL, NULL, NULL) != FALSE)
        {
            sp38.x = coll_data->line_coll_dist.x;
            sp38.y = translate->y;

            if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &sp38, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
            {
                translate->y += ground_dist;
                translate->x = sp38.x;
            }
        }
    }
}

// 0x800D9F84
void mpProcessRunGroundEdgeAdjust(MPCollData *coll_data)
{
    if (mpProcessCheckGroundEdgeCollisionLeft(coll_data) != FALSE)
    {
        mpProcessGroundEdgeLeftAdjust(coll_data);
    }
    if (mpProcessCheckGroundEdgeCollisionRight(coll_data) != FALSE)
    {
        mpProcessGroundEdgeRightAdjust(coll_data);
    }
}

// 0x800D9FCC
void mpProcessSetCollProjectGroundID(MPCollData *coll_data) // Check if object is above ground while airborne
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f sp2C;

    sp2C.x = translate->x;
    sp2C.y = translate->y + obj_coll->bottom;

    if (func_ovl2_800F9348(&sp2C, &coll_data->ground_line_id, &coll_data->ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) == FALSE)
    {
        coll_data->ground_line_id = -1;
    }
}

// 0x800DA034
sb32 mpProcessUpdateMapProcMain(MPCollData *coll_data, sb32(*proc_coll)(MPCollData*, GObj*, u32), GObj *gobj, u32 flags)
{
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
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

        add_x = coll_data->pos_correct.x / update_count;
        add_y = coll_data->pos_correct.y / update_count;
        add_z = coll_data->pos_correct.z / update_count;
    }
    else
    {
        update_count = 1;

        add_x = coll_data->pos_correct.x;
        add_y = coll_data->pos_correct.y;
        add_z = coll_data->pos_correct.z;
    }
    *translate = *pcurr;

    for (i = 0; (i < update_count) && (coll_data->is_coll_end == FALSE); i++)
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
    coll_data->coll_update_frame = gMPCollisionUpdateFrame;

    return result;
}

// 0x800DA294
sb32 mpProcessCheckTestLWallCollision(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 is_collide_lwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    sb32 wall_collide;

    mpProcessResetMultiWallCount();

    ground_line_id = (mpCollisionCheckExistLineID(coll_data->ground_line_id) != FALSE) ? mpCollisionGetEdgeUnderLLineID(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x + p_obj_coll->width;
    sp4C.y = pcurr->y + p_obj_coll->center;
    sp40.x = translate->x + obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
                    
                                            ? 
    
    mpCollisionCheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
        
                                            : 
        
    mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_obj_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->bottom;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
            
                                            ? 

    mpCollisionCheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 

                                            : 

    mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_obj_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->top;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
            
                                            ? 

    mpCollisionCheckLWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 

                                            :

    mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + obj_coll->bottom;
    sp40.x = translate->x + obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + obj_coll->top;
    sp40.x = translate->x + obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckLWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_LWALL;
    }
    return is_collide_lwall;
}

// 0x800DA658
void mpProcessRunLWallCollision(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f wall_pos;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    u32 wall_flags;
    s32 wall_line_id;
    f32 last_wall_x;

    mpProcessSetLastWallCollideRight();

    for (i = 0; i < sMPProcessMultiWallCollidesNum; i++)
    {
        wall_line_id = sMPProcessMultiWallCollideLineIDs[i];

        mpCollisionGetUDEdgeUp(wall_line_id, &wall_pos);

        if (wall_pos.y < (translate->y + obj_coll->bottom))
        {
            if ((wall_pos.x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
            {
                mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
            }
        }
        else
        {
            mpCollisionGetUDEdgeDown(wall_line_id, &wall_pos);

            if ((translate->y + obj_coll->top) < wall_pos.y)
            {
                if ((wall_pos.x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                {
                    mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
                }
            }
            else
            {
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->bottom;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x + obj_coll->width;
                wall_pos.y = translate->y + obj_coll->center;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->top;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                vertex_count = mpCollisionGetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollisionGetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + obj_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->center))
                        {
                            last_wall_x = vertex_pos.x - (((vertex_pos.y - (translate->y + obj_coll->bottom)) * obj_coll->width) / (obj_coll->center - obj_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + obj_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->top))
                        {
                            last_wall_x = vertex_pos.x - ((((translate->y + obj_coll->top) - vertex_pos.y) * obj_coll->width) / (obj_coll->top - obj_coll->center));

                        next:
                            if ((last_wall_x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &vertex_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                            {
                                mpProcessSetLastWallCollideStats(last_wall_x, wall_line_id, wall_flags, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpProcessGetLastWallCollideStats(&last_wall_x, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x > last_wall_x)
    {
        translate->x = last_wall_x;
    }
}

// 0x800DAAA8
sb32 mpProcessCheckTestRWallCollision(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 is_collide_rwall = FALSE;
    s32 test_line_id;
    s32 ground_line_id;
    sb32 wall_collide;

    mpProcessResetMultiWallCount();

    ground_line_id = (mpCollisionCheckExistLineID(coll_data->ground_line_id) != FALSE) ? mpCollisionGetEdgeUnderRLineID(coll_data->ground_line_id) : -1;

    sp4C.x = pcurr->x - p_obj_coll->width;
    sp4C.y = pcurr->y + p_obj_coll->center;
    sp40.x = translate->x - obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
            
                                            ? 

    mpCollisionCheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
            
                                            : 

    mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_obj_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->bottom;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
            
                                            ? 
            
    mpCollisionCheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL)
            
                                            : 
    
    mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_obj_coll->top;
    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->top;

        wall_collide = (coll_data->coll_update_frame != gMPCollisionUpdateFrame) 
            
                                            ? 
            
    mpCollisionCheckRWallLineCollisionDiff(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) 
            
                                            : 
            
    mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL);

    if ((wall_collide != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + obj_coll->bottom;
    sp40.x = translate->x - obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp4C.x = translate->x;
    sp4C.y = translate->y + obj_coll->top;
    sp40.x = translate->x - obj_coll->width;
    sp40.y = translate->y + obj_coll->center;

    if ((mpCollisionCheckRWallLineCollisionSame(&sp4C, &sp40, NULL, &test_line_id, NULL, NULL) != FALSE) && (test_line_id != ground_line_id))
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_RWALL;
    }
    return is_collide_rwall;
}

// 0x800DAE6C
void mpProcessRunRWallCollision(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f wall_pos;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    u32 wall_flags;
    s32 wall_line_id;
    f32 last_wall_x;

    mpProcessSetLastWallCollideLeft();

    for (i = 0; i < sMPProcessMultiWallCollidesNum; i++)
    {
        wall_line_id = sMPProcessMultiWallCollideLineIDs[i];

        func_ovl2_800F4690(wall_line_id, &wall_pos);

        if (wall_pos.y < (translate->y + obj_coll->bottom))
        {
            if ((sMPProcessLastWallCollidePosition < wall_pos.x) && (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
            {
                mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &wall_pos);

            if ((translate->y + obj_coll->top) < wall_pos.y)
            {
                if ((sMPProcessLastWallCollidePosition < wall_pos.x) && (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                {
                    mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
                }
            }
            else
            {
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->bottom;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x - obj_coll->width;
                wall_pos.y = translate->y + obj_coll->center;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->top;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                vertex_count = mpCollisionGetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollisionGetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + obj_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->center))
                        {
                            last_wall_x = vertex_pos.x + (((vertex_pos.y - (translate->y + obj_coll->bottom)) * obj_coll->width) / (obj_coll->center - obj_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + obj_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->top))
                        {
                            last_wall_x = vertex_pos.x + ((((translate->y + obj_coll->top) - vertex_pos.y) * obj_coll->width) / (obj_coll->top - obj_coll->center));

                        next:
                            if ((sMPProcessLastWallCollidePosition < last_wall_x) && (mpCollisionGetLRCommonRight(wall_line_id, &vertex_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                            {
                                mpProcessSetLastWallCollideStats(last_wall_x, wall_line_id, wall_flags, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpProcessGetLastWallCollideStats(&last_wall_x, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (translate->x < last_wall_x)
    {
        translate->x = last_wall_x;
    }
}

// 0x800DB2BC
sb32 mpProcessCheckTestGroundCollisionNew(MPCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    s32 wall_line_id;
    Vec3f object_pos;
    s32 unused;
    sb32 is_wall_edge;
    f32 ground_dist;

    coll_data->coll_mask_stat &= ~MPCOLL_FLAG_GROUND;

    object_pos.x = translate->x;
    object_pos.y = translate->y + coll_data->obj_coll.bottom;

    if (mpCollisionCheckExistLineID(coll_data->ground_line_id) == FALSE)
    {
        mpProcessSetCollProjectGroundID(coll_data);

        return FALSE;
    }
    if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;

        coll_data->ground_dist = 0.0F;
        coll_data->coll_mask_stat |= MPCOLL_FLAG_GROUND;

        return TRUE;
    }
    is_wall_edge = FALSE;

    mpCollisionGetLREdgeLeft(coll_data->ground_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        wall_line_id = mpCollisionGetEdgeUnderLLineID(coll_data->ground_line_id);

        if ((wall_line_id != -1) && (mpCollisionGetLineTypeID(wall_line_id) == nMPLineKindRWall))
        {
            is_wall_edge = TRUE;
        }
    }
    else
    {
        mpCollisionGetLREdgeRight(coll_data->ground_line_id, &object_pos);

        wall_line_id = mpCollisionGetEdgeUnderRLineID(coll_data->ground_line_id);

        if ((wall_line_id != -1) && (mpCollisionGetLineTypeID(wall_line_id) == nMPLineKindLWall))
        {
            is_wall_edge = TRUE;
        }
    }
    translate->y = object_pos.y - coll_data->obj_coll.bottom;

    if (is_wall_edge != FALSE)
    {
        translate->x = object_pos.x;

        mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_mask_stat |= MPCOLL_FLAG_GROUND;
        coll_data->ground_dist = 0.0F;

        return TRUE;
    }
    mpProcessSetCollProjectGroundID(coll_data);

    return FALSE;
}

// 0x800DB474
sb32 mpProcessCheckTestGroundCollision(MPCollData *coll_data, s32 line_id)
{
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 is_collide_ground;
    Vec3f sp4C;
    Vec3f sp40;
    s32 ground_line_id;
    u32 ground_flags;
    Vec3f ground_angle;

    sp4C.x = coll_data->pos_current.x;
    sp4C.y = coll_data->pos_current.y + p_obj_coll->bottom;
    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->bottom;

                    is_collide_ground
                              
                            =

        (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                            ?

    mpCollisionCheckGroundLineCollisionDiff(&sp4C, &sp40, &coll_data->line_coll_dist, &ground_line_id, &ground_flags, &ground_angle)

                            :

    mpCollisionCheckGroundLineCollisionSame(&sp4C, &sp40, &coll_data->line_coll_dist, &ground_line_id, &ground_flags, &ground_angle);

    if ((is_collide_ground != FALSE) && (ground_line_id != line_id))
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_GROUND;
        coll_data->ground_line_id = ground_line_id;
        coll_data->ground_flags = ground_flags;
        coll_data->ground_angle = ground_angle;

        return TRUE;
    }
    else return FALSE;
}

// 0x800DB590
sb32 mpProcessCheckTestLCliffCollision(MPCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp48;
    Vec3f object_pos;
    u32 ground_flags;
    s32 is_collide_ground;

    if (*coll_data->p_lr != +1)
    {
        return FALSE;
    }

    sp48.x = pcurr->x + cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    object_pos.x = translate->x + cliffcatch_coll->x;
    object_pos.y = translate->y + cliffcatch_coll->y;

               is_collide_ground

                       =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                       ?

    mpCollisionCheckGroundLineCollisionDiff(&sp48, &object_pos, &coll_data->line_coll_dist, &coll_data->cliff_id, &ground_flags, NULL)

                       :

    mpCollisionCheckGroundLineCollisionSame(&sp48, &object_pos, &coll_data->line_coll_dist, &coll_data->cliff_id, &ground_flags, NULL);


    if ((is_collide_ground != FALSE) && (ground_flags & MPCOLL_VERTEX_CLL_CLIFF) && ((ground_flags & MPCOLL_VERTEX_MAT_MASK) != nMPMaterial4))
    {
        mpCollisionGetLREdgeLeft(coll_data->cliff_id, &object_pos);

        if ((coll_data->line_coll_dist.x - object_pos.x) < 800.0F)
        {
            coll_data->coll_mask_current |= MPCOLL_FLAG_LCLIFF;
            coll_data->coll_mask_stat |= MPCOLL_FLAG_LCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DB6F0
sb32 mpProcessCheckTestRCliffCollision(MPCollData *coll_data)
{
    Vec3f *translate = coll_data->p_translate;
    Vec2f *cliffcatch_coll = &coll_data->cliffcatch_coll;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp48;
    Vec3f object_pos;
    u32 ground_flags;
    s32 is_collide_ground;

    if (*coll_data->p_lr != -1)
    {
        return FALSE;
    }

    sp48.x = pcurr->x - cliffcatch_coll->x;
    sp48.y = pcurr->y + cliffcatch_coll->y;
    object_pos.x = translate->x - cliffcatch_coll->x;
    object_pos.y = translate->y + cliffcatch_coll->y;

               is_collide_ground

                       =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                       ?

    mpCollisionCheckGroundLineCollisionDiff(&sp48, &object_pos, &coll_data->line_coll_dist, &coll_data->cliff_id, &ground_flags, NULL)

                       :

    mpCollisionCheckGroundLineCollisionSame(&sp48, &object_pos, &coll_data->line_coll_dist, &coll_data->cliff_id, &ground_flags, NULL);

    if ((is_collide_ground != FALSE) && (ground_flags & MPCOLL_VERTEX_CLL_CLIFF))
    {
        mpCollisionGetLREdgeRight(coll_data->cliff_id, &object_pos);

        if ((object_pos.x - coll_data->line_coll_dist.x) < 800.0F)
        {
            coll_data->coll_mask_current |= MPCOLL_FLAG_RCLIFF;
            coll_data->coll_mask_stat |= MPCOLL_FLAG_RCLIFF;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DB838
sb32 mpProcessCheckTestLWallCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp54;
    Vec3f sp48;
    sb32 is_collide_lwall;
    s32 test_line_id;
    s32 ud_line_id;
    s32 edge_line_id;
    u32 ground_flags;
    s32 line_collide;

    is_collide_lwall = FALSE;

    coll_data->coll_mask_unk &= ~MPCOLL_FLAG_LWALL;
    coll_data->coll_mask_stat &= ~MPCOLL_FLAG_LWALL;

    mpProcessResetMultiWallCount();

    sp54.x = pcurr->x + p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x + obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                          line_collide

                                =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                ?

    mpCollisionCheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                                :

    mpCollisionCheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_obj_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + obj_coll->bottom;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                            ?

    mpCollisionCheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                            :

    mpCollisionCheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_obj_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + obj_coll->top;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                        ?

    mpCollisionCheckLWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollisionCheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + obj_coll->bottom;
    sp48.x = translate->x + obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

    if (mpCollisionCheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + obj_coll->top;
    sp48.x = translate->x + obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

    if (mpCollisionCheckLWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_lwall = TRUE;
    }
    sp54.x = pcurr->x + p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x + obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                        ?

    mpCollisionCheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        edge_line_id = mpCollisionGetEdgeUpperLLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindLWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_obj_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + obj_coll->top;

                                  line_collide

                                        =

                    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                        ?

                mpCollisionCheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                        :

                mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + obj_coll->top;
                    sp48.x = translate->x + obj_coll->width;
                    sp48.y = translate->y + obj_coll->center;

                    if ((mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpProcessSetMultiWallLineID(edge_line_id);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x + p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x + obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                       line_collide

                            =

        (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                            ?

    mpCollisionCheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL)

                            :

    mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL);

    if ((line_collide != FALSE) && !(ground_flags & MPCOLL_VERTEX_CLL_PASS)) // 0x4000
    {
        edge_line_id = mpCollisionGetEdgeUnderLLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindLWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_obj_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + obj_coll->bottom;

                               line_collide

                                    =

                (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                    ?

                mpCollisionCheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                    :

                mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + obj_coll->bottom;
                    sp48.x = translate->x + obj_coll->width;
                    sp48.y = translate->y + obj_coll->center;

                    if ((mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpProcessSetMultiWallLineID(edge_line_id);

                        is_collide_lwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_lwall != FALSE)
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_LWALL;
    }
    return is_collide_lwall;
}

// 0x800DBF58
void mpProcessRunLWallCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f wall_pos;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    u32 wall_flags;
    s32 wall_line_id;
    f32 last_wall_x;

    mpProcessSetLastWallCollideRight();

    for (i = 0; i < sMPProcessMultiWallCollidesNum; i++)
    {
        wall_line_id = sMPProcessMultiWallCollideLineIDs[i];

        mpCollisionGetUDEdgeUp(wall_line_id, &wall_pos);

        if (wall_pos.y < (translate->y + obj_coll->bottom))
        {
            if ((wall_pos.x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
            {
                mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
            }
        }
        else
        {
            mpCollisionGetUDEdgeDown(wall_line_id, &wall_pos);

            if ((translate->y + obj_coll->top) < wall_pos.y)
            {
                if ((wall_pos.x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                {
                    mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
                }
            }
            else
            {
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->bottom;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x + obj_coll->width;
                wall_pos.y = translate->y + obj_coll->center;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->top;

                if (mpCollisionGetLRCommonLeft(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) < sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                vertex_count = mpCollisionGetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollisionGetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + obj_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->center))
                        {
                            last_wall_x = vertex_pos.x - (((vertex_pos.y - (translate->y + obj_coll->bottom)) * obj_coll->width) / (obj_coll->center - obj_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + obj_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->top))
                        {
                            last_wall_x = vertex_pos.x - ((((translate->y + obj_coll->top) - vertex_pos.y) * obj_coll->width) / (obj_coll->top - obj_coll->center));

                        next:
                            if ((last_wall_x < sMPProcessLastWallCollidePosition) && (mpCollisionGetLRCommonLeft(wall_line_id, &vertex_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                            {
                                mpProcessSetLastWallCollideStats(last_wall_x, wall_line_id, wall_flags, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpProcessGetLastWallCollideStats(&last_wall_x, &coll_data->lwall_line_id, &coll_data->lwall_flags, &coll_data->lwall_angle);

    if (translate->x > last_wall_x)
    {
        translate->x = last_wall_x;

        coll_data->coll_mask_stat |= MPCOLL_FLAG_LWALL;
    }
    coll_data->coll_mask_unk |= MPCOLL_FLAG_LWALL;
}

// 0x800DC3C8
sb32 mpProcessCheckTestRWallCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp54;
    Vec3f sp48;
    sb32 is_collide_rwall;
    s32 test_line_id;
    s32 ud_line_id;
    s32 edge_line_id;
    u32 ground_flags;
    s32 line_collide;

    is_collide_rwall = FALSE;

    coll_data->coll_mask_unk &= ~MPCOLL_FLAG_RWALL;
    coll_data->coll_mask_stat &= ~MPCOLL_FLAG_RWALL;

    mpProcessResetMultiWallCount();

    sp54.x = pcurr->x - p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x - obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                          line_collide

                                =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                ?

    mpCollisionCheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                                :

    mpCollisionCheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_obj_coll->bottom;
    sp48.x = translate->x;
    sp48.y = translate->y + obj_coll->bottom;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                            ?

    mpCollisionCheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                            :

    mpCollisionCheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x;
    sp54.y = pcurr->y + p_obj_coll->top;
    sp48.x = translate->x;
    sp48.y = translate->y + obj_coll->top;

                   line_collide

                        =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                        ?

    mpCollisionCheckRWallLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollisionCheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + obj_coll->bottom;
    sp48.x = translate->x - obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

    if (mpCollisionCheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = translate->x;
    sp54.y = translate->y + obj_coll->top;
    sp48.x = translate->x - obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

    if (mpCollisionCheckRWallLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL) != FALSE)
    {
        mpProcessSetMultiWallLineID(test_line_id);

        is_collide_rwall = TRUE;
    }
    sp54.x = pcurr->x - p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x - obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                  line_collide

                        =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                        ?

    mpCollisionCheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, NULL, NULL)

                        :

    mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, NULL, NULL);

    if (line_collide != FALSE)
    {
        edge_line_id = mpCollisionGetEdgeUpperRLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindRWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_obj_coll->top;
                sp48.x = translate->x;
                sp48.y = translate->y + obj_coll->top;

                                  line_collide

                                        =

                (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                        ?

                mpCollisionCheckCeilLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                        :

                mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + obj_coll->top;
                    sp48.x = translate->x - obj_coll->width;
                    sp48.y = translate->y + obj_coll->center;

                    if ((mpCollisionCheckCeilLineCollisionSame(&sp54, &sp48, 0, &ud_line_id, 0, 0) == 0) || (test_line_id != ud_line_id))
                    {
                        mpProcessSetMultiWallLineID(edge_line_id);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    sp54.x = pcurr->x - p_obj_coll->width;
    sp54.y = pcurr->y + p_obj_coll->center;
    sp48.x = translate->x - obj_coll->width;
    sp48.y = translate->y + obj_coll->center;

                      line_collide

                            =

    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                            ?

    mpCollisionCheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL)

                            :

    mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &test_line_id, &ground_flags, NULL);

    if ((line_collide != FALSE) && !(ground_flags & MPCOLL_VERTEX_CLL_PASS))
    {
        edge_line_id = mpCollisionGetEdgeUnderRLineID(test_line_id);

        if (edge_line_id != -1)
        {
            if (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindRWall)
            {
                sp54.x = pcurr->x;
                sp54.y = pcurr->y + p_obj_coll->bottom;
                sp48.x = translate->x;
                sp48.y = translate->y + obj_coll->bottom;

                              line_collide

                                    =

                (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                    ?

                mpCollisionCheckGroundLineCollisionDiff(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL)

                                    :

                mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL);

                if ((line_collide == FALSE) || (test_line_id != ud_line_id))
                {
                    sp54.x = translate->x;
                    sp54.y = translate->y + obj_coll->bottom;
                    sp48.x = translate->x - obj_coll->width;
                    sp48.y = translate->y + obj_coll->center;

                    if ((mpCollisionCheckGroundLineCollisionSame(&sp54, &sp48, NULL, &ud_line_id, NULL, NULL) == FALSE) || (test_line_id != ud_line_id))
                    {
                        mpProcessSetMultiWallLineID(edge_line_id);

                        is_collide_rwall = TRUE;
                    }
                }
            }
        }
    }
    if (is_collide_rwall != FALSE)
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_RWALL;
    }
    return is_collide_rwall;
}

// 0x800DCAE8
void mpProcessRunRWallCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f wall_pos;
    Vec3f wall_angle;
    Vec3f vertex_pos;
    s32 i;
    s32 vertex_count;
    s32 j;
    u32 wall_flags;
    s32 wall_line_id;
    f32 last_wall_x;

    mpProcessSetLastWallCollideLeft();

    for (i = 0; i < sMPProcessMultiWallCollidesNum; i++)
    {
        wall_line_id = sMPProcessMultiWallCollideLineIDs[i];

        func_ovl2_800F4690(wall_line_id, &wall_pos);

        if (wall_pos.y < (translate->y + obj_coll->bottom))
        {
            if ((sMPProcessLastWallCollidePosition < wall_pos.x) && (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
            {
                mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
            }
        }
        else
        {
            func_ovl2_800F46B0(wall_line_id, &wall_pos);

            if ((translate->y + obj_coll->top) < wall_pos.y)
            {
                if ((sMPProcessLastWallCollidePosition < wall_pos.x) && (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                {
                    mpProcessSetLastWallCollideStats(wall_pos.x, wall_line_id, wall_flags, &wall_angle);
                }
            }
            else
            {
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->bottom;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x - obj_coll->width;
                wall_pos.y = translate->y + obj_coll->center;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                wall_pos.x = translate->x;
                wall_pos.y = translate->y + obj_coll->top;

                if (mpCollisionGetLRCommonRight(wall_line_id, &wall_pos, &last_wall_x, &wall_flags, &wall_angle) != FALSE)
                {
                    if ((translate->x + last_wall_x) > sMPProcessLastWallCollidePosition)
                    {
                        mpProcessSetLastWallCollideStats((translate->x + last_wall_x), wall_line_id, wall_flags, &wall_angle);
                    }
                }
                vertex_count = mpCollisionGetVertexCountLineID(wall_line_id);

                for (j = 0; j < vertex_count; j++)
                {
                    mpCollisionGetVertexPositionID(wall_line_id, j, &vertex_pos);

                    if ((translate->y + obj_coll->bottom) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->center))
                        {
                            last_wall_x = vertex_pos.x + (((vertex_pos.y - (translate->y + obj_coll->bottom)) * obj_coll->width) / (obj_coll->center - obj_coll->bottom));

                            goto next;
                        }
                    }
                    if ((translate->y + obj_coll->center) <= vertex_pos.y)
                    {
                        if (vertex_pos.y <= (translate->y + obj_coll->top))
                        {
                            last_wall_x = vertex_pos.x + ((((translate->y + obj_coll->top) - vertex_pos.y) * obj_coll->width) / (obj_coll->top - obj_coll->center));

                        next:
                            if ((sMPProcessLastWallCollidePosition < last_wall_x) && (mpCollisionGetLRCommonRight(wall_line_id, &vertex_pos, NULL, &wall_flags, &wall_angle) != FALSE))
                            {
                                mpProcessSetLastWallCollideStats(last_wall_x, wall_line_id, wall_flags, &wall_angle);
                            }
                        }
                    }
                }
            }
        }
        continue;
    }
    mpProcessGetLastWallCollideStats(&last_wall_x, &coll_data->rwall_line_id, &coll_data->rwall_flags, &coll_data->rwall_angle);

    if (translate->x < last_wall_x)
    {
        translate->x = last_wall_x;

        coll_data->coll_mask_stat |= MPCOLL_FLAG_RWALL;
    }
    coll_data->coll_mask_unk |= MPCOLL_FLAG_RWALL;
}

// 0x800DCF58
sb32 mpProcessCheckTestCeilCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    Vec3f *translate = coll_data->p_translate;
    s32 unused;
    Vec3f sp4C;
    Vec3f sp40;
    sb32 ceil_collide;
    f32 ceil_dist;
    s32 line_id;

    coll_data->coll_mask_stat &= ~MPCOLL_FLAG_CEIL;

    sp4C.x = coll_data->pos_current.x;
    sp4C.y = coll_data->pos_current.y + p_obj_coll->top;

    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->top;

    ceil_collide

        = 
    (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

        ?

    mpCollisionCheckCeilLineCollisionDiff(&sp4C, &sp40, &coll_data->line_coll_dist, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle)

        :

    mpCollisionCheckCeilLineCollisionSame(&sp4C, &sp40, &coll_data->line_coll_dist, &coll_data->ceil_line_id, &coll_data->ceil_flags, &coll_data->ceil_angle);

    if (ceil_collide != FALSE)
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_CEIL;

        return TRUE;
    }
    if (coll_data->coll_mask_unk & MPCOLL_FLAG_LWALL)
    {
        line_id = mpCollisionGetEdgeRightULineID(coll_data->lwall_line_id);

        if ((line_id != -1) && (mpCollisionGetLineTypeID(line_id) == nMPLineKindCeil) && (mpCollisionGetUDCommonDown(line_id, &sp40, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE) && (ceil_dist < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask_current |= MPCOLL_FLAG_CEIL;

            return TRUE;
        }
    }
    else if (coll_data->coll_mask_unk & MPCOLL_FLAG_RWALL)
    {
        line_id = mpCollisionGetEdgeLeftULineID(coll_data->rwall_line_id);

        if ((line_id != -1) && (mpCollisionGetLineTypeID(line_id) == nMPLineKindCeil) && (mpCollisionGetUDCommonDown(line_id, &sp40, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE) && (ceil_dist < 0.0F))
        {
            coll_data->ceil_line_id = line_id;
            coll_data->coll_mask_current |= MPCOLL_FLAG_CEIL;

            return TRUE;
        }
    }
    return FALSE;
}

// 0x800DD160
void mpProcessRunCeilCollisionAdjNew(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    s32 line_id;
    sb32 is_collide_ceil;
    f32 ceil_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + obj_coll->top;

    if (mpCollisionGetUDCommonDown(coll_data->ceil_line_id, &object_pos, &ceil_dist, &coll_data->ceil_flags, &coll_data->ceil_angle) != FALSE)
    {
        translate->y += ceil_dist;
        coll_data->coll_mask_stat |= MPCOLL_FLAG_CEIL;

        return;
    }
    is_collide_ceil = FALSE;

    func_ovl2_800F4468(coll_data->ceil_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        line_id = mpCollisionGetEdgeUpperLLineID(coll_data->ceil_line_id);

        if ((line_id != -1) && (mpCollisionGetLineTypeID(line_id) == nMPLineKindRWall))
        {
            is_collide_ceil = TRUE;
        }
    }
    else
    {
        func_ovl2_800F4448(coll_data->ceil_line_id, &object_pos);

        line_id = mpCollisionGetEdgeUpperRLineID(coll_data->ceil_line_id);

        if ((line_id != -1) && (mpCollisionGetLineTypeID(line_id) == nMPLineKindLWall))
        {
            is_collide_ceil = TRUE;
        }
    }
    translate->y = object_pos.y - obj_coll->top;

    if (is_collide_ceil != FALSE)
    {
        translate->x = object_pos.x;

        mpCollisionGetUDCommonDown(coll_data->ceil_line_id, &object_pos, NULL, &coll_data->ceil_flags, &coll_data->ceil_angle);

        coll_data->coll_mask_stat |= MPCOLL_FLAG_CEIL;
    }
}

// 0x800DD2C8
sb32 mpProcessCheckTestGroundCollisionAdjNew(MPCollData *coll_data, sb32(*proc_map)(GObj*), GObj *gobj)
{
    MPObjectColl *p_obj_coll = coll_data->p_obj_coll;
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f *pcurr = &coll_data->pos_current;
    Vec3f sp4C;
    Vec3f sp40;
    s32 line_id;
    f32 ground_dist;
    s32 var_v0;

    coll_data->coll_mask_stat &= ~MPCOLL_FLAG_GROUND;

    sp4C.x = pcurr->x;
    sp4C.y = pcurr->y + p_obj_coll->bottom;

    sp40.x = translate->x;
    sp40.y = translate->y + obj_coll->bottom;

                                                                         var_v0 
                                                                            
                                                                            = 
                                        
                                                        (coll_data->coll_update_frame != gMPCollisionUpdateFrame)

                                                                            ?

    mpCollisionCheckGroundLineCollisionDiff(&sp4C, &sp40, &coll_data->line_coll_dist, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle)

                                                                            :

    mpCollisionCheckGroundLineCollisionSame(&sp4C, &sp40, &coll_data->line_coll_dist, &coll_data->ground_line_id, &coll_data->ground_flags, &coll_data->ground_angle);

    if ((var_v0 != 0) && (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id)) && ((proc_map == NULL) || (proc_map(gobj) != FALSE)))
    {
        coll_data->coll_mask_current |= MPCOLL_FLAG_GROUND;

        return TRUE;
    }
    if (coll_data->coll_mask_unk & MPCOLL_FLAG_LWALL)
    {
        line_id = mpCollisionGetEdgeRightDLineID(coll_data->lwall_line_id);

        if (line_id != -1)
        {
            if ((mpCollisionGetLineTypeID(line_id) == nMPLineKindGround) && (mpCollisionGetUDCommonUp(line_id, &sp40, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (ground_dist > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask_current |= MPCOLL_FLAG_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    else if (coll_data->coll_mask_unk & MPCOLL_FLAG_RWALL)
    {
        line_id = mpCollisionGetEdgeLeftDLineID(coll_data->rwall_line_id);

        if (line_id != -1)
        {
            if ((mpCollisionGetLineTypeID(line_id) == nMPLineKindGround) && (mpCollisionGetUDCommonUp(line_id, &sp40, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != 0) && (ground_dist > 0.0F))
            {
                coll_data->ground_line_id = line_id;

                if (!(coll_data->ground_flags & MPCOLL_VERTEX_CLL_PASS) || (coll_data->ground_line_id != coll_data->ignore_line_id))
                {
                    if ((proc_map == NULL) || (proc_map(gobj) != FALSE))
                    {
                        coll_data->coll_mask_current |= MPCOLL_FLAG_GROUND;

                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

// 0x800DD578
sb32 mpProcessRunGroundCollisionAdjNewNULL(MPCollData *coll_data)
{
    return mpProcessCheckTestGroundCollisionAdjNew(coll_data, NULL, NULL);
}

// 0x800DD59C
void func_ovl2_800DD59C(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    f32 ground_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + obj_coll->bottom;

    if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;
    }
    else
    {
        mpCollisionGetLREdgeLeft(coll_data->ground_line_id, &object_pos);

        if (object_pos.x <= translate->x)
        {
            mpCollisionGetLREdgeRight(coll_data->ground_line_id, &object_pos);
        }
        translate->y = object_pos.y - obj_coll->bottom;
        translate->x = object_pos.x;

        mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);
    }
    coll_data->coll_mask_stat |= MPCOLL_FLAG_GROUND;
    coll_data->ground_dist = 0.0F;
}

// 0x800DD6A8
void func_ovl2_800DD6A8(MPCollData *coll_data)
{
    MPObjectColl *obj_coll = &coll_data->obj_coll;
    Vec3f *translate = coll_data->p_translate;
    Vec3f object_pos;
    s32 edge_line_id;
    s32 is_collide_ground;
    f32 ground_dist;

    object_pos.x = translate->x;
    object_pos.y = translate->y + obj_coll->bottom;

    if (mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, &ground_dist, &coll_data->ground_flags, &coll_data->ground_angle) != FALSE)
    {
        translate->y += ground_dist;

        coll_data->coll_mask_stat |= MPCOLL_FLAG_GROUND;
        coll_data->ground_dist = 0.0F;

        return;
    }
    is_collide_ground = FALSE;

    mpCollisionGetLREdgeLeft(coll_data->ground_line_id, &object_pos);

    if (translate->x <= object_pos.x)
    {
        edge_line_id = mpCollisionGetEdgeUnderLLineID(coll_data->ground_line_id);

        if ((edge_line_id != -1) && (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindRWall))
        {
            is_collide_ground = TRUE;
        }
    }
    else
    {
        mpCollisionGetLREdgeRight(coll_data->ground_line_id, &object_pos);

        edge_line_id = mpCollisionGetEdgeUnderRLineID(coll_data->ground_line_id);

        if ((edge_line_id != -1) && (mpCollisionGetLineTypeID(edge_line_id) == nMPLineKindLWall))
        {
            is_collide_ground = TRUE;
        }
    }
    translate->y = object_pos.y - obj_coll->bottom;

    if (is_collide_ground != FALSE)
    {
        translate->x = object_pos.x;

        mpCollisionGetUDCommonUp(coll_data->ground_line_id, &object_pos, NULL, &coll_data->ground_flags, &coll_data->ground_angle);

        coll_data->coll_mask_stat |= MPCOLL_FLAG_GROUND;
        coll_data->ground_dist = 0.0F;
    }
}
