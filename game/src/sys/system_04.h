#ifndef SYS_SYSTEM_04_H
#define SYS_SYSTEM_04_H

#include "sys/om.h"

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
    /* 0x08 */ struct Vec3f unk08;
    /* 0x14 */ struct Vec3f unk14;
    /* 0x20 */ struct Vec3f unk20;
}; // size == 0x2C

// data
extern s32 D_8003B930;
extern s32 D_8003B934;
extern s32 D_8003B938;
extern s32 D_8003B93C;

// functions
extern void func_8000BD1C(struct DObj *, union AnimCmd *, f32);
extern void func_8000BD54(struct MObj *, union AnimCmd *, f32);
extern void func_8000BD8C(struct GObjCommon *, union AnimCmd **, f32);
extern void func_8000BE28(struct GObjCommon *, union AnimCmd ***, f32);
extern void func_8000BED8(struct GObjCommon *, union AnimCmd **, union AnimCmd ***, f32);
extern void func_8000BFE8(struct DObj *dobj);
extern f32 func_8000CA28(f32, f32, f32, f32, f32, f32);
extern void func_8000CCBC(struct DObj *dobj);
extern void func_8000CF6C(struct MObj *mobj);
extern void func_8000DA40(struct MObj *mobj);
extern void func_8000DF34(struct GObjCommon *);
extern void func_8000F120(struct GObjCommon *, struct UnkEC64Arg3 *, struct DObj **);
extern void func_8000F2FC(struct DObj *, u8, u8, u8);
extern void func_8000F364(struct DObj *, u8, u8, u8, s32);
extern void func_8000F590(struct GObjCommon *, struct UnkEC64Arg3 *, struct DObj **, u8, u8, u8);
extern void func_8000F720(
    struct GObjCommon *,
    struct UnkEC64Arg3 *,
    struct MObjSub ***,
    struct DObj **,
    u8,
    u8,
    u8);
extern void func_8000F8F4(struct GObjCommon *, struct MObjSub ***);
extern void func_8000F988(struct GObjCommon *, struct UnkEC64Arg3 *);
extern void func_8000FA3C(struct DObj *dobj, union AnimCmd *, f32);
extern void func_80010580(struct GObjCommon *obj);
extern void func_80010734(void *);

// possible real start of system_05
extern void func_80010748(Mtx *, struct DObj *, s32);
extern void func_80010918(Mtx *, struct DObj *, s32);
extern void func_80010AE8(Mtx *, struct DObj *, s32);
extern void func_80010C2C(Mtx *, struct DObj *, s32);

#endif /* SYS_SYSTEM_04_H */
