#include <ft/fighter.h>
#include <gr/ground.h>
#include <wp/weapon.h>
#include <if/interface.h>
#include <sc/scene.h>
#include <sys/ml.h>

extern Mtx44f gODMatrixPerspF;
extern mlRegion gSYGtlGraphicsHeap;

extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, u64, s32, s32, s32, s32, s32, s32);
extern void lbCommonScissorSpriteCamera(GObj*);
extern void func_80007080(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131460
GObj* gCMManagerCameraGObj;

// 0x80131464
f32 gCMManagerPauseCameraEyeY;

// 0x80131468
f32 gCMManagerPauseCameraEyeX; // Also from .bss

// 0x80131470
Mtx44f gCMManagerMtx; // Mtx44f?

// 0x801314B0
cmStruct gCMManagerCameraStruct;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012EB70
OMPersp dCMManagerPerspDefault = { NULL, 0, 38.0F, 15.0F / 11.0F, 256.0F, 39936.0F, 1.0F };

// 0x8012EB8C
CameraVec dCMManagerCameraVecDefault =
{
    NULL,
    { 1500.0F, 0.0F, 0.0F },
    {    0.0F, 0.0F, 0.0F },
    {    0.0F, 1.0F, 0.0F }
};

// 0x8012EBB4
void (*dCMManagerProcList[/* */])(GObj*) =
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
f32 dCMManagerPlayerZoomRanges[/* */] =
{
    0.00F,  // No players
    1.50F,  // 1 Player
    1.32F,  // 2 Players
    1.16F,  // 3 Players
    1.00F   // 4 Players
};

// 0x8010B810
u32 cmManagerGetCamBoundsMask(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gMPCollisionGroundData->cam_bound_left)
    {
        bounds |= CAMERA_FLAG_BOUND_LEFT;
    }
    if (pos->x > gMPCollisionGroundData->cam_bound_right)
    {
        bounds |= CAMERA_FLAG_BOUND_RIGHT;
    }
    if (pos->y < gMPCollisionGroundData->cam_bound_bottom)
    {
        bounds |= CAMERA_FLAG_BOUND_BOTTOM;
    }
    if (pos->y > gMPCollisionGroundData->cam_bound_top)
    {
        bounds |= CAMERA_FLAG_BOUND_TOP;
    }
    return bounds;
}

// 0x8010B8BC
void cmManagerSetCameraBoundsPos(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = cmManagerGetCamBoundsMask(pos);

        if (bounds != 0)
        {
            if (bounds & CAMERA_FLAG_BOUND_LEFT)
            {
                pos->x = gMPCollisionGroundData->cam_bound_left;
            }
            else if (bounds & CAMERA_FLAG_BOUND_RIGHT)
            {
                pos->x = gMPCollisionGroundData->cam_bound_right;
            }
            else if (bounds & CAMERA_FLAG_BOUND_BOTTOM)
            {
                pos->y = gMPCollisionGroundData->cam_bound_bottom;
            }
            else if (bounds & CAMERA_FLAG_BOUND_TOP)
            {
                pos->y = gMPCollisionGroundData->cam_bound_top;
            }
        }
        else break;
    }
}

// 0x8010B98C
u32 cmManagerGetCamTeamBoundsMask(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gMPCollisionGroundData->cam_bound_team_left)
    {
        bounds |= CAMERA_FLAG_BOUND_LEFT;
    }
    if (pos->x > gMPCollisionGroundData->cam_bound_team_right)
    {
        bounds |= CAMERA_FLAG_BOUND_RIGHT;
    }
    if (pos->y < gMPCollisionGroundData->cam_bound_team_bottom)
    {
        bounds |= CAMERA_FLAG_BOUND_BOTTOM;
    }
    if (pos->y > gMPCollisionGroundData->cam_bound_team_top)
    {
        bounds |= CAMERA_FLAG_BOUND_TOP;
    }
    return bounds;
}

// 0x8010BA38
void cmManagerSetCameraTeamBoundsPos(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = cmManagerGetCamTeamBoundsMask(pos);

        if (bounds != 0)
        {
            if (bounds & CAMERA_FLAG_BOUND_LEFT)
            {
                pos->x = gMPCollisionGroundData->cam_bound_team_left;
            }
            else if (bounds & CAMERA_FLAG_BOUND_RIGHT)
            {
                pos->x = gMPCollisionGroundData->cam_bound_team_right;
            }
            else if (bounds & CAMERA_FLAG_BOUND_BOTTOM)
            {
                pos->y = gMPCollisionGroundData->cam_bound_team_bottom;
            }
            else if (bounds & CAMERA_FLAG_BOUND_TOP)
            {
                pos->y = gMPCollisionGroundData->cam_bound_team_top;
            }
        }
        else break;
    }
}

// 0x8010BB08
void cmManagerSetCameraDeadUpStarPos(Vec3f *pos)
{
    pos->x = (gMPCollisionGroundData->cam_bound_top * pos->x) / gMPCollisionGroundData->map_bound_top;
    pos->y = gMPCollisionGroundData->cam_bound_top;
}

// 0x8010BB58
f32 cmManagerGetPlayerNumZoomRange(s32 player_num)
{
    f32 zoom = dCMManagerPlayerZoomRanges[player_num];

    if (gBattleState->game_type == nSCBattleGameTypeExplain)
    {
        zoom *= 0.75F;
    }
    return zoom;
}

// 0x8010BB98
f32 cmManagerCalcFighterZoomRange(ftStruct *fp, f32 camera_zoom)
{
    camera_zoom *= fp->camera_zoom_frame;
    camera_zoom *= fp->camera_zoom_range;

    if ((fp->status_info.status_id == nFTCommonStatusWait) && (fp->status_info.status_time_spent >= 120))
    {
        camera_zoom *= 0.75F;
    }
    return camera_zoom;
}

