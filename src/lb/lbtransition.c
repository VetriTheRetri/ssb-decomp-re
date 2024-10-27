#include <lb/library.h>
#include <sys/video.h>

extern void *D_80044FA8_407B8;
extern syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x800D5D60
LBTransitionDesc dLBTransitionDescs[/* */] =
{
    // Paper Plane
    {
        &lLBTransitionAeroplaneFileID,
        &lLBTransitionAeroplaneDObjDesc,
        &lLBTransitionAeroplaneAnimJoint,
        0
    },

    // Checkered Board
    {
        &lLBTransitionCheckFileID,
        &lLBTransitionCheckDObjDesc,
        &lLBTransitionCheckAnimJoint,
        0
    },

    // Falling Board
    {
        &lLBTransitionGakubuthiFileID,
        &lLBTransitionGakubuthiDObjDesc,
        &lLBTransitionGakubuthiAnimJoint,
        0
    },

    // Doors
    {
        &lLBTransitionKannonFileID,
        &lLBTransitionKannonDObjDesc,
        &lLBTransitionKannonAnimJoint,
        0
    },

    // Star
    {
        &lLBTransitionStarFileID,
        &lLBTransitionStarDObjDesc,
        &lLBTransitionStarAnimJoint,
        0
    },

    // Vertical Lines
    {
        &lLBTransitionSudare1FileID,
        &lLBTransitionSudare1DObjDesc,
        &lLBTransitionSudare1AnimJoint,
        0
    },

    // Diagonal Lines
    {
        &lLBTransitionSudare2FileID,
        &lLBTransitionSudare2DObjDesc,
        &lLBTransitionSudare2AnimJoint,
        0
    },

    // Camera Shutter
    {
        &lLBTransitionCameraFileID,
        &lLBTransitionCameraDObjDesc,
        &lLBTransitionCameraAnimJoint,
        0
    },

    // Collapsing Blocks
    {
        &lLBTransitionBlockFileID,
        &lLBTransitionBlockDObjDesc,
        &lLBTransitionBlockAnimJoint,
        0
    },

    // Rotating Frame Zooming Out
    {
        &lLBTransitionRotScaleFileID,
        &lLBTransitionRotScaleDObjDesc,
        &lLBTransitionRotScaleAnimJoint,
        0
    },

    // Curtain
    {
        &lLBTransitionCurtainFileID,
        &lLBTransitionCurtainDObjDesc,
        &lLBTransitionCurtainAnimJoint,
        0
    }
};

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x800D6480
s32 sLBTransitionPad0x800D6480;

// 0x800D6484
void *sLBTransitionFileHeap;

// 0x800D6488 - Heap for "photocopy" of last frame drawn to framebuffer
void *sLBTransitionPhotoHeap;

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x800D4130
GObj* lbTransitionMakeCamera(u32 id, s32 link, u32 link_order, u64 cobj_mask)
{
    GObj *gobj;
    CObj *cobj;

    gobj = gcMakeGObjSPAfter(id, NULL, link, GOBJ_LINKORDER_DEFAULT);
    func_80009F74(gobj, func_80017DBC, link_order, cobj_mask, -1);
    
    cobj = gcAddCameraForGObj(gobj);
    gcAddXObjForCamera(cobj, nGCTransformPerspFastF, 1);
    gcAddXObjForCamera(cobj, nGCTransformLookAt, 1);
    syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cobj->projection.persp.aspect = 15.0F / 11.0F;
    cobj->projection.persp.fovy = 45.0F;
    
    cobj->vec.eye.z = 1100.0F / tanf(F_CLC_DTOR32(cobj->projection.persp.fovy * 0.5F));

    cobj->flags |= (0x4 | 0x1);
    
    return gobj;
}

// 0x800D4248
void lbTransitionFuncDisplay(GObj *gobj)
{
    gDPPipeSync(gSYTaskmanDLHeads[0]++);
    gSPSegment(gSYTaskmanDLHeads[0]++, 0x1, sLBTransitionPhotoHeap);
    
    gcDrawDObjTreeForGObj(gobj);

    gDPPipeSync(gSYTaskmanDLHeads[0]++);
}

// 0x800D42C8
void lbTransitionProcUpdate(GObj *gobj)
{
    gcPlayAnimAll(gobj);
    
    if (gobj->anim_frame <= 0.0F)
    {
        gcEjectGObj(gobj);
    }
}

// 0x800D430C
GObj* lbTransitionMakeTransition(s32 transition_id, u32 id, s32 link, void (*func_display)(GObj*), u8 dl_link_id, void (*proc_common)(GObj*))
{
    LBTransitionDesc *transition_desc = &dLBTransitionDescs[transition_id];
    GObj *gobj;

    lbRelocGetFileExternHeap(transition_desc->file_id, sLBTransitionFileHeap);
    gobj = gcMakeGObjSPAfter(id, NULL, link, GOBJ_LINKORDER_DEFAULT);
    
    gobj->user_data.s = transition_desc->unk_lbtransition_0xC;
    
    gcAddGObjDisplay(gobj, func_display, dl_link_id, GOBJ_DLLINKORDER_DEFAULT, -1);
    gcSetupCustomDObjs
    (
        gobj, 
        (DObjDesc*) (transition_desc->o_dobjdesc + (uintptr_t)sLBTransitionFileHeap),
        NULL,
        nGCTransformTraRotRpyRSca,
        nGCTransformNull,
        nGCTransformNull
    );
    if (transition_desc->o_anim_joint != 0)
    {
        gcAddAnimJointAll(gobj, (AObjEvent32**) (transition_desc->o_anim_joint + (uintptr_t)sLBTransitionFileHeap), 0.0F);
        gcPlayAnimAll(gobj);
    }
    gcAddGObjProcess(gobj, proc_common, nGCProcessKindProc, 1);
    
    return gobj;
}

// 0x800D4404
void lbTransitionSetupTransition(void)
{
    s32 i, j;
    size_t current_size;
    size_t largest_size;
    u32 *heap_pixels, *framebuf_pixels;

    largest_size = 0;
    
    for (i = 0; i < ARRAY_COUNT(dLBTransitionDescs); i++)
    {
        current_size = lbRelocGetFileSize(dLBTransitionDescs[i].file_id);

        if (largest_size < current_size)
        {
            largest_size = current_size;
        }
    }
    sLBTransitionFileHeap = syTaskmanMalloc(largest_size, 0x10);
    heap_pixels = sLBTransitionPhotoHeap = syTaskmanMalloc(300 * 220 * sizeof(u16), 0x10);

    framebuf_pixels = (u32*)
	(
		(uintptr_t)D_80044FA8_407B8 + SYVIDEO_BORDER_SIZE(320, 10, u16) + 
        SYVIDEO_BORDER_SIZE(320, 220, u16) + SYVIDEO_BORDER_SIZE(1, 10, u16)
	);
    for (i = 0; i < 220; i++)
    {
        for (j = 0; j < 150; j++)
        {
            *heap_pixels++ = *framebuf_pixels++;
        }
        framebuf_pixels -= 310;
    }
}
