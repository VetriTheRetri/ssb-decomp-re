#include "fighter.h"
#include <sys/ml.h>

extern Gfx D_ovl2_8012C490;
extern Gfx D_ovl2_8012C4B0;
extern GfxColorAlpha D_ovl2_8012C4C8;
extern GfxColorAlpha D_ovl2_8012C4CC;
extern GfxColorAlpha D_ovl2_8012C4D0;
extern GfxColorAlpha D_ovl2_8012C4D4;
extern mlBumpAllocRegion gMatrixHeap;

// 0x800F1020
void func_ovl2_800F1020(ftStruct *fp)
{
    s32 i, j;
    s32 next_index;
    s32 index;
    Vtx *base_p_vtx;
    Vtx *p_vtx;
    s32 vtx_size;
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
    vtx_size = ((uintptr_t)p_vtx - (uintptr_t)base_p_vtx) / sizeof(Vtx);

    gSPDisplayList(gDisplayListHead[1]++, vtx_dl);

    gSPVertex(gDisplayListHead[1]++, base_p_vtx, vtx_size, 0);

    for (i = 0; i < (vtx_size - 2); i += 2)
    {
        gSP2Triangles(gDisplayListHead[1]++, i, i + 1, i + 2, FALSE, i + 1, i + 3, i + 2, FALSE);
    }
    gSPDisplayList(gDisplayListHead[1]++, tri_dl);
}