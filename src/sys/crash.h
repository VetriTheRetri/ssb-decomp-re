#ifndef SYS_CRASH_H
#define SYS_CRASH_H

#include <sys/objtypes.h>

#include <PR/ultratypes.h>

extern void gsStartRmonThread8(void);
extern void gsStartRmonThread5Hang(void);
extern void gsDebugPrintF(const char *fmt, ...);
extern void gsSetCrashPrintFunction(void (*)(void));
extern void func_800218E0(s32, s32, s32, s32, s32);
extern GObj* func_80022368(s32 link, u32 arg1, s32 arg2) ;
extern void gsFatalPrintF(const char *fmt, ...);
extern void gsFatalRunPrintFunction(void (*)(void));

#endif /* SYS_CRASH_H */
