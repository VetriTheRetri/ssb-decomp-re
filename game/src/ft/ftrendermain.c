#include "fighter.h"
#include <sys/ml.h>
#include <sys/hal_gu.h>
#include <sys/develop.h>

u8 D_ovl2_801312F0;
u8 D_ovl2_801312F1;
GfxColorAlpha gFighterFogColor;

extern Vec3f D_ovl0_800D62D0;

extern GObj *gCameraGObj;
extern GObj *D_80046A58;
extern Gfx D_ovl2_8012C490;
extern Gfx D_ovl2_8012C4B0;
extern GfxColorAlpha D_ovl2_8012C4C8;
extern GfxColorAlpha D_ovl2_8012C4CC;
extern GfxColorAlpha D_ovl2_8012C4D0;
extern GfxColorAlpha D_ovl2_8012C4D4;
extern Gfx gDisplayListHitboxBlend[];
extern Gfx gDisplayListHitboxCube[];
extern Gfx gDisplayListHitboxEdge[];
extern Gfx gDisplayListHurtboxCuboid[];
extern Gfx gDisplayListMapCollisionBottom[];
extern Gfx gDisplayListMapCollisionTop[];
extern mlBumpAllocRegion gMatrixHeap;

// 0x800F1020
void func_ovl2_800F1020(ftStruct *fp)
{
    s32 i, j;
    s32 next_index;
    s32 index;
    Vtx *base_p_vtx;
    Vtx *p_vtx;
    s32 vtx_count;
    s32 add_alpha;
    s32 base_alpha;
    f32 var_f20;
    f32 var_f22;
    f32 rotate;
    GfxColorAlpha *color1, *color2;
    Gfx *vtx_dl, *tri_dl;
    ftAfterImage *afterimage;
    Vec3f spC8;
    ftAfterImage *next_afterimage;
    s32 alpha;
    f32 scale;
    s32 alphainc;
    Vec3f spAC;

    index = fp->afterimage.desc_index;

    switch (fp->afterimage.is_itemswing)
    {
    case FALSE:
        var_f20 = 50.0F;
        var_f22 = 250.0F;

        add_alpha = 0;
        base_alpha = 0xFF;

        rotate = F_DEG_TO_RAD(30.0F); // 0.5235988F

        color1 = &D_ovl2_8012C4C8;
        color2 = &D_ovl2_8012C4CC;

        vtx_dl = &D_ovl2_8012C490;
        tri_dl = &D_ovl2_8012C4B0;
        break;

    case TRUE:
        var_f20 = 80.0F;
        var_f22 = 580.0F;

        add_alpha = 0;
        base_alpha = 0xFF;

        rotate = F_DEG_TO_RAD(30.0F); // 0.5235988F

        color1 = &D_ovl2_8012C4D0;
        color2 = &D_ovl2_8012C4D4;

        vtx_dl = &D_ovl2_8012C490;
        tri_dl = &D_ovl2_8012C4B0;
        break;
    }
    base_p_vtx = p_vtx = (Vtx*)gMatrixHeap.ptr;

    if (index != 0)
    {
        index = index - 1;
    }
    else index = ARRAY_COUNT(fp->afterimage.desc) - 1;

    for (i = fp->afterimage.render_state - 1; i >= 0; index = next_index, i--)
    {
        afterimage = &fp->afterimage.desc[index];

        alpha = (((base_alpha - add_alpha) / (fp->afterimage.render_state - 1)) * i) + add_alpha;

        p_vtx->v.ob[0] = (afterimage->unk_afid_0x0 + (afterimage->vec.x * var_f20));
        p_vtx->v.ob[1] = (afterimage->unk_afid_0x2 + (afterimage->vec.y * var_f20));
        p_vtx->v.ob[2] = (afterimage->unk_afid_0x4 + (afterimage->vec.z * var_f20));

        p_vtx->v.flag = 0;

        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

        p_vtx->v.cn[0] = color1->r;
        p_vtx->v.cn[1] = color1->g;
        p_vtx->v.cn[2] = color1->b;
        p_vtx->v.cn[3] = alpha;

        p_vtx = (gMatrixHeap.ptr = (Vtx*)gMatrixHeap.ptr + 1);

        p_vtx->v.ob[0] = (afterimage->unk_afid_0x0 + (afterimage->vec.x * var_f22));
        p_vtx->v.ob[1] = (afterimage->unk_afid_0x2 + (afterimage->vec.y * var_f22));
        p_vtx->v.ob[2] = (afterimage->unk_afid_0x4 + (afterimage->vec.z * var_f22));

        p_vtx->v.flag = 0;

        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

        p_vtx->v.cn[0] = color2->r;
        p_vtx->v.cn[1] = color2->g;
        p_vtx->v.cn[2] = color2->b;
        p_vtx->v.cn[3] = alpha;

        p_vtx = (gMatrixHeap.ptr = (Vtx*)gMatrixHeap.ptr + 1);

        if (i != 0)
        {
            if (index != 0)
            {
                next_index = index - 1;
            }
            else next_index = ARRAY_COUNT(fp->afterimage.desc) - 1;

            next_afterimage = &fp->afterimage.desc[next_index];

            if (lbVector_Vec3fNormalizedCross(&afterimage->vec, &next_afterimage->vec, &spC8) != NULL)
            {
                f32 f_angle_diff = lbVector_Vec3fAngleDiff(&afterimage->vec, &next_afterimage->vec);
                s32 target_angle = f_angle_diff / rotate;

                if (target_angle != 0)
                {
                    s16 n_ai_x;
                    s16 vtx_x;
                    s16 vtx_y;
                    s16 vtx_z;
                    s16 n_ai_y;
                    s16 n_ai_z;

                    target_angle++;

                    scale = 1.0F / (target_angle);

                    n_ai_x = afterimage->unk_afid_0x0;
                    n_ai_y = afterimage->unk_afid_0x2;
                    n_ai_z = afterimage->unk_afid_0x4;

                    f_angle_diff *= scale;

                    vtx_x = ((next_afterimage->unk_afid_0x0 - n_ai_x) * scale);
                    vtx_y = ((next_afterimage->unk_afid_0x2 - n_ai_y) * scale);
                    vtx_z = ((next_afterimage->unk_afid_0x4 - n_ai_z) * scale);

                    spAC = afterimage->vec;

                    alphainc = (((((base_alpha - add_alpha) / (fp->afterimage.render_state - 1)) * (i - 1)) + add_alpha) - alpha) * scale;

                    for (j = 0; j < target_angle - 1; j++)
                    {
                        n_ai_x += vtx_x;
                        n_ai_y += vtx_y;
                        n_ai_z += vtx_z;

                        func_80019438(&spAC, &spC8, f_angle_diff);

                        alpha += alphainc;

                        p_vtx->v.ob[0] = (n_ai_x + (spAC.x * var_f20));
                        p_vtx->v.ob[1] = (n_ai_y + (spAC.y * var_f20));
                        p_vtx->v.ob[2] = (n_ai_z + (spAC.z * var_f20));

                        p_vtx->v.flag = 0;

                        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

                        p_vtx->v.cn[0] = color1->r;
                        p_vtx->v.cn[1] = color1->g;
                        p_vtx->v.cn[2] = color1->b;
                        p_vtx->v.cn[3] = alpha;

                        p_vtx = (gMatrixHeap.ptr = (Vtx*)gMatrixHeap.ptr + 1);

                        p_vtx->v.ob[0] = (n_ai_x + (spAC.x * var_f22));
                        p_vtx->v.ob[1] = (n_ai_y + (spAC.y * var_f22));
                        p_vtx->v.ob[2] = (n_ai_z + (spAC.z * var_f22));

                        p_vtx->v.flag = 0;

                        p_vtx->v.tc[0] = p_vtx->v.tc[1] = 0;

                        p_vtx->v.cn[0] = color2->r;
                        p_vtx->v.cn[1] = color2->g;
                        p_vtx->v.cn[2] = color2->b;
                        p_vtx->v.cn[3] = alpha;

                        p_vtx = (gMatrixHeap.ptr = (Vtx*)gMatrixHeap.ptr + 1);
                    }
                }
            }
        }
    }
    vtx_count = ((uintptr_t)p_vtx - (uintptr_t)base_p_vtx) / sizeof(Vtx);

    gSPDisplayList(gDisplayListHead[1]++, vtx_dl);

    gSPVertex(gDisplayListHead[1]++, base_p_vtx, vtx_count, 0);

    for (i = 0; i < (vtx_count - 2); i += 2)
    {
        gSP2Triangles(gDisplayListHead[1]++, i, i + 1, i + 2, FALSE, i + 1, i + 3, i + 2, FALSE);
    }
    gSPDisplayList(gDisplayListHead[1]++, tri_dl);
}

