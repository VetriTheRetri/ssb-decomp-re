#include "ground.h"

// 0x80104D90
void func_ovl2_80104D90(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_80014038(ground_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80104E70
void jtgt_ovl2_80104E70(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014768(ground_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x80104FD8
void jtgt_ovl2_80104FD8(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_80014038(ground_gobj);
}

// 0x80105088
void jtgt_ovl2_80105088(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_80014768(ground_gobj);
}

// 0x80105154
void jtgt_ovl2_80105154(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_80014038(ground_gobj);
}

// 0x801051D0
void jtgt_ovl2_801051D0(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014768(ground_gobj);
}

// 0x80105290 - Identical to 0x80105154?
void func_ovl2_80105290(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    func_80014038(ground_gobj);
}

// 0x8010530C - Identical to 0x801051D0?
void jtgt_ovl2_8010530C(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    func_80014768(ground_gobj);
}

// 0x801053CC
void func_ovl2_801053CC(GObj *ground_gobj, DObjDesc *dobj_desc)
{
    DObj *root_dobj;
    DObj *next_dobj;
    s32 i;

    next_dobj = root_dobj = DObjGetStruct(ground_gobj);

    while (next_dobj != NULL)
    {
        if ((next_dobj->aobj == NULL) && !(dobj_desc->index & 0xF000))
        {
            for (i = 0; i < next_dobj->unk_dobj_0x56; i++)
            {
                next_dobj->om_mtx[i]->unk05 = 1;
            }
        }
        dobj_desc++;

        next_dobj = func_ovl0_800C86E8(next_dobj, root_dobj);
    }
}

extern grRenderDesc jtbl_ovl2_8012E800[];

GObj* func_ovl2_8010547C(grCreateDesc *gr_desc, s32 index, void *arg2)
{
    GObj *ground_gobj;
    void (*proc_render)(GObj*);

    if (gr_desc->dobj_desc == NULL)
    {
        return NULL;
    }
    ground_gobj = omMakeGObjCommon(omGObj_Kind_GrRender, NULL, 2, 0x80000000);

    if (gGroundInfo->unk_0x44 & (1 << index))
    {
        proc_render = jtbl_ovl2_8012E800[index].unk_grrender_0x4;
    }
    else proc_render = jtbl_ovl2_8012E800[index].unk_grrender_0x0;

    omAddGObjRenderProc(ground_gobj, proc_render, jtbl_ovl2_8012E800[index].unk_grrender_0x8, 0x80000000U, -1);
    func_8000F590(ground_gobj, gr_desc->dobj_desc, arg2, 0x1C, 0, 0);

    if (gr_desc->aobj != NULL)
    {
        func_8000F8F4(ground_gobj, gr_desc->aobj);
    }
    if ((gr_desc->anim_joint != NULL) || (gr_desc->matanim_joint != NULL))
    {
        func_8000BED8(ground_gobj, gr_desc->anim_joint, gr_desc->matanim_joint, 0.0F);
        omAddGObjCommonProc(ground_gobj, jtbl_ovl2_8012E800[index].gobjproc, 1, 4);
        func_8000DF34(ground_gobj);
    }
    else if (index == 1)
    {
        omAddGObjCommonProc(ground_gobj, mpCollision_AdvanceUpdateFrame, 1, 4);
    }
    func_ovl2_801053CC(ground_gobj, gr_desc->dobj_desc);

    return ground_gobj;
}