#include <gr/ground.h>

#include <ft/fighter.h>
#include <wp/weapon.h>
#include <gm/gmmatch.h>

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

        switch (fp->cam_mode)
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

            switch (fp->cam_mode)
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
                switch (fp->cam_mode)
                {
                default: 
                    break;

                    // WHAT!?!? There are a few ways to match this, but it appears to be a control flow issue more than anything.
                    // Other solution #1: cast &ft_cam[player_num].target_pos to an integer
                    // Other solution #2: explicitly define any of the Vec3f* functions below as s32 functions (just forget about it)
                }
                func_ovl2_8010BA38(&ft_cam[player_num].target_pos);
            }
            else switch (fp->cam_mode)
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

            lr = (cam_fp->cam_mode == 3 || cam_fp->cam_mode == 4) ? cam_fp->status_vars.common.entry.lr_entry : cam_fp->lr;

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

    arg1 /= func_ovl0_800C793C(F_DEG_TO_RAD(D_ovl2_801314F0 * 0.5F));

    arg0 /= ((func_ovl0_800C793C(F_DEG_TO_RAD(D_ovl2_801314F0 * 0.5F)) * D_ovl2_801314B0.unk_0x38.x) / D_ovl2_801314B0.unk_0x38.y);

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

extern f32 D_ovl2_801314C0; // .bss

// 0x8010C4D0
f32 func_ovl2_8010C4D0(void)
{
    if (D_ovl2_801314C0 > 15000.0F)
    {
        return 0.1F;
    }
    else if (D_ovl2_801314C0 < 2000.0F)
    {
        return 0.05F;
    }
    return ((1.0F - ((D_ovl2_801314C0 - 2000.0F) / 13000.0F)) * 0.05F) + .05F; // Needs to be two different 0.05s lol
}

// 0x8010C55C
void func_ovl2_8010C55C(OMCamera *cam, Vec3f *arg1, f32 arg2)
{
    f32 mag;
    f32 unused;
    Vec3f sp1C;

    lbVector_Vec3fSubtract(&sp1C, arg1, &cam->pan);
    mag = lbVector_Vec3fMagnitude(&sp1C) * arg2;
    lbVector_Vec3fNormalize(&sp1C);
    lbVector_Vec3fScale(&sp1C, mag);
    lbVector_Vec3fAddTo(&cam->pan, &sp1C);
}
