#ifndef SYS_OBJ_RENDERER_H
#define SYS_OBJ_RENDERER_H

#include "sys/om.h"
#include "obj.h"

#include <PR/gbi.h>
#include <PR/mbi.h>
#include <PR/ultratypes.h>

extern Gfx *gDisplayListHead[4];

#define hlMatrixStoreGBI(mtx_store, mtx_heap) \
(mtx_store.gbi = mtx_heap.ptr, mtx_heap.ptr = (Mtx*)mtx_heap.ptr + 1) \

// should be a concrete pointer type
struct MtxProcTemp {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
};

// gbi Mtx * ? pointer to some sort of matrix
extern u32 *D_80046FA0;
extern f32 D_80046FA4;
extern Mtx4f D_80046FA8;
extern struct MtxProcTemp *D_800470AC;

extern s32 odRenderDObjMain(Gfx **arg0, struct DObj *arg1);
extern void odRenderMObjForDObj(struct DObj *arg0, Gfx **arg1);
extern void odRenderDObjDLHead0(struct GObjCommon *gobj);
extern void odRenderDObjDLHead1(struct GObjCommon *gobj);
extern void unref_80013EB0(struct GObjCommon *gobj);
extern void unref_80013ED4(struct GObjCommon *gobj);
extern void odRenderDObjTreeForGObj(struct GObjCommon *gobj);
extern void odRenderDObjDLLinksForGObj(struct GObjCommon *obj);
extern void func_80014430(void);
extern void odRenderDObjTreeDLLinksForGObj(struct GObjCommon *obj);
extern void func_80016338(Gfx **, struct Camera *, s32);
extern void func_8001663C(Gfx **dlist, struct Camera *cam, s32 arg2);
extern void func_80016EDC(Gfx **, struct Camera *);
extern void func_80017830(s32);
extern void func_8001783C(struct Camera *cam, s32 cbarg);
extern void func_80017B80(struct GObjCommon *obj, s32 arg1);
extern void func_80017CC8(struct Camera *cam);
extern void func_80017DBC(struct GObjCommon *);
extern void unref_80017DE4(struct GObjCommon *obj);
extern void unref_80017E0C(struct GObjCommon *obj);
extern void unref_80017E34(struct GObjCommon *obj);
extern void func_80017EC0(struct GObjCommon *obj);
extern void func_80018300(struct GObjCommon *obj);

#endif /* SYS_OBJ_RENDERER_H */
