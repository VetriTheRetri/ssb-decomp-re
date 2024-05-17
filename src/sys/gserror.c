#include "common.h"
#include "sys/crash.h"

#include "sys/gtl.h"
#include "sys/hal_audio.h"
#include "sys/main.h"
#include "obj.h"
#include "sys/system_00.h"
#include "sys/system_03_1.h"
#include "sys/thread3.h"
#include "sys/thread6.h"

// #include <macros.h> // (included in obj.h)
#include <config.h>
#include <stdarg.h>
#include <string.h>

/*
* These should no longer be here as they're included in objtypes.h
#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/os_internal.h>
#include <PR/ultratypes.h>
*/

// defines

// The varargs functions in this file align the va_list
// This might be due to a change in the va_list macro from 5.3 to 7.1
// But, until that is known as a fact, only do the alignment when
// building for matching IDO code
#if defined(__sgi) && !defined(NON_MATCHING)
#define VA_LIST_ALIGN(ap, paramN) ((ap) = (va_list)ALIGN((uintptr_t)(ap), sizeof((paramN))))
#else
#define VA_LIST_ALIGN(ap, paramN)
#endif

#define HAL_CRASH_MSG_CPU_BREAK ((OSMesg)1)
#define HAL_CRASH_MSG_FAULT     ((OSMesg)2)

#define THREAD8_MAIN_HANG_PRI 105

// 0x8003CBB0
gsRectangle D_8003CBB0[/* */] =
{
    { 0, 0, 3, 0 },
    { 0, 0, 0, 3 },
    { 3, 0, 3, 3 },
    { 0, 3, 3, 3 },
    { 0, 3, 0, 6 },
    { 3, 3, 3, 6 },
    { 0, 6, 3, 6 },
    { 5, 6, 5, 6 }
};

// 0x8003CC30 - // booleans? 0x88; in sets of 8 for 17 sets?
sb32 D_8003CC30[/* */][8] = 
{
    {1, 1, 1, 0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {1, 0, 1, 1, 1, 0, 1, 0},
    {1, 0, 1, 1, 0, 1, 1, 0},
    {0, 1, 1, 1, 0, 1, 0, 0},
    {1, 1, 0, 1, 0, 1, 1, 0},
    {1, 1, 0, 1, 1, 1, 1, 0},
    {1, 0, 1, 0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 0},
    {1, 1, 1, 1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 0, 0},
    {0, 1, 0, 1, 1, 1, 1, 0},
    {0, 0, 0, 1, 1, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 1, 0},
    {1, 1, 0, 1, 1, 0, 1, 0},
    {1, 1, 0, 1, 1, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0}
};

f32 D_8003CE50[/* */] = 
{
    1.0F,
    10.0F,
    100.0F,
    1000.0F,
    10000.0F,
    100000.0F,
    1000000.0F,
    10000000.0F,
    100000000.0F,
    1000000000.0F
};

u8 dActiveCrashScreen = FALSE;

u8 dAsciiToGlyphIDs[/* */] = 
{
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x29, 0xff, 0xff, 0xff, 0x2b, 0xff, 0xff, 0x25, 0x26, 0xff, 0x2a, 0xff, 0x27, 0x2c, 0xff,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x24, 0xff, 0xff, 0xff, 0xff, 0x28,
    0xff, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff
};

// looks to be 7 wide by 6 tall?
u32 dCrashReportGlyphs[/* */] =
{
    0x70871C30, 0x8988A250, 0x88808290, 0x88831C90, 0x888402F8, 0x88882210, 0x71CF9C10, 0xF9CF9C70,
    0x8228A288, 0xF200A288, 0x0BC11C78, 0x0A222208, 0x8A222288, 0x71C21C70, 0x23C738F8, 0x5228A480,
    0x8A282280, 0x8BC822F0, 0xFA282280, 0x8A28A480, 0x8BC738F8, 0xF9C89C08, 0x82288808, 0x82088808,
    0xF2EF8808, 0x82288888, 0x82288888, 0x81C89C70, 0x8A08A270, 0x920DA288, 0xA20AB288, 0xC20AAA88,
    0xA208A688, 0x9208A288, 0x8BE8A270, 0xF1CF1CF8, 0x8A28A220, 0x8A28A020, 0xF22F1C20, 0x82AA0220,
    0x82492220, 0x81A89C20, 0x8A28A288, 0x8A28A288, 0x8A289488, 0x8A2A8850, 0x894A9420, 0x894AA220,
    0x70852220, 0xF8011000, 0x08020800, 0x10840400, 0x20040470, 0x40840400, 0x80020800, 0xF8011000,
    0x70800000, 0x88822200, 0x08820400, 0x108F8800, 0x20821000, 0x00022200, 0x20800020, 0x00000000
};

const char *dCPUExceptionCauses[/* */] = 
{
    "Interrupt",
    "TLB modification",
    "TLB exception on load",
    "TLB exception on store",
    "Address error on load",
    "Address error on store",
    "Bus error on inst.",
    "Bus error on data",
    "System call exception",
    "Breakpoint exception",
    "Reserved instruction",
    "Coprocessor unusable",
    "Arithmetic overflow",
    "Trap exception",
    "Virtual coherency on inst.",
    "Floating point exception",
    "Watchpoint exception",
    "Virtual coherency on data"
};

const char *dFPUExceptionCauses[/* */] =
{
    "Unimplemented operation",
    "Invalid operation",
    "Division by zero",
    "Overflow",
    "Underflow",
    "Inexact operation"
};

s32 dCrashMesgPositionX = 30;
s32 dCrashMesgPositionY = 25;

// bss
void *D_8009DA00;
OSThread sSysThread8CPUFault;
u8 sSysThread8CPUStack[0x800];
OSMesgQueue sSysMesgQueueCPUFault;
OSMesg sSysMesgCPUFault[1];
u32 sUnref8009E3D4;
void (*sCrashPrintFunction)(void);
struct MqListNode D_8009E3E0;
OSMesg D_8009E3E8[1];
OSMesgQueue D_8009E3F0;
OSThread sSysThread8Hang;
u8 sSysThread8HangStack[0x800];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/func_800210C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/func_80021734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/func_800218E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/func_80021908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/unref_80021958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFillRectangleDL.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsDrawControllerInputs.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/func_80022368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferDrawBlackRect.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferWriteGlyph.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsMemcpyAdvance.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferPrintF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsWaitMSec.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferPrintFPReg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferPrintFCSR.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsWaitForFramebufferOrButtons.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferPrintThreadStatus.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsGetFaultedThread.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsSetCrashPrintFunction.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsResetCrashMesgCursor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFramebufferVPrintFNewLine.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsDebugPrintF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsCrashReportCPUBreakFault.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsStartRmonThread8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFileLoaderThread8Crash.s")

void gsFileLoaderThread8Crash(void *arg);
/*
 * Start a debugging thread that checks for hangs in thread5 (maybe?)
 */
void gsStartRmonThread5Hang(void) 
{
    osCreateThread
    (
        &sSysThread8Hang,
        8,
        gsFileLoaderThread8Crash,
        NULL,
        sSysThread8HangStack + sizeof(sSysThread8HangStack),
        THREAD8_MAIN_HANG_PRI
    );
    osStartThread(&sSysThread8Hang);
}

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFatalPrintF.s")

#pragma GLOBAL_ASM("asm/nonmatchings/sys/gserror/gsFatalRunPrintFunction.s")
