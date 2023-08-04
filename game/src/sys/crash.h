#ifndef SYS_CRASH_H
#define SYS_CRASH_H

#include "sys/om.h"

#include <PR/ultratypes.h>

extern void start_thread8_rmon(void);
extern void start_rmon_thread5_hang(void);
extern void debug_printf(const char *fmt, ...);
extern void set_crash_print_fn(void (*)(void));
extern void func_800218E0(s32, s32, s32, s32, s32);
extern struct GObjCommon *func_80022368(s32 link, u32 arg1, s32 arg2);
extern void fatal_printf(const char *fmt, ...);
extern void fatal_print_func(void (*)(void));

#endif /* SYS_CRASH_H */
