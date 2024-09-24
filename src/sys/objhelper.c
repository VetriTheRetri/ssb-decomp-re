#include <sys/obj.h>

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x8000AEF0
void gcApplyByLink(s32 link, void (*proc)(GObj*, u32), u32 param)
{
    GObj *current_gobj = gOMObjCommonLinks[link];

    while (current_gobj != NULL)
    {
        GObj *next_gobj = current_gobj->link_next;

        proc(current_gobj, param);

        current_gobj = next_gobj;
    }
}

// 0x8000AF58
void gcApplyToAll(void (*proc)(GObj*, u32), u32 param)
{
    s32 link;

    for (link = 0; link < ARRAY_COUNT(gOMObjCommonLinks); link++)
    {
        GObj *current_gobj = gOMObjCommonLinks[link];

        while (current_gobj != NULL)
        {
            GObj *next_gobj = current_gobj->link_next;

            proc(current_gobj, param);

            current_gobj = next_gobj;
        }
    }
}

// 0x8000AFE4
GObj* gcApplyByLinkEx(s32 link, GObj* (*proc)(GObj*, u32), u32 param, sb32 is_return_immediate)
{
    GObj *current_gobj;
    GObj *next_gobj;
    GObj *ret_gobj = NULL;

    current_gobj = gOMObjCommonLinks[link];

    while (current_gobj != NULL)
    {
        GObj *find_gobj;

        next_gobj = current_gobj->link_next;
        find_gobj = proc(current_gobj, param);

        if (find_gobj != NULL)
        {
            ret_gobj = find_gobj;

            if (is_return_immediate == TRUE)
            {
                return ret_gobj;
            }
        }
        current_gobj = next_gobj;
    }
    return ret_gobj;
}

// 0x8000B08C
GObj* gcApplyToAllEx(GObj* (*proc)(GObj*, u32), u32 param, sb32 is_return_immediate)
{
    GObj *current_gobj;
    GObj *next_gobj;
    s32 link;
    GObj *ret_gobj = NULL;

    for (link = 0; link < ARRAY_COUNT(gOMObjCommonLinks); link++)
    {
        current_gobj = gOMObjCommonLinks[link];

        while (current_gobj != NULL)
        {
            GObj *find_gobj;

            next_gobj = current_gobj->link_next;
            find_gobj = proc(current_gobj, param);

            if (find_gobj != NULL)
            {
                ret_gobj = find_gobj;

                if (is_return_immediate == TRUE)
                {
                    return ret_gobj;
                }
            }
            current_gobj = next_gobj;
        }
    }
    return ret_gobj;
}

// 0x8000B14C
GObj* gcGetGObjByID(GObj *gobj, u32 id)
{
    return (gobj->gobj_id == id) ? gobj : NULL;
}

// 0x8000B16C
GObj* gcFindGObjByLinkAndID(s32 link, u32 id)
{
    return gcApplyByLinkEx(link, gcGetGObjByID, id, TRUE);
}

// 0x8000B198
GObj* gcFindGObjByID(u32 id)
{
    return gcApplyToAllEx(gcGetGObjByID, id, TRUE);
}

// 0x8000B1C4
void gcUpdateDefault(GObj *gobj)
{
    cmdProcessCommands(NULL);
}

// 0x8000B1E8
void gcStopCurrentGObjThread(s32 tics)
{
    if (gOMObjCurrentProcess->gobjthread->stack[7] != 0xFEDCBA98)
    {
        syErrorPrintf("gobjthread stack over  gobjid = %d\n", gOMObjCurrentProcess->parent_gobj->gobj_id);
    }
    while (tics != 0)
    {
        osSendMesg(&gOMMesgQueue, (OSMesg)1, OS_MESG_NOBLOCK);
        osStopThread(NULL);
        tics--;
    }
}

// 0x8000B284
void gcPauseProcessAll(GObj *gobj)
{
    GObjProcess *gobjproc;

    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    gobjproc = gobj->gobjproc_head;

    while (gobjproc != NULL)
    {
        gobjproc->is_paused = TRUE;
        gobjproc = gobjproc->link_next;
    }
}

// 0x8000B2B8
void gcResumeProcessAll(GObj *gobj)
{
    GObjProcess *gobjproc;

    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    gobjproc = gobj->gobjproc_head;

    while (gobjproc != NULL)
    {
        gobjproc->is_paused = FALSE;
        gobjproc = gobjproc->link_next;
    }
}

// 0x8000B2EC
void gcPauseGObjProcess(GObjProcess *gobjproc)
{
    if (gobjproc == NULL)
    {
        gobjproc = gOMObjCurrentProcess;
    }
    gobjproc->is_paused = TRUE;
}

