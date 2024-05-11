#include "obj.h"

#include "sys/gtl.h"
#include "sys/hal_gu.h"
#include "sys/system_00.h"
#include "sys/system_04.h"

#include <config.h>

/* These should no longer be required as they're included in obj.h
#include <macros.h>
#include <ssb_types.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>
*/

// gbi Mtx * ? pointer to some sort of matrix
Mtx *D_80046FA0;
f32 gSpriteLayerScale; // Sprite scale / depth? Appears to overlap objects in its own DLLink, so maybe depth?
Mtx44f D_80046FA8;
Mtx44f D_80046FE8;
Mtx44f D_80047028;
Mtx44f D_80047068;
s32 D_800470A8;
struct MtxProcTemp *D_800470AC;
Gfx *D_800470B0;

Gfx *D_800470B8[4];
Gfx D_800470C8[60];

s32 D_800472A8;
// the first pointer in the set of four doesn't seem to be used too much
Gfx *D_800472B0[4];
Gfx *D_800472C0;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

/* in F3DEX2 2.04H, there is a unique DList command for recalculating
    the MVP matrix in the coprocessor
*/
#define gSPMvpRecalc(pkt) gImmp21(pkt, G_SPECIAL_1, 0, 1, 0)
#define gsSPMvpRecalc()   gsImmp21(G_SPECIAL_1, 0, 1, 0)

