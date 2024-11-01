#ifndef _SYS_ERROR_H_
#define _SYS_ERROR_H_

#include <ssb_types.h>
#include <macros.h>
#include <PR/gbi.h>
#include <PR/os.h>
#include <sys/objdef.h>
#include <stdarg.h>
#include <string.h>

extern void func_800210C0(s32 arg0, s32 arg1, s32 arg2, sb32 arg3);
extern void func_80021734(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_800218E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80021908(s32 arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern void unref_80021958(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void syErrorFillRectangle(Gfx *dl, u32 ulx, u32 uly, u32 lrx, u32 lry);
extern void syErrorControllerFuncDisplay(GObj *gobj);
extern GObj* syErrorMakeControllerCamera(s32 link, u32 link_priority, u32 dl_link_priority);
extern void syErrorFramebufDrawBlackRectangle(s32 ulx, s32 uly, s32 width, s32 height);
extern void syErrorFramebufWriteGlyph(s32 ulx, s32 uly, s32 char_index);
extern char* syErrorMemcpyAdvance(char *dst, const char *src, size_t count);
extern void syErrorFramebufPrintf(s32 ulx, s32 ulr, char *fmt, ...);
extern void syErrorWaitMsec(s32 millisec);
extern void syErrorFramebufPrintFloatReg(s32 x, s32 y, s32 reg_id, f32 *fp_reg);
extern void syErrorFramebufPrintFCSR(u32 fcsr);
extern s32 syErrorWaitFramebufOrController(u32 buttons, void *framebuf);
extern void syErrorFramebufPrintThreadStatus(OSThread *t, sb32 is_show_summary);
extern OSThread* syErrorGetFaultThread(void);
extern void syErrorSetFuncPrint(void (*func_print)(void));
extern void syErrorResetMesgCursor(s32 x, s32 y);
extern void syErrorFramebufVPrintfNewLine(const char *fmt, va_list args);
extern void syErrorDebugPrintf(const char *fmt, ...);
extern void syErrorReportCPUBreakFault(void *arg);
extern void syErrorStartRmonThread8(void);
extern void syErrorFileLoaderThread8(void *arg);
extern void syErrorStartRmonThread5Hang(void);
extern void syErrorPrintf(const char *fmt, ...);
extern void syErrorRunFuncPrint(void (*func_print)(void));

#endif /* SYS_CRASH_H */