// 0x8000B304
void gcResumeGObjProcess(GObjProcess *gobjproc)
{
    if (gobjproc == NULL)
    {
        gobjproc = gOMObjCurrentProcess;
    }
    gobjproc->is_paused = FALSE;
}

// 0x8000B31C
void gcPauseProcessByProc(GObj *gobj, void (*proc_common)(GObj*))
{
    GObjProcess *gobjproc;

    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    gobjproc = gobj->gobjproc_head;

    while (gobjproc != NULL)
    {
        if (gobjproc->proc_common == proc_common)
        {
            gobjproc->is_paused = TRUE;
        }
        gobjproc = gobjproc->link_next;
    }
}

// 0x8000B35C
void gcResumeProcessByProc(GObj *gobj, void (*proc_common)(GObj*))
{
    GObjProcess *gobjproc;

    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    gobjproc = gobj->gobjproc_head;

    while (gobjproc != NULL)
    {
        if (gobjproc->proc_common == proc_common)
        {
            gobjproc->is_paused = FALSE;
        }
        gobjproc = gobjproc->link_next;
    }
}

// 0x8000B39C
void gcEndProcessAll(GObj *gobj)
{
    GObjProcess *current_gobjproc, *next_gobjproc;

    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    current_gobjproc = gobj->gobjproc_head;

    while (current_gobjproc != NULL)
    {
        next_gobjproc = current_gobjproc->link_next;

        gcEndGObjProcess(current_gobjproc);

        current_gobjproc = next_gobjproc;
    }
}

// 0x8000B3EC
void gcAddDObjMatrixSetsRpyD(DObj* dobj)
{
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyD, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 0x8000B434
void gcAddDObjMatrixSetsRpyR(DObj *dobj)
{
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyR, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 0x8000B47C
void gcAddCameraMatrixSets(Camera *cam)
{
    gcAddOMMtxForCamera(cam, nOMTransformPerspFastF, 0);
    gcAddOMMtxForCamera(cam, nOMTransformLookAt, 0);
}

// 0x8000B4B4
void gcRemoveTreeMObjAll(GObj *gobj)
{
    DObj *current_dobj = DObjGetStruct(gobj);

    while (current_dobj != NULL)
    {
        gcRemoveMObjAll(current_dobj);

        current_dobj = gcGetTreeDObjNext(current_dobj);
    }
}

// 0x8000B4F8
DObj* gcAddDObjRpyD(GObj *gobj, void *dvar)
{
    DObj *dobj = gcAddDObjForGObj(gobj, dvar);
    gcAddDObjMatrixSetsRpyD(dobj);

    return dobj;
}

// 0x8000B528
DObj* gcAddDObjSiblingRpyD(DObj *dobj, void *dvar)
{
    DObj *sibling_dobj = gcAddSiblingForDObj(dobj, dvar);
    gcAddDObjMatrixSetsRpyD(sibling_dobj);

    return sibling_dobj;
}

// 0x8000B558
DObj* gcAddDObjChildRpyD(DObj *dobj, void *dvar)
{
    DObj *child_dobj = gcAddChildForDObj(dobj, dvar);
    gcAddDObjMatrixSetsRpyD(child_dobj);

    return child_dobj;
}

// 0x8000B588
DObj* gcAddDObjRpyR(GObj *gobj, void *dvar)
{
    DObj *dobj = gcAddDObjForGObj(gobj, dvar);
    gcAddDObjMatrixSetsRpyR(dobj);

    return dobj;
}

// 0x8000B5B8
DObj* gcAddDObjSiblingRpyR(DObj *dobj, void *dvar)
{
    DObj *sibling_dobj = gcAddSiblingForDObj(dobj, dvar);
    gcAddDObjMatrixSetsRpyR(sibling_dobj);

    return sibling_dobj;
}

// 0x8000B5E8
DObj* gcAddDObjChildRpyR(DObj *dobj, void *dvar)
{
    DObj *child_dobj = gcAddChildForDObj(dobj, dvar);
    gcAddDObjMatrixSetsRpyR(child_dobj);
    
    return child_dobj;
}

// 0x8000B618
void unref_8000B618(GObj *gobj, DObjTraDesc *dobj_tra, DObj **dobjs)
{
    s32 i;
    DObj *dobj, *array_dobjs[18];
    
    for (i = 0; i < ARRAY_COUNT(array_dobjs); i++)
    {
        array_dobjs[i] = NULL;
    }
    while (dobj_tra->index != 18)
    {
        if (dobj_tra->index != 0)
        {
            dobj = array_dobjs[dobj_tra->index] = gcAddDObjChildRpyD
            (
                array_dobjs[dobj_tra->index - 1],
                dobj_tra->display_list
            );
        }
        else dobj = array_dobjs[0] = gcAddDObjRpyD(gobj, dobj_tra->display_list);
        
        dobj->translate.vec.f = dobj_tra->translate;

        if (dobjs != NULL)
        {
            *dobjs++ = dobj;
        }
        dobj_tra++;
    }
}

// 0x8000B70C
void gcRemoveDObjAll(GObj *gobj)
{
    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    while (DObjGetStruct(gobj) != NULL)
    {
        gcEjectDObj(DObjGetStruct(gobj));
    }
}

// 0x8000B760
void gcRemoveSObjAll(GObj *gobj)
{
    if (gobj == NULL)
    {
        gobj = gOMObjCurrentCommon;
    }
    while (SObjGetStruct(gobj) != NULL)
    {
        gcEjectSObj(SObjGetStruct(gobj));
    }
}

// 0x8000B7B4
void gcEjectAll(void)
{
    GObj *current_gobj;
    GObj *next_gobj;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gOMObjCommonLinks); i++)
    {
        current_gobj = gOMObjCommonLinks[i];

        while (current_gobj != NULL)
        {
            next_gobj = current_gobj->link_next;

            gcEjectGObj(current_gobj);

            current_gobj = next_gobj;
        }
    }
}