// 0x8010BBE4
f32 cmManagerGetCamTargetAtY(f32 dist)
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
void cmManagerUpdateFollowEntities(Vec3f *vec, f32 *hz, f32 *vt)
{
    s32 player_num;
    s32 cam_num;
    ftCamera ft_cam[GMCOMMON_PLAYERS_MAX];
    ftStruct *fp;
    wpStruct *wp;
    f32 pos_top;
    f32 pos_left;
    f32 pos_bottom;
    f32 ft_right;
    f32 ft_top;
    f32 ft_left;
    f32 ft_bottom;
    f32 zoom;
    GObj *fighter_gobj;
    ftStruct *cam_fp;
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

    fighter_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDFighter];

    player_num = 0;

    while (fighter_gobj != NULL)
    {
        fp = ftGetStruct(fighter_gobj);

        switch (fp->camera_mode)
        {
        default:
            if (player_num >= ARRAY_COUNT(ft_cam))
            {
                while (TRUE)
                {
                    syErrorPrintf("Player Num is Over for Camera!\n");
                    scManagerRunPrintGObjStatus();
                }
            }
            ft_cam[player_num].target_fp = fp;

            switch (fp->camera_mode)
            {
            default:
                ft_cam[player_num].target_pos = DObjGetStruct(fighter_gobj)->translate.vec.f;
                break;

            case nFTCameraModeEntry:
            case nFTCameraModeExplain:
                ft_cam[player_num].target_pos = fp->entry_pos;
                break;

            case nFTCameraModeDeadUpStar:
                ft_cam[player_num].target_pos = fp->status_vars.common.dead.pos;
                break;
            }
            ft_cam[player_num].target_pos.y += fp->attributes->cam_offset_y;

            if ((gBattleState->game_type == nSCBattleGameType1PGame) && (gBattleState->players[fp->player].is_spgame_team != FALSE))
            {
                switch (fp->camera_mode)
                {
                default: 
                    break;

                    // WHAT!?!? There are a few ways to match this, but it appears to be a control flow issue more than anything.
                    // Other solution #1: cast &ft_cam[player_num].target_pos to an integer
                    // Other solution #2: explicitly define any of the Vec3f* functions below as s32 functions (just forget about it)
                }
                cmManagerSetCameraTeamBoundsPos(&ft_cam[player_num].target_pos);
            }
            else switch (fp->camera_mode)
            {
            case nFTCameraModeDeadUpStar:
                cmManagerSetCameraDeadUpStarPos(&ft_cam[player_num].target_pos);
                break;

            default:
                cmManagerSetCameraBoundsPos(&ft_cam[player_num].target_pos);
                break;
            }
            player_num++;
            break;

        case nFTCameraModeRebirth:
            break;
        }
        fighter_gobj = fighter_gobj->link_next;
    }
    if (player_num != 0)
    {
        ft_top = 65536.0F;
        ft_bottom = -65536.0F;
        ft_left = -65536.0F;
        ft_right = 65536.0F;

        gm_bottom = 65536.0F;
        gm_top = -65536.0F;
        gm_left = 65536.0F;
        gm_right = -65536.0F;

        zoom = cmManagerGetPlayerNumZoomRange(player_num);

        for (cam_num = 0; cam_num < player_num; cam_num++)
        {
            cam_fp = ft_cam[cam_num].target_fp;

            adjust = cmManagerCalcFighterZoomRange(cam_fp, zoom);

            lr = ((cam_fp->camera_mode == nFTCameraModeEntry) || (cam_fp->camera_mode == nFTCameraModeExplain))     ?
                                                                        cam_fp->status_vars.common.entry.lr_entry   :
                                                                                                       cam_fp->lr;

            if (lr == nGMFacingL)
            {
                pos_left = ft_cam[cam_num].target_pos.x - (1000.0F * adjust);
                pos_right = ft_cam[cam_num].target_pos.x + (700.0F * adjust);
            }
            else
            {
                pos_left = ft_cam[cam_num].target_pos.x - (700.0F * adjust);
                pos_right = ft_cam[cam_num].target_pos.x + (1000.0F * adjust);
            }
            if (gm_left > pos_left)
            {
                gm_left = pos_left;
            }
            if (gm_right < pos_right)
            {
                gm_right = pos_right;
            }
            pos_top = ft_cam[cam_num].target_pos.y + (700.0F * adjust);
            pos_bottom = ft_cam[cam_num].target_pos.y + (-700.0F * adjust);

            if (gm_bottom > pos_bottom)
            {
                gm_bottom = pos_bottom;
            }
            if (gm_top < pos_top)
            {
                gm_top = pos_top;
            }
            if (ft_cam[cam_num].target_pos.x < ft_right) // ft_right = ft_right?
            {
                ft_right = ft_cam[cam_num].target_pos.x;
            }
            if (ft_cam[cam_num].target_pos.x > ft_left) // ft_left = ft_left?
            {
                ft_left = ft_cam[cam_num].target_pos.x;
            }
            if (ft_cam[cam_num].target_pos.y < ft_top) // ft_top = ft_top?
            {
                ft_top = ft_cam[cam_num].target_pos.y;
            }
            if (ft_cam[cam_num].target_pos.y > ft_bottom) // ft_bottom = ft_bottom?
            {
                ft_bottom = ft_cam[cam_num].target_pos.y;
            }
            ft_cam[cam_num].unk_ftcam_0x10 = adjust;
        }
        weapon_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDWeapon];

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

                cmManagerSetCameraBoundsPos(&weapon_pos);

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
        vec->y = (0.5F - cmManagerGetCamTargetAtY((*vt < *hz) ? *hz : *vt)) * (gm_bottom + gm_top);
        vec->z = 0.0F;
    }
    else
    {
        vec->x = vec->y = vec->z = 0.0F;

        *hz = *vt = 2000.0F;
    }
}

