#include <ft/fighter.h>
#include <gr/ground.h>
#include <wp/weapon.h>
#include <if/interface.h>
#include <sc/scene.h>
// #include <sys/taskman.h>

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EB70
GCPersp dGMCameraPerspDefault = { NULL, 0, 38.0F, 15.0F / 11.0F, 256.0F, 39936.0F, 1.0F };

// 0x8012EB8C
CObjVec dGMCameraCObjVecDefault =
{
    NULL,
    { 1500.0F, 0.0F, 0.0F },
    {    0.0F, 0.0F, 0.0F },
    {    0.0F, 1.0F, 0.0F }
};

// 0x8012EBB4
void (*dGMCameraProcList[/* */])(GObj*) =
{
    jtgt_ovl2_8010C734,
    jtgt_ovl2_8010CAE0,
    jtgt_ovl2_8010CC74,
    jtgt_ovl2_8010CB48,
    jtgt_ovl2_8010CCC0,
    jtgt_ovl2_8010CDAC,
    jtgt_ovl2_8010C8C4
};

// 0x8012EBD0
f32 dGMCameraPlayerZoomRanges[/* */] =
{
    0.00F,  // No players
    1.50F,  // 1 Player
    1.32F,  // 2 Players
    1.16F,  // 3 Players
    1.00F   // 4 Players
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131460
GObj *gGMCameraCameraGObj;

// 0x80131464
f32 gGMCameraPauseCameraEyeY;

// 0x80131468
f32 gGMCameraPauseCameraEyeX;

// 0x80131470
Mtx44f gGMCameraMatrix;

// 0x801314B0
GMCamera gGMCameraCameraStruct;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8010B810
u32 gmCameraGetBoundsMask(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gMPCollisionGroundData->camera_bound_left)
    {
        bounds |= CAMERA_FLAG_BOUND_LEFT;
    }
    if (pos->x > gMPCollisionGroundData->camera_bound_right)
    {
        bounds |= CAMERA_FLAG_BOUND_RIGHT;
    }
    if (pos->y < gMPCollisionGroundData->camera_bound_bottom)
    {
        bounds |= CAMERA_FLAG_BOUND_BOTTOM;
    }
    if (pos->y > gMPCollisionGroundData->camera_bound_top)
    {
        bounds |= CAMERA_FLAG_BOUND_TOP;
    }
    return bounds;
}

// 0x8010B8BC
void gmCameraSetBoundsPosition(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = gmCameraGetBoundsMask(pos);

        if (bounds != 0)
        {
            if (bounds & CAMERA_FLAG_BOUND_LEFT)
            {
                pos->x = gMPCollisionGroundData->camera_bound_left;
            }
            else if (bounds & CAMERA_FLAG_BOUND_RIGHT)
            {
                pos->x = gMPCollisionGroundData->camera_bound_right;
            }
            else if (bounds & CAMERA_FLAG_BOUND_BOTTOM)
            {
                pos->y = gMPCollisionGroundData->camera_bound_bottom;
            }
            else if (bounds & CAMERA_FLAG_BOUND_TOP)
            {
                pos->y = gMPCollisionGroundData->camera_bound_top;
            }
        }
        else break;
    }
}

// 0x8010B98C
u32 gmCameraGetTeamBoundsMask(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gMPCollisionGroundData->camera_bound_team_left)
    {
        bounds |= CAMERA_FLAG_BOUND_LEFT;
    }
    if (pos->x > gMPCollisionGroundData->camera_bound_team_right)
    {
        bounds |= CAMERA_FLAG_BOUND_RIGHT;
    }
    if (pos->y < gMPCollisionGroundData->camera_bound_team_bottom)
    {
        bounds |= CAMERA_FLAG_BOUND_BOTTOM;
    }
    if (pos->y > gMPCollisionGroundData->camera_bound_team_top)
    {
        bounds |= CAMERA_FLAG_BOUND_TOP;
    }
    return bounds;
}

// 0x8010BA38
void gmCameraSetTeamBoundsPosition(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = gmCameraGetTeamBoundsMask(pos);

        if (bounds != 0)
        {
            if (bounds & CAMERA_FLAG_BOUND_LEFT)
            {
                pos->x = gMPCollisionGroundData->camera_bound_team_left;
            }
            else if (bounds & CAMERA_FLAG_BOUND_RIGHT)
            {
                pos->x = gMPCollisionGroundData->camera_bound_team_right;
            }
            else if (bounds & CAMERA_FLAG_BOUND_BOTTOM)
            {
                pos->y = gMPCollisionGroundData->camera_bound_team_bottom;
            }
            else if (bounds & CAMERA_FLAG_BOUND_TOP)
            {
                pos->y = gMPCollisionGroundData->camera_bound_team_top;
            }
        }
        else break;
    }
}

// 0x8010BB08
void gmCameraSetDeadUpStarPosition(Vec3f *pos)
{
    pos->x = (gMPCollisionGroundData->camera_bound_top * pos->x) / gMPCollisionGroundData->map_bound_top;
    pos->y = gMPCollisionGroundData->camera_bound_top;
}

// 0x8010BB58
f32 gmCameraGetPlayerNumZoomRange(s32 players_num)
{
    f32 zoom = dGMCameraPlayerZoomRanges[players_num];

    if (gSCManagerBattleState->game_type == nSCBattleGameTypeExplain)
    {
        zoom *= 0.75F;
    }
    return zoom;
}

// 0x8010BB98
f32 gmCameraCalcFighterZoomRange(FTStruct *fp, f32 camera_zoom)
{
    camera_zoom *= fp->camera_zoom_frame;
    camera_zoom *= fp->camera_zoom_range;

    if ((fp->status_id == nFTCommonStatusWait) && (fp->status_total_tics >= 120))
    {
        camera_zoom *= 0.75F;
    }
    return camera_zoom;
}

// 0x8010BBE4
f32 gmCameraGetTargetAtY(f32 dist)
{
    if (dist > 2000.0F)
    {
        return 0.0682F;
    }
    else if (dist < 1000.0F)
    {
        return 0.0F;
    }
    else return ((dist - 1000.0F) / 1000) * 0.0682F;
}

