#include "common.h"

#include <sys/objtypes.h>
#include <sys/objmanager.h>

extern GObj *gOMObjCommonLinks[OM_COMMON_MAX_LINKS]; // omGObjListHead
extern GObjProcess* omCurrentProcess;
extern GObj* gOMObjCurrentObject;

// 8000AEF0
void gcApplyByLink(s32 link, void (*func)(GObj*, void*), void* param) {
    GObj* curr;
    GObj* next;

    curr = gOMObjCommonLinks[link];
    while (curr != NULL) {
        next = curr->link_next;
        func(curr, param);
        curr = next;
    }
}

// 8000AF58
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/gcApplyToAll.s")
// void gcApplyToAll(void (*cb)(GObj*, void*), void* param) {
//     GObj* curr;
//     GObj* next;
//     s32 link;

//     for (link = 0; link < 32; link++) {
//         curr = gOMObjCommonLinks[link]; // this line is the problem (instruction 0xbb88)
//         while (curr != NULL) {
//             next = curr->link_next;
//             cb(curr, param);
//             curr = next;
//         }
//     }
// }

// 8000AFE4
GObj* gcApplyByLinkEx(s32 link, GObj* (*cb)(GObj*, void*), void* param, s32 onlyOne) {
    GObj* curr;
    GObj* next;
    GObj* ret = NULL;

    curr = gOMObjCommonLinks[link];
    while (curr != NULL) {
        GObj* retVal;

        next = curr->link_next;
        retVal = cb(curr, param);

        if (retVal != NULL) {
            ret = retVal;
            if (onlyOne == TRUE) {
                return ret;
            }
        }
        curr = next;
    }

    return ret;
}

// 8000B08C
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/gcApplyToAllEx.s")
// GObj* gcApplyToAllEx(GObj* (*cb)(GObj*, void*), void* param, s32 onlyOne) {
//     GObj* curr;
//     GObj* next;
//     s32 link;
//     GObj* ret = NULL;

//     for (link = 0; link < 32; link++) {
//         curr = gOMObjCommonLinks[link]; // this line is the problem (instruction 0xbccc)
//         while (curr != NULL) {
//             GObj* retVal;

//             next = curr->link_next;
//             retVal = cb(curr, param);

//             if (retVal != NULL) {
//                 ret = retVal;
//                 if (onlyOne == TRUE) {
//                     return ret;
//                 }
//             }
//             curr = next;
//         }
//     }

//     return ret;
// }

// 8000B14C
GObj* gcCheckId(GObj* obj, void* id) {
    return obj->gobj_id == (u32) id ? obj : NULL;
}

// 8000B16C
GObj* gcFindByLinkAndId(s32 link, u32 id) {
    return gcApplyByLinkEx(link, gcCheckId, (void*) id, TRUE);
}


// 8000B198
GObj* gcFindById(u32 id) {
    return gcApplyToAllEx(gcCheckId, (void*) id, TRUE);
}


// 8000B1C4
void gcUpdateDefault(UNUSED GObj* arg0) {
    cmdProcessCommands(NULL);
}


// 8000B1E8
void gcStopCurrentProcess(s32 numFrames) {
    if (omCurrentProcess->gobjthread->osstack[7] != 0xFEDCBA98) {
        syErrorPrintf("gobjthread stack over  gobjid = %d\n", omCurrentProcess->parent_gobj->gobj_id);
    }

    while (numFrames) {
        osSendMesg(&gOMMesgQueue, (OSMesg) 1, OS_MESG_NOBLOCK);
        osStopThread(NULL);
        numFrames--;
    }
}

// 8000B284
void gcPauseObjectProcesses(GObj* obj) {
    GObjProcess* proc;

    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }

    proc = obj->gobjproc_head;
    while (proc != NULL) {
        proc->is_paused = TRUE;
        proc = proc->link_next;
    }
}