// 0x800F17E8
void func_ovl2_800F17E8(ftStruct *fp)
{
    s32 shade;
    s32 temp_color;
    s32 red;
    s32 green;
    s32 blue;
    s32 alpha;
    s32 shade_default;

    if (fp->shade == 0)
    {
        red = fp->colanim.maincolor.r;
        green = fp->colanim.maincolor.g;
        blue = fp->colanim.maincolor.b;
        alpha = fp->colanim.maincolor.a;
    }
    else
    {
        GfxColorAlpha *attr_shade_color = &fp->attributes->shade_color[fp->shade - 1];
        caColorInfo *ci = &fp->colanim.maincolor;

        shade_default = (((0xFF - attr_shade_color->a) * (0xFF - ci->a)) / 0xFF);

        if (shade_default == 0xFF)
        {
            red = fp->colanim.maincolor.r;
            green = fp->colanim.maincolor.g;
            blue = fp->colanim.maincolor.b;
            alpha = fp->colanim.maincolor.a;
        }
        else
        {
            shade_default = (0xFF - shade_default);

            temp_color = (((ci->r - fp->shade_color.r) * ci->a) / 0xFF) + fp->shade_color.r;

            red = (temp_color * 0xFF) / shade_default;

            if (red != 0)
            {
                alpha = ((temp_color * 0xFF) / red);
            }
            else alpha = ((shade_default - temp_color) * 0xFF) / 0xFF;

            temp_color = (((ci->g - fp->shade_color.g) * ci->a) / 0xFF) + fp->shade_color.g;

            green = (temp_color * 0xFF) / shade_default;

            temp_color = (((ci->b - fp->shade_color.b) * ci->a) / 0xFF) + fp->shade_color.b;

            blue = (temp_color * 0xFF) / shade_default;
        }
    }

    if (fp->attributes->shade_color[3].r != 0xFF)
    {
        alpha = (fp->attributes->shade_color[3].r * alpha) / 0xFF;
    }
    gFighterFogColor.r = red;
    gFighterFogColor.g = green;
    gFighterFogColor.b = blue;
    gFighterFogColor.a = alpha;
}