// 0x8000B824
GObj* gcMakeModelGObj
(
    u32 id,
    void (*proc_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*proc_display)(GObj*),
    u8 dl_link,
    u32 dl_link_order,
    u32 cam_tag,
    void *dvar,
    sb32 is_add_default_ommtx,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
)
{
    GObj *gobj;
    DObj *dobj;

    gobj = gcMakeGObjSPAfter(id, proc_run, link, link_order);

    if (gobj == NULL)
    {
        return NULL;
    }
    gcAddGObjDisplay(gobj, proc_display, dl_link, dl_link_order, cam_tag);

    dobj = gcAddDObjForGObj(gobj, dvar);

    if (is_add_default_ommtx != FALSE)
    {
        gcAddDObjMatrixSetsRpyD(dobj);
    }
    if (proc != NULL)
    {
        gcAddGObjProcess(gobj, proc, gobjproc_kind, gobjproc_priority);
    }
    return gobj;
}

// 0x8000B8BC
GObj* gcMakeSpriteGObj
(
    u32 id,
    void (*proc_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*proc_display)(GObj*),
    s32 dl_link,
    u32 dl_link_order,
    u32 cam_tag,
    Sprite *sprite,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
)
{
    GObj *gobj = gcMakeGObjSPAfter(id, proc_run, link, link_order);
        
    if (gobj == NULL)
    {
        return NULL;
    }
    gcAddGObjDisplay(gobj, proc_display, dl_link, dl_link_order, cam_tag);
    
    gcAddSObjForGObj(gobj, sprite);
        
    if (proc != NULL)
    {
        gcAddGObjProcess(gobj, proc, gobjproc_kind, gobjproc_priority);
    }
    return gobj;
}

// 0x8000B93C
GObj* gcMakeCameraGObj
(
    u32 id,
    void (*proc_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*proc_display)(GObj*),
    u32 dl_link_order,
    u64 cam_mask,
    u32 cam_tag,
    sb32 is_add_default_ommtx,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority,
    sb32 argD
)
{
    GObj *gobj;
    Camera *cam;

    gobj = gcMakeGObjSPAfter(id, proc_run, link, link_order);
    
    if (gobj == NULL)
    {
        return NULL;
    }
    func_80009F74(gobj, proc_display, dl_link_order, cam_mask, cam_tag);
    
    cam = gcAddCameraForGObj(gobj);

    if (is_add_default_ommtx != FALSE)
    {
        gcAddCameraMatrixSets(cam);
    }
    if (proc != NULL)
    {
        gcAddGObjProcess(gobj, proc, gobjproc_kind, gobjproc_priority);
    }
    if (argD != 0)
    {
        cam->flags = 0x4 | 0x2 | 0x1;
        cam->color = GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF);
    }
    return gobj;
}

// 0x8000B9FC
GObj* gcMakeDefaultCameraGObj(s32 link, u32 link_order, u32 dl_link_order, u32 flags, u32 color)
{
    GObj *gobj = gcMakeCameraGObj
    (
        -1,
        gcUpdateDefault,
        link,
        link_order,
        func_80017DBC,
        dl_link_order,
        0,
        0,
        FALSE,
        nOMObjProcessKindThread,
        NULL,
        0,
        FALSE
    );
    Camera *cam;
    
    if (gobj == NULL)
    {
        return NULL;
    }
    cam = CameraGetStruct(gobj);
    
    cam->flags = flags;
    cam->color = color;
    
    return gobj;
}