#ifdef NON_MATCHING
s32 odRenderDObjMain(Gfx **dl, DObj *dobj)
{
    Gfx *current_dl = *dl;
    OMMtx *ommtx;
    s32 sp2CC;
    s32 ret;
    gsMtxStore mtx_store;
    OMTranslate *translate;
    OMRotate *rotate; // fp (s8)
    OMTranslate *scale;
    f32 f12;
    s32 i;
    s32 j;
    s32 kind;

    sp2CC = 0;

    if (dobj->dynstore != NULL)
    {
        uintptr_t csr = (uintptr_t)dobj->dynstore->data;

        for (i = 0; i < ARRAY_COUNT(dobj->dynstore->kinds); i++)
        {
            switch (dobj->dynstore->kinds[i])
            {
            case 0:
                break;

            case 1:
                translate = (OMTranslate*)csr;
                csr += sizeof(OMTranslate);
                break;

            case 2:
                rotate = (OMRotate*)csr;
                csr += sizeof(OMRotate);
                break;

            case 3:
                scale = (OMScale*)csr;
                csr += sizeof(OMScale);
                break;
            }
        }
    }
    for (i = 0; i < dobj->ommtx_len; i++) // Can use "j" here without any consequences
    {
        ommtx = dobj->ommtx[i]; // s3

        if (ommtx != NULL)
        {
            mtx_store.gbi = &ommtx->mtx;

            /* 
             * Non-matching part begins here. ommtx->unk05 gets forced into v1 instead of v0, and ommtx->kind into v0 instead of v1.
             * gGraphicsHeap is also placed in v0 instead of v1; these two v0/v1 swaps are *mostly* unrelated. I have tried for hours,
             * but I cannot find a permutation that satisfies all requirements. The "closest" I got to a real match was by using
             * fabricated inline getters for ommtx->kind in the first two >= 66 comparisons, which bloated the stack frame too much,
             * and of course also generated a stub that I reckon will not appear in this TU. I have just about given up on this function,
             * but I do not feel too much remorse for doing so; it is functionally equivalent and all instructions match at the very least.
             * 
             * If a brave volunteer would like to try in the future (so you either get a light bulb above your head or so you can avoid wasting your time), here's what I've tried:
             *     - making a variable for ommtx->kind or ommtx->unk05 
             *     - a bunch of permutations regarding how gGraphicsHeap.ptr is advanced (gGraphicsHeap.ptr++, gGraphicsHeap.size += sizeof(Mtx44f), etc.)
             *     - the C address hack "*(type*)&" to get ommtx->kind and ommtx->unk05
             *     - making a u8* variable to ommtx->kind and ommtx->unk05 and dereferencing that
             *     - various control flow permutations in an attempt to bump regalloc
             *     - more that I am forgetting
             * 
             * If there is one last clue, it should be that the permuter cannot find any solutions. That tells us what the solution *isn't*.
             * Good luck!
             */

            if (ommtx->unk05 != 2)
            {
                if (ommtx->unk05 == 4)
                {
                    if (dobj->parent_gobj->fd_last != D_8003B6E8.bytes.b3)
                    {
                        *mtx_store.p = gGraphicsHeap.ptr;
                        gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                    }
                    else
                    {
                        switch (ommtx->kind)
                        {
                        case 33:
                        case 34:
                        case 35:
                        case 36:
                        case 37:
                        case 38:
                        case 39:
                        case 40:
                        case 41:
                        case 42:
                        case 43:
                        case 44:
                        case 45:
                        case 46:
                        case 47:
                        case 48:
                        case 49:
                        case 50:
                            gGraphicsHeap.ptr = (mtx_store.gbi = gGraphicsHeap.ptr) + 1;
                            break;

                        default:
                            if (ommtx->kind >= 66)
                            {
                                gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                            }
                            else
                            {
                                mtx_store.p = *mtx_store.p;

                                goto check_05;
                            }
                            break;
                        }
                    }
                }
                else if ((s32)gGtlTaskId > 0)
                {
                    gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                }
                else if (dobj->parent_gobj->fd_last == D_8003B6E8.bytes.b3)
                {
                    switch (ommtx->kind)
                    {
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                    case 38:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                    case 48:
                    case 49:
                    case 50:
                        gGraphicsHeap.ptr = (mtx_store.gbi = gGraphicsHeap.ptr) + 1;
                        break;

                    default:
                        if (ommtx->kind >= 66)
                        {
                            gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                        }
                        else if (ommtx->unk05 == 3)
                        {
                            gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                        }
                        else goto check_05;

                        break;
                    }
                }
                ret = 0;

                switch (ommtx->kind)
                {
                case 1:
                {
                    break;
                }
                case 2:
                {
                    break;
                }
                case OMMtx_Transform_Tra:
                {
                    hlMtxTranslate(mtx_store.gbi, dobj->translate.vec.f.x, dobj->translate.vec.f.y, dobj->translate.vec.f.z);
                    break;
                }
                case OMMtx_Transform_RotD:
                {
                    hal_rotate_degrees(mtx_store.gbi, dobj->rotate.a, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case OMMtx_Transform_TraRotD:
                {
                    hal_rotate_translate_degrees
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_RotRpyD:
                {
                    hal_rotate_rpy_degrees(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case OMMtx_Transform_TraRotRpyD:
                {
                    hal_rotate_rpy_translate_degrees
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_RotR:
                {
                    hal_rotate
                    (
                        mtx_store.gbi,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_TraRotR:
                {
                    hal_rotate_translate
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_TraRotRSca:
                {
                    hal_rotate_translate_rowscale
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z,
                        dobj->scale.vec.f.x,
                        dobj->scale.vec.f.y,
                        dobj->scale.vec.f.z
                    );
                    gSpriteLayerScale *= dobj->scale.vec.f.x;
                    break;
                }
                case OMMtx_Transform_RotRpyR:
                {
                    hal_rotate_rpy(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case OMMtx_Transform_TraRotRpyR:
                {
                    hal_rotate_rpy_translate
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_TraRotRpyRSca:
                {
                    hal_rotate_rpy_translate_scale
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z,
                        dobj->scale.vec.f.x,
                        dobj->scale.vec.f.y,
                        dobj->scale.vec.f.z
                    );
                    gSpriteLayerScale *= dobj->scale.vec.f.x;
                    break;
                }
                case OMMtx_Transform_RotPyrR:
                {
                    hal_rotate_pyr(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case OMMtx_Transform_TraRotPyrR:
                {
                    hal_rotate_pyr_translate
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_TraRotPyrRSca:
                {
                    hal_rotate_pyr_translate_scale
                    (
                        mtx_store.gbi,
                        dobj->translate.vec.f.x,
                        dobj->translate.vec.f.y,
                        dobj->translate.vec.f.z,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z,
                        dobj->scale.vec.f.x,
                        dobj->scale.vec.f.y,
                        dobj->scale.vec.f.z
                    );
                    gSpriteLayerScale *= dobj->scale.vec.f.x;
                    break;
                }
                case OMMtx_Transform_Sca:
                {
                    hlMtxScale(mtx_store.gbi, dobj->scale.vec.f.x, dobj->scale.vec.f.y, dobj->scale.vec.f.z);
                    gSpriteLayerScale *= dobj->scale.vec.f.x;
                    break;
                }
                case 33:
                {
                    func_80010AE8(mtx_store.f, dobj, FALSE);
                    break;
                }
                case 34:
                {
                    func_80010AE8(mtx_store.f, dobj, TRUE);
                    break;
                }
                case 35:
                {
                    func_80010748(mtx_store.f, dobj, FALSE);
                    break;
                }
                case 36:
                {
                    func_80010748(mtx_store.f, dobj, TRUE);
                    break;
                }
                case 37:
                {
                    func_80010C2C(mtx_store.f, dobj, FALSE);
                    break;
                }
                case 38:
                {
                    func_80010C2C(mtx_store.f, dobj, TRUE);
                    break;
                }
                case 39:
                {
                    func_80010918(mtx_store.f, dobj, FALSE);
                    break;
                }
                case 40:
                {
                    func_80010918(mtx_store.f, dobj, TRUE);
                    break;
                }
                case OMMtx_Transform_VecTra:
                {
                    hlMtxTranslate(mtx_store.gbi, translate->vec.f.x, translate->vec.f.y, translate->vec.f.z);
                    break;
                }
                case OMMtx_Transform_VecRotR:
                {
                    hal_rotate(mtx_store.gbi, rotate->a, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;
                }
                case OMMtx_Transform_VecRotRpyR:
                {
                    hal_rotate_rpy(mtx_store.gbi, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;
                }
                case OMMtx_Transform_VecSca:
                {
                    hlMtxScale(mtx_store.gbi, scale->vec.f.x, scale->vec.f.y, scale->vec.f.z);
                    gSpriteLayerScale *= scale->vec.f.x;
                    break;
                }
                case OMMtx_Transform_VecTraRotR:
                {
                    hal_rotate_translate
                    (
                        mtx_store.gbi,
                        translate->vec.f.x,
                        translate->vec.f.y,
                        translate->vec.f.z,
                        rotate->a,
                        rotate->vec.f.x,
                        rotate->vec.f.y,
                        rotate->vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_VecTraRotRSca:
                {
                    hal_rotate_translate_rowscale
                    (
                        mtx_store.gbi,
                        translate->vec.f.x,
                        translate->vec.f.y,
                        translate->vec.f.z,
                        rotate->a,
                        rotate->vec.f.x,
                        rotate->vec.f.y,
                        rotate->vec.f.z,
                        scale->vec.f.x,
                        scale->vec.f.y,
                        scale->vec.f.z
                    );
                    gSpriteLayerScale *= scale->vec.f.x;
                    break;
                }
                case OMMtx_Transform_VecTraRotRpyR:
                {
                    hal_rotate_rpy_translate
                    (
                        mtx_store.gbi,
                        translate->vec.f.x,
                        translate->vec.f.y,
                        translate->vec.f.z,
                        rotate->vec.f.x,
                        rotate->vec.f.y,
                        rotate->vec.f.z
                    );
                    break;
                }
                case OMMtx_Transform_VecTraRotRpyRSca:
                {
                    hal_rotate_rpy_translate_scale
                    (
                        mtx_store.gbi,
                        translate->vec.f.x,
                        translate->vec.f.y,
                        translate->vec.f.z,
                        rotate->vec.f.x,
                        rotate->vec.f.y,
                        rotate->vec.f.z,
                        scale->vec.f.x,
                        scale->vec.f.y,
                        scale->vec.f.z
                    );
                    gSpriteLayerScale *= scale->vec.f.x;
                    break;
                }
                case 41:
                {
                    gSPMvpRecalc(current_dl++);
                    // gSPInsertMatrix?
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0->m[1][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0->m[3][1]);
                    // this is different
                    continue;
                }
                case 42:
                {
                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0->m[1][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0->m[3][1]);

                    continue;
                }
                case 43:
                {
                    f12 = dobj->scale.vec.f.y * gSpriteLayerScale;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * gSpriteLayerScale;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * gSpriteLayerScale;

                    D_80046FE8[0][1] = 0.0F;
                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][0] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 44:
                {
                    f12 = dobj->scale.vec.f.y * gSpriteLayerScale;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * gSpriteLayerScale;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * gSpriteLayerScale;

                    D_80046FE8[0][1] = 0.0F;
                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][0] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 45:
                {
                    f32 cosx, sinx;

                    sinx = __sinf(dobj->rotate.vec.f.x); // sp1CC
                    cosx = cosf(dobj->rotate.vec.f.x); // sp1C8 ?

                    // f2 * f8 -> f12
                    f12 = dobj->scale.vec.f.y * gSpriteLayerScale;
                    // f2 * f10 -> f4 store reload -> f2
                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * gSpriteLayerScale * cosx;
                    D_80046FE8[1][0] = D_80046FA8[0][0] * gSpriteLayerScale * -sinx;
                    D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinx;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosx;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 46:
                {
                    f32 cosz, sinz;

                    sinz = __sinf(dobj->rotate.vec.f.z); // sp190
                    cosz = cosf(dobj->rotate.vec.f.z); // sp188 ?

                    f12 = dobj->scale.vec.f.y * gSpriteLayerScale;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * gSpriteLayerScale * cosz;
                    D_80046FE8[1][0] = D_80046FA8[0][0] * gSpriteLayerScale * -sinz;
                    D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinz;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosz;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 47:
                {
                    f12 = gSpriteLayerScale * dobj->scale.vec.f.y;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047028[0][0] * gSpriteLayerScale;
                    D_80046FE8[0][1] = D_80047028[0][1] * gSpriteLayerScale;
                    D_80046FE8[0][2] = D_80047028[0][2] * gSpriteLayerScale;
                    D_80046FE8[0][3] = D_80047028[0][3] * gSpriteLayerScale;
                    D_80046FE8[1][0] = D_80047028[1][0] * f12;
                    D_80046FE8[1][1] = D_80047028[1][1] * f12;
                    D_80046FE8[1][2] = D_80047028[1][2] * f12;
                    D_80046FE8[1][3] = D_80047028[1][3] * f12;
                    D_80046FE8[2][0] = D_80047028[2][0] * gSpriteLayerScale;
                    D_80046FE8[2][1] = D_80047028[2][1] * gSpriteLayerScale;
                    D_80046FE8[2][2] = D_80047028[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80047028[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 48:
                {
                    f12 = gSpriteLayerScale * dobj->scale.vec.f.y;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047028[0][0] * gSpriteLayerScale;
                    D_80046FE8[0][1] = D_80047028[0][1] * gSpriteLayerScale;
                    D_80046FE8[0][2] = D_80047028[0][2] * gSpriteLayerScale;
                    D_80046FE8[0][3] = D_80047028[0][3] * gSpriteLayerScale;
                    D_80046FE8[1][0] = D_80047028[1][0] * f12;
                    D_80046FE8[1][1] = D_80047028[1][1] * f12;
                    D_80046FE8[1][2] = D_80047028[1][2] * f12;
                    D_80046FE8[1][3] = D_80047028[1][3] * f12;
                    D_80046FE8[2][0] = D_80047028[2][0] * gSpriteLayerScale;
                    D_80046FE8[2][1] = D_80047028[2][1] * gSpriteLayerScale;
                    D_80046FE8[2][2] = D_80047028[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80047028[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 49:
                {
                    f12 = gSpriteLayerScale * dobj->scale.vec.f.y;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047068[0][0] * gSpriteLayerScale;
                    D_80046FE8[0][1] = D_80047068[0][1] * gSpriteLayerScale;
                    D_80046FE8[0][2] = D_80047068[0][2] * gSpriteLayerScale;
                    D_80046FE8[0][3] = D_80047068[0][3] * gSpriteLayerScale;
                    D_80046FE8[1][0] = D_80047068[1][0] * f12;
                    D_80046FE8[1][1] = D_80047068[1][1] * f12;
                    D_80046FE8[1][2] = D_80047068[1][2] * f12;
                    D_80046FE8[1][3] = D_80047068[1][3] * f12;
                    D_80046FE8[2][0] = D_80047068[2][0] * gSpriteLayerScale;
                    D_80046FE8[2][1] = D_80047068[2][1] * gSpriteLayerScale;
                    D_80046FE8[2][2] = D_80047068[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80047068[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                case 50:
                {
                    f12 = gSpriteLayerScale * dobj->scale.vec.f.y;

                    gSpriteLayerScale *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047068[0][0] * gSpriteLayerScale;
                    D_80046FE8[0][1] = D_80047068[0][1] * gSpriteLayerScale;
                    D_80046FE8[0][2] = D_80047068[0][2] * gSpriteLayerScale;
                    D_80046FE8[0][3] = D_80047068[0][3] * gSpriteLayerScale;
                    D_80046FE8[1][0] = D_80047068[1][0] * f12;
                    D_80046FE8[1][1] = D_80047068[1][1] * f12;
                    D_80046FE8[1][2] = D_80047068[1][2] * f12;
                    D_80046FE8[1][3] = D_80047068[1][3] * f12;
                    D_80046FE8[2][0] = D_80047068[2][0] * gSpriteLayerScale;
                    D_80046FE8[2][1] = D_80047068[2][1] * gSpriteLayerScale;
                    D_80046FE8[2][2] = D_80047068[2][2] * gSpriteLayerScale;
                    D_80046FE8[2][3] = D_80047068[2][3] * gSpriteLayerScale;

                    hlMtxF2L(&D_80046FE8, mtx_store.gbi);

                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtx_store.gbi->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtx_store.gbi->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtx_store.gbi->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtx_store.gbi->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtx_store.gbi->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtx_store.gbi->m[1][1]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtx_store.gbi->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtx_store.gbi->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtx_store.gbi->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtx_store.gbi->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtx_store.gbi->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtx_store.gbi->m[3][1]);

                    continue;
                }
                default:
                    if (ommtx->kind >= 66)
                    {
                        if (D_800470AC != NULL)
                        {
                            sb32(*proc)(Mtx*, DObj*, Gfx**) = (dobj->parent_gobj->fd_last != D_8003B6E8.bytes.b3) ? D_800470AC[ommtx->kind - 66].unk00 : D_800470AC[ommtx->kind - 66].unk04;

                            // If proc's return value uses up a GPR and is assigned to a variable, IDO refuses to free up v0 later down.
                            ret = proc(mtx_store.gbi, dobj, &current_dl);
                        }
                    }
                    if (ret == 1)
                    {
                        continue;
                    }
                    else break;
                }
                // The problem is right here. If we can figure out a way to free up v0 after being assigned to ret from proc, this function will be matched.
            check_05:
                if (ommtx->unk05 == 1)
                {
                    if (mtx_store.gbi == &ommtx->mtx)
                    {
                        ommtx->unk05 = 2;
                    }
                }
            }
            if (ommtx->kind != 2)
            {
                if ((sp2CC == 0) && (dobj->parent == DOBJ_PARENT_NULL || dobj->sib_next != NULL))
                {
                    gSPMatrix(current_dl++, mtx_store.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                }
                else gSPMatrix(current_dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

                sp2CC++;
            }
        }
    }
    *dl = current_dl;

    return sp2CC;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/odRenderDObjMain.s")
#endif

// 0x80012D90
void odRenderMObjForDObj(DObj *dobj, Gfx **dl_head)
{
    s32 mobj_count;
    s32 i;
    MObj *mobj;
    Gfx *new_dl;
    Gfx *branch_dl;
    u32 flags;
    f32 phi_f2;
    f32 phi_f12;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    s32 uls, ult;
    s32 s, t;

    if (dobj->mobj == NULL)
    {
        return;
    }
    gSPSegment(dl_head[0]++, 0xE, gGraphicsHeap.ptr);

    for (mobj_count = 0, mobj = dobj->mobj; mobj != NULL; mobj_count++)
    {
        mobj = mobj->next;
    }

    mobj = dobj->mobj;
    branch_dl = (Gfx*)gGraphicsHeap.ptr + mobj_count;
    new_dl = gGraphicsHeap.ptr;

    for (i = 0; i < mobj_count; i++, mobj = mobj->next)
    {
        flags = mobj->sub.flags;

        if (flags == 0)
        {
            flags = (0x80 | 0x20 | 0x1);
        }
        if (flags & (0x80 | 0x40 | 0x20))
        {
            phi_f2 = mobj->sub.unk1C;
            phi_f12 = mobj->sub.unk20;

            spBC = mobj->sub.unk14;
            spB8 = mobj->sub.unk18;
            spB4 = mobj->sub.unk3C;
            spB0 = mobj->sub.unk40;

            if (mobj->sub.unk10 == 1)
            {
                phi_f2 *= 0.5F;
                spBC = ((spBC - mobj->sub.unk24) + 1.0F - (mobj->sub.unk28 * 0.5F)) * 0.5F;
                spB4 = ((spB4 - mobj->sub.unk44) + 1.0F - (mobj->sub.unk28 * 0.5F)) * 0.5F;
            }
        }
        gSPBranchList(&new_dl[i], branch_dl);

        if (flags & 0x4)
        {
            gDPSetTextureImage(branch_dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mobj->sub.images[(s32)mobj->image_frame]);

            if (flags & (0x2 | 0x1))
            {
                gDPTileSync(branch_dl++);
                gDPSetTile
                (
                    branch_dl++,
                    G_IM_FMT_RGBA,
                    G_IM_SIZ_4b,
                    0,
                    0x0100,
                    5,
                    0,
                    G_TX_NOMIRROR | G_TX_WRAP,
                    G_TX_NOMASK,
                    G_TX_NOLOD,
                    G_TX_NOMIRROR | G_TX_WRAP,
                    G_TX_NOMASK,
                    G_TX_NOLOD
                );
                gDPLoadSync(branch_dl++);
                gDPLoadTLUTCmd(branch_dl++, 5, (mobj->sub.siz == G_IM_SIZ_8b) ? 0xFF : 0xF);
                gDPPipeSync(branch_dl++);
            }
        }
        if (flags & MOBJ_FLAG_LIGHT1)
        {
            gSPLightColor(branch_dl++, LIGHT_1, mobj->sub.light1_color);
        }
        if (flags & MOBJ_FLAG_LIGHT2)
        {
            gSPLightColor(branch_dl++, LIGHT_2, mobj->sub.light2_color);
        }
        if (flags & (MOBJ_FLAG_PRIMCOLOR | 0x10 | 0x8))
        {
            if (flags & 0x10)
            {
                s32 trunc = mobj->lfrac;

                gDPSetPrimColor
                (
                    branch_dl++,
                    mobj->sub.prim_m,
                    (mobj->lfrac - trunc) * 256.0F,
                    mobj->sub.primcolor.r,
                    mobj->sub.primcolor.g,
                    mobj->sub.primcolor.b,
                    mobj->sub.primcolor.a
                );
                mobj->current_image_id = trunc;
                mobj->next_image_id = trunc + 1;
            }
            else
            {
                gDPSetPrimColor
                (
                    branch_dl++,
                    mobj->sub.prim_m,
                    mobj->lfrac * 255.0F,
                    mobj->sub.primcolor.r,
                    mobj->sub.primcolor.g,
                    mobj->sub.primcolor.b,
                    mobj->sub.primcolor.a
                );
            }
        }
        if (flags & MOBJ_FLAG_ENVCOLOR)
        {
            gDPSetEnvColor
            (
                branch_dl++,
                mobj->sub.envcolor.r,
                mobj->sub.envcolor.g,
                mobj->sub.envcolor.b,
                mobj->sub.envcolor.a
            );
        }
        if (flags & MOBJ_FLAG_BLENDCOLOR)
        {
            gDPSetBlendColor
            (
                branch_dl++,
                mobj->sub.blendcolor.r,
                mobj->sub.blendcolor.g,
                mobj->sub.blendcolor.b,
                mobj->sub.blendcolor.a
            );
        }
        if (flags & (0x10 | 0x2))
        {
            s32 block_siz = (mobj->sub.block_siz == G_IM_SIZ_32b) ? G_IM_SIZ_32b : G_IM_SIZ_16b; // or a one case switch..?

            gDPSetTextureImage
            (
                branch_dl++,
                mobj->sub.block_fmt,
                block_siz,
                1,
                mobj->sub.sprites[mobj->next_image_id]
            );
            if (flags & (0x10 | 0x1))
            {
                gDPLoadSync(branch_dl++);

                switch (mobj->sub.block_siz)
                {
                case G_IM_SIZ_4b:
                    gDPLoadBlock
                    (
                        branch_dl++,
                        6,
                        0,
                        0,
                        (((mobj->sub.block_dxt * mobj->sub.unk36) + 3) >> 2) - 1,
                        (((mobj->sub.block_dxt / 16 <= 0) ? 1 : mobj->sub.block_dxt / 16) + 0x7FF) / ((mobj->sub.block_dxt / 16 <= 0) ? 1 : mobj->sub.block_dxt / 16)
                    );
                    break;

                case G_IM_SIZ_8b:
                    gDPLoadBlock
                    (
                        branch_dl++,
                        6,
                        0,
                        0,
                        (((mobj->sub.block_dxt * mobj->sub.unk36) + 1) >> 1) - 1,
                        (((mobj->sub.block_dxt / 8 <= 0) ? 1 : mobj->sub.block_dxt / 8) + 0x7FF) / ((mobj->sub.block_dxt / 8 <= 0) ? 1 : mobj->sub.block_dxt / 8)
                    );
                    break;

                case G_IM_SIZ_16b:
                    gDPLoadBlock
                    (
                        branch_dl++,
                        6,
                        0,
                        0,
                        (mobj->sub.block_dxt * mobj->sub.unk36) - 1,
                        ((((mobj->sub.block_dxt * 2) / 8 <= 0) ? 1 : (mobj->sub.block_dxt * 2) / 8) + 0x7FF) / (((mobj->sub.block_dxt * 2) / 8 <= 0) ? 1 : (mobj->sub.block_dxt * 2) / 8)
                    );
                    break;

                case G_IM_SIZ_32b:
                    gDPLoadBlock
                    (
                        branch_dl++,
                        6,
                        0,
                        0,
                        (mobj->sub.block_dxt * mobj->sub.unk36) - 1,
                        ((((mobj->sub.block_dxt * 4) / 8 <= 0) ? 1 : (mobj->sub.block_dxt * 4) / 8) + 0x7FF) / (((mobj->sub.block_dxt * 4) / 8 <= 0) ? 1 : (mobj->sub.block_dxt * 4) / 8)
                    );
                    break;
                }
                gDPLoadSync(branch_dl++);
            }
        }
        if (flags & (0x10 | 0x1))
        {
            gDPSetTextureImage
            (
                branch_dl++,
                mobj->sub.fmt,
                mobj->sub.siz,
                1,
                mobj->sub.sprites[mobj->current_image_id]
            );
        }
        if (flags & 0x20)
        {
            if (mobj->sub.unk10 == 2)
            {
                uls = (ABSF(phi_f2) > 0.000015259022F) ? ((mobj->sub.unk0C * spBC) / phi_f2) * 4.0F : 0.0F;
                ult = (ABSF(phi_f12) > 0.000015259022F) ? ((mobj->sub.unk0E * spB8) / phi_f12) * 4.0F : 0.0F;

                if (uls < 0)
                {
                    uls = 0;
                }
                if (ult < 0)
                {
                    ult = 0;
                }
            }
            else
            {
                uls = (ABSF(phi_f2) > 0.000015259022F) ? (((mobj->sub.unk0C * spBC) + mobj->sub.unk0A) / phi_f2) * 4.0F : 0.0F;
                ult = (ABSF(phi_f12) > 0.000015259022F) ? (((((1.0F - phi_f12) - spB8) * mobj->sub.unk0E) + mobj->sub.unk0A) / phi_f12) * 4.0F : 0.0F;
            }
            gDPSetTileSize
            (
                branch_dl++,
                0,
                uls,
                ult,
                ((mobj->sub.unk0C - 1) << 2) + uls,
                ((mobj->sub.unk0E - 1) << 2) + ult
            );
        }
        if (flags & 0x40)
        {
            uls = (ABSF(phi_f2) > 0.000015259022F) ? (((mobj->sub.unk38 * spB4) + mobj->sub.unk0A) / phi_f2) * 4.0F : 0.0F;
            ult = (ABSF(phi_f12) > 0.000015259022F) ? (((((1.0F - phi_f12) - spB0) * mobj->sub.unk3A) + mobj->sub.unk0A) / phi_f12) * 4.0F : 0.0F;

            gDPSetTileSize
            (
                branch_dl++,
                1,
                uls,
                ult,
                ((mobj->sub.unk38 - 1) << 2) + uls,
                ((mobj->sub.unk3A - 1) << 2) + ult
            );
        }
        if (flags & 0x80)
        {
            if (mobj->sub.unk10 == 2)
            {
                s = (ABSF(phi_f2) > 0.000015259022F) ? (mobj->sub.unk0C * 64) / phi_f2 : 0.0F;
                t = (ABSF(phi_f12) > 0.000015259022F) ? (mobj->sub.unk0E * 64) / phi_f12 : 0.0F;
            }
            else
            {
                s = (ABSF(phi_f2) > 0.000015259022F) ? (2097152.0F / mobj->sub.unk08) / phi_f2 : 0.0F;
                t = (ABSF(phi_f12) > 0.000015259022F) ? (2097152.0F / mobj->sub.unk08) / phi_f12 : 0.0F;
            }
            if (s > 0xFFFF)
            {
                s = 0xFFFF;
            }
            if (t > 0xFFFF)
            {
                t = 0xFFFF;
            }
            gSPTexture(branch_dl++, s, t, 0, 0, G_ON);
        }
        gSPEndDisplayList(branch_dl++);
    }
    gGraphicsHeap.ptr = (void*)branch_dl;
}

// 0x80013D90
void odRenderDObjForGObj(GObj *gobj, Gfx **dl_head)
{
    s32 num;
    DObj *dobj = DObjGetStruct(gobj);

    gSpriteLayerScale = 1.0F;

    if (dobj->display_list != NULL)
    {
        if (dobj->flags == DOBJ_FLAG_NONE)
        {
            num = odRenderDObjMain(dl_head, dobj);
            odRenderMObjForDObj(dobj, dl_head);
            gSPDisplayList(dl_head[0]++, dobj->display_list);

            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(dl_head[0]++, G_MTX_MODELVIEW);
                }
            }
        }
    }
}

// 0x80013E68
void odRenderDObjDLHead0(GObj *gobj) 
{
    odRenderDObjForGObj(gobj, &gDisplayListHead[0]);
}

// 0x80013E8C
void odRenderDObjDLHead1(GObj *gobj)
{
    odRenderDObjForGObj(gobj, &gDisplayListHead[1]);
}

// 0x80013EB0
void unref_80013EB0(GObj *gobj)
{
    odRenderDObjForGObj(gobj, &gDisplayListHead[2]);
}

// 0x80013ED4
void unref_80013ED4(GObj *gobj)
{
    odRenderDObjForGObj(gobj, &gDisplayListHead[3]);
}

// 0x80013EF8
void odRenderDObjTree(DObj *this_dobj) 
{
    s32 num;
    DObj *current_dobj;
    f32 bak;

    if (!(this_dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        num = odRenderDObjMain(gDisplayListHead, this_dobj);

        if ((this_dobj->display_list != NULL) && !(this_dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            odRenderMObjForDObj(this_dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, this_dobj->display_list);
        }
        if (this_dobj->child != NULL)
        { 
            odRenderDObjTree(this_dobj->child);
        }
        if (num != 0)
        {
            if ((this_dobj->parent == DOBJ_PARENT_NULL) || (this_dobj->sib_next != NULL))
            {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
        gSpriteLayerScale = bak;
    }
    if (this_dobj->sib_prev == NULL) 
    {
        current_dobj = this_dobj->sib_next;

        while (current_dobj != NULL)
        {
            odRenderDObjTree(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014038
void odRenderDObjTreeForGObj(GObj *gobj) 
{
    gSpriteLayerScale = 1.0F;
    odRenderDObjTree(DObjGetStruct(gobj));
}

// 0x80014068
void odRenderDObjDLLinks(DObj *dobj, DObjDLLink *dl_link)
{
    s32 num;
    s32 list_id;
    Gfx *dl_start; // start (t1)
    Gfx *dl_end; // end
    s32 unused;
    void *ptr;

    list_id = -1;

    if ((dl_link != NULL) && (dobj->flags == DOBJ_FLAG_NONE))
    {
        dl_start = gDisplayListHead[dl_link->list_id];
        num = odRenderDObjMain(&gDisplayListHead[dl_link->list_id], dobj);
        dl_end = gDisplayListHead[dl_link->list_id];

        if (dl_link->dl != NULL)
        {
            ptr = gGraphicsHeap.ptr;

            odRenderMObjForDObj(dobj, &gDisplayListHead[dl_link->list_id]);
            gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);

            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gDisplayListHead[dl_link->list_id]++, G_MTX_MODELVIEW);
                }
            }
        }
        else list_id = dl_link->list_id;

        while ((++dl_link)->list_id != ARRAY_COUNT(gDisplayListHead))
        {
            if (dl_link->dl != NULL)
            {
                Gfx *dl_current = dl_start;

                while (dl_current != dl_end)
                {
                    *gDisplayListHead[dl_link->list_id]++ = *dl_current++;
                }
                if (dobj->mobj != NULL)
                {
                    gSPSegment(gDisplayListHead[dl_link->list_id]++, 0xE, ptr);
                }
                gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gDisplayListHead[dl_link->list_id]++, G_MTX_MODELVIEW);
                    }
                }
            }
            continue; // Required!
        }
        if (list_id != -1)
        {
            gDisplayListHead[list_id] = dl_start;
        }
    }
    else return;
}

// 0x801143FC
void odRenderDObjDLLinksForGObj(GObj *gobj)
{
    DObj *dobj;

    gSpriteLayerScale = 1.0F;
    dobj = DObjGetStruct(gobj);
    odRenderDObjDLLinks(dobj, dobj->dl_link);
}

// 0x80014430
void func_80014430(void)
{
    s32 i;

    D_800470B0 = D_800470C8;

    for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
    { 
        D_800470B8[i] = D_800470C8;
    }
}

// 0x8001445C
void odRenderDObjTreeDLLinks(DObj *dobj)
{
    s32 i;
    s32 num;
    DObjDLLink *dl_link;
    Gfx *dl;
    DObj *current_dobj;
    void *ptr;
    f32 bak;

    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        dl_link = dobj->dl_link;
        dl = D_800470B0;
        num = odRenderDObjMain(&D_800470B0, dobj);

        if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (dl_link->list_id != ARRAY_COUNT(gDisplayListHead))
            {
                if (dl_link->dl != NULL)
                {
                    while (D_800470B0 != D_800470B8[dl_link->list_id])
                    {
                        *gDisplayListHead[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[dl_link->list_id]);

                            goto set_display_list; // The goto is required ONLY if we condense the gDisplayListHead and D_800470B8 increments into a single operation.
                        }
                        else gSPSegment(gDisplayListHead[dl_link->list_id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);
                }
                dl_link++;
            }
        }
        if (dobj->child != NULL)
        {
            odRenderDObjTreeDLLinks(dobj->child);
        }
        D_800470B0 = dl;

        for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
        {
            if (D_800470B8[i] > D_800470B0)
            {
                D_800470B8[i] = D_800470B0;

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
            }
            continue; // Required!
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            odRenderDObjTreeDLLinks(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014768
void odRenderDObjTreeDLLinksForGObj(GObj *gobj)
{
    gSpriteLayerScale = 1.0F;
    odRenderDObjTreeDLLinks(DObjGetStruct(gobj));
}

// 0x80014798
f32 odGetDObjDistFromEye(DObj *dobj) 
{
    f32 x, y, z;
    Camera *cam = CameraGetStruct(gOMObjCurrentRendering);

    x = dobj->translate.vec.f.x - cam->vec.eye.x;
    y = dobj->translate.vec.f.y - cam->vec.eye.y;
    z = dobj->translate.vec.f.z - cam->vec.eye.z;

    return SQUARE(x) + SQUARE(y) + SQUARE(z);
}

// 0x800147E0
void unref_800147E0(GObj *gobj)
{
    DObjDistDL *dist_dl;
    s32 num;
    DObj *dobj;
    f32 dist;

    dobj = DObjGetStruct(gobj);
    dist_dl = dobj->dist_dl;

    if ((dist_dl != NULL) && (dobj->flags == DOBJ_FLAG_NONE)) 
    {
        dist = odGetDObjDistFromEye(dobj);

        while (dist < dist_dl->target_dist)
        { 
            dist_dl++;
        }
        gSpriteLayerScale = 1.0F;

        if (dist_dl->dl != NULL) 
        {
            num = odRenderDObjMain(gDisplayListHead, dobj);
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, dist_dl->dl);

            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
                }
            }
        }
    }
}

// 0x8001490C
void odRenderDObjTreeMultiList(DObj *dobj) 
{
    s32 num;
    Gfx **dls;
    DObj *current_dobj;
    f32 bak;

    dls = dobj->dl_array;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        num = odRenderDObjMain(gDisplayListHead, dobj);

        if ((dls != NULL) && (dls[D_800472A8] != NULL)) 
        {
            if (!(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, dls[D_800472A8]);
            }
        }
        if (dobj->child != NULL) 
        { 
            odRenderDObjTreeMultiList(dobj->child);
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL) 
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            odRenderDObjTreeMultiList(current_dobj);

            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014A84
void unref_80014A84(GObj *gobj)
{
    DObjDistDL *dist_dl;
    s32 num;
    f32 dist;
    DObj *dobj;
    DObj *current_dobj;

    dobj = DObjGetStruct(gobj);
    gSpriteLayerScale = 1.0F;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        dist_dl = dobj->dist_dl;

        if (dist_dl != NULL)
        {
            D_800472A8 = 0;
            dist = odGetDObjDistFromEye(dobj);
            while (dist < dist_dl->target_dist)
            {
                dist_dl++;
                D_800472A8++;
            }
            num = odRenderDObjMain(gDisplayListHead, dobj);

            if ((dist_dl->dl != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, dist_dl->dl);
            }
            if (dobj->child != NULL)
            {
                odRenderDObjTreeMultiList(dobj->child);
            }
            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
                }
            }
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    odRenderDObjTreeMultiList(current_dobj);

                    current_dobj = current_dobj->sib_next;
                }
            }
        }
    }
    else return;
}

// 0x80014C38
void unref_80014C38(GObj *gobj) 
{
    DObjDistDLLink *dist_dl_link;
    f32 dist;
    DObj *dobj;

    dobj = DObjGetStruct(gobj);
    gSpriteLayerScale = 1.0F;

    if (dobj->flags == DOBJ_FLAG_NONE) 
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            dist = odGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            { 
                dist_dl_link++;
            }
            odRenderDObjDLLinks(dobj, dist_dl_link->dl_link);
        }
    }
}

// 0x80014CD0
void func_80014CD0(DObj *dobj)
{
    void *ptr;
    s32 num;
    DObjDLLink **s0;
    DObjDLLink *dl_link;
    Gfx *dl;
    DObj *current_dobj;
    s32 i;
    f32 bak;

    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        s0 = (DObjDLLink**)dobj->display_ptr;
        if (s0 != NULL)
        {
            dl_link = s0[D_800472A8];
        }
        dl = D_800470B0;
        num = odRenderDObjMain(&D_800470B0, dobj);

        if ((s0 != NULL) && (dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (dl_link->list_id != ARRAY_COUNT(gDisplayListHead))
            {
                if (dl_link->dl != NULL)
                {
                    while (D_800470B0 != D_800470B8[dl_link->list_id])
                    {
                        *gDisplayListHead[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[dl_link->list_id]);

                            goto set_display_list; // *sigh* required to match...
                        }
                        else gSPSegment(gDisplayListHead[dl_link->list_id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);
                }
                dl_link++;
            }
        }
        if (dobj->child != NULL)
        {
            func_80014CD0(dobj->child);
        }
        D_800470B0 = dl;

        for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
        {
            if (D_800470B8[i] > D_800470B0)
            {
                D_800470B8[i] = D_800470B0;

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
            }
            else continue; // Required! Both the "else" and the "continue"!
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            func_80014CD0(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014FFC
void unref_80014FFC(GObj *gobj)
{
    DObjDistDLLink *dist_dl_link;
    DObj *dobj;
    s32 num;
    void *ptr;
    f32 dist;
    s32 i;
    DObjDLLink *dl_link;
    Gfx *dl;
    DObj *current_dobj;

    dobj = DObjGetStruct(gobj);
    gSpriteLayerScale = 1.0F;
    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            D_800472A8 = 0;

            dist = odGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            {
                D_800472A8++;
                dist_dl_link++;
            }
            dl_link = dist_dl_link->dl_link;
            dl = D_800470B0;
            num = odRenderDObjMain(&D_800470B0, dobj);

            if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                while (dl_link->list_id != ARRAY_COUNT(gDisplayListHead))
                {
                    if (dl_link->dl != NULL)
                    {
                        while (D_800470B0 != D_800470B8[dl_link->list_id])
                        {
                            *gDisplayListHead[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                        }
                        if (dobj->mobj != NULL)
                        {
                            if (ptr == NULL)
                            {
                                ptr = gGraphicsHeap.ptr;
                                odRenderMObjForDObj(dobj, &gDisplayListHead[dl_link->list_id]);

                                goto set_display_list;
                            }
                            else gSPSegment(gDisplayListHead[dl_link->list_id]++, 0xE, ptr);
                        }
                    set_display_list:
                        gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);
                    }
                    dl_link++;
                }
            }
            if (dobj->child != NULL)
            {
                // Even though this function is unreferenced, this seems wrong. Shouldn't it be calling itself instead of func_80014CD0?
                func_80014CD0(dobj->child);
            }
            D_800470B0 = dl;

            for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
            {
                if (D_800470B8[i] > D_800470B0)
                {
                    D_800470B8[i] = D_800470B0;

                    if (num != 0)
                    {
                        if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                        {
                            gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                        }
                    }
                    else continue;
                }
            }
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    // Same here?
                    func_80014CD0(current_dobj);

                    current_dobj = current_dobj->sib_next;
                }
            }
        }
    }
}

// 0x80015358
void odRenderDObjTreeDLArray(DObj *dobj) 
{
    s32 num;
    Gfx **dls;
    f32 bak;
    DObj *current_dobj;

    dls = dobj->dl_array;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;

        if ((dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gSPDisplayList(gDisplayListHead[0]++, dls[0]);
        }
        num = odRenderDObjMain(gDisplayListHead, dobj);

        if ((dls != NULL) && (dls[1] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, dls[1]);
        }
        if (dobj->child != NULL)
        { 
            odRenderDObjTreeDLArray(dobj->child);
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL) 
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            odRenderDObjTreeDLArray(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x800154F0
void unref_800154F0(GObj *gobj) 
{
    gSpriteLayerScale = 1.0F;
    odRenderDObjTreeDLArray(DObjGetStruct(gobj));
}

// 0x80015520
void odRenderDObjTreeMultiList(DObj *dobj)
{
    s32 unused;
    s32 num;
    DObjMultiList *multi_list;
    Gfx *dl;
    void *ptr;
    s32 i;
    f32 bak;
    DObj *current_dobj;

    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        multi_list = dobj->multi_list;
        dl = D_800470B0;
        num = odRenderDObjMain(&D_800470B0, dobj);

        if ((multi_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (multi_list->id != ARRAY_COUNT(gDisplayListHead))
            {
                if (multi_list->dl2 != NULL)
                {
                    if (multi_list->dl1 != NULL)
                    {
                        gSPDisplayList(gDisplayListHead[multi_list->id]++, multi_list->dl1);
                    }
                    while (D_800470B0 != D_800470B8[multi_list->id])
                    {
                        *gDisplayListHead[multi_list->id]++ = *D_800470B8[multi_list->id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[multi_list->id]);

                            goto set_display_list;
                        }
                        else gSPSegment(gDisplayListHead[multi_list->id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gDisplayListHead[multi_list->id]++, multi_list->dl2);
                }
                multi_list++;
            }
        }
        if (dobj->child != NULL)
        {
            odRenderDObjTreeMultiList(dobj->child);
        }
        D_800470B0 = dl;

        for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
        {
            if (D_800470B8[i] > D_800470B0)
            {
                D_800470B8[i] = D_800470B0;

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
                else continue;
            }
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            odRenderDObjTreeMultiList(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80015860
void unref_80015860(GObj *gobj) 
{
    gSpriteLayerScale = 1.0F;
    odRenderDObjTreeMultiList(DObjGetStruct(gobj));
}

// 0x80015890
void odRenderDObjTreeDLDoubleArray(DObj *dobj)
{
    s32 num;
    DObj *current_dobj;
    f32 bak;
    Gfx **dls;
    Gfx ***p_dls;

    p_dls = (Gfx***)dobj->display_ptr;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER)) 
    {
        bak = gSpriteLayerScale;

        if (p_dls != NULL)
        { 
            dls = p_dls[D_800472A8]; 
        }
        if ((p_dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gSPDisplayList(gDisplayListHead[0]++, dls[0]);
        }
        num = odRenderDObjMain(gDisplayListHead, dobj);

        if ((p_dls != NULL) && (dls[1]) != NULL && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, dls[1]);
        }
        if (dobj->child != NULL)
        {
            odRenderDObjTreeDLDoubleArray(dobj->child); 
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL) 
        {
            odRenderDObjTreeDLDoubleArray(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80015A58
void unref_80015A58(GObj *gobj)
{
    DObjDistDL *dist_dl;
    s32 num;
    f32 dist;
    DObj *dobj;
    DObj *current_dobj;

    dobj = DObjGetStruct(gobj);

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        dist_dl = dobj->dist_dl;

        if (dist_dl != NULL)
        {
            gSpriteLayerScale = 1.0F;
            D_800472A8 = 0;

            dist = odGetDObjDistFromEye(dobj);

            while (dist < dist_dl->target_dist)
            {
                D_800472A8++;
                dist_dl++;
            }
            num = odRenderDObjMain(gDisplayListHead, dobj);

            if ((dist_dl->dl != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, dist_dl->dl);
            }
            if (dobj->child != NULL)
            {
                odRenderDObjTreeDLDoubleArray(dobj->child);
            }
            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
                }
            }
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    odRenderDObjTreeDLDoubleArray(current_dobj);

                    current_dobj = current_dobj->sib_next;
                }
            }
        }
    }
    else return;
}

// 0x80015C0C
void func_80015C0C(DObj *dobj) 
{
    void *ptr;
    s32 num;
    DObjMultiList **p_multi_list;
    DObjMultiList *multi_list;
    Gfx *dl;
    s32 i;
    DObj *current_dobj;
    f32 bak;

    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = gSpriteLayerScale;
        p_multi_list = (DObjMultiList**)dobj->display_ptr;

        if (p_multi_list != NULL) 
        {
            multi_list = p_multi_list[D_800472A8]; 
        }
        dl = D_800470B0;
        num  = odRenderDObjMain(&D_800470B0, dobj);

        if ((p_multi_list != NULL) && (multi_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (multi_list->id != ARRAY_COUNT(gDisplayListHead))
            {
                if (multi_list->dl2 != NULL) 
                {
                    if (multi_list->dl1 != NULL)
                    { 
                        gSPDisplayList(gDisplayListHead[multi_list->id]++, multi_list->dl1);
                    }
                    while (D_800470B0 != D_800470B8[multi_list->id]) 
                    {
                        *gDisplayListHead[multi_list->id]++ = *D_800470B8[multi_list->id]++;
                    }
                    if (dobj->mobj != NULL) 
                    {
                        if (ptr == NULL) 
                        {
                            ptr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[multi_list->id]);

                            goto set_display_list;
                        }
                        else gSPSegment(gDisplayListHead[multi_list->id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gDisplayListHead[multi_list->id]++, multi_list->dl2);
                }
                multi_list++;
            }
        }
        if (dobj->child != NULL) 
        { 
            func_80015C0C(dobj->child);
        }
        D_800470B0 = dl;

        for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) 
        {
            if (D_800470B8[i] > D_800470B0)
            {
                D_800470B8[i] = D_800470B0;

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
                continue; // Not required this time; this is for the sake of consistency.
            }
        }
        gSpriteLayerScale = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL) 
        {
            func_80015C0C(current_dobj);

            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80015F6C
void unref_80015F6C(GObj *gobj)
{
    f32 dist;
    s32 i;
    s32 num;
    DObj *dobj;
    void *ptr;
    DObjDistDLLink *dist_dl_link;
    DObjDLLink *dl_link;
    Gfx *dl;
    DObj *current_dobj;

    dobj = DObjGetStruct(gobj);
    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_NORENDER))
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            gSpriteLayerScale = 1.0F;
            D_800472A8 = 0;
            dist = odGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            {
                dist_dl_link++;
                D_800472A8++;
            }
            dl_link = dist_dl_link->dl_link;
            dl = D_800470B0;
            num = odRenderDObjMain(&D_800470B0, dobj);

            if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                while (dl_link->list_id != ARRAY_COUNT(gDisplayListHead))
                {
                    if (dl_link->dl != NULL)
                    {
                        while (D_800470B0 != D_800470B8[dl_link->list_id])
                        {
                            *gDisplayListHead[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                        }
                        if (dobj->mobj != NULL)
                        {
                            if (ptr == NULL)
                            {
                                ptr = gGraphicsHeap.ptr;
                                odRenderMObjForDObj(dobj, &gDisplayListHead[dl_link->list_id]);

                                goto set_display_list;
                            }
                            else gSPSegment(gDisplayListHead[dl_link->list_id]++, 0xE, ptr);
                        }
                    set_display_list:
                        gSPDisplayList(gDisplayListHead[dl_link->list_id]++, dl_link->dl);
                    }
                    dl_link++;
                }
            }
            if (dobj->child != NULL)
            {
                func_80015C0C(dobj->child);
            }
            D_800470B0 = dl;

            for (i = 0; i < ARRAY_COUNT(D_800470B8); i++)
            {
                if (D_800470B8[i] > D_800470B0)
                {
                    D_800470B8[i] = D_800470B0;

                    if (num != 0)
                    {
                        if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                        {
                            gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                        }
                    }
                    else continue;
    }
}
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    func_80015C0C(current_dobj);
                    current_dobj = current_dobj->sib_next;
                }
            }
        }
    }
}

// 0x800162C8
void unref_800162C8(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);

    while (sobj != NULL) 
    {
        if (!(sobj->sprite.attr & SP_HIDDEN))
        {
            sobj->sprite.rsp_dl_next = gDisplayListHead[0];

            spDraw(&sobj->sprite);

            gDisplayListHead[0] = sobj->sprite.rsp_dl_next - 1;
        }
        sobj = sobj->next;
    }
}

// 0x80016338
void func_80016338(Gfx **dls, Camera *cam, s32 arg2)
{
    Vp_t *viewport = &cam->viewport.vp;
    Gfx *dl = dls[0];
    s32 ulx, uly, lrx, lry;

    if ((arg2 == 0) || (arg2 == 1))
    {
        if (cam->flags & 0x20)
        {
            gsAppendGfxUcodeLoad(dls, D_80046626);
            D_80046628 = 1;

            dl = dls[0];
        }
    }
    gSPViewport(dl++, viewport);

    ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);

    lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (ulx < (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938)
    {
        ulx = (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938;
    }
    if (uly < (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930)
    {
        uly = (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930;
    }
    if (lrx > gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C))
    {
        lrx = gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C);
    }
    if (lry > gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934))
    {
        lry = gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934);
    }
    gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void*)0x0F000000);
    gDPSetCycleType(dl++, G_CYC_1CYCLE);

    if ((arg2 == 0) || (arg2 == 2))
    {
        gDPSetRenderMode(dl++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    }
    else gDPSetRenderMode(dl++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    dls[0] = dl;
}

// 0x8001663C
void func_8001663C(Gfx **dls, Camera *cam, s32 arg2)
{
    Gfx *dl = dls[0];
    Vp_t *viewport = &cam->viewport.vp;
    s32 ulx, uly, lrx, lry;

    if ((arg2 == 0) || (arg2 == 1))
    {
        if (cam->flags & 0x20)
        {
            gsAppendGfxUcodeLoad(dls, D_80046626);
            D_80046628 = 1;

            dl = dls[0];
        }
    }
    gSPViewport(dl++, viewport);

    ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
    lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (ulx < (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938)
    {
        ulx = (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938;
    }
    if (uly < (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930)
    {
        uly = (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930;
    }
    if (lrx > gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C))
    {
        lrx = gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C);
    }
    if (lry > gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934))
    {
        lry = gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934);
    }
    gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);

    lrx--, lry--;

    if (cam->flags & 0x1)
    {
        gDPPipeSync(dl++);
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);
        gDPSetFillColor(dl++, GCOMBINE32_RGBA5551(GPACK_ZDZ(G_MAXFBZ, 0)));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void*)0x0F000000);

    if (cam->flags & 0x2)
    {
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(dl++, gsGetFillColor(cam->color));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetCycleType(dl++, G_CYC_1CYCLE);

    if ((arg2 == 0) || (arg2 == 2))
    {
        gDPSetRenderMode(dl++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    }
    else gDPSetRenderMode(dl++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    dls[0] = dl;
}

// 0x80016AE4
void unref_80016AE4(Gfx **dls, Camera *cam, s32 arg2, void *image, s32 max_lrx, s32 max_lry, void *depth)
{
    Gfx *dl = dls[0];
    Vp_t *viewport = &cam->viewport.vp;
    s32 ulx, uly, lrx, lry;

    gSPViewport(dl++, viewport);

    ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
    lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (ulx < 0)
    {
        ulx = 0;
    }
    if (uly < 0)
    {
        uly = 0;
    }
    if (lrx > max_lrx)
    {
        lrx = max_lrx;
    }
    if (lry > max_lry)
    {
        lry = max_lry;
    }
    gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);

    lrx--, lry--;

    if (cam->flags & 0x1)
    {
        gDPPipeSync(dl++);
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, max_lrx, depth);
        gDPSetFillColor(dl++, GCOMBINE32_RGBA5551(GPACK_ZDZ(G_MAXFBZ, 0)));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gPixelComponentSize, max_lrx, image);
    gDPSetDepthImage(dl++, depth);

    if (cam->flags & 0x2)
    {
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(dl++, gsGetFillColor(cam->color));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetCycleType(dl++, G_CYC_1CYCLE);

    if ((arg2 == 0) || (arg2 == 2))
    {
        gDPSetRenderMode(dl++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    }
    else gDPSetRenderMode(dl++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    dls[0] = dl;
}

// 0x80016EDC
void odRenderCameraMain(Gfx **dls, Camera *cam)
{
    Gfx *dl;
    s32 i;
    OMMtx *ommtx;
    gsMtxStore mtx_store;
    s32 var_s3;
    s32 spC8;
    LookAt *look_at;

    dl = dls[0];
    spC8 = 0;
    var_s3 = 0;

    if (cam->ommtx_len != 0)
    {
        for (i = 0; i < cam->ommtx_len; i++)
        {
            ommtx = cam->ommtx[i];

            if (ommtx != NULL)
            {
                mtx_store.gbi = &ommtx->mtx;

                if (ommtx->unk05 != 2)
                {
                    if ((s32)gGtlTaskId > 0)
                    {
                        mtx_store.gbi = gGraphicsHeap.ptr;
                        gGraphicsHeap.ptr = mtx_store.gbi + 1;
                    }
                    switch (ommtx->kind)
                    {
                    case 1:
                        break;

                    case 2:
                        break;

                    case OMMtx_Transform_PerspFastF:
                        hlMtxPerspFastF
                        (
                            D_80046FA8,
                            &cam->projection.persp.norm,
                            cam->projection.persp.fovy,
                            cam->projection.persp.aspect,
                            cam->projection.persp.near,
                            cam->projection.persp.far,
                            cam->projection.persp.scale
                        );
                        hlMtxF2L(D_80046FA8, mtx_store.gbi);
                        D_80046FA0 = mtx_store.gbi;
                        break;

                    case OMMtx_Transform_PerspF:
                        hlMtxPerspF
                        (
                            D_80046FA8,
                            &cam->projection.persp.norm,
                            cam->projection.persp.fovy,
                            cam->projection.persp.aspect,
                            cam->projection.persp.near,
                            cam->projection.persp.far,
                            cam->projection.persp.scale
                        );
                        hlMtxF2L(D_80046FA8, mtx_store.gbi);
                        D_80046FA0 = mtx_store.gbi;
                        break;

                    case OMMtx_Transform_Ortho:
                        hlMtxOrtho
                        (
                            mtx_store.gbi,
                            cam->projection.ortho.l,
                            cam->projection.ortho.r,
                            cam->projection.ortho.b,
                            cam->projection.ortho.t,
                            cam->projection.ortho.n,
                            cam->projection.ortho.f,
                            cam->projection.ortho.scale
                        );
                        D_80046FA0 = mtx_store.gbi;
                        break;

                    case 6:
                    case 7:
                        hlMtxLookAt
                        (
                            mtx_store.gbi,
                            cam->vec.eye.x,
                            cam->vec.eye.y,
                            cam->vec.eye.z,
                            cam->vec.at.x,
                            cam->vec.at.y,
                            cam->vec.at.z,
                            cam->vec.up.x,
                            cam->vec.up.y,
                            cam->vec.up.z
                        );
                        var_s3 = (cam->vec.up.z < cam->vec.up.y) ? 1 : 2;
                        break;

                    case 8:
                    case 9:
                        hlMtxModLookAt(mtx_store.gbi, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, 0.0F, 1.0F, 0.0F);
                        var_s3 = 1;
                        break;

                    case 10:
                    case 11:
                        hlMtxModLookAt(mtx_store.gbi, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, 0.0F, 0.0F, 1.0F);
                        var_s3 = 2;
                        break;

                    case 12:
                    case 13:
                        look_at = mlSetBumpAlloc(&gGraphicsHeap, sizeof(LookAt), 0x8);
                        hlMtxLookAtReflect
                        (
                            mtx_store.gbi,
                            look_at,
                            cam->vec.eye.x,
                            cam->vec.eye.y,
                            cam->vec.eye.z,
                            cam->vec.at.x,
                            cam->vec.at.y,
                            cam->vec.at.z,
                            cam->vec.up.x,
                            cam->vec.up.y,
                            cam->vec.up.z
                        );
                        var_s3 = (cam->vec.up.z < cam->vec.up.y) ? 1 : 2;
                        break;

                    case 14:
                    case 15:
                        look_at = mlSetBumpAlloc(&gGraphicsHeap, sizeof(LookAt), 0x8);
                        var_s3 = 1;
                        hlMtxModLookAtReflect(mtx_store.gbi, look_at, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, 0.0F, 1.0F, 0.0F);
                        break;

                    case 16:
                    case 17:
                        look_at = mlSetBumpAlloc(&gGraphicsHeap, sizeof(LookAt), 0x8);
                        var_s3 = 2;

                        hlMtxModLookAtReflect(mtx_store.gbi, look_at, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, 0.0F, 0.0F, 1.0F);
                        break;

                    default:
                        if ((ommtx->kind >= 66) && (D_800470AC != NULL))
                        {
                            if (D_800470AC[ommtx->kind - 66].unk00 != NULL)
                            {
                                D_800470AC[ommtx->kind - 66].unk00(mtx_store.gbi, cam, &dl);
                            }
                        }
                        break;
                    }
                    if ((ommtx->unk05 == 1) && (&ommtx->mtx == mtx_store.gbi))
                    {
                        ommtx->unk05 = 2;
                    }
                }
                switch (ommtx->kind)
                {
                case 1:
                    break;

                case 2:
                    break;

                case OMMtx_Transform_PerspFastF:
                case OMMtx_Transform_PerspF:
                    gSPMatrix(dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
                    gSPPerspNormalize(dl++, cam->projection.persp.norm);
                    break;

                case OMMtx_Transform_Ortho:
                    gSPMatrix(dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
                    break;

                case 12:
                case 14:
                case 16:
                    gSPLookAtX(dl++, &look_at->l[0]);
                    gSPLookAtY(dl++, &look_at->l[1]);
                    /* fallthrough */
                case 6:
                case 8:
                case 10:
                    gSPMatrix(dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
                    break;

                case 13:
                case 15:
                case 17:
                    gSPLookAtX(dl++, &look_at->l[0]);
                    gSPLookAtY(dl++, &look_at->l[1]);
                    /* fallthrough */
                case 7:
                case 9:
                case 11:
                    gSPMatrix(dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                    break;
                default:
                    if ((ommtx->kind >= 66) && (D_800470AC != NULL))
                    {
                        if (D_800470AC[ommtx->kind - 66].unk04 != NULL)
                        {
                            D_800470AC[ommtx->kind - 66].unk04(mtx_store.gbi, cam, &dl);
                        }
                    }
                    break;
                }
            }

        }
        switch (D_800470A8)
        {
        case 0:
            spC8 = var_s3;
            break;

        case 1:
            var_s3 = 0;
            break;

        case 2:
            spC8 = 1;
            var_s3 = 1;
            break;

        case 3:
            var_s3 = 1;
            break;

        case 4:
            spC8 = 1;
            var_s3 = 0;
            break;

        case 5:
            spC8 = 2;
            var_s3 = 2;
            break;

        case 6:
            var_s3 = 2;
            break;

        case 7:
            spC8 = 2;
            var_s3 = 0;
            break;
        }
        if (var_s3 != 0)
        {
            f32 var3, var1, var2;

            switch (var_s3)
            {
            case 1:
                var3 = sqrtf(SQUARE(cam->vec.at.z - cam->vec.eye.z) + SQUARE(cam->vec.at.x - cam->vec.eye.x));
                var1 = cam->vec.eye.y;
                var2 = cam->vec.at.y;
                break;

            case 2:
                var3 = sqrtf(SQUARE(cam->vec.at.y - cam->vec.eye.y) + SQUARE(cam->vec.at.x - cam->vec.eye.x));
                var1 = cam->vec.eye.z;
                var2 = cam->vec.at.z;
                break;
            }
            if (var3 < 0.0001F)
            {
                hlMtxScaleF(D_80047028, 0.0F, 0.0F, 0.0F);
            }
            else
            {
                hlMtxLookAtF(D_80047028, 0.0F, var1, var3, 0.0F, var2, 0.0F, 0.0F, 1.0F, 0.0F);
                guMtxCatF(D_80047028, D_80046FA8, D_80047028);
            }
        }
        if (spC8 != 0)
        {
            f32 var3, var1, var2;

            switch (spC8)
            {
            case 1:
                var3 = sqrtf(SQUARE(cam->vec.at.y - cam->vec.eye.y) + SQUARE(cam->vec.at.z - cam->vec.eye.z));
                var1 = cam->vec.eye.x;
                var2 = cam->vec.at.x;
                break;

            case 2:
                var3 = sqrtf(SQUARE(cam->vec.at.z - cam->vec.eye.z) + SQUARE(cam->vec.at.x - cam->vec.eye.x));
                var1 = cam->vec.eye.y;
                var2 = cam->vec.at.y;
                break;
            }
            if (var3 < 0.0001F)
            {
                hlMtxScaleF(D_80047068, 0.0F, 0.0F, 0.0F);
            }
            else
            {
                hlMtxLookAtF(D_80047068, var1, 0.0F, var3, var2, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F);
                guMtxCatF(D_80047068, D_80046FA8, D_80047068);
            }
        }
        dls[0] = dl;
    }
}

// 0x80017830
void func_80017830(s32 val) 
{
    D_800470A8 = val;
}

// the second arg may just be unused
void func_8001783C(Camera *cam, s32 arg) 
{
    if (cam->proc_camera != NULL)
    { 
        cam->proc_camera(cam, arg);
    }
}

// 0x80017868
void func_80017868(GObj *this_gobj, s32 link_id, s32 arg2)
{
    GObj *current_gobj = gOMObjCommonDLLinks[link_id];

    while (current_gobj != NULL)
    {
        if (!(current_gobj->flags & GOBJ_FLAG_NORENDER))
        {
            if
            (
                ((arg2 == 0) && (this_gobj->unk_gobj_0x38 &  current_gobj->unk_gobj_0x38)) ||
                ((arg2 == 1) && (this_gobj->unk_gobj_0x38 == current_gobj->unk_gobj_0x38))
            )
            {
                D_8003B874 = 4;
                D_80046A5C = current_gobj;
                current_gobj->proc_render(current_gobj);
                D_8003B874 = 3;
                current_gobj->fd_last = D_8003B6E8.word;
            }
        }
        current_gobj = current_gobj->dl_link_next;
    }
}

// 0x80017978
void func_80017978(GObj *gobj, s32 index, s32 arg2)
{
    Gfx *sp38[4];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++)
    {
        sp38[i] = gDisplayListHead[i];
        gDisplayListHead[i] += 2;
    }
    func_80017868(gobj, index, arg2);

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++)
    {
        if (gDisplayListHead[i] == sp38[i] + 2)
        {
            gDisplayListHead[i] -= 2;
            D_80046A88[index].dls[i] = NULL;
        }
        else
        {
            gSPEndDisplayList(gDisplayListHead[i]++);

            gSPDisplayList(sp38[i], sp38[i] + 2);
            sp38[i]++;
            gSPBranchList(sp38[i]++, gDisplayListHead[i]);
            D_80046A88[index].dls[i] = sp38[i];
        }
    }
    D_80046A88[index].id = D_8003B6E8.word;
}

// 0x80017AAC
void func_80017AAC(s32 index)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) 
    {
        if (D_80046A88[index].dls[i] != NULL)
        {
            gSPDisplayList(gDisplayListHead[i]++, D_80046A88[index].dls[i]);
        }
    }
}

// 0x80017B80
void func_80017B80(GObj *gobj, s32 arg1)
{
    s32 idx;
    u64 sp38; // t6+t7
    u64 sp30;

    sp38 = gobj->unk_gobj_0x30;
    sp30 = gobj->unk_gobj_0x40;

    idx = 0;

    while (sp38) 
    {
        if (sp38 & 1) 
        {
            if (sp30 & 1)
            {
                if (D_8003B6E8.bytes.b3 == D_80046A88[idx].id)
                {
                    func_80017AAC(idx);
                } 
                else func_80017978(gobj, idx, arg1);
            } 
            else func_80017868(gobj, idx, arg1);
        }
        sp38 >>= 1;
        sp30 >>= 1;
        idx++;
    }
}

// 0x80017CC8
void func_80017CC8(Camera *cam) 
{
    if (cam->flags & 0x4)
    {
        func_800057C8(); 
    }
    if (cam->flags & 0x10) 
    {
        func_800053CC();
        func_80004F78();
    }
    if (cam->flags & 0x40)
    { 
        func_800053CC();
    }
}

// 0x80017D3C
void func_80017D3C(GObj *gobj, Gfx **dls, s32 index)
{
    Camera *cam = CameraGetStruct(gobj);
    func_8001663C(dls, cam, index);
    odRenderCameraMain(dls, cam);
    func_8001783C(cam, index);
    func_80017B80(gobj, (cam->flags & 0x8) ? TRUE : FALSE);
    func_80017CC8(cam);
}

// 0x80017DBC
void func_80017DBC(GObj *gobj) 
{
    func_80017D3C(gobj, &gDisplayListHead[0], 0);
}

// 0x80017DE4
void unref_80017DE4(GObj *gobj)
{
    func_80017D3C(gobj, &gDisplayListHead[1], 1);
}

// 0x80017E0C
void unref_80017E0C(GObj *gobj) 
{
    func_80017D3C(gobj, &gDisplayListHead[2], 2);
}

// 0x80017E34
void unref_80017E34(GObj *gobj)
{
    func_80017D3C(gobj, &gDisplayListHead[3], 3);
}

// 0x80017E5C
void unref_80017E5C(void) 
{
    Camera *cam = CameraGetStruct(gOMObjCurrentRendering);

    func_800053CC();
    func_80004F78();
    func_8001663C(gDisplayListHead, cam, 0);
    odRenderCameraMain(gDisplayListHead, cam);
    func_8001783C(cam, 0);
}

// 0x80017EC0
void func_80017EC0(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);
    s32 i;

    func_8001663C(gDisplayListHead, cam, 0);
    D_800472C0 = gDisplayListHead[0] + 1;
    gSPDisplayList(gDisplayListHead[0], gDisplayListHead[0] + 2);
    gDisplayListHead[0] += 2;

    odRenderCameraMain(gDisplayListHead, cam);
    gSPEndDisplayList(gDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gDisplayListHead[0]);

    func_8001783C(cam, 0);

    if (cam->flags & 0x20)
    {
        func_80016338(&gDisplayListHead[1], cam, 1);
    }
    for (i = 1; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        D_800472B0[i] = ++gDisplayListHead[i];
    }

    func_80017B80(gobj, (cam->flags & 0x8) ? TRUE : FALSE);

    for (i = 1; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        if (D_800472B0[i] == gDisplayListHead[i])
        {
            gDisplayListHead[i]--;
        }
        else
        {
            Gfx *start = gDisplayListHead[i]++;
            gSPDisplayList(D_800472B0[i] - 1, gDisplayListHead[i]);

            if ((i != 1) || !(cam->flags & 0x20))
            {
                func_80016338(&gDisplayListHead[i], cam, i);
            }
            gSPDisplayList(gDisplayListHead[i]++, D_800472C0 + 1);
            func_8001783C(cam, i);
            gSPEndDisplayList(gDisplayListHead[i]++);
            gSPBranchList(start, gDisplayListHead[i]);
        }
    }
    func_80017CC8(cam);
}

// 0x8001810C
void unref_8001810C(void)
{
    Camera *cam = CameraGetStruct(gOMObjCurrentRendering);
    s32 i;

    for (i = 1; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        if (D_800472B0[i] == gDisplayListHead[i])
        {
            gDisplayListHead[i]--;
        }
        else
        {
            Gfx *start = gDisplayListHead[i]++;

            gSPDisplayList(D_800472B0[i] - 1, gDisplayListHead[i]);
            func_80016338(&gDisplayListHead[i], cam, i);
            gSPDisplayList(gDisplayListHead[i]++, D_800472C0 + 1);
            func_8001783C(cam, i);
            gSPEndDisplayList(gDisplayListHead[i]++);
            gSPBranchList(start, gDisplayListHead[i]);
        }
    }
    func_800053CC();
    func_80004F78();
    func_8001663C(&gDisplayListHead[0], cam, 0);

    D_800472C0 = gDisplayListHead[0] + 1;

    gSPDisplayList(gDisplayListHead[0], gDisplayListHead[0] + 2);

    gDisplayListHead[0] += 2;

    odRenderCameraMain(gDisplayListHead, cam);
    gSPEndDisplayList(gDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gDisplayListHead[0]);

    func_8001783C(cam, 0);

    for (i = 1; i < (ARRAY_COUNT(gDisplayListHead) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        D_800472B0[i] = ++gDisplayListHead[i];
    }
}

// 0x80018300
void func_80018300(GObj *gobj)
{
    Camera *cam = CameraGetStruct(gobj);
    Vp_t *viewport = &cam->viewport.vp;
    s32 xmin, ymin, xmax, ymax;

    xmin = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    ymin = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
    xmax = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    ymax = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (xmin < (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938)
    {
        xmin = (gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B938;
    }
    if (ymin < (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930)
    {
        ymin = (gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B930;
    }
    if (xmax > gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C))
    {
        xmax = gCurrScreenWidth - ((gCurrScreenWidth / GS_SCREEN_WIDTH_DEFAULT) * D_8003B93C);
    }
    if (ymax > gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934))
    {
        ymax = gCurrScreenHeight - ((gCurrScreenHeight / GS_SCREEN_HEIGHT_DEFAULT) * D_8003B934);
    }
    func_8001663C(gDisplayListHead, cam, 0);
    spInit(gDisplayListHead);
    spScissor(xmin, xmax, ymin, ymax);
    func_80017B80(gobj, (cam->flags & 0x8) ? TRUE : FALSE);
    spFinish(gDisplayListHead);

    gDisplayListHead[0]--;

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
}

#pragma GCC diagnostic pop