// 0x8010C200
void cmManagerGetClampDimensionsMax(f32 hz, f32 vt, f32 *max)
{
    f32 maxd;

    vt /= lbCommonTan(F_CLC_DTOR32(gCMManagerCameraStruct.fovy * 0.5F));
    hz /= ((lbCommonTan(F_CLC_DTOR32(gCMManagerCameraStruct.fovy * 0.5F)) * 
    gCMManagerCameraStruct.viewport_width) / gCMManagerCameraStruct.viewport_height);

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
void cmManagerGetAdjustAtAngle(Vec3f *at, Vec3f *vec, f32 x, f32 y)
{
    f32 angle_x;
    f32 angle_y;

    angle_x = gCMManagerPauseCameraEyeY + y + gMPCollisionGroundData->light_angle.z;

    vec->y = -lbCommonSin(angle_x);
    vec->z = lbCommonCos(angle_x);

    angle_y = gCMManagerPauseCameraEyeX + x;

    vec->x = (lbCommonSin(angle_y) * vec->z);

    vec->z *= lbCommonCos(angle_y);
}

// 0x8010C3C0
void func_ovl2_8010C3C0(Vec3f *at, Vec3f *vec)
{
    f32 var_f0;
    f32 var_f2;

    var_f2 = -F_CLC_DTOR32((at->y + (-900.0F)) / 133.0F);

    if (var_f2 > F_CLC_DTOR32(5.0F)) // 0.08726647F
    {
        var_f2 = F_CLC_DTOR32(5.0F);
    }
    if (var_f2 < F_CLC_DTOR32(-7.0F)) // -0.122173056F
    {
        var_f2 = F_CLC_DTOR32(-7.0F);
    }
    var_f0 = -F_CLC_DTOR32(at->x / 133.0F);

    if (var_f0 > F_CLC_DTOR32(17.5F)) // 0.30543265F
    {
        var_f0 = F_CLC_DTOR32(17.5F);
    }
    if (var_f0 < F_CLC_DTOR32(-17.5F)) // -0.30543265F
    {
        var_f0 = F_CLC_DTOR32(-17.5F);
    }
    cmManagerGetAdjustAtAngle(at, vec, var_f0, var_f2);
}

// 0x8010C4A4
void func_ovl2_8010C4A4(Vec3f *arg0, Vec3f *arg1)
{
    cmManagerGetAdjustAtAngle(arg0, arg1, 0.0F, 0.0F);
}

// 0x8010C4D0
f32 func_ovl2_8010C4D0(void)
{
    if (gCMManagerCameraStruct.target_dist > 15000.0F)
    {
        return 0.1F;
    }
    else if (gCMManagerCameraStruct.target_dist < 2000.0F)
    {
        return 0.05F;
    }
    return ((1.0F - ((gCMManagerCameraStruct.target_dist - 2000.0F) / 13000.0F)) * 0.05F) + .05F; // Needs to be two different 0.05s lol
}

// 0x8010C55C
void func_ovl2_8010C55C(Camera *cam, Vec3f *arg1, f32 arg2)
{
    f32 mag;
    f32 unused;
    Vec3f sp1C;

    lbVector_Vec3fSubtract(&sp1C, arg1, &cam->vec.at);
    mag = lbVector_Vec3fMagnitude(&sp1C) * arg2;
    lbVector_Vec3fNormalize(&sp1C);
    lbVector_Vec3fScale(&sp1C, mag);
    lbVector_Vec3fAddTo(&cam->vec.at, &sp1C);
}

// 0x8010C5C0
void func_ovl2_8010C5C0(Camera *cam, Vec3f *arg1)
{
    Vec3f sp34;
    Vec3f pan;
    f32 unused;
    f32 mag;

    pan.x = cam->vec.at.x + (gCMManagerCameraStruct.target_dist * arg1->x);
    pan.y = cam->vec.at.y + (gCMManagerCameraStruct.target_dist * arg1->y);
    pan.z = cam->vec.at.z + (gCMManagerCameraStruct.target_dist * arg1->z);

    lbVector_Vec3fSubtract(&sp34, &pan, &cam->vec.eye);
    mag = lbVector_Vec3fMagnitude(&sp34) * 0.1F;
    lbVector_Vec3fNormalize(&sp34);
    lbVector_Vec3fScale(&sp34, mag);
    lbVector_Vec3fAddTo(&cam->vec.eye, &sp34);
}

// 0x8010C670
void func_ovl2_8010C670(f32 dist)
{
    f32 temp_f0;
    f32 temp_f14;

    temp_f0 = gCMManagerCameraStruct.target_dist - dist;

    temp_f14 = temp_f0 * 0.075F;

    if (temp_f0 <= temp_f14)
    {
        gCMManagerCameraStruct.target_dist = dist;
    }
    else gCMManagerCameraStruct.target_dist -= temp_f14;
}

// 0x8010C6B8
void func_ovl2_8010C6B8(Camera *cam)
{
    lbVector_Vec3fAddTo(&cam->vec.at, &gCMManagerCameraStruct.at_move);
    gCMManagerCameraStruct.at_move.x = gCMManagerCameraStruct.at_move.y = gCMManagerCameraStruct.at_move.z = 0.0F;
}

// 0x8010C6FC
void func_ovl2_8010C6FC(Camera *cam)
{
    cam->projection.persp.fovy = gCMManagerCameraStruct.fovy;
}

// 0x8010C70C
void cmManagerAdjustFOV(f32 fovy)
{
    gCMManagerCameraStruct.fovy += ((fovy - gCMManagerCameraStruct.fovy) * 0.1F);
}

// 0x8010C734
void jtgt_ovl2_8010C734(GObj *camera_gobj)
{
    Camera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = CameraGetStruct(camera_gobj);

    cmManagerUpdateFollowEntities(&sp30, &sp2C, &sp28);
    cmManagerAdjustFOV(38.0F);
    cmManagerGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cam->vec.at, &sp3C);
    func_ovl2_8010C5C0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010C7D0
void func_ovl2_8010C7D0(Camera *cam, Vec3f *arg1)
{
    Vec3f sp3C;
    Vec3f sp30;
    f32 unused;
    f32 mag;
    f32 current;
    f32 step;

    sp30.x = cam->vec.at.x + (gCMManagerCameraStruct.target_dist * arg1->x);
    sp30.y = cam->vec.at.y + (gCMManagerCameraStruct.target_dist * arg1->y);
    sp30.z = cam->vec.at.z + (gCMManagerCameraStruct.target_dist * arg1->z);

    grZebesAcidGetLevelInfo(&current, &step);

    current += (step + 3000.0F);

    if (sp30.y < current)
    {
        sp30.y = current;
    }
    lbVector_Vec3fSubtract(&sp3C, &sp30, &cam->vec.eye);
    mag = lbVector_Vec3fMagnitude(&sp3C) * 0.1F;
    lbVector_Vec3fNormalize(&sp3C);
    lbVector_Vec3fScale(&sp3C, mag);
    lbVector_Vec3fAddTo(&cam->vec.eye, &sp3C);
}

// 0x8010C8C4
void jtgt_ovl2_8010C8C4(GObj *camera_gobj)
{
    Camera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = CameraGetStruct(camera_gobj);

    cmManagerUpdateFollowEntities(&sp30, &sp2C, &sp28);
    cmManagerAdjustFOV(38.0F);
    cmManagerGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cam->vec.at, &sp3C);
    func_ovl2_8010C7D0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010C960
void func_ovl2_8010C960(GObj *camera_gobj)
{
    Camera *cam;
    ftStruct *fp;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 temp_f12;

    cam = CameraGetStruct(camera_gobj);

    sp30 = DObjGetStruct(gCMManagerCameraStruct.pl_pause_gobj)->translate.vec.f;

    fp = ftGetStruct(gCMManagerCameraStruct.pl_pause_gobj);

    sp30.y += fp->attributes->cam_offset_y;

    cmManagerAdjustFOV(gCMManagerCameraStruct.unk_cmstruct_0x58);

    gCMManagerCameraStruct.target_dist = gCMManagerCameraStruct.unk_cmstruct_0x50;

    func_ovl2_8010C55C(cam, &sp30, gCMManagerCameraStruct.unk_cmstruct_0x54);

    sp54.y = gCMManagerPauseCameraEyeX + gCMManagerCameraStruct.unk_cmstruct_0x48;
    sp54.x = gCMManagerPauseCameraEyeY + gCMManagerCameraStruct.unk_cmstruct_0x4C;

    sp48.y = -lbCommonSin(sp54.x);
    sp48.z = lbCommonCos(sp54.x);
    sp48.x = lbCommonSin(sp54.y) * sp48.z;
    sp48.z *= lbCommonCos(sp54.y);

    func_ovl2_8010C5C0(cam, &sp48);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CA7C
sb32 cmManagerCheckPausePlayerOutBounds(Vec3f *pos)
{
    if ((cmManagerGetCamBoundsMask(pos) != 0) || (pos->z < -1000.0F) || (pos->z > 1000.0F))
    {
        return TRUE;
    }
    else return FALSE;
}

// 0x8010CAE0
void jtgt_ovl2_8010CAE0(GObj *camera_gobj)
{
    if (cmManagerCheckPausePlayerOutBounds(&DObjGetStruct(gCMManagerCameraStruct.pl_pause_gobj)->translate.vec.f) != FALSE)
    {
        dCMManagerProcList[gCMManagerCameraStruct.status_default](camera_gobj);
    }
    else func_ovl2_8010C960(camera_gobj);
}

// 0x8010CB48
void jtgt_ovl2_8010CB48(GObj *camera_gobj)
{
    Camera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = CameraGetStruct(camera_gobj);

    cmManagerUpdateFollowEntities(&sp30, &sp2C, &sp28);
    cmManagerAdjustFOV(38.0F);
    cmManagerGetClampDimensionsMax(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C4A4(&cam->vec.at, &sp3C);
    func_ovl2_8010C5C0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CBE4
void func_ovl2_8010CBE4(GObj *camera_gobj)
{
    Camera *cam;

    gcPlayCamAnim(camera_gobj);

    cam = CameraGetStruct(camera_gobj);

    cam->vec.at.x += gCMManagerCameraStruct.all_move.x;
    cam->vec.at.y += gCMManagerCameraStruct.all_move.y;
    cam->vec.at.z += gCMManagerCameraStruct.all_move.z;
    cam->vec.eye.x += gCMManagerCameraStruct.all_move.x;
    cam->vec.eye.y += gCMManagerCameraStruct.all_move.y;
    cam->vec.eye.z += gCMManagerCameraStruct.all_move.z;
}

// 0x8010CC74
void jtgt_ovl2_8010CC74(GObj *camera_gobj)
{
    func_ovl2_8010CBE4(camera_gobj);

    if (CameraGetStruct(camera_gobj)->anim_remain == AOBJ_ANIM_NULL)
    {
        cmManagerSetCameraStatusDefault();
    }
}

// 0x8010CCC0
void jtgt_ovl2_8010CCC0(GObj *camera_gobj)
{
    Camera *cam;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = CameraGetStruct(camera_gobj);

    cmManagerAdjustFOV(38.0F);

    lbVector_Vec3fSubtract(&sp30, &gCMManagerCameraStruct.unk_cmstruct_0x5C, &cam->vec.at);
    sp28 = lbVector_Vec3fMagnitude(&sp30);
    sp2C = func_ovl2_8010C4D0() * sp28;
    lbVector_Vec3fNormalize(&sp30);
    lbVector_Vec3fScale(&sp30, sp2C);
    lbVector_Vec3fAddTo(&cam->vec.at, &sp30);

    lbVector_Vec3fSubtract(&sp30, &gCMManagerCameraStruct.unk_cmstruct_0x68, &cam->vec.eye);
    sp2C = lbVector_Vec3fMagnitude(&sp30) * 0.1F;
    lbVector_Vec3fNormalize(&sp30);
    lbVector_Vec3fScale(&sp30, sp2C);
    lbVector_Vec3fAddTo(&cam->vec.eye, &sp30);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
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
    Camera *cam;
    ftStruct *fp;

    cam = CameraGetStruct(camera_gobj);
    sp30 = DObjGetStruct(gCMManagerCameraStruct.pl_bonus_gobj)->translate.vec.f;

    fp = ftGetStruct(gCMManagerCameraStruct.pl_bonus_gobj);

    sp30.y += fp->attributes->cam_offset_y;
    sp30.z = 0.0F;

    cmManagerSetCameraBoundsPos(&sp30);
    cmManagerAdjustFOV(gCMManagerCameraStruct.unk_cmstruct_0x88);

    gCMManagerCameraStruct.target_dist = gCMManagerCameraStruct.unk_cmstruct_0x80;

    func_ovl2_8010C55C(cam, &sp30, gCMManagerCameraStruct.unk_cmstruct_0x84);

    sp58 = gCMManagerPauseCameraEyeX + gCMManagerCameraStruct.unk_cmstruct_0x78;
    temp_f12 = gCMManagerPauseCameraEyeY + gCMManagerCameraStruct.unk_cmstruct_0x7C;

    sp48.y = -lbCommonSin(temp_f12);
    sp48.z = lbCommonCos(temp_f12);
    sp48.x = lbCommonSin(sp58) * sp48.z;
    sp48.z *= lbCommonCos(sp58);
    func_ovl2_8010C5C0(cam, &sp48);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CECC
void cmManagerRunGlobalProcCamera(GObj *camera_gobj)
{
    gCMManagerCameraStruct.proc_camera(camera_gobj);
}

// 0x8010CEF4
void cmManagerSetCameraStatusID(s32 status_id)
{
    gCMManagerCameraStruct.status_prev = gCMManagerCameraStruct.status_curr;
    gCMManagerCameraStruct.status_curr = status_id;

    gCMManagerCameraStruct.proc_camera = dCMManagerProcList[status_id];
}

// 0x8010CF20
void cmManagerSetCameraStatusDefault(void)
{
    cmManagerSetCameraStatusID(gCMManagerCameraStruct.status_default);
}

// 0x8010CF44
void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    cmManagerSetCameraStatusID(1);

    gCMManagerCameraStruct.pl_pause_gobj = fighter_gobj;
    gCMManagerCameraStruct.unk_cmstruct_0x48 = arg1;
    gCMManagerCameraStruct.unk_cmstruct_0x4C = arg2;
    gCMManagerCameraStruct.unk_cmstruct_0x50 = arg3;
    gCMManagerCameraStruct.unk_cmstruct_0x54 = arg4;
    gCMManagerCameraStruct.unk_cmstruct_0x58 = arg5;
}

// 0x8010CFA8
void func_ovl2_8010CFA8(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    cmManagerSetCameraStatusID(5);

    gCMManagerCameraStruct.pl_bonus_gobj = fighter_gobj;
    gCMManagerCameraStruct.unk_cmstruct_0x78 = arg1;
    gCMManagerCameraStruct.unk_cmstruct_0x7C = arg2;
    gCMManagerCameraStruct.unk_cmstruct_0x80 = arg3;
    gCMManagerCameraStruct.unk_cmstruct_0x84 = arg4;
    gCMManagerCameraStruct.unk_cmstruct_0x88 = arg5;
}

// 0x8010D00C
void cmManagerSetCameraStatusPrev(void)
{
    cmManagerSetCameraStatusID(gCMManagerCameraStruct.status_prev);
}

// 0x8010D030
void func_ovl2_8010D030(AObjEvent *camanim_joint, f32 anim_frame, Vec3f *arg2)
{
    cmManagerSetCameraStatusID(2);

    gCMManagerCameraStruct.all_move = *arg2;

    gcAddCameraCamAnimJoint(CameraGetStruct(gCMManagerCameraGObj), camanim_joint, anim_frame);
    func_ovl2_8010CBE4(gCMManagerCameraGObj);
}

// 0x8010D0A4
void func_ovl2_8010D0A4(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp1C;

    cmManagerSetCameraStatusID(4);

    gCMManagerCameraStruct.unk_cmstruct_0x5C = *arg0;

    gCMManagerCameraStruct.unk_cmstruct_0x68 = *arg1;

    lbVector_Vec3fSubtract(&sp1C, arg0, arg1);

    gCMManagerCameraStruct.target_dist = lbVector_Vec3fMagnitude(&sp1C);
}

// 0x8010D128
void cmManagerSetAtMove(Vec3f *move)
{
    gCMManagerCameraStruct.at_move = *move;
}

// 0x8010D14C - Unused?
void func_ovl2_8010D14C(GObj *gCMManagerCameraGObj)
{
    return;
}

// 0x8010D154
f32 cmManagerGetMtxMaxValue(void)
{
    f32 ret, abs;
    s32 i, j;

    ret = 0.0F;

    for (i = 0; i < ARRAY_COUNT(gCMManagerMtx[i]); i++)
    {
        for (j = 0; j < ARRAY_COUNT(gCMManagerMtx); j++)
        {
            abs = ABSF(gCMManagerMtx[i][j]);

            if (ret < abs)
            {
                ret = abs;
            }
        }
    }
    return ret;
}

// 0x8010D250
sb32 cmManagerLookAtProcMatrix(Mtx *mtx, Camera *cam, Gfx **dls)
{
    Mtx *temp_mtx;
    Mtx44f sp5C;
    u16 *perspnorm;
    f32 max;
    s32 unused;

    temp_mtx = gSYGtlGraphicsHeap.ptr;
    gSYGtlGraphicsHeap.ptr = (Mtx*)gSYGtlGraphicsHeap.ptr + 1;

    syMatrixPerspFastF(gODMatrixPerspF, &cam->projection.persp.norm, cam->projection.persp.fovy, cam->projection.persp.aspect, cam->projection.persp.near, cam->projection.persp.far, cam->projection.persp.scale);
    syMatrixF2L(gODMatrixPerspF, temp_mtx);

    sODMatrixProjectL = temp_mtx;

    syMatrixLookAtReflectF(sp5C, &gCMManagerCameraStruct.look_at, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, cam->vec.up.y, cam->vec.up.z);
    guMtxCatF(sp5C, gODMatrixPerspF, gCMManagerMtx);

    max = cmManagerGetMtxMaxValue();

    if (max > 32000.0F)
    {
        syMatrixPerspFastF(gODMatrixPerspF, &cam->projection.persp.norm, cam->projection.persp.fovy, cam->projection.persp.aspect, cam->projection.persp.near, cam->projection.persp.far, 32000.0F / max);
        syMatrixF2L(gODMatrixPerspF, temp_mtx);

        sODMatrixProjectL = temp_mtx;

        syMatrixLookAtReflectF(sp5C, &gCMManagerCameraStruct.look_at, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, cam->vec.up.y, cam->vec.up.z);
        guMtxCatF(sp5C, gODMatrixPerspF, gCMManagerMtx);
    }
    syMatrixF2L(gCMManagerMtx, mtx);

    return 0;
}

// 0x8010D428
sb32 cmManagerPrepLookAtProcMatrix(Mtx *mtx, Camera *cam, Gfx **dls)
{
    gSPLookAtX(dls[0]++, &gCMManagerCameraStruct.look_at.l[0]);
    gSPLookAtY(dls[0]++, &gCMManagerCameraStruct.look_at.l[1]);

    gSPMatrix(dls[0]++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    gSPPerspNormalize(dls[0]++, cam->projection.persp.norm);

    return 0;
}

// 0x8010D4B0
void func_ovl2_8010D4B0(Mtx *mtx, Camera *cam, Gfx **dls)
{
    return;
}

// 0x8010D4C0
void func_ovl2_8010D4C0(GObj *camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    gcSetCameraMatrixMode(3);
    func_8001663C(gDisplayListHead, cam, 0);
    gcPrepCameraMatrix(gDisplayListHead, cam);
    gcRunProcCamera(cam, 0);

    gIFCommonPlayerInterface.ifmagnify_mode = 0;
    gIFCommonPlayerInterface.arrows_flags = 0;

    // gIFCommonPlayerInterface.unk1 = 0;
    // gIFCommonPlayerInterface.unkE = 0;

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 6;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 16;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 0x1EC0;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 0xE000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 0x70000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_gobj_0x30 = 0x180000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();
}

// 0x8010D7E8
GObj* cmManagerMakeBattleCamera(u8 tk1, u8 tk2, void (*proc)(GObj*))
{
    GObj *camera_gobj;
    Camera *cam;
    Vec3f sp4C;
    f32 temp_f0;

    camera_gobj = func_8000B93C(nOMObjCommonKindMainCamera, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, func_ovl2_8010D4C0, 50, 0, -1, 0, 1, proc, 3, 0);

    gCMManagerCameraGObj = camera_gobj;

    cam = CameraGetStruct(camera_gobj);

    gcAddOMMtxForCamera(cam, tk1, 0);

    if (tk2 != nOMTransformNull)
    {
        gcAddOMMtxForCamera(cam, tk2, 0);
    }
    cam->projection.persp = dCMManagerPerspDefault;
    cam->vec = dCMManagerCameraVecDefault;

    func_80007080(&cam->viewport, gCMManagerCameraStruct.viewport_ulx, gCMManagerCameraStruct.viewport_uly, gCMManagerCameraStruct.viewport_lrx, gCMManagerCameraStruct.viewport_lry);

    // This (f32) cast is NECESSARY! scissor_ulx through scissor_lry are signed integers!
    cam->projection.persp.aspect = ((f32)(gCMManagerCameraStruct.viewport_lrx - gCMManagerCameraStruct.viewport_ulx) / (f32)(gCMManagerCameraStruct.viewport_lry - gCMManagerCameraStruct.viewport_uly));

    cam->flags |= 4;

    gCMManagerCameraStruct.target_dist = 10000.0F;

    gCMManagerPauseCameraEyeY = gCMManagerPauseCameraEyeX = 0.0F;

    sp4C.y = -lbCommonSin(gCMManagerPauseCameraEyeY);
    sp4C.z = lbCommonCos(gCMManagerPauseCameraEyeY);
    sp4C.x = lbCommonSin(gCMManagerPauseCameraEyeX) * sp4C.z;
    sp4C.z *= lbCommonCos(gCMManagerPauseCameraEyeX);

    cam->vec.at.x = cam->vec.at.z = 0.0F;
    cam->vec.at.y = 300.0F;

    cam->vec.eye.x = (gCMManagerCameraStruct.target_dist * sp4C.x);
    cam->vec.eye.y = cam->vec.at.y + (gCMManagerCameraStruct.target_dist * sp4C.y);
    cam->vec.eye.z = (gCMManagerCameraStruct.target_dist * sp4C.z);

    gCMManagerCameraStruct.at_move.x = gCMManagerCameraStruct.at_move.y = gCMManagerCameraStruct.at_move.z = 0;

    switch (gBattleState->gr_kind)
    {
    case nGRKindZebes:
        gCMManagerCameraStruct.status_curr = 6;
        break;

    case nGRKindInishie:
        gCMManagerCameraStruct.status_curr = 3;
        break;

    default:
        gCMManagerCameraStruct.status_curr = 0;
        // No break? Doesn't match otherwise :brainshock:
    }
    gCMManagerCameraStruct.status_default = gCMManagerCameraStruct.status_prev = gCMManagerCameraStruct.status_curr;
    gCMManagerCameraStruct.proc_camera = dCMManagerProcList[gCMManagerCameraStruct.status_curr];
    gCMManagerCameraStruct.fovy = 38.0F;

    return camera_gobj;
}

// 0x8010DB00
void func_ovl2_8010DB00(void)
{
    cmManagerMakeBattleCamera(0x4C, nOMTransformNull, cmManagerRunGlobalProcCamera);
}

// 0x8010DB2C
GObj* func_ovl2_8010DB2C(void (*proc_camera)(GObj*))
{
    return cmManagerMakeBattleCamera(nOMTransformPerspFastF, 8, proc_camera);
}

// 0x8010DB54
GObj* cmManagerMakeWallpaperCamera(void)
{
    GObj *camera_gobj = func_8000B93C(nOMObjCommonKindWallpaperCamera, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 80, CAMERA_MASK_DLLINK(0), -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCMManagerCameraStruct.viewport_ulx, (f32)gCMManagerCameraStruct.viewport_uly, (f32)gCMManagerCameraStruct.viewport_lrx, (f32)gCMManagerCameraStruct.viewport_lry);

    return camera_gobj;
}

// 0x8010DC24
void func_ovl2_8010DC24(GObj *camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    if (gIFCommonPlayerInterface.ifmagnify_mode != 0)
    {
        Vp_t *viewport;
        s32 ulx, uly, lrx, lry;

        gSPViewport(gDisplayListHead[0]++, &CameraGetStruct(gCMManagerCameraGObj)->viewport);

        viewport = &CameraGetStruct(gCMManagerCameraGObj)->viewport.vp;

        ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
        uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);

        lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
        lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

        gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);
    }
    func_80017B80(camera_gobj, (cam->flags & 0x8) ? 1 : 0);
    func_80017CC8(cam);
}

// 0x8010DDC4
void func_ovl2_8010DDC4(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(nOMObjCommonKindScissorCamera, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, func_ovl2_8010DC24, 20, CAMERA_MASK_DLLINK(22), -1, 0, 1, 0, 1, 0));

    cam->flags |= 4;
}

// 0x8010DE48
sb32 cmManagerPlayerMagnifyProcMatrix(Mtx *mtx, Camera *cam, Gfx **dls)
{
    f32 unused1;
    Mtx44f spA4;
    Mtx44f sp64;
    Vec3f *eye;
    Vec3f *at;
    Vec3f sp50;
    f32 unused2;
    f32 var_x;
    f32 var_y;
    f32 var_z;

    eye = &CameraGetStruct(gCMManagerCameraGObj)->vec.eye;
    at = &CameraGetStruct(gCMManagerCameraGObj)->vec.at;

    var_x = eye->x - at->x;
    var_y = eye->y - at->y;
    var_z = eye->z - at->z;

    syMatrixLookAtF(sp64, 0.0F, 300.0F, sqrtf(SQUARE(var_x) + SQUARE(var_y) + SQUARE(var_z)), 0.0F, 300.0F, 0.0F, 0.0F, 1.0F, 0.0F);
    guMtxCatF(sp64, gODMatrixPerspF, spA4);

    sp50.z = 0.0F;
    sp50.y = 900.0F;
    sp50.x = 0.0F;

    func_ovl2_800EB924(CameraGetStruct(gCMManagerCameraGObj), spA4, &sp50, &var_x, &var_y);

    gIFCommonPlayerInterface.ifmagnify_scale = (var_y / 18.0F);

    if (gIFCommonPlayerInterface.ifmagnify_scale > 3.0F)
    {
        gIFCommonPlayerInterface.ifmagnify_scale = 3.0F;
    }
    syMatrixOrthoF(spA4, -450.0F, 450.0F, -450.0F, 450.0F, 256.0F, 39936.0F, 1.0F);
    guMtxCatF(sp64, spA4, spA4);
    syMatrixF2L(spA4, mtx);

    return 0;
}

// 0x8010E00C
sb32 cmManageOrthoLookAtProcMatrix(Mtx *mtx, Camera *cam, Gfx **dls)
{
    Mtx44f sp78;
    Mtx44f sp38;
    f32 width;
    f32 height;

    width = (gCMManagerCameraStruct.viewport_width / 2);
    height = (gCMManagerCameraStruct.viewport_height / 2);

    syMatrixOrthoF(sp78, -width, width, -height, height, 100.0F, 12800.0F, 1.0F);
    syMatrixLookAtF(sp38, 0.0F, 0.0F, 1000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F);

    guMtxCatF(sp38, sp78, sp78);
    syMatrixF2L(sp78, mtx);

    return 0;
}

// 0x8010E10C
sb32 cmManagerPrepProjectionProcMatrix(Mtx *mtx, Camera *cam, Gfx **dls)
{
    gSPMatrix(dls[0]++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    return 0;
}

// 0x8010E134
void func_ovl2_8010E134(GObj *camera_gobj)
{
    if (gIFCommonPlayerInterface.ifmagnify_mode != 0)
    {
        Camera *cam = CameraGetStruct(camera_gobj);

        gcPrepCameraMatrix(gDisplayListHead, cam);

        func_80017B80(camera_gobj, (cam->flags & 0x8) ? 1 : 0);
        func_80017CC8(cam);
    }
}

// 0x8010E1A4
void func_ovl2_8010E1A4(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(nOMObjCommonKindUnkCamera1, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, func_ovl2_8010E134, 30, CAMERA_MASK_DLLINK(9), -1, 0, 1, 0, 1, 0));

    lbCommonInitCameraVec(cam, 0x4D, 0);
    lbCommonInitCameraOrtho(cam, 0x4E, 1);

    cam->flags |= 0x4;

    gIFCommonPlayerInterface.ifmagnify_mode = 0;
}

// 0x8010E254
void func_ovl2_8010E254(GObj *camera_gobj)
{
    gcSetCameraMatrixMode(1);

    if (gIFCommonPlayerInterface.arrows_flags != 0)
    {
        Camera *cam = CameraGetStruct(camera_gobj);

        gcPrepCameraMatrix(gDisplayListHead, cam);

        func_80017B80(camera_gobj, (cam->flags & 0x8) ? 1 : 0);
        func_80017CC8(cam);
    }
}

// 0x8010E2D4
void func_ovl2_8010E2D4(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(nOMObjCommonKindUnkCamera2, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, func_ovl2_8010E254, 35, CAMERA_MASK_DLLINK(8), -1, 0, 1, 0, 1, 0));

    lbCommonInitCameraOrtho(cam, 0x54, 1);

    cam->flags |= 0x4;

    gIFCommonPlayerInterface.arrows_flags = 0;
}

// 0x8010E374
GObj* func_ovl2_8010E374(void)
{
    GObj *camera_gobj = func_8000B93C(nOMObjCommonKindScissorCamera, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, lbCommonScissorSpriteCamera, 20, (CAMERA_MASK_DLLINK(24) | CAMERA_MASK_DLLINK(23)), -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCMManagerCameraStruct.viewport_ulx, (f32)gCMManagerCameraStruct.viewport_uly, (f32)gCMManagerCameraStruct.viewport_lrx, (f32)gCMManagerCameraStruct.viewport_lry);

    cam->flags |= 4;

    return camera_gobj;
}

// 0x8010E458
void func_ovl2_8010E458(GObj *camera_gobj)
{
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80017B80(camera_gobj, (cam->flags & 0x8) ? 1 : 0);
}

// 0x8010E498
GObj* func_ovl2_8010E498(void)
{
    GObj *camera_gobj = func_8000B93C(nOMObjCommonKindScissorCamera, NULL, nOMObjCommonLinkIDCamera, GOBJ_LINKORDER_DEFAULT, func_ovl2_8010E458, 15, CAMERA_MASK_DLLINK(25), -1, 0, 1, 0, 1, 0);
    Camera *cam = CameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCMManagerCameraStruct.viewport_ulx, (f32)gCMManagerCameraStruct.viewport_uly, (f32)gCMManagerCameraStruct.viewport_lrx, (f32)gCMManagerCameraStruct.viewport_lry);
    cam->projection.persp.aspect = ((f32)gCMManagerCameraStruct.viewport_width / (f32)gCMManagerCameraStruct.viewport_height);

    return camera_gobj;
}

