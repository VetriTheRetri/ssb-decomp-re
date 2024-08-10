#include "common.h"
#include <sys/error.h>

#include <sys/gtl.h>
#include <sys/hal_audio.h>
#include <sys/main.h>
#include <sys/obj.h>
#include <sys/system_00.h>
#include <sys/system_03_1.h>
#include <sys/thread3.h>
#include <sys/thread6.h>

// #include <macros.h> // (included in obj.h)
#include <config.h>

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
syRectangle D_8003CBB0[/* */] =
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

ub8 dSYErrorIsScreenActive = FALSE;

u8 dSYErrorAsciiToGlyphIDs[/* */] = 
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
u32 dSYErrorGlyphs[/* */] =
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

const char *dSYErrorCPUExceptions[/* */] = 
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

const char *dSYErrorFPUExceptions[/* */] =
{
    "Unimplemented operation",
    "Invalid operation",
    "Division by zero",
    "Overflow",
    "Underflow",
    "Inexact operation"
};

s32 dSYErrorMesgPositionX = 30;
s32 dSYErrorMesgPositionY = 25;

// bss
void *D_8009DA00;
OSThread sSYErrorThread8CPUFault;
u8 sSYErrorThread8CPUStack[0x800];
OSMesgQueue sSYErrorMesgQueueCPUFault;
OSMesg sSYErrorMesgCPUFault[1];
u32 sUnref8009E3D4;
void (*sSYErrorFuncPrint)(void);
MqListNode D_8009E3E0;
OSMesg D_8009E3E8[1];
OSMesgQueue D_8009E3F0;
OSThread sSYErrorThread8Hang;
u8 sSYErrorThread8HangStack[0x800];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// 0x800210C0
void func_800210C0(s32 arg0, s32 arg1, s32 arg2, sb32 arg3)
{
    if ((arg2 >= 0) && (arg2 < ARRAY_COUNT(D_8003CC30)))
    {
        Gfx *dl = gDisplayListHead[0];
        syRectangle *boxsize = D_8003CBB0;
        s32 *line = D_8003CC30[arg2];
        s32 i;

        for (i = 0; i < (ARRAY_COUNT(D_8003CBB0) - 1); i++, line++, boxsize++)
        {
            if (*line == 0)
            {
                continue;
            }
            else
            {
                gDPFillRectangle
                (
                    dl++,
                    ((arg0 + boxsize->ulx) * gSYDisplayResWidth) / GS_SCREEN_WIDTH_DEFAULT,
                    ((arg1 + boxsize->uly) * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT,
                    ((arg0 + boxsize->lrx) * gSYDisplayResWidth) / GS_SCREEN_WIDTH_DEFAULT,
                    ((arg1 + boxsize->lry) * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT
                );
            }
        }
        D_8009DA00 = boxsize;

        if (arg3 != 0)
        {
            gDPFillRectangle
            (
                dl++,
                ((arg0 + boxsize->ulx) * gSYDisplayResWidth) / GS_SCREEN_WIDTH_DEFAULT,
                ((arg1 + boxsize->uly) * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT,
                ((arg0 + boxsize->lrx) * gSYDisplayResWidth) / GS_SCREEN_WIDTH_DEFAULT,
                ((arg1 + boxsize->lry) * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT
            );
        }
        D_8009DA00 = boxsize;
        gDisplayListHead[0] = dl;
    }
}

// 0x80021734
void func_80021734(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    s32 s6 = 0;
    s32 i;

    if ((arg3 > 0) && (arg3 < (gSYDisplayResWidth - arg0) / 7))
    {
        arg0 += (arg3 * 7);
        arg0 -= 7;

        if (arg2 < 0)
        {
            arg2 = -arg2;
            s6 = 1;
        }
        if (arg4 <= 0)
        {
            arg4 = -1;
        }
        for (i = 0; s6 < arg3; i++, arg0 -= 7, arg3--)
        {
            func_800210C0(arg0, arg1, (arg2 % 10) % 16U, arg4-- == 0);

            arg2 /= 10;

            if ((arg5 != 0) && (arg2 == 0) && (arg4 < 0))
            {
                arg0 -= 7;
                break;
            }
        }
        if (s6 != 0)
        {
            func_800210C0(arg0, arg1, 16, FALSE);
        }
    }
}

// 0x800218E0
void func_800218E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    func_80021734(arg0, arg1, arg2, arg3, 0, arg4);
}

// 0x80021908
void func_80021908(s32 arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
    func_80021734(arg0, arg1, D_8003CE50[arg4] * arg2, arg3, arg4, arg5);
}

// 0x80021958
void unref_80021958(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    if ((arg3 > 0) && (arg3 < (gSYDisplayResWidth - arg0) / 7))
    {
        arg0 += (arg3 * 7), arg0 -= 7;

        while (arg3 > 0)
        {
            func_800210C0(arg0, arg1, arg2 % 16U /* & 0xF */, FALSE);

            arg2 >>= 4;

            if ((arg4 != 0) && (arg2 == 0))
            {
                break;
            }
            else arg0 -= 7, arg3--;
        }
    }
}

void syErrorFillRectangle(Gfx *dl, u32 ulx, u32 uly, u32 lrx, u32 lry)
{
    gDPFillRectangle
    (
        dl,
        (gSYDisplayResWidth * ulx) / GS_SCREEN_WIDTH_DEFAULT,
        (uly * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT,
        (gSYDisplayResWidth * lrx) / GS_SCREEN_WIDTH_DEFAULT,
        (lry * gSYDisplayResHeight) / GS_SCREEN_HEIGHT_DEFAULT
    );
}

// 0x80021B30
void syErrorDrawControllerInputs(GObj *gobj)
{
    gsController *controller = &gSysController;
    s32 offset_x = 60;
    s32 offset_y = 210;
    s32 i, j;

    func_80016338(gDisplayListHead, CameraGetStruct(gobj), 0);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0xFF, 0xFF)));
    func_800218E0(60, 179, controller->stick_range.x, 3, TRUE);
    func_800218E0(92, 179, controller->stick_range.y, 3, TRUE);

    // 0.00390625 is 1 / 1256, but it doesn't want to autoconvert
    func_80021908(offset_x, 195, D_80046610 * 0.00390625F, 5, 2, TRUE);
    offset_x += 35;

    func_80021908(offset_x, 195, D_80046614 * 0.00390625F, 5, 2, TRUE);
    offset_x += 35;

    func_80021908(offset_x, 195, D_80044FB4_407C4 * 0.00390625F, 5, 2, TRUE);
    offset_x += 35;

    func_80021908
    (
        offset_x,
        195,
        (D_80046610 * 0.00390625F) + (D_80046614 * 0.00390625F) + (D_80044FB4_407C4 * 0.00390625F),
        5,
        2,
        TRUE
    );
    offset_x += 70;

    func_80021908(offset_x, 195, D_8009D2D0 * 0.00390625F, 5, 2, TRUE);
    offset_x += 35;

    func_80021908(offset_x, 195, D_80044FB8_407C8 * 0.00390625F, 5, 2, TRUE);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0xFF, 0x00, 0x00, 0xFF)));
    syErrorFillRectangle(gDisplayListHead[0]++, 30, offset_y, ((D_80046610 / 4 > 256) ? 256 : D_80046610 / 4) + 30, offset_y + 1);
    offset_y += 2;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0xFF, 0x00, 0xFF, 0xFF)));
    syErrorFillRectangle(gDisplayListHead[0]++, 30, offset_y, ((D_80046614 / 4 > 256) ? 256 : D_80046614 / 4) + 30, offset_y + 1);
    offset_y += 2;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0x00, 0xFF, 0x00, 0xFF)));
    syErrorFillRectangle(gDisplayListHead[0]++, 30, offset_y, ((D_80044FB4_407C4 / 4 > 256) ? 256 : D_80044FB4_407C4 / 4) + 30, offset_y + 1);
    offset_y += 2;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0x00, 0xFF)));
    syErrorFillRectangle(gDisplayListHead[0]++, 30, offset_y, ((D_8009D2D0 / 4 > 256) ? 256 : D_8009D2D0 / 4) + 30, offset_y + 1);
    offset_y += 2;

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0x00, 0xFF, 0xFF, 0xFF)));
    syErrorFillRectangle(gDisplayListHead[0]++, 30, offset_y, ((D_80044FB8_407C8 / 4 > 256) ? 256 : D_80044FB8_407C8 / 4) + 30, offset_y + 1);

    // controller buttons
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0xFF, 0xFF, 0x00, 0xFF)));

    for (i = 0; i < 16; i++)
    {
        if (gSysController.button_press & (1 << i))
        {
            syErrorFillRectangle(gDisplayListHead[0]++, (i * 4) + 30, 206, (i * 4) + 33, 208);
        }
    }
    // controller stick
    syErrorFillRectangle
    (
        gDisplayListHead[0]++,
        controller->stick_range.x / 4 + 39,
        -controller->stick_range.y / 4 + 184,
        controller->stick_range.x / 4 + 41,
        -controller->stick_range.y / 4 + 186
    );
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetFillColor(gDisplayListHead[0]++, syGetFillColor(GPACK_RGBA8888(0x10, 0x10, 0x10, 0xFF)));

    for (j = 30, i = 350; j != i; j += 64)
    {
        syErrorFillRectangle(gDisplayListHead[0]++, j, 210, j, 220);

        if (D_8009D2D0 && D_8009D2D0); // Eww... Oh, well.
    }
    syErrorFillRectangle(gDisplayListHead[0]++, 40, 165, 40, 205);
    syErrorFillRectangle(gDisplayListHead[0]++, 20, 185, 60, 185);

    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

