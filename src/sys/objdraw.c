#include <sys/obj.h>

#include <sys/taskman.h>
#include <sys/hal_gu.h>
#include <sys/video.h>

#include <config.h>
#include "libc/math.h"

/* These should no longer be required as they're included in obj.h
#include <macros.h>
#include <ssb_types.h>
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/sp.h>
#include <PR/ultratypes.h>
*/

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80046FA0 - gbi Mtx* ? pointer to some sort of matrix
Mtx *sODMatrixProjectL;

// 0x80046FA4
f32 gODScaleX; // Sprite scale / depth? Appears to overlap objects in its own DLLink, so maybe depth?

// 0x80046FA8
Mtx44f gODMatrixPerspF;

// 0x80046FE8
Mtx44f sODMatrixMvpF;

// 0x80047028
Mtx44f D_80047028;

// 0x80047068
Mtx44f D_80047068;

// 0x800470A8
s32 sODCameraMatrixMode;

// 0x800470AC
syMtxProcess *sODMatrixProcess;

// 0x800470B0
Gfx *D_800470B0;

// 0x800470B8
Gfx *D_800470B8[4];

// 0x800470C8
Gfx D_800470C8[60];

// 0x800472A8
s32 sODDetailLevel;

// 0x800472B0 - the first pointer in the set of four doesn't seem to be used too much
Gfx *D_800472B0[4];

// 0x800472C0
Gfx *D_800472C0;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// Belongs to objdraw?

// 0x8003B930
s32 dODCameraScissorTop = 10;

// 0x8003B934
s32 dODCameraScissorBottom = 10;

// 0x8003B938
s32 dODCameraScissorLeft = 10;

// 0x8003B93C
s32 dODCameraScissorRight = 10;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// New file here?
void gcSetCameraScissor(s32 top, s32 bottom, s32 left, s32 right)
{
    dODCameraScissorTop = top;
    dODCameraScissorBottom = bottom;
    dODCameraScissorLeft = left;
    dODCameraScissorRight = right;
}

void gcSetMatrixProcess(syMtxProcess *proc_mtx)
{
    sODMatrixProcess = proc_mtx;
}

void unref_80010740(void)
{
    return;
}

void func_80010748(Mtx *mtx_l, DObj *dobj, sb32 is_translate)
{
    Mtx44f mtx_f;
    f32 distx, disty, distz;

    CObj *cobj;
    f32 res;

    cobj = CObjGetStruct(gGCCurrentCamera);

    distx = dobj->translate.vec.f.x - cobj->vec.eye.x;
    disty = dobj->translate.vec.f.y - cobj->vec.eye.y;
    distz = dobj->translate.vec.f.z - cobj->vec.eye.z;

    res = 1.0F / sqrtf(SQUARE(distx) + SQUARE(disty) + SQUARE(distz));

    distx *= res;
    disty *= res;
    distz *= res;

    res = sqrtf(SQUARE(distx) + SQUARE(disty));

    mtx_f[0][3] = mtx_f[1][3] = mtx_f[2][3] = mtx_f[1][2] = 0.0F;
    mtx_f[3][3] = 1.0F;

    if (res != 0.0F)
    {
        f32 inv = (1.0F / res);

        mtx_f[2][2] = res;

        mtx_f[0][0] = -distx;

        mtx_f[1][0] = disty * inv;

        mtx_f[2][0] = -distx * distz * inv;
        mtx_f[0][1] = -disty;

        mtx_f[1][1] = -distx * inv;
        mtx_f[2][1] = -disty * distz * inv;

        mtx_f[0][2] = -distz;
    }
    else
    {
        mtx_f[1][0] = mtx_f[2][0] = mtx_f[0][1] = mtx_f[2][1] = mtx_f[0][2] = 0.0F;
        mtx_f[0][0] = mtx_f[1][1] = mtx_f[2][2] = 1.0F;
    }
    if (is_translate != FALSE)
    {
        mtx_f[3][0] = dobj->translate.vec.f.x;
        mtx_f[3][1] = dobj->translate.vec.f.y;
        mtx_f[3][2] = dobj->translate.vec.f.z;
    }
    else mtx_f[3][0] = mtx_f[3][1] = mtx_f[3][2] = 0.0F;

    syMatrixF2LFixedW(&mtx_f, mtx_l);
}

void func_80010918(Mtx *mtx_l, DObj *dobj, sb32 is_translate)
{
    Mtx44f mtx_f;
    f32 distx, disty, distz;

    CObj *cobj;
    f32 res;

    cobj = CObjGetStruct(gGCCurrentCamera);

    distx = dobj->translate.vec.f.x - cobj->vec.eye.x;
    disty = dobj->translate.vec.f.y - cobj->vec.eye.y;
    distz = dobj->translate.vec.f.z - cobj->vec.eye.z;

    res = 1.0F / sqrtf(SQUARE(distx) + SQUARE(disty) + SQUARE(distz));

    distx *= res;
    disty *= res;
    distz *= res;

    res = sqrtf(SQUARE(distx) + SQUARE(distz));

    mtx_f[0][3] = mtx_f[1][3] = mtx_f[2][3] = mtx_f[0][1] = 0.0F;
    mtx_f[3][3] = 1.0F;

    if (res != 0.0F)
    {
        f32 inv = (1.0F / res);

        mtx_f[0][0] = -distz * inv;
        mtx_f[1][0] = -disty * distx * inv;
        mtx_f[2][0] = -distx;

        mtx_f[1][1] = res;
        mtx_f[2][1] = -disty;

        mtx_f[0][2] = distx * inv;
        mtx_f[1][2] = -disty * distz * inv;
        mtx_f[2][2] = -distz;
    }
    else
    {
        mtx_f[1][0] = mtx_f[2][0] = mtx_f[2][1] = mtx_f[0][2] = mtx_f[1][2] = 0.0F;
        mtx_f[0][0] = mtx_f[1][1] = mtx_f[2][2] = 1.0F;
    }
    if (is_translate != FALSE)
    {
        mtx_f[3][0] = dobj->translate.vec.f.x;
        mtx_f[3][1] = dobj->translate.vec.f.y;
        mtx_f[3][2] = dobj->translate.vec.f.z;
    }
    else mtx_f[3][0] = mtx_f[3][1] = mtx_f[3][2] = 0.0F;

    syMatrixF2LFixedW(&mtx_f, mtx_l);
}

void func_80010AE8(Mtx *mtx_l, DObj *dobj, sb32 is_translate)
{
    Mtx44f mtx_f;
    f32 distx;
    f32 disty;

    CObj *cobj;
    f32 res;

    cobj = CObjGetStruct(gGCCurrentCamera);

    distx = dobj->translate.vec.f.x - cobj->vec.eye.x;
    disty = dobj->translate.vec.f.y - cobj->vec.eye.y;

    res = sqrtf(SQUARE(distx) + SQUARE(disty));

    mtx_f[0][3] = mtx_f[1][3] = mtx_f[2][3] = mtx_f[2][0] = mtx_f[2][1] = mtx_f[0][2] = mtx_f[1][2] = 0.0F;
    mtx_f[2][2] = mtx_f[3][3] = 1.0F;

    if (res != 0.0F)
    {
        f32 inv = 1.0F / res;

        distx *= inv;
        disty *= inv;

        mtx_f[0][0] = -distx;
        mtx_f[0][1] = -disty;
        mtx_f[1][0] = disty;
        mtx_f[1][1] = -distx;
    }
    else
    {
        mtx_f[1][0] = mtx_f[0][1] = 0.0F;
        mtx_f[0][0] = mtx_f[1][1] = 1.0F;
    }

    if (is_translate != FALSE)
    {
        mtx_f[3][0] = dobj->translate.vec.f.x;
        mtx_f[3][1] = dobj->translate.vec.f.y;
        mtx_f[3][2] = dobj->translate.vec.f.z;
    }
    else mtx_f[3][0] = mtx_f[3][1] = mtx_f[3][2] = 0;

    syMatrixF2LFixedW(&mtx_f, mtx_l);
}

