#include <gr/ground.h>
#include <ft/fighter.h>
#include <wp/weapon.h>
#include <gm/battle.h>

#include <sys/ml.h>

f32 grCamera_Zoom_Table[/* */] =
{
     0.00F,
     1.50F,
     1.32F,
     1.16F,
     1.00F
};

// 0x8010B810
u32 func_ovl2_8010B810(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gGroundInfo->cam_bound_left)
    {
        bounds |= 1;
    }
    if (pos->x > gGroundInfo->cam_bound_right)
    {
        bounds |= 2;
    }
    if (pos->y < gGroundInfo->cam_bound_bottom)
    {
        bounds |= 4;
    }
    if (pos->y > gGroundInfo->cam_bound_top)
    {
        bounds |= 8;
    }
    return bounds;
}

// 0x8010B8BC
void func_ovl2_8010B8BC(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = func_ovl2_8010B810(pos);

        if (bounds != 0)
        {
            if (bounds & 1)
            {
                pos->x = gGroundInfo->cam_bound_left;
            }
            else if (bounds & 2)
            {
                pos->x = gGroundInfo->cam_bound_right;
            }
            else if (bounds & 4)
            {
                pos->y = gGroundInfo->cam_bound_bottom;
            }
            else if (bounds & 8)
            {
                pos->y = gGroundInfo->cam_bound_top;
            }
        }
        else break;
    }
}

// 0x8010B98C
u32 func_ovl2_8010B98C(Vec3f *pos)
{
    u32 bounds = 0;

    if (pos->x < gGroundInfo->unk_groundinfo_0x90)
    {
        bounds |= 1;
    }
    if (pos->x > gGroundInfo->unk_groundinfo_0x8E)
    {
        bounds |= 2;
    }
    if (pos->y < gGroundInfo->unk_groundinfo_0x8C)
    {
        bounds |= 4;
    }
    if (pos->y > gGroundInfo->unk_groundinfo_0x8A)
    {
        bounds |= 8;
    }
    return bounds;
}

// 0x8010BA38
void func_ovl2_8010BA38(Vec3f *pos)
{
    while (TRUE)
    {
        u32 bounds = func_ovl2_8010B98C(pos);

        if (bounds != 0)
        {
            if (bounds & 1)
            {
                pos->x = gGroundInfo->unk_groundinfo_0x90;
            }
            else if (bounds & 2)
            {
                pos->x = gGroundInfo->unk_groundinfo_0x8E;
            }
            else if (bounds & 4)
            {
                pos->y = gGroundInfo->unk_groundinfo_0x8C;
            }
            else if (bounds & 8)
            {
                pos->y = gGroundInfo->unk_groundinfo_0x8A;
            }
        }
        else break;
    }
}

// 0x8010BB08
void func_ovl2_8010BB08(Vec3f *pos)
{
    pos->x = (gGroundInfo->cam_bound_top * pos->x) / gGroundInfo->blastzone_top;
    pos->y = gGroundInfo->cam_bound_top;
}

// 0x8010BB58
f32 func_ovl2_8010BB58(s32 index)
{
    f32 zoom = grCamera_Zoom_Table[index];

    if (gBattleState->game_type == gmMatch_GameType_HowToPlay)
    {
        zoom *= 0.75F;
    }
    return zoom;
}

// 0x8010BB98
f32 func_ovl2_8010BB98(ftStruct *fp, f32 cam_zoom)
{
    cam_zoom *= fp->fighter_cam_zoom_frame;
    cam_zoom *= fp->fighter_cam_zoom_range;

    if ((fp->status_info.status_id == ftStatus_Common_Wait) && (fp->status_info.status_time_spent >= 120))
    {
        cam_zoom *= 0.75F;
    }
    return cam_zoom;
}

// 0x8010BBE4
f32 func_ovl2_8010BBE4(f32 arg0)
{
    if (arg0 > 2000.0F)
    {
        return 0.0682F;
    }
    else if (arg0 < 1000.0F)
    {
        return 0.0F;
    }
    else return ((arg0 - 1000.0F) / 1000) * 0.0682F;
}

