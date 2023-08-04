#include "sys/crash.h"

#include "sys/gtl.h"
#include "sys/hal_audio.h"
#include "sys/main.h"
#include "sys/obj_renderer.h"
#include "sys/om.h"
#include "sys/system_00.h"
#include "sys/system_03_1.h"
#include "sys/thread3.h"
#include "sys/thread6.h"

#include <config.h>
#include <macros.h>
#include <stdarg.h>
#include <string.h>

#include <PR/mbi.h>
#include <PR/os.h>
#include <PR/os_internal.h>
#include <PR/ultratypes.h>

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

// data
s32 D_8003CBB0 = 0;
s32 D_8003CBB4 = 0;
s32 D_8003CBB8 = 3;
s32 D_8003CBBC = 0;

// struct {ulx, uly, lrx, lry}
// box borders?
struct TempBoxSize {
    s32 ulx;
    s32 uly;
    s32 lrx;
    s32 lry;
};

struct TempBoxSize D_8003CBC0[7] = {
    {0, 0, 0, 3},
    {3, 0, 3, 3},
    {0, 3, 3, 3},
    {0, 3, 0, 6},
    {3, 3, 3, 6},
    {0, 6, 3, 6},
    {5, 6, 5, 6},
};

// booleans? 0x88
// in sets of 8 for 17 sets?
s32 D_8003CC30[17][8] = {
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
    {0, 0, 0, 1, 0, 0, 0, 0},
};

f32 D_8003CE50[10] = {
    1.0f,
    10.0f,
    100.0f,
    1000.0f,
    10000.0f,
    100000.0f,
    1000000.0f,
    10000000.0f,
    100000000.0f,
    1000000000.0f,
};

u8 sActiveCrashScreen = FALSE;

u8 sAsciiToGlyphIdx[128] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x29, 0xff, 0xff, 0xff, 0x2b, 0xff, 0xff, 0x25, 0x26, 0xff, 0x2a, 0xff, 0x27, 0x2c, 0xff,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x24, 0xff, 0xff, 0xff, 0xff, 0x28,
    0xff, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
    0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0xff, 0xff, 0xff, 0xff, 0xff,
};

// looks to be 7 wide by 6 tall?
u32 sCrashScreenGlyphs[64] = {
    0x70871C30, 0x8988A250, 0x88808290, 0x88831C90, 0x888402F8, 0x88882210, 0x71CF9C10, 0xF9CF9C70,
    0x8228A288, 0xF200A288, 0x0BC11C78, 0x0A222208, 0x8A222288, 0x71C21C70, 0x23C738F8, 0x5228A480,
    0x8A282280, 0x8BC822F0, 0xFA282280, 0x8A28A480, 0x8BC738F8, 0xF9C89C08, 0x82288808, 0x82088808,
    0xF2EF8808, 0x82288888, 0x82288888, 0x81C89C70, 0x8A08A270, 0x920DA288, 0xA20AB288, 0xC20AAA88,
    0xA208A688, 0x9208A288, 0x8BE8A270, 0xF1CF1CF8, 0x8A28A220, 0x8A28A020, 0xF22F1C20, 0x82AA0220,
    0x82492220, 0x81A89C20, 0x8A28A288, 0x8A28A288, 0x8A289488, 0x8A2A8850, 0x894A9420, 0x894AA220,
    0x70852220, 0xF8011000, 0x08020800, 0x10840400, 0x20040470, 0x40840400, 0x80020800, 0xF8011000,
    0x70800000, 0x88822200, 0x08820400, 0x108F8800, 0x20821000, 0x00022200, 0x20800020, 0x00000000,
};

const char *sCPUExceptionCauses[18] = {
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
    "Virtual coherency on data",
};

const char *sFPUExceptionCauses[6] = {
    "Unimplemented operation",
    "Invalid operation",
    "Division by zero",
    "Overflow",
    "Underflow",
    "Inexact operation",
};

s32 sCrashMesgX = 30;
s32 sCrashMesgY = 25;