// 8000B2B8
void gcResumeObjectProcesses(GObj* obj) {
    GObjProcess* proc;

    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }

    proc = obj->gobjproc_head;
    while (proc != NULL) {
        proc->is_paused = FALSE;
        proc = proc->link_next;
    }
}


// 8000B2EC
void gcPauseProcess(GObjProcess* proc) {
    if (proc == NULL) {
        proc = omCurrentProcess;
    }

    proc->is_paused = TRUE;
}

// 8000B304
void gcResumeProcess(GObjProcess* proc) {
    if (proc == NULL) {
        proc = omCurrentProcess;
    }

    proc->is_paused = FALSE;
}

// 8000B31C
void gcPauseProcessByFunction(GObj* obj, void (*proc_common)(GObj*)) {
    GObjProcess* proc;

    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }

    proc = obj->gobjproc_head;
    while (proc != NULL) {
        if (proc->proc_common == proc_common) {
            proc->is_paused = TRUE;
        }
        proc = proc->link_next;
    }
}

// 8000B35C
void gcResumeProcessByFunction(GObj* obj, void (*proc_common)(GObj*)) {
    GObjProcess* proc;

    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }

    proc = obj->gobjproc_head;
    while (proc != NULL) {
        if (proc->proc_common == proc_common) {
            proc->is_paused = FALSE;
        }
        proc = proc->link_next;
    }
}

// 8000B39C
void gcEndAllObjectProcesses(GObj* obj) {
    GObjProcess *curr, *next;

    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }

    curr = obj->gobjproc_head;
    while (curr != NULL) {
        next = curr->link_next;
        gcEndProcess(curr);
        curr = next;
    }
}

// 8000B3EC
void gcCreateDefaultMatricesDeg(DObj* dobj) {
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyD, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 8000B434
void gcCreateDefaultMatricesRad(DObj* dobj) {
    gcAddOMMtxForDObjFixed(dobj, nOMTransformTra, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformRotRpyR, 0);
    gcAddOMMtxForDObjFixed(dobj, nOMTransformSca, 0);
}

// 8000B47C
void gcCreateDefaultCameraMatrices(Camera* camera) {
    gcAddOMMtxForCamera(camera, nOMTransformPerspFastF, 0);
    gcAddOMMtxForCamera(camera, nOMTransformLookAt, 0);
}

// 8000B4B4
void gcDobjTreeRemoveAllMObjs(GObj* obj) {
    DObj* curr;

    curr = obj->obj;
    while (curr != NULL) {
        gcRemoveMObjFromDObj(curr);
        curr = animModelTreeNextNode(curr);
    }
}

// 8000B4F8
DObj* gcAddDObjDeg(GObj* obj, void* arg1) {
    DObj* ret = gcAddDObjForGObj(obj, arg1);
    gcCreateDefaultMatricesDeg(ret);
    return ret;
}


// 8000B528
DObj* gcAddDObjSibling(GObj* obj, void* arg1) {
    DObj* ret = gcAddSiblingForDObj(obj, arg1);
    gcCreateDefaultMatricesDeg(ret);
    return ret;
}

// 8000B558
DObj* gcAddDObjChildDeg(GObj* obj, void* arg1) {
    DObj* ret = gcAddChildForDObj(obj, arg1);
    gcCreateDefaultMatricesDeg(ret);
    return ret;
}

// 8000B588
DObj* gcAddDObjRad(GObj* obj, void* arg1) {
    DObj* ret = gcAddDObjForGObj(obj, arg1);
    gcCreateDefaultMatricesRad(ret);
    return ret;
}


// 8000B5B8
DObj* gcAddDObjSiblingRad(GObj* obj, void* arg1) {
    DObj* ret = gcAddSiblingForDObj(obj, arg1);
    gcCreateDefaultMatricesRad(ret);
    return ret;
}

// 8000B5E8
DObj* gcAddDObjChildRad(GObj* obj, void* arg1) {
    DObj* ret = gcAddChildForDObj(obj, arg1);
    gcCreateDefaultMatricesRad(ret);
    return ret;
}

// also missing in snap oh.c
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/unref_8000B618.s")

// 8000B70C
void gcRemoveDObj(GObj* obj) {
    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }
    while (obj->obj != NULL) {
        gcEjectDObj(obj->obj);
    }
}