GObj* func_80022368(s32 link, u32 arg1, s32 arg2)
{
    if (find_gobj_with_id(-2U) != 0)
    {
        return NULL;
    }
    else return func_8000B93C
    (
        -2U, 
        (void (*)())func_8000B1C4, 
        link, 
        arg1,
        syErrorDrawControllerInputs, 
        arg2,
        0, 
        0, 
        0, 
        0, 
        NULL,
        0, 
        0
    );
}

void syErrorFramebufDrawBlackRectangle(s32 ulx, s32 uly, s32 width, s32 height)
{
    u16 *fb = (u16*)osViGetCurrentFramebuffer() + (gSYDisplayResWidth * uly) + (ulx);
    s32 i;
    s32 j;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++, fb++)
        {
            *fb = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01);
        }
        fb += (gSYDisplayResWidth - width);
    }
}

// 0x800224C0 - write glyph to frame buffer?
void syErrorFramebufWriteGlyph(s32 ulx, s32 uly, s32 char_index)
{
    s32 i;
    s32 j;
    u32 init_mask;
    u32 current_mask;
    u32 *char_offset;
    u16 *fb;
    u32 el;

    char_offset = &dSYErrorGlyphs[char_index / 5 * 7];
    init_mask = 0x80000000 >> ((char_index % 5) * 6);
    fb = (u16*)osViGetCurrentFramebuffer() + (gSYDisplayResWidth * uly) + ulx;

    for (i = 0; i < 7; i++, fb += (gSYDisplayResWidth - 6))
    {
        for (j = 0, el = *char_offset++, current_mask = init_mask; j < 6; j++, fb++, current_mask >>= 1)
        {
            if (current_mask & el)
            {
                *fb = GPACK_RGBA5551(0xFF, 0xFF, 0xFF, 0x01);
            }
            else *fb = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01);
        }
    }
}