// 0x8010E598 - Are lrx and lry used as width and height respectively?
void cmManagerSetViewportDimensions(s32 ulx, s32 uly, s32 lrx, s32 lry)
{
    gCMManagerCameraStruct.viewport_ulx = ulx;
    gCMManagerCameraStruct.viewport_uly = uly;
    gCMManagerCameraStruct.viewport_lrx = lrx;
    gCMManagerCameraStruct.viewport_lry = lry;
    gCMManagerCameraStruct.viewport_center_x = (ulx + lrx) / 2;
    gCMManagerCameraStruct.viewport_center_y = (uly + lry) / 2;
    gCMManagerCameraStruct.viewport_width = lrx - ulx;
    gCMManagerCameraStruct.viewport_height = lry - uly;
}

// 0x8010E5F4 - Checks if input position is within the camera's viewport
sb32 cmManagerCheckTargetInBounds(f32 pos_x, f32 pos_y)
{
    // t = test, c = camera

    f32 viewport_width = (gCMManagerCameraStruct.viewport_width / 2);
    f32 viewport_height = (gCMManagerCameraStruct.viewport_height / 2);

    if ((pos_x < -viewport_width) || (pos_x > viewport_width) || (pos_y < -viewport_height) || (pos_y > viewport_height))
    {
        return FALSE;
    }
    return TRUE;
}
