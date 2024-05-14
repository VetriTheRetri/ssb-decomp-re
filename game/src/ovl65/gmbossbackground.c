#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>

#include "gm1pgame.h"

extern intptr_t D_NF_00004D48;

// DATA

// 0x80192BC0 - Red color values of shooting stars on Final Destination
u8 d1PGameBossCometEnvColorR[/* */] = { 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x78 };

// 0x80192BC8 - Green color values of shooting stars on Final Destination
u8 d1PGameBossCometEnvColorG[/* */] = { 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x78 };

// 0x80192BD0 - Blue color values of shooting stars on Final Destination
u8 d1PGameBossCometEnvColorB[/* */] = { 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x78 };

// 0x80192D4C
gm1PGameBossBackground D_ovl65_80192D4C[3];

// GLOBALS

// 0x801938D0
GObj *sGm1PGameBossBackgroundGObj;

// 0x801938D4 - Unused?
s32 sGm1PGamePad801938D4;

// 0x801938D8
gm1PGameBossMain sGm1PGameBossMain;

// 0x801938F0
f32 sGm1PGameBossBackgroundStepRGBA;

// FUNCTIONS

// 0x801910B0
void func_ovl65_801910B0(void)
{
    GObj *gobj;

    func_8000B2B8(sGm1PGameBossBackgroundGObj);

    gobj = gOMObjCommonLinks[GObj_LinkID_Wallpaper];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == GObj_Kind_BossWallpaper)
        {
            func_8000B2B8(gobj);
        }
        gobj = gobj->link_next;
    }
}

// 0x80191114
void gm1PGameBossSetChangeBackground(void)
{
    sGm1PGameBossMain.is_skip_background_change = FALSE;
}

// 0x80191120
void gm1PGameBossMakeCamera(void)
{
    Camera *cam = CameraGetStruct(func_8000B93C(GObj_Kind_UnkCamera3, NULL, 9, 0x80000000, func_80017EC0, 0x28, 0x20, 1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, gCameraStruct.canvas_ulx, gCameraStruct.canvas_uly, gCameraStruct.canvas_lrx, gCameraStruct.canvas_lry);

    cam->projection.persp.aspect = (f32)(gCameraStruct.canvas_lrx - gCameraStruct.canvas_ulx) / (f32)(gCameraStruct.canvas_lry - gCameraStruct.canvas_uly);

    cam->flags |= 4;

    cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;
    cam->vec.eye.x = cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 2000.0F;

    cam = CameraGetStruct(func_8000B93C(GObj_Kind_UnkCamera3, NULL, 9, 0x80000000U, func_80017EC0, 0x3C, 0x20, 2, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, gCameraStruct.canvas_ulx, gCameraStruct.canvas_uly, gCameraStruct.canvas_lrx, gCameraStruct.canvas_lry);

    cam->projection.persp.aspect = (f32)(gCameraStruct.canvas_lrx - gCameraStruct.canvas_ulx) / (f32)(gCameraStruct.canvas_lry - gCameraStruct.canvas_uly);

    cam->flags |= 4;

    cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;
    cam->vec.eye.x = cam->vec.eye.y = 0.0F;
    cam->vec.eye.z = 2000.0F;
}

// 0x80191364
void gm1PGameBossProcRenderBackground0(GObj *gobj)
{
    s32 color_id = DObjGetStruct(gobj)->child->user_data.s;
    s32 alpha = gobj->user_data.s;

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);
    gDPSetEnvColor(gDisplayListHead[1]++, d1PGameBossCometEnvColorR[color_id], d1PGameBossCometEnvColorG[color_id], d1PGameBossCometEnvColorB[color_id], alpha);

    odRenderDObjTreeDLLinksForGObj(gobj);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x80191498
void gm1PGameBossProcRenderBackground1(GObj *gobj)
{
    s32 alpha = gobj->user_data.s;
    DObj *dobj = DObjGetStruct(gobj);

    dobj = dobj->child;

    while (dobj != NULL)
    {
        dobj->mobj->sub.primcolor.a = alpha;
        dobj = dobj->child;
    }
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_2CYCLE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_PASS, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0x00, 0x00, 0x00, alpha);

    odRenderDObjTreeDLLinksForGObj(gobj);

    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x801915B8
void gm1PGameBossProcRenderBackground2(GObj *gobj)
{
    s32 alpha = gobj->user_data.s;
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        if (dobj->mobj != NULL) // NULL check here but not the function above? WTF?
        {
            dobj->mobj->sub.primcolor.a = alpha;
        }
        dobj = dobj->child;
    }
    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);

    odRenderDObjTreeDLLinksForGObj(gobj);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x801916A8
void gm1PGameBossProcRenderBackground3(GObj *gobj)
{
    s32 alpha = gobj->user_data.s;
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        if (dobj->mobj != NULL)
        {
            dobj->mobj->sub.primcolor.a = alpha;
        }
        dobj = dobj->child;
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);

    odRenderDObjTreeForGObj(gobj);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80191798
void gm1PGameBossProcRenderFadeAlpha(GObj *gobj)
{
    s32 alpha;

    sGm1PGameBossBackgroundStepRGBA++;

    if (sGm1PGameBossBackgroundStepRGBA > 255.0F)
    {
        sGm1PGameBossBackgroundStepRGBA = 255.0F;
    }
    alpha = sGm1PGameBossBackgroundStepRGBA;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80191908
void gm1PGameBossProcRenderFadeColor(GObj *gobj)
{
    f32 sub = 2.55F;
    s32 color;

    sGm1PGameBossBackgroundStepRGBA -= sub; // Maybe this is what they did? Doing this only because there's unused stack otherwise.

    if (sGm1PGameBossBackgroundStepRGBA < 0.0F)
    {
        sGm1PGameBossBackgroundStepRGBA = 0.0F;
    }
    color = sGm1PGameBossBackgroundStepRGBA;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, color, color, color, 0xFF);
    gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80191A94
void gm1PGameBossUpdateBackgroundColorID(void)
{
    GObj *gobj = gOMObjCommonLinks[GObj_LinkID_Wallpaper];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == GObj_Kind_BossWallpaper)
        {
            s32 color = sGm1PGameBossMain.bossbackground->user_data.s;

            DObjGetStruct(gobj)->user_data.s = color * -1;
        }
        gobj = gobj->link_next;
    }
}