// bss
void *D_8009DA00;
OSThread sT8CpuFault;
u8 sT8CpuStack[0x800];
OSMesgQueue sMQCpuFault;
OSMesg sMesgCpuFault[1];
u32 sUnref8009E3D4;
void (*sCrashPrintCB)(void);
struct MqListNode D_8009E3E0;
OSMesg D_8009E3E8[1];
OSMesgQueue D_8009E3F0;
OSThread sT8Hang;
u8 sT8HangStack[0x800];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void func_800210C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
#ifdef NON_MATCHING
void func_800210C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Gfx *dl;
    s32 *line; // a1, a0?
    struct TempBoxSize *test;
    s32 i;

    if (arg2 >= 0 && arg2 <= 16) {
        dl   = gpDisplayListHead[0];
        line = D_8003CC30[arg2];
        if (*line == 0) {
        } else {
            // L80021128
            gDPFillRectangle(
                dl++,
                (D_8003CBB0 + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                (arg1 + D_8003CBB4) * gCurrScreenHeight / SCREEN_HEIGHT,
                (D_8003CBB8 + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                (arg1 + D_8003CBBC) * gCurrScreenHeight / SCREEN_HEIGHT);
        }
        // L800212B0
        line++;
        test = D_8003CBC0;
        for (i = 1; i < 7; i++) {
            // L800212C4
            if (*line != 0) {
                gDPFillRectangle(
                    dl++,
                    (test->ulx + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                    (test->uly + arg1) * gCurrScreenHeight / SCREEN_HEIGHT,
                    (test->lrx + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                    (test->lry + arg1) * gCurrScreenHeight / SCREEN_HEIGHT);
            }
            // L80021434
            // loop unrolled? to
            // L800215A0
            test++;
            line++;
        }

        D_8009DA00 = test;
        if (arg3 != 0) {
            gDPFillRectangle(
                dl++,
                (test->ulx + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                (test->uly + arg1) * gCurrScreenHeight / SCREEN_HEIGHT,
                (test->lrx + arg0) * gCurrScreenWidth / SCREEN_WIDTH,
                (test->lry + arg1) * gCurrScreenHeight / SCREEN_HEIGHT);
        }
        D_8009DA00    = test;
        gpDisplayListHead[0] = dl;
    }
    // L80021724
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/func_800210C0.s")
#endif

void func_80021734(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
#ifdef NON_MATCHING
// something wierd with the `arg0 -= 7`
void func_80021734(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 s6 = 0;

    if (arg3 > 0 && arg3 < (gCurrScreenWidth - arg0) / 7) {
        arg0 += arg3 * 7;
        arg0 -= 7;
        if (arg2 < 0) {
            arg2 = -arg2;
            s6   = 1;
        }
        if (arg4 <= 0) { arg4 = -1; }

        while (s6 < arg3) {
            // arg4--;
            func_800210C0(arg0, arg1, (arg2 % 10) & 15, arg4-- == 0);
            arg2 /= 10;
            arg3--;

            // arg0 -= 7;
            if (arg5 != 0 && arg2 == 0 && arg4 < 0) {
                arg0 -= 7;
                break;
            }
            arg0 -= 7;
        }
        // L8002189C
        if (s6) { func_800210C0(arg0, arg1, 16, FALSE); }
    }
    // L800218B4
    // L800218B8
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/func_80021734.s")
#endif

void func_800218E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80021734(arg0, arg1, arg2, arg3, 0, arg4);
}

void func_80021908(s32 arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_80021734(arg0, arg1, D_8003CE50[arg4] * arg2, arg3, arg4, arg5);
}

void unref_80021958(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#ifdef NON_MATCHING
// nonmatching: the constant `7` is put into `v1` instead of `v0`
void unref_80021958(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 s2;

    if (arg3 > 0 && arg3 < (gCurrScreenWidth - arg0) / 7) {
        s2 = arg3 * 7;
        arg0 += s2;
        arg0 -= 7;
        if (arg3 > 0) {
            do {
                func_800210C0(arg0, arg1, arg2 & 0xF, FALSE);
                arg2 >>= 4;
                if (arg4 != 0 && arg2 == 0) { break; }
                arg0 -= 7;
                s2 -= 7;
            } while (s2 >= 7);
        }
    }
    // L80021A18
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/unref_80021958.s")
#endif

void dp_fill_rectangle(Gfx *dl, u32 ulx, u32 uly, u32 lrx, u32 lry) {
    gDPFillRectangle(
        dl,
        (gCurrScreenWidth * ulx) / SCREEN_WIDTH,
        (uly * gCurrScreenHeight) / SCREEN_HEIGHT,
        (gCurrScreenWidth * lrx) / SCREEN_WIDTH,
        (lry * gCurrScreenHeight) / SCREEN_HEIGHT);
}

void func_80021B30(struct GObjCommon *obj);
#ifdef NON_MATCHING
// nonmatching: off with incrementing the offset value; addresses not stored in saved registers
void func_80021B30(struct GObjCommon *obj) {
    s32 wOffset;
    s32 yOffset;
    u32 temp;
    s32 i;

    func_80016338(gpDisplayListHead, obj->unk74, 0);
    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetCycleType(gpDisplayListHead[0]++, G_CYC_FILL);
    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0xFFFFFFFF));
    func_800218E0(60, 179, D_80045470.unk08, 3, TRUE);
    func_800218E0(92, 179, D_80045470.unk09, 3, TRUE);
    // 0.00390625 is 1 / 1256, but it doesn't want to autoconvert
    wOffset = 60;
    func_80021908(wOffset, 195, (f32)D_80046610 * 0.00390625f, 5, 2, TRUE);
    wOffset += 35;
    func_80021908(wOffset, 195, (f32)D_80046614 * 0.00390625f, 5, 2, TRUE);
    wOffset += 35;
    func_80021908(wOffset, 195, (f32)D_80044FB4 * 0.00390625f, 5, 2, TRUE);
    wOffset += 35;
    func_80021908(
        wOffset,
        195,
        ((f32)D_80046610 * 0.00390625f) + ((f32)D_80046614 * 0.00390625f)
            + ((f32)D_80044FB4 * 0.00390625f),
        5,
        2,
        TRUE);
    wOffset += 70;
    func_80021908(wOffset, 195, (f32)D_8009D2D0 * 0.00390625f, 5, 2, TRUE);
    wOffset += 35;
    func_80021908(wOffset, 195, (f32)D_80044FB8 * 0.00390625f, 5, 2, TRUE);

    {
        gDPPipeSync(gpDisplayListHead[0]++);
        gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0xFF0000FF));
        // temp = D_80046610 / 4;
        // temp = temp > 256 ? 256 : temp;
        if (D_80046610 / 4 > 256) {
            temp = 256;
        } else {
            temp = D_80046610 / 4;
        };
        yOffset = 210;
        dp_fill_rectangle(gpDisplayListHead[0]++, 30, yOffset, temp + 30, yOffset + 1);
    }

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0xFF00FFFF));
    if (D_80046614 / 4 > 256) {
        temp = 256;
    } else {
        temp = D_80046614 / 4;
    };
    yOffset += 2;
    dp_fill_rectangle(gpDisplayListHead[0]++, 30, yOffset, temp + 30, yOffset + 1);

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0x00FF00FF));
    // temp = D_80044FB4 / 4;
    // temp = temp > 256 ? 256 : temp;
    if (D_80044FB4 / 4 > 256) {
        temp = 256;
    } else {
        temp = D_80044FB4 / 4;
    };
    yOffset += 2;
    dp_fill_rectangle(gpDisplayListHead[0]++, 30, yOffset, temp + 30, yOffset + 1);

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0x00FF00FF));
    // temp = D_8009D2D0 / 4;
    // temp = temp > 256 ? 256 : temp;
    if (D_8009D2D0 / 4 > 256) {
        temp = 256;
    } else {
        temp = D_8009D2D0 / 4;
    };
    yOffset += 2;
    dp_fill_rectangle(gpDisplayListHead[0]++, 30, yOffset, temp + 30, yOffset + 1);

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0x00FFFFFF));
    // temp = D_80044FB8 / 4;
    // temp = temp > 256 ? 256 : temp;
    if (D_80044FB8 / 4 > 256) {
        temp = 256;
    } else {
        temp = D_80044FB8 / 4;
    };
    yOffset += 2;
    dp_fill_rectangle(gpDisplayListHead[0]++, 30, yOffset, temp + 30, yOffset + 2);

    // controller buttons
    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0xFFFF00FF));
    for (i = 0; i < 16; i++) {
        if (D_80045470.unk00 & (1 << i)) {
            dp_fill_rectangle(gpDisplayListHead[0]++, (i * 4) + 30, 206, (i * 4) + 33, 208);
        }
    }
    // controller stick
    dp_fill_rectangle(
        gpDisplayListHead[0]++,
        D_80045470.unk08 / 4 + 39,
        -D_80045470.unk09 / 4 + 184,
        D_80045470.unk08 / 4 + 41,
        -D_80045470.unk09 / 4 + 186);

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetFillColor(gpDisplayListHead[0]++, rgba32_to_fill_color(0x101010FF));
    for (i = 30; i < 350; i += 64) { dp_fill_rectangle(gpDisplayListHead[0]++, i, 210, i, 220); }
    dp_fill_rectangle(gpDisplayListHead[0]++, 40, 165, 40, 205);
    dp_fill_rectangle(gpDisplayListHead[0]++, 20, 185, 60, 185);

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetCycleType(gpDisplayListHead[0]++, G_CYC_1CYCLE);
    gDPSetRenderMode(gpDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/func_80021B30.s")
#endif

struct GObjCommon *func_80022368(s32 link, u32 arg1, s32 arg2) {
    if (find_gobj_with_id(-2U) != 0) { return NULL; }
    return func_8000B93C(
        -2U, (void (*)())func_8000B1C4, link, arg1, func_80021B30, arg2, 0, 0, 0, 0, NULL, 0, 0);
}

void fb_draw_black_rect(s32 ulx, s32 uly, s32 width, s32 height) {
    u16 *fb;
    s32 i;
    s32 j;

    fb = (u16 *)osViGetCurrentFramebuffer() + (gCurrScreenWidth * uly) + (ulx);
    for (i = 0; i < height; i++) {
        // really big unroll here
        for (j = 0; j < width; j++) {
            *fb = GPACK_RGBA5551(0, 0, 0, 1);
            fb++;
        }

        fb += gCurrScreenWidth - width;
    }
}

void func_800224C0(s32 ulx, s32 uly, s32 charIdx);
#ifdef NON_MATCHING
// write glyph to frame buffer?
// nonmatching: the operands for the mask AND are flipped...
void func_800224C0(s32 ulx, s32 uly, s32 charIdx) {
    u32 initMask;
    u32 curMask;
    s32 i;
    s32 j;
    u32 *charOffset; // a3
    u16 *fb;
    s32 el; // in a0

    charOffset = &sCrashScreenGlyphs[charIdx / 5 * 7];
    initMask   = 0x80000000 >> ((charIdx % 5) * 6);
    fb         = (u16 *)osViGetCurrentFramebuffer() + (gCurrScreenWidth * uly) + (ulx);

    for (i = 0; i < 7; i++) {
        el = *charOffset;
        charOffset++;

        curMask = initMask;
        for (j = 0; j < 6; j++) {
            if ((curMask & el) != 0) {
                *fb = GPACK_RGBA5551(255, 255, 255, 1);
            } else {
                *fb = GPACK_RGBA5551(0, 0, 0, 1);
            }

            fb++;
            curMask >>= 1;
        }
        fb += gCurrScreenWidth - 6;
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/func_800224C0.s")
#endif

// memcpy and return pointer to end of copy in `dst`
// `proutSprintf` in libultra
char *memcpy_advance(char *dst, const char *src, size_t count) {
    return (char *)memcpy(dst, src, count) + count;
}

// in libultra/libc/xstdio.h
typedef char *outfun(char *, const char *, size_t);
extern int _Printf(outfun prout, char *arg, const char *fmt, va_list args);

void fb_printf(s32 ulx, s32 ulr, char *fmt, ...) {
    u8 *csr;
    u32 glyph;
    s32 ans;
    char buf[0x100];
    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);
    ans = _Printf(memcpy_advance, buf, fmt, ap);
    va_end(ap);

    if (ans > 0) {
        csr = (u8 *)buf;
        while (ans > 0) {
            glyph = sAsciiToGlyphIdx[*csr & 0x7F];
            if (glyph != 0xFF) { func_800224C0(ulx, ulr, glyph); }
            ans--;
            csr++;
            ulx += 6;
        }
    }
}

void wait_ms(s32 millisec) {
    OSTime cycles;

    cycles = OS_USEC_TO_CYCLES(millisec * 1000ULL);

    osSetTime(0);
    while (osGetTime() < cycles) { }
}

void fb_print_fp_reg(s32 x, s32 y, s32 regIdx, f32 *fpReg) {
    u32 byterep;
    s32 small;

    byterep = *(u32 *)fpReg;
    small   = ((byterep & 0x7F800000) >> 23) - 127;
    if ((small >= -126 && small < 128) || byterep == 0) {
        fb_printf(x, y, "F%02d:%.3e", regIdx, (f64)*fpReg);
    } else {
        fb_printf(x, y, "F%02d:%08XH", regIdx, byterep);
    }
}

void fb_print_fcsr(u32 fcsr) {
    s32 i;
    u32 mask = 0x20000;

    fb_printf(30, 155, "FPCSR:%08XH", fcsr);
    for (i = 0; i < ARRAY_COUNT(sFPUExceptionCauses); i++) {
        if (fcsr & mask) {
            fb_printf(132, 155, "(%s)", sFPUExceptionCauses[i]);
            break;
        }
        mask >>= 1;
    }
}

s32 wait_for_fb_or_buttons(s32 buttonInput, void *fb) {
    while (TRUE) {
        wait_ms(16);
        update_contdata();

        if (fb != NULL && osViGetCurrentFramebuffer() != fb) { return TRUE; }
        if (buttonInput == D_80045470.unk00) { return FALSE; }
    }
}

void fb_print_thread_state(OSThread *t, s32 showThreadSummary) {
    s16 adjustedCause;
    __OSThreadContext *ctx;
    s32 stackOffset;
    s32 y;
    u8 *stackCsr;

    adjustedCause = (t->context.cause >> 2) & 31;
    // WATCH_POINT
    if (adjustedCause == 23) { adjustedCause = 16; }
    // Virt. Coherency on data read
    if (adjustedCause == 31) { adjustedCause = 17; }

    osWritebackDCacheAll();
    if (showThreadSummary) {
        ctx = &t->context;
        fb_draw_black_rect(25, 20, 270, 25);
        fb_printf(30, 25, "THREAD:%d  (%s)", t->id, sCPUExceptionCauses[adjustedCause]);
        fb_printf(30, 35, "PC:%08XH   SR:%08XH   VA:%08XH", ctx->pc, ctx->sr, ctx->badvaddr);
        osWritebackDCacheAll();
        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
    }

    // register dump
    ctx = &t->context;
    fb_draw_black_rect(25, 20, 270, 210);
    fb_printf(30, 25, "THREAD:%d  (%s)", t->id, sCPUExceptionCauses[adjustedCause]);
    fb_printf(30, 35, "PC:%08XH   SR:%08XH   VA:%08XH", ctx->pc, ctx->sr, ctx->badvaddr);
    fb_printf(30, 50, "AT:%08XH   V0:%08XH   V1:%08XH", (u32)ctx->at, (u32)ctx->v0, (u32)ctx->v1);
    fb_printf(30, 60, "A0:%08XH   A1:%08XH   A2:%08XH", (u32)ctx->a0, (u32)ctx->a1, (u32)ctx->a2);
    fb_printf(30, 70, "A3:%08XH   T0:%08XH   T1:%08XH", (u32)ctx->a3, (u32)ctx->t0, (u32)ctx->t1);
    fb_printf(30, 80, "T2:%08XH   T3:%08XH   T4:%08XH", (u32)ctx->t2, (u32)ctx->t3, (u32)ctx->t4);
    fb_printf(30, 90, "T5:%08XH   T6:%08XH   T7:%08XH", (u32)ctx->t5, (u32)ctx->t6, (u32)ctx->t7);
    fb_printf(30, 100, "S0:%08XH   S1:%08XH   S2:%08XH", (u32)ctx->s0, (u32)ctx->s1, (u32)ctx->s2);
    fb_printf(30, 110, "S3:%08XH   S4:%08XH   S5:%08XH", (u32)ctx->s3, (u32)ctx->s4, (u32)ctx->s5);
    fb_printf(30, 120, "S6:%08XH   S7:%08XH   T8:%08XH", (u32)ctx->s6, (u32)ctx->s7, (u32)ctx->t8);
    fb_printf(30, 130, "T9:%08XH   GP:%08XH   SP:%08XH", (u32)ctx->t9, (u32)ctx->gp, (u32)ctx->sp);
    fb_printf(30, 140, "S8:%08XH   RA:%08XH", (u32)ctx->s8, (u32)ctx->ra);
    fb_print_fcsr(ctx->fpcsr);
    fb_print_fp_reg(30, 170, 0, &ctx->fp0.f.f_even);
    fb_print_fp_reg(120, 170, 2, &ctx->fp2.f.f_even);
    fb_print_fp_reg(210, 170, 4, &ctx->fp4.f.f_even);
    fb_print_fp_reg(30, 180, 6, &ctx->fp6.f.f_even);
    fb_print_fp_reg(120, 180, 8, &ctx->fp8.f.f_even);
    fb_print_fp_reg(210, 180, 10, &ctx->fp10.f.f_even);
    fb_print_fp_reg(30, 190, 12, &ctx->fp12.f.f_even);
    fb_print_fp_reg(120, 190, 14, &ctx->fp14.f.f_even);
    fb_print_fp_reg(210, 190, 16, &ctx->fp16.f.f_even);
    fb_print_fp_reg(30, 200, 18, &ctx->fp18.f.f_even);
    fb_print_fp_reg(120, 200, 20, &ctx->fp20.f.f_even);
    fb_print_fp_reg(210, 200, 22, &ctx->fp22.f.f_even);
    fb_print_fp_reg(30, 210, 24, &ctx->fp24.f.f_even);
    fb_print_fp_reg(120, 210, 26, &ctx->fp26.f.f_even);
    fb_print_fp_reg(210, 210, 28, &ctx->fp28.f.f_even);
    fb_print_fp_reg(30, 220, 30, &ctx->fp30.f.f_even);
    osWritebackDCacheAll();
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);

    // stack dump
    fb_draw_black_rect(25, 20, 270, 210);
    stackCsr = (u8 *)(uintptr_t)ctx->sp;
    fb_printf(26, 20, "SP Base %08x", (u32)stackCsr);
    y = 30;
    for (stackOffset = 0; stackOffset < 0x98; stackOffset += 8) {
        u32 word  = *(u32 *)stackCsr;
        s32 small = ((word & 0x7F800000) >> 23) - 127;

        if ((small >= -126 && small < 128) || word == 0) {
            fb_printf(
                26,
                y,
                "%03d:%02x%02x%02x%02x %.3e",
                stackOffset,
                stackCsr[0],
                stackCsr[1],
                stackCsr[2],
                stackCsr[3],
                (f64) * (f32 *)stackCsr);
        } else {
            fb_printf(
                26,
                y,
                "%03d:%02x%02x%02x%02x %08x",
                stackOffset,
                stackCsr[0],
                stackCsr[1],
                stackCsr[2],
                stackCsr[3],
                word);
        }

        stackCsr += 4;
        word  = *(u32 *)stackCsr;
        small = ((word & 0x7F800000) >> 23) - 127;
        if ((small >= -126 && small < 128) || word == 0) {
            fb_printf(
                172,
                y,
                ":%02x%02x%02x%02x %.3e",
                stackCsr[0],
                stackCsr[1],
                stackCsr[2],
                stackCsr[3],
                (f64) * (f32 *)stackCsr);
        } else {
            fb_printf(
                172,
                y,
                ":%02x%02x%02x%02x %08x",
                stackCsr[0],
                stackCsr[1],
                stackCsr[2],
                stackCsr[3],
                word);
        }

        y += 10;
        stackCsr += 4;
    }
    osWritebackDCacheAll();
}

OSThread *get_faulted_thread(void) {
    OSThread *t;

    t = __osGetActiveQueue();
    while (t->priority != -1) {
        if (t->priority > OS_PRIORITY_IDLE && t->priority < OS_PRIORITY_APPMAX
            && (t->flags & (OS_FLAG_CPU_BREAK | OS_FLAG_FAULT))) {
            return t;
        }
        t = t->tlnext;
    }

    return NULL;
}

/**
 * Set a function to call when a crash screen is displayed
 */
void set_crash_print_fn(void (*fn)(void)) {
    sCrashPrintCB = fn;
}

void reset_crashmesg_cursor(s32 x, s32 y) {
    sCrashMesgX = x;
    sCrashMesgY = y;
}

void fb_vprintf_with_newline(const char *fmt, va_list args) {
    u32 glyph;
    s32 ans;
    char buf[0x100]; // sp48
    u8 *csr;

    ans = _Printf(memcpy_advance, buf, fmt, args);
    if (ans > 0) {
        csr = (u8 *)buf;
        while (ans > 0) {
            glyph = sAsciiToGlyphIdx[*csr & 0x7F];
            if (*csr == '\n') {
                sCrashMesgX = 30;
                sCrashMesgY += 10;
            } else {
                if (glyph != 0xFF) { func_800224C0(sCrashMesgX, sCrashMesgY, glyph); }
                sCrashMesgX += 6;
                if (gCurrScreenWidth - 30 < sCrashMesgX) {
                    sCrashMesgX = 30;
                    sCrashMesgY += 10;
                }
            }

            ans--;
            csr++;
        }
    }
    osWritebackDCacheAll();
}

/**
 * Printf to an active crash/debug screen.
 *
 * You can call this function to print to a debug screen only when
 * a screen is active. Thus, you want to wrap calls to `debug_printf`
 * in a function and have that wrapper function to be called when a
 * crash occurs. You can do that by passing that wrapper function to `set_crash_print_fn`,
 * or by calling `fatal_print_func` with the wrapper function.
 */
void debug_printf(const char *fmt, ...) {
    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);
    fb_vprintf_with_newline(fmt, ap);
    va_end(ap);
}

