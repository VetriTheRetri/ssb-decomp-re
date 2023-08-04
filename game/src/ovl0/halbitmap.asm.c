#include <PR/ultratypes.h>
#include <PR/gu.h>
#include <ssb_types.h>
#include <macros.h>

#include "ovl0/halbitmap.h"

/*** Data ***/
#include "ovl0/sintable.inc.h"

s32 D_ovl0_800D5CA0[3] = {0, 0, 0};

// these are all function pointers, so I hope they line up...
// jump table of somekind?

extern char jtgt_ovl0_800C96EC[];
extern char jtgt_ovl0_800C9714[];
extern char jtgt_ovl0_800CA024[];
extern char jtgt_ovl0_800CA144[];
extern char jtgt_ovl0_800CA194[];
extern char jtgt_ovl0_800CA5C8[];
extern char jtgt_ovl0_800CAB48[];
extern char jtgt_ovl0_800CB140[];
extern char jtgt_ovl0_800CB2F0[];
extern char jtgt_ovl0_800C973C[];
extern char func_ovl2_8010D250[];
extern char func_ovl2_8010D428[];
extern char func_ovl2_8010DE48[];
extern char func_ovl2_8010E00C[];
extern char jtgt_ovl0_800C994C[];
extern char jtgt_ovl0_800C99CC[];
extern char jtgt_ovl0_800C9F30[];
extern char jtgt_ovl0_800C9F70[];
extern char func_ovl2_80106904[];
extern char func_ovl2_8010E10C[];

void *jtbl_ovl0_800D5CAC[] = {
    jtgt_ovl0_800C96EC,
    jtgt_ovl0_800C96EC,
    jtgt_ovl0_800C9714,
    jtgt_ovl0_800C9714,
    jtgt_ovl0_800CA024,
    jtgt_ovl0_800CA024,
    jtgt_ovl0_800CA144,
    jtgt_ovl0_800CA144,
    jtgt_ovl0_800CA194,
    jtgt_ovl0_800CA194,
    jtgt_ovl0_800CA5C8,
    jtgt_ovl0_800CA5C8,
    jtgt_ovl0_800CAB48,
    jtgt_ovl0_800CAB48,
    jtgt_ovl0_800CB140,
    jtgt_ovl0_800CB140,
    jtgt_ovl0_800CB2F0,
    jtgt_ovl0_800CB2F0,
    jtgt_ovl0_800C973C,
    jtgt_ovl0_800C973C,
    func_ovl2_8010D250,
    func_ovl2_8010D428,
    func_ovl2_8010DE48,
    NULL,
    func_ovl2_8010E00C,
    NULL,
    jtgt_ovl0_800C994C,
    jtgt_ovl0_800C994C,
    jtgt_ovl0_800C99CC,
    jtgt_ovl0_800C99CC,
    jtgt_ovl0_800C9F30,
    jtgt_ovl0_800C9F30,
    jtgt_ovl0_800C9F70,
    jtgt_ovl0_800C9F70,
    func_ovl2_80106904,
    func_ovl2_80106904,
    func_ovl2_8010E00C,
    func_ovl2_8010E10C,
};

s32 D_ovl0_800D5D44 = 0x00050A0F;

/*** BSS ***/
u16 D_ovl0_800D62B0;
u16 D_ovl0_800D62B2;
u32 D_ovl0_800D62B4;
u32 D_ovl0_800D62B8;
u32 D_ovl0_800D62BC;
u32 D_ovl0_800D62C0;
u32 D_ovl0_800D62C4;
u8 D_ovl0_800D62C8[8]; // probably s32/u32
u8 D_ovl0_800D62D0[16];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

f32 bitmap_sinf(f32 x) {
    u16 idx;
    f32 ret;

    idx = (s32)(x * 651.8986f) & 0xFFF;

    if (idx & 0x400) {
        ret = D_ovl0_800D4CA0[0x400 - 1 - (idx & 0x3FF)];
    } else {
        ret = D_ovl0_800D4CA0[idx & 0x3FF];
    }

    if (idx & 0x800) {
        return -ret;
    } else {
        return ret;
    }
}

// bitmap_cosf?
f32 func_ovl0_800C78B8(f32 x) {
    u16 idx;
    f32 ret;

    idx = (s32)((x + 1.5707964f) * 651.8986f) & 0xFFF;

    if (idx & 0x400) {
        ret = D_ovl0_800D4CA0[0x400 - 1 - (idx & 0x3FF)];
    } else {
        ret = D_ovl0_800D4CA0[idx & 0x3FF];
    }

    if (idx & 0x800) {
        return -ret;
    } else {
        return ret;
    }
}