// 0x80191AEC
void func_ovl65_80191AEC(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    gobj->user_data.s += dobj->user_data.s;

    if (gobj->user_data.s < 0)
    {
        omEjectGObjCommon(gobj);
    }
    else
    {
        if (gobj->user_data.s > 0xFF)
        {
            gobj->user_data.s = 0xFF;
        }
        func_8000DF34(gobj);
    }
}

// 0x80191B44
void func_ovl65_80191B44(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);
    f32 lr;
    f32 bt;
    s32 angle;
    s32 sw;

    sw = 0;
    angle = (lbRandom_GetIntRange(2) * 30) + 30;

    lr = ABS(gMapEdgeBounds.d2.left - 2000.0F)     + ABS(gMapEdgeBounds.d2.right + 2000.0F);
    bt = ABS(gGroundInfo->blastzone_top - 2000.0F) + ABS(gGroundInfo->blastzone_bottom + 2000.0F);

    dobj->translate.vec.f.x = (lbRandom_GetFloat() * lr) + (gMapEdgeBounds.d2.left - 2000.0F);
    dobj->translate.vec.f.y = (lbRandom_GetFloat() * bt) + (gGroundInfo->blastzone_bottom + 2000.0F);

    if (dobj->translate.vec.f.x < 0.0F)
    {
        sw = 2;
    }
    if (dobj->translate.vec.f.y < 0.0F)
    {
        sw++;
    }
    switch (sw)
    {
    case 1:
        angle += 180;
        break;

    case 3:
        angle += 90;
        break;

    case 0:
        angle += 270;
        break;
    }
    dobj->rotate.vec.f.z = F_DEG_TO_RAD(angle);
}

// 0x80191D60
void jtgt_ovl65_80191D60(GObj *gobj)
{
    func_ovl65_80191AEC(gobj);

    if (gobj->anim_frame <= 0.0F)
    {
        func_ovl65_80191B44(gobj);
    }
}

