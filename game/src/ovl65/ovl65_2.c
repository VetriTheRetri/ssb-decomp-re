#include <ft/fighter.h>
#include <gr/ground.h>
#include <if/interface.h>
#include <gm/battle.h>
#include <ovl0/reloc_data_mgr.h>

#include "gm1pgame.h"

u8 D_ovl65_80192BC0[/* */] = { 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x78, 0x00 };
u8 D_ovl65_80192BC8[/* */] = { 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x78, 0x00 };
u8 D_ovl65_80192BD0[/* */] = { 0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x78, 0x00 };

// 0x801938D0
GObj *D_ovl65_801938D0;

// 0x801938D8
gm1PGameBossEnding D_ovl65_801938D8;

// 0x801938F0
f32 D_ovl65_801938F0;

// 0x801910B0
void func_ovl65_801910B0(void)
{
    GObj *gobj;

    func_8000B2B8(D_ovl65_801938D0);

    gobj = gOMObjCommonLinks[omGObj_LinkIndex_Background];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == omGObj_Kind_BossWallpaper)
        {
            func_8000B2B8(gobj);
        }
        gobj = gobj->group_gobj_next;
    }
}

// 0x80191114
void func_ovl65_80191114(void)
{
    D_ovl65_801938D8.filler_0x0[0] = 0;
}

// 0x80191120
void func_ovl65_80191120(void)
{
    OMCamera *cam = OMCameraGetStruct(func_8000B93C(omGObj_Kind_UnkCamera3, NULL, 9, 0x80000000U, func_80017EC0, 0x28, 0x20, 1, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, gCameraStruct.scissor_ulx, gCameraStruct.scissor_uly, gCameraStruct.scissor_lrx, gCameraStruct.scissor_lry);

    cam->mtx_types.f6.f[2] = (f32)(gCameraStruct.scissor_lrx - gCameraStruct.scissor_ulx) / (f32)(gCameraStruct.scissor_lry - gCameraStruct.scissor_uly);

    cam->flags |= 4;

    cam->view.pan.x = cam->view.pan.y = cam->view.pan.z = 0.0F;
    cam->view.tilt.x = cam->view.tilt.y = 0.0F;
    cam->view.tilt.z = 2000.0F;

    cam = OMCameraGetStruct(func_8000B93C(omGObj_Kind_UnkCamera3, NULL, 9, 0x80000000U, func_80017EC0, 0x3C, 0x20, 2, 1, 1, 0, 1, 0));
    func_80007080(&cam->viewport, gCameraStruct.scissor_ulx, gCameraStruct.scissor_uly, gCameraStruct.scissor_lrx, gCameraStruct.scissor_lry);

    cam->mtx_types.f6.f[2] = (f32)(gCameraStruct.scissor_lrx - gCameraStruct.scissor_ulx) / (f32)(gCameraStruct.scissor_lry - gCameraStruct.scissor_uly);

    cam->flags |= 4;

    cam->view.pan.x = cam->view.pan.y = cam->view.pan.z = 0.0F;
    cam->view.tilt.x = cam->view.tilt.y = 0.0F;
    cam->view.tilt.z = 2000.0F;
}

// 0x80191364
void jtgt_ovl65_80191364(GObj *gobj)
{
    s32 index = DObjGetStruct(gobj)->child->color_id;
    s32 alpha = (s32)gobj->user_data.p;

    gDPPipeSync(gDisplayListHead[1]++);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[1]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);
    gDPSetEnvColor(gDisplayListHead[1]++, D_ovl65_80192BC0[index], D_ovl65_80192BC8[index], D_ovl65_80192BD0[index], alpha);

    func_80014768(gobj);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x80191498
void jtgt_ovl65_80191498(GObj *gobj)
{
    s32 alpha = (s32)gobj->user_data.p;
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

    func_80014768(gobj);

    gDPSetCycleType(gDisplayListHead[1]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x801915B8
void jtgt_ovl65_801915B8(GObj *gobj)
{
    s32 alpha = (s32)gobj->user_data.p;
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

    func_80014768(gobj);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
    gDPPipeSync(gDisplayListHead[1]++);
}

// 0x801916A8
void jtgt_ovl65_801916A8(GObj *gobj)
{
    s32 alpha = (s32)gobj->user_data.p;
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        if (dobj->mobj != NULL) // NULL check here but not the function above? WTF?
        {
            dobj->mobj->sub.primcolor.a = alpha;
        }
        dobj = dobj->child;
    }
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0xFF, 0xFF, 0xFF, alpha);

    func_80014038(gobj);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
    gDPPipeSync(gDisplayListHead[0]++);
}

// 0x80191798
void func_ovl65_80191798(GObj *gobj)
{
    s32 alpha;

    D_ovl65_801938F0++;

    if (D_ovl65_801938F0 > 255.0F)
    {
        D_ovl65_801938F0 = 255.0F;
    }
    alpha = D_ovl65_801938F0;

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
void func_ovl65_80191908(GObj *gobj)
{
    f32 sub = 2.55F;
    s32 color;

    D_ovl65_801938F0 -= sub; // Maybe this is what they did? Doing this only because there's unused stack otherwise.

    if (D_ovl65_801938F0 < 0.0F)
    {
        D_ovl65_801938F0 = 0.0F;
    }
    color = D_ovl65_801938F0;

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
void func_ovl65_80191A94(void)
{
    GObj *gobj = gOMObjCommonLinks[omGObj_LinkIndex_Background];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == omGObj_Kind_BossWallpaper)
        {
            s32 color = D_ovl65_801938D8.unk_gm1pbossend_0x10[0x5];

            DObjGetStruct(gobj)->color_id = color * -1;
        }
        gobj = gobj->group_gobj_next;
    }
}

// 0x80191AEC
void func_ovl65_80191AEC(GObj *gobj)
{
    DObj *dobj = DObjGetStruct(gobj);

    gobj->user_data.s += dobj->color_id;

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
