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
GObj* gcGetByID(GObj *gobj, u32 id)
{
    return (gobj->gobj_id == id) ? gobj : NULL;
}

// 0x8000B16C
GObj* gcFindByLinkAndID(s32 link, u32 id)
{
    return gcApplyByLinkEx(link, gcGetByID, id, TRUE);
}

// 0x8000B198
GObj* gcFindByID(u32 id)
{
    return gcApplyToAllEx(gcGetByID, id, TRUE);
}

// 0x8000B1C4
void gcUpdateDefault(GObj *gobj)
{
    cmdProcessCommands(NULL);
}

// 0x8000B1E8
void gcStopCurrentGObjThread(s32 tics)
{
    if (gOMObjCurrentProcess->gobjthread->osstack[7] != 0xFEDCBA98)
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
void gcPauseGObjProcessAll(GObj *gobj)
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
void gcResumeProcess(GObjProcess *gobjproc)
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
void gcEndAllProcesses(GObj *gobj)
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
void gcMakeDObjMatrixSetsRpyD(DObj* dobj)
{
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyD, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 0x8000B434
void gcMakeDObjMatrixSetsRpyR(DObj *dobj)
{
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyR, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 0x8000B47C
void gcMakeCameraMatrixSets(Camera *cam)
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

        current_dobj = animModelTreeNextNode(current_dobj);
    }
}

// 0x8000B4F8
DObj* gcAddDObjDeg(GObj *gobj, void *dvar)
{
    DObj *dobj = gcAddDObjForGObj(gobj, dvar);
    gcMakeDObjMatrixSetsRpyD(dobj);

    return dobj;
}

// 0x8000B528
DObj* gcAddDObjSibling(DObj *dobj, void *dvar)
{
    DObj *sibling_dobj = gcAddSiblingForDObj(dobj, dvar);
    gcMakeDObjMatrixSetsRpyD(sibling_dobj);

    return sibling_dobj;
}

// 0x8000B558
DObj* gcAddDObjChildDeg(DObj *dobj, void *dvar)
{
    DObj *child_dobj = gcAddChildForDObj(dobj, dvar);
    gcMakeDObjMatrixSetsRpyD(child_dobj);

    return child_dobj;
}

// 0x8000B588
DObj* gcAddDObjRad(GObj *gobj, void *dvar)
{
    DObj *dobj = gcAddDObjForGObj(gobj, dvar);
    gcMakeDObjMatrixSetsRpyR(dobj);

    return dobj;
}

// 0x8000B5B8
DObj* gcAddDObjSiblingRad(DObj *dobj, void *dvar)
{
    DObj *sibling_dobj = gcAddSiblingForDObj(dobj, dvar);
    gcMakeDObjMatrixSetsRpyR(sibling_dobj);

    return sibling_dobj;
}

// 0x8000B5E8
DObj* gcAddDObjChildRad(DObj *dobj, void *dvar)
{
    DObj *child_dobj = gcAddChildForDObj(dobj, dvar);
    gcMakeDObjMatrixSetsRpyR(child_dobj);
    
    return child_dobj;
}

// also missing in snap oh.c
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/unref_8000B618.s")

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
    void (*proc_render)(GObj*),
    u8 dl_link,
    u32 dl_link_order,
    s32 cam_tag,
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
    gcAddGObjDisplay(gobj, proc_render, dl_link, dl_link_order, cam_tag);

    dobj = gcAddDObjForGObj(gobj, dvar);

    if (is_add_default_ommtx != FALSE)
    {
        gcMakeDObjMatrixSetsRpyD(dobj);
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
    void (*proc_render)(GObj*),
    s32 dl_link,
    u32 dl_link_order,
    s32 cam_tag,
    Sprite *sprite,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 priority
)
{
    GObj *gobj = gcMakeGObjSPAfter(id, proc_run, link, link_order);
        
    if (gobj == NULL)
    {
        return NULL;
    }
    gcAddGObjDisplay(gobj, proc_render, dl_link, dl_link_order, cam_tag);
    
    gcAddSObjForGObj(gobj, sprite);
        
    if (proc != NULL)
    {
        gcAddGObjProcess(gobj, proc, gobjproc_kind, priority);
    }
    return gobj;
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/func_8000B93C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/func_8000B9FC.s")

// 0x8000BAA0 non matching in snap anim.c (also probably missing split for anim.c file)
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/animModelTreeNextNode.s")

// 0x8000BB04
void gcSetDObjAnimSpeed(GObj *gobj, f32 anim_speed)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        dobj->anim_speed = anim_speed;
        dobj = animModelTreeNextNode(dobj);
    }
}

// 0x8000BB4C
void gcSetAllAnimSpeed(GObj *gobj, f32 anim_speed)
{
    DObj *dobj = DObjGetStruct(gobj);

    while (dobj != NULL)
    {
        MObj *mobj = dobj->mobj;

        dobj->anim_speed = anim_speed;

        while (mobj != NULL)
        {
            mobj->anim_speed = anim_speed;
            mobj = mobj->next;
        }
        dobj = animModelTreeNextNode(dobj);
    }
}