// 0x80191DA4
void jtgt_ovl65_80191DA4(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    if (dobj->user_data.s == -1)
    {
        dobj->dobj_f1 += (-0.0012);

        gcSetAllAnimPlaybackRate(gobj, dobj->dobj_f1);
    }
    else if (gobj->user_data.s < 0xFF)
    {
        dobj->translate.vec.f.y += (-18.8F);
    }
    func_ovl65_80191AEC(gobj);
}

// 0x80191E28
void jtgt_ovl65_80191E28(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    if (gobj->user_data.s == 0)
    {
        dobj->scale.vec.f.x = dobj->scale.vec.f.y = dobj->scale.vec.f.z = 0.0F;
    }
    if (gBattleState->player_block[sGm1PGameBossMain.bossplayer].stock_damage_all > 270)
    {
        dobj->dobj_f1 += 0.02;

        gcSetAllAnimPlaybackRate(gobj, dobj->dobj_f1);
    }
    else if (gobj->user_data.s < 0xFF)
    {
        dobj->scale.vec.f.x += 0.004;
        dobj->scale.vec.f.y += 0.004;
        dobj->scale.vec.f.z += 0.004;
    }
    func_ovl65_80191AEC(gobj);
}

// 0x80191F28
void jtgt_ovl65_80191F28(GObj *gobj)
{
    if (gBattleState->player_block[sGm1PGameBossMain.bossplayer].stock_damage_all > 270)
    {
        gobj->flags = GOBJ_FLAG_NONE;

        func_ovl65_80191AEC(gobj);
    }
    else gobj->flags = GOBJ_FLAG_NORENDER;
}

// 0x80191F90
void jtgt_ovl65_80191F90(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj)->child;

    if (dobj->dobj_f0 == AOBJ_FRAME_NULL)
    {
        if ((gobj->proc_render != gm1PGameBossProcRenderFadeAlpha) && (gobj->proc_render != gm1PGameBossProcRenderFadeColor))
        {
            sGm1PGameBossBackgroundStepRGBA = 230.0F;
            dobj->user_data.s = 0x64;
            gobj->proc_render = gm1PGameBossProcRenderFadeAlpha;
        }
        else
        {
            dobj->user_data.s--;

            if (dobj->user_data.s == 0)
            {
                if (gobj->proc_render == gm1PGameBossProcRenderFadeAlpha)
                {
                    sGm1PGameBossBackgroundStepRGBA = 255.0F;
                    dobj->user_data.s = 0x64;
                    gobj->proc_render = gm1PGameBossProcRenderFadeColor;
                }
                else if (gobj->proc_render == gm1PGameBossProcRenderFadeColor)
                {
                    func_ovl2_80113854();
                    func_8000AF58(func_ovl2_80113638, 0);
                }
            }
        }
    }
    else func_ovl65_80191AEC(gobj);
}

// 0x80192078
void gm1PGameBossSetupBackgroundDObj(GObj *gobj, DObjDesc *dobj_desc, MObjSub ***dp_mobjsub, u8 transform_kind)
{
    s32 i, index;
    MObjSub **p_mobjsub, *mobjsub;
    DObj *dobj_array[18], *dobj;

    for (i = 0; i < ARRAY_COUNT(dobj_array); i++)
    {
        dobj_array[i] = NULL;
    }
    index = (dobj_desc->index & 0xFFF);

    while ((index ^ 0) != ARRAY_COUNT(dobj_array)) // Ewwwww... we meet again, XOR hack.
    {
        if (index != 0)
        {
            dobj = dobj_array[index] = omAddChildForDObj(dobj_array[index - 1], dobj_desc->display_list);
        }
        else
        {
            dobj = dobj_array[0] = omAddDObjForGObj(gobj, dobj_desc->display_list);
        }
        index = dobj_desc->index & 0xF000;

        if (index != 0)
        {
            omAddOMMtxForDObjFixed(dobj, OMMtx_Transform_TraRotRpyR, 0);
            omAddOMMtxForDObjFixed(dobj, 0x2E, 0);
        }
        else omAddOMMtxForDObjFixed(dobj, transform_kind, 0);

        dobj->translate.vec.f = dobj_desc->translate;
        dobj->rotate.vec.f = dobj_desc->rotate;
        dobj->scale.vec.f = dobj_desc->scale;

        if (dp_mobjsub != NULL)
        {
            if (*dp_mobjsub != NULL)
            {
                p_mobjsub = *dp_mobjsub;

                mobjsub = *p_mobjsub;

                while (mobjsub != NULL)
                {
                    omAddMObjForDObj(dobj, mobjsub);

                    p_mobjsub++, mobjsub = *p_mobjsub;
                }
            }
            dp_mobjsub++;
        }
        dobj_desc++, index = dobj_desc->index & 0xFFF;
    }
}

