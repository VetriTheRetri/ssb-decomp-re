#ifndef SYS_SYSTEM_03_1_H
#define SYS_SYSTEM_03_1_H

#include "sys/om.h"

#include <macros.h>

#include <PR/sp.h>
#include <PR/ultratypes.h>

extern void func_8000AEF0(s32 idx, void (*cb)(struct GObjCommon *, s32), s32 param);
extern void func_8000AF58(void (*cb)(struct GObjCommon *, s32), s32 param);
extern struct GObjCommon *get_id_from_gobj_idx(s32 idx, u32 id);
extern struct GObjCommon *
func_8000AFE4(s32, struct GObjCommon *(*)(struct GObjCommon *, void *), void *, s32);
extern struct GObjCommon *find_gobj_with_id(u32 id);
extern void func_8000B1C4(UNUSED u32 arg0);
extern void stop_current_process(s32 timesToStop);
extern void func_8000B284(struct GObjCommon *);
extern void func_8000B2B8(struct GObjCommon *);
extern void func_8000B39C(struct GObjCommon *);
extern void func_8000B70C(struct GObjCommon *);
extern void func_8000B760(struct GObjCommon *);
extern void func_8000B7B4(void);
extern struct GObjCommon *func_8000B824(
    u32 arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u8 arg5,
    s32 arg6,
    s32 arg7,
    void *arg8,
    s32 arg9,
    u8 argA,
    void *argB,
    u32 argC);
extern struct GObjCommon *func_8000B8BC(
    u32 arg0,
    void (*arg1)(struct GObjCommon *),
    s32 arg2,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u8 arg5,
    s32 arg6,
    s32 arg7,
    Sprite *arg8,
    u8 arg9,
    void *argA,
    u32 argB);
// what is this struct? is it just `struct GObjCommon`?
extern struct GObjCommon *func_8000B93C(
    u32 id,
    void (*arg1)(struct GObjCommon *),
    s32 link,
    u32 arg3,
    void (*arg4)(struct GObjCommon *),
    u32 arg5,
    s64 arg7,
    s32 arg8,
    s32 arg9,
    s32 arg10,
    void *arg11,
    u32 arg12,
    s32 arg13);
extern struct GObjCommon *func_8000B9FC(s32 link, u32 arg1, s32 arg2, s32 arg3, s32 arg4);
// these might in system_04
extern struct DObj *func_8000BAA0(struct DObj *arg0);
extern void gOMObj_SetAnimPlaybackRate(struct GObjCommon *arg0, f32 arg1);
extern void func_8000BB4C(struct GObjCommon *arg0, f32 arg1);

#endif /* SYS_SYSTEM_03_1_H */
