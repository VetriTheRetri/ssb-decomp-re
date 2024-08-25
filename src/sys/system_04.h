#ifndef SYS_SYSTEM_04_H
#define SYS_SYSTEM_04_H

#include <sys/objtypes.h>

#include <ssb_types.h>

#include <PR/ultratypes.h>

// defines

// Negation of VAX F_Float upper bound??
#define LOWER_BOUND           -1.7014117e38
#define PROCESSED_DEFAULT     -1.1342745e38
#define FLOAT_MAYBE_SCALE_MIN -1.1342745e38f

// structs

struct UnkEC64Arg3 {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ Vec3f unk08;
    /* 0x14 */ Vec3f unk14;
    /* 0x20 */ Vec3f unk20;
}; // size == 0x2C

// data
extern s32 dODScreenLrxDefault;
extern s32 dODScreenLryDefault;
extern s32 dODScreenUlxDefault;
extern s32 dODScreenUlyDefault;

// functions
extern void gcAddDObjAnimJoint(DObj*, AObjEvent*, f32);
extern void gcAddMObjMatAnimJoint(MObj*, AObjEvent*, f32);
extern void func_8000BD8C(struct GObjCommon *, union AnimCmd **, f32);
extern void func_8000BE28(struct GObjCommon *, union AnimCmd ***, f32);
extern void func_8000BED8(struct GObjCommon *, union AnimCmd **, union AnimCmd ***, f32);
extern void func_8000BFE8(struct DObj *dobj);
extern f32 func_8000CA28(f32, f32, f32, f32, f32, f32);
extern void func_8000CCBC(struct DObj *dobj);
extern void func_8000CF6C(struct MObj *mobj);
extern void func_8000DA40(struct MObj *mobj);
extern void func_8000DF34(struct GObjCommon *);
extern void gcSetupCommonDObjs(struct GObjCommon *, struct UnkEC64Arg3 *, struct DObj **);
extern void func_8000F2FC(struct DObj *, u8, u8, u8);
extern void func_8000F364(struct DObj *, u8, u8, u8, s32);
// extern void gcSetupCustomDObjs(struct GObjCommon *, struct UnkEC64Arg3 *, struct DObj **, u8, u8, u8);
/* extern void gcSetupCustomDObjsWithMObj(
    struct GObjCommon *,
    struct UnkEC64Arg3 *,
    struct MObjSub ***,
    struct DObj **,
    u8,
    u8,
    u8);

extern void gcAddMObjAll(struct GObjCommon *, struct MObjSub ***);
extern void gcSetDObjTransformsForGObj(struct GObjCommon *, struct UnkEC64Arg3 *);
*/

// extern void gcAddCameraCamAnimJoint(struct DObj *dobj, union AnimCmd *, f32);
// extern void gcPlayCamAnim(struct GObjCommon *obj);
// extern void gcSetMatrixProcess(void *);

// possible real start of system_05

/*
extern void func_80010748(Mtx *, struct DObj *, s32);
extern void func_80010918(Mtx *, struct DObj *, s32);
extern void func_80010AE8(Mtx *, struct DObj *, s32);
extern void func_80010C2C(Mtx *, struct DObj *, s32);
*/

#endif /* SYS_SYSTEM_04_H */