// memcpy and return pointer to end of copy in `dst`
// `proutSprintf` in libultra
char* syErrorMemcpyAdvance(char *dst, const char *src, size_t count)
{
    return (char*)memcpy(dst, src, count) + count;
}

// in libultra/libc/xstdio.h
typedef char *outfun(char *, const char *, size_t);
extern int _Printf(outfun prout, char *arg, const char *fmt, va_list args);

void syErrorFramebufPrintf(s32 ulx, s32 ulr, char *fmt, ...)
{
    u8 *csr;
    u32 glyph;
    s32 ans;
    char buf[0x100];
    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);
    ans = _Printf(syErrorMemcpyAdvance, buf, fmt, ap);
    va_end(ap);

    if (ans > 0) 
    {
        csr = (u8*)buf;

        while (ans > 0) 
        {
            glyph = dSYErrorAsciiToGlyphIDs[*csr & 0x7F];

            if (glyph != 0xFF)
            { 
                syErrorFramebufWriteGlyph(ulx, ulr, glyph);
            }
            ans--;
            csr++;
            ulx += 6;
        }
    }
}

void syErrorWaitMsec(s32 millisec)
{
    OSTime cycles = OS_USEC_TO_CYCLES(millisec * 1000ULL);

    osSetTime(0);

    while (osGetTime() < cycles)
    {
        continue;
    }
}

