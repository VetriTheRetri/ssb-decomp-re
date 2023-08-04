#include "sys/obj_renderer.h"

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
Mtx4f D_80046FA8;
Mtx4f D_80046FE8;
Mtx4f D_80047028;
Mtx4f D_80047068;
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
#define gSPMvpRecalc(pkt) gImmp1(pkt, G_SPECIAL_1, 1)
#define gsSPMvpRecalc()   gsImmp1(G_SPECIAL_1, 1)

#ifdef MIPS_TO_C
s32 func_80010D70(Gfx **arg0, struct DObj *arg1) {
    union Mtx3fi *sp2C0;
    struct Mtx4Float *sp2BC; // fp (s8)
    struct Mtx3Float *sp2B8;
    s32 sp2CC;
    Gfx *sp2D4;

    u8 *csr;
    s32 i;

    sp2D4 = *arg0;
    sp2CC = 0;

    if (arg1->unk4C != NULL) {
        csr = arg1->unk4C->data;
        for (i = 0; i < ARRAY_COUNT(arg1->unk4C->kinds); i++) {
            switch (arg1->unk4C->kinds[i]) {
                case 0: break;
                case 1:
                    sp2C0 = (void *)csr;
                    csr += sizeof(*sp2C0);
                    break;
                case 2:
                    sp2BC = (void *)csr;
                    csr += sizeof(*sp2BC);
                    break;
                case 3:
                    sp2B8 = (void *)csr;
                    csr += sizeof(*sp2B8);
                    break;
            }
        }
    }
    // L80010E34
    for (i = 0; i < arg1->unk56; i++) {
        // struct DObj *curdobj = arg1; // sp74
        struct OMMtx *mtx = arg1->unk58[i]; // s3
        union {
            Mtx *gbi;
            Mtx4f *f;
        } mtxStore; // s0
        s32 ret;

        if (mtx != NULL) {
            mtxStore.gbi = &mtx->unk08;
            if (mtx->unk05 != 2) {
                if (mtx->unk05 == 4) {
                    if (D_8003B6E8.parts[3] != arg1->unk4->unk0E) {
                        // this is weird...
                        *(void **)&mtx->unk08 = gMatrixHeap.ptr;
                        mtxStore.f            = gMatrixHeap.ptr;
                        gMatrixHeap.ptr       = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                    } else {
                        // L80010EDC
                        switch (mtx->unk04) {
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
                                mtxStore.f      = gMatrixHeap.ptr;
                                gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                                break;
                            default:
                                // L80010F18
                                if (mtx->unk04 > 66) {
                                    mtxStore.f      = gMatrixHeap.ptr;
                                    gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                                } else {
                                    // L80010F38
                                    // what is it loading here?
                                    // bringing back the pointer stored in mtx->unk08[0][0]?
                                    continue; // to L80012CA4
                                }
                        }
                    }
                } else if (gGtlTaskId > 0) {
                    // L80010F40
                    mtxStore.f      = gMatrixHeap.ptr;
                    gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                } else {
                    // L80010F68
                    if (D_8003B6E8.parts[3] == arg1->unk4->unk0E) {
                        switch (mtx->unk04) {
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
                                mtxStore.f      = gMatrixHeap.ptr;
                                gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                                break;
                            default:
                            {
                                if (mtx->unk04 > 66) {
                                    mtxStore.f      = gMatrixHeap.ptr;
                                    gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                                } else {
                                    // L80010FDC
                                    if (mtx->unk05 != 3) { continue; }

                                    mtxStore.f      = gMatrixHeap.ptr;
                                    gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + sizeof(Mtx4f);
                                }
                            }
                        }
                    }
                }
                // L80010FFC - end of if, else if, else?
                // L80011000
                ret = 0;
                switch (mtx->unk04) {
                    case 1: break;
                    case 2: break;
                    case 18:
                        hal_translate(
                            mtxStore.gbi, arg1->unk18.f.v.x, arg1->unk18.f.v.y, arg1->unk18.f.v.z);
                        break;
                    case 19:
                        hal_rotate_degrees(
                            mtxStore.gbi,
                            arg1->unk28.f[0],
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 20:
                        hal_rotate_translate_degrees(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[0],
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 21:
                        hal_rotate_rpy_degrees(
                            mtxStore.gbi, arg1->unk28.f[1], arg1->unk28.f[2], arg1->unk28.f[3]);
                        break;
                    case 22:
                        hal_rotate_rpy_translate_degrees(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 23:
                        hal_rotate(
                            mtxStore.gbi,
                            arg1->unk28.f[0],
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 24:
                        hal_rotate_translate(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[0],
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 25:
                        hal_rotate_translate_rowscale(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[0],
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3],
                            arg1->unk3C.v.x,
                            arg1->unk3C.v.y,
                            arg1->unk3C.v.z);
                        D_80046FA4 *= arg1->unk3C.v.x;
                        break;
                    case 26:
                        hal_rotate_rpy(
                            mtxStore.gbi, arg1->unk28.f[1], arg1->unk28.f[2], arg1->unk28.f[3]);
                        break;
                    case 27:
                        hal_rotate_rpy_translate(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 28:
                        hal_rotate_rpy_translate_scale(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3],
                            arg1->unk3C.v.x,
                            arg1->unk3C.v.y,
                            arg1->unk3C.v.z);
                        D_80046FA4 *= arg1->unk3C.v.x;
                        break;
                    case 29:
                        hal_rotate_pyr(
                            mtxStore.gbi, arg1->unk28.f[1], arg1->unk28.f[2], arg1->unk28.f[3]);
                        break;
                    case 30:
                        hal_rotate_pyr_translate(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3]);
                        break;
                    case 31:
                        hal_rotate_pyr_translate_scale(
                            mtxStore.gbi,
                            arg1->unk18.f.v.x,
                            arg1->unk18.f.v.y,
                            arg1->unk18.f.v.z,
                            arg1->unk28.f[1],
                            arg1->unk28.f[2],
                            arg1->unk28.f[3],
                            arg1->unk3C.v.x,
                            arg1->unk3C.v.y,
                            arg1->unk3C.v.z);
                        D_80046FA4 *= arg1->unk3C.v.x;
                        break;
                    case 32:
                        hal_scale(mtxStore.gbi, arg1->unk3C.v.x, arg1->unk3C.v.y, arg1->unk3C.v.z);
                        D_80046FA4 *= arg1->unk3C.v.x;
                        break;
                    case 33: func_80010AE8(mtxStore.f, arg1, FALSE); break;
                    case 34: func_80010AE8(mtxStore.f, arg1, TRUE); break;
                    case 35: func_80010748(mtxStore.f, arg1, FALSE); break;
                    case 36: func_80010748(mtxStore.f, arg1, TRUE); break;
                    case 37: func_80010C2C(mtxStore.f, arg1, FALSE); break;
                    case 38: func_80010C2C(mtxStore.f, arg1, TRUE); break;
                    case 39: func_80010918(mtxStore.f, arg1, FALSE); break;
                    case 40: func_80010918(mtxStore.f, arg1, TRUE); break;
                    case 56:
                        hal_translate(mtxStore.gbi, sp2C0->f.v.x, sp2C0->f.v.y, sp2C0->f.v.z);
                        break;
                    case 57:
                        hal_rotate(
                            mtxStore.gbi, sp2BC->f[0], sp2BC->f[1], sp2BC->f[2], sp2BC->f[3]);
                        break;
                    case 58:
                        hal_rotate_rpy(mtxStore.gbi, sp2BC->f[1], sp2BC->f[2], sp2BC->f[3]);
                        break;
                    case 59:
                        hal_scale(mtxStore.gbi, sp2B8->v.x, sp2B8->v.y, sp2B8->v.z);
                        D_80046FA4 *= sp2B8->v.x;
                        break;
                    case 60:
                        hal_rotate_translate(
                            mtxStore.gbi,
                            sp2C0->f.v.x,
                            sp2C0->f.v.y,
                            sp2C0->f.v.z,
                            sp2BC->f[0],
                            sp2BC->f[1],
                            sp2BC->f[2],
                            sp2BC->f[3]);
                        break;
                    case 61:
                        hal_rotate_translate_rowscale(
                            mtxStore.gbi,
                            sp2C0->f.v.x,
                            sp2C0->f.v.y,
                            sp2C0->f.v.z,
                            sp2BC->f[0],
                            sp2BC->f[1],
                            sp2BC->f[2],
                            sp2BC->f[3],
                            sp2B8->v.x,
                            sp2B8->v.y,
                            sp2B8->v.z);
                        D_80046FA4 *= sp2B8->v.x;
                        break;
                    case 62:
                        hal_rotate_rpy_translate(
                            mtxStore.gbi,
                            sp2C0->f.v.x,
                            sp2C0->f.v.y,
                            sp2C0->f.v.z,
                            sp2BC->f[1],
                            sp2BC->f[2],
                            sp2BC->f[3]);
                        break;
                    case 63:
                        hal_rotate_rpy_translate_scale(
                            mtxStore.gbi,
                            sp2C0->f.v.x,
                            sp2C0->f.v.y,
                            sp2C0->f.v.z,
                            sp2BC->f[1],
                            sp2BC->f[2],
                            sp2BC->f[3],
                            sp2B8->v.x,
                            sp2B8->v.y,
                            sp2B8->v.z);
                        D_80046FA4 *= sp2B8->v.x;
                        break; // goto L80012CA4
                    case 41:
                        gSPMvpRecalc(sp2D4++);
                        // gSPInsertMatrix?
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0[0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0[1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0[2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0[3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0[4]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0[5]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0[8]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0[9]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0[10]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0[11]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0[12]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0[13]);
                        // this is different
                        continue;
                    case 42:
                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, D_80046FA0[0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, D_80046FA0[1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, D_80046FA0[2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, D_80046FA0[3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, D_80046FA0[4]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, D_80046FA0[5]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, D_80046FA0[8]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, D_80046FA0[9]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, D_80046FA0[10]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, D_80046FA0[11]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, D_80046FA0[12]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, D_80046FA0[13]);

                        continue;
                    case 43:
                    {
                        f32 f18 = D_80046FA4 * SQUARE(arg1->unk3C.v.y);

                        D_80046FA4 *= arg1->unk3C.v.x;

                        D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4;
                        D_80046FE8[1][1] = D_80046FA8[1][1] * f18;
                        D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                        D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

                        D_80046FE8[0][1] = 0.0f;
                        D_80046FE8[0][2] = 0.0f;
                        D_80046FE8[0][3] = 0.0f;
                        D_80046FE8[1][0] = 0.0f;
                        D_80046FE8[1][2] = 0.0f;
                        D_80046FE8[1][3] = 0.0f;
                        D_80046FE8[2][0] = 0.0f;
                        D_80046FE8[2][1] = 0.0f;

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 44:
                    {
                        f32 f18 = D_80046FA4 * SQUARE(arg1->unk3C.v.y);

                        D_80046FA4 *= arg1->unk3C.v.x;

                        D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4;
                        D_80046FE8[1][1] = D_80046FA8[1][1] * f18;
                        D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                        D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

                        D_80046FE8[0][1] = 0.0f;
                        D_80046FE8[0][2] = 0.0f;
                        D_80046FE8[0][3] = 0.0f;
                        D_80046FE8[1][0] = 0.0f;
                        D_80046FE8[1][2] = 0.0f;
                        D_80046FE8[1][3] = 0.0f;
                        D_80046FE8[2][0] = 0.0f;
                        D_80046FE8[2][1] = 0.0f;

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 45:
                    {
                        f32 sinY = sinf(arg1->unk28.f[1]); // sp1CC
                        f32 cosY = cosf(arg1->unk28.f[1]); // sp1C8 ?

                        // f2 * f8 -> f12
                        f32 f12 = D_80046FA4 * arg1->unk3C.v.y;
                        // f2 * f10 -> f4 store reload -> f2
                        D_80046FA4 *= arg1->unk3C.v.y;

                        D_80046FE8[0][2] = 0.0f;
                        D_80046FE8[1][2] = 0.0f;
                        D_80046FE8[0][3] = 0.0f;
                        D_80046FE8[1][3] = 0.0f;
                        D_80046FE8[2][0] = 0.0f;
                        D_80046FE8[2][1] = 0.0f;

                        D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4 * cosY;
                        D_80046FE8[1][0] = D_80046FA8[0][0] * D_80046FA4 * -sinY;
                        D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinY;
                        D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosY;
                        D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                        D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 46:
                    {
                        f32 sinZ = sinf(arg1->unk28.f[3]); // sp190
                        f32 cosZ = cosf(arg1->unk28.f[3]); // sp188 ?
                        f32 f12  = arg1->unk3C.v.y * D_80046FA4;

                        D_80046FA4 *= arg1->unk3C.v.x;

                        D_80046FE8[0][2] = 0.0f;
                        D_80046FE8[1][2] = 0.0f;
                        D_80046FE8[0][3] = 0.0f;
                        D_80046FE8[1][3] = 0.0f;
                        D_80046FE8[2][0] = 0.0f;
                        D_80046FE8[2][1] = 0.0f;

                        D_80046FE8[0][0] = D_80046FA8[0][0] * D_80046FA4 * cosZ;
                        D_80046FE8[1][0] = D_80046FA8[0][0] * D_80046FA4 * -sinZ;
                        D_80046FE8[0][1] = D_80046FA8[1][1] * f12 * sinZ;
                        D_80046FE8[1][1] = D_80046FA8[1][1] * f12 * cosZ;
                        D_80046FE8[2][2] = D_80046FA8[2][2] * D_80046FA4;
                        D_80046FE8[2][3] = D_80046FA8[2][3] * D_80046FA4;

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 47:
                    {
                        f32 f12 = D_80046FA4 * arg1->unk3C.v.y;

                        D_80046FA4 *= arg1->unk3C.v.x;

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

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 48:
                    {
                        f32 f12 = D_80046FA4 * arg1->unk3C.v.y;

                        D_80046FA4 *= arg1->unk3C.v.x;

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

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 49:
                    {
                        f32 f12 = D_80046FA4 * arg1->unk3C.v.y;

                        D_80046FA4 *= arg1->unk3C.v.x;

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

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    case 50:
                    {
                        f32 f12 = D_80046FA4 * arg1->unk3C.v.y;

                        D_80046FA4 *= arg1->unk3C.v.x;

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

                        hal_mtx_f2l(&D_80046FE8, mtxStore.gbi);

                        gSPMvpRecalc(sp2D4++);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, mtxStore.gbi->m[0][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, mtxStore.gbi->m[0][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, mtxStore.gbi->m[0][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, mtxStore.gbi->m[0][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, mtxStore.gbi->m[1][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, mtxStore.gbi->m[1][1]);

                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, mtxStore.gbi->m[2][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, mtxStore.gbi->m[2][1]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, mtxStore.gbi->m[2][2]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, mtxStore.gbi->m[2][3]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, mtxStore.gbi->m[3][0]);
                        gMoveWd(sp2D4++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, mtxStore.gbi->m[3][1]);

                        continue;
                    }
                    default:
                    {
                        if (mtx->unk04 >= 66 && D_800470AC != NULL) {
                            s32 (*fn)(Mtx *, struct DObj *, Gfx *);

                            if (arg1->unk4->unk0E != D_8003B6E8.parts[3]) {
                                fn = D_800470AC[mtx->unk04 - 66].unk04;
                            } else {
                                fn = D_800470AC[mtx->unk04 - 66].unk00;
                            }
                            // L80012C78
                            ret = fn(mtxStore.gbi, arg1, sp2D4);
                        }
                        // L80012C84
                        if (ret == 1) {
                            // offset pointer by 4 * un56?
                            arg1 += arg1->unk56;

                            continue;
                        }
                    }
                }
                // L80012CA4
                // L80012CA8
                if (mtx->unk05 == 1 || mtx->unk05 == 8) { mtx->unk05 = 2; }
            }
            // L80012CBC
            if (mtx->unk04 != 2) {
                if (sp2CC == 0 && (arg1->unk14 == NULL || arg1->unk8 != NULL)) {
                    // L80012D00
                    gSPMatrix(sp2D4++, mtxStore.gbi, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                } else {
                    // L80012D14
                    gSPMatrix(sp2D4++, mtxStore.gbi, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
                }
                // L80012D24
                sp2CC++;
            }
        }
        // L80012D30
        // else statement?
        // cap dl?
        // continue loop?
        // L80012D30
        // L80012D38
    }
    // L80012D4C
    *arg0 = sp2D4;
    return sp2CC;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80010D70.s")
#endif

#ifdef MIPS_TO_C
void func_80012D90(struct DObj *arg0, Gfx **arg1) {
    s32 count;
    s32 sp04;
    s32 sp14;
    struct MObj *mobj; // a1?
    Gfx *newDl;        // t2?
    Gfx *branchDl;     // a2 into v0??

    if (arg0->unk80 == NULL) { return; }

    gSPSegment((*arg1)++, 14, gMatrixHeap.ptr);

    count = 0;
    mobj  = arg0->unk80;
    while (mobj != NULL) {
        count++;
        mobj = mobj->next;
    }

    mobj     = arg0->unk80; // a1 for `mobj`
    newDl    = gMatrixHeap.ptr;
    branchDl = newDl + count;
    for (sp14 = 0; sp14 < count * 8; sp14 += 8) {
        // L80012E30
        s32 t1;
        f32 spB0;
        f32 spB4;
        f32 spB8;
        f32 spBC;
        f32 phi_f12; // spC0
        f32 phi_f2;  // spC4

        t1 = mobj->unk08.unk30 == 0 ? 0xA1 : mobj->unk08.unk30;

        // L80012E4C
        if (t1 & 0xE0) {
            phi_f2  = mobj->unk08.unk1C;
            phi_f12 = mobj->unk08.unk20;

            spBC = mobj->unk08.unk14;
            spB8 = mobj->unk08.unk18;
            spB4 = mobj->unk08.unk3C;
            spB0 = mobj->unk08.unk40;
            if (*(s32 *)&mobj->unk08.unk10 == 1) {
                spBC = (((spBC - mobj->unk08.unk24) + 1.0f) - mobj->unk08.unk28 * 0.5f) * 0.5f;
                spB4 = (((spB4 - mobj->unk08.unk44) + 1.0f) - mobj->unk08.unk28 * 0.5f) * 0.5f;
                phi_f2 *= 0.5f;
            }
        }
        // L80012EF8
        gSPBranchList(newDl++, branchDl);
        if (t1 & 4) {
            u16 *imgptr = mobj->unk08.unk2C[(s32)mobj->unk88];

            gDPSetTextureImage(branchDl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, imgptr);
            if (t1 & 3) {
                gDPTileSync(branchDl++);
                gDPSetTile(
                    branchDl++,
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
                    G_TX_NOLOD) gDPLoadSync(branchDl++);
                gDPLoadTLUTCmd(branchDl++, 5, ((u8 *)&mobj->unk08)[3] == 1 ? 255 : 15);
                gDPPipeSync(branchDl++);
            }
        }
        // L80012FD0
        if (t1 & 0x1000) { gSPLightColor(branchDl++, LIGHT_1, mobj->unk08.unk60); }
        // L80013010
        if (t1 & 0x2000) { gSPLightColor(branchDl++, LIGHT_2, mobj->unk08.unk64); }
        // L80013050
        if (t1 & 0x218) {
            if (t1 & 0x10) {
                s32 trunc = (s32)mobj->unk84;
                f32 val   = (mobj->unk84 - (f32)trunc) * 256.0f;
                gDPSetPrimColor(
                    branchDl++,
                    mobj->unk08.unk55,
                    (u32)val & 0xFF,
                    mobj->unk08.unk50,
                    mobj->unk08.unk51,
                    mobj->unk08.unk52,
                    mobj->unk08.unk53);
                mobj->unk80 = trunc;
                mobj->unk82 = trunc + 1;
            } else {
                // L80013170
                gDPSetPrimColor(
                    branchDl++,
                    mobj->unk08.unk55,
                    (u32)(mobj->unk84 * 255.0f) & 0xFF,
                    mobj->unk08.unk50,
                    mobj->unk08.unk51,
                    mobj->unk08.unk52,
                    mobj->unk08.unk53);
            }
        }
        // L80013250
        if (t1 & 0x400) {
            gDPSetEnvColor(
                branchDl++,
                mobj->unk08.unk58,
                mobj->unk08.unk59,
                mobj->unk08.unk5A,
                mobj->unk08.unk5B);
        }
        // L80013294
        if (t1 & 0x800) {
            gDPSetBlendColor(
                branchDl++,
                mobj->unk08.unk5C,
                mobj->unk08.unk5D,
                mobj->unk08.unk5E,
                mobj->unk08.unk5F);
        }
        // L800132D8
        if (t1 & 0x12) {
            s32 imgsize;

            imgsize =
                mobj->unk08.unk33 == 3 ? G_IM_SIZ_32b : G_IM_SIZ_16b; // or a one case switch..?
            gDPSetTextureImage(
                branchDl++,
                mobj->unk08.unk32,
                imgsize,
                1,
                ((void **)(&mobj->unk08.unk04))[mobj->unk82]);
            if (t1 & 0x11) {
                gDPLoadSync(branchDl++);
                switch (mobj->unk08.unk33) {
                    case G_IM_SIZ_4b:
                    {
                        u16 lrs = (((mobj->unk08.unk36 * mobj->unk08.unk34) + 3) / 4) - 1;
                        s32 dxt;

                        if (mobj->unk08.unk34 < 0) {
                            dxt = 15;
                        } else {
                            dxt = mobj->unk08.unk34;
                        }

                        dxt /= 16;
                        if (dxt <= 0) { dxt = 1; }

                        dxt = (MIN(dxt, 1) + 0x7FF) / MIN(dxt, 1);

                        gDPLoadBlock(branchDl++, 6, 0, 0, lrs, dxt);
                        break;
                    }
                    case G_IM_SIZ_8b:
                    {
                        u16 lrs = (((mobj->unk08.unk36 * mobj->unk08.unk34) + 1) / 2) - 1;
                        s32 dxt;

                        dxt = mobj->unk08.unk34;
                        if (dxt <= 0) { dxt += 7; }
                        dxt /= 8;
                        dxt = (MIN(dxt, 1) + 0x7FF) / MIN(dxt, 1);

                        gDPLoadBlock(branchDl++, 6, 0, 0, lrs, dxt);
                        break;
                    }
                    case G_IM_SIZ_16b:
                    {
                        // L80013508
                        u16 lrs = (mobj->unk08.unk36 * mobj->unk08.unk34) - 1;
                        s32 dxt;

                        dxt = mobj->unk08.unk34 * 2;
                        if (dxt <= 0) { dxt += 7; }
                        dxt /= 8;
                        dxt = (MIN(dxt, 1) + 0x7FF) / MIN(dxt, 1);

                        gDPLoadBlock(branchDl++, 6, 0, 0, lrs, dxt);
                        break;
                    }
                    case G_IM_SIZ_32b:
                    {
                        // L800135BC
                        u16 lrs = (mobj->unk08.unk36 * mobj->unk08.unk34) - 1;

                        s32 dxt;

                        dxt = mobj->unk08.unk34 * 4;
                        if (dxt <= 0) { dxt += 7; }
                        dxt /= 8;
                        dxt = (MIN(dxt, 1) + 0x7FF) / MIN(dxt, 1);

                        gDPLoadBlock(branchDl++, 6, 0, 0, lrs, dxt);
                        break;
                    }
                }
                // L8001366C
                gDPLoadSync(branchDl++);
            }
        }
        // L80013684
        if (t1 & 0x11) {
            gDPSetTextureImage(
                branchDl++,
                mobj->unk08.unk02,
                mobj->unk08.unk03,
                1,
                ((void **)(&mobj->unk08.unk04))[mobj->unk80]);
        }
        // L800136D8
        if (t1 & 0x20) {
            s32 uls; // phi_a0
            s32 ult; // phi_v0

            if (mobj->unk08.unk10 == 2) {
                if (ABSF(phi_f2) > 0.000015259022f) {
                    uls = (((f32)mobj->unk08.unk0C * spBC) / phi_f2) * 4.0f;
                } else {
                    // L80013760
                    uls = 0.0f;
                }
                // L8001376C

                if (ABSF(phi_f12) > 0.000015259022f) {
                    ult = (((f32)mobj->unk08.unk0E * spB8) / phi_f12) * 4.0f;

                } else {
                    // L800137D8
                    uls = 0.0f;
                }
                // L800137E0

                if (uls < 0) { uls = 0; }

                if (ult < 0) { ult = 0; }
            } else {
                // L80013800
                if (ABSF(phi_f2) > 0.000015259022f) {
                    uls = ((((f32)mobj->unk08.unk0C * spBC) + (f32)mobj->unk08.unk0A) / phi_f2)
                        * 4.0f;
                } else {
                    uls = 0.0f;
                }
                // L8001389C
                if (ABSF(phi_f12) > 0.000015259022f) {
                    ult =
                        ((((((1.0f - phi_f12) - spB8) * (f32)mobj->unk08.unk0E)
                           + (f32)mobj->unk08.unk0A)
                          / phi_f12)
                         * 4.0f);
                } else {
                    ult = 0.0f;
                }
            }
            // L80013940

            gDPSetTileSize(
                branchDl++,
                0,
                uls,
                ult,
                (mobj->unk08.unk0C - 1) * 4 + uls,
                (mobj->unk08.unk0E - 1) * 4 + uls);
        }
        // L80013994
        if (t1 & 0x40) {
            s32 uls; // phi_a0
            s32 ult; // phi_v0

            if (ABSF(phi_f2) > 0.000015259022f) {
                uls = ((((f32)mobj->unk08.unk38 * spB4) + (f32)mobj->unk08.unk0A) / phi_f2) * 4.0f;
            } else {
                // L80013A34
                uls = 0.0f;
            }
            // L80013A40
            if (ABSF(phi_f12) > 0.000015259022f) {
                ult =
                    (((((1.0f - phi_f12) - spB0) * (f32)mobj->unk08.unk3A) + (f32)mobj->unk08.unk0A)
                     / phi_f12)
                    * 4.0f;
            } else {
                // L80013ADC
                ult = 0.0f;
            }
            // L80013AE8
            gDPSetTileSize(
                branchDl++,
                1,
                uls,
                ult,
                (mobj->unk08.unk38 - 1) * 4 + uls,
                (mobj->unk08.unk3A - 1) * 4 + uls);
        }
        // L80013B40
        if (t1 & 0x80) {
            s32 s, t;

            if (mobj->unk08.unk10 == 2) {
                if (ABSF(phi_f2) > 0.000015259022f) {
                    s = (f32)(mobj->unk08.unk0C * 64) / phi_f2;
                } else {
                    // L80013BB8
                    s = 0.0f;
                }
                // L80013BC4
                if (ABSF(phi_f12) > 0.000015259022f) {
                    t = (f32)(mobj->unk08.unk0E * 64) / phi_f12;
                } else {
                    // L80013C18
                    t = 0.0f;
                }
            } else {
                // L80013C24
                if (ABSF(phi_f2) > 0.000015259022f) {
                    s = (2097152.0 / (f32)mobj->unk08.unk08) / phi_f2;
                } else {
                    // L80013C94
                    s = 0.0f;
                }
                // L80013CA0
                if (ABSF(phi_f12) > 0.000015259022f) {
                    t = (2097152.0 / (f32)mobj->unk08.unk08) / phi_f12;
                } else {
                    t = 0.0f;
                }
            }
            // L80013D18
            if (s > 0xFFFF) { s = 0xFFFFF; }
            // L80013D28
            if (t > 0xFFFF) { t = 0xFFFFF; }
            // L80013D34

            gSPTexture(branchDl++, s, t, 0, 0, G_ON);
        }
        // L80013D4C
        gSPEndDisplayList(branchDl++);
    }
    // L80013D80
    gMatrixHeap.ptr = (u8 *)gMatrixHeap.ptr + (count * 8); // sizeof(Gfx)..?
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80012D90.s")
#endif

void func_80013D90(struct GObjCommon *gobj, Gfx **dlHead) {
    s32 ret;
    struct DObj *dobj;

    dobj = gobj->unk74;

    D_80046FA4 = 1.0f;

    if (dobj->unk50 != 0) {
        if (dobj->unk54 == 0) {
            ret = func_80010D70(dlHead, dobj);
            func_80012D90(dobj, dlHead);
            gSPDisplayList((*dlHead)++, dobj->unk50);

            if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix((*dlHead)++, G_MTX_MODELVIEW);
            }
        }
    }
}

void func_80013E68(struct GObjCommon *gobj) {
    func_80013D90(gobj, &gpDisplayListHead[0]);
}

void func_80013E8C(struct GObjCommon *gobj) {
    func_80013D90(gobj, &gpDisplayListHead[1]);
}

void unref_80013EB0(struct GObjCommon *gobj) {
    func_80013D90(gobj, &gpDisplayListHead[2]);
}

void unref_80013ED4(struct GObjCommon *gobj) {
    func_80013D90(gobj, &gpDisplayListHead[3]);
}

void func_80013EF8(struct DObj *dobj) {
    s32 ret;
    struct DObj *curr;
    f32 sp24;

    if (!(dobj->unk54 & 2)) {
        sp24 = D_80046FA4;
        ret  = func_80010D70(gpDisplayListHead, dobj);

        if (dobj->unk50 != 0 && !(dobj->unk54 & 1)) {
            func_80012D90(dobj, gpDisplayListHead);
            gSPDisplayList((gpDisplayListHead[0])++, dobj->unk50);
        }

        if (dobj->unk10 != NULL) { func_80013EF8(dobj->unk10); }

        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix((gpDisplayListHead[0])++, G_MTX_MODELVIEW);
        }
        D_80046FA4 = sp24;
    }

    if (dobj->unkC == NULL) {
        curr = dobj->unk8;

        while (curr != NULL) {
            func_80013EF8(curr);
            curr = curr->unk8;
        }
    }
}

void func_80014038(struct GObjCommon *gobj) {
    D_80046FA4 = 1.0f;
    func_80013EF8(gobj->unk74);
}

void func_80014068(struct DObj *dobj, struct Unk50DlLink *arg1);
#ifdef MIPS_TO_C
void func_80014068(struct DObj *dobj, struct Unk50DlLink *arg1) {
    s32 sp34;
    s32 sp30;
    Gfx *sp2C; // start (t1)
    Gfx *sp28; // end
    struct Unk50DlLink *curr;
    void *sp20;

    sp30 = -1;
    if (arg1 != NULL && dobj->unk54 == 0) {
        sp2C = gpDisplayListHead[arg1->listId];
        sp34 = func_80010D70(&gpDisplayListHead[arg1->listId], dobj);
        sp28 = gpDisplayListHead[arg1->listId];

        if (arg1->dl != NULL) {
            sp20 = gMatrixHeap.ptr;
            func_80012D90(dobj, &gpDisplayListHead[arg1->listId]);
            gSPDisplayList((gpDisplayListHead[0])++, arg1->dl);

            if (sp34 != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix((gpDisplayListHead[0])++, G_MTX_MODELVIEW);
            }
        } else {
            // L800141AC
            sp30 = arg1->listId;
        }
        // L800141BC
        curr = arg1; // a3?
        while ((++curr)->listId != 4) {
            // L800141D8
            if (curr->dl != NULL) {
                Gfx *csr = sp2C; // v0
                s32 i;

                if (sp2C != sp28) {
                    uintptr_t listEnd; // a0
                    uintptr_t size;    // a1

                    size    = ((uintptr_t)sp28 - (uintptr_t)sp2C) & 31;
                    listEnd = (uintptr_t)sp2C + size;
                    if (size != 0) {
                        // L800141F8
                        do {
                            *gpDisplayListHead[curr->listId] = *csr++;
                            gpDisplayListHead[curr->listId]++;
                        } while ((uintptr_t)csr != listEnd);

                        if (csr == sp28) { goto L8001432C; }
                    }
                    // L80014240
                    do {
                        for (i = 0; i < 4; i++) { *gpDisplayListHead[curr->listId]++ = *csr++; }
                    } while ((uintptr_t)csr != sp28);
                }
            L8001432C:
                if (dobj->unk80 != NULL) { gSPSegment(gpDisplayListHead[curr->listId]++, 14, sp20); }
                // L80014360
                gSPDisplayList(gpDisplayListHead[curr->listId]++, curr->dl);
                if (sp34 != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                    gSPPopMatrix((gpDisplayListHead[curr->listId])++, G_MTX_MODELVIEW);
                }
            }
            // L800143C4
        }
        // L800143D0
        if (sp30 != -1) { gpDisplayListHead[sp30] = sp2C; }
    }
    // L800143E8
    // L800143EC
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80014068.s")
#endif

void func_800143FC(struct GObjCommon *obj) {
    struct DObj *dobj;

    D_80046FA4 = 1.0f;
    dobj       = obj->unk74;
    func_80014068(dobj, (void *)dobj->unk50);
}

void func_80014430(void) {
    s32 i;

    D_800470B0 = D_800470C8;

    for (i = 0; i < ARRAY_COUNT(D_800470B8); i++) { D_800470B8[i] = D_800470C8; }
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
        sp48 = func_80010D70(&D_800470B0, arg0);

        if (sp44 != NULL && (arg0->unk54 & 1) == 0) {
            while (sp44->listId != 4) {
                // L800144FC
                if (sp44->dl != NULL) {
                    while (D_800470B0 != D_800470B8[sp44->listId]) {
                        // L8001451C
                        *gpDisplayListHead[sp44->listId] = *D_800470B8[sp44->listId];
                        gpDisplayListHead[sp44->listId]++;
                        D_800470B8[sp44->listId]++;
                    }
                    // L8001457C
                    if (arg0->unk80 != NULL) {
                        if (s4 == NULL) {
                            s4 = gMatrixHeap.ptr;
                            func_80012D90(arg0, &gpDisplayListHead[sp44->listId]);
                        } else {
                            // L800145C8
                            gSPSegment(gpDisplayListHead[sp44->listId]++, 14, sp44->dl);
                        }
                    }
                    // L800145F0
                    gSPDisplayList(gpDisplayListHead[sp44->listId]++, sp44->dl);
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
                    gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
                }
            }
            // L800146C0
            if ((uintptr_t)D_800470B0 < (uintptr_t)D_800470B8[i + 1]) {
                D_800470B8[i + 1] = D_800470B0;
                if (sp48 != 0 && ((uintptr_t)arg0->unk14 == 1 || arg0->unk8 != NULL)) {
                    // L800146A8
                    gSPPopMatrix(gpDisplayListHead[i + 1]++, G_MTX_MODELVIEW);
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
    struct OMCamera *other;

    other = D_80046A58->unk74;

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
            ret = func_80010D70(gpDisplayListHead, dobj);
            func_80012D90(dobj, gpDisplayListHead);
            gSPDisplayList(gpDisplayListHead[0]++, sp24->dl);

            if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
        ret  = func_80010D70(gpDisplayListHead, dobj);

        if (dls != NULL && dls[D_800472A8] != NULL) {
            if (!(dobj->unk54 & 1)) {
                func_80012D90(dobj, gpDisplayListHead);
                gSPDisplayList(gpDisplayListHead[0]++, dls[D_800472A8]);
            }
        }
        // L800149D4
        if (dobj->unk10 != NULL) { func_8001490C(dobj->unk10); }
        // L800149F4
        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
            ret = func_80010D70(gpDisplayListHead, dobj);

            if (sp2C->dl != NULL && !(dobj->unk54 & 1)) {
                func_80012D90(dobj, gpDisplayListHead);
                gSPDisplayList(gpDisplayListHead[0]++, sp2C->dl);
            }
            // L80014B9C
            if (dobj->unk10 != NULL) { func_8001490C(dobj->unk10); }
            // L80014BB4
            if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
            func_80014068(dobj, list->link);
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
        ret  = func_80010D70(&D_800470B0, dobj);

        if (s0 != NULL && sp40 != NULL && !(dobj->unk54 & 1)) {
            // s0 is sp40->listId (or that x4)
            // s1 is gpDisplayListHead
            // s2 is D_800470B0
            // a3 is D_800470B8
            while (sp40->listId != 4) {
                // L80014D90
                if (sp40->dl != NULL) {
                    while (D_800470B0 != D_800470B8[sp40->listId]) {
                        // L80014DB0
                        *gpDisplayListHead[sp40->listId] = *D_800470B8[sp40->listId];
                        gpDisplayListHead[sp40->listId]++;
                        D_800470B8[sp40->listId]++;
                    }
                    // L80014E10
                    if (dobj->unk80 != NULL) {
                        if (s4 == NULL) {
                            s4 = gMatrixHeap.ptr;
                            func_80012D90(dobj, &gpDisplayListHead[sp40->listId]);
                        } else {
                            // L80014E5C
                            gSPSegment(gpDisplayListHead[sp40->listId]++, 14, s4);
                        }
                        // L80014E80
                    }
                    // L80014E84
                    gSPDisplayList(gpDisplayListHead[sp40->listId]++, sp40->dl);
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
                    gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
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
            ret  = func_80010D70(&D_800470B0, dobj);
            if (sp34 != NULL && !(dobj->unk54 & 1)) {
                while (sp34->listId != 4) {
                    // L800150F8
                    // D_800470B8 is a3
                    // gpDisplayListHead is s1
                    if (sp34->dl != NULL) {
                        while (D_800470B0 != D_800470B8[sp34->listId]) {
                            // L80015118
                            *gpDisplayListHead[sp34->listId] = *D_800470B8[sp34->listId];
                            gpDisplayListHead[sp34->listId]++;
                            D_800470B8[sp34->listId]++;
                        }
                        // L80015178

                        if (dobj->unk80 != NULL) {
                            if (segaddr == NULL) {
                                segaddr = gMatrixHeap.ptr;
                                func_80012D90(dobj, &gpDisplayListHead[sp34->listId]);
                            } else {
                                // L800151C4
                                gSPSegment(gpDisplayListHead[sp34->listId]++, 14, segaddr);
                            }
                            // L800151E8
                        }
                        // L800151EC
                        gSPDisplayList(gpDisplayListHead[sp34->listId]++, sp34->dl);
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
                        gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
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
            gSPDisplayList(gpDisplayListHead[0]++, s0[0]);
        }

        ret = func_80010D70(gpDisplayListHead, dobj);

        if (s0 != NULL && s0[1] != NULL && !(dobj->unk54 & 1)) {
            func_80012D90(dobj, gpDisplayListHead);
            gSPDisplayList(gpDisplayListHead[0]++, s0[1]);
        }

        if (dobj->unk10 != NULL) { func_80015358(dobj->unk10); }

        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
        ret  = func_80010D70(&D_800470B0, dobj);

        if (sp44 != NULL && !(dobj->unk54 & 1)) {
            while (sp44->id != 4) {
                // L800155C4
                // s1 is &gpDisplayListHead
                // a3 is &D_800470B8
                if (sp44->dl2 != NULL) {
                    if (sp44->dl1 != NULL) { gSPDisplayList(gpDisplayListHead[sp44->id]++, sp44->dl1); }
                    // L80015600
                    while (D_800470B0 != D_800470B8[sp44->id]) {
                        // L80015614
                        *gpDisplayListHead[sp44->id] = *D_800470B8[sp44->id];
                        gpDisplayListHead[sp44->id]++;
                        D_800470B8[sp44->id]++;
                    }
                    // L80015674
                    if (dobj->unk80 != NULL) {
                        if (segaddr == NULL) {
                            segaddr = gMatrixHeap.ptr;
                            func_80012D90(dobj, &gpDisplayListHead[sp44->id]);
                        } else {
                            gSPSegment(gpDisplayListHead[sp44->id]++, 14, segaddr);
                        }
                        // L800156E8
                        gSPDisplayList(gpDisplayListHead[sp44->id]++, sp44->dl2);
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
                    gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
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
    if (!(dobj->unk54 & 2)) {
        sp24 = D_80046FA4;
        if (s0 != NULL) { sp20 = s0[D_800472A8]; }
        // L800158DC
        if (s0 != NULL && sp20[0] != NULL && !(dobj->unk54 & 1)) {
            gSPDisplayList(gpDisplayListHead[0]++, sp20[0]);
        }
        // L8001591C
        ret = func_80010D70(gpDisplayListHead, dobj);
        if (s0 != NULL && sp20[1] != NULL && !(dobj->unk54 & 1)) {
            func_80012D90(dobj, gpDisplayListHead);
            gSPDisplayList(gpDisplayListHead[0]++, sp20[1]);
        }
        // L800159A4
        if (dobj->unk10 != NULL) { func_80015890(dobj->unk10); }
        // L800159C8
        if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
            gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
            // s0 is gpDisplayListHead
            ret = func_80010D70(gpDisplayListHead, dobj);
            if (sp2C->dl != NULL && !(dobj->unk54 & 1)) {
                func_80012D90(dobj, gpDisplayListHead);
                gSPDisplayList(gpDisplayListHead[0]++, sp2C->dl);
            }
            // L80015B70
            if (dobj->unk10 != NULL) { func_80015890(dobj->unk10); }
            // L80015B88
            if (ret && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                gSPPopMatrix(gpDisplayListHead[0]++, G_MTX_MODELVIEW);
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
        ret  = func_80010D70(&D_800470B0, dobj);

        if (s0 != NULL && sp40 != NULL && !(dobj->unk54 & 1)) {
            // s1 is gpDisplayListHead
            // a3 is D_800470B8
            while (sp40->id != 4) {
                // L80015CD0
                if (sp40->dl2 != NULL) {
                    if (sp40->dl1 != NULL) { gSPDisplayList(gpDisplayListHead[sp40->id]++, sp40->dl1); }
                    // L80015D0C
                    while (D_800470B0 != D_800470B8[sp40->id]) {
                        *gpDisplayListHead[sp40->id] = *D_800470B8[sp40->id];
                        gpDisplayListHead[sp40->id]++;
                        D_800470B8[sp40->id]++;
                    }
                    // L80015D80
                    if (dobj->unk80 != NULL) {
                        if (segaddr == NULL) {
                            segaddr = gMatrixHeap.ptr;
                            func_80012D90(dobj, &gpDisplayListHead[sp40->id]);
                        } else {
                            // L80015DD0
                            gSPSegment(gpDisplayListHead[sp40->id]++, 14, segaddr);
                        }
                        // L80015DF4
                    }
                    // L80015DF8
                    gSPDisplayList(gpDisplayListHead[sp40->id]++, sp40->dl2);
                }
                // L80015E14
                sp40++;
            }
        }
        // L80015E24
        // s1 is gpDisplayListHead
        if (dobj->unk10 != NULL) { func_80015C0C(dobj->unk10); }
        // L80015E48
        D_800470B0 = sp3C;
        for (i = 0; i < ARRAY_COUNT(gpDisplayListHead); i++) {
            // a2 is D_800470B8
            if (D_800470B0 < D_800470B8[i]) {
                D_800470B8[i] = D_800470B0;
                if (ret != 0 && ((uintptr_t)dobj->unk14 == 1 || dobj->unk8 != NULL)) {
                    gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
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
            ret      = func_80010D70(&D_800470B0, dobj);

            if (link != NULL && !(dobj->unk54 & 1)) {
                // s1 is gpDisplayListHead
                // a3 is D_800470B8
                while (link->listId != 4) {
                    // s0 is link->listId (* 4)
                    if (link->dl != NULL) {
                        while (D_800470B0 != D_800470B8[link->listId]) {
                            *gpDisplayListHead[link->listId] = *D_800470B8[link->listId];
                            gpDisplayListHead[link->listId]++;
                            D_800470B8[link->listId]++;
                        }
                        // L800160E8
                        if (dobj->unk80 != NULL) {
                            if (segaddr == NULL) {
                                segaddr = gMatrixHeap.ptr;
                                func_80012D90(dobj, &gpDisplayListHead[link->listId]);
                            } else {
                                gSPSegment(gpDisplayListHead[link->listId]++, 14, segaddr);
                            }
                        }
                        // L8001615C
                        gSPDisplayList(gpDisplayListHead[link->listId]++, link->dl);
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
                        gSPPopMatrix(gpDisplayListHead[i]++, G_MTX_MODELVIEW);
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
            sobj->sp.rsp_dl_next = gpDisplayListHead[0];
            spDraw(&sobj->sp);
            // spDraw adds a gSPEndDisplayList
            // so move the cursor back one Gfx, I guess?
            gpDisplayListHead[0] = sobj->sp.rsp_dl_next - 1;
        }
        sobj = sobj->unk08;
    }
}

#ifdef NON_MATCHING
// nonmatching: there is an unnecessary divide by zero check that is not being eliminated
void func_80016338(Gfx **dlist, struct OMCamera *cam, s32 arg2) {
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

void func_8001663C(Gfx **dlist, struct OMCamera *cam, s32 arg2);
#ifdef NON_MATCHING
// nonmatching: this looks like its close, but needs some playing around
void func_8001663C(Gfx **dlist, struct OMCamera *cam, s32 arg2) {
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
void func_8001783C(struct OMCamera *cam, s32 cbarg) {
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

    for (i = 0; i < ARRAY_COUNT(gpDisplayListHead); i++) {
        // L8001799C
        sp38[i] = gpDisplayListHead[i];
        gpDisplayListHead[i] += 2;
    }

    func_80017868(obj, idx, arg2);

    for (i = 0; i < ARRAY_COUNT(gpDisplayListHead); i++) {
        // L80017A04
        if (gpDisplayListHead[i] == sp38[i] + 2) {
            gpDisplayListHead[i] -= 2;
            D_80046A88[idx].unk04[i] = NULL;
        } else {
            // L80017A28
            gSPEndDisplayList(gpDisplayListHead[i]++);

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

    for (i = 0; i < ARRAY_COUNT(gpDisplayListHead); i++) {
        if (D_80046A88[idx].unk04[i] != NULL) {
            gSPDisplayList(gpDisplayListHead[i]++, D_80046A88[idx].unk04[i]);
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
                if (D_8003B6E8.parts[3] == D_80046A88[idx].unk00) {
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

void func_80017CC8(struct OMCamera *cam) {
    if (cam->unk80 & 0x04) { func_800057C8(); }

    if (cam->unk80 & 0x10) {
        func_800053CC();
        func_80004F78();
    }

    if (cam->unk80 & 0x40) { func_800053CC(); }
}

void func_80017D3C(struct GObjCommon *obj, Gfx **dlists, s32 dlIdx) {
    struct OMCamera *cam;

    cam = obj->unk74;
    func_8001663C(dlists, cam, dlIdx);
    func_80016EDC(dlists, cam);
    func_8001783C(cam, dlIdx);
    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);
    func_80017CC8(cam);
}

void func_80017DBC(struct GObjCommon *obj) {
    func_80017D3C(obj, &gpDisplayListHead[0], 0);
}

void unref_80017DE4(struct GObjCommon *obj) {
    func_80017D3C(obj, &gpDisplayListHead[1], 1);
}

void unref_80017E0C(struct GObjCommon *obj) {
    func_80017D3C(obj, &gpDisplayListHead[2], 2);
}

void unref_80017E34(struct GObjCommon *obj) {
    func_80017D3C(obj, &gpDisplayListHead[3], 3);
}

void unref_80017E5C(void) {
    struct OMCamera *cam;

    cam = D_80046A58->unk74;
    func_800053CC();
    func_80004F78();
    func_8001663C(gpDisplayListHead, cam, 0);
    func_80016EDC(gpDisplayListHead, cam);
    func_8001783C(cam, 0);
}

#ifdef NON_MATCHING
// nonmatching: minor instruction reordering + regalloc
void func_80017EC0(struct GObjCommon *obj) {
    struct OMCamera *cam; // s5
    s32 i;

    cam = obj->unk74;
    // s0 is gpDisplayListHead
    func_8001663C(gpDisplayListHead, cam, 0);
    D_800472C0 = gpDisplayListHead[0] + 1;
    gSPDisplayList(gpDisplayListHead[0], gpDisplayListHead[0] + 2);
    gpDisplayListHead[0] += 2;

    func_80016EDC(gpDisplayListHead, cam);
    gSPEndDisplayList(gpDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gpDisplayListHead[0]);

    func_8001783C(cam, 0);
    if (cam->unk80 & 0x20) { func_80016338(&gpDisplayListHead[1], cam, 1); }
    // L80017FA4
    for (i = 1; i < ARRAY_COUNT(gpDisplayListHead); i++) {
        // L80017FBC
        gpDisplayListHead[i] = D_800472B0[i] = gpDisplayListHead[i] + 1;
    }

    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);

    for (i = 1; i < 4; i++) {
        // L8001801C
        Gfx *start = gpDisplayListHead[i]; // s0 into s4

        // s1 is gpDisplayListHead[i]
        // s2 is D_800472B0[i]
        // s3 is i
        if (D_800472B0[i] == start) {
            gpDisplayListHead[i] = start - 1;
        } else {
            // L8001803C
            gpDisplayListHead[i] = start + 1;
            gSPDisplayList(D_800472B0[i] - 1, gpDisplayListHead[i]);
            if (i != 1 || !(cam->unk80 & 0x20)) { func_80016338(&gpDisplayListHead[i], cam, i); }
            // L80018070
            gSPDisplayList(gpDisplayListHead[i]++, (D_800472C0 + 1));
            func_8001783C(cam, i);
            gSPEndDisplayList(gpDisplayListHead[i]++);
            gSPBranchList(start, gpDisplayListHead[i]);
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
    struct OMCamera *cam; // s5
    s32 i;

    cam = D_80046A58->unk74;

    for (i = 1; i < 4; i++) {
        Gfx *start; // s1 into s4
        // s0 is &gpDisplayListHead[i]
        // s4 is &D_800472B0[i]
        // s7 is &D_800472C0

        start = gpDisplayListHead[i];

        if (D_800472B0[i] == start) {
            gpDisplayListHead[i] = start - 1;
        } else {
            // L8001818C
            gpDisplayListHead[i] = start + 1;
            gSPDisplayList(D_800472B0[i] - 1, gpDisplayListHead[i]);
            func_80016338(&gpDisplayListHead[i], cam, i);
            gSPDisplayList(gpDisplayListHead[i]++, D_800472C0 + 1);
            func_8001783C(cam, i);
            gSPEndDisplayList(gpDisplayListHead[i]++);
            gSPBranchList(start, gpDisplayListHead[i]);
        }
        // L800181F8
    }
    func_800053CC();
    func_80004F78();
    func_8001663C(&gpDisplayListHead[0], cam, 0);
    D_800472C0 = gpDisplayListHead[0] + 1;
    gSPDisplayList(gpDisplayListHead[0], gpDisplayListHead[0] + 2);
    gpDisplayListHead[0] += 2;
    func_80016EDC(gpDisplayListHead, cam);
    gSPEndDisplayList(gpDisplayListHead[0]++);
    gSPBranchList(D_800472C0, gpDisplayListHead[0]);
    func_8001783C(cam, 0);

    for (i = 1; i < ARRAY_COUNT(gpDisplayListHead); i++) { D_800472B0[i] = ++gpDisplayListHead[i]; }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/unref_8001810C.s")
#endif

#ifdef NON_MATCHING
// nonmatching: regalloc
void func_80018300(struct GObjCommon *obj) {
    struct OMCamera *cam;
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

    func_8001663C(&gpDisplayListHead[0], cam, 0);
    spInit(gpDisplayListHead);
    spScissor(xmin, xmax, ymin, ymax);
    func_80017B80(obj, cam->unk80 & 8 ? TRUE : FALSE);
    spFinish(gpDisplayListHead);
    gpDisplayListHead[0]--;
    gDPSetTexturePersp(gpDisplayListHead[0]++, G_TP_PERSP);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_05/func_80018300.s")
#endif
#pragma GCC diagnostic pop