// 0x8010BC54
void gmCameraUpdateInterests(Vec3f *vec, f32 *hz, f32 *vt)
{
    s32 players_num;
    s32 cobj_num;
    FTCamera cams[GMCOMMON_PLAYERS_MAX];
    FTStruct *fp;
    WPStruct *wp;
    f32 pos_top;
    f32 pos_left;
    f32 pos_bottom;
    f32 ft_right;
    f32 ft_top;
    f32 ft_left;
    f32 ft_bottom;
    f32 zoom;
    GObj *fighter_gobj;
    FTStruct *cam_fp;
    f32 wp_top;
    f32 wp_bottom;
    f32 wp_left;
    f32 wp_right;
    f32 adjust;
    f32 gm_top;
    f32 gm_bottom;
    f32 gm_left;
    f32 gm_right;
    f32 pos_right;
    GObj *weapon_gobj;
    s32 lr;
    Vec3f weapon_pos;

    fighter_gobj = gGCCommonLinks[nGCCommonLinkIDFighter];

    players_num = 0;

    while (fighter_gobj != NULL)
    {
        fp = ftGetStruct(fighter_gobj);

        switch (fp->camera_mode)
        {
        default:
            if (players_num >= ARRAY_COUNT(cams))
            {
                while (TRUE)
                {
                    syErrorPrintf("Player Num is Over for Camera!\n");
                    scManagerRunPrintGObjStatus();
                }
            }
            cams[players_num].target_fp = fp;

            switch (fp->camera_mode)
            {
            default:
                cams[players_num].target_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;
                break;

            case nFTCameraModeEntry:
            case nFTCameraModeExplain:
                cams[players_num].target_pos = fp->entry_pos;
                break;

            case nFTCameraModeDeadUp:
                cams[players_num].target_pos = fp->status_vars.common.dead.pos;
                break;
            }
            cams[players_num].target_pos.y += fp->attr->cam_offset_y;

            if ((gSCManagerBattleState->game_type == nSCBattleGameType1PGame) && (gSCManagerBattleState->players[fp->player].is_spgame_team != FALSE))
            {
                switch (fp->camera_mode)
                {
                default: 
                    break;

                    // WHAT!?!? There are a few ways to match this, but it appears to be a control flow issue more than anything.
                    // Other solution #1: cast &cams[players_num].target_pos to an integer
                    // Other solution #2: explicitly define any of the Vec3f* functions below as s32 functions (just forget about it)
                }
                gmCameraSetTeamBoundsPosition(&cams[players_num].target_pos);
            }
            else switch (fp->camera_mode)
            {
            case nFTCameraModeDeadUp:
                gmCameraSetDeadUpStarPosition(&cams[players_num].target_pos);
                break;

            default:
                gmCameraSetBoundsPosition(&cams[players_num].target_pos);
                break;
            }
            players_num++;
            break;

        case nFTCameraModeGhost:
            break;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if (players_num != 0)
    {
        ft_top = 65536.0F;
        ft_bottom = -65536.0F;
        ft_left = -65536.0F;
        ft_right = 65536.0F;

        gm_bottom = 65536.0F;
        gm_top = -65536.0F;
        gm_left = 65536.0F;
        gm_right = -65536.0F;

        zoom = gmCameraGetPlayerNumZoomRange(players_num);

        for (cobj_num = 0; cobj_num < players_num; cobj_num++)
        {
            cam_fp = cams[cobj_num].target_fp;

            adjust = gmCameraCalcFighterZoomRange(cam_fp, zoom);

            lr = ((cam_fp->camera_mode == nFTCameraModeEntry) || (cam_fp->camera_mode == nFTCameraModeExplain)) ?
                                                                             cam_fp->status_vars.common.entry.lr :
                                                                                                      cam_fp->lr;

            if (lr == -1)
            {
                pos_left = cams[cobj_num].target_pos.x - (1000.0F * adjust);
                pos_right = cams[cobj_num].target_pos.x + (700.0F * adjust);
            }
            else
            {
                pos_left = cams[cobj_num].target_pos.x - (700.0F * adjust);
                pos_right = cams[cobj_num].target_pos.x + (1000.0F * adjust);
            }
            if (gm_left > pos_left)
            {
                gm_left = pos_left;
            }
            if (gm_right < pos_right)
            {
                gm_right = pos_right;
            }
            pos_top = cams[cobj_num].target_pos.y + (700.0F * adjust);
            pos_bottom = cams[cobj_num].target_pos.y + (-700.0F * adjust);

            if (gm_bottom > pos_bottom)
            {
                gm_bottom = pos_bottom;
            }
            if (gm_top < pos_top)
            {
                gm_top = pos_top;
            }
            if (cams[cobj_num].target_pos.x < ft_right) // ft_right = ft_right?
            {
                ft_right = cams[cobj_num].target_pos.x;
            }
            if (cams[cobj_num].target_pos.x > ft_left) // ft_left = ft_left?
            {
                ft_left = cams[cobj_num].target_pos.x;
            }
            if (cams[cobj_num].target_pos.y < ft_top) // ft_top = ft_top?
            {
                ft_top = cams[cobj_num].target_pos.y;
            }
            if (cams[cobj_num].target_pos.y > ft_bottom) // ft_bottom = ft_bottom?
            {
                ft_bottom = cams[cobj_num].target_pos.y;
            }
            cams[cobj_num].unk_ftcobj_0x10 = adjust;
        }
        weapon_gobj = gGCCommonLinks[nGCCommonLinkIDWeapon];

        while (weapon_gobj != NULL)
        {
            wp = wpGetStruct(weapon_gobj);

            if (wp->is_camera_follow)
            {
                weapon_pos = DObjGetStruct(weapon_gobj)->translate.vec.f;

                wp_left = ft_right - 1000.0F; // wp_left = left?
                wp_right = ft_left + 1000.0F; // wp_right = right?
                wp_bottom = ft_top - 1000.0F; // wp_bottom = bottom?
                wp_top = ft_bottom + 1000.0F; // wp_top = top?

                gmCameraSetBoundsPosition(&weapon_pos);

                if (weapon_pos.x < wp_left)
                {
                    weapon_pos.x = wp_left;
                }
                if (weapon_pos.x > wp_right)
                {
                    weapon_pos.x = wp_right;
                }
                if (weapon_pos.y < wp_bottom)
                {
                    weapon_pos.y = wp_bottom;
                }
                if (weapon_pos.y > wp_top)
                {
                    weapon_pos.y = wp_top;
                }
                if ((weapon_pos.x - 1000.0F) < gm_left) // gm_left = gm_left?
                {
                    gm_left = (weapon_pos.x - 1000.0F);
                }
                if ((weapon_pos.x + 1000.0F) > gm_right) // gm_right = gm_right?
                {
                    gm_right = (weapon_pos.x + 1000.0F);
                }
                if ((weapon_pos.y - 1000.0F) < gm_bottom) // gm_bottom = gm_bottom?
                {
                    gm_bottom = (weapon_pos.y - 1000.0F);
                }
                if ((weapon_pos.y + 1000.0F) > gm_top) // gm_top = gm_top?
                {
                    gm_top = (weapon_pos.y + 1000.0F);
                }
            }
            weapon_gobj = weapon_gobj->link_next;
        }
        *hz = (gm_right - gm_left) * 0.5F;
        *vt = (gm_top - gm_bottom) * 0.5F;

        vec->x = ((gm_left + gm_right) * 0.5F);
        vec->y = (0.5F - gmCameraGetTargetAtY((*vt < *hz) ? *hz : *vt)) * (gm_bottom + gm_top);
        vec->z = 0.0F;
    }
    else
    {
        vec->x = vec->y = vec->z = 0.0F;

        *hz = *vt = 2000.0F;
    }
}

// 0x8010C200
void gmCameraGetClampDimensionsMax(f32 hz, f32 vt, f32 *max)
{
    f32 maxd;

    vt /= lbCommonTan(F_CLC_DTOR32(gGMCameraCameraStruct.fovy * 0.5F));
    hz /= ((lbCommonTan(F_CLC_DTOR32(gGMCameraCameraStruct.fovy * 0.5F)) *
    gGMCameraCameraStruct.viewport_width) / gGMCameraCameraStruct.viewport_height);

    maxd = (hz > vt) ? hz : vt;

    if (maxd < 2500.0F)
    {
        maxd = 2500.0F;
    }
    if (maxd > 30000.0F)
    {
        maxd = 30000.0F;
    }
    *max = maxd;
}

// 0x8010C320
void gmCameraGetAdjustAtAngle(Vec3f *at, Vec3f *vec, f32 x, f32 y)
{
    f32 angle_x, angle_y;

    angle_x = gGMCameraPauseCameraEyeY + y + gMPCollisionGroundData->light_angle.z;

    vec->y = -lbCommonSin(angle_x);
    vec->z = lbCommonCos(angle_x);

    angle_y = gGMCameraPauseCameraEyeX + x;

    vec->x = (lbCommonSin(angle_y) * vec->z);

    vec->z *= lbCommonCos(angle_y);
}

// 0x8010C3C0
void func_ovl2_8010C3C0(Vec3f *at, Vec3f *vec)
{
    f32 x, y;

    y = -F_CLC_DTOR32((at->y + (-900.0F)) / 133.0F);

    if (y > F_CLC_DTOR32(5.0F)) // 0.08726647F
    {
        y = F_CLC_DTOR32(5.0F);
    }
    if (y < F_CLC_DTOR32(-7.0F)) // -0.122173056F
    {
        y = F_CLC_DTOR32(-7.0F);
    }
    x = -F_CLC_DTOR32(at->x / 133.0F);

    if (x > F_CLC_DTOR32(17.5F)) // 0.30543265F
    {
        x = F_CLC_DTOR32(17.5F);
    }
    if (x < F_CLC_DTOR32(-17.5F)) // -0.30543265F
    {
        x = F_CLC_DTOR32(-17.5F);
    }
    gmCameraGetAdjustAtAngle(at, vec, x, y);
}

// 0x8010C4A4
void func_ovl2_8010C4A4(Vec3f *arg0, Vec3f *arg1)
{
    gmCameraGetAdjustAtAngle(arg0, arg1, 0.0F, 0.0F);
}

// 0x8010C4D0
f32 func_ovl2_8010C4D0(void)
{
    if (gGMCameraCameraStruct.target_dist > 15000.0F)
    {
        return 0.1F;
    }
    else if (gGMCameraCameraStruct.target_dist < 2000.0F)
    {
        return 0.05F;
    }
    return ((1.0F - ((gGMCameraCameraStruct.target_dist - 2000.0F) / 13000.0F)) * 0.05F) + .05F; // Needs to be two different 0.05s lol
}

// 0x8010C55C
void func_ovl2_8010C55C(CObj *cobj, Vec3f *pos, f32 scale)
{
    f32 mag;
    f32 unused;
    Vec3f add;

    syVectorDiff3D(&add, pos, &cobj->vec.at);
    mag = syVectorMag3D(&add) * scale;
    syVectorNorm3D(&add);
    syVectorScale3D(&add, mag);
    syVectorAdd3D(&cobj->vec.at, &add);
}

// 0x8010C5C0
void func_ovl2_8010C5C0(CObj *cobj, Vec3f *arg1)
{
    Vec3f sp34;
    Vec3f pan;
    f32 unused;
    f32 mag;

    pan.x = cobj->vec.at.x + (gGMCameraCameraStruct.target_dist * arg1->x);
    pan.y = cobj->vec.at.y + (gGMCameraCameraStruct.target_dist * arg1->y);
    pan.z = cobj->vec.at.z + (gGMCameraCameraStruct.target_dist * arg1->z);

    syVectorDiff3D(&sp34, &pan, &cobj->vec.eye);
    mag = syVectorMag3D(&sp34) * 0.1F;
    syVectorNorm3D(&sp34);
    syVectorScale3D(&sp34, mag);
    syVectorAdd3D(&cobj->vec.eye, &sp34);
}

// 0x8010C670
void func_ovl2_8010C670(f32 dist)
{
    f32 temp_f0;
    f32 temp_f14;

    temp_f0 = gGMCameraCameraStruct.target_dist - dist;

    temp_f14 = temp_f0 * 0.075F;

    if (temp_f0 <= temp_f14)
    {
        gGMCameraCameraStruct.target_dist = dist;
    }
    else gGMCameraCameraStruct.target_dist -= temp_f14;
}

// 0x8010C6B8
void func_ovl2_8010C6B8(CObj *cobj)
{
    syVectorAdd3D(&cobj->vec.at, &gGMCameraCameraStruct.at_move);
    gGMCameraCameraStruct.at_move.x = gGMCameraCameraStruct.at_move.y = gGMCameraCameraStruct.at_move.z = 0.0F;
}

// 0x8010C6FC
void func_ovl2_8010C6FC(CObj *cobj)
{
    cobj->projection.persp.fovy = gGMCameraCameraStruct.fovy;
}

// 0x8010C70C
void gmCameraAdjustFOV(f32 fovy)
{
    gGMCameraCameraStruct.fovy += ((fovy - gGMCameraCameraStruct.fovy) * 0.1F);
}

// 0x8010C734
void jtgt_ovl2_8010C734(GObj *camera_gobj)
{
    CObj *cobj;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cobj = CObjGetStruct(camera_gobj);

    gmCameraUpdateInterests(&sp30, &sp2C, &sp28);
    gmCameraAdjustFOV(38.0F);
    gmCameraGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cobj, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cobj->vec.at, &sp3C);
    func_ovl2_8010C5C0(cobj, &sp3C);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010C7D0
void func_ovl2_8010C7D0(CObj *cobj, Vec3f *arg1)
{
    Vec3f sp3C;
    Vec3f sp30;
    f32 unused;
    f32 mag;
    f32 current;
    f32 step;

    sp30.x = cobj->vec.at.x + (gGMCameraCameraStruct.target_dist * arg1->x);
    sp30.y = cobj->vec.at.y + (gGMCameraCameraStruct.target_dist * arg1->y);
    sp30.z = cobj->vec.at.z + (gGMCameraCameraStruct.target_dist * arg1->z);

    grZebesAcidGetLevelInfo(&current, &step);

    current += (step + 3000.0F);

    if (sp30.y < current)
    {
        sp30.y = current;
    }
    syVectorDiff3D(&sp3C, &sp30, &cobj->vec.eye);
    mag = syVectorMag3D(&sp3C) * 0.1F;
    syVectorNorm3D(&sp3C);
    syVectorScale3D(&sp3C, mag);
    syVectorAdd3D(&cobj->vec.eye, &sp3C);
}

// 0x8010C8C4
void jtgt_ovl2_8010C8C4(GObj *camera_gobj)
{
    CObj *cobj;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cobj = CObjGetStruct(camera_gobj);

    gmCameraUpdateInterests(&sp30, &sp2C, &sp28);
    gmCameraAdjustFOV(38.0F);
    gmCameraGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cobj, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cobj->vec.at, &sp3C);
    func_ovl2_8010C7D0(cobj, &sp3C);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010C960
void func_ovl2_8010C960(GObj *camera_gobj)
{
    CObj *cobj;
    FTStruct *fp;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 temp_f12;

    cobj = CObjGetStruct(camera_gobj);

    sp30 = DObjGetStruct(gGMCameraCameraStruct.pl_pause_gobj)->translate.vec.f;

    fp = ftGetStruct(gGMCameraCameraStruct.pl_pause_gobj);

    sp30.y += fp->attr->cam_offset_y;

    gmCameraAdjustFOV(gGMCameraCameraStruct.unk_cmstruct_0x58);

    gGMCameraCameraStruct.target_dist = gGMCameraCameraStruct.unk_cmstruct_0x50;

    func_ovl2_8010C55C(cobj, &sp30, gGMCameraCameraStruct.unk_cmstruct_0x54);

    sp54.y = gGMCameraPauseCameraEyeX + gGMCameraCameraStruct.unk_cmstruct_0x48;
    sp54.x = gGMCameraPauseCameraEyeY + gGMCameraCameraStruct.unk_cmstruct_0x4C;

    sp48.y = -lbCommonSin(sp54.x);
    sp48.z = lbCommonCos(sp54.x);
    sp48.x = lbCommonSin(sp54.y) * sp48.z;
    sp48.z *= lbCommonCos(sp54.y);

    func_ovl2_8010C5C0(cobj, &sp48);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010CA7C
sb32 gmCameraCheckPausePlayerOutBounds(Vec3f *pos)
{
    if ((gmCameraGetBoundsMask(pos) != 0) || (pos->z < -1000.0F) || (pos->z > 1000.0F))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8010CAE0
void jtgt_ovl2_8010CAE0(GObj *camera_gobj)
{
    if (gmCameraCheckPausePlayerOutBounds(&DObjGetStruct(gGMCameraCameraStruct.pl_pause_gobj)->translate.vec.f) != FALSE)
    {
        dGMCameraProcList[gGMCameraCameraStruct.status_base](camera_gobj);
    }
    else func_ovl2_8010C960(camera_gobj);
}

// 0x8010CB48
void jtgt_ovl2_8010CB48(GObj *camera_gobj)
{
    CObj *cobj;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cobj = CObjGetStruct(camera_gobj);

    gmCameraUpdateInterests(&sp30, &sp2C, &sp28);
    gmCameraAdjustFOV(38.0F);
    gmCameraGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cobj, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C4A4(&cobj->vec.at, &sp3C);
    func_ovl2_8010C5C0(cobj, &sp3C);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010CBE4
void gmCameraPlayAnim(GObj *camera_gobj)
{
    CObj *cobj;

    gcPlayCamAnim(camera_gobj);

    cobj = CObjGetStruct(camera_gobj);

    cobj->vec.at.x += gGMCameraCameraStruct.all_move.x;
    cobj->vec.at.y += gGMCameraCameraStruct.all_move.y;
    cobj->vec.at.z += gGMCameraCameraStruct.all_move.z;
    cobj->vec.eye.x += gGMCameraCameraStruct.all_move.x;
    cobj->vec.eye.y += gGMCameraCameraStruct.all_move.y;
    cobj->vec.eye.z += gGMCameraCameraStruct.all_move.z;
}

// 0x8010CC74
void jtgt_ovl2_8010CC74(GObj *camera_gobj)
{
    gmCameraPlayAnim(camera_gobj);

    if (CObjGetStruct(camera_gobj)->anim_wait == AOBJ_ANIM_NULL)
    {
        gmCameraSetCameraStatusDefault();
    }
}

// 0x8010CCC0
void jtgt_ovl2_8010CCC0(GObj *camera_gobj)
{
    CObj *cobj;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cobj = CObjGetStruct(camera_gobj);

    gmCameraAdjustFOV(38.0F);

    syVectorDiff3D(&sp30, &gGMCameraCameraStruct.unk_cmstruct_0x5C, &cobj->vec.at);
    sp28 = syVectorMag3D(&sp30);
    sp2C = func_ovl2_8010C4D0() * sp28;
    syVectorNorm3D(&sp30);
    syVectorScale3D(&sp30, sp2C);
    syVectorAdd3D(&cobj->vec.at, &sp30);

    syVectorDiff3D(&sp30, &gGMCameraCameraStruct.unk_cmstruct_0x68, &cobj->vec.eye);
    sp2C = syVectorMag3D(&sp30) * 0.1F;
    syVectorNorm3D(&sp30);
    syVectorScale3D(&sp30, sp2C);
    syVectorAdd3D(&cobj->vec.eye, &sp30);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010CDAC
void jtgt_ovl2_8010CDAC(GObj *camera_gobj)
{
    Vec3f unused;
    f32 sp58;
    f32 temp_f12;
    Vec3f sp48;
    Vec3f sp3C;
    Vec3f sp30;
    CObj *cobj;
    FTStruct *fp;

    cobj = CObjGetStruct(camera_gobj);
    sp30 = DObjGetStruct(gGMCameraCameraStruct.pl_bonus_gobj)->translate.vec.f;

    fp = ftGetStruct(gGMCameraCameraStruct.pl_bonus_gobj);

    sp30.y += fp->attr->cam_offset_y;
    sp30.z = 0.0F;

    gmCameraSetBoundsPosition(&sp30);
    gmCameraAdjustFOV(gGMCameraCameraStruct.unk_cmstruct_0x88);

    gGMCameraCameraStruct.target_dist = gGMCameraCameraStruct.unk_cmstruct_0x80;

    func_ovl2_8010C55C(cobj, &sp30, gGMCameraCameraStruct.unk_cmstruct_0x84);

    sp58 = gGMCameraPauseCameraEyeX + gGMCameraCameraStruct.unk_cmstruct_0x78;
    temp_f12 = gGMCameraPauseCameraEyeY + gGMCameraCameraStruct.unk_cmstruct_0x7C;

    sp48.y = -lbCommonSin(temp_f12);
    sp48.z = lbCommonCos(temp_f12);
    sp48.x = lbCommonSin(sp58) * sp48.z;
    sp48.z *= lbCommonCos(sp58);
    func_ovl2_8010C5C0(cobj, &sp48);
    func_ovl2_8010C6B8(cobj);
    func_ovl2_8010C6FC(cobj);
}

// 0x8010CECC
void gmCameraRunGlobalFuncCamera(GObj *camera_gobj)
{
    gGMCameraCameraStruct.func_camera(camera_gobj);
}

// 0x8010CEF4
void gmCameraSetCameraStatusID(s32 status_id)
{
    gGMCameraCameraStruct.status_prev = gGMCameraCameraStruct.status_curr;
    gGMCameraCameraStruct.status_curr = status_id;

    gGMCameraCameraStruct.func_camera = dGMCameraProcList[status_id];
}

// 0x8010CF20
void gmCameraSetCameraStatusDefault(void)
{
    gmCameraSetCameraStatusID(gGMCameraCameraStruct.status_base);
}

// 0x8010CF44
void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    gmCameraSetCameraStatusID(1);

    gGMCameraCameraStruct.pl_pause_gobj = fighter_gobj;
    gGMCameraCameraStruct.unk_cmstruct_0x48 = arg1;
    gGMCameraCameraStruct.unk_cmstruct_0x4C = arg2;
    gGMCameraCameraStruct.unk_cmstruct_0x50 = arg3;
    gGMCameraCameraStruct.unk_cmstruct_0x54 = arg4;
    gGMCameraCameraStruct.unk_cmstruct_0x58 = arg5;
}

// 0x8010CFA8
void func_ovl2_8010CFA8(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    gmCameraSetCameraStatusID(5);

    gGMCameraCameraStruct.pl_bonus_gobj = fighter_gobj;
    gGMCameraCameraStruct.unk_cmstruct_0x78 = arg1;
    gGMCameraCameraStruct.unk_cmstruct_0x7C = arg2;
    gGMCameraCameraStruct.unk_cmstruct_0x80 = arg3;
    gGMCameraCameraStruct.unk_cmstruct_0x84 = arg4;
    gGMCameraCameraStruct.unk_cmstruct_0x88 = arg5;
}

// 0x8010D00C
void gmCameraSetCameraStatusPrev(void)
{
    gmCameraSetCameraStatusID(gGMCameraCameraStruct.status_prev);
}

// 0x8010D030
void func_ovl2_8010D030(AObjEvent32 *camanim_joint, f32 anim_frame, Vec3f *move)
{
    gmCameraSetCameraStatusID(2);

    gGMCameraCameraStruct.all_move = *move;

    gcAddCObjCamAnimJoint(CObjGetStruct(gGMCameraCameraGObj), camanim_joint, anim_frame);
    gmCameraPlayAnim(gGMCameraCameraGObj);
}

// 0x8010D0A4
void func_ovl2_8010D0A4(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp1C;

    gmCameraSetCameraStatusID(4);

    gGMCameraCameraStruct.unk_cmstruct_0x5C = *arg0;

    gGMCameraCameraStruct.unk_cmstruct_0x68 = *arg1;

    syVectorDiff3D(&sp1C, arg0, arg1);

    gGMCameraCameraStruct.target_dist = syVectorMag3D(&sp1C);
}

// 0x8010D128
void gmCameraSetAtMove(Vec3f *move)
{
    gGMCameraCameraStruct.at_move = *move;
}

// 0x8010D14C - Unused?
void func_ovl2_8010D14C(GObj *gGMCameraCameraGObj)
{
    return;
}

// 0x8010D154
f32 gmCameraGetMtxMaxValue(void)
{
    f32 ret, abs;
    s32 i, j;

    ret = 0.0F;

    for (i = 0; i < ARRAY_COUNT(gGMCameraMatrix[i]); i++)
    {
        for (j = 0; j < ARRAY_COUNT(gGMCameraMatrix); j++)
        {
            abs = ABSF(gGMCameraMatrix[i][j]);

            if (ret < abs)
            {
                ret = abs;
            }
        }
    }
    return ret;
}

// 0x8010D250
sb32 gmCameraLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    Mtx *temp_mtx;
    Mtx44f sp5C;
    u16 *perspnorm;
    f32 max;
    s32 unused;

    temp_mtx = gSYTaskmanGraphicsHeap.ptr;
    gSYTaskmanGraphicsHeap.ptr = (Mtx*)gSYTaskmanGraphicsHeap.ptr + 1;

    syMatrixPerspFastF(gGCMatrixPerspF, &cobj->projection.persp.norm, cobj->projection.persp.fovy, cobj->projection.persp.aspect, cobj->projection.persp.near, cobj->projection.persp.far, cobj->projection.persp.scale);
    syMatrixF2L(&gGCMatrixPerspF, temp_mtx);

    sGCMatrixProjectL = temp_mtx;

    syMatrixLookAtReflectF(&sp5C, &gGMCameraCameraStruct.look_at, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, cobj->vec.up.y, cobj->vec.up.z);
    guMtxCatF(sp5C, gGCMatrixPerspF, gGMCameraMatrix);

    max = gmCameraGetMtxMaxValue();

    if (max > 32000.0F)
    {
        syMatrixPerspFastF(gGCMatrixPerspF, &cobj->projection.persp.norm, cobj->projection.persp.fovy, cobj->projection.persp.aspect, cobj->projection.persp.near, cobj->projection.persp.far, 32000.0F / max);
        syMatrixF2L(&gGCMatrixPerspF, temp_mtx);

        sGCMatrixProjectL = temp_mtx;

        syMatrixLookAtReflectF(&sp5C, &gGMCameraCameraStruct.look_at, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, cobj->vec.up.y, cobj->vec.up.z);
        guMtxCatF(sp5C, gGCMatrixPerspF, gGMCameraMatrix);
    }
    syMatrixF2L(&gGMCameraMatrix, mtx);

    return 0;
}

// 0x8010D428
sb32 gmCameraPrepLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    gSPLookAtX(dls[0]++, &gGMCameraCameraStruct.look_at.l[0]);
    gSPLookAtY(dls[0]++, &gGMCameraCameraStruct.look_at.l[1]);

    gSPMatrix(dls[0]++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    gSPPerspNormalize(dls[0]++, cobj->projection.persp.norm);

    return 0;
}

// 0x8010D4B0
void func_ovl2_8010D4B0(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    return;
}

// 0x8010D4C0
void gmCameraBattleProcDisplay(GObj *camera_gobj)
{
    CObj *cobj = CObjGetStruct(camera_gobj);

    gcSetCameraMatrixMode(3);
    func_8001663C(gSYTaskmanDLHeads, cobj, 0);
    gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);
    gcRunFuncCamera(cobj, 0);

    gIFCommonPlayerInterface.magnify_mode = 0;
    gIFCommonPlayerInterface.arrows_flags = 0;

    // gIFCommonPlayerInterface.unk1 = 0;
    // gIFCommonPlayerInterface.unkE = 0;

    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(2) | COBJ_MASK_DLLINK(1);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(4);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(12) | COBJ_MASK_DLLINK(11) | 
                               COBJ_MASK_DLLINK(10) | COBJ_MASK_DLLINK(9)  |
                               COBJ_MASK_DLLINK(7)  | COBJ_MASK_DLLINK(6);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(15) | COBJ_MASK_DLLINK(14) | COBJ_MASK_DLLINK(13);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(18) | COBJ_MASK_DLLINK(17) | COBJ_MASK_DLLINK(16);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();

    gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gSYTaskmanDLHeads[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->camera_mask = COBJ_MASK_DLLINK(20) | COBJ_MASK_DLLINK(19);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    syTaskmanUpdateDLBuffers();
}

// 0x8010D7E8
GObj* gmCameraMakeBattleCamera(u8 tk1, u8 tk2, void (*proc)(GObj*))
{
    GObj *camera_gobj;
    CObj *cobj;
    Vec3f sp4C;
    f32 temp_f0;

    camera_gobj = gcMakeCameraGObj
    (
        nGCCommonKindMainCamera,
        NULL,
        nGCCommonLinkIDCamera,
        GOBJ_PRIORITY_DEFAULT,
        gmCameraBattleProcDisplay,
        50,
        0,
        ~0,
        FALSE,
        nGCProcessKindFunc,
        proc,
        3,
        FALSE
    );
    gGMCameraCameraGObj = camera_gobj;

    cobj = CObjGetStruct(camera_gobj);

    gcAddXObjForCamera(cobj, tk1, 0);

    if (tk2 != nGCMatrixKindNull)
    {
        gcAddXObjForCamera(cobj, tk2, 0);
    }
    cobj->projection.persp = dGMCameraPerspDefault;
    cobj->vec = dGMCameraCObjVecDefault;

    syRdpSetViewport(&cobj->viewport, gGMCameraCameraStruct.viewport_ulx, gGMCameraCameraStruct.viewport_uly, gGMCameraCameraStruct.viewport_lrx, gGMCameraCameraStruct.viewport_lry);

    // This (f32) cast is NECESSARY! scissor_ulx through scissor_lry are signed integers!
    cobj->projection.persp.aspect = ((f32)(gGMCameraCameraStruct.viewport_lrx - gGMCameraCameraStruct.viewport_ulx) / (f32)(gGMCameraCameraStruct.viewport_lry - gGMCameraCameraStruct.viewport_uly));

    cobj->flags |= COBJ_FLAG_DLBUFFERS;

    gGMCameraCameraStruct.target_dist = 10000.0F;

    gGMCameraPauseCameraEyeY = gGMCameraPauseCameraEyeX = 0.0F;

    sp4C.y = -lbCommonSin(gGMCameraPauseCameraEyeY);
    sp4C.z = lbCommonCos(gGMCameraPauseCameraEyeY);
    sp4C.x = lbCommonSin(gGMCameraPauseCameraEyeX) * sp4C.z;
    sp4C.z *= lbCommonCos(gGMCameraPauseCameraEyeX);

    cobj->vec.at.x = cobj->vec.at.z = 0.0F;
    cobj->vec.at.y = 300.0F;

    cobj->vec.eye.x = (gGMCameraCameraStruct.target_dist * sp4C.x);
    cobj->vec.eye.y = cobj->vec.at.y + (gGMCameraCameraStruct.target_dist * sp4C.y);
    cobj->vec.eye.z = (gGMCameraCameraStruct.target_dist * sp4C.z);

    gGMCameraCameraStruct.at_move.x = gGMCameraCameraStruct.at_move.y = gGMCameraCameraStruct.at_move.z = 0;

    switch (gSCManagerBattleState->gkind)
    {
    case nGRKindZebes:
        gGMCameraCameraStruct.status_curr = 6;
        break;

    case nGRKindInishie:
        gGMCameraCameraStruct.status_curr = 3;
        break;

    default:
        gGMCameraCameraStruct.status_curr = 0;
        // No break? Doesn't match otherwise :brainshock:
    }
    gGMCameraCameraStruct.status_base = gGMCameraCameraStruct.status_prev = gGMCameraCameraStruct.status_curr;
    gGMCameraCameraStruct.func_camera = dGMCameraProcList[gGMCameraCameraStruct.status_curr];
    gGMCameraCameraStruct.fovy = 38.0F;

    return camera_gobj;
}

// 0x8010DB00
void func_ovl2_8010DB00(void)
{
    gmCameraMakeBattleCamera(0x4C, nGCMatrixKindNull, gmCameraRunGlobalFuncCamera);
}

// 0x8010DB2C
GObj* func_ovl2_8010DB2C(void (*func_camera)(GObj*))
{
    return gmCameraMakeBattleCamera(nGCMatrixKindPerspFastF, 8, func_camera);
}

// 0x8010DB54
GObj* gmCameraMakeWallpaperCamera(void)
{
    GObj *camera_gobj = gcMakeCameraGObj
    (
        nGCCommonKindWallpaperCamera,
        NULL,
        nGCCommonLinkIDCamera,
        GOBJ_PRIORITY_DEFAULT,
        lbCommonDrawSprite,
        80,
        COBJ_MASK_DLLINK(0),
        -1,
        FALSE,
        nGCProcessKindFunc,
        NULL,
        1,
        FALSE
    );
    CObj *cobj = CObjGetStruct(camera_gobj);

    syRdpSetViewport
    (
        &cobj->viewport,
        gGMCameraCameraStruct.viewport_ulx,
        gGMCameraCameraStruct.viewport_uly,
        gGMCameraCameraStruct.viewport_lrx,
        gGMCameraCameraStruct.viewport_lry
    );
    return camera_gobj;
}

// 0x8010DC24
void func_ovl2_8010DC24(GObj *camera_gobj)
{
    CObj *cobj = CObjGetStruct(camera_gobj);

    if (gIFCommonPlayerInterface.magnify_mode != 0)
    {
        Vp_t *viewport;
        s32 ulx, uly, lrx, lry;

        gSPViewport(gSYTaskmanDLHeads[0]++, &CObjGetStruct(gGMCameraCameraGObj)->viewport);

        viewport = &CObjGetStruct(gGMCameraCameraGObj)->viewport.vp;

        ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
        uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);

        lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
        lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

        gDPSetScissor(gSYTaskmanDLHeads[0]++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);
    }
    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
    func_80017CC8(cobj);
}

// 0x8010DDC4
void func_ovl2_8010DDC4(void)
{
    CObj *cobj = CObjGetStruct
    (
        gcMakeCameraGObj
        (
            nGCCommonKindScissorCamera,
            NULL,
            nGCCommonLinkIDCamera,
            GOBJ_PRIORITY_DEFAULT,
            func_ovl2_8010DC24,
            20,
            COBJ_MASK_DLLINK(22),
            -1,
            FALSE,
            nGCProcessKindFunc,
            NULL,
            1,
            FALSE
        )
    );
    cobj->flags |= COBJ_FLAG_DLBUFFERS;
}

// 0x8010DE48
sb32 gmCameraPlayerMagnifyFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    f32 unused1;
    Mtx44f spA4;
    Mtx44f sp64;
    Vec3f *eye;
    Vec3f *at;
    Vec3f sp50;
    f32 unused2;
    f32 dist_x;
    f32 dist_y;
    f32 dist_z;

    eye = &CObjGetStruct(gGMCameraCameraGObj)->vec.eye;
    at = &CObjGetStruct(gGMCameraCameraGObj)->vec.at;

    dist_x = eye->x - at->x;
    dist_y = eye->y - at->y;
    dist_z = eye->z - at->z;

    syMatrixLookAtF(&sp64, 0.0F, 300.0F, sqrtf(SQUARE(dist_x) + SQUARE(dist_y) + SQUARE(dist_z)), 0.0F, 300.0F, 0.0F, 0.0F, 1.0F, 0.0F);
    guMtxCatF(sp64, gGCMatrixPerspF, spA4);

    sp50.z = 0.0F;
    sp50.y = 900.0F;
    sp50.x = 0.0F;

    func_ovl2_800EB924(CObjGetStruct(gGMCameraCameraGObj), spA4, &sp50, &dist_x, &dist_y);

    gIFCommonPlayerInterface.magnify_scale = (dist_y / 18.0F);

    if (gIFCommonPlayerInterface.magnify_scale > 3.0F)
    {
        gIFCommonPlayerInterface.magnify_scale = 3.0F;
    }
    syMatrixOrthoF(&spA4, -450.0F, 450.0F, -450.0F, 450.0F, 256.0F, 39936.0F, 1.0F);
    guMtxCatF(sp64, spA4, spA4);
    syMatrixF2L(&spA4, mtx);

    return 0;
}

// 0x8010E00C
sb32 gmCameraOrthoLookAtFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    Mtx44f sp78;
    Mtx44f sp38;
    f32 width;
    f32 height;

    width = (gGMCameraCameraStruct.viewport_width / 2);
    height = (gGMCameraCameraStruct.viewport_height / 2);

    syMatrixOrthoF(&sp78, -width, width, -height, height, 100.0F, 12800.0F, 1.0F);
    syMatrixLookAtF(&sp38, 0.0F, 0.0F, 1000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F);

    guMtxCatF(sp38, sp78, sp78);
    syMatrixF2L(&sp78, mtx);

    return 0;
}

// 0x8010E10C
sb32 gmCameraPrepProjectionFuncMatrix(Mtx *mtx, CObj *cobj, Gfx **dls)
{
    gSPMatrix(dls[0]++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    return 0;
}

// 0x8010E134
void func_ovl2_8010E134(GObj *camera_gobj)
{
    if (gIFCommonPlayerInterface.magnify_mode != 0)
    {
        CObj *cobj = CObjGetStruct(camera_gobj);

        gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);

        gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
        func_80017CC8(cobj);
    }
}

// 0x8010E1A4
void func_ovl2_8010E1A4(void)
{
    CObj *cobj = CObjGetStruct(gcMakeCameraGObj(nGCCommonKindUnkCamera1, NULL, nGCCommonLinkIDCamera, GOBJ_PRIORITY_DEFAULT, func_ovl2_8010E134, 30, COBJ_MASK_DLLINK(9), -1, 0, 1, 0, 1, 0));

    lbCommonInitCameraVec(cobj, 0x4D, 0);
    lbCommonInitCameraOrtho(cobj, 0x4E, 1);

    cobj->flags |= COBJ_FLAG_DLBUFFERS;

    gIFCommonPlayerInterface.magnify_mode = 0;
}

// 0x8010E254
void func_ovl2_8010E254(GObj *camera_gobj)
{
    gcSetCameraMatrixMode(1);

    if (gIFCommonPlayerInterface.arrows_flags != 0)
    {
        CObj *cobj = CObjGetStruct(camera_gobj);

        gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);

        gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
        func_80017CC8(cobj);
    }
}