void syErrorFramebufPrintFloatReg(s32 x, s32 y, s32 reg_id, f32 *fp_reg)
{
    u32 byterep = *(u32*)fp_reg;
    s32 small = ((byterep & 0x7F800000) >> 23) - 127;

    if ((small >= -126 && small < 128) || byterep == 0) 
    {
        syErrorFramebufPrintf(x, y, "F%02d:%.3e", reg_id, (f64)*fp_reg);
    } 
    else syErrorFramebufPrintf(x, y, "F%02d:%08XH", reg_id, byterep);
}

void syErrorFramebufPrintFCSR(u32 fcsr)
{
    s32 i;
    u32 mask = 0x20000;

    syErrorFramebufPrintf(30, 155, "FPCSR:%08XH", fcsr);

    for (i = 0; i < ARRAY_COUNT(dSYErrorFPUExceptions); i++)
    {
        if (fcsr & mask)
        {
            syErrorFramebufPrintf(132, 155, "(%s)", dSYErrorFPUExceptions[i]);
            break;
        }
        else mask >>= 1;
    }
}

s32 syErrorWaitFramebufOrController(u32 buttons, void *framebuf)
{
    while (TRUE) 
    {
        syErrorWaitMsec(16);
        update_contdata();

        if ((framebuf != NULL) && (osViGetCurrentFramebuffer() != framebuf))
        {
            return TRUE;
        }
        if (buttons == gSysController.button_press) 
        {
            return FALSE; 
        }
    }
}

