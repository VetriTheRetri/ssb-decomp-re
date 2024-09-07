#include <gr/ground.h>

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x8012E800
grGeometryDesc dGRGeometryDescs[/* */] =
{
    // Layer 0
    {
        grGeometryLayer0ProcRenderPri,
        grGeometryLayer0ProcRenderSec,
        4,
        gcPlayAnimAll
    },

    // Layer 1
    {
        grGeometryLayer1ProcRenderPri,
        grGeometryLayer1ProcRenderSec,
        6,
        func_ovl2_800FBAD0
    },

    // Layer 2
    {
        grGeometryLayer2ProcRenderPri,
        grGeometryLayer2ProcRenderSec,
        13,
        gcPlayAnimAll
    },

    // Layer 3
    {
        grGeometryLayer3ProcRenderPri,
        grGeometryLayer3ProcRenderSec,
        17,
        gcPlayAnimAll
    }
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80104D90
void grGeometryLayer0ProcRenderPri(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gcDrawDObjTreeForGObj(ground_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80104E70
void grGeometryLayer0ProcRenderSec(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjTreeDLLinksForGObj(ground_gobj);

    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);
}

// 0x80104FD8
void grGeometryLayer1ProcRenderPri(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gcDrawDObjTreeForGObj(ground_gobj);
}

// 0x80105088
void grGeometryLayer1ProcRenderSec(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPSetGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPSetGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    gcDrawDObjTreeDLLinksForGObj(ground_gobj);
}

// 0x80105154
void grGeometryLayer2ProcRenderPri(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gcDrawDObjTreeForGObj(ground_gobj);
}

// 0x801051D0
void grGeometryLayer2ProcRenderSec(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjTreeDLLinksForGObj(ground_gobj);
}

// 0x80105290 - Identical to 0x80105154?
void grGeometryLayer3ProcRenderPri(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gcDrawDObjTreeForGObj(ground_gobj);
}

// 0x8010530C - Identical to 0x801051D0?
void grGeometryLayer3ProcRenderSec(GObj *ground_gobj)
{
    gDPPipeSync(gDisplayListHead[0]++);

    gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

    gDPPipeSync(gDisplayListHead[1]++);

    gSPClearGeometryMode(gDisplayListHead[1]++, G_ZBUFFER);

    gDPSetRenderMode(gDisplayListHead[1]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gcDrawDObjTreeDLLinksForGObj(ground_gobj);
}

// 0x801053CC
void grGeometryDObjSetNoAnimMtx(GObj *ground_gobj, DObjDesc *dobj_desc)
{
    DObj *root_dobj;
    DObj *next_dobj;
    s32 i;

    next_dobj = root_dobj = DObjGetStruct(ground_gobj);

    while (next_dobj != NULL)
    {
        if ((next_dobj->aobj == NULL) && !(dobj_desc->index & 0xF000))
        {
            for (i = 0; i < next_dobj->ommtx_len; i++)
            {
                next_dobj->ommtx[i]->unk05 = 1;
            }
        }
        dobj_desc++;

        next_dobj = lbCommonGetDObjDepthFirst(next_dobj, root_dobj);
    }
}

// 0x8010547C
GObj* grGeometryMakeGeometryLayer(mpGroundDesc *gr_desc, s32 gr_desc_id, DObj **p_dobj)
{
    GObj *ground_gobj;
    void (*proc_render)(GObj*);

    if (gr_desc->dobj_desc == NULL)
    {
        return NULL;
    }
    ground_gobj = gcMakeGObjSPAfter(nOMObjCommonKindGrRender, NULL, nOMObjCommonLinkIDGroundRender, GOBJ_LINKORDER_DEFAULT);

    if (gMPCollisionGroundData->layer_mask & (1 << gr_desc_id))
    {
        proc_render = dGRGeometryDescs[gr_desc_id].proc_rendersec;
    }
    else proc_render = dGRGeometryDescs[gr_desc_id].proc_renderpri;

    gcAddGObjDisplay(ground_gobj, proc_render, dGRGeometryDescs[gr_desc_id].dl_link, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcSetupCustomDObjs(ground_gobj, gr_desc->dobj_desc, p_dobj, nOMTransformTraRotRpyRSca, nOMTransformNull, nOMTransformNull);

    if (gr_desc->p_mobjsubs != NULL)
    {
        gcAddMObjAll(ground_gobj, gr_desc->p_mobjsubs);
    }
    if ((gr_desc->anim_joints != NULL) || (gr_desc->p_matanim_joints != NULL))
    {
        gcAddAnimAll(ground_gobj, gr_desc->anim_joints, gr_desc->p_matanim_joints, 0.0F);
        gcAddGObjProcess(ground_gobj, dGRGeometryDescs[gr_desc_id].proc_update, nOMObjProcessKindProc, 4);
        gcPlayAnimAll(ground_gobj);
    }
    else if (gr_desc_id == 1)
    {
        gcAddGObjProcess(ground_gobj, mpCollisionAdvanceUpdateFrame, nOMObjProcessKindProc, 4);
    }
    grGeometryDObjSetNoAnimMtx(ground_gobj, gr_desc->dobj_desc);

    return ground_gobj;
}