// 0x8010E2D4
void func_ovl2_8010E2D4(void)
{
    CObj *cobj = CObjGetStruct(gcMakeCameraGObj(nGCCommonKindUnkCamera2, NULL, nGCCommonLinkIDCamera, GOBJ_PRIORITY_DEFAULT, func_ovl2_8010E254, 35, COBJ_MASK_DLLINK(8), -1, 0, 1, 0, 1, 0));

    lbCommonInitCameraOrtho(cobj, 0x54, 1);

    cobj->flags |= COBJ_FLAG_DLBUFFERS;

    gIFCommonPlayerInterface.arrows_flags = 0;
}

// 0x8010E374
GObj* func_ovl2_8010E374(void)
{
    GObj *camera_gobj = gcMakeCameraGObj(nGCCommonKindScissorCamera, NULL, nGCCommonLinkIDCamera, GOBJ_PRIORITY_DEFAULT, lbCommonDrawSprite, 20, (COBJ_MASK_DLLINK(24) | COBJ_MASK_DLLINK(23)), -1, 0, 1, 0, 1, 0);
    CObj *cobj = CObjGetStruct(camera_gobj);

    syRdpSetViewport(&cobj->viewport, (f32)gGMCameraCameraStruct.viewport_ulx, (f32)gGMCameraCameraStruct.viewport_uly, (f32)gGMCameraCameraStruct.viewport_lrx, (f32)gGMCameraCameraStruct.viewport_lry);

    cobj->flags |= COBJ_FLAG_DLBUFFERS;

    return camera_gobj;
}