void func_80010C2C(Mtx *mtx_l, DObj *dobj, sb32 is_translate)
{
    Mtx44f mtx_f;
    f32 distx;
    f32 distz;

    CObj *cobj;
    f32 res;

    cobj = CObjGetStruct(gGCCurrentCamera);

    distx = dobj->translate.vec.f.x - cobj->vec.eye.x;
    distz = dobj->translate.vec.f.z - cobj->vec.eye.z;

    res = sqrtf(SQUARE(distx) + SQUARE(distz));

    mtx_f[0][3] = mtx_f[1][3] = mtx_f[2][3] = mtx_f[1][0] = mtx_f[0][1] = mtx_f[1][2] = mtx_f[2][1] = 0.0F;
    mtx_f[1][1] = mtx_f[3][3] = 1.0F;

    if (res != 0.0F)
    {
        f32 inv = 1.0F / res;

        distx *= inv;
        distz *= inv;

        mtx_f[0][2] = distx;
        mtx_f[2][0] = -distx;
        mtx_f[0][0] = -distz;
        mtx_f[2][2] = -distz;
    }
    else
    {
        mtx_f[2][0] = mtx_f[0][2] = 0.0F;
        mtx_f[0][0] = mtx_f[2][2] = 1.0F;
    }

    if (is_translate != FALSE)
    {
        mtx_f[3][0] = dobj->translate.vec.f.x;
        mtx_f[3][1] = dobj->translate.vec.f.y;
        mtx_f[3][2] = dobj->translate.vec.f.z;
    }
    else mtx_f[3][0] = mtx_f[3][1] = mtx_f[3][2] = 0;

    syMatrixF2LFixedW(&mtx_f, mtx_l);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#ifdef NON_MATCHING
s32 gcPrepDObjMatrix(Gfx **dl, DObj *dobj)
{
    Gfx *current_dl = *dl;
    XObj *xobj;
    s32 sp2CC;
    s32 ret;
    gsMtxStore mtx_store;
    GCTranslate *translate;
    GCRotate *rotate; // fp (s8)
    GCTranslate *scale;
    f32 f12;
    s32 i;
    s32 j;
    s32 kind;

    sp2CC = 0;

    if (dobj->vec != NULL)
    {
        uintptr_t csr = (uintptr_t)dobj->vec->data;

        for (i = 0; i < ARRAY_COUNT(dobj->vec->kinds); i++)
        {
            switch (dobj->vec->kinds[i])
            {
            case 0:
                break;

            case 1:
                translate = (GCTranslate*)csr;
                csr += sizeof(*translate);
                break;

            case 2:
                rotate = (GCRotate*)csr;
                csr += sizeof(*rotate);
                break;

            case 3:
                scale = (GCScale*)csr;
                csr += sizeof(*scale);
                break;
            }
        }
    }
    for (i = 0; i < dobj->xobjs_num; i++) // Can use "j" here without any consequences
    {
        xobj = dobj->xobj[i]; // s3

        if (xobj != NULL)
        {
            mtx_store.gbi = &xobj->mtx;

            /* 
             * Non-matching part begins here. xobj->unk05 gets forced into v1 instead of v0, and xobj->kind into v0 instead of v1.
             * gSYTaskmanGraphicsHeap is also placed in v0 instead of v1; these two v0/v1 swaps are *mostly* unrelated. I have tried for hours,
             * but I cannot find a permutation that satisfies all requirements. The "closest" I got to a real match was by using
             * fabricated inline getters for xobj->kind in the first two >= 66 comparisons, which bloated the stack frame too much,
             * and of course also generated a stub that I reckon will not appear in this TU. I have just about given up on this function,
             * but I do not feel too much remorse for doing so; it is functionally equivalent and all instructions match at the very least.
             * 
             * If a brave volunteer would like to try in the future (so you either get a light bulb above your head or so you can avoid wasting your time), here's what I've tried:
             *     - making a variable for xobj->kind or xobj->unk05 
             *     - a bunch of permutations regarding how gSYTaskmanGraphicsHeap.ptr is advanced (gSYTaskmanGraphicsHeap.ptr++, gSYTaskmanGraphicsHeap.size += sizeof(Mtx44f), etc.)
             *     - the C address hack "*(type*)&" to get xobj->kind and xobj->unk05
             *     - making a u8* variable to xobj->kind and xobj->unk05 and dereferencing that
             *     - various control flow permutations in an attempt to bump regalloc
             *     - more that I am forgetting
             * 
             * If there is one last clue, it should be that the permuter cannot find any solutions. That tells us what the solution *isn't*.
             * Good luck!
             */

            if (xobj->unk05 != 2)
            {
                if (xobj->unk05 == 4)
                {
                    if (dobj->parent_gobj->frame_draw_last != (u8)dSYTaskmanFrameDrawCount)
                    {
                        *mtx_store.p = gSYTaskmanGraphicsHeap.ptr;
                        gSYTaskmanGraphicsHeap.ptr = (mtx_store.f = gSYTaskmanGraphicsHeap.ptr) + 1;
                    }
                    else
                    {
                        switch (xobj->kind)
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
                            gSYTaskmanGraphicsHeap.ptr = (mtx_store.gbi = gSYTaskmanGraphicsHeap.ptr) + 1;
                            break;

                        default:
                            if (xobj->kind >= 66)
                            {
                                gSYTaskmanGraphicsHeap.ptr = (mtx_store.f = gSYTaskmanGraphicsHeap.ptr) + 1;
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
                else if (gSYTaskmanTaskID > 0)
                {
                    gSYTaskmanGraphicsHeap.ptr = (mtx_store.f = gSYTaskmanGraphicsHeap.ptr) + 1;
                }
                else if (dobj->parent_gobj->frame_draw_last == (u8)dSYTaskmanFrameDrawCount)
                {
                    switch (xobj->kind)
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
                        gSYTaskmanGraphicsHeap.ptr = (mtx_store.gbi = gSYTaskmanGraphicsHeap.ptr) + 1;
                        break;

                    default:
                        if (xobj->kind >= 66)
                        {
                            gSYTaskmanGraphicsHeap.ptr = (mtx_store.f = gSYTaskmanGraphicsHeap.ptr) + 1;
                        }
                        else if (xobj->unk05 == 3)
                        {
                            gSYTaskmanGraphicsHeap.ptr = (mtx_store.f = gSYTaskmanGraphicsHeap.ptr) + 1;
                        }
                        else goto check_05;

                        break;
                    }
                }
                ret = 0;

                switch (xobj->kind)
                {
                case 1:
                {
                    break;
                }
                case 2:
                {
                    break;
                }
                case nGCTransformTra:
                {
                    syMatrixTranslate(mtx_store.gbi, dobj->translate.vec.f.x, dobj->translate.vec.f.y, dobj->translate.vec.f.z);
                    break;
                }
                case nGCTransformRotD:
                {
                    syMatrixRotD(mtx_store.gbi, dobj->rotate.a, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case nGCTransformTraRotD:
                {
                    syMatrixTraRotD
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
                case nGCTransformRotRpyD:
                {
                    syMatrixRotRpyD(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case nGCTransformTraRotRpyD:
                {
                    syMatrixTraRotRpyD
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
                case nGCTransformRotR:
                {
                    syMatrixRotR
                    (
                        mtx_store.gbi,
                        dobj->rotate.a,
                        dobj->rotate.vec.f.x,
                        dobj->rotate.vec.f.y,
                        dobj->rotate.vec.f.z
                    );
                    break;
                }
                case nGCTransformTraRotR:
                {
                    syMatrixRotR_translate
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
                case nGCTransformTraRotRSca:
                {
                    syMatrixTraRotRSca
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
                    gODScaleX *= dobj->scale.vec.f.x;
                    break;
                }
                case nGCTransformRotRpyR:
                {
                    syMatrixRotRpyR(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case nGCTransformTraRotRpyR:
                {
                    syMatrixTraRotRpyR
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
                case nGCTransformTraRotRpyRSca:
                {
                    syMatrixTraRotRpyRSca
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
                    gODScaleX *= dobj->scale.vec.f.x;
                    break;
                }
                case nGCTransformRotPyrR:
                {
                    syMatrixRotPyrR(mtx_store.gbi, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
                    break;
                }
                case nGCTransformTraRotPyrR:
                {
                    syMatrixTraRotPyrR
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
                case nGCTransformTraRotPyrRSca:
                {
                    syMatrixTraRotPyrRSca
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
                    gODScaleX *= dobj->scale.vec.f.x;
                    break;
                }
                case nGCTransformSca:
                {
                    syMatrixSca(mtx_store.gbi, dobj->scale.vec.f.x, dobj->scale.vec.f.y, dobj->scale.vec.f.z);
                    gODScaleX *= dobj->scale.vec.f.x;
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
                case nGCTransformVecTra:
                {
                    syMatrixTranslate(mtx_store.gbi, translate->vec.f.x, translate->vec.f.y, translate->vec.f.z);
                    break;
                }
                case nGCTransformVecRotR:
                {
                    syMatrixRotR(mtx_store.gbi, rotate->a, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;
                }
                case nGCTransformVecRotRpyR:
                {
                    syMatrixRotRpyR(mtx_store.gbi, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
                    break;
                }
                case nGCTransformVecSca:
                {
                    syMatrixSca(mtx_store.gbi, scale->vec.f.x, scale->vec.f.y, scale->vec.f.z);
                    gODScaleX *= scale->vec.f.x;
                    break;
                }
                case nGCTransformVecTraRotR:
                {
                    syMatrixRotR_translate
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
                case nGCTransformVecTraRotRSca:
                {
                    syMatrixTraRotRSca
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
                    gODScaleX *= scale->vec.f.x;
                    break;
                }
                case nGCTransformVecTraRotRpyR:
                {
                    syMatrixTraRotRpyR
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
                case nGCTransformVecTraRotRpyRSca:
                {
                    syMatrixTraRotRpyRSca
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
                    gODScaleX *= scale->vec.f.x;
                    break;
                }
                case 41:
                {
                    gSPMvpRecalc(current_dl++);
                    // gSPInsertMatrix?
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, sODMatrixProjectL->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, sODMatrixProjectL->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, sODMatrixProjectL->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, sODMatrixProjectL->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, sODMatrixProjectL->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, sODMatrixProjectL->m[1][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, sODMatrixProjectL->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, sODMatrixProjectL->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, sODMatrixProjectL->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, sODMatrixProjectL->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, sODMatrixProjectL->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, sODMatrixProjectL->m[3][1]);
                    // this is different
                    continue;
                }
                case 42:
                {
                    gSPMvpRecalc(current_dl++);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_I, sODMatrixProjectL->m[0][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_I, sODMatrixProjectL->m[0][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_I, sODMatrixProjectL->m[0][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_I, sODMatrixProjectL->m[0][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_I, sODMatrixProjectL->m[1][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_I, sODMatrixProjectL->m[1][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XX_XY_F, sODMatrixProjectL->m[2][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_XZ_XW_F, sODMatrixProjectL->m[2][1]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YX_YY_F, sODMatrixProjectL->m[2][2]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_YZ_YW_F, sODMatrixProjectL->m[2][3]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZX_ZY_F, sODMatrixProjectL->m[3][0]);
                    gMoveWd(current_dl++, G_MW_MATRIX, G_MWO_MATRIX_ZZ_ZW_F, sODMatrixProjectL->m[3][1]);

                    continue;
                }
                case 43:
                {
                    f12 = dobj->scale.vec.f.y * gODScaleX;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = gODMatrixPerspF[0][0] * gODScaleX;
                    sODMatrixMvpF[1][1] = gODMatrixPerspF[1][1] * f12;
                    sODMatrixMvpF[2][2] = gODMatrixPerspF[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = gODMatrixPerspF[2][3] * gODScaleX;

                    sODMatrixMvpF[0][1] = 0.0F;
                    sODMatrixMvpF[0][2] = 0.0F;
                    sODMatrixMvpF[0][3] = 0.0F;
                    sODMatrixMvpF[1][0] = 0.0F;
                    sODMatrixMvpF[1][2] = 0.0F;
                    sODMatrixMvpF[1][3] = 0.0F;
                    sODMatrixMvpF[2][0] = 0.0F;
                    sODMatrixMvpF[2][1] = 0.0F;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = dobj->scale.vec.f.y * gODScaleX;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = gODMatrixPerspF[0][0] * gODScaleX;
                    sODMatrixMvpF[1][1] = gODMatrixPerspF[1][1] * f12;
                    sODMatrixMvpF[2][2] = gODMatrixPerspF[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = gODMatrixPerspF[2][3] * gODScaleX;

                    sODMatrixMvpF[0][1] = 0.0F;
                    sODMatrixMvpF[0][2] = 0.0F;
                    sODMatrixMvpF[0][3] = 0.0F;
                    sODMatrixMvpF[1][0] = 0.0F;
                    sODMatrixMvpF[1][2] = 0.0F;
                    sODMatrixMvpF[1][3] = 0.0F;
                    sODMatrixMvpF[2][0] = 0.0F;
                    sODMatrixMvpF[2][1] = 0.0F;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = dobj->scale.vec.f.y * gODScaleX;
                    // f2 * f10 -> f4 store reload -> f2
                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][2] = 0.0F;
                    sODMatrixMvpF[1][2] = 0.0F;
                    sODMatrixMvpF[0][3] = 0.0F;
                    sODMatrixMvpF[1][3] = 0.0F;
                    sODMatrixMvpF[2][0] = 0.0F;
                    sODMatrixMvpF[2][1] = 0.0F;

                    sODMatrixMvpF[0][0] = gODMatrixPerspF[0][0] * gODScaleX * cosx;
                    sODMatrixMvpF[1][0] = gODMatrixPerspF[0][0] * gODScaleX * -sinx;
                    sODMatrixMvpF[0][1] = gODMatrixPerspF[1][1] * f12 * sinx;
                    sODMatrixMvpF[1][1] = gODMatrixPerspF[1][1] * f12 * cosx;
                    sODMatrixMvpF[2][2] = gODMatrixPerspF[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = gODMatrixPerspF[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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

                    f12 = dobj->scale.vec.f.y * gODScaleX;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][2] = 0.0F;
                    sODMatrixMvpF[1][2] = 0.0F;
                    sODMatrixMvpF[0][3] = 0.0F;
                    sODMatrixMvpF[1][3] = 0.0F;
                    sODMatrixMvpF[2][0] = 0.0F;
                    sODMatrixMvpF[2][1] = 0.0F;

                    sODMatrixMvpF[0][0] = gODMatrixPerspF[0][0] * gODScaleX * cosz;
                    sODMatrixMvpF[1][0] = gODMatrixPerspF[0][0] * gODScaleX * -sinz;
                    sODMatrixMvpF[0][1] = gODMatrixPerspF[1][1] * f12 * sinz;
                    sODMatrixMvpF[1][1] = gODMatrixPerspF[1][1] * f12 * cosz;
                    sODMatrixMvpF[2][2] = gODMatrixPerspF[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = gODMatrixPerspF[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = gODScaleX * dobj->scale.vec.f.y;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = D_80047028[0][0] * gODScaleX;
                    sODMatrixMvpF[0][1] = D_80047028[0][1] * gODScaleX;
                    sODMatrixMvpF[0][2] = D_80047028[0][2] * gODScaleX;
                    sODMatrixMvpF[0][3] = D_80047028[0][3] * gODScaleX;
                    sODMatrixMvpF[1][0] = D_80047028[1][0] * f12;
                    sODMatrixMvpF[1][1] = D_80047028[1][1] * f12;
                    sODMatrixMvpF[1][2] = D_80047028[1][2] * f12;
                    sODMatrixMvpF[1][3] = D_80047028[1][3] * f12;
                    sODMatrixMvpF[2][0] = D_80047028[2][0] * gODScaleX;
                    sODMatrixMvpF[2][1] = D_80047028[2][1] * gODScaleX;
                    sODMatrixMvpF[2][2] = D_80047028[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = D_80047028[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = gODScaleX * dobj->scale.vec.f.y;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = D_80047028[0][0] * gODScaleX;
                    sODMatrixMvpF[0][1] = D_80047028[0][1] * gODScaleX;
                    sODMatrixMvpF[0][2] = D_80047028[0][2] * gODScaleX;
                    sODMatrixMvpF[0][3] = D_80047028[0][3] * gODScaleX;
                    sODMatrixMvpF[1][0] = D_80047028[1][0] * f12;
                    sODMatrixMvpF[1][1] = D_80047028[1][1] * f12;
                    sODMatrixMvpF[1][2] = D_80047028[1][2] * f12;
                    sODMatrixMvpF[1][3] = D_80047028[1][3] * f12;
                    sODMatrixMvpF[2][0] = D_80047028[2][0] * gODScaleX;
                    sODMatrixMvpF[2][1] = D_80047028[2][1] * gODScaleX;
                    sODMatrixMvpF[2][2] = D_80047028[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = D_80047028[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = gODScaleX * dobj->scale.vec.f.y;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = D_80047068[0][0] * gODScaleX;
                    sODMatrixMvpF[0][1] = D_80047068[0][1] * gODScaleX;
                    sODMatrixMvpF[0][2] = D_80047068[0][2] * gODScaleX;
                    sODMatrixMvpF[0][3] = D_80047068[0][3] * gODScaleX;
                    sODMatrixMvpF[1][0] = D_80047068[1][0] * f12;
                    sODMatrixMvpF[1][1] = D_80047068[1][1] * f12;
                    sODMatrixMvpF[1][2] = D_80047068[1][2] * f12;
                    sODMatrixMvpF[1][3] = D_80047068[1][3] * f12;
                    sODMatrixMvpF[2][0] = D_80047068[2][0] * gODScaleX;
                    sODMatrixMvpF[2][1] = D_80047068[2][1] * gODScaleX;
                    sODMatrixMvpF[2][2] = D_80047068[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = D_80047068[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    f12 = gODScaleX * dobj->scale.vec.f.y;

                    gODScaleX *= dobj->scale.vec.f.x;

                    sODMatrixMvpF[0][0] = D_80047068[0][0] * gODScaleX;
                    sODMatrixMvpF[0][1] = D_80047068[0][1] * gODScaleX;
                    sODMatrixMvpF[0][2] = D_80047068[0][2] * gODScaleX;
                    sODMatrixMvpF[0][3] = D_80047068[0][3] * gODScaleX;
                    sODMatrixMvpF[1][0] = D_80047068[1][0] * f12;
                    sODMatrixMvpF[1][1] = D_80047068[1][1] * f12;
                    sODMatrixMvpF[1][2] = D_80047068[1][2] * f12;
                    sODMatrixMvpF[1][3] = D_80047068[1][3] * f12;
                    sODMatrixMvpF[2][0] = D_80047068[2][0] * gODScaleX;
                    sODMatrixMvpF[2][1] = D_80047068[2][1] * gODScaleX;
                    sODMatrixMvpF[2][2] = D_80047068[2][2] * gODScaleX;
                    sODMatrixMvpF[2][3] = D_80047068[2][3] * gODScaleX;

                    syMatrixF2L(&sODMatrixMvpF, mtx_store.gbi);

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
                    if (xobj->kind >= 66)
                    {
                        if (sODMatrixProcess != NULL)
                        {
                            sb32(*proc)(Mtx*, DObj*, Gfx**) = (dobj->parent_gobj->frame_draw_last != (u8)dSYTaskmanFrameDrawCount) ? sODMatrixProcess[xobj->kind - 66].proc_diff : sODMatrixProcess[xobj->kind - 66].proc_same;

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
                if (xobj->unk05 == 1)
                {
                    if (mtx_store.gbi == &xobj->mtx)
                    {
                        xobj->unk05 = 2;
                    }
                }
            }
            if (xobj->kind != 2)
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
#pragma GLOBAL_ASM("asm/nonmatchings/sys/objdraw/gcPrepDObjMatrix.s")
#endif

// 0x80012D90
void gcDrawMObjForDObj(DObj *dobj, Gfx **dl_head)
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
    gSPSegment(dl_head[0]++, 0xE, gSYTaskmanGraphicsHeap.ptr);

    for (mobj_count = 0, mobj = dobj->mobj; mobj != NULL; mobj_count++)
    {
        mobj = mobj->next;
    }
    mobj = dobj->mobj;
    branch_dl = (Gfx*)gSYTaskmanGraphicsHeap.ptr + mobj_count;
    new_dl = gSYTaskmanGraphicsHeap.ptr;

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
            gDPSetTextureImage(branch_dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mobj->sub.palettes[(s32)mobj->palette_id]);

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
            gSPLightColor(branch_dl++, LIGHT_1, mobj->sub.light1color.pack);
        }
        if (flags & MOBJ_FLAG_LIGHT2)
        {
            gSPLightColor(branch_dl++, LIGHT_2, mobj->sub.light2color.pack);
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
                    mobj->sub.primcolor.s.r,
                    mobj->sub.primcolor.s.g,
                    mobj->sub.primcolor.s.b,
                    mobj->sub.primcolor.s.a
                );
                mobj->texture_id_current = trunc;
                mobj->texture_id_next = trunc + 1;
            }
            else
            {
                gDPSetPrimColor
                (
                    branch_dl++,
                    mobj->sub.prim_m,
                    mobj->lfrac * 255.0F,
                    mobj->sub.primcolor.s.r,
                    mobj->sub.primcolor.s.g,
                    mobj->sub.primcolor.s.b,
                    mobj->sub.primcolor.s.a
                );
            }
        }
        if (flags & MOBJ_FLAG_ENVCOLOR)
        {
            gDPSetEnvColor
            (
                branch_dl++,
                mobj->sub.envcolor.s.r,
                mobj->sub.envcolor.s.g,
                mobj->sub.envcolor.s.b,
                mobj->sub.envcolor.s.a
            );
        }
        if (flags & MOBJ_FLAG_BLENDCOLOR)
        {
            gDPSetBlendColor
            (
                branch_dl++,
                mobj->sub.blendcolor.s.r,
                mobj->sub.blendcolor.s.g,
                mobj->sub.blendcolor.s.b,
                mobj->sub.blendcolor.s.a
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
                mobj->sub.sprites[mobj->texture_id_next]
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
                mobj->sub.sprites[mobj->texture_id_current]
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
    gSYTaskmanGraphicsHeap.ptr = (void*)branch_dl;
}

// 0x80013D90
void gcDrawDObjForGObj(GObj *gobj, Gfx **dl_head)
{
    s32 num;
    DObj *dobj = DObjGetStruct(gobj);

    gODScaleX = 1.0F;

    if (dobj->display_list != NULL)
    {
        if (dobj->flags == DOBJ_FLAG_NONE)
        {
            num = gcPrepDObjMatrix(dl_head, dobj);
            gcDrawMObjForDObj(dobj, dl_head);
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
void gcDrawDObjDLHead0(GObj *gobj) 
{
    gcDrawDObjForGObj(gobj, &gSYTaskmanDLHeads[0]);
}

// 0x80013E8C
void gcDrawDObjDLHead1(GObj *gobj)
{
    gcDrawDObjForGObj(gobj, &gSYTaskmanDLHeads[1]);
}

// 0x80013EB0
void gcDrawDObjDLHead2(GObj *gobj)
{
    gcDrawDObjForGObj(gobj, &gSYTaskmanDLHeads[2]);
}

// 0x80013ED4
void gcDrawDObjDLHead3(GObj *gobj)
{
    gcDrawDObjForGObj(gobj, &gSYTaskmanDLHeads[3]);
}

// 0x80013EF8
void gcDrawDObjTree(DObj *this_dobj) 
{
    s32 num;
    DObj *current_dobj;
    f32 bak;

    if (!(this_dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        num = gcPrepDObjMatrix(gSYTaskmanDLHeads, this_dobj);

        if ((this_dobj->display_list != NULL) && !(this_dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gcDrawMObjForDObj(this_dobj, gSYTaskmanDLHeads);
            gSPDisplayList(gSYTaskmanDLHeads[0]++, this_dobj->display_list);
        }
        if (this_dobj->child != NULL)
        { 
            gcDrawDObjTree(this_dobj->child);
        }
        if (num != 0)
        {
            if ((this_dobj->parent == DOBJ_PARENT_NULL) || (this_dobj->sib_next != NULL))
            {
                gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
            }
        }
        gODScaleX = bak;
    }
    if (this_dobj->sib_prev == NULL) 
    {
        current_dobj = this_dobj->sib_next;

        while (current_dobj != NULL)
        {
            gcDrawDObjTree(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014038
void gcDrawDObjTreeForGObj(GObj *gobj) 
{
    gODScaleX = 1.0F;
    gcDrawDObjTree(DObjGetStruct(gobj));
}

// 0x80014068
void gcDrawDObjDLLinks(DObj *dobj, DObjDLLink *dl_link)
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
        dl_start = gSYTaskmanDLHeads[dl_link->list_id];
        num = gcPrepDObjMatrix(&gSYTaskmanDLHeads[dl_link->list_id], dobj);
        dl_end = gSYTaskmanDLHeads[dl_link->list_id];

        if (dl_link->dl != NULL)
        {
            ptr = gSYTaskmanGraphicsHeap.ptr;

            gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[dl_link->list_id]);
            gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);

            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gSYTaskmanDLHeads[dl_link->list_id]++, G_MTX_MODELVIEW);
                }
            }
        }
        else list_id = dl_link->list_id;

        while ((++dl_link)->list_id != ARRAY_COUNT(gSYTaskmanDLHeads))
        {
            if (dl_link->dl != NULL)
            {
                Gfx *dl_current = dl_start;

                while (dl_current != dl_end)
                {
                    *gSYTaskmanDLHeads[dl_link->list_id]++ = *dl_current++;
                }
                if (dobj->mobj != NULL)
                {
                    gSPSegment(gSYTaskmanDLHeads[dl_link->list_id]++, 0xE, ptr);
                }
                gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gSYTaskmanDLHeads[dl_link->list_id]++, G_MTX_MODELVIEW);
                    }
                }
            }
            continue; // Required!
        }
        if (list_id != -1)
        {
            gSYTaskmanDLHeads[list_id] = dl_start;
        }
    }
    else return;
}

// 0x801143FC
void gcDrawDObjDLLinksForGObj(GObj *gobj)
{
    DObj *dobj;

    gODScaleX = 1.0F;
    dobj = DObjGetStruct(gobj);
    gcDrawDObjDLLinks(dobj, dobj->dl_link);
}

// 0x80014430
void func_80014430(void)
{
    s32 i;

    D_800470B0 = D_800470C8;

    for (i = 0; i < ARRAY_COUNT(D_800470B8); i++) { D_800470B8[i] = D_800470C8; } // needs one line
}

// 0x8001445C
void gcDrawDObjTreeDLLinks(DObj *dobj)
{
    s32 i;
    s32 num;
    DObjDLLink *dl_link;
    Gfx *dl;
    DObj *current_dobj;
    void *ptr;
    f32 bak;

    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        dl_link = dobj->dl_link;
        dl = D_800470B0;
        num = gcPrepDObjMatrix(&D_800470B0, dobj);

        if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (dl_link->list_id != ARRAY_COUNT(gSYTaskmanDLHeads))
            {
                if (dl_link->dl != NULL)
                {
                    while (D_800470B0 != D_800470B8[dl_link->list_id])
                    {
                        *gSYTaskmanDLHeads[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gSYTaskmanGraphicsHeap.ptr;
                            gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[dl_link->list_id]);

                            goto set_display_list; // The goto is required ONLY if we condense the gSYTaskmanDLHeads and D_800470B8 increments into a single operation.
                        }
                        else gSPSegment(gSYTaskmanDLHeads[dl_link->list_id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);
                }
                dl_link++;
            }
        }
        if (dobj->child != NULL)
        {
            gcDrawDObjTreeDLLinks(dobj->child);
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
                        gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
                    }
                }
            }
            continue; // Required!
        }
        gODScaleX = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            gcDrawDObjTreeDLLinks(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80014768
void gcDrawDObjTreeDLLinksForGObj(GObj *gobj)
{
    gODScaleX = 1.0F;
    gcDrawDObjTreeDLLinks(DObjGetStruct(gobj));
}

// 0x80014798
f32 gcGetDObjDistFromEye(DObj *dobj) 
{
    f32 x, y, z;
    CObj *cobj = CObjGetStruct(gGCCurrentCamera);

    x = dobj->translate.vec.f.x - cobj->vec.eye.x;
    y = dobj->translate.vec.f.y - cobj->vec.eye.y;
    z = dobj->translate.vec.f.z - cobj->vec.eye.z;

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
        dist = gcGetDObjDistFromEye(dobj);

        while (dist < dist_dl->target_dist)
        { 
            dist_dl++;
        }
        gODScaleX = 1.0F;

        if (dist_dl->dl != NULL) 
        {
            num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);
            gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dist_dl->dl);

            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
                }
            }
        }
    }
}

// 0x8001490C
void gcDrawDObjTreeMultiList(DObj *dobj) 
{
    s32 num;
    Gfx **dls;
    DObj *current_dobj;
    f32 bak;

    dls = dobj->dl_array;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

        if ((dls != NULL) && (dls[sODDetailLevel] != NULL)) 
        {
            if (!(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[sODDetailLevel]);
            }
        }
        if (dobj->child != NULL) 
        { 
            gcDrawDObjTreeMultiList(dobj->child);
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
            }
        }
        gODScaleX = bak;
    }
    if (dobj->sib_prev == NULL) 
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            gcDrawDObjTreeMultiList(current_dobj);

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
    gODScaleX = 1.0F;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        dist_dl = dobj->dist_dl;

        if (dist_dl != NULL)
        {
            sODDetailLevel = 0;
            dist = gcGetDObjDistFromEye(dobj);
            while (dist < dist_dl->target_dist)
            {
                dist_dl++;
                sODDetailLevel++;
            }
            num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

            if ((dist_dl->dl != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                gSPDisplayList(gSYTaskmanDLHeads[0]++, dist_dl->dl);
            }
            if (dobj->child != NULL)
            {
                gcDrawDObjTreeMultiList(dobj->child);
            }
            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
                }
            }
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    gcDrawDObjTreeMultiList(current_dobj);

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
    gODScaleX = 1.0F;

    if (dobj->flags == DOBJ_FLAG_NONE) 
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            dist = gcGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            { 
                dist_dl_link++;
            }
            gcDrawDObjDLLinks(dobj, dist_dl_link->dl_link);
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

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        s0 = (DObjDLLink**)dobj->display_ptr;
        if (s0 != NULL)
        {
            dl_link = s0[sODDetailLevel];
        }
        dl = D_800470B0;
        num = gcPrepDObjMatrix(&D_800470B0, dobj);

        if ((s0 != NULL) && (dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (dl_link->list_id != ARRAY_COUNT(gSYTaskmanDLHeads))
            {
                if (dl_link->dl != NULL)
                {
                    while (D_800470B0 != D_800470B8[dl_link->list_id])
                    {
                        *gSYTaskmanDLHeads[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gSYTaskmanGraphicsHeap.ptr;
                            gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[dl_link->list_id]);

                            goto set_display_list; // *sigh* required to match...
                        }
                        else gSPSegment(gSYTaskmanDLHeads[dl_link->list_id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);
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
                        gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
                    }
                }
            }
            else continue; // Required! Both the "else" and the "continue"!
        }
        gODScaleX = bak;
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
    gODScaleX = 1.0F;
    ptr = NULL;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            sODDetailLevel = 0;

            dist = gcGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            {
                sODDetailLevel++;
                dist_dl_link++;
            }
            dl_link = dist_dl_link->dl_link;
            dl = D_800470B0;
            num = gcPrepDObjMatrix(&D_800470B0, dobj);

            if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                while (dl_link->list_id != ARRAY_COUNT(gSYTaskmanDLHeads))
                {
                    if (dl_link->dl != NULL)
                    {
                        while (D_800470B0 != D_800470B8[dl_link->list_id])
                        {
                            *gSYTaskmanDLHeads[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                        }
                        if (dobj->mobj != NULL)
                        {
                            if (ptr == NULL)
                            {
                                ptr = gSYTaskmanGraphicsHeap.ptr;
                                gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[dl_link->list_id]);

                                goto set_display_list;
                            }
                            else gSPSegment(gSYTaskmanDLHeads[dl_link->list_id]++, 0xE, ptr);
                        }
                    set_display_list:
                        gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);
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
                            gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
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
void gcDrawDObjTreeDLArray(DObj *dobj) 
{
    s32 num;
    Gfx **dls;
    f32 bak;
    DObj *current_dobj;

    dls = dobj->dl_array;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;

        if ((dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[0]);
        }
        num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

        if ((dls != NULL) && (dls[1] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[1]);
        }
        if (dobj->child != NULL)
        { 
            gcDrawDObjTreeDLArray(dobj->child);
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
            }
        }
        gODScaleX = bak;
    }
    if (dobj->sib_prev == NULL) 
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            gcDrawDObjTreeDLArray(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x800154F0
void unref_800154F0(GObj *gobj) 
{
    gODScaleX = 1.0F;
    gcDrawDObjTreeDLArray(DObjGetStruct(gobj));
}

// 0x80015520
void func_80015520(DObj *dobj)
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

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        multi_list = dobj->multi_list;
        dl = D_800470B0;
        num = gcPrepDObjMatrix(&D_800470B0, dobj);

        if ((multi_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (multi_list->id != ARRAY_COUNT(gSYTaskmanDLHeads))
            {
                if (multi_list->dl2 != NULL)
                {
                    if (multi_list->dl1 != NULL)
                    {
                        gSPDisplayList(gSYTaskmanDLHeads[multi_list->id]++, multi_list->dl1);
                    }
                    while (D_800470B0 != D_800470B8[multi_list->id])
                    {
                        *gSYTaskmanDLHeads[multi_list->id]++ = *D_800470B8[multi_list->id]++;
                    }
                    if (dobj->mobj != NULL)
                    {
                        if (ptr == NULL)
                        {
                            ptr = gSYTaskmanGraphicsHeap.ptr;
                            gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[multi_list->id]);

                            goto set_display_list;
                        }
                        else gSPSegment(gSYTaskmanDLHeads[multi_list->id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gSYTaskmanDLHeads[multi_list->id]++, multi_list->dl2);
                }
                multi_list++;
            }
        }
        if (dobj->child != NULL)
        {
            func_80015520(dobj->child);
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
                        gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
                    }
                }
                else continue;
            }
        }
        gODScaleX = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL)
        {
            func_80015520(current_dobj);
            current_dobj = current_dobj->sib_next;
        }
    }
}

// 0x80015860
void unref_80015860(GObj *gobj) 
{
    gODScaleX = 1.0F;
    func_80015520(DObjGetStruct(gobj));
}

// 0x80015890
void gcDrawDObjTreeDLDoubleArray(DObj *dobj)
{
    s32 num;
    DObj *current_dobj;
    f32 bak;
    Gfx **dls;
    Gfx ***p_dls;

    p_dls = (Gfx***)dobj->display_ptr;

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN)) 
    {
        bak = gODScaleX;

        if (p_dls != NULL)
        { 
            dls = p_dls[sODDetailLevel]; 
        }
        if ((p_dls != NULL) && (dls[0] != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[0]);
        }
        num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

        if ((p_dls != NULL) && (dls[1]) != NULL && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
            gSPDisplayList(gSYTaskmanDLHeads[0]++, dls[1]);
        }
        if (dobj->child != NULL)
        {
            gcDrawDObjTreeDLDoubleArray(dobj->child); 
        }
        if (num != 0)
        {
            if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
            {
                gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
            }
        }
        gODScaleX = bak;
    }
    if (dobj->sib_prev == NULL)
    {
        current_dobj = dobj->sib_next;

        while (current_dobj != NULL) 
        {
            gcDrawDObjTreeDLDoubleArray(current_dobj);
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

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        dist_dl = dobj->dist_dl;

        if (dist_dl != NULL)
        {
            gODScaleX = 1.0F;
            sODDetailLevel = 0;

            dist = gcGetDObjDistFromEye(dobj);

            while (dist < dist_dl->target_dist)
            {
                sODDetailLevel++;
                dist_dl++;
            }
            num = gcPrepDObjMatrix(gSYTaskmanDLHeads, dobj);

            if ((dist_dl->dl != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                gcDrawMObjForDObj(dobj, gSYTaskmanDLHeads);
                gSPDisplayList(gSYTaskmanDLHeads[0]++, dist_dl->dl);
            }
            if (dobj->child != NULL)
            {
                gcDrawDObjTreeDLDoubleArray(dobj->child);
            }
            if (num != 0)
            {
                if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                {
                    gSPPopMatrix(gSYTaskmanDLHeads[0]++, G_MTX_MODELVIEW);
                }
            }
            if (dobj->sib_prev == NULL)
            {
                current_dobj = dobj->sib_next;

                while (current_dobj != NULL)
                {
                    gcDrawDObjTreeDLDoubleArray(current_dobj);

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

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        bak = gODScaleX;
        p_multi_list = (DObjMultiList**)dobj->display_ptr;

        if (p_multi_list != NULL) 
        {
            multi_list = p_multi_list[sODDetailLevel]; 
        }
        dl = D_800470B0;
        num  = gcPrepDObjMatrix(&D_800470B0, dobj);

        if ((p_multi_list != NULL) && (multi_list != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
        {
            while (multi_list->id != ARRAY_COUNT(gSYTaskmanDLHeads))
            {
                if (multi_list->dl2 != NULL) 
                {
                    if (multi_list->dl1 != NULL)
                    { 
                        gSPDisplayList(gSYTaskmanDLHeads[multi_list->id]++, multi_list->dl1);
                    }
                    while (D_800470B0 != D_800470B8[multi_list->id]) 
                    {
                        *gSYTaskmanDLHeads[multi_list->id]++ = *D_800470B8[multi_list->id]++;
                    }
                    if (dobj->mobj != NULL) 
                    {
                        if (ptr == NULL) 
                        {
                            ptr = gSYTaskmanGraphicsHeap.ptr;
                            gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[multi_list->id]);

                            goto set_display_list;
                        }
                        else gSPSegment(gSYTaskmanDLHeads[multi_list->id]++, 0xE, ptr);
                    }
                set_display_list:
                    gSPDisplayList(gSYTaskmanDLHeads[multi_list->id]++, multi_list->dl2);
                }
                multi_list++;
            }
        }
        if (dobj->child != NULL) 
        { 
            func_80015C0C(dobj->child);
        }
        D_800470B0 = dl;

        for (i = 0; i < ARRAY_COUNT(gSYTaskmanDLHeads); i++) 
        {
            if (D_800470B8[i] > D_800470B0)
            {
                D_800470B8[i] = D_800470B0;

                if (num != 0)
                {
                    if ((dobj->parent == DOBJ_PARENT_NULL) || (dobj->sib_next != NULL))
                    {
                        gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
                    }
                }
                continue; // Not required this time; this is for the sake of consistency.
            }
        }
        gODScaleX = bak;
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

    if (!(dobj->flags & DOBJ_FLAG_HIDDEN))
    {
        dist_dl_link = dobj->dist_dl_link;

        if (dist_dl_link != NULL)
        {
            gODScaleX = 1.0F;
            sODDetailLevel = 0;
            dist = gcGetDObjDistFromEye(dobj);

            while (dist < dist_dl_link->target_dist)
            {
                dist_dl_link++;
                sODDetailLevel++;
            }
            dl_link = dist_dl_link->dl_link;
            dl = D_800470B0;
            num = gcPrepDObjMatrix(&D_800470B0, dobj);

            if ((dl_link != NULL) && !(dobj->flags & DOBJ_FLAG_NOTEXTURE))
            {
                while (dl_link->list_id != ARRAY_COUNT(gSYTaskmanDLHeads))
                {
                    if (dl_link->dl != NULL)
                    {
                        while (D_800470B0 != D_800470B8[dl_link->list_id])
                        {
                            *gSYTaskmanDLHeads[dl_link->list_id]++ = *D_800470B8[dl_link->list_id]++;
                        }
                        if (dobj->mobj != NULL)
                        {
                            if (ptr == NULL)
                            {
                                ptr = gSYTaskmanGraphicsHeap.ptr;
                                gcDrawMObjForDObj(dobj, &gSYTaskmanDLHeads[dl_link->list_id]);

                                goto set_display_list;
                            }
                            else gSPSegment(gSYTaskmanDLHeads[dl_link->list_id]++, 0xE, ptr);
                        }
                    set_display_list:
                        gSPDisplayList(gSYTaskmanDLHeads[dl_link->list_id]++, dl_link->dl);
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
                            gSPPopMatrix(gSYTaskmanDLHeads[i]++, G_MTX_MODELVIEW);
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
            sobj->sprite.rsp_dl_next = gSYTaskmanDLHeads[0];

            spDraw(&sobj->sprite);

            gSYTaskmanDLHeads[0] = sobj->sprite.rsp_dl_next - 1;
        }
        sobj = sobj->next;
    }
}

// 0x80016338
void func_80016338(Gfx **dls, CObj *cobj, s32 buffer_id)
{
    Vp_t *viewport = &cobj->viewport.vp;
    Gfx *dl = dls[0];
    s32 ulx, uly, lrx, lry;

    if ((buffer_id == 0) || (buffer_id == 1))
    {
        if (cobj->flags & 0x20)
        {
            syTaskmanAppendGfxUcodeLoad(dls, D_80046626);
            D_80046628 = 1;

            dl = dls[0];
        }
    }
    gSPViewport(dl++, viewport);

    ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);

    lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (ulx < (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft)
    {
        ulx = (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft;
    }
    if (uly < (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop)
    {
        uly = (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop;
    }
    if (lrx > gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight))
    {
        lrx = gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight);
    }
    if (lry > gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom))
    {
        lry = gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom);
    }
    gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);
    gDPSetCycleType(dl++, G_CYC_1CYCLE);

    if ((buffer_id == 0) || (buffer_id == 2))
    {
        gDPSetRenderMode(dl++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    }
    else gDPSetRenderMode(dl++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    dls[0] = dl;
}

// 0x8001663C
void func_8001663C(Gfx **dls, CObj *cobj, s32 buffer_id)
{
    Gfx *dl = dls[0];
    Vp_t *viewport = &cobj->viewport.vp;
    s32 ulx, uly, lrx, lry;

    if ((buffer_id == 0) || (buffer_id == 1))
    {
        if (cobj->flags & 0x20)
        {
            syTaskmanAppendGfxUcodeLoad(dls, D_80046626);
            D_80046628 = 1;

            dl = dls[0];
        }
    }
    gSPViewport(dl++, viewport);

    ulx = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    uly = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
    lrx = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    lry = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (ulx < (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft)
    {
        ulx = (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft;
    }
    if (uly < (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop)
    {
        uly = (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop;
    }
    if (lrx > gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight))
    {
        lrx = gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight);
    }
    if (lry > gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom))
    {
        lry = gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom);
    }
    gDPSetScissor(dl++, G_SC_NON_INTERLACE, ulx, uly, lrx, lry);

    lrx--, lry--;

    if (cobj->flags & COBJ_FLAG_ZBUFFER)
    {
        gDPPipeSync(dl++);
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gSYVideoResWidth, gSYVideoZBuffer);
        gDPSetFillColor(dl++, GCOMBINE32_RGBA5551(GPACK_ZDZ(G_MAXFBZ, 0)));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gSYVideoColorDepth, gSYVideoResWidth, (void*)0x0F000000);

    if (cobj->flags & COBJ_FLAG_FILLCOLOR)
    {
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(dl++, syVideoGetFillColor(cobj->color));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetCycleType(dl++, G_CYC_1CYCLE);

    if ((buffer_id == 0) || (buffer_id == 2))
    {
        gDPSetRenderMode(dl++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    }
    else gDPSetRenderMode(dl++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    dls[0] = dl;
}

// 0x80016AE4
void unref_80016AE4(Gfx **dls, CObj *cobj, s32 arg2, void *image, s32 max_lrx, s32 max_lry, void *depth)
{
    Gfx *dl = dls[0];
    Vp_t *viewport = &cobj->viewport.vp;
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

    if (cobj->flags & COBJ_FLAG_ZBUFFER)
    {
        gDPPipeSync(dl++);
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, max_lrx, depth);
        gDPSetFillColor(dl++, GCOMBINE32_RGBA5551(GPACK_ZDZ(G_MAXFBZ, 0)));
        gDPFillRectangle(dl++, ulx, uly, lrx, lry);
    }
    gDPPipeSync(dl++);
    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gSYVideoColorDepth, max_lrx, image);
    gDPSetDepthImage(dl++, depth);

    if (cobj->flags & COBJ_FLAG_FILLCOLOR)
    {
        gDPSetCycleType(dl++, G_CYC_FILL);
        gDPSetRenderMode(dl++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(dl++, syVideoGetFillColor(cobj->color));
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
void gcPrepCameraMatrix(Gfx **dls, CObj *cobj)
{
    Gfx *dl;
    s32 i;
    XObj *xobj;
    gsMtxStore mtx_store;
    s32 var_s3;
    s32 spC8;
    LookAt *look_at;

    dl = dls[0];
    spC8 = 0;
    var_s3 = 0;

    if (cobj->xobjs_num != 0)
    {
        for (i = 0; i < cobj->xobjs_num; i++)
        {
            xobj = cobj->xobj[i];

            if (xobj != NULL)
            {
                mtx_store.gbi = &xobj->mtx;

                if (xobj->unk05 != 2)
                {
                    if (gSYTaskmanTaskID > 0)
                    {
                        mtx_store.gbi = gSYTaskmanGraphicsHeap.ptr;
                        gSYTaskmanGraphicsHeap.ptr = mtx_store.gbi + 1;
                    }
                    switch (xobj->kind)
                    {
                    case 1:
                        break;

                    case 2:
                        break;

                    case nGCTransformPerspFastF:
                        syMatrixPerspFastF
                        (
                            gODMatrixPerspF,
                            &cobj->projection.persp.norm,
                            cobj->projection.persp.fovy,
                            cobj->projection.persp.aspect,
                            cobj->projection.persp.near,
                            cobj->projection.persp.far,
                            cobj->projection.persp.scale
                        );
                        syMatrixF2L(&gODMatrixPerspF, mtx_store.gbi);
                        sODMatrixProjectL = mtx_store.gbi;
                        break;

                    case nGCTransformPerspF:
                        syMatrixPerspF
                        (
                            gODMatrixPerspF,
                            &cobj->projection.persp.norm,
                            cobj->projection.persp.fovy,
                            cobj->projection.persp.aspect,
                            cobj->projection.persp.near,
                            cobj->projection.persp.far,
                            cobj->projection.persp.scale
                        );
                        syMatrixF2L(&gODMatrixPerspF, mtx_store.gbi);
                        sODMatrixProjectL = mtx_store.gbi;
                        break;

                    case nGCTransformOrtho:
                        syMatrixOrtho
                        (
                            mtx_store.gbi,
                            cobj->projection.ortho.l,
                            cobj->projection.ortho.r,
                            cobj->projection.ortho.b,
                            cobj->projection.ortho.t,
                            cobj->projection.ortho.n,
                            cobj->projection.ortho.f,
                            cobj->projection.ortho.scale
                        );
                        sODMatrixProjectL = mtx_store.gbi;
                        break;

                    case 6:
                    case 7:
                        syMatrixLookAt
                        (
                            mtx_store.gbi,
                            cobj->vec.eye.x,
                            cobj->vec.eye.y,
                            cobj->vec.eye.z,
                            cobj->vec.at.x,
                            cobj->vec.at.y,
                            cobj->vec.at.z,
                            cobj->vec.up.x,
                            cobj->vec.up.y,
                            cobj->vec.up.z
                        );
                        var_s3 = (cobj->vec.up.z < cobj->vec.up.y) ? 1 : 2;
                        break;

                    case 8:
                    case 9:
                        syMatrixModLookAt(mtx_store.gbi, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, 0.0F, 1.0F, 0.0F);
                        var_s3 = 1;
                        break;

                    case 10:
                    case 11:
                        syMatrixModLookAt(mtx_store.gbi, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, 0.0F, 0.0F, 1.0F);
                        var_s3 = 2;
                        break;

                    case 12:
                    case 13:
                        look_at = syMallocSet(&gSYTaskmanGraphicsHeap, sizeof(LookAt), 0x8);
                        syMatrixLookAtReflect
                        (
                            mtx_store.gbi,
                            look_at,
                            cobj->vec.eye.x,
                            cobj->vec.eye.y,
                            cobj->vec.eye.z,
                            cobj->vec.at.x,
                            cobj->vec.at.y,
                            cobj->vec.at.z,
                            cobj->vec.up.x,
                            cobj->vec.up.y,
                            cobj->vec.up.z
                        );
                        var_s3 = (cobj->vec.up.z < cobj->vec.up.y) ? 1 : 2;
                        break;

                    case 14:
                    case 15:
                        look_at = syMallocSet(&gSYTaskmanGraphicsHeap, sizeof(LookAt), 0x8);
                        var_s3 = 1;
                        syMatrixModLookAtReflect(mtx_store.gbi, look_at, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, 0.0F, 1.0F, 0.0F);
                        break;

                    case 16:
                    case 17:
                        look_at = syMallocSet(&gSYTaskmanGraphicsHeap, sizeof(LookAt), 0x8);
                        var_s3 = 2;

                        syMatrixModLookAtReflect(mtx_store.gbi, look_at, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, 0.0F, 0.0F, 1.0F);
                        break;

                    default:
                        if ((xobj->kind >= 66) && (sODMatrixProcess != NULL))
                        {
                            if (sODMatrixProcess[xobj->kind - 66].proc_diff != NULL)
                            {
                                sODMatrixProcess[xobj->kind - 66].proc_diff(mtx_store.gbi, cobj, &dl);
                            }
                        }
                        break;
                    }
                    if ((xobj->unk05 == 1) && (&xobj->mtx == mtx_store.gbi))
                    {
                        xobj->unk05 = 2;
                    }
                }
                switch (xobj->kind)
                {
                case 1:
                    break;

                case 2:
                    break;

                case nGCTransformPerspFastF:
                case nGCTransformPerspF:
                    gSPMatrix(dl++, mtx_store.gbi, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
                    gSPPerspNormalize(dl++, cobj->projection.persp.norm);
                    break;

                case nGCTransformOrtho:
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
                    if ((xobj->kind >= 66) && (sODMatrixProcess != NULL))
                    {
                        if (sODMatrixProcess[xobj->kind - 66].proc_same != NULL)
                        {
                            sODMatrixProcess[xobj->kind - 66].proc_same(mtx_store.gbi, cobj, &dl);
                        }
                    }
                    break;
                }
            }

        }
        switch (sODCameraMatrixMode)
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
            f32 eye_z, eye_y, at_y;

            switch (var_s3)
            {
            case 1:
                eye_z = sqrtf(SQUARE(cobj->vec.at.z - cobj->vec.eye.z) + SQUARE(cobj->vec.at.x - cobj->vec.eye.x));
                eye_y = cobj->vec.eye.y;
                at_y = cobj->vec.at.y;
                break;

            case 2:
                eye_z = sqrtf(SQUARE(cobj->vec.at.y - cobj->vec.eye.y) + SQUARE(cobj->vec.at.x - cobj->vec.eye.x));
                eye_y = cobj->vec.eye.z;
                at_y = cobj->vec.at.z;
                break;
            }
            if (eye_z < 0.0001F)
            {
                syMatrixScaF(&D_80047028, 0.0F, 0.0F, 0.0F);
            }
            else
            {
                syMatrixLookAtF(&D_80047028, 0.0F, eye_y, eye_z, 0.0F, at_y, 0.0F, 0.0F, 1.0F, 0.0F);
                guMtxCatF(D_80047028, gODMatrixPerspF, D_80047028);
            }
        }
        if (spC8 != 0)
        {
            f32 eye_z, eye_x, at_x;

            switch (spC8)
            {
            case 1:
                eye_z = sqrtf(SQUARE(cobj->vec.at.y - cobj->vec.eye.y) + SQUARE(cobj->vec.at.z - cobj->vec.eye.z));
                eye_x = cobj->vec.eye.x;
                at_x = cobj->vec.at.x;
                break;

            case 2:
                eye_z = sqrtf(SQUARE(cobj->vec.at.z - cobj->vec.eye.z) + SQUARE(cobj->vec.at.x - cobj->vec.eye.x));
                eye_x = cobj->vec.eye.y;
                at_x = cobj->vec.at.y;
                break;
            }
            if (eye_z < 0.0001F)
            {
                syMatrixScaF(&D_80047068, 0.0F, 0.0F, 0.0F);
            }
            else
            {
                syMatrixLookAtF(&D_80047068, eye_x, 0.0F, eye_z, at_x, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F);
                guMtxCatF(D_80047068, gODMatrixPerspF, D_80047068);
            }
        }
        dls[0] = dl;
    }
}

// 0x80017830
void gcSetCameraMatrixMode(s32 val)
{
    sODCameraMatrixMode = val;
}

// the second arg may just be unused
void gcRunFuncCamera(CObj *cobj, s32 dl_id) 
{
    if (cobj->func_camera != NULL)
    { 
        cobj->func_camera(cobj, dl_id);
    }
}

// 0x80017868
void func_80017868(GObj *this_gobj, s32 link_id, sb32 is_tag_mask_or_id)
{
    GObj *current_gobj = gGCCommonDLLinks[link_id];

    while (current_gobj != NULL)
    {
        if (!(current_gobj->flags & GOBJ_FLAG_HIDDEN))
        {
            if
            (
                ((is_tag_mask_or_id == 0) && (this_gobj->cobj_tag &  current_gobj->cobj_tag)) ||
                ((is_tag_mask_or_id == 1) && (this_gobj->cobj_tag == current_gobj->cobj_tag))
            )
            {
                D_8003B874_3C474 = 4;
                gGCCurrentDisplay = current_gobj;
                current_gobj->func_display(current_gobj);
                D_8003B874_3C474 = 3;
                current_gobj->frame_draw_last = dSYTaskmanFrameDrawCount;
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

    for (i = 0; i < ARRAY_COUNT(gSYTaskmanDLHeads); i++)
    {
        sp38[i] = gSYTaskmanDLHeads[i];
        gSYTaskmanDLHeads[i] += 2;
    }
    func_80017868(gobj, index, arg2);

    for (i = 0; i < ARRAY_COUNT(gSYTaskmanDLHeads); i++)
    {
        if (gSYTaskmanDLHeads[i] == sp38[i] + 2)
        {
            gSYTaskmanDLHeads[i] -= 2;
            D_80046A88[index].dls[i] = NULL;
        }
        else
        {
            gSPEndDisplayList(gSYTaskmanDLHeads[i]++);

            gSPDisplayList(sp38[i], sp38[i] + 2);
            sp38[i]++;
            gSPBranchList(sp38[i]++, gSYTaskmanDLHeads[i]);
            D_80046A88[index].dls[i] = sp38[i];
        }
    }
    D_80046A88[index].id = dSYTaskmanFrameDrawCount;
}

// 0x80017AAC
void func_80017AAC(s32 index)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSYTaskmanDLHeads); i++) 
    {
        if (D_80046A88[index].dls[i] != NULL)
        {
            gSPDisplayList(gSYTaskmanDLHeads[i]++, D_80046A88[index].dls[i]);
        }
    }
}

// 0x80017B80
void func_80017B80(GObj *gobj, s32 arg1)
{
    s32 id;
    u64 cobj_mask;
    u64 sp30;

    cobj_mask = gobj->cobj_mask;
    sp30 = gobj->unk_gobj_0x40;

    id = 0;

    while (cobj_mask) 
    {
        if (cobj_mask & 1) 
        {
            if (sp30 & 1)
            {
                if ((u8)dSYTaskmanFrameDrawCount == D_80046A88[id].id)
                {
                    func_80017AAC(id);
                } 
                else func_80017978(gobj, id, arg1);
            } 
            else func_80017868(gobj, id, arg1);
        }
        cobj_mask >>= 1;
        sp30 >>= 1;
        id++;
    }
}

// 0x80017CC8
void func_80017CC8(CObj *cobj) 
{
    if (cobj->flags & COBJ_FLAG_DLBUFFERS)
    {
        syTaskmanUpdateDLBuffers(); 
    }
    if (cobj->flags & COBJ_FLAG_GFXEND) 
    {
        func_800053CC();
        func_80004F78();
    }
    if (cobj->flags & COBJ_FLAG_BRANCHSYNC)
    { 
        func_800053CC();
    }
}

// 0x80017D3C
void func_80017D3C(GObj *gobj, Gfx **dls, s32 index)
{
    CObj *cobj = CObjGetStruct(gobj);
    func_8001663C(dls, cobj, index);
    gcPrepCameraMatrix(dls, cobj);
    gcRunFuncCamera(cobj, index);
    func_80017B80(gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? TRUE : FALSE);
    func_80017CC8(cobj);
}

// 0x80017DBC
void func_80017DBC(GObj *gobj) 
{
    func_80017D3C(gobj, &gSYTaskmanDLHeads[0], 0);
}

// 0x80017DE4
void unref_80017DE4(GObj *gobj)
{
    func_80017D3C(gobj, &gSYTaskmanDLHeads[1], 1);
}

// 0x80017E0C
void unref_80017E0C(GObj *gobj) 
{
    func_80017D3C(gobj, &gSYTaskmanDLHeads[2], 2);
}

// 0x80017E34
void unref_80017E34(GObj *gobj)
{
    func_80017D3C(gobj, &gSYTaskmanDLHeads[3], 3);
}

// 0x80017E5C
void unref_80017E5C(void) 
{
    CObj *cobj = CObjGetStruct(gGCCurrentCamera);

    func_800053CC();
    func_80004F78();
    func_8001663C(gSYTaskmanDLHeads, cobj, 0);
    gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);
    gcRunFuncCamera(cobj, 0);
}

// 0x80017EC0
void func_80017EC0(GObj *gobj)
{
    CObj *cobj = CObjGetStruct(gobj);
    s32 i;

    func_8001663C(gSYTaskmanDLHeads, cobj, 0);
    D_800472C0 = gSYTaskmanDLHeads[0] + 1;
    gSPDisplayList(gSYTaskmanDLHeads[0], gSYTaskmanDLHeads[0] + 2);
    gSYTaskmanDLHeads[0] += 2;

    gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);
    gSPEndDisplayList(gSYTaskmanDLHeads[0]++);
    gSPBranchList(D_800472C0, gSYTaskmanDLHeads[0]);

    gcRunFuncCamera(cobj, 0);

    if (cobj->flags & 0x20)
    {
        func_80016338(&gSYTaskmanDLHeads[1], cobj, 1);
    }
    for (i = 1; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        D_800472B0[i] = ++gSYTaskmanDLHeads[i];
    }
    func_80017B80(gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? TRUE : FALSE);

    for (i = 1; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        if (D_800472B0[i] == gSYTaskmanDLHeads[i])
        {
            gSYTaskmanDLHeads[i]--;
        }
        else
        {
            Gfx *start = gSYTaskmanDLHeads[i]++;
            gSPDisplayList(D_800472B0[i] - 1, gSYTaskmanDLHeads[i]);

            if ((i != 1) || !(cobj->flags & 0x20))
            {
                func_80016338(&gSYTaskmanDLHeads[i], cobj, i);
            }
            gSPDisplayList(gSYTaskmanDLHeads[i]++, D_800472C0 + 1);
            gcRunFuncCamera(cobj, i);
            gSPEndDisplayList(gSYTaskmanDLHeads[i]++);
            gSPBranchList(start, gSYTaskmanDLHeads[i]);
        }
    }
    func_80017CC8(cobj);
}

// 0x8001810C
void unref_8001810C(void)
{
    CObj *cobj = CObjGetStruct(gGCCurrentCamera);
    s32 i;

    for (i = 1; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        if (D_800472B0[i] == gSYTaskmanDLHeads[i])
        {
            gSYTaskmanDLHeads[i]--;
        }
        else
        {
            Gfx *start = gSYTaskmanDLHeads[i]++;

            gSPDisplayList(D_800472B0[i] - 1, gSYTaskmanDLHeads[i]);
            func_80016338(&gSYTaskmanDLHeads[i], cobj, i);
            gSPDisplayList(gSYTaskmanDLHeads[i]++, D_800472C0 + 1);
            gcRunFuncCamera(cobj, i);
            gSPEndDisplayList(gSYTaskmanDLHeads[i]++);
            gSPBranchList(start, gSYTaskmanDLHeads[i]);
        }
    }
    func_800053CC();
    func_80004F78();
    func_8001663C(&gSYTaskmanDLHeads[0], cobj, 0);

    D_800472C0 = gSYTaskmanDLHeads[0] + 1;

    gSPDisplayList(gSYTaskmanDLHeads[0], gSYTaskmanDLHeads[0] + 2);

    gSYTaskmanDLHeads[0] += 2;

    gcPrepCameraMatrix(gSYTaskmanDLHeads, cobj);
    gSPEndDisplayList(gSYTaskmanDLHeads[0]++);
    gSPBranchList(D_800472C0, gSYTaskmanDLHeads[0]);

    gcRunFuncCamera(cobj, 0);

    for (i = 1; i < (ARRAY_COUNT(gSYTaskmanDLHeads) + ARRAY_COUNT(D_800472B0)) / 2; i++)
    {
        D_800472B0[i] = ++gSYTaskmanDLHeads[i];
    }
}

// 0x80018300
void func_80018300(GObj *gobj)
{
    CObj *cobj = CObjGetStruct(gobj);
    Vp_t *viewport = &cobj->viewport.vp;
    s32 xmin = (viewport->vtrans[0] / 4) - (viewport->vscale[0] / 4);
    s32 ymin = (viewport->vtrans[1] / 4) - (viewport->vscale[1] / 4);
    s32 xmax = (viewport->vtrans[0] / 4) + (viewport->vscale[0] / 4);
    s32 ymax = (viewport->vtrans[1] / 4) + (viewport->vscale[1] / 4);

    if (xmin < (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft)
    {
        xmin = (gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorLeft;
    }
    if (ymin < (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop)
    {
        ymin = (gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorTop;
    }
    if (xmax > gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight))
    {
        xmax = gSYVideoResWidth - ((gSYVideoResWidth / GS_SCREEN_WIDTH_DEFAULT) * dODCameraScissorRight);
    }
    if (ymax > gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom))
    {
        ymax = gSYVideoResHeight - ((gSYVideoResHeight / GS_SCREEN_HEIGHT_DEFAULT) * dODCameraScissorBottom);
    }
    func_8001663C(gSYTaskmanDLHeads, cobj, 0);
    spInit(gSYTaskmanDLHeads);
    spScissor(xmin, xmax, ymin, ymax);
    func_80017B80(gobj, (cobj->flags & COBJ_FLAG_IDENTIFIER) ? TRUE : FALSE);
    spFinish(gSYTaskmanDLHeads);

    gSYTaskmanDLHeads[0]--;

    gDPSetTexturePersp(gSYTaskmanDLHeads[0]++, G_TP_PERSP);
}

#pragma GCC diagnostic pop