// bitmap_tanf
f32 func_ovl0_800C793C(f32 angle) {
    u16 idx;
    f32 sinX;
    f32 cosX;

    idx = (s32)(angle * 651.8986f) & 0xFFF;
    if (idx & 0x400) {
        sinX = D_ovl0_800D4CA0[0x400 - 1 - (idx & 0x3FF)];
    } else {
        sinX = D_ovl0_800D4CA0[idx & 0x3FF];
    }
    
    if (idx & 0x800) {
        sinX = -sinX;
    }

    idx = (idx + 0x400) & 0xFFF;
    if (idx & 0x400) {
        cosX = D_ovl0_800D4CA0[0x400 - 1 - (idx & 0x3FF)];
    } else {
        cosX = D_ovl0_800D4CA0[idx & 0x3FF];
    }
    if (idx & 0x800) {
        cosX = -cosX;
    }

    return sinX / cosX;
}

// vec2f_normalize_get_distance
f32 func_ovl0_800C7A00(struct Vec2f *p) {
    f32 dist;

    dist = sqrtf(SQUARE(p->x) + SQUARE(p->y));
    if (dist == 0.0f) {
        return 0.0f;
    }
    p->x *= 1.0f / dist;
    p->y *= 1.0f / dist;

    return dist;
}

// vec2f_distance
f32 func_ovl0_800C7A84(struct Vec2f *p) {
    return sqrtf(SQUARE(p->x) + SQUARE(p->y));
}

// vec2f_add_to
struct Vec2f *func_ovl0_800C7AB8(struct Vec2f *dst, const struct Vec2f *p) {
    dst->x += p->x;
    dst->y += p->y;

    return dst;
}

// vec2f_scale
struct Vec2f *func_ovl0_800C7AE0(struct Vec2f *dst, f32 scale) {
    dst->x *= scale;
    dst->y *= scale;

    return dst;
}

struct Vec2f *func_ovl0_800C7B08(struct Vec2f *dst, const struct Vec2f *p) {
    f32 temp;

    // -2 * (dst . p)
    temp = ((p->x * dst->x) + (p->y * dst->y)) * -2.0f;
    // dst + -2 * (dst . p)
    dst->x += p->x * temp;
    dst->y += p->y * temp;

    return dst;
}

#define VEC3F_DOT(a, b) ((a)->x * (b)->x + (a)->y * (b)->y + (a)->z * (b)->z)
#define VEC3F_MAG(v) (sqrtf(SQUARE((v)->x) + SQUARE((v)->y) + SQUARE((v)->z)))

f32 func_ovl0_800C7B58(struct Vec3f *a, struct Vec3f *b) {
    return VEC3F_DOT(a, b) / (VEC3F_MAG(a) + VEC3F_MAG(b));
}

#define VEC2F_DOT(a, b) ((a)->x * (b)->x + (a)->y * (b)->y)
#define VEC2F_MAG(v) (sqrtf(SQUARE((v)->x) + SQUARE((v)->y)))

f32 func_ovl0_800C7C0C(struct Vec2f *a, struct Vec2f *b) {
    return VEC2F_DOT(a, b) / (VEC2F_MAG(a) + VEC2F_MAG(b));
}

#ifdef NON_MATCHING
bool32 func_ovl0_800C7C98(struct Vec2f *arg0, struct Vec2f *arg1, f32 arg2) {
    f32 sp24;
    f32 sp20;
    f32 factor;

    sp24 = func_ovl0_800C7C0C(arg1, arg0);
    if (sp24 <= 0.0f && cosf(arg2 + 1.5707964f) <= sp24) {
        
        if (((arg1->x * arg0->y) + -(arg1->y * arg0->x)) < 0.0f) {
            sp20 = -1.0f;
        } else {
            sp20 = 1.0f;
        }

        factor = func_ovl0_800C7A84(arg0) * sp20;
        arg0->x = -arg1->y * factor;
        arg0->y = arg1->x * factor;
        return TRUE;
    }

    return FALSE;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C7C98.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C7DB4.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C82AC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8654.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C86E8.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8758.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C87F4.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C88AC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C89BC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8A58.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8B28.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8CB8.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C8DB4.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C9228.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C92C8.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C9314.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C9424.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C9488.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C96DC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800C9A38.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB360.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB4B0.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB4E0.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB608.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB644.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB674.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB738.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CB7D4.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CC118.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CC818.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CCEAC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CCED8.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CCF00.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CCF74.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CCFDC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD050.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD0D0.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD1F0.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD214.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD2CC.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD440.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD538.s")
#endif

#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halbitmap/func_ovl0_800CD5AC.s")
#endif
#pragma GCC diagnostic pop