void cscreen_cpu_break_fault(UNUSED void *arg) {
    OSMesg msg[1];
    OSThread *t;

    osSetEventMesg(OS_EVENT_CPU_BREAK, &sMQCpuFault, HAL_CRASH_MSG_CPU_BREAK);
    osSetEventMesg(OS_EVENT_FAULT, &sMQCpuFault, HAL_CRASH_MSG_FAULT);
    do {
        osRecvMesg(&sMQCpuFault, msg, OS_MESG_BLOCK);
        t = get_faulted_thread();
    } while (t == NULL);

    sActiveCrashScreen = TRUE;

    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(U_JPAD | U_CBUTTONS, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(A_BUTTON | L_JPAD, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(B_BUTTON | R_JPAD, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(D_JPAD | D_CBUTTONS, NULL);
    fb_print_thread_state(t, TRUE);

    if (sCrashPrintCB) {
        while (TRUE) {
            wait_for_fb_or_buttons(0, NULL);
            wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
            fb_draw_black_rect(25, 20, 270, 210);
            reset_crashmesg_cursor(30, 25);
            sCrashPrintCB();
            wait_for_fb_or_buttons(0, NULL);
            wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
            fb_print_thread_state(t, FALSE);
        }
    }

    while (TRUE) { }
}

/**
 * Start a debugging thread will crash on `OS_EVENT_CPU_BREAK` or `OS_EVENT_FAULT`
 */
void start_thread8_rmon(void) {
    osCreateMesgQueue(&sMQCpuFault, sMesgCpuFault, ARRAY_COUNT(sMesgCpuFault));
    osCreateThread(
        &sT8CpuFault,
        8,
        cscreen_cpu_break_fault,
        NULL,
        sT8CpuStack + ARRAY_COUNT(sT8CpuStack),
        OS_PRIORITY_RMON);
    osStartThread(&sT8CpuFault);
}

void fileloader_thread8_crash(UNUSED void *arg);
#ifdef NON_MATCHING
// nonmatching: cannot get `D_8009E3F0` to store into s5
void fileloader_thread8_crash(UNUSED void *arg) {
    OSMesg msg;
    u32 sp50;
    UNUSED u32 pad[2];
    OSPri origPri;
    s32 count;
    register OSMesgQueue *mq;

    count = 0;

    mq = &D_8009E3F0;
    func_800009D8(&D_8009E3E0, mq, D_8009E3E8, ARRAY_COUNT(D_8009E3E8));

    while (TRUE) {
        osRecvMesg(mq, &msg, OS_MESG_BLOCK);

        if (sActiveCrashScreen) { continue; }
        if (sp50 == D_8003B6E4) {
            count++;
        } else {
            count = 0;
        }
        sp50 = D_8003B6E4;
        if (count < 300) { continue; }

        sActiveCrashScreen = TRUE;
        origPri            = osGetThreadPri(NULL);
        osSetThreadPri(NULL, OS_PRIORITY_RMON);

        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(U_JPAD | U_CBUTTONS, NULL);
        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(A_BUTTON | L_JPAD, NULL);
        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(B_BUTTON | R_JPAD, NULL);
        wait_for_fb_or_buttons(0, NULL);
        wait_for_fb_or_buttons(D_JPAD | D_CBUTTONS, NULL);
        fb_print_thread_state(&gThread5, TRUE);
        if (sCrashPrintCB) {
            wait_for_fb_or_buttons(0, NULL);
            wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
            fb_draw_black_rect(25, 20, 270, 210);
            reset_crashmesg_cursor(30, 25);
            sCrashPrintCB();
        }
        wait_for_fb_or_buttons(0, NULL);
        count = 0;
        wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
        osSetThreadPri(NULL, origPri);
        sActiveCrashScreen = FALSE;
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/crash/fileloader_thread8_crash.s")
#endif

/**
 * Start a debugging thread that checks for hangs in thread5 (maybe?)
 */
void start_rmon_thread5_hang(void) {
    osCreateThread(
        &sT8Hang,
        8,
        fileloader_thread8_crash,
        NULL,
        sT8HangStack + sizeof(sT8HangStack),
        THREAD8_MAIN_HANG_PRI);
    osStartThread(&sT8Hang);
}

/**
 * Print a crash message to the framebuffer.
 *
 * This will only show the message if the correct button sequence is entered.
 * This does not loop, so you could recover after printing a message.
 */
void fatal_printf(const char *fmt, ...) {
    void *fb;
    OSPri origPri;

    va_list ap;

    va_start(ap, fmt);
    VA_LIST_ALIGN(ap, fmt);

    sActiveCrashScreen = TRUE;
    origPri            = osGetThreadPri(NULL);
    osSetThreadPri(NULL, OS_PRIORITY_RMON);

    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(U_JPAD | U_CBUTTONS, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(A_BUTTON | L_JPAD, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(B_BUTTON | R_JPAD, NULL);
    wait_for_fb_or_buttons(0, NULL);
    wait_for_fb_or_buttons(D_JPAD | D_CBUTTONS, NULL);
    do {
        fb = osViGetCurrentFramebuffer();
        fb_draw_black_rect(25, 20, 270, 25);
        reset_crashmesg_cursor(30, 25);
        fb_vprintf_with_newline(fmt, ap);
    } while (wait_for_fb_or_buttons(0, fb) || wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, fb));

    va_end(ap);
    osSetThreadPri(NULL, origPri);
    sActiveCrashScreen = FALSE;
}

/**
 * Show a crash screen and call `printFn` to print to the crash screen
 *
 * `printFn` is a wrapper function with calls to `debug_printf` for printing.
 * Note that unlike the other crash screens functions, this will show the crash screen
 * without having to enter a button sequence on a controller
 */
void fatal_print_func(void (*printFn)(void)) {
    OSPri origPri;
    void *fb;

    sActiveCrashScreen = TRUE;
    origPri            = osGetThreadPri(NULL);
    osSetThreadPri(NULL, OS_PRIORITY_RMON);

    do {
        fb = osViGetCurrentFramebuffer();
        fb_draw_black_rect(25, 20, 270, 210);
        reset_crashmesg_cursor(30, 25);
        printFn();
    } while (wait_for_fb_or_buttons(0, fb) || wait_for_fb_or_buttons(Z_TRIG | L_TRIG | R_TRIG, fb));

    osSetThreadPri(NULL, origPri);
    sActiveCrashScreen = FALSE;
}

#pragma GCC diagnostic pop