// 8000B760
void gcRemoveSObj(GObj* obj) {
    if (obj == NULL) {
        obj = gOMObjCurrentObject;
    }
    while (obj->obj != NULL) {
        gcEjectSObj(obj->obj);
    }
}


// 8000B7B4 gcDeleteAllObjects
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/gcDeleteAllObjects.s")
// void gcDeleteAllObjects(void) {
//     GObj* curr;
//     GObj* next;
//     s32 i;

//     for (i = 0; i < 32; i++) {
//         curr = gOMObjCommonLinks[i]; // this line is the problem (instruction 0xc3d4)
//         while (curr != NULL) {
//             next = curr->link_next;
//             gcEjectGObj(curr);
//             curr = next;
//         }
//     }
// }


// 8000B824
GObj* gcCreateModel(s32 objId, void (*objFnUpdate)(GObj*), s32 objLink, s32 objPriority,
                    void (*fnRender)(GObj*), u8 dlLink, s32 dlPriority, s32 cameraTag, void* dobjBP, s32 setMatrices,
                    u8 procKind, void (*procFunc)(GObj*), s32 procPriority) {
    GObj* obj;
    DObj* dobj;

    obj = gcMakeGObjSPAfter(objId, objFnUpdate, objLink, objPriority);
    if (obj == NULL) {
        return NULL;
    }

    gcAddGObjDisplay(obj, fnRender, dlLink, dlPriority, cameraTag);

    dobj = gcAddDObjForGObj(obj, dobjBP);
    if (setMatrices) {
        gcCreateDefaultMatricesDeg(dobj);
    }
    if (procFunc != NULL) {
        gcAddGObjProcess(obj, procFunc, procKind, procPriority);
    }
    return obj;
}


// 8000B8BC
GObj* gcCreateSprite(s32 objId, void (*objFnUpdate)(GObj*), s32 objLink, s32 objPriority,
                     void (*fnRender)(GObj*), u8 dlLink, s32 dlPriority, s32 cameraTag, Sprite* sprite,
                     u8 procKind, void (*procFunc)(GObj*), s32 procPriority) {
    GObj* obj;

    obj = gcMakeGObjSPAfter(objId, objFnUpdate, objLink, objPriority);
    if (obj == NULL) {
        return NULL;
    }

    gcAddGObjDisplay(obj, fnRender, dlLink, dlPriority, cameraTag);
    gcAddSObjForGObj(obj, sprite);
    if (procFunc != NULL) {
        gcAddGObjProcess(obj, procFunc, procKind, procPriority);
    }
    return obj;
}


#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/func_8000B93C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/func_8000B9FC.s")

// 8000BAA0 non matching in snap anim.c (also probably missing split for anim.c file)
#pragma GLOBAL_ASM("asm/nonmatchings/sys/system_03_1/animModelTreeNextNode.s")

// 8000BB04
void animSetModelAnimationSpeed(GObj* obj, f32 speed) {
    DObj* dobj = obj->obj;

    while (dobj != NULL) {
        dobj->anim_speed = speed;
        dobj = animModelTreeNextNode(dobj);
    }
}

// 8000BB4C
void animSetModelAndTextureAnimationSpeed(GObj* obj, f32 speed) {
    DObj* dobj = obj->obj;

    while (dobj != NULL) {
        MObj* mobj = dobj->mobj;
        dobj->anim_speed = speed;
        while (mobj != NULL) {
            mobj->anim_speed = speed;
            mobj = mobj->next;
        }
        dobj = animModelTreeNextNode(dobj);
    }
}