// 0x8010E458
void func_ovl2_8010E458(GObj *camera_gobj)
{
    CObj *cobj = CObjGetStruct(camera_gobj);

    gcCaptureAll(camera_gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? 1 : 0);
}

// 0x8010E498
GObj* func_ovl2_8010E498(void)
{
    GObj *camera_gobj = gcMakeCameraGObj(nGCCommonKindScissorCamera, NULL, nGCCommonLinkIDCamera, GOBJ_PRIORITY_DEFAULT, func_ovl2_8010E458, 15, COBJ_MASK_DLLINK(25), -1, 0, 1, 0, 1, 0);
    CObj *cobj = CObjGetStruct(camera_gobj);

    syRdpSetViewport(&cobj->viewport, (f32)gGMCameraCameraStruct.viewport_ulx, (f32)gGMCameraCameraStruct.viewport_uly, (f32)gGMCameraCameraStruct.viewport_lrx, (f32)gGMCameraCameraStruct.viewport_lry);
    cobj->projection.persp.aspect = ((f32)gGMCameraCameraStruct.viewport_width / (f32)gGMCameraCameraStruct.viewport_height);

    return camera_gobj;
}

// 0x8010E598 - Are lrx and lry used as width and height respectively?
void gmCameraSetViewportDimensions(s32 ulx, s32 uly, s32 lrx, s32 lry)
{
    gGMCameraCameraStruct.viewport_ulx = ulx;
    gGMCameraCameraStruct.viewport_uly = uly;
    gGMCameraCameraStruct.viewport_lrx = lrx;
    gGMCameraCameraStruct.viewport_lry = lry;
    gGMCameraCameraStruct.viewport_center_x = (ulx + lrx) / 2;
    gGMCameraCameraStruct.viewport_center_y = (uly + lry) / 2;
    gGMCameraCameraStruct.viewport_width = lrx - ulx;
    gGMCameraCameraStruct.viewport_height = lry - uly;
}

// 0x8010E5F4 - Checks if input position is within the camera's viewport
sb32 gmCameraCheckTargetInBounds(f32 pos_x, f32 pos_y)
{
    f32 viewport_width = (gGMCameraCameraStruct.viewport_width / 2);
    f32 viewport_height = (gGMCameraCameraStruct.viewport_height / 2);

    if ((pos_x < -viewport_width) || (pos_x > viewport_width) || (pos_y < -viewport_height) || (pos_y > viewport_height))
    {
        return FALSE;
    }
    return TRUE;
}