// 0x8010BC54
void func_ovl2_8010BC54(Vec3f *vec, f32 *hz, f32 *vt)
{
    s32 player_num;
    s32 cam_num;
    ftCamera ft_cam[GMMATCH_PLAYERS_MAX];
    ftStruct *fp;
    wpStruct *wp;
    f32 temp_f16;
    f32 var_f16;
    f32 temp_f18;
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
    f32 var_f2;
    GObj *weapon_gobj;
    s32 lr;
    Vec3f weapon_pos;

    fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

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
                    fatal_printf("Player Num is Over for Camera!\n");
                    scnmgr_crash_print_gobj_state();
                }
            }
            ft_cam[player_num].target_fp = fp;

            switch (fp->camera_mode)
            {
            default:
                ft_cam[player_num].target_pos = DObjGetStruct(fighter_gobj)->translate;
                break;

            case 3:
            case 4:
                ft_cam[player_num].target_pos = fp->entry_pos;
                break;

            case 2:
                ft_cam[player_num].target_pos = fp->status_vars.common.dead.pos;
                break;
            }
            ft_cam[player_num].target_pos.y += fp->attributes->cam_offset_y;

            if ((gBattleState->game_type == gmMatch_GameType_1PGame) && (gBattleState->player_block[fp->player].is_rebirth_multi != FALSE))
            {
                switch (fp->camera_mode)
                {
                default: 
                    break;

                    // WHAT!?!? There are a few ways to match this, but it appears to be a control flow issue more than anything.
                    // Other solution #1: cast &ft_cam[player_num].target_pos to an integer
                    // Other solution #2: explicitly define any of the Vec3f* functions below as s32 functions (just forget about it)
                }
                func_ovl2_8010BA38(&ft_cam[player_num].target_pos);
            }
            else switch (fp->camera_mode)
            {
            case 2:
                func_ovl2_8010BB08(&ft_cam[player_num].target_pos);
                break;

            default:
                func_ovl2_8010B8BC(&ft_cam[player_num].target_pos);
                break;
            }
            player_num++;
            break;

        case 1:
            break;
        }
        fighter_gobj = fighter_gobj->group_gobj_next;
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

        zoom = func_ovl2_8010BB58(player_num);

        for (cam_num = 0; cam_num < player_num; cam_num++)
        {
            cam_fp = ft_cam[cam_num].target_fp;

            adjust = func_ovl2_8010BB98(cam_fp, zoom);

            lr = (cam_fp->camera_mode == 3 || cam_fp->camera_mode == 4) ? cam_fp->status_vars.common.entry.lr_entry : cam_fp->lr;

            if (lr == LR_Left)
            {
                var_f2 = ft_cam[cam_num].target_pos.x - (1000.0F * adjust);
                var_f16 = ft_cam[cam_num].target_pos.x + (700.0F * adjust);
            }
            else
            {
                var_f2 = ft_cam[cam_num].target_pos.x - (700.0F * adjust);
                var_f16 = ft_cam[cam_num].target_pos.x + (1000.0F * adjust);
            }
            if (var_f2 < gm_left)
            {
                gm_left = var_f2;
            }
            if (gm_right < var_f16)
            {
                gm_right = var_f16;
            }
            temp_f16 = ft_cam[cam_num].target_pos.y + (700.0F * adjust);
            temp_f18 = ft_cam[cam_num].target_pos.y + (-700.0F * adjust);

            if (temp_f18 < gm_bottom)
            {
                gm_bottom = temp_f18;
            }
            if (gm_top < temp_f16)
            {
                gm_top = temp_f16;
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
        weapon_gobj = gOMObjCommonLinks[gOMObjLinkIndexWeapon];

        while (weapon_gobj != NULL)
        {
            wp = wpGetStruct(weapon_gobj);

            if (wp->is_camera_follow)
            {
                weapon_pos = DObjGetStruct(weapon_gobj)->translate;

                wp_left = ft_right - 1000.0F; // wp_left = left?
                wp_right = ft_left + 1000.0F; // wp_right = right?
                wp_bottom = ft_top - 1000.0F; // wp_bottom = bottom?
                wp_top = ft_bottom + 1000.0F; // wp_top = top?

                func_ovl2_8010B8BC(&weapon_pos);

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
            weapon_gobj = weapon_gobj->group_gobj_next;
        }
        *hz = (gm_right - gm_left) * 0.5F;
        *vt = (gm_top - gm_bottom) * 0.5F;

        vec->x = ((gm_left + gm_right) * 0.5F);
        vec->y = (0.5F - func_ovl2_8010BBE4((*vt < *hz) ? *hz : *vt)) * (gm_bottom + gm_top);
        vec->z = 0.0F;
    }
    else
    {
        vec->x = vec->y = vec->z = 0.0F;

        *hz = *vt = 2000.0F;
    }
}

// This is from .bss
extern f32 D_ovl2_801314F0;

// 0x8010C200
void func_ovl2_8010C200(f32 arg0, f32 arg1, f32 *arg2)
{
    f32 var_f0;

    arg1 /= func_ovl0_800C793C(F_DEG_TO_RAD(gCameraStruct.unk_cmstruct_0x40 * 0.5F));

    arg0 /= ((func_ovl0_800C793C(F_DEG_TO_RAD(gCameraStruct.unk_cmstruct_0x40 * 0.5F)) * gCameraStruct.unk_0x38.x) / gCameraStruct.unk_0x38.y);

    var_f0 = (arg1 < arg0) ? arg0 : arg1;

    if (var_f0 < 2500.0F)
    {
        var_f0 = 2500.0F;
    }
    if (var_f0 > 30000.0F)
    {
        var_f0 = 30000.0F;
    }
    *arg2 = var_f0;
}

extern f32 D_ovl2_80131464;
extern f32 D_ovl2_80131468; // Also from .bss

// 0x8010C320
void func_ovl2_8010C320(s32 arg0, Vec3f *vec, f32 arg2, f32 arg3)
{
    f32 temp_f12;
    f32 temp_f12_2;

    temp_f12 = D_ovl2_80131464 + arg3 + gGroundInfo->light_angle.z;

    vec->y = -bitmap_sinf(temp_f12);
    vec->z = bitmap_cosf(temp_f12);

    temp_f12_2 = D_ovl2_80131468 + arg2;

    vec->x = (bitmap_sinf(temp_f12_2) * vec->z);

    vec->z *= bitmap_cosf(temp_f12_2);
}

// 0x8010C3C0
void func_ovl2_8010C3C0(Vec3f *vec, Vec3f *arg1)
{
    f32 var_f0;
    f32 var_f2;

    var_f2 = -F_DEG_TO_RAD((vec->y + (-900.0F)) / 133.0F);

    if (var_f2 > F_DEG_TO_RAD(5.0F)) // 0.08726647F
    {
        var_f2 = F_DEG_TO_RAD(5.0F);
    }
    if (var_f2 < F_DEG_TO_RAD(-7.0F)) // -0.122173056F
    {
        var_f2 = F_DEG_TO_RAD(-7.0F);
    }
    var_f0 = -F_DEG_TO_RAD(vec->x / 133.0F);

    if (var_f0 > F_DEG_TO_RAD(17.5F)) // 0.30543265F
    {
        var_f0 = F_DEG_TO_RAD(17.5F);
    }
    if (var_f0 < F_DEG_TO_RAD(-17.5F)) // -0.30543265F
    {
        var_f0 = F_DEG_TO_RAD(-17.5F);
    }
    func_ovl2_8010C320(vec, arg1, var_f0, var_f2);
}

// 0x8010C4A4
void func_ovl2_8010C4A4(Vec3f *arg0, Vec3f *arg1)
{
    func_ovl2_8010C320(arg0, arg1, 0.0F, 0.0F);
}

// 0x8010C4D0
f32 func_ovl2_8010C4D0(void)
{
    if (gCameraStruct.cam_target_dist > 15000.0F)
    {
        return 0.1F;
    }
    else if (gCameraStruct.cam_target_dist < 2000.0F)
    {
        return 0.05F;
    }
    return ((1.0F - ((gCameraStruct.cam_target_dist - 2000.0F) / 13000.0F)) * 0.05F) + .05F; // Needs to be two different 0.05s lol
}

// 0x8010C55C
void func_ovl2_8010C55C(OMCamera *cam, Vec3f *arg1, f32 arg2)
{
    f32 mag;
    f32 unused;
    Vec3f sp1C;

    lbVector_Vec3fSubtract(&sp1C, arg1, &cam->view.pan);
    mag = lbVector_Vec3fMagnitude(&sp1C) * arg2;
    lbVector_Vec3fNormalize(&sp1C);
    lbVector_Vec3fScale(&sp1C, mag);
    lbVector_Vec3fAddTo(&cam->view.pan, &sp1C);
}

// 0x8010C5C0
void func_ovl2_8010C5C0(OMCamera *arg0, Vec3f *arg1)
{
    Vec3f sp34;
    Vec3f pan;
    f32 unused;
    f32 mag;

    pan.x = arg0->view.pan.x + (gCameraStruct.cam_target_dist * arg1->x);
    pan.y = arg0->view.pan.y + (gCameraStruct.cam_target_dist * arg1->y);
    pan.z = arg0->view.pan.z + (gCameraStruct.cam_target_dist * arg1->z);

    lbVector_Vec3fSubtract(&sp34, &pan, &arg0->view.tilt);
    mag = lbVector_Vec3fMagnitude(&sp34) * 0.1F;
    lbVector_Vec3fNormalize(&sp34);
    lbVector_Vec3fScale(&sp34, mag);
    lbVector_Vec3fAddTo(&arg0->view.tilt, &sp34);
}

// 0x8010C670
void func_ovl2_8010C670(f32 arg0)
{
    f32 temp_f0;
    f32 temp_f14;

    temp_f0 = gCameraStruct.cam_target_dist - arg0;

    temp_f14 = temp_f0 * 0.075F;

    if (temp_f0 <= temp_f14)
    {
        gCameraStruct.cam_target_dist = arg0;
    }
    else gCameraStruct.cam_target_dist -= temp_f14;
}

// 0x8010C6B8
void func_ovl2_8010C6B8(OMCamera *cam)
{
    lbVector_Vec3fAddTo(&cam->view.pan, &gCameraStruct.unk_cmstruct_0x14);
    gCameraStruct.unk_cmstruct_0x14.x = gCameraStruct.unk_cmstruct_0x14.y = gCameraStruct.unk_cmstruct_0x14.z = 0.0F;
}

// 0x8010C6FC
void func_ovl2_8010C6FC(OMCamera *cam)
{
    cam->unk_omcam_0x20 = gCameraStruct.unk_cmstruct_0x40;
}

// 0x8010C70C
void func_ovl2_8010C70C(f32 arg0)
{
    gCameraStruct.unk_cmstruct_0x40 += ((arg0 - gCameraStruct.unk_cmstruct_0x40) * 0.1F);
}

// 0x8010C734
void jtgt_ovl2_8010C734(GObj *camera_gobj)
{
    OMCamera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = OMCameraGetStruct(camera_gobj);

    func_ovl2_8010BC54(&sp30, &sp2C, &sp28);
    func_ovl2_8010C70C(38.0F);
    func_ovl2_8010C200(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cam->view.pan, &sp3C);
    func_ovl2_8010C5C0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010C7D0
void func_ovl2_8010C7D0(OMCamera *cam, Vec3f *arg1)
{
    Vec3f sp3C;
    Vec3f sp30;
    f32 unused;
    f32 mag;
    f32 current;
    f32 step;

    sp30.x = cam->view.pan.x + (gCameraStruct.cam_target_dist * arg1->x);
    sp30.y = cam->view.pan.y + (gCameraStruct.cam_target_dist * arg1->y);
    sp30.z = cam->view.pan.z + (gCameraStruct.cam_target_dist * arg1->z);

    grCommon_Zebes_GetAcidLevelInfo(&current, &step);

    current += (step + 3000.0F);

    if (sp30.y < current)
    {
        sp30.y = current;
    }
    lbVector_Vec3fSubtract(&sp3C, &sp30, &cam->view.tilt);
    mag = lbVector_Vec3fMagnitude(&sp3C) * 0.1F;
    lbVector_Vec3fNormalize(&sp3C);
    lbVector_Vec3fScale(&sp3C, mag);
    lbVector_Vec3fAddTo(&cam->view.tilt, &sp3C);
}

// 0x8010C8C4
void jtgt_ovl2_8010C8C4(GObj *camera_gobj)
{
    OMCamera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = OMCameraGetStruct(camera_gobj);

    func_ovl2_8010BC54(&sp30, &sp2C, &sp28);
    func_ovl2_8010C70C(38.0F);
    func_ovl2_8010C200(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C3C0(&cam->view.pan, &sp3C);
    func_ovl2_8010C7D0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010C960
void func_ovl2_8010C960(GObj *camera_gobj)
{
    OMCamera *cam;
    ftStruct *fp;
    Vec3f sp54;
    Vec3f sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 temp_f12;

    cam = OMCameraGetStruct(camera_gobj);

    sp30 = DObjGetStruct(gCameraStruct.pl_pause_gobj)->translate;

    fp = ftGetStruct(gCameraStruct.pl_pause_gobj);

    sp30.y += fp->attributes->cam_offset_y;

    func_ovl2_8010C70C(gCameraStruct.unk_cmstruct_0x58);

    gCameraStruct.cam_target_dist = gCameraStruct.unk_cmstruct_0x50;

    func_ovl2_8010C55C(cam, &sp30, gCameraStruct.unk_cmstruct_0x54);

    sp54.y = D_ovl2_80131468 + gCameraStruct.unk_cmstruct_0x48;
    sp54.x = D_ovl2_80131464 + gCameraStruct.unk_cmstruct_0x4C;

    sp48.y = -bitmap_sinf(sp54.x);
    sp48.z = bitmap_cosf(sp54.x);
    sp48.x = bitmap_sinf(sp54.y) * sp48.z;
    sp48.z *= bitmap_cosf(sp54.y);

    func_ovl2_8010C5C0(cam, &sp48);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CA7C
bool32 func_ovl2_8010CA7C(Vec3f *arg0)
{
    if ((func_ovl2_8010B810() != FALSE) || (arg0->z < -1000.0F) || (arg0->z > 1000.0F))
    {
        return TRUE;
    }
    else return FALSE;
}

extern void (*cmManager_ProcCamera[/* */])(void*);

// 0x8010CAE0
void jtgt_ovl2_8010CAE0(GObj *camera_gobj)
{
    if (func_ovl2_8010CA7C(&DObjGetStruct(gCameraStruct.pl_pause_gobj)->translate) != FALSE)
    {
        cmManager_ProcCamera[gCameraStruct.status_default](camera_gobj);
    }
    else func_ovl2_8010C960(camera_gobj);
}

// 0x8010CB48
void jtgt_ovl2_8010CB48(GObj *camera_gobj)
{
    OMCamera *cam;
    f32 sp48;
    Vec3f sp3C;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = OMCameraGetStruct(camera_gobj);

    func_ovl2_8010BC54(&sp30, &sp2C, &sp28);
    func_ovl2_8010C70C(38.0F);
    func_ovl2_8010C200(sp2C, sp28, &sp48);
    func_ovl2_8010C670(sp48);
    func_ovl2_8010C55C(cam, &sp30, func_ovl2_8010C4D0());
    func_ovl2_8010C4A4(&cam->view.pan, &sp3C);
    func_ovl2_8010C5C0(cam, &sp3C);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CBE4
void func_ovl2_8010CBE4(GObj *camera_gobj)
{
    OMCamera *cam;

    func_80010580();

    cam = OMCameraGetStruct(camera_gobj);

    cam->view.pan.x += gCameraStruct.unk_cmstruct_0x8C.x;
    cam->view.pan.y += gCameraStruct.unk_cmstruct_0x8C.y;
    cam->view.pan.z += gCameraStruct.unk_cmstruct_0x8C.z;
    cam->view.tilt.x += gCameraStruct.unk_cmstruct_0x8C.x;
    cam->view.tilt.y += gCameraStruct.unk_cmstruct_0x8C.y;
    cam->view.tilt.z += gCameraStruct.unk_cmstruct_0x8C.z;
}

// 0x8010CC74
void jtgt_ovl2_8010CC74(GObj *camera_gobj)
{
    func_ovl2_8010CBE4();

    if (OMCameraGetStruct(camera_gobj)->omcam_f0 == (f32)FLOAT_NEG_MAX)
    {
        func_ovl2_8010CF20();
    }
}

// 0x8010CCC0
void jtgt_ovl2_8010CCC0(GObj *camera_gobj)
{
    OMCamera *cam;
    Vec3f sp30;
    f32 sp2C;
    f32 sp28;

    cam = OMCameraGetStruct(camera_gobj);

    func_ovl2_8010C70C(38.0F);

    lbVector_Vec3fSubtract(&sp30, &gCameraStruct.unk_cmstruct_0x5C, &cam->view.pan);
    sp28 = lbVector_Vec3fMagnitude(&sp30);
    sp2C = func_ovl2_8010C4D0() * sp28;
    lbVector_Vec3fNormalize(&sp30);
    lbVector_Vec3fScale(&sp30, sp2C);
    lbVector_Vec3fAddTo(&cam->view.pan, &sp30);

    lbVector_Vec3fSubtract(&sp30, &gCameraStruct.unk_cmstruct_0x68, &cam->view.tilt);
    sp2C = lbVector_Vec3fMagnitude(&sp30) * 0.1F;
    lbVector_Vec3fNormalize(&sp30);
    lbVector_Vec3fScale(&sp30, sp2C);
    lbVector_Vec3fAddTo(&cam->view.tilt, &sp30);
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
    OMCamera *cam;
    ftStruct *fp;

    cam = OMCameraGetStruct(camera_gobj);
    sp30 = DObjGetStruct(gCameraStruct.pl_bonus_gobj)->translate;

    fp = ftGetStruct(gCameraStruct.pl_bonus_gobj);

    sp30.y += fp->attributes->cam_offset_y;
    sp30.z = 0.0F;

    func_ovl2_8010B8BC(&sp30);
    func_ovl2_8010C70C(gCameraStruct.unk_cmstruct_0x88);

    gCameraStruct.cam_target_dist = gCameraStruct.unk_cmstruct_0x80;

    func_ovl2_8010C55C(cam, &sp30, gCameraStruct.unk_cmstruct_0x84);

    sp58 = D_ovl2_80131468 + gCameraStruct.unk_cmstruct_0x78;
    temp_f12 = D_ovl2_80131464 + gCameraStruct.unk_cmstruct_0x7C;

    sp48.y = -bitmap_sinf(temp_f12);
    sp48.z = bitmap_cosf(temp_f12);
    sp48.x = bitmap_sinf(sp58) * sp48.z;
    sp48.z *= bitmap_cosf(sp58);
    func_ovl2_8010C5C0(cam, &sp48);
    func_ovl2_8010C6B8(cam);
    func_ovl2_8010C6FC(cam);
}

// 0x8010CECC
void cmManager_RunProcCamera(GObj *camera_gobj)
{
    gCameraStruct.proc_camera(camera_gobj);
}

// 0x8010CEF4
void cmManager_SetCameraStatus(s32 status_id)
{
    gCameraStruct.status_prev = gCameraStruct.status_curr;
    gCameraStruct.status_curr = status_id;

    gCameraStruct.proc_camera = cmManager_ProcCamera[status_id];
}

// 0x8010CF20
void func_ovl2_8010CF20(void)
{
    cmManager_SetCameraStatus(gCameraStruct.status_default);
}

void func_ovl2_8010CF44(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    cmManager_SetCameraStatus(1);

    gCameraStruct.pl_pause_gobj = fighter_gobj;
    gCameraStruct.unk_cmstruct_0x48 = arg1;
    gCameraStruct.unk_cmstruct_0x4C = arg2;
    gCameraStruct.unk_cmstruct_0x50 = arg3;
    gCameraStruct.unk_cmstruct_0x54 = arg4;
    gCameraStruct.unk_cmstruct_0x58 = arg5;
}

// 0x8010CFA8
void func_ovl2_8010CFA8(GObj *fighter_gobj, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    cmManager_SetCameraStatus(5);

    gCameraStruct.pl_bonus_gobj = fighter_gobj;
    gCameraStruct.unk_cmstruct_0x78 = arg1;
    gCameraStruct.unk_cmstruct_0x7C = arg2;
    gCameraStruct.unk_cmstruct_0x80 = arg3;
    gCameraStruct.unk_cmstruct_0x84 = arg4;
    gCameraStruct.unk_cmstruct_0x88 = arg5;
}

// 0x8010D00C
void cmManager_RestoreCameraStatus(void)
{
    cmManager_SetCameraStatus(gCameraStruct.status_prev);
}

// 0x8010D030
void func_ovl2_8010D030(ATrack *arg0, f32 arg1, Vec3f *arg2)
{
    cmManager_SetCameraStatus(2);

    gCameraStruct.unk_cmstruct_0x8C = *arg2;

    // WARNING: This takes DObj* as its first argument, but gCameraGObj should have OMCamera as its GObj render object???
    func_8000FA3C(DObjGetStruct(gCameraGObj), arg0, arg1);
    func_ovl2_8010CBE4(gCameraGObj);
}

// 0x8010D0A4
void func_ovl2_8010D0A4(Vec3f *arg0, Vec3f *arg1)
{
    Vec3f sp1C;

    cmManager_SetCameraStatus(4);

    gCameraStruct.unk_cmstruct_0x5C = *arg0;

    gCameraStruct.unk_cmstruct_0x68 = *arg1;

    lbVector_Vec3fSubtract(&sp1C, arg0, arg1);

    gCameraStruct.cam_target_dist = lbVector_Vec3fMagnitude(&sp1C);
}

// 0x8010D128
void func_ovl2_8010D128(Vec3f *arg0)
{
    gCameraStruct.unk_cmstruct_0x14 = *arg0;
}

// 0x8010D14C - Unused?
void func_ovl2_8010D14C(void *arg0)
{
    return;
}

// 0x8010D154
f32 func_ovl2_8010D154(void)
{
    f32 ret, abs;
    s32 i, j;

    ret = 0.0F;

    for (i = 0; i < ARRAY_COUNT(gCameraMatrix[i]); i++)
    {
        for (j = 0; j < ARRAY_COUNT(gCameraMatrix); j++)
        {
            abs = ABSF(gCameraMatrix[i][j]);

            if (ret < abs)
            {
                ret = abs;
            }
        }
    }
    return ret;
}

extern mlBumpAllocRegion gMatrixHeap;

// 0x8010D250
bool32 cmManager_CameraLookAt(Mtx *arg0, cmMatrixTemp *arg1, Gfx **display_list)
{
    void *temp_mtx;
    Mtx44f sp5C;
    u16 *sp4C;
    f32 max;
    u16 *temp_a1;

    temp_mtx = gMatrixHeap.ptr;
    gMatrixHeap.ptr = (Mtx*)gMatrixHeap.ptr + 1;

    hal_perspective_fast_f(D_80046FA8, &arg1->perspNorm, arg1->f20, arg1->f24, arg1->f28, arg1->f2C, arg1->f30);
    hal_mtx_f2l(D_80046FA8, temp_mtx);

    D_80046FA0 = temp_mtx;

    hal_look_at_reflect_f(sp5C, &gCameraStruct.look_at_x, arg1->f3C, arg1->f40, arg1->f44, arg1->f48, arg1->f4C, arg1->f50, arg1->f54, arg1->f58, arg1->f5C);
    guMtxCatF(sp5C, D_80046FA8, gCameraMatrix);

    max = func_ovl2_8010D154();

    if (max > 32000.0F)
    {
        hal_perspective_fast_f(D_80046FA8, &arg1->perspNorm, arg1->f20, arg1->f24, arg1->f28, arg1->f2C, 32000.0F / max);
        hal_mtx_f2l(D_80046FA8, temp_mtx);

        D_80046FA0 = temp_mtx;

        hal_look_at_reflect_f(sp5C, &gCameraStruct.look_at_x, arg1->f3C, arg1->f40, arg1->f44, arg1->f48, arg1->f4C, arg1->f50, arg1->f54, arg1->f58, arg1->f5C);
        guMtxCatF(sp5C, D_80046FA8, gCameraMatrix);
    }
    hal_mtx_f2l(gCameraMatrix, arg0);

    return 0;
}

// 0x8010D428
bool32 cmManager_CameraLookMatrix(Mtx *mtx, cmMatrixTemp *arg1, Gfx **display_list)
{
    gSPLookAtX(display_list[0]++, &gCameraStruct.look_at_x);

    gSPLookAtY(display_list[0]++, &gCameraStruct.look_at_y);

    gSPMatrix(display_list[0]++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    gSPPerspNormalize(display_list[0]++, arg1->perspNorm);

    return 0;
}

// 0x8010D4B0
void func_ovl2_8010D4B0(Mtx *mtx, cmMatrixTemp *arg1, Gfx **display_list)
{
    return;
}

// 0x8010D4C0
void func_ovl2_8010D4C0(GObj *camera_gobj)
{
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80017830(3);
    func_8001663C(gDisplayListHead, cam, 0);
    func_80016EDC(gDisplayListHead, cam);
    func_8001783C(cam, 0);

    D_ovl2_80131580.unk_80131580_0x1 = 0;
    D_ovl2_80131580.unk_80131580_0xE = 0;

    // D_ovl2_80131580.unk1 = 0;
    // D_ovl2_80131580.unkE = 0;

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 6;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 16;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 0x1EC0;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 0xE000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 0x70000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    camera_gobj->unk_0x30 = 0x180000;

    func_80017B80(camera_gobj, (cam->flags & 8) ? 1 : 0);
    func_800057C8();
}

Mtx6f D_ovl2_8012EB70 =
{
    NULL,
    { 0.0F, 38.0F, 1.36363637447F, 256.0F, 39936.0F, 1.0F }
};

OMMtxCamera D_ovl2_8012EB8C =
{
    NULL,
    { 1500.0F, 0.0F, 0.0F }, 
    {    0.0F, 0.0F, 0.0F },
    {    0.0F, 1.0F, 0.0F }
};

// 0x8010D7E8
GObj* cmManager_MakeCamera(s32 arg0, u8 arg1, void (*proc)(GObj*))
{
    GObj *camera_gobj;
    OMCamera *cam;
    Vec3f sp4C;
    f32 temp_f0;

    camera_gobj = func_8000B93C(omGObj_Kind_MainCamera, 0, 9, 0x80000000, func_ovl2_8010D4C0, 0x32, 0, -1, 0, 1, proc, 3, 0);

    gCameraGObj = camera_gobj;

    cam = OMCameraGetStruct(camera_gobj);

    func_80008CF0(cam, arg0, 0);

    if (arg1 != 0)
    {
        func_80008CF0(cam, arg1, 0);
    }
    cam->mtx_types.f6 = D_ovl2_8012EB70;
    cam->view = D_ovl2_8012EB8C;

    func_80007080(&cam->viewport, gCameraStruct.unk_cmstruct_0x20, gCameraStruct.unk_cmstruct_0x24, gCameraStruct.unk_cmstruct_0x28, gCameraStruct.unk_cmstruct_0x2C);

    // This (f32) cast is NECESSARY! unk_cmstruct_0x20 through unk_cmstruct_0x2C are signed integers!
    cam->mtx_types.f6.f[2] = ((f32)(gCameraStruct.unk_cmstruct_0x28 - gCameraStruct.unk_cmstruct_0x20) / (f32)(gCameraStruct.unk_cmstruct_0x2C - gCameraStruct.unk_cmstruct_0x24));

    cam->flags |= 4;

    gCameraStruct.cam_target_dist = 10000.0F;

    D_ovl2_80131464 = D_ovl2_80131468 = 0.0F;

    sp4C.y = -bitmap_sinf(D_ovl2_80131464);
    sp4C.z = bitmap_cosf(D_ovl2_80131464);
    sp4C.x = bitmap_sinf(D_ovl2_80131468) * sp4C.z;
    sp4C.z *= bitmap_cosf(D_ovl2_80131468);

    cam->view.pan.x = cam->view.pan.z = 0.0F;
    cam->view.pan.y = 300.0F;

    cam->view.tilt.x = (gCameraStruct.cam_target_dist * sp4C.x);
    cam->view.tilt.y = cam->view.pan.y + (gCameraStruct.cam_target_dist * sp4C.y);
    cam->view.tilt.z = (gCameraStruct.cam_target_dist * sp4C.z);

    gCameraStruct.unk_cmstruct_0x14.x = gCameraStruct.unk_cmstruct_0x14.y = gCameraStruct.unk_cmstruct_0x14.z = 0;

    switch (gBattleState->gr_kind)
    {
    case Gr_Kind_Zebes:
        gCameraStruct.status_curr = 6;
        break;

    case Gr_Kind_Inishie:
        gCameraStruct.status_curr = 3;
        break;

    default:
        gCameraStruct.status_curr = 0;
        // No break? Doesn't match otherwise :brainshock:
    }
    gCameraStruct.status_default = gCameraStruct.status_prev = gCameraStruct.status_curr;
    gCameraStruct.proc_camera = cmManager_ProcCamera[gCameraStruct.status_curr];
    gCameraStruct.unk_cmstruct_0x40 = 38.0F;

    return camera_gobj;
}

// 0x8010DB00
void func_ovl2_8010DB00(void)
{
    cmManager_MakeCamera(0x4C, 0, cmManager_RunProcCamera);
}

// 0x8010DB2C
void func_ovl2_8010DB2C(void (*arg0)(GObj*))
{
    cmManager_MakeCamera(3, 8, arg0);
}

// 0x8010DB54
GObj* func_ovl2_8010DB54(void)
{
    GObj *camera_gobj = func_8000B93C(omGObj_Kind_WallpaperCamera, NULL, 9, 0x80000000U, &func_ovl0_800CD2CC, 0x50, 1, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCameraStruct.unk_cmstruct_0x20, (f32)gCameraStruct.unk_cmstruct_0x24, (f32)gCameraStruct.unk_cmstruct_0x28, (f32)gCameraStruct.unk_cmstruct_0x2C);

    return camera_gobj;
}

// 0x8010DC24
void func_ovl2_8010DC24(GObj *icamera_gobj)
{
    OMCamera *icam = OMCameraGetStruct(icamera_gobj);

    if (D_ovl2_80131580.unk_80131580_0x1 != 0)
    {
        OMCamera *mcam;
        Vp_t *viewport;
        s32 vsub0, vsub1, vadd0, vadd1;

        gSPViewport(gDisplayListHead[0]++, &OMCameraGetStruct(gCameraGObj)->viewport);

        viewport = &OMCameraGetStruct(gCameraGObj)->viewport.vp;

        vsub0 = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
        vsub1 = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
        vadd0 = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
        vadd1 = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

        gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, vsub0, vsub1, vadd0, vadd1);
    }
    func_80017B80(icamera_gobj, (icam->flags & 8) ? 1 : 0);
    func_80017CC8(icam);
}

// 0x8010DDC4
void func_ovl2_8010DDC4(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(omGObj_Kind_ScissorCamera, NULL, 9, 0x80000000U, func_ovl2_8010DC24, 0x14, 0x400000, -1, 0, 1, 0, 1, 0));

    cam->flags |= 4;
}

extern Mtx44f D_80046FA8;

// 0x8010DE48
bool32 func_ovl2_8010DE48(Mtx *arg0, s32 arg1, Gfx **arg2)
{
    f32 unused1;
    Mtx44f spA4;
    Mtx44f sp64;
    Vec3f *tilt;
    Vec3f *pan;
    Vec3f sp50;
    f32 unused2;
    f32 var_x;
    f32 var_y;
    f32 var_z;

    tilt = &OMCameraGetStruct(gCameraGObj)->view.tilt;
    pan = &OMCameraGetStruct(gCameraGObj)->view.pan;

    var_x = tilt->x - pan->x;
    var_y = tilt->y - pan->y;
    var_z = tilt->z - pan->z;

    hal_look_at_f(sp64, 0.0F, 300.0F, sqrtf(SQUARE(var_x) + SQUARE(var_y) + SQUARE(var_z)), 0.0F, 300.0F, 0.0F, 0.0F, 1.0F, 0.0F);
    guMtxCatF(sp64, D_80046FA8, spA4);

    sp50.z = 0.0F;
    sp50.y = 900.0F;
    sp50.x = 0.0F;

    func_ovl2_800EB924(OMCameraGetStruct(gCameraGObj), spA4, &sp50, &var_x, &var_y);

    D_ovl2_80131580.unk_80131580_0x4 = (var_y / 18.0F);

    if (D_ovl2_80131580.unk_80131580_0x4 > 3.0F)
    {
        D_ovl2_80131580.unk_80131580_0x4 = 3.0F;
    }
    hal_ortho_f(spA4, -450.0F, 450.0F, -450.0F, 450.0F, 256.0F, 39936.0F, 1.0F);
    guMtxCatF(sp64, spA4, spA4);
    hal_mtx_f2l(spA4, arg0);

    return 0;
}

// 0x8010E00C
bool32 func_ovl2_8010E00C(Mtx *arg0, s32 arg1, Gfx **arg2)
{
    Mtx44f sp78;
    Mtx44f sp38;
    f32 width;
    f32 height;

    width = (gCameraStruct.unk_0x38.x / 2);
    height = (gCameraStruct.unk_0x38.y / 2);

    hal_ortho_f(sp78, -width, width, -height, height, 100.0F, 12800.0F, 1.0F);
    hal_look_at_f(sp38, 0.0F, 0.0F, 1000.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F);

    guMtxCatF(sp38, sp78, sp78);
    hal_mtx_f2l(sp78, arg0);

    return 0;
}

// 0x8010E10C
bool32 func_ovl2_8010E10C(Mtx *arg0, s32 arg1, Gfx **display_list)
{
    gSPMatrix(display_list[0]++, arg0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

    return 0;
}

// 0x8010E134
void func_ovl2_8010E134(GObj *arg0)
{
    if (D_ovl2_80131580.unk_80131580_0x1 != 0)
    {
        OMCamera *cam = OMCameraGetStruct(arg0);

        func_80016EDC(gDisplayListHead, cam);

        func_80017B80(arg0, (cam->flags & 8) ? 1 : 0, cam);
        func_80017CC8(cam);
    }
}

// 0x8010E1A4
void func_ovl2_8010E1A4(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(omGObj_Kind_UnkCamera1, NULL, 9, 0x80000000U, func_ovl2_8010E134, 0x1E, 0x200, -1, 0, 1, 0, 1, 0));

    func_ovl0_800CD538(cam, 0x4D, 0);
    func_ovl0_800CD440(cam, 0x4E, 1);

    cam->flags |= 0x4;

    D_ovl2_80131580.unk_80131580_0x1 = 0;
}

// 0x8010E254
void func_ovl2_8010E254(GObj *arg0)
{
    func_80017830(1);

    if (D_ovl2_80131580.unk_80131580_0xE != 0)
    {
        OMCamera *cam = OMCameraGetStruct(arg0);

        func_80016EDC(gDisplayListHead, cam);

        func_80017B80(arg0, (cam->flags & 8) ? 1 : 0, cam);
        func_80017CC8(cam);
    }
}

// 0x8010E2D4
void func_ovl2_8010E2D4(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(omGObj_Kind_UnkCamera2, NULL, 9, 0x80000000U, func_ovl2_8010E254, 0x23, 0x100, -1, 0, 1, 0, 1, 0));

    func_ovl0_800CD440(cam, 0x54, 1);

    cam->flags |= 0x4;

    D_ovl2_80131580.unk_80131580_0xE = 0;
}

// 0x8010E374
GObj* func_ovl2_8010E374(void)
{
    GObj *camera_gobj = func_8000B93C(omGObj_Kind_ScissorCamera, NULL, 9, 0x80000000U, func_ovl0_800CD2CC, 0x14, 0x1800000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCameraStruct.unk_cmstruct_0x20, (f32)gCameraStruct.unk_cmstruct_0x24, (f32)gCameraStruct.unk_cmstruct_0x28, (f32)gCameraStruct.unk_cmstruct_0x2C);

    cam->flags |= 4;

    return camera_gobj;
}

// 0x8010E458
void func_ovl2_8010E458(GObj *arg0)
{
    OMCamera *cam = OMCameraGetStruct(arg0);

    func_80017B80(arg0, (cam->flags & 8) ? 1 : 0);
}

// 0x8010E498
GObj* func_ovl2_8010E498(void)
{
    GObj *camera_gobj = func_8000B93C(omGObj_Kind_ScissorCamera, NULL, 9, 0x80000000U, &func_ovl2_8010E458, 0xF, 0x2000000, -1, 0, 1, 0, 1, 0);
    OMCamera *cam = OMCameraGetStruct(camera_gobj);

    func_80007080(&cam->viewport, (f32)gCameraStruct.unk_cmstruct_0x20, (f32)gCameraStruct.unk_cmstruct_0x24, (f32)gCameraStruct.unk_cmstruct_0x28, (f32)gCameraStruct.unk_cmstruct_0x2C);
    cam->mtx_types.f6.f[2] = (f32)((f32)gCameraStruct.unk_0x38.x / (f32)gCameraStruct.unk_0x38.y);

    return camera_gobj;
}

// 0x8010E598
void func_ovl2_8010E598(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    gCameraStruct.unk_cmstruct_0x20 = arg0;
    gCameraStruct.unk_cmstruct_0x24 = arg1;
    gCameraStruct.unk_cmstruct_0x28 = arg2;
    gCameraStruct.unk_cmstruct_0x2C = arg3;
    gCameraStruct.unk_cmstruct_0x30 = (arg0 + arg2) / 2;
    gCameraStruct.unk_cmstruct_0x34 = (arg1 + arg3) / 2;
    gCameraStruct.unk_0x38.x = arg2 - arg0;
    gCameraStruct.unk_0x38.y = arg3 - arg1;
}

// 0x8010E5F4 - Checks if input position is out of the camera's viewing bounds
bool32 func_ovl2_8010E5F4(f32 pos_x, f32 pos_y)
{
    // t = test, c = camera

    f32 canvas_width = (gCameraStruct.unk_0x38.x / 2);
    f32 canvas_height = (gCameraStruct.unk_0x38.y / 2);

    if ((pos_x < -canvas_width) || (pos_x > canvas_width) || (pos_y < -canvas_height) || (pos_y > canvas_height))
    {
        return FALSE;
    }
    return TRUE;
}