// 0x800F1B24
void func_ovl2_800F1B24(GObj *fighter_gobj)
{
    gDPSetFogColor(gDisplayListHead[0]++, gFighterFogColor.r, gFighterFogColor.g, gFighterFogColor.b, gFighterFogColor.a);
}

// 0x800F1B7C
void func_ovl2_800F1B7C(ftStruct *fp)
{
    if (fp->shade == 0)
    {
        gDPSetFogColor(gDisplayListHead[0]++, 0, 0, 0, 0);
    }
    else
    {
        GfxColorAlpha *fog_color = &fp->attributes->shade_color[fp->shade - 1];

        gDPSetFogColor(gDisplayListHead[0]++, fog_color->r, fog_color->g, fog_color->b, fog_color->a);
    }
}

// 0x800F1C08
void func_ovl2_800F1C08(u8 flags, ftStruct *fp)
{
    gDPPipeSync(gDisplayListHead[0]++);

    if (flags & 0x40)
    {
        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_PASS, G_RM_AA_ZB_OPA_SURF2);
    }
    else
    {
        if (fp->colanim.is_use_maincolor)
        {
            if (flags & 0x80)
            {
                if (D_ovl2_801312F1 == FALSE)
                {
                    D_ovl2_801312F1 = TRUE;

                    func_ovl2_800F1B7C(fp);
                }
            }
            else if (D_ovl2_801312F1 != FALSE)
            {
                D_ovl2_801312F1 = FALSE;

                func_ovl2_800F1B24(fp);
            }
        }
        if (D_ovl2_801312F0 == 0xFF)
        {
            gDPSetRenderMode(gDisplayListHead[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_OPA_SURF2);
        }
        else gDPSetRenderMode(gDisplayListHead[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_XLU_SURF2);
    }
}

// 0x800F1D44
void func_ovl2_800F1D44(ftStruct *fp, DObj *dobj, ftParts *unk_dobjtrans)
{
    DObj *root_dobj = DObjGetStruct(unk_dobjtrans->unk_gobj);

    switch (unk_dobjtrans->unk_0xC & 0xF)
    {
    case 0:
        if ((dobj->display_list != NULL) && !(dobj->unk_0x54 & 1))
        {
            func_80012D90(root_dobj, gDisplayListHead);
            func_ovl2_800F1C08(unk_dobjtrans->unk_0xC, fp);

            gSPDisplayList(gDisplayListHead[0]++, root_dobj->display_list);
        }
        break;

    case 1:
        if ((dobj->multi_list != NULL) && (dobj->multi_list->dl2 != NULL) && !(dobj->unk_0x54 & 1))
        {
            func_80012D90(root_dobj, gDisplayListHead);
            func_ovl2_800F1C08(unk_dobjtrans->unk_0xC, fp);

            gSPDisplayList(gDisplayListHead[0]++, root_dobj->display_list);
        }
        break;
    }
}

// 0x800F1E60
void ftRender_DisplayFighterAccessory(DObj *dobj)
{
    ftStruct *fp = ftGetStruct(dobj->parent_gobj);
    s32 sp58;
    s32 unused;
    Vec3f sp48;
    ftParts *unk_dobjtrans;
    DObj *sibling_dobj;
    DObjMultiList *multi_list;

    unk_dobjtrans = dobj->unk_0x84;

    if (!(dobj->unk_0x54 & 2))
    {
        sp48 = D_ovl0_800D62D0;

        if (unk_dobjtrans != NULL)
        {
            switch (unk_dobjtrans->unk_0xC & 0xF)
            {
            case 0:
                sp58 = func_80010D70(gDisplayListHead, dobj);

                if ((unk_dobjtrans != NULL) && (unk_dobjtrans->unk_gobj != NULL) && (fp->ft_kind == Ft_Kind_Purin))
                {
                    func_ovl2_800F1D44(fp, dobj, unk_dobjtrans);
                }
                if ((dobj->display_list != NULL) && !(dobj->unk_0x54 & 1))
                {
                    func_80012D90(dobj, gDisplayListHead);
                    func_ovl2_800F1C08(unk_dobjtrans->unk_0xC, fp);

                    gSPDisplayList(gDisplayListHead[0]++, dobj->display_list);
                }
                break;

            case 1:
                multi_list = dobj->multi_list;

                if ((multi_list != NULL) && (multi_list->dl1 != NULL) && !(dobj->unk_0x54 & 1))
                {
                    func_ovl2_800F1C08(unk_dobjtrans->unk_0xC, fp);

                    gSPDisplayList(gDisplayListHead[0]++, multi_list->dl1);
                }
                sp58 = func_80010D70(gDisplayListHead, dobj);

                if ((multi_list != NULL) && (multi_list->dl2 != NULL) && !(dobj->unk_0x54 & 1))
                {
                    func_80012D90(dobj, gDisplayListHead);
                    func_ovl2_800F1C08(unk_dobjtrans->unk_0xC, fp);

                    gSPDisplayList(gDisplayListHead[0]++, multi_list->dl2);
                }
                break;
            }
        }
        else
        {
            sp58 = func_80010D70(gDisplayListHead, dobj);

            if ((unk_dobjtrans != NULL) && (unk_dobjtrans->unk_gobj != NULL) && (fp->ft_kind == Ft_Kind_Purin))
            {
                func_ovl2_800F1D44(fp, dobj, unk_dobjtrans);
            }
        }
        if ((unk_dobjtrans != NULL) && (unk_dobjtrans->unk_gobj != NULL) && (fp->ft_kind == Ft_Kind_Pikachu))
        {
            func_ovl2_800F1D44(fp, dobj, unk_dobjtrans);
        }
        if (dobj->child != NULL)
        {
            ftRender_DisplayFighterAccessory(dobj->child);
        }
        if ((sp58 != FALSE) && ((dobj->parent == DObjParentNULL) || (dobj->sib_next != NULL)))
        {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
        D_ovl0_800D62D0 = sp48;
    }
    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            ftRender_DisplayFighterAccessory(sibling_dobj);

            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

// 0x800F21B4
void ftRender_DisplayFighterSkeleton(DObj *dobj)
{
    ftStruct *fp;
    s32 sp60;
    s32 unused;
    Vec3f sp50;
    DObjMultiList *multi_list;
    ftParts *unk_dobjtrans;
    DObj *sibling_dobj;
    ftSkeleton *skeleton;

    fp = ftGetStruct(dobj->parent_gobj);
    unk_dobjtrans = dobj->unk_0x84;

    if (!(dobj->unk_0x54 & 2))
    {
        sp50 = D_ovl0_800D62D0;

        if ((unk_dobjtrans != NULL) && (unk_dobjtrans->unk_0xD >= ftParts_Joint_EnumMax))
        {
            skeleton = &fp->attributes->skeleton[fp->colanim.unk_ca_0x60_b34][unk_dobjtrans->unk_0xD - ftParts_Joint_EnumMax];

            switch (skeleton->unk_ftskel_0x4 & 0xF)
            {
            case 0:
                sp60 = func_80010D70(gDisplayListHead, dobj);

                if (!(dobj->unk_0x54 & 1) && (skeleton->display_list != NULL))
                {
                    func_80012D90(dobj, gDisplayListHead);
                    func_ovl2_800F1C08(skeleton->unk_ftskel_0x4, fp);

                    gSPDisplayList(gDisplayListHead[0]++, skeleton->display_list);
                }
                break;

            case 1:
                multi_list = skeleton->multi_list;

                if ((multi_list != NULL) && (multi_list->dl1 != NULL) && !(dobj->unk_0x54 & 1))
                {
                    func_ovl2_800F1C08(skeleton->unk_ftskel_0x4, fp);

                    gSPDisplayList(gDisplayListHead[0]++, multi_list->dl1);
                }
                sp60 = func_80010D70(gDisplayListHead, dobj);

                if ((multi_list != NULL) && (multi_list->dl2 != NULL) && !(dobj->unk_0x54 & 1))
                {
                    func_80012D90(dobj, gDisplayListHead);
                    func_ovl2_800F1C08(skeleton->unk_ftskel_0x4, fp);

                    gSPDisplayList(gDisplayListHead[0]++, multi_list->dl2);
                }
                break;
            }
        }
        else sp60 = func_80010D70(gDisplayListHead, dobj);

        if (dobj->child != NULL)
        {
            ftRender_DisplayFighterSkeleton(dobj->child);
        }
        if ((sp60 != FALSE) && ((dobj->parent == DObjParentNULL) || (dobj->sib_next != NULL)))
        {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
        D_ovl0_800D62D0 = sp50;
    }
    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            ftRender_DisplayFighterSkeleton(sibling_dobj);
            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

// 0x800F24A0
void func_ovl2_800F24A0(GObj *fighter_gobj)
{
    ftStruct *fp = ftGetStruct(fighter_gobj);
    ftAttributes *attributes = fp->attributes;

    if
    (
        (fp->colanim.unk_ca_0x60_b34)                                       &&
        (attributes->skeleton != NULL)                                      &&
        (attributes->skeleton[fp->colanim.unk_ca_0x60_b34] != NULL)         &&
        (fp->joint[(s32)(attributes->skeleton[0])] != NULL)                 &&        // ???
        (fp->joint[(s32)(attributes->skeleton[0])]->display_list != NULL)             // What kind of Flintstones gummies were you on I need them right now
    )
    {
        ftRender_DisplayFighterSkeleton(DObjGetStruct(fighter_gobj));
    }
    else ftRender_DisplayFighterAccessory(DObjGetStruct(fighter_gobj));

    if (fp->afterimage.render_state >= 2)
    {
        switch (fp->afterimage.is_itemswing)
        {
        case FALSE:
            func_ovl2_800F1020(fp);
            break;

        case TRUE:
            func_ovl2_800F1020(fp);
            break;
        }
    }
}

void func_ovl2_800F2584(DObj *dobj)
{
    ftStruct *fp;
    s32 sp90;
    s32 hitstatus;
    DObj *sibling_dobj;
    MtxStore mtx_store;
    s32 i;
    Vec3f sp74;

    fp = ftGetStruct(dobj->parent_gobj);

    sp74 = D_ovl0_800D62D0;

    sp90 = func_80010D70(gDisplayListHead, dobj);

    for (i = 0; i < ARRAY_COUNT(fp->fighter_hurt); i++)
    {
        ftHurtbox *ft_hurt = &fp->fighter_hurt[i];

        if ((ft_hurt->hitstatus != gmHitCollision_HitStatus_None) && (dobj == ft_hurt->joint))
        {
            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate(mtx_store.gbi, ft_hurt->offset.x, ft_hurt->offset.y, ft_hurt->offset.z);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, ft_hurt->size.x / 15.0F, ft_hurt->size.y / 15.0F, ft_hurt->size.z / 15.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gDPPipeSync(gDisplayListHead[0]++);

            if
            (
                (fp->special_hitstatus == gmHitCollision_HitStatus_Intangible)  ||
                (fp->star_hitstatus == gmHitCollision_HitStatus_Intangible)     ||
                (fp->hitstatus == gmHitCollision_HitStatus_Intangible)          ||
                (ft_hurt->hitstatus == gmHitCollision_HitStatus_Intangible)
            )
            {
                hitstatus = gmHitCollision_HitStatus_Intangible;
            }
            else if
            (
                (fp->special_hitstatus == gmHitCollision_HitStatus_Invincible)  ||
                (fp->star_hitstatus == gmHitCollision_HitStatus_Invincible)     ||
                (fp->hitstatus == gmHitCollision_HitStatus_Invincible)          ||
                (ft_hurt->hitstatus == gmHitCollision_HitStatus_Invincible)
            )
            {
                hitstatus = gmHitCollision_HitStatus_Invincible;
            }
            else hitstatus = gmHitCollision_HitStatus_Normal;

            switch (hitstatus)
            {
            case gmHitCollision_HitStatus_Normal:
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0xD0, 0xD0, 0x00, 0xFF);
                break;

            case gmHitCollision_HitStatus_Invincible:
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0xD0, 0x00, 0xFF);
                break;

            case gmHitCollision_HitStatus_Intangible:
                gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);
                gDPSetEnvColor(gDisplayListHead[0]++, 0x00, 0x00, 0xD0, 0xFF);
                break;
            }
            gSPDisplayList(gDisplayListHead[0]++, gDisplayListHurtboxCuboid);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);

            break;
        }
    }
    if (dobj->child != NULL)
    {
        func_ovl2_800F2584(dobj->child);
    }
    if (sp90 != FALSE)
    {
        if ((dobj->parent == DObjParentNULL) || (dobj->sib_next != NULL))
        {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
    D_ovl0_800D62D0 = sp74;

    if (dobj->sib_prev == NULL)
    {
        sibling_dobj = dobj->sib_next;

        while (sibling_dobj != NULL)
        {
            func_ovl2_800F2584(sibling_dobj);

            sibling_dobj = sibling_dobj->sib_next;
        }
    }
}

Vec2f D_ovl2_8012B930[2][4];

// 0x800F293C - WARNING: Fake match. sp110 snaps to sp114, cannot make room on stack to align it.
void func_ovl2_800F293C(GObj *fighter_gobj)
{
    ftStruct *fp;
    ftAttributes *attributes;
    ftHitbox *ft_hit;
    MtxStore mtx_store;
    s32 i;
    Vec3f sp128;
    f32 sp124;
    f32 sp120;
    Vec3f sp110;

    fp = ftGetStruct(fighter_gobj);
    attributes = fp->attributes;

    D_ovl2_801312F0 = 0xFF;
    D_ovl2_801312F1 = FALSE;

    if ((fp->is_invisible) && (fp->display_mode == dbObject_DisplayMode_Master))
    {
        fp->x18D_flag_b5 = FALSE;

        return;
    }
    if ((fp->status_info.pl_kind == Pl_Kind_Human) || (fp->status_info.pl_kind == Pl_Kind_CPU) || (fp->status_info.pl_kind == Pl_Kind_Explain))
    {
        if (D_80046A58->gobj_id == omGObj_Kind_MainCamera)
        {
            switch (fp->status_info.status_id)
            {
            case ftStatus_Common_DeadUpStar:
            case ftStatus_Common_DeadUpFall:
                fp->x18D_flag_b5 = FALSE;
                break;

            default:
                sp128 = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

                sp128.y += fp->attributes->cam_offset_y;

                // SUPER FAKE. I hope I can fix this in the future. sp128 - 2 should really be sp110, but we get stack issues otherwise.
                lbVector_Vec3fSubtract(&sp128 - 2, &OMCameraGetStruct(gCameraGObj)->view.pan, &sp128);

                if (fp->attributes->cam_offset_y < lbVector_Vec3fMagnitude(&sp128 - 2))
                {
                    lbVector_Vec3fNormalize(&sp128 - 2);
                    lbVector_Vec3fScale(&sp128 - 2, fp->attributes->cam_offset_y);
                    lbVector_Vec3fAddTo(&sp128, &sp128 - 2);
                }
                func_ovl2_800EB924(OMCameraGetStruct(gCameraGObj), gCameraMatrix, &sp128, &sp124, &sp120);

                if (func_ovl2_8010E5F4(sp124, sp120) == FALSE)
                {
                    sp128 = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

                    sp128.y += 300.0F;

                    func_ovl2_800EB924(OMCameraGetStruct(gCameraGObj), gCameraMatrix, &sp128, &fp->ifpos_x, &fp->ifpos_y);

                    fp->x18D_flag_b5 = TRUE;

                    if (gPlayerCommonInterface.is_ifmagnify_display != FALSE)
                    {
                        if (!(fp->x18E_flag_b2) && !(fp->x18E_flag_b1))
                        {
                            gPlayerCommonInterface.ifmagnify_mode = 1;

                            func_ovl2_801119AC(sp124, sp120);
                        }
                    }
                    return;
                }
                else fp->x18D_flag_b5 = FALSE;

                break;
            }
        }
        else if (!(fp->x18E_flag_b2) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
        {
            func_ovl2_80110DD4(gDisplayListHead, fp);
        }
        else return;
    }
    D_ovl0_800D62D0.x = D_ovl0_800D62D0.y = D_ovl0_800D62D0.z = 1.0F;

    if ((fp->display_mode == dbObject_DisplayMode_Master) || (fp->display_mode == dbObject_DisplayMode_MapCollision))
    {
        gDPPipeSync(gDisplayListHead[0]++);

        if (fp->colanim.is_use_light)
        {
            if (fp->status_info.pl_kind != Pl_Kind_Result)
            {
                func_ovl2_800FCB70(gDisplayListHead, fp->lr * fp->colanim.light_angle1, fp->colanim.light_angle2);
            }
            else func_ovl2_800FCB70(gDisplayListHead, F_RAD_TO_DEG(DObjGetStruct(fighter_gobj)->rotate.vec.f.y) + fp->colanim.light_angle1, fp->colanim.light_angle2);
        }
        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_2CYCLE);

        gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_FOG_PRIM_A, G_RM_AA_ZB_OPA_SURF2);

        if (fp->colanim.is_use_blendcolor)
        {
            gDPSetEnvColor(gDisplayListHead[0]++, fp->colanim.blendcolor.r, fp->colanim.blendcolor.g, fp->colanim.blendcolor.b, fp->colanim.blendcolor.a);

            D_ovl2_801312F0 = fp->colanim.blendcolor.a;
        }
        else if (fp->x192_flag_b4)
        {
            gDPSetEnvColor(gDisplayListHead[0]++, fp->unk_0xA8C, fp->unk_0xA8D, fp->unk_0xA8E, fp->unk_0xA8F);

            D_ovl2_801312F0 = fp->unk_0xA8F;
        }
        else if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            D_ovl2_801312F0 = mpCollision_SetLightColorGetAlpha(gDisplayListHead);
        }
        else D_ovl2_801312F0 = func_ovl1_80390534(gDisplayListHead);

        if (fp->colanim.is_use_maincolor)
        {
            func_ovl2_800F17E8(fp);
            func_ovl2_800F1B24(fp);
        }
        else func_ovl2_800F1B7C(fp);

        if (fp->shuffle_timer != 0)
        {
            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate
            (
                mtx_store.gbi,
                D_ovl2_8012B930[fp->is_shuffle_electric][fp->shuffle_frame_index].x,
                D_ovl2_8012B930[fp->is_shuffle_electric][fp->shuffle_frame_index].y,
                0.0F
            );
            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
        }
        if ((fp->status_info.pl_kind == Pl_Kind_Result) || (fp->status_info.pl_kind == 4) || (D_80046A58->gobj_id == omGObj_Kind_MainCamera))
        {
            func_ovl2_800F24A0(fighter_gobj);
        }
        else
        {
            fp->joint[ftParts_Joint_TopN]->om_mtx[0]->unk04 = 0x1A;

            func_ovl2_800F24A0(fighter_gobj);

            fp->joint[ftParts_Joint_TopN]->om_mtx[0]->unk04 = 0x4B;
        }
        if (fp->shuffle_timer != 0)
        {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
        gDPPipeSync(gDisplayListHead[0]++);

        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

        if (fp->status_info.pl_kind != Pl_Kind_Result)
        {
            func_ovl2_800FCB70(gDisplayListHead, gMapLightAngleX, gMapLightAngleY);
        }
        else func_ovl2_800FCB70(gDisplayListHead, func_ovl1_8039051C(), func_ovl1_80390528());

        if (fp->display_mode == dbObject_DisplayMode_MapCollision)
        {
            gDPPipeSync(gDisplayListHead[0]++);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x,
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + attributes->object_coll.bottom,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, attributes->object_coll.width / 30.0F, attributes->object_coll.center / 30.0F, 1.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gSPDisplayList(gDisplayListHead[0]++, gDisplayListMapCollisionBottom);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_translate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x,
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + attributes->object_coll.center,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, attributes->object_coll.width / 30.0F, (attributes->object_coll.top - attributes->object_coll.center) / 30.0F, 1.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gSPDisplayList(gDisplayListHead[0]++, gDisplayListMapCollisionTop);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            gDPPipeSync(gDisplayListHead[0]++);

            hal_translate
            (
                mtx_store.gbi,
                DObjGetStruct(fighter_gobj)->translate.vec.f.x + (fp->coll_data.cliffcatch_coll.x * fp->lr),
                DObjGetStruct(fighter_gobj)->translate.vec.f.y + fp->coll_data.cliffcatch_coll.y,
                DObjGetStruct(fighter_gobj)->translate.vec.f.z
            );

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            hlMatrixStoreGBI(mtx_store, gMatrixHeap);

            hal_scale(mtx_store.gbi, 3.0F, 3.0F, 3.0F);

            gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

            gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);

            gDPSetEnvColor(gDisplayListHead[0]++, 0xD0, 0x00, 0xD0, 0xFF);

            gSPDisplayList(gDisplayListHead[0]++, gDisplayListHurtboxCuboid);

            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
    }
    else
    {
        if (D_80046A58->gobj_id == omGObj_Kind_MainCamera)
        {
            func_ovl2_800F2584(DObjGetStruct(fighter_gobj));
        }
        else
        {
            fp->joint[ftParts_Joint_TopN]->om_mtx[0]->unk04 = 0x1A;

            func_ovl2_800F2584(DObjGetStruct(fighter_gobj));

            fp->joint[ftParts_Joint_TopN]->om_mtx[0]->unk04 = 0x4B;
        }
        for (i = 0; i < ARRAY_COUNT(fp->fighter_hit); i++)
        {
            ft_hit = &fp->fighter_hit[i];

            if ((ft_hit->update_state != gmHitCollision_UpdateState_Disable) && (ft_hit->update_state != gmHitCollision_UpdateState_New))
            {
                gDPPipeSync(gDisplayListHead[0]++);

                if (fp->display_mode == dbObject_DisplayMode_HitAttackOutline)
                {
                    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0xE0);
                }
                else
                {
                    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, 0xFF);

                    gDPSetEnvColor(gDisplayListHead[0]++, 0xB0, 0x00, 0x00, 0xFF);

                    gDPSetBlendColor(gDisplayListHead[0]++, 0x00, 0x00, 0x00, 0x00);
                }
                if (ft_hit->update_state == gmHitCollision_UpdateState_Interpolate)
                {
                    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                    hal_translate(mtx_store.gbi, ft_hit->pos_prev.x, ft_hit->pos_prev.y, ft_hit->pos_prev.z);

                    gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                    hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                    hal_scale(mtx_store.gbi, ft_hit->size / 15.0F, ft_hit->size / 15.0F, ft_hit->size / 15.0F);

                    gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                    gSPDisplayList(gDisplayListHead[0]++, gDisplayListHitboxEdge);

                    gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
                }
                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_translate(mtx_store.gbi, ft_hit->pos.x, ft_hit->pos.y, ft_hit->pos.z);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                hlMatrixStoreGBI(mtx_store, gMatrixHeap);

                hal_scale(mtx_store.gbi, ft_hit->size / 15.0F, ft_hit->size / 15.0F, ft_hit->size / 15.0F);

                gSPMatrix(gDisplayListHead[0]++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                if (ft_hit->update_state == gmHitCollision_UpdateState_Interpolate)
                {
                    gSPDisplayList(gDisplayListHead[0]++, gDisplayListHitboxBlend);
                }
                gSPDisplayList(gDisplayListHead[0]++, gDisplayListHitboxCube);

                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
    }
    if ((fp->status_info.pl_kind == Pl_Kind_Human) || (fp->status_info.pl_kind == Pl_Kind_CPU) || (fp->status_info.pl_kind == Pl_Kind_Explain))
    {
        if (D_80046A58->gobj_id != omGObj_Kind_MainCamera)
        {
            if (!(fp->x18E_flag_b2) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
            {
                ifMagnify_Glass_ProcRender(fp);
            }
        }
    }
}