void syErrorFramebufPrintThreadStatus(OSThread *t, sb32 is_show_summary)
{
    s16 adjusted_cause;
    __OSThreadContext *ctx;
    s32 stackOffset;
    s32 y;
    u8 *stack_csr;

    adjusted_cause = (t->context.cause >> 2) & 31;
    // WATCH_POINT
    if (adjusted_cause == 23)
    { 
        adjusted_cause = 16; 
    }
    // Virt. Coherency on data read
    if (adjusted_cause == 31)
    { 
        adjusted_cause = 17;
    }
    osWritebackDCacheAll();

    if (is_show_summary != FALSE) 
    {
        ctx = &t->context;
        syErrorFramebufDrawBlackRectangle(25, 20, 270, 25);
        syErrorFramebufPrintf(30, 25, "THREAD:%d  (%s)", t->id, dSYErrorCPUExceptions[adjusted_cause]);
        syErrorFramebufPrintf(30, 35, "PC:%08XH   SR:%08XH   VA:%08XH", ctx->pc, ctx->sr, ctx->badvaddr);
        osWritebackDCacheAll();
        syErrorWaitFramebufOrController(0, NULL);
        syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
    }

    // register dump
    ctx = &t->context;
    syErrorFramebufDrawBlackRectangle(25, 20, 270, 210);
    syErrorFramebufPrintf(30, 25, "THREAD:%d  (%s)", t->id, dSYErrorCPUExceptions[adjusted_cause]);
    syErrorFramebufPrintf(30, 35, "PC:%08XH   SR:%08XH   VA:%08XH", ctx->pc, ctx->sr, ctx->badvaddr);
    syErrorFramebufPrintf(30, 50, "AT:%08XH   V0:%08XH   V1:%08XH", (u32)ctx->at, (u32)ctx->v0, (u32)ctx->v1);
    syErrorFramebufPrintf(30, 60, "A0:%08XH   A1:%08XH   A2:%08XH", (u32)ctx->a0, (u32)ctx->a1, (u32)ctx->a2);
    syErrorFramebufPrintf(30, 70, "A3:%08XH   T0:%08XH   T1:%08XH", (u32)ctx->a3, (u32)ctx->t0, (u32)ctx->t1);
    syErrorFramebufPrintf(30, 80, "T2:%08XH   T3:%08XH   T4:%08XH", (u32)ctx->t2, (u32)ctx->t3, (u32)ctx->t4);
    syErrorFramebufPrintf(30, 90, "T5:%08XH   T6:%08XH   T7:%08XH", (u32)ctx->t5, (u32)ctx->t6, (u32)ctx->t7);
    syErrorFramebufPrintf(30, 100, "S0:%08XH   S1:%08XH   S2:%08XH", (u32)ctx->s0, (u32)ctx->s1, (u32)ctx->s2);
    syErrorFramebufPrintf(30, 110, "S3:%08XH   S4:%08XH   S5:%08XH", (u32)ctx->s3, (u32)ctx->s4, (u32)ctx->s5);
    syErrorFramebufPrintf(30, 120, "S6:%08XH   S7:%08XH   T8:%08XH", (u32)ctx->s6, (u32)ctx->s7, (u32)ctx->t8);
    syErrorFramebufPrintf(30, 130, "T9:%08XH   GP:%08XH   SP:%08XH", (u32)ctx->t9, (u32)ctx->gp, (u32)ctx->sp);
    syErrorFramebufPrintf(30, 140, "S8:%08XH   RA:%08XH", (u32)ctx->s8, (u32)ctx->ra);
    syErrorFramebufPrintFCSR(ctx->fpcsr);
    syErrorFramebufPrintFloatReg(30, 170, 0, &ctx->fp0.f.f_even);
    syErrorFramebufPrintFloatReg(120, 170, 2, &ctx->fp2.f.f_even);
    syErrorFramebufPrintFloatReg(210, 170, 4, &ctx->fp4.f.f_even);
    syErrorFramebufPrintFloatReg(30, 180, 6, &ctx->fp6.f.f_even);
    syErrorFramebufPrintFloatReg(120, 180, 8, &ctx->fp8.f.f_even);
    syErrorFramebufPrintFloatReg(210, 180, 10, &ctx->fp10.f.f_even);
    syErrorFramebufPrintFloatReg(30, 190, 12, &ctx->fp12.f.f_even);
    syErrorFramebufPrintFloatReg(120, 190, 14, &ctx->fp14.f.f_even);
    syErrorFramebufPrintFloatReg(210, 190, 16, &ctx->fp16.f.f_even);
    syErrorFramebufPrintFloatReg(30, 200, 18, &ctx->fp18.f.f_even);
    syErrorFramebufPrintFloatReg(120, 200, 20, &ctx->fp20.f.f_even);
    syErrorFramebufPrintFloatReg(210, 200, 22, &ctx->fp22.f.f_even);
    syErrorFramebufPrintFloatReg(30, 210, 24, &ctx->fp24.f.f_even);
    syErrorFramebufPrintFloatReg(120, 210, 26, &ctx->fp26.f.f_even);
    syErrorFramebufPrintFloatReg(210, 210, 28, &ctx->fp28.f.f_even);
    syErrorFramebufPrintFloatReg(30, 220, 30, &ctx->fp30.f.f_even);
    osWritebackDCacheAll();
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);

    // stack dump
    syErrorFramebufDrawBlackRectangle(25, 20, 270, 210);

    stack_csr = (u8*)(uintptr_t)ctx->sp;

    syErrorFramebufPrintf(26, 20, "SP Base %08x", (u32)stack_csr);

    y = 30;

    for (stackOffset = 0; stackOffset < 0x98; stackOffset += 8) 
    {
        u32 word  = *(u32*)stack_csr;
        s32 small = ((word & 0x7F800000) >> 23) - 127;

        if ((small >= -126 && small < 128) || word == 0) 
        {
            syErrorFramebufPrintf
            (
                26,
                y,
                "%03d:%02x%02x%02x%02x %.3e",
                stackOffset,
                stack_csr[0],
                stack_csr[1],
                stack_csr[2],
                stack_csr[3],
                (f64) *(f32*)stack_csr
            );
        } 
        else 
        {
            syErrorFramebufPrintf
            (
                26,
                y,
                "%03d:%02x%02x%02x%02x %08x",
                stackOffset,
                stack_csr[0],
                stack_csr[1],
                stack_csr[2],
                stack_csr[3],
                word
            );
        }

        stack_csr += 4;
        word  = *(u32*)stack_csr;
        small = ((word & 0x7F800000) >> 23) - 127;

        if ((small >= -126 && small < 128) || word == 0) 
        {
            syErrorFramebufPrintf
            (
                172,
                y,
                ":%02x%02x%02x%02x %.3e",
                stack_csr[0],
                stack_csr[1],
                stack_csr[2],
                stack_csr[3],
                (f64) *(f32*)stack_csr
            );
        } 
        else 
        {
            syErrorFramebufPrintf
            (
                172,
                y,
                ":%02x%02x%02x%02x %08x",
                stack_csr[0],
                stack_csr[1],
                stack_csr[2],
                stack_csr[3],
                word
            );
        }
        y += 10;
        stack_csr += 4;
    }
    osWritebackDCacheAll();
}

