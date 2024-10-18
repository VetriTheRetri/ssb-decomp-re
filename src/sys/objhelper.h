#ifndef _OBJHELPER_H_
#define _OBJHELPER_H_

#include <sys/objtypes.h>

extern void gcApplyByLink(s32 link, void (*proc)(GObj*, u32), u32 param);
extern void gcApplyToAll(void (*proc)(GObj*, u32), u32 param);
extern GObj* gcApplyByLinkEx(s32 link, GObj* (*proc)(GObj*, u32), u32 param, sb32 is_return_immediate);
extern GObj* gcApplyToAllEx(GObj* (*proc)(GObj*, u32), u32 param, sb32 is_return_immediate);
extern GObj* gcGetGObjByID(GObj *gobj, u32 id);
extern GObj* gcFindGObjByLinkAndID(s32 link, u32 id);
extern GObj* gcFindGObjByID(u32 id);
extern void gcUpdateDefault(GObj *gobj);
extern void gcStopCurrentGObjThread(s32 tics);
extern void gcPauseProcessAll(GObj *gobj);
extern void gcResumeProcessAll(GObj *gobj);
extern void gcPauseGObjProcess(GObjProcess *gobjproc);
extern void gcResumeGObjProcess(GObjProcess *gobjproc);
extern void gcPauseProcessByProc(GObj *gobj, void (*proc_common)(GObj*));
extern void gcResumeProcessByProc(GObj *gobj, void (*proc_common)(GObj*));
extern void gcEndProcessAll(GObj *gobj);
extern void gcAddDObjMatrixSetsRpyD(DObj* dobj);
extern void gcAddDObjMatrixSetsRpyR(DObj* dobj);
extern void gcAddCameraMatrixSets(Camera *cam);
extern void gcRemoveTreeMObjAll(GObj *gobj);
extern DObj* gcAddDObjRpyD(GObj *gobj, void *dvar);
extern DObj* gcAddDObjSiblingRpyD(DObj *dobj, void *dvar);
extern DObj* gcAddDObjChildRpyD(DObj *dobj, void *dvar);
extern DObj* gcAddDObjRpyR(GObj *gobj, void *dvar);
extern DObj* gcAddDObjSiblingRpyR(DObj *dobj, void *dvar);
extern DObj* gcAddDObjChildRpyR(DObj *dobj, void *dvar);
extern void gcRemoveDObjAll(GObj *gobj);
extern void gcRemoveSObjAll(GObj *gobj);
extern void gcEjectAll(void);
extern GObj* gcMakeModelGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*func_display)(GObj*),
    u8 dl_link,
    u32 dl_link_order,
    u32 cam_tag,
    void *dvar,
    sb32 is_add_default_ommtx,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
);
extern GObj* gcMakeSpriteGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*func_display)(GObj*),
    s32 dl_link,
    u32 dl_link_order,
    u32 cam_tag,
    Sprite *sprite,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
);
GObj* gcMakeCameraGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_order,
    void (*func_display)(GObj*),
    u32 dl_link_order,
    u64 cam_mask,
    u32 cam_tag,
    sb32 is_add_default_ommtx,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority,
    sb32 argD
);
extern GObj* gcMakeDefaultCameraGObj(s32 link, u32 link_order, u32 dl_link_order, u32 flags, u32 color);

#endif
