#ifndef _OBJMANAGER_H_
#define _OBJMANAGER_H_

#include "objtypes.h"

extern s32 D_8003B874_3C474;
extern OMPersp dOMPerspDefault;
extern OMOrtho dOMOrthoDefault;
extern CameraVec dCameraVecDefault;
extern OMTranslate dOMTranslateDefault;
extern OMRotate dOMRotateDefaultAXYZ;
extern OMRotate dOMRotateDefaultRPY;
extern OMScale dOMScaleDefault;

extern GObj *gOMObjCommonLinks[OM_COMMON_MAX_LINKS];
extern GObj *gOMObjCommonDLLinks[OM_COMMON_MAX_DL_LINKS];
extern GObj *D_80046A54; // Something to do with an initial object to be passed to a new GObjProcess
extern GObj *gOMObjCurrentRendering; // Is this exclusively a camera GObj?
extern GObj *D_80046A5C_40A7C;
extern GObjProcess *D_80046A60;
extern OSMesgQueue gOMMesgQueue;
extern OMGfxLink D_80046A88[64];

extern s32 omGetGObjActiveCount(void);
extern GObjThread *omGetGObjThread(void);
extern void omSetGObjThreadPrevAlloc(GObjThread *gobjthread);
extern OMThreadStackNode *omGetStackOfSize(u32 size);
extern OMThreadStackNode *omGetDefaultStack(void);
extern void omEjectStackNode(OMThreadStackNode *node);
extern GObjProcess *omGetGObjProcess(void);
extern void omLinkGObjProcess(GObjProcess *gobjproc);
extern void omSetGObjProcessPrevAlloc(GObjProcess *gobjproc);
extern void func_80007784(GObjProcess *gobjproc);
extern void func_800077D0(GObjProcess *gobjproc);
extern GObjProcess *unref_80007840(void);
extern u64 *unref_8000784C(GObjProcess *gobjproc);
extern u32 unref_80007884(GObjProcess *gobjproc);
extern void unref_800078BC(void (*proc)(GObjProcess *));
extern s32 omGetGObjActiveCount(void);
extern GObj *omGetGObjSetNextAlloc(void);
extern void omSetGObjPrevAlloc(GObj *gobj);
extern void omAppendGObjToLinkedList(GObj *this_gobj, GObj *link_gobj);
extern void omLinkGObjTail(GObj *this_gobj);
extern void omLinkGObjHead(GObj *this_gobj);
extern void omRemoveGObjFromLinkedList(GObj *this_gobj);
extern void omAppendGObjToDLLinkedList(GObj *this_gobj, GObj *dl_link_gobj);
extern void omDLLinkGObjTail(GObj *this_gobj);
extern void omDLLinkGObjHead(GObj *this_gobj);
extern void omRemoveGObjFromDLLinkedList(GObj *this_gobj);
extern OMMtx *omGetOMMtxSetNextAlloc(void);
extern void omSetOMMtxPrevAlloc(OMMtx *ommtx);
extern AObj *omGetAObjSetNextAlloc(void);
extern void omAppendAObjToDObj(DObj *dobj, AObj *aobj);
extern void omAppendAObjToMObj(MObj *mobj, AObj *aobj);
extern void omAppendAObjToCamera(Camera *cam, AObj *aobj);
extern void omSetAObjPrevAlloc(AObj *aobj);
extern MObj *omGetMObjSetNextAlloc(void);
extern void omSetMObjPrevAlloc(MObj *mobj);
extern DObj *omGetDObjSetNextAlloc(void);
extern void omSetDObjPrevAlloc(DObj *dobj);
extern SObj *omGetSObjSetNextAlloc(void);
extern void omSetSObjPrevAlloc(SObj *sobj);
extern Camera *omGetCameraSetNextAlloc(void);
extern void omSetCameraPrevAlloc(Camera *cam);
extern GObjProcess *omAddGObjCommonProc(GObj *gobj, void (*proc)(GObj*), u8 kind, u32 pri);
extern GObjProcess *unref_80008304(GObj *gobj, void (*proc)(GObj*), u32 pri, s32 thread_id, u32 stack_size);
extern void func_8000848C(GObjProcess *gobjproc);
extern OMMtx *omAddOMMtxForDObjVar(DObj *dobj, u8 kind, u8 arg2, s32 ommtx_id);
extern OMMtx *omAddOMMtxForDObjFixed(DObj *dobj, u8 kind, u8 arg2);
extern OMMtx *omAddOMMtxForCamera(Camera *cam, u8 kind, u8 arg2);
extern AObj *omAddAObjForDObj(DObj *dobj, u8 index);
extern void omRemoveAObjFromDObj(DObj *dobj);
extern AObj *omAddAObjForMObj(MObj *mobj, u8 index);
extern void omRemoveAObjFromMObj(MObj *mobj);
extern AObj *omAddAObjForCamera(Camera *cam, u8 index);
extern void omRemoveAObjFromCamera(Camera *cam);
extern MObj *omAddMObjForDObj(DObj *dobj, MObjSub *mobjsub);
extern void omRemoveMObjFromDObj(DObj *dobj);
extern void omInitDObj(DObj *dobj);
extern DObj *omAddDObjForGObj(GObj *gobj, void *dvar);
extern DObj *omAddSiblingForDObj(DObj *dobj, void *dvar);
extern DObj *omAddChildForDObj(DObj *dobj, void *dvar);
extern void omEjectDObj(DObj *dobj);
extern SObj *omAddSObjForGObj(GObj *gobj, Sprite *sprite);
extern void omEjectSObj(SObj *sobj);
extern Camera *omAddCameraForGObj(GObj *gobj);
extern void omEjectCamera(Camera *cam);
extern GObj *omInitGObjCommon(u32 id, void (*proc_eject)(GObj*), u8 link, u32 order);
extern GObj *omMakeGObjCommon(u32 id, void (*proc_eject)(GObj*), u8 link, u32 order);
extern GObj *func_800099A8(u32 id, void (*proc_eject)(GObj*), u8 link, u32 order);
extern GObj *unref_800099E8(u32 id, void (*proc_eject)(GObj*), GObj *link_gobj);
extern GObj *unref_80009A34(u32 id, void (*proc_eject)(GObj*), GObj *link_gobj);
extern void omEjectGObjCommon(GObj *gobj);
extern void omMoveGObjCommon(s32 sw, GObj *this_gobj, u8 link, u32 order, GObj *other_gobj);
extern void func_80009C90(GObj *gobj, u8 link, u32 order);
extern void func_80009CC8(GObj *gobj, u8 link, u32 order);
extern void unref_80009D00(GObj *this_gobj, GObj *other_gobj);
extern void unref_80009D3C(GObj *this_gobj, GObj *other_gobj);
extern void omLinkGObjDLCommon(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 dl_order, s32 arg4);
extern void omAddGObjRenderProc(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 order, s32 arg4);
extern void unref_80009E38(GObj *gobj, void (*proc_render)(GObj*), u8 dl_link, u32 order, s32 arg4);
extern void unref_80009E7C(GObj *this_gobj, void (*proc_render)(GObj*), s32 arg2, GObj *other_gobj);
extern void unref_80009ED0(GObj *this_gobj, void (*proc_render)(GObj*), s32 arg2, GObj *other_gobj);
extern void func_80009F28(GObj *gobj, void (*proc_render)(GObj*), u32 order, u64 arg3, s32 arg4);
extern void func_80009F74(GObj *gobj, void (*proc_render)(GObj*), u32 order, u64 arg3, s32 arg4);
extern void unref_80009FC0(GObj *gobj, void (*proc_render)(GObj*), u32 order, u64 arg3, s32 arg4);
extern void unref_8000A00C(GObj *this_gobj, void (*proc_render)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj);
extern void unref_8000A06C(GObj *this_gobj, void (*proc_render)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj);
extern void omMoveGObjDL(GObj *gobj, u8 dl_link, u32 order);
extern void omMoveGObjDLHead(GObj *gobj, u8 dl_link, u32 order);
extern void unref_8000A1C8(GObj *this_gobj, GObj *other_gobj);
extern void unref_8000A208(GObj *this_gobj, GObj *other_gobj);
extern void func_8000A24C(GObj *gobj, u32 order);
extern void unref_8000A280(GObj *gobj, u32 order);
extern void func_8000A2B4(GObj *this_gobj, GObj *other_gobj);
extern void unref_8000A2EC(GObj *this_gobj, GObj *other_gobj);
extern void omSetMaxNumGObj(s32 num);
extern s16 omGetMaxNumGObj(void);
extern void func_8000A340(void);
extern GObj *func_8000A40C(GObj *gobj);
extern GObjProcess *func_8000A49C(GObjProcess *gobjproc);
extern void func_8000A5E4(void);
extern void omSetupObjectManager(OMSetup *setup);

#endif
