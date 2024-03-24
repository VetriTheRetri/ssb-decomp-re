#include "sys/obj_renderer.h"
#include "sys/obj.h"

#include "sys/gtl.h"
#include "sys/hal_gu.h"
#include "sys/om.h"
#include "sys/system_00.h"
#include "sys/system_04.h"

#include <config.h>
#include <macros.h>
#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>

// gbi Mtx * ? pointer to some sort of matrix
u32 *D_80046FA0;
f32 D_80046FA4;
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
    MtxStore mtx_store;
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
            mtx_store.gbi = &ommtx->unk08;

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
                    if (dobj->parent_gobj->unk_gobj_0xE != D_8003B6E8.bytes.b3)
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
                else if (gGtlTaskId > 0)
                {
                    gGraphicsHeap.ptr = (mtx_store.f = gGraphicsHeap.ptr) + 1;
                }
                else if (dobj->parent_gobj->unk_gobj_0xE == D_8003B6E8.bytes.b3)
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
                    break;

                case 2:
                    break;

                case 18:
                    hlMtxTranslate(mtx_store.gbi, dobj->translate.vec.f.x, dobj->translate.vec.f.y, dobj->translate.vec.f.z);
                    break;

                case 19:
                    hal_rotate_degrees(mtx_store.gbi, dobj->rotate.a, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;

                case 20:
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

                case 21:
                    hal_rotate_rpy_degrees(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;

                case 22:
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

                case 23:
                    hal_rotate
                    (
                        mtx_store.gbi,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;

                case 24:
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

                case 25:
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
                    D_80046FA4 *= dobj->scale.vec.f.x;
                    break;

                case 26:
                    hal_rotate_rpy(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;

                case 27:
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

                case 28:
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
                    D_80046FA4 *= dobj->scale.vec.f.x;
                    break;

                case 29:
                    hal_rotate_pyr(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;

                case 30:
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

                case 31:
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
                    D_80046FA4 *= dobj->scale.vec.f.x;
                    break;

                case 32:
                    hal_scale(mtx_store.gbi, dobj->scale.vec.f.x, dobj->scale.vec.f.y, dobj->scale.vec.f.z);
                    D_80046FA4 *= dobj->scale.vec.f.x;
                    break;

                case 33:
                    func_80010AE8(mtx_store.f, dobj, FALSE);
                    break;

                case 34:
                    func_80010AE8(mtx_store.f, dobj, TRUE);
                    break;

                case 35:
                    func_80010748(mtx_store.f, dobj, FALSE);
                    break;

                case 36:
                    func_80010748(mtx_store.f, dobj, TRUE);
                    break;

                case 37:
                    func_80010C2C(mtx_store.f, dobj, FALSE);
                    break;

                case 38:
                    func_80010C2C(mtx_store.f, dobj, TRUE);
                    break;

                case 39:
                    func_80010918(mtx_store.f, dobj, FALSE);
                    break;

                case 40:
                    func_80010918(mtx_store.f, dobj, TRUE);
                    break;

                case 56:
                    hlMtxTranslate(mtx_store.gbi, translate->vec.f.x, translate->vec.f.y, translate->vec.f.z);
                    break;

                case 57:
                    hal_rotate(mtx_store.gbi, rotate->a, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;

                case 58:
                    hal_rotate_rpy(mtx_store.gbi, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;

                case 59:
                    hal_scale(mtx_store.gbi, scale->vec.f.x, scale->vec.f.y, scale->vec.f.z);
                    D_80046FA4 *= scale->vec.f.x;
                    break;

                case 60:
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

                case 61:
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
                    D_80046FA4 *= scale->vec.f.x;
                    break;

                case 62:
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

                case 63:
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
                    D_80046FA4 *= scale->vec.f.x;
                    break;

                case 41:
                    gSPMvpRecalc(current_dl++);
                    // gSPInsertMatrix?
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0[0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0[1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0[2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0[3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0[4]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0[5]);

                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0[8]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0[9]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0[10]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0[11]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0[12]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0[13]);
                    // this is different
                    continue;
                case 42:
                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0[0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0[1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0[2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0[3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0[4]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0[5]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0[8]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0[9]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0[10]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0[11]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0[12]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0[13]);

                    continue;
                case 43:
                    f12 = dobj->scale.vec.f.y * D_80046FA4;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

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

                case 44:
                    f12 = dobj->scale.vec.f.y * D_80046FA4;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

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
                case 45:
                {
                    f32 cosx, sinx;

                    sinx = __sinf(dobj->rotate.vec.f.x); // sp1CC
                    cosx = cosf(dobj->rotate.vec.f.x); // sp1C8 ?

                    // f2 * f8 -> f12
                    f12 = dobj->scale.vec.f.y * D_80046FA4;
                    // f2 * f10 -> f4 store reload -> f2
                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4 * cosx;
                    D_80046FE8[1][0] = D_80046FA8[0][0] * D_80046FA4 * -sinx;
                    D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinx;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosx;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

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

                    f12 = dobj->scale.vec.f.y * D_80046FA4;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][2] = 0.0F;
                    D_80046FE8[1][2] = 0.0F;
                    D_80046FE8[0][3] = 0.0F;
                    D_80046FE8[1][3] = 0.0F;
                    D_80046FE8[2][0] = 0.0F;
                    D_80046FE8[2][1] = 0.0F;

                    D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4 * cosz;
                    D_80046FE8[1][0] = D_80046FA8[0][0] * D_80046FA4 * -sinz;
                    D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinz;
                    D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosz;
                    D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

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
                    f12 = D_80046FA4 * dobj->scale.vec.f.y;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047028[0][0] * D_80046FA4;
                    D_80046FE8[0][1] = D_80047028[0][1] * D_80046FA4;
                    D_80046FE8[0][2] = D_80047028[0][2] * D_80046FA4;
                    D_80046FE8[0][3] = D_80047028[0][3] * D_80046FA4;
                    D_80046FE8[1][0] = D_80047028[1][0] * f12;
                    D_80046FE8[1][1] = D_80047028[1][1] * f12;
                    D_80046FE8[1][2] = D_80047028[1][2] * f12;
                    D_80046FE8[1][3] = D_80047028[1][3] * f12;
                    D_80046FE8[2][0] = D_80047028[2][0] * D_80046FA4;
                    D_80046FE8[2][1] = D_80047028[2][1] * D_80046FA4;
                    D_80046FE8[2][2] = D_80047028[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80047028[2][3] * D_80046FA4;

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
                case 48:
                    f12 = D_80046FA4 * dobj->scale.vec.f.y;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047028[0][0] * D_80046FA4;
                    D_80046FE8[0][1] = D_80047028[0][1] * D_80046FA4;
                    D_80046FE8[0][2] = D_80047028[0][2] * D_80046FA4;
                    D_80046FE8[0][3] = D_80047028[0][3] * D_80046FA4;
                    D_80046FE8[1][0] = D_80047028[1][0] * f12;
                    D_80046FE8[1][1] = D_80047028[1][1] * f12;
                    D_80046FE8[1][2] = D_80047028[1][2] * f12;
                    D_80046FE8[1][3] = D_80047028[1][3] * f12;
                    D_80046FE8[2][0] = D_80047028[2][0] * D_80046FA4;
                    D_80046FE8[2][1] = D_80047028[2][1] * D_80046FA4;
                    D_80046FE8[2][2] = D_80047028[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80047028[2][3] * D_80046FA4;

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
                case 49:
                    f12 = D_80046FA4 * dobj->scale.vec.f.y;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047068[0][0] * D_80046FA4;
                    D_80046FE8[0][1] = D_80047068[0][1] * D_80046FA4;
                    D_80046FE8[0][2] = D_80047068[0][2] * D_80046FA4;
                    D_80046FE8[0][3] = D_80047068[0][3] * D_80046FA4;
                    D_80046FE8[1][0] = D_80047068[1][0] * f12;
                    D_80046FE8[1][1] = D_80047068[1][1] * f12;
                    D_80046FE8[1][2] = D_80047068[1][2] * f12;
                    D_80046FE8[1][3] = D_80047068[1][3] * f12;
                    D_80046FE8[2][0] = D_80047068[2][0] * D_80046FA4;
                    D_80046FE8[2][1] = D_80047068[2][1] * D_80046FA4;
                    D_80046FE8[2][2] = D_80047068[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80047068[2][3] * D_80046FA4;

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
                case 50:
                    f12 = D_80046FA4 * dobj->scale.vec.f.y;

                    D_80046FA4 *= dobj->scale.vec.f.x;

                    D_80046FE8[0][0] = D_80047068[0][0] * D_80046FA4;
                    D_80046FE8[0][1] = D_80047068[0][1] * D_80046FA4;
                    D_80046FE8[0][2] = D_80047068[0][2] * D_80046FA4;
                    D_80046FE8[0][3] = D_80047068[0][3] * D_80046FA4;
                    D_80046FE8[1][0] = D_80047068[1][0] * f12;
                    D_80046FE8[1][1] = D_80047068[1][1] * f12;
                    D_80046FE8[1][2] = D_80047068[1][2] * f12;
                    D_80046FE8[1][3] = D_80047068[1][3] * f12;
                    D_80046FE8[2][0] = D_80047068[2][0] * D_80046FA4;
                    D_80046FE8[2][1] = D_80047068[2][1] * D_80046FA4;
                    D_80046FE8[2][2] = D_80047068[2][2] * D_80046FA4;
                    D_80046FE8[2][3] = D_80047068[2][3] * D_80046FA4;

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
                default:
                    if (ommtx->kind >= 66)
                    {
                        if (D_800470AC != NULL)
                        {
                            sb32(*proc)(Mtx*, DObj*, Gfx**);

                            proc = (dobj->parent_gobj->unk_gobj_0xE != D_8003B6E8.bytes.b3) ? D_800470AC[ommtx->kind - 66].unk00 : D_800470AC[ommtx->kind - 66].unk04;

                            ret = proc(mtx_store.gbi, dobj, &current_dl);
                        }
                    }
                    if (ret == 1)
                    {
                        continue;
                    }
                    else break;
                }
            check_05:
                if (ommtx->unk05 == 1)
                {
                    if (mtx_store.gbi == &ommtx->unk08)
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

    for (mobj_count = 0, mobj = dobj->mobj; mobj != NULL; mobj_count++, mobj = mobj->next);

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
        if (flags & 0x1000)
        {
            gSPLightColor(branch_dl++, LIGHT_1, mobj->sub.light1_color);
        }
        if (flags & 0x2000)
        {
            gSPLightColor(branch_dl++, LIGHT_2, mobj->sub.light2_color);
        }
        if (flags & (0x200 | 0x10 | 0x8))
        {
            if (flags & 0x10)
            {
                s32 trunc = mobj->unk_mobj_0x84;

                gDPSetPrimColor
                (
                    branch_dl++,
                    mobj->sub.prim_m,
                    (mobj->unk_mobj_0x84 - trunc) * 256.0F,
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
                    mobj->unk_mobj_0x84 * 255.0F,
                    mobj->sub.primcolor.r,
                    mobj->sub.primcolor.g,
                    mobj->sub.primcolor.b,
                    mobj->sub.primcolor.a
                );
            }
        }
        if (flags & 0x400)
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
        if (flags & 0x800)
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
                uls = (ABSF(phi_f2) > 0.000015259022f) ? (((mobj->sub.unk0C * spBC) + mobj->sub.unk0A) / phi_f2) * 4.0F : 0.0F;
                ult = (ABSF(phi_f12) > 0.000015259022f) ? (((((1.0F - phi_f12) - spB8) * mobj->sub.unk0E) + mobj->sub.unk0A) / phi_f12) * 4.0F : 0.0F;
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
    s32 ret;
    DObj *dobj = DObjGetStruct(gobj);

    D_80046FA4 = 1.0F;

    if (dobj->display_list != NULL)
    {
        if (dobj->flags == DOBJ_FLAG_NONE)
        {
            ret = odRenderDObjMain(dl_head, dobj);
            odRenderMObjForDObj(dobj, dl_head);
            gSPDisplayList(dl_head[0]++, dobj->display_list);

            if ((ret != 0) && (dobj->parent == DOBJ_PARENT_NULL || dobj->sib_next != NULL))
            {
                gSPPopMatrix(dl_head[0]++, G_MTX_MODELVIEW);
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
    s32 ret;
    DObj *current_dobj;
    f32 bak;

    if (!(this_dobj->flags & DOBJ_FLAG_NORENDER))
    {
        bak = D_80046FA4;
        ret  = odRenderDObjMain(gDisplayListHead, this_dobj);

        if ((this_dobj->display_list != NULL) && !(this_dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            odRenderMObjForDObj(this_dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, this_dobj->display_list);
        }
        if (this_dobj->child != NULL)
        { 
            odRenderDObjTree(this_dobj->child);
        }
        if ((ret != 0) && (this_dobj->parent == DOBJ_PARENT_NULL || this_dobj->sib_next != NULL)) 
        {
            gSPPopMatrix((gDisplayListHead[0])++, G_MTX_MODELVIEW);
        }
        D_80046FA4 = bak;
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
    D_80046FA4 = 1.0F;
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

                while ((uintptr_t)dl_current != (uintptr_t)dl_end)
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
            continue;
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

    D_80046FA4 = 1.0F;
    dobj       = DObjGetStruct(gobj);
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

void func_8001445C(struct DObj *arg0);
#ifdef NON_MATCHING
void func_8001445C(struct DObj *arg0) {
    s32 sp48;                 // t3; ret value
    struct Unk50DlLink *sp44; // a2
    Gfx *sp40;
    s32 i;
    struct DObj *curr;
    void *s4;
    f32 sp34;

    s4 = NULL;

    if ((arg0->unk54 & 2) == 0) {
        sp34 = D_80046FA4;
        sp44 = (void *)arg0->unk50;
        sp40 = D_800470B0;
        sp48 = odRenderDObjMain(&D_800470B0, arg0);

        if (sp44 != NULL && (arg0->unk54 & 1) == 0) {
            while (sp44->listId != 4) {
                // L800144FC
                if (sp44->dl != NULL) {
                    while (D_800470B0 != D_800470B8[sp44->listId]) {
                        // L8001451C
                        *gDisplayListHead[sp44->listId] = *D_800470B8[sp44->listId];
                        gDisplayListHead[sp44->listId]++;
                        D_800470B8[sp44->listId]++;
                    }
                    // L8001457C
                    if (arg0->unk80 != NULL) {
                        if (s4 == NULL) {
                            s4 = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(arg0, &gDisplayListHead[sp44->listId]);
                        } else {
                            // L800145C8
                            gSPSegment(gDisplayListHead[sp44->listId]++, 14, sp44->dl);
                        }
                    }
                    // L800145F0
                    gSPDisplayList(gDisplayListHead[sp44->listId]++, sp44->dl);
                }
                // L80014610
                sp44++;
            }
            // L80014620
        }
        // L80014624
        if (arg0->unk10 != NULL) { func_8001445C(arg0); }
        // L80014644
        D_800470B0 = sp40;
        for (i = 0; i < ARRAY_COUNT(D_800470B8); i += 2) {
            if ((uintptr_t)D_800470B0 < (uintptr_t)D_800470B8[i]) {
                D_800470B8[i] = D_800470B0;
                if (sp48 != 0 && ((uintptr_t)arg0->unk14 == 1 || arg0->unk8 != NULL)) {
                    // L800146A8
                    gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                }
            }
            // L800146C0
            if ((uintptr_t)D_800470B0 < (uintptr_t)D_800470B8[i + 1]) {
                D_800470B8[i + 1] = D_800470B0;
                if (sp48 != 0 && ((uintptr_t)arg0->unk14 == 1 || arg0->unk8 != NULL)) {
                    // L800146A8
                    gSPPopMatrix(gDisplayListHead[i + 1]++, G_MTX_MODELVIEW);
                }
            }
            // L80014708
        }
        D_80046FA4 = sp34;
    }
    // L8001471C

    if (arg0->unkC == NULL) {
        curr = arg0->unk8;
        while (curr != NULL) {
            func_8001445C(curr);
            curr = curr->unk8;
        }
    }
    // L8001474C
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_8001445C.s")
#endif

void func_80014768(struct GObjCommon *obj) {
    D_80046FA4 = 1.0f;
    func_8001445C(obj->unk74);
}

f32 func_80014798(struct DObj *arg) {
    f32 x, y, z;
    // is this the type?
    struct Camera *other;

    other = gOMObjCurrentRendering->unk74;

    x = arg->unk18.f.v.x - other->unk38.array[0][0];
    y = arg->unk18.f.v.y - other->unk38.array[0][1];
    z = arg->unk18.f.v.z - other->unk38.array[0][2];

    return (x * x) + (y * y) + (z * z);
}

void unref_800147E0(struct GObjCommon *arg0) {
    struct Unk50Float *sp24; // v1
    s32 ret;                 // sp20
    struct DObj *dobj;       // s0
    f32 dist;

    dobj = arg0->unk74;
    sp24 = (void *)dobj->unk50;

    if (sp24 != NULL && dobj->unk54 == 0) {
        dist = func_80014798(dobj);
        while (dist < sp24->f) { sp24++; }
        // L8001485C
        D_80046FA4 = 1.0f;
        if (sp24->dl != NULL) {
            ret = odRenderDObjMain(gDisplayListHead, dobj);
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, sp24->dl);

            if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
        }
    }
}

void func_8001490C(struct DObj *dobj) {
    s32 ret; // sp2C
    Gfx **dls;
    struct DObj *curr;
    f32 sp20;

    dls = (void *)dobj->unk50;

    if (!(dobj->unk54 & 2)) {
        sp20 = D_80046FA4;
        ret  = odRenderDObjMain(gDisplayListHead, dobj);

        if (dls != NULL && dls[D_800472A8] != NULL) 
        {
            if (!(dobj->unk54 & 1)) 
            {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, dls[D_800472A8]);
            }
        }
        // L800149D4
        if (dobj->unk10 != NULL) { func_8001490C(dobj->unk10); }
        // L800149F4
        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
        D_80046FA4 = sp20;
    }
    // L80014A44
    if (dobj->unkC == NULL) {
        curr = dobj->unk8;

        while (curr != NULL) {
            func_8001490C(curr);
            curr = curr->unk8;
        }
    }
}

void unref_80014A84(struct GObjCommon *obj);
#ifdef NON_MATCHING
// nonmatching: can't get dobj (sp20) to stay on stack and out of saved register
void unref_80014A84(struct GObjCommon *obj) {
    struct Unk50Float *sp2C;
    s32 ret; // sp28
    f32 f2;
    struct DObj *dobj; // sp20
    struct DObj *curr;

    dobj       = obj->unk74;
    D_80046FA4 = 1.0f;

    if (!(dobj->unk54 & 2)) {
        sp2C = (void *)dobj->unk50;
        if (sp2C != NULL) {
            D_800472A8 = 0;
            f2         = func_80014798(dobj);
            while (f2 < sp2C->f) {
                sp2C++;
                D_800472A8++;
            }
            // L80014B20
            ret = odRenderDObjMain(gDisplayListHead, dobj);

            if (sp2C->dl != NULL && !(dobj->unk54 & 1)) {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, sp2C->dl);
            }
            // L80014B9C
            if (dobj->unk10 != NULL) { func_8001490C(dobj->unk10); }
            // L80014BB4
            if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            // L80014BFC
            if (dobj->unkC == NULL) {
                curr = dobj->unk8;
                while (curr != NULL) {
                    func_8001490C(curr);
                    curr = curr->unk8;
                }
            }
        }
        // L80014C24
    }
    // L80014C28
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_80014A84.s")
#endif

void unref_80014C38(struct GObjCommon *obj) {
    struct Unk50FloatLink *list; // sp24
    f32 dist;                    // sp20?
    struct DObj *dobj;           // sp1C

    dobj       = obj->unk74;
    D_80046FA4 = 1.0f;

    if (dobj->unk54 == 0) {
        list = (void *)dobj->unk50;
        if (list != NULL) {
            dist = func_80014798(dobj);

            while (dist < list->f) { list++; }
            odRenderDObjDLLinks(dobj, list->link);
        }
    }
}

void func_80014CD0(struct DObj *dobj);
#ifdef NON_MATCHING
// nonmatching: regalloc; can't get `ret` to use t3. it uses t4 instead
void func_80014CD0(struct DObj *dobj) {
    void *s4;
    s32 ret; // t3 sp48
    struct Unk50DlLink **s0;
    struct Unk50DlLink *sp40; // a2
    Gfx *sp3C;
    struct DObj *curr;
    s32 i;
    f32 sp30;

    s4 = NULL;
    if (!(dobj->unk54 & 2)) {
        sp30 = D_80046FA4;
        s0   = (void *)dobj->unk50;
        if (s0 != NULL) { sp40 = s0[D_800472A8]; }
        // L80014D40
        sp3C = D_800470B0;
        ret  = odRenderDObjMain(&D_800470B0, dobj);

        if (s0 != NULL && sp40 != NULL && !(dobj->unk54 & 1)) {
            // s0 is sp40->listId (or that x4)
            // s1 is gDisplayListHead
            // s2 is D_800470B0
            // a3 is D_800470B8
            while (sp40->listId != 4) {
                // L80014D90
                if (sp40->dl != NULL) {
                    while (D_800470B0 != D_800470B8[sp40->listId]) {
                        // L80014DB0
                        *gDisplayListHead[sp40->listId] = *D_800470B8[sp40->listId];
                        gDisplayListHead[sp40->listId]++;
                        D_800470B8[sp40->listId]++;
                    }
                    // L80014E10
                    if (dobj->unk80 != NULL) {
                        if (s4 == NULL) {
                            s4 = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[sp40->listId]);
                        } else {
                            // L80014E5C
                            gSPSegment(gDisplayListHead[sp40->listId]++, 14, s4);
                        }
                        // L80014E80
                    }
                    // L80014E84
                    gSPDisplayList(gDisplayListHead[sp40->listId]++, sp40->dl);
                }
                // L80014EA4
                sp40++;
            }
        }
        // L80014EB8
        if (dobj->unk10 != NULL) { func_80014CD0(dobj->unk10); }
        // L80014ED8
        D_800470B0 = sp3C;

        // t4 is D_800470C8
        // a2 is D_800470B8
        // this can really unroll
        for (i = 0; i < 4; i++) {
            // L80014F00
            if (D_800470B0 < D_800470B8[i]) {
                D_800470B8[i] = D_800470B0;
                if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                    gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                }
            }
        }

        D_80046FA4 = sp30;
    }
    // L80014FB0
    if (dobj->unkC == NULL) {
        curr = dobj->unk8;
        while (curr != NULL) {
            func_80014CD0(curr);
            curr = curr->unk8;
        }
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80014CD0.s")
#endif

void unref_80014FFC(struct GObjCommon *obj);
#ifdef NON_MATCHING
// nonmatching: regalloc; can't get `ret` to use t3. it uses t4 instead
void unref_80014FFC(struct GObjCommon *obj) {
    struct Unk50FloatLink *curlink; // s0
    struct DObj *dobj;              // s3
    u32 ret;                        // sp44; t3
    void *segaddr;                  // s4
    f32 dist;                       // f0
    s32 i;
    struct Unk50DlLink *sp34; // a2
    Gfx *sp30;
    struct DObj *curr;

    dobj       = obj->unk74;
    D_80046FA4 = 1.0f;
    segaddr    = NULL;
    if (!(dobj->unk54 & 2)) {
        curlink = (void *)dobj->unk50;
        // s1 is D_800472A8
        // s2 is D_800470B0
        if (curlink != NULL) {
            D_800472A8 = 0;
            dist       = func_80014798(dobj);
            while (dist < curlink->f) {
                D_800472A8++;
                curlink++;
            }
            // L800150A4
            sp34 = curlink->link;
            sp30 = D_800470B0;
            ret  = odRenderDObjMain(&D_800470B0, dobj);
            if (sp34 != NULL && !(dobj->unk54 & 1)) {
                while (sp34->listId != 4) {
                    // L800150F8
                    // D_800470B8 is a3
                    // gDisplayListHead is s1
                    if (sp34->dl != NULL) {
                        while (D_800470B0 != D_800470B8[sp34->listId]) {
                            // L80015118
                            *gDisplayListHead[sp34->listId] = *D_800470B8[sp34->listId];
                            gDisplayListHead[sp34->listId]++;
                            D_800470B8[sp34->listId]++;
                        }
                        // L80015178

                        if (dobj->unk80 != NULL) {
                            if (segaddr == NULL) {
                                segaddr = gGraphicsHeap.ptr;
                                odRenderMObjForDObj(dobj, &gDisplayListHead[sp34->listId]);
                            } else {
                                // L800151C4
                                gSPSegment(gDisplayListHead[sp34->listId]++, 14, segaddr);
                            }
                            // L800151E8
                        }
                        // L800151EC
                        gSPDisplayList(gDisplayListHead[sp34->listId]++, sp34->dl);
                    }
                    // L8001520C
                    sp34++;
                }
                // L8001521C
            }
            // L80015220
            if (dobj->unk10 != NULL) { func_80014CD0(dobj->unk10); }
            // L80015240
            D_800470B0 = sp30;
            for (i = 0; i < ARRAY_COUNT(D_800470B8); i++) {
                // L80015268
                if (D_800470B0 < D_800470B8[i]) {
                    D_800470B8[i] = D_800470B0;
                    if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
            }

            if (dobj->unkC == NULL) {
                curr = dobj->unk8;
                while (curr != NULL) {
                    func_80014CD0(curr);
                    curr = curr->unk8;
                }
            }
        }
        // L80015338
    }
    // L8001533C
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_80014FFC.s")
#endif

void func_80015358(struct DObj *dobj) {
    s32 ret; // sp2C
    Gfx **s0;
    f32 sp24;
    struct DObj *curr;

    s0 = (void *)dobj->unk50;
    if (!(dobj->unk54 & 2)) {
        sp24 = D_80046FA4;

        if (s0 != NULL && s0[0] != NULL && !(dobj->unk54 & 1)) {
            gSPDisplayList(gDisplayListHead[0]++, s0[0]);
        }

        ret = odRenderDObjMain(gDisplayListHead, dobj);

        if (s0 != NULL && s0[1] != NULL && !(dobj->unk54 & 1)) {
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, s0[1]);
        }

        if (dobj->unk10 != NULL) { func_80015358(dobj->unk10); }

        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }

        D_80046FA4 = sp24;
    }

    if (dobj->unkC == NULL) {
        curr = dobj->unk8;
        while (curr != NULL) {
            func_80015358(curr);
            curr = curr->unk8;
        }
    }
}

void unref_800154F0(struct GObjCommon *obj) {
    D_80046FA4 = 1.0f;
    func_80015358(obj->unk74);
}

void func_80015520(struct DObj *dobj);
#ifdef NON_MATCHING
// nonmatching: seems to be slightly different than the related functions.
//              Missing one saved register
void func_80015520(struct DObj *dobj) {
    s32 ret;                   // t3; sp48
    struct Unk50MultiDl *sp44; // a2
    Gfx *sp40;
    void *segaddr; // s4
    s32 i;
    f32 sp34;
    struct DObj *curr;

    segaddr = NULL;
    if (!(dobj->unk54 & 2)) {
        sp34 = D_80046FA4;
        sp44 = (void *)dobj->unk50;
        sp40 = D_800470B0;
        ret  = odRenderDObjMain(&D_800470B0, dobj);

        if (sp44 != NULL && !(dobj->unk54 & 1)) {
            while (sp44->id != 4) {
                // L800155C4
                // s1 is &gDisplayListHead
                // a3 is &D_800470B8
                if (sp44->dl2 != NULL) {
                    if (sp44->dl1 != NULL) { gSPDisplayList(gDisplayListHead[sp44->id]++, sp44->dl1); }
                    // L80015600
                    while (D_800470B0 != D_800470B8[sp44->id]) {
                        // L80015614
                        *gDisplayListHead[sp44->id] = *D_800470B8[sp44->id];
                        gDisplayListHead[sp44->id]++;
                        D_800470B8[sp44->id]++;
                    }
                    // L80015674
                    if (dobj->unk80 != NULL) {
                        if (segaddr == NULL) {
                            segaddr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[sp44->id]);
                        } else {
                            gSPSegment(gDisplayListHead[sp44->id]++, 14, segaddr);
                        }
                        // L800156E8
                        gSPDisplayList(gDisplayListHead[sp44->id]++, sp44->dl2);
                    }
                }
                // L80015708
                sp44++;
            }
            // L80015718
        }
        // L8001571C
        if (dobj->unk10 != NULL) { func_80015520(dobj->unk10); }
        // L8001573C
        D_800470B0 = sp40;

        for (i = 0; i < ARRAY_COUNT(D_800470B8); i++) {
            if (D_800470B0 < D_800470B8[i]) {
                D_800470B8[i] = D_800470B0;
                if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                    gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                }
            }
        }

        D_80046FA4 = sp34;

        if (dobj->unkC == NULL) {
            curr = dobj->unk8;
            while (curr != NULL) {
                func_80015520(curr);
                curr = curr->unk8;
            }
        }
    }
    // L80015814
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80015520.s")
#endif

void unref_80015860(struct GObjCommon *obj) {
    D_80046FA4 = 1.0f;
    func_80015520(obj->unk74);
}

void func_80015890(struct DObj *dobj) {
    s32 ret; // sp2C
    struct DObj *curr;
    f32 sp24;
    Gfx **sp20;
    Gfx ***s0;

    s0 = (void *)dobj->unk50;

    if (!(dobj->unk54 & DOBJ_FLAG_NORENDER)) 
    {
        sp24 = D_80046FA4;
        if (s0 != NULL) { sp20 = s0[D_800472A8]; }
        // L800158DC
        if (s0 != NULL && sp20[0] != NULL && !(dobj->unk54 & DOBJ_FLAG_NOTEXTURE))
        {
            gSPDisplayList(gDisplayListHead[0]++, sp20[0]);
        }
        // L8001591C
        ret = odRenderDObjMain(gDisplayListHead, dobj);
        if (s0 != NULL && sp20[1] != NULL && !(dobj->unk54 & DOBJ_FLAG_NOTEXTURE))
        {
            odRenderMObjForDObj(dobj, gDisplayListHead);
            gSPDisplayList(gDisplayListHead[0]++, sp20[1]);
        }
        // L800159A4
        if (dobj->unk10 != NULL) { func_80015890(dobj->unk10); }
        // L800159C8
        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
        }
        // L80015A10
        D_80046FA4 = sp24;
    }
    // L80015A18
    if (dobj->unkC == NULL) {
        curr = dobj->unk8;
        while (curr != NULL) {
            func_80015890(curr);
            curr = curr->unk8;
        }
    }
}

void unref_80015A58(struct GObjCommon *obj);
#ifdef NON_MATCHING
// nonmatching: variable `dobj` is put into s0 instead of staying on stack
void unref_80015A58(struct GObjCommon *obj) {
    struct DObj *curr;
    struct Unk50Float *sp2C; // v1
    s32 ret;                 // sp28
    f32 dist;
    struct DObj *dobj; // a2; sp20

    dobj = obj->unk74;
    if (!(dobj->unk54 & 2)) {
        sp2C = (void *)dobj->unk50;
        if (sp2C != NULL) {
            D_80046FA4 = 1.0f;
            D_800472A8 = 0;

            dist = func_80014798(dobj);
            while (dist < sp2C->f) {
                D_800472A8++;
                sp2C++;
            }
            // L80015AF4
            // s0 is gDisplayListHead
            ret = odRenderDObjMain(gDisplayListHead, dobj);
            if (sp2C->dl != NULL && !(dobj->unk54 & 1)) {
                odRenderMObjForDObj(dobj, gDisplayListHead);
                gSPDisplayList(gDisplayListHead[0]++, sp2C->dl);
            }
            // L80015B70
            if (dobj->unk10 != NULL) { func_80015890(dobj->unk10); }
            // L80015B88
            if (ret && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gDisplayListHead[0]++, G_MTX_MODELVIEW);
            }
            // L80015BD0
            if (dobj->unkC == NULL) {
                curr = dobj->unk8;
                while (curr != NULL) {
                    func_80015890(curr);
                    curr = curr->unk8;
                }
            }
        }
        // L80015BF8
    }
    // L80015BFC
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_80015A58.s")
#endif

void func_80015C0C(struct DObj *dobj) {
    void *segaddr; // s4
    s32 ret;       // sp48;
    struct Unk50MultiDl **s0;
    struct Unk50MultiDl *sp40;
    Gfx *sp3C;
    s32 i;
    struct DObj *curr;
    f32 sp30;

    segaddr = NULL;
    if (!(dobj->unk54 & 2)) {
        sp30 = D_80046FA4;
        // s2 is D_800470B0
        s0 = (void *)dobj->unk50;
        if (s0 != NULL) { sp40 = s0[D_800472A8]; }
        // L80015C7C
        sp3C = D_800470B0;
        ret  = odRenderDObjMain(&D_800470B0, dobj);

        if (s0 != NULL && sp40 != NULL && !(dobj->unk54 & 1)) {
            // s1 is gDisplayListHead
            // a3 is D_800470B8
            while (sp40->id != 4) {
                // L80015CD0
                if (sp40->dl2 != NULL) {
                    if (sp40->dl1 != NULL) { gSPDisplayList(gDisplayListHead[sp40->id]++, sp40->dl1); }
                    // L80015D0C
                    while (D_800470B0 != D_800470B8[sp40->id]) {
                        *gDisplayListHead[sp40->id] = *D_800470B8[sp40->id];
                        gDisplayListHead[sp40->id]++;
                        D_800470B8[sp40->id]++;
                    }
                    // L80015D80
                    if (dobj->unk80 != NULL) {
                        if (segaddr == NULL) {
                            segaddr = gGraphicsHeap.ptr;
                            odRenderMObjForDObj(dobj, &gDisplayListHead[sp40->id]);
                        } else {
                            // L80015DD0
                            gSPSegment(gDisplayListHead[sp40->id]++, 14, segaddr);
                        }
                        // L80015DF4
                    }
                    // L80015DF8
                    gSPDisplayList(gDisplayListHead[sp40->id]++, sp40->dl2);
                }
                // L80015E14
                sp40++;
            }
        }
        // L80015E24
        // s1 is gDisplayListHead
        if (dobj->unk10 != NULL) { func_80015C0C(dobj->unk10); }
        // L80015E48
        D_800470B0 = sp3C;
        for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) {
            // a2 is D_800470B8
            if (D_800470B0 < D_800470B8[i]) {
                D_800470B8[i] = D_800470B0;
                if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                    gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                }
            }
            // L80015F0C
        }
        D_80046FA4 = sp30;
    }
    // L80015F20
    if (dobj->unkC == NULL) {
        curr = dobj->unk8;
        while (curr != NULL) {
            func_80015C0C(curr);
            curr = curr->unk8;
        }
    }
}

#ifdef MIPS_TO_C
// nonmatching: regalloc; `ret` is put into t4 instead of t3
void unref_80015F6C(struct GObjCommon *obj) {
    f32 dist;
    s32 i;
    s32 ret;                      // t3; sp44
    struct DObj *dobj;            // s3
    void *segaddr;                // s4
    struct Unk50FloatLink *wlink; // s0
    struct Unk50DlLink *link;     // sp34; a2
    Gfx *preserve;                // sp30
    struct DObj *curr;

    dobj    = obj->unk74;
    segaddr = NULL;

    if (!(dobj->unk54 & 2)) {
        wlink = (void *)dobj->unk50;
        // s1 is D_800472A8

        if (wlink != NULL) {
            D_80046FA4 = 1.0f;
            D_800472A8 = 0;
            dist       = func_80014798(dobj);
            // s2 is D_800470B0
            while (dist < wlink->f) {
                wlink++;
                D_800472A8++;
            }
            // L80016014
            link     = wlink->link;
            preserve = D_800470B0;
            ret      = odRenderDObjMain(&D_800470B0, dobj);

            if (link != NULL && !(dobj->unk54 & 1)) {
                // s1 is gDisplayListHead
                // a3 is D_800470B8
                while (link->listId != 4) {
                    // s0 is link->listId (* 4)
                    if (link->dl != NULL) {
                        while (D_800470B0 != D_800470B8[link->listId]) {
                            *gDisplayListHead[link->listId] = *D_800470B8[link->listId];
                            gDisplayListHead[link->listId]++;
                            D_800470B8[link->listId]++;
                        }
                        // L800160E8
                        if (dobj->unk80 != NULL) {
                            if (segaddr == NULL) {
                                segaddr = gGraphicsHeap.ptr;
                                odRenderMObjForDObj(dobj, &gDisplayListHead[link->listId]);
                            } else {
                                gSPSegment(gDisplayListHead[link->listId]++, 14, segaddr);
                            }
                        }
                        // L8001615C
                        gSPDisplayList(gDisplayListHead[link->listId]++, link->dl);
                    }
                    // L8001617C
                    link++;
                }
            }
            // L8001618C
            // L80016190
            if (dobj->unk10 != NULL) { func_80015C0C(dobj->unk10); }
            // L800161B0
            // a2 is D_800470B8
            // t4 is D_800470C8
            D_800470B0 = preserve;
            for (i = 0; i < ARRAY_COUNT(D_800470B8); i++) {
                if (D_800470B0 < D_800470B8[i]) {
                    D_800470B8[i] = D_800470B0;
                    if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                        gSPPopMatrix(gDisplayListHead[i]++, G_MTX_MODELVIEW);
                    }
                }
                // L80016274
            }
            if (dobj->unkC == NULL) {
                curr = dobj->unk8;
                while (curr != NULL) {
                    func_80015C0C(curr);
                    curr = curr->unk8;
                }
            }
        }
        // L800162A8
    }
    // L800162AC
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_80015F6C.s")
#endif

void unref_800162C8(struct GObjCommon *obj) {
    struct SObj *sobj;

    sobj = obj->unk74;
    while (sobj != NULL) {
        if (!(sobj->sp.attr & SP_HIDDEN)) {
            sobj->sp.rsp_dl_next = gDisplayListHead[0];
            spDraw(&sobj->sp);
            // spDraw adds a gSPEndDisplayList
            // so move the cursor back one Gfx, I guess?
            gDisplayListHead[0] = sobj->sp.rsp_dl_next - 1;
        }
        sobj = sobj->unk08;
    }
}

#ifdef NON_MATCHING
// nonmatching: there is an unnecessary divide by zero check that is not being eliminated
void func_80016338(Gfx **dlist, struct Camera *cam, s32 arg2) {
    if ((arg2 == 0 || arg2 == 1) && !(cam->unk80 & 0x20)) {
        append_ucode_load(dlist, D_80046626);
        D_80046628 = 1;
    }
    // L8001639C
    gSPViewport(dlist[0]++, &cam->unk08);
    gDPSetScissor(
        dlist[0]++,
        G_SC_NON_INTERLACE,
        MIN(cam->unk08.vp.vtrans[0] / 4 - cam->unk08.vp.vscale[0] / 4,
            (gCurrScreenWidth / SCREEN_WIDTH) * D_8003B938),
        MIN(cam->unk08.vp.vtrans[1] / 4 - cam->unk08.vp.vscale[1] / 4,
            (gCurrScreenHeight / SCREEN_HEIGHT) * D_8003B930),
        MIN(gCurrScreenWidth - ((gCurrScreenWidth / SCREEN_WIDTH) * D_8003B93C),
            cam->unk08.vp.vtrans[0] / 4 + cam->unk08.vp.vscale[0] / 4),
        MIN(gCurrScreenHeight - ((gCurrScreenHeight / SCREEN_HEIGHT) * D_8003B934),
            cam->unk08.vp.vtrans[1] / 4 + cam->unk08.vp.vscale[1] / 4));
    gDPPipeSync(dlist[0]++);
    gDPSetColorImage(
        dlist[0]++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void *)0x0F000000);
    gDPSetCycleType(dlist[0]++, G_CYC_1CYCLE);
    if (arg2 == 0 || arg2 == 2) {
        gDPSetRenderMode(dlist[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    } else {
        gDPSetRenderMode(dlist[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80016338.s")
#endif

void func_8001663C(Gfx **dlist, struct Camera *cam, s32 arg2);
#ifdef NON_MATCHING
// nonmatching: this looks like its close, but needs some playing around
void func_8001663C(Gfx **dlist, struct Camera *cam, s32 arg2) {
    s32 ulx, uly, lrx, lry;
    Gfx *csr = dlist[0];

    if ((arg2 == 0 || arg2 == 1) && !(cam->unk80 & 0x20)) {
        append_ucode_load(dlist, D_80046626);
        D_80046628 = 1;
    }
    // L800166A0
    gSPViewport(csr++, &cam->unk08);
    ulx =
        MIN(cam->unk08.vp.vtrans[0] / 4 - cam->unk08.vp.vscale[0] / 4,
            gCurrScreenWidth / SCREEN_WIDTH * D_8003B938);
    uly =
        MIN(cam->unk08.vp.vtrans[1] / 4 - cam->unk08.vp.vscale[1] / 4,
            gCurrScreenHeight / SCREEN_HEIGHT * D_8003B930);
    lrx =
        MAX(cam->unk08.vp.vtrans[0] / 4 + cam->unk08.vp.vscale[0] / 4,
            gCurrScreenWidth - (gCurrScreenWidth / SCREEN_WIDTH * D_8003B93C));
    lry =
        MAX(cam->unk08.vp.vtrans[1] / 4 + cam->unk08.vp.vscale[1] / 4,
            gCurrScreenHeight - (gCurrScreenHeight / SCREEN_HEIGHT * D_8003B934));

    gDPSetScissor(csr++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);
    if (!(cam->unk80 & 1)) {
        gDPPipeSync(csr++);
        gDPSetCycleType(csr++, G_CYC_1CYCLE);
        gDPSetRenderMode(csr++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(csr++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);
        gDPSetFillColor(csr++, GPACK_ZDZ(G_MAXFBZ, 0) << 16 | GPACK_ZDZ(G_MAXFBZ, 0));
        gDPFillRectangle(csr++, ulx - 1, uly - 1, lrx, lry);
    }
    // L80016950
    gDPPipeSync(csr++);
    gDPSetColorImage(
        csr++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, (void *)0x0F000000);
    if (!(cam->unk80 & 2)) {
        gDPSetCycleType(csr++, G_CYC_FILL);
        gDPSetRenderMode(csr++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(csr++, rgba32_to_fill_color(cam->unk84));
        gDPFillRectangle(csr++, ulx - 1, uly - 1, lrx, lry);
    }
    // L80016A5C
    gDPPipeSync(csr++);
    gDPSetCycleType(csr++, G_CYC_1CYCLE);
    if (arg2 == 0 || arg2 == 2) {
        gDPSetRenderMode(csr++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    } else {
        gDPSetRenderMode(csr++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    }
    dlist[0] = csr;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_8001663C.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_80016AE4.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80016EDC.s")
#endif

void func_80017830(s32 val) {
    D_800470A8 = val;
}

// the second arg may just be unused
void func_8001783C(struct Camera *cam, s32 cbarg) {
    if (cam->unk88 != NULL) { cam->unk88(cam, cbarg); }
}

void func_80017868(struct GObjCommon *obj, s32 idx, s32 arg2) {
    struct GObjCommon *curr;

    curr = gOMObjCommonDLLinks[idx];
    while (curr != NULL) {
        if (!(curr->unk7C & 1)
            && ((arg2 == 0 && (obj->unk38 & curr->unk38))
                || (arg2 == 1 && obj->unk38 == curr->unk38))) {
            D_8003B874 = 4;
            D_80046A5C = curr;
            curr->unk2C(curr);
            D_8003B874  = 3;
            curr->unk0E = D_8003B6E8.word;
        }
        curr = curr->unk20;
    }
}

void func_80017978(struct GObjCommon *obj, s32 idx, s32 arg2);
#ifdef MIPS_TO_C
// nonmatching: regalloc only
void func_80017978(struct GObjCommon *obj, s32 idx, s32 arg2) {
    Gfx *sp38[4];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) {
        // L8001799C
        sp38[i] = gDisplayListHead[i];
        gDisplayListHead[i] += 2;
    }

    func_80017868(obj, idx, arg2);

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) {
        // L80017A04
        if (gDisplayListHead[i] == sp38[i] + 2) {
            gDisplayListHead[i] -= 2;
            D_80046A88[idx].unk04[i] = NULL;
        } else {
            // L80017A28
            gSPEndDisplayList(gDisplayListHead[i]++);

            gSPDisplayList(sp38[i], sp38[i] + 2);
            sp38[i]++;
            gSPBranchList(sp38[i]++, sp38[i]);
            D_80046A88[idx].unk04[i] = sp38[i];
        }
        // L80017A70
    }

    D_80046A88[idx].unk00 = D_8003B6E8.word;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80017978.s")
#endif

void func_80017AAC(s32 idx) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gDisplayListHead); i++) {
        if (D_80046A88[idx].unk04[i] != NULL) {
            gSPDisplayList(gDisplayListHead[i]++, D_80046A88[idx].unk04[i]);
        }
    }
}

void func_80017B80(struct GObjCommon *obj, s32 arg1) {
    s32 idx;
    u64 sp38; // t6+t7
    u64 sp30;

    sp38 = obj->unk30;
    sp30 = obj->unk40;

    idx = 0;
    while (sp38) {
        if (sp38 & 1) {
            if (sp30 & 1) {
                if (D_8003B6E8.bytes.b3 == D_80046A88[idx].unk00) {
                    func_80017AAC(idx);
                } else {
                    func_80017978(obj, idx, arg1);
                }
            } else {
                // L80017C48
                func_80017868(obj, idx, arg1);
            }
            // L80017C58
        }
        // L80017C54
        sp38 >>= 1;
        sp30 >>= 1;
        idx++;
    }
    // L80017CA4
}

void func_80017CC8(struct Camera *cam) {
    if (cam->unk80 & 0x04) { func_800057C8(); }

    if (cam->unk80 & 0x10) {
        func_800053CC();
        func_80004F78();
    }

    if (cam->unk80 & 0x40) { func_800053CC(); }
}

void func_80017D3C(struct GObjCommon *obj, Gfx **dlists, s32 dlIdx) {
    struct Camera *cam;

    cam = obj->unk74;
    func_8001663C(dlists, cam, dlIdx);
    func_80016EDC(dlists, cam);
    func_8001783C(cam, dlIdx);
    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);
    func_80017CC8(cam);
}

void func_80017DBC(struct GObjCommon *obj) {
    func_80017D3C(obj, &gDisplayListHead[0], 0);
}

void unref_80017DE4(struct GObjCommon *obj) {
    func_80017D3C(obj, &gDisplayListHead[1], 1);
}

void unref_80017E0C(struct GObjCommon *obj) {
    func_80017D3C(obj, &gDisplayListHead[2], 2);
}

void unref_80017E34(struct GObjCommon *obj) {
    func_80017D3C(obj, &gDisplayListHead[3], 3);
}

void unref_80017E5C(void) {
    struct Camera *cam;

    cam = gOMObjCurrentRendering->unk74;
    func_800053CC();
    func_80004F78();
    func_8001663C(gDisplayListHead, cam, 0);
    func_80016EDC(gDisplayListHead, cam);
    func_8001783C(cam, 0);
}

#ifdef NON_MATCHING
// nonmatching: minor instruction reordering + regalloc
void func_80017EC0(struct GObjCommon *obj) {
    struct Camera *cam; // s5
    s32 i;

    cam = obj->unk74;
    // s0 is gDisplayListHead
    func_8001663C(gDisplayListHead, cam, 0);
    D_800472C0 = gDisplayListHead[0] + 1;
    gSPDisplayList(gDisplayListHead[0], gDisplayListHead[0] + 2);
    gDisplayListHead[0] += 2;

    func_80016EDC(gDisplayListHead, cam);
    gSPEndDisplayList(gDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gDisplayListHead[0]);

    func_8001783C(cam, 0);
    if (cam->unk80 & 0x20) { func_80016338(&gDisplayListHead[1], cam, 1); }
    // L80017FA4
    for (i = 1; i < ARRAY_COUNT(gDisplayListHead); i++) {
        // L80017FBC
        gDisplayListHead[i] = D_800472B0[i] = gDisplayListHead[i] + 1;
    }

    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);

    for (i = 1; i < 4; i++) {
        // L8001801C
        Gfx *start = gDisplayListHead[i]; // s0 into s4

        // s1 is gDisplayListHead[i]
        // s2 is D_800472B0[i]
        // s3 is i
        if (D_800472B0[i] == start) {
            gDisplayListHead[i] = start - 1;
        } else {
            // L8001803C
            gDisplayListHead[i] = start + 1;
            gSPDisplayList(D_800472B0[i] - 1, gDisplayListHead[i]);
            if (i != 1 || !(cam->unk80 & 0x20)) { func_80016338(&gDisplayListHead[i], cam, i); }
            // L80018070
            gSPDisplayList(gDisplayListHead[i]++, (D_800472C0 + 1));
            func_8001783C(cam, i);
            gSPEndDisplayList(gDisplayListHead[i]++);
            gSPBranchList(start, gDisplayListHead[i]);
        }
        // L800180C4
    }
    func_80017CC8(cam);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80017EC0.s")
#endif

void unref_8001810C(void);
#ifdef NON_MATCHING
void unref_8001810C(void) {
    struct Camera *cam; // s5
    s32 i;

    cam = gOMObjCurrentRendering->unk74;

    for (i = 1; i < 4; i++) {
        Gfx *start; // s1 into s4
        // s0 is &gDisplayListHead[i]
        // s4 is &D_800472B0[i]
        // s7 is &D_800472C0

        start = gDisplayListHead[i];

        if (D_800472B0[i] == start) {
            gDisplayListHead[i] = start - 1;
        } else {
            // L8001818C
            gDisplayListHead[i] = start + 1;
            gSPDisplayList(D_800472B0[i] - 1, gDisplayListHead[i]);
            func_80016338(&gDisplayListHead[i], cam, i);
            gSPDisplayList(gDisplayListHead[i]++, D_800472C0 + 1);
            func_8001783C(cam, i);
            gSPEndDisplayList(gDisplayListHead[i]++);
            gSPBranchList(start, gDisplayListHead[i]);
        }
        // L800181F8
    }
    func_800053CC();
    func_80004F78();
    func_8001663C(&gDisplayListHead[0], cam, 0);
    D_800472C0 = gDisplayListHead[0] + 1;
    gSPDisplayList(gDisplayListHead[0], gDisplayListHead[0] + 2);
    gDisplayListHead[0] += 2;
    func_80016EDC(gDisplayListHead, cam);
    gSPEndDisplayList(gDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gDisplayListHead[0]);
    func_8001783C(cam, 0);

    for (i = 1; i < ARRAY_COUNT(gDisplayListHead); i++) { D_800472B0[i] = ++gDisplayListHead[i]; }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_8001810C.s")
#endif

#ifdef NON_MATCHING
// nonmatching: regalloc
void func_80018300(struct GObjCommon *obj) {
    struct Camera *cam;
    UNUSED u32 pad;
    s32 xmin, ymin, xmax, ymax;

    cam = obj->unk74;

    xmin = cam->unk08.vp.vtrans[0] / 4 - cam->unk08.vp.vscale[0] / 4;
    ymin = cam->unk08.vp.vtrans[1] / 4 - cam->unk08.vp.vscale[1] / 4;
    xmax = cam->unk08.vp.vtrans[0] / 4 + cam->unk08.vp.vscale[0] / 4;
    ymax = cam->unk08.vp.vtrans[1] / 4 + cam->unk08.vp.vscale[1] / 4;

    xmin = MAX(gCurrScreenWidth / SCREEN_WIDTH * D_8003B938, xmin);
    ymin = MAX(gCurrScreenHeight / SCREEN_HEIGHT * D_8003B930, ymin);
    xmax = MIN(gCurrScreenWidth - (gCurrScreenWidth / SCREEN_WIDTH * D_8003B93C), xmax);
    ymax = MIN(gCurrScreenHeight - (gCurrScreenHeight / SCREEN_HEIGHT * D_8003B934), ymax);

    func_8001663C(&gDisplayListHead[0], cam, 0);
    spInit(gDisplayListHead);
    spScissor(xmin, xmax, ymin, ymax);
    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);
    spFinish(gDisplayListHead);
    gDisplayListHead[0]--;
    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80018300.s")
#endif
#pragma GCC diagnostic pop