// 0x8019223C
void gm1PGameBossSetBackgroundTranslate(GObj *gobj, s32 index)
{
    DObj *dobj = DObjGetStruct(gobj);

    if (sGm1PGameBossMain.bossbackground->is_random_background == TRUE)
    {
        func_ovl65_80191B44(gobj);

        dobj->translate.vec.f.z = sGm1PGameBossMain.bossbackground->bossvec[index].pos.z;
    }
    else dobj->translate.vec.f = sGm1PGameBossMain.bossbackground->bossvec[index].pos;
}

// 0x801922D4
GObj* gm1PGameBossMakeBackgroundEffect(s32 effect_id, s32 anim_id, s32 vec_id)
{
    GObj *effect_gobj;
    DObj *dobj;
    uintptr_t addr;
    uintptr_t sp48;
    uintptr_t sp44;
    uintptr_t sp40;
    s32 sp3C;

    sp3C = sGm1PGameBossMain.bossbackground->unk_gm1pbossbackground_0x10;
    sp40 = 0;

    effect_gobj = omMakeGObjCommon(GObj_Kind_BossWallpaper, NULL, 0xD, 0x80000000);

    if (effect_gobj == NULL)
    {
        return NULL;
    }
    addr = (uintptr_t)sGm1PGameBossMain.file_head;
    sp48 = sGm1PGameBossMain.bossbackground->bosseffect[effect_id].unk_gm1pbosseffect_0xC;

    omAddGObjRenderProc(effect_gobj, sGm1PGameBossMain.bossbackground->bosseffect[effect_id].proc_render, sGm1PGameBossMain.bossbackground->bossvec[vec_id].unk_gm1pbossvec_0x4, 0x80000000, sGm1PGameBossMain.bossbackground->bossvec[vec_id].unk_gm1pbossvec_0x8);
    gm1PGameBossSetupBackgroundDObj(effect_gobj, (DObjDesc*)(sGm1PGameBossMain.bossbackground->bosseffect[effect_id].unk_gm1pbosseffect_0x8 + addr), (sp48 != 0) ? (MObjSub***)(addr + sp48) : NULL, 0x1C);

    gcSetAllAnimPlaybackRate(effect_gobj, sGm1PGameBossMain.bossbackground->bossanim[anim_id].anim_speed);
    omAddGObjCommonProc(effect_gobj, sGm1PGameBossMain.bossbackground->bosseffect[effect_id].proc_update, GObjProcess_Kind_Proc, 1);

    dobj = DObjGetStruct(effect_gobj);

    sp44 = sGm1PGameBossMain.bossbackground->bossanim[anim_id].unk_gm1pbossanim_0x0;

    if (sp48 != 0)
    {
        sp40 = sGm1PGameBossMain.bossbackground->bossanim[anim_id].unk_gm1pbossanim_0x4;
    }
    if ((sp44 != 0) || (sp40 != 0))
    {
        func_ovl0_800C88AC(dobj, (sp44 != 0) ? (void*) (addr + sp44) : NULL, (sp40 != 0) ? (void*) (addr + sp40) : NULL, 0.0F);
        func_8000DF34(effect_gobj);
    }
    DObjGetStruct(effect_gobj)->child->user_data.s = lbRandom_GetIntRange
    (
        (ARRAY_COUNT(d1PGameBossCometEnvColorR) + ARRAY_COUNT(d1PGameBossCometEnvColorG) + ARRAY_COUNT(d1PGameBossCometEnvColorR)) / 3
    );

    DObjGetStruct(effect_gobj)->user_data.s = sp3C;
    effect_gobj->user_data.s = 0;

    return effect_gobj;
}