OSThread* syErrorGetFaultThread(void)
{
    OSThread *thread = __osGetActiveQueue();

    while (thread->priority != -1)
    {
        if 
        (
            thread->priority > OS_PRIORITY_IDLE &&
            thread->priority < OS_PRIORITY_APPMAX && 
            (thread->flags & (OS_FLAG_CPU_BREAK | OS_FLAG_FAULT))
        )
        {
            return thread;
        }
        else thread = (OSThread*)thread->tlnext;
    }

    return NULL;
}

/*
 * Set a function to call when a crash screen is displayed
 */
void syErrorSetFuncPrint(void (*func_print)(void))
{
    sSYErrorFuncPrint = func_print;
}

void syErrorResetMesgCursor(s32 x, s32 y)
{
    dSYErrorMesgPositionX = x;
    dSYErrorMesgPositionY = y;
}

void syErrorFramebufVPrintfNewLine(const char *fmt, va_list args)
{
    u32 glyph;
    s32 ans;
    char buf[0x100]; // sp48
    u8 *csr;

    ans = _Printf(syErrorMemcpyAdvance, buf, fmt, args);

    if (ans > 0) 
    {
        csr = (u8*)buf;

        while (ans > 0) 
        {
            glyph = dSYErrorAsciiToGlyphIDs[*csr & 0x7F];

            if (*csr == '\n') 
            {
                dSYErrorMesgPositionX = 30;
                dSYErrorMesgPositionY += 10;
            } 
            else
            {
                if (glyph != 0xFF) 
                { 
                    syErrorFramebufWriteGlyph(dSYErrorMesgPositionX, dSYErrorMesgPositionY, glyph);
                }
                dSYErrorMesgPositionX += 6;

                if (gSYDisplayResWidth - 30 < dSYErrorMesgPositionX)
                {
                    dSYErrorMesgPositionX = 30;
                    dSYErrorMesgPositionY += 10;
                }
            }
            ans--;
            csr++;
        }
    }
    osWritebackDCacheAll();
}

/*
 * printf to an active crash/debug screen.
 *
 * You can call this function to print to a debug screen only when
 * a screen is active. Thus, you want to wrap calls to `syErrorDebugPrintf`
 * in a function and have that wrapper function to be called when a
 * crash occurs. You can do that by passing that wrapper function to `syErrorSetFuncPrint`,
 * or by calling `syErrorRunFuncPrint` with the wrapper function.
 */
void syErrorDebugPrintf(const char *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);

    syErrorFramebufVPrintfNewLine(fmt, ap);

    va_end(ap);
}

void syErrorReportCPUBreakFault(UNUSED void *arg)
{
    OSMesg msg[1];
    OSThread *thread;

    osSetEventMesg(OS_EVENT_CPU_BREAK, &sSYErrorMesgQueueCPUFault, HAL_CRASH_MSG_CPU_BREAK);
    osSetEventMesg(OS_EVENT_FAULT, &sSYErrorMesgQueueCPUFault, HAL_CRASH_MSG_FAULT);

    do 
    {
        osRecvMesg(&sSYErrorMesgQueueCPUFault, msg, OS_MESG_BLOCK);
        thread = syErrorGetFaultThread();
    }
    while (thread == NULL);

    dSYErrorIsScreenActive = TRUE;

    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(U_JPAD | U_CBUTTONS, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(A_BUTTON | L_JPAD, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(B_BUTTON | R_JPAD, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(D_JPAD | D_CBUTTONS, NULL);

    syErrorFramebufPrintThreadStatus(thread, TRUE);

    if (sSYErrorFuncPrint != NULL)
    {
        while (TRUE) 
        {
            syErrorWaitFramebufOrController(0, NULL);
            syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);

            syErrorFramebufDrawBlackRectangle(25, 20, 270, 210);

            syErrorResetMesgCursor(30, 25);

            sSYErrorFuncPrint();

            syErrorWaitFramebufOrController(0, NULL);
            syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);

            syErrorFramebufPrintThreadStatus(thread, FALSE);
        }
    }
    while (TRUE); // {}
}

/*
 * Start a debugging thread will crash on `OS_EVENT_CPU_BREAK` or `OS_EVENT_FAULT`
 */
void syErrorStartRmonThread8(void)
{
    osCreateMesgQueue(&sSYErrorMesgQueueCPUFault, sSYErrorMesgCPUFault, ARRAY_COUNT(sSYErrorMesgCPUFault));
    osCreateThread
    (
        &sSYErrorThread8CPUFault,
        8,
        syErrorReportCPUBreakFault,
        NULL,
        sSYErrorThread8CPUStack + ARRAY_COUNT(sSYErrorThread8CPUStack),
        OS_PRIORITY_RMON
    );
    osStartThread(&sSYErrorThread8CPUFault);
}

void syErrorFileLoaderThread8(void *arg)
{
    OSMesg msg;
    u32 sp50;
    OSPri origPri;
    s32 count;
    OSMesgQueue *mq;

    count = 0;

    mq = &D_8009E3F0;
    func_800009D8(&D_8009E3E0, mq, D_8009E3E8, ARRAY_COUNT(D_8009E3E8));

    while (TRUE)
    {
        osRecvMesg(mq, &msg, OS_MESG_BLOCK);

        if (dSYErrorIsScreenActive == FALSE)
        {
            if (sp50 == D_8003B6E4)
            {
                count++;
            }
            else count = 0;

            sp50 = D_8003B6E4;

            if (count >= 300)
            {
                dSYErrorIsScreenActive = TRUE;
                origPri = osGetThreadPri(NULL);
                osSetThreadPri(NULL, OS_PRIORITY_RMON);

                syErrorWaitFramebufOrController(0, NULL);
                syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
                syErrorWaitFramebufOrController(0, NULL);
                syErrorWaitFramebufOrController(U_JPAD | U_CBUTTONS, NULL);
                syErrorWaitFramebufOrController(0, NULL);
                syErrorWaitFramebufOrController(A_BUTTON | L_JPAD, NULL);
                syErrorWaitFramebufOrController(0, NULL);
                syErrorWaitFramebufOrController(B_BUTTON | R_JPAD, NULL);
                syErrorWaitFramebufOrController(0, NULL);
                syErrorWaitFramebufOrController(D_JPAD | D_CBUTTONS, NULL);
                syErrorFramebufPrintThreadStatus(&gSYMainThread5, TRUE);

                if (sSYErrorFuncPrint != NULL)
                {
                    syErrorWaitFramebufOrController(0, NULL);
                    syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
                    syErrorFramebufDrawBlackRectangle(25, 20, 270, 210);
                    syErrorResetMesgCursor(30, 25);
                    sSYErrorFuncPrint();
                }
                syErrorWaitFramebufOrController(0, NULL);
                count = 0;
                syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
                osSetThreadPri(NULL, origPri);
                dSYErrorIsScreenActive = FALSE;
}
        }
    }
}

/*
 * Start a debugging thread that checks for hangs in thread5 (maybe?)
 */
void syErrorStartRmonThread5Hang(void)
{
    osCreateThread
    (
        &sSYErrorThread8Hang,
        8,
        syErrorFileLoaderThread8,
        NULL,
        sSYErrorThread8HangStack + sizeof(sSYErrorThread8HangStack),
        THREAD8_MAIN_HANG_PRI
    );
    osStartThread(&sSYErrorThread8Hang);
}

/*
 * Print a crash message to the framebuffer.
 *
 * This will only show the message if the correct button sequence is entered.
 * This does not loop, so you could recover after printing a message.
 */
void syErrorPrintf(const char *fmt, ...)
{
    void *fb;
    OSPri origPri;

    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);

    dSYErrorIsScreenActive = TRUE;
    origPri            = osGetThreadPri(NULL);
    osSetThreadPri(NULL, OS_PRIORITY_RMON);

    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(U_JPAD | U_CBUTTONS, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(A_BUTTON | L_JPAD, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(B_BUTTON | R_JPAD, NULL);
    syErrorWaitFramebufOrController(0, NULL);
    syErrorWaitFramebufOrController(D_JPAD | D_CBUTTONS, NULL);

    do
    {
        fb = osViGetCurrentFramebuffer();
        syErrorFramebufDrawBlackRectangle(25, 20, 270, 25);
        syErrorResetMesgCursor(30, 25);
        syErrorFramebufVPrintfNewLine(fmt, ap);
    }
    while (syErrorWaitFramebufOrController(0, fb) || syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, fb));

    va_end(ap);
    osSetThreadPri(NULL, origPri);
    dSYErrorIsScreenActive = FALSE;
}

/*
 * Show a crash screen and call `func_print` to print to the crash screen
 *
 * `func_print` is a wrapper function with calls to `syErrorDebugPrintf` for printing.
 * Note that unlike the other crash screens functions, this will show the crash screen
 * without having to enter a button sequence on a controller
 */
void syErrorRunFuncPrint(void (*func_print)(void))
{
    OSPri pri_bak;
    void *framebuf;

    dSYErrorIsScreenActive = TRUE;
    pri_bak = osGetThreadPri(NULL);
    osSetThreadPri(NULL, OS_PRIORITY_RMON);

    do
    {
        framebuf = osViGetCurrentFramebuffer();
        syErrorFramebufDrawBlackRectangle(25, 20, 270, 210);
        syErrorResetMesgCursor(30, 25);
        func_print();
    } 
    while (syErrorWaitFramebufOrController(0, framebuf) || syErrorWaitFramebufOrController(Z_TRIG | L_TRIG | R_TRIG, framebuf));

    osSetThreadPri(NULL, pri_bak);
    dSYErrorIsScreenActive = FALSE;
}

#pragma GCC diagnostic pop