// 0x801924E0
void gm1PGameBossAdvanceBackground(void)
{
    GObj *gobj;
    s32 anim_id;
    s32 effect_id;
    s32 vec_id;
    s32 i, j, k;

    for (i = j = k = vec_id = 0; i < sGm1PGameBossMain.bossbackground->background_count; i++, j++)
    {
        if (sGm1PGameBossMain.bossbackground->is_random_background == TRUE)
        {
            effect_id = lbRandom_GetIntRange(sGm1PGameBossMain.bossbackground->effect_count);
            anim_id   = lbRandom_GetIntRange(sGm1PGameBossMain.bossbackground->anim_count);

            if (j == sGm1PGameBossMain.bossbackground->bossvec[k].unk_gm1pbossvec_0x0)
            {
                vec_id++, k++;
                j = 0;
            }
        }
        else
        {
            effect_id = anim_id = i;

            if (j == sGm1PGameBossMain.bossbackground->bossvec[k].unk_gm1pbossvec_0x0)
            {
                vec_id++, k++;
                j = 0;
            }
        }
        gobj = gm1PGameBossMakeBackgroundEffect(effect_id, anim_id, vec_id);

        if (gobj != NULL)
        {
            gm1PGameBossSetBackgroundTranslate(gobj, vec_id);
        }
    }
    sGm1PGameBossMain.is_skip_background_change = TRUE;
    sGm1PGameBossMain.background_id++;
    sGm1PGameBossMain.change_wait = sGm1PGameBossMain.bossbackground->change_wait_base;
}

// 0x80192620
void gm1PGameBossProcUpdateBackground(GObj *gobj)
{
    if (sGm1PGameBossMain.is_skip_background_change == FALSE)
    {
        gm1PGameBossUpdateBackgroundColorID();
        sGm1PGameBossMain.bossbackground = &D_ovl65_80192D4C[sGm1PGameBossMain.background_id];
        gm1PGameBossAdvanceBackground();
    }
    if (sGm1PGameBossMain.change_wait != -1)
    {
        sGm1PGameBossMain.change_wait--;
    }
    if (sGm1PGameBossMain.bossbackground->change_damage_min != -1)
    {
        if (sGm1PGameBossMain.bossbackground->change_damage_min < gBattleState->player_block[sGm1PGameBossMain.bossplayer].stock_damage_all)
        {
            sGm1PGameBossMain.is_skip_background_change = FALSE;
        }
    }
    else if (sGm1PGameBossMain.change_wait == 0)
    {
        sGm1PGameBossMain.is_skip_background_change = FALSE;
    }
}

// 0x801926F8
void gm1PGameBossSetBossPlayer(void)
{
    s32 player;

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (gBattleState->player_block[player].character_kind == Ft_Kind_MasterHand)
        {
            sGm1PGameBossMain.bossplayer = player;
        }
    }
}

// 0x80192764
void gm1PGameBossInitBackgroundMain(void)
{
    GObj *gobj;

    sGm1PGameBossBackgroundGObj = gobj = omMakeGObjCommon(GObj_Kind_Wallpaper, NULL, 0xD, GOBJ_LINKORDER_DEFAULT);

    if (gobj != NULL)
    {
        omAddGObjCommonProc(gobj, gm1PGameBossProcUpdateBackground, GObjProcess_Kind_Proc, 3);

        gm1PGameBossMakeCamera();
        gm1PGameBossSetBossPlayer();

        sGm1PGameBossMain.is_skip_background_change = FALSE;
        sGm1PGameBossMain.background_id = 0;
        sGm1PGameBossMain.file_head = (uintptr_t) ((uintptr_t)gGroundInfo->gr_desc[1].dobj_desc - (intptr_t)&D_NF_00004D48);
        sGm1PGameBossMain.change_wait = 0;
        sGm1PGameBossBackgroundStepRGBA = 0.0F;
    }
}
