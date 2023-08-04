#include "ovl0/halsprite.h"

#include "sys/gtl.h"
#include "sys/hal_gu.h"
#include "sys/om.h"
#include "sys/system_03_1.h"
#include "sys/trig_rand.h"

#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/mbi.h>
#include <PR/ultratypes.h>

// structs
struct Temp001 {
    /* 0x00 */ struct Temp001 *next;
    /* 0x04 */ f32 unk04; // x
    /* 0x08 */ f32 unk08; // y
    /* 0x0C */ f32 unk0C; // z
    /* 0x10 */ f32 unk10; // roll
    /* 0x14 */ f32 unk14; // pitch
    /* 0x18 */ f32 unk18; // yaw
    /* 0x1C */ f32 unk1C; // scale x
    /* 0x20 */ f32 unk20; // scale y
    /* 0x24 */ f32 unk24; // scale z
    /* 0x28 */ u8 unk28;
    /* 0x29 */ u8 unk29;
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ Mtx4f unk2C; // transformation matrix?
    /* 0x6C */ Mtx4f unk6C;
    /* 0xAC */ f32 unkAC;
    /* 0xB0 */ f32 unkB0;
    /* 0xB4 */ void (*unkB4)(void); // destructor/cleanup; could have args
    /* 0xB8 */ u16 unkB8;
    /* 0xBA */ u8 padBA[0xC0 - 0xBA];
}; // sizeof == 0xC0

struct Temp003 {
    /* 0x00 */ struct Temp003 *next;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u8 *unk10; // pointer to sprite command bytecode
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ f32 unk30;
    /* 0x34 */ f32 unk34;
    /* 0x38 */ f32 unk38;
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ struct DObj *unk48;
    /* 0x4C */ struct Temp001 *unk4C;
    /* 0x50 */ f32 unk50;
    /* 0x54 */ union {
        u16 half;
        f32 f;
    } unk54; // or an f32
    /* 0x58 */ f32 unk58;
}; // sizeof >= 0x56

// data
// color dither type (G_CD_MAGICSQ)
u8 D_ovl0_800D5D50[4] = {00, 00, 00, 00};
// alpha dither type (G_AD_PATTERN)
u8 D_ovl0_800D5D54[4]  = {00, 00, 00, 00};
u16 D_ovl0_800D5D58[2] = {0000, 0000};
u8 D_ovl0_800D5D5C[4]  = {0x7B, 00, 00, 00};

// bss
struct Temp002 *D_ovl0_800D6350;
struct Temp002 *D_ovl0_800D6358[16];
struct Temp003 *D_ovl0_800D6398;
// typing might be off? could be part of array below?
// it looks like a static array of pointers
struct Temp001 **D_ovl0_800D639C;
struct Temp001 *D_ovl0_800D63A0[8];
// struct Temp001 **D_ovl0_800D639C[9];

// command counts
s32 D_ovl0_800D63C0[8];
// image entry counts
s32 D_ovl0_800D63E0[8];
// command arrays
struct SpriteCommand **D_ovl0_800D6400[8];
// image entry arrays
struct SpriteEntry **D_ovl0_800D6420[8];

u32 D_ovl0_800D6440;
void (*D_ovl0_800D6444)(struct Temp003 *);
u16 D_ovl0_800D6448;
u16 D_ovl0_800D644A;
// number of 'whatever's given out
u16 D_ovl0_800D644C;
u16 D_ovl0_800D644E;
u16 D_ovl0_800D6450;
u16 D_ovl0_800D6452;
// head of some sort of singly linked list
struct Temp001 *D_ovl0_800D6454;
struct Temp003 *D_ovl0_800D6458;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// alloc_n_sized_whatevers
s32 func_ovl0_800CE040(s32 count, u32 size) {
    struct Temp001 *buf;
    s32 i;

    D_ovl0_800D6454 = NULL;
    for (i = 0; i < count; i++) {
        buf = hal_alloc(size, 4);
        if (buf == NULL) { return i; }
        buf->next       = D_ovl0_800D6454;
        D_ovl0_800D6454 = buf;
    }

    D_ovl0_800D644C = 0;
    D_ovl0_800D6452 = 0;

    return i;
}

// get_whatever
struct Temp001 *func_ovl0_800CE0D8(u8 arg0, u16 arg1) {
    struct Temp001 *out;

    out = D_ovl0_800D6454;
    if (out != NULL) {
        D_ovl0_800D6454 = out->next;
        out->unk2A      = 1;
        out->unk29      = *D_ovl0_800D5D5C;
        out->unkB4      = NULL;
        out->unk04 = out->unk08 = out->unk0C = 0.0f;
        out->unk10 = out->unk14 = out->unk18 = 0.0f;
        out->unk1C = out->unk20 = out->unk24 = 1.0f;

        out->unk28 = arg0;
        out->unkB8 = arg1;

        D_ovl0_800D644C++;
        if (D_ovl0_800D6452 < D_ovl0_800D644C) { D_ovl0_800D6452 = D_ovl0_800D644C; }
    }

    return out;
}

// drop_whatever
void func_ovl0_800CE188(struct Temp001 *arg0) {
    if (arg0->unkB4 != NULL) { arg0->unkB4(); }

    arg0->next      = D_ovl0_800D6454;
    D_ovl0_800D6454 = arg0;
    D_ovl0_800D644C--;
}

// union with u8 and u16?
struct FourBytes {
    u8 b0, b1, b2, b3;
};

struct Temp002 {
    /* 0x00 */ struct Temp002 *next;
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06; // flags?
    /* 0x08 */ u8 unk08;  // load bank idx?
    /* 0x09 */ u8 unk09;
    /* 0x0A */ s8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u16 unk0C;
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u8 *unk14; // command bytecode ?
    /* 0x18 */ u16 unk18; // cusor into unk14 ?
    /* 0x1A */ u16 unk1A;
    /* 0x1C */ u16 unk1C;
    /* 0x1E */ u16 unk1E; // total frames (+1?)
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ f32 unk30; // x?
    /* 0x34 */ f32 unk34; // y?
    /* 0x38 */ f32 unk38; // angle?
    /* 0x3C */ f32 unk3C;
    /* 0x40 */ f32 unk40;
    /* 0x44 */ f32 unk44;
    /* 0x48 */ struct FourBytes unk48;
    ///* 0x49 */ u8 unk49;
    ///* 0x4A */ u8 unk4A;
    ///* 0x4B */ u8 unk4B;
    // /* 0x4C */ struct Temp001 *unk4C;
    /* 0x4C */ struct FourBytes unk4C;
    ///* 0x4D */ u8 unk4D;
    ///* 0x4E */ u8 unk4E;
    ///* 0x4F */ u8 unk4F;
    ///* 0x50 */ u8 unk50[4];
    /* 0x50 */ struct FourBytes unk50;
    ///* 0x50 */ u8 unk50;
    ///* 0x51 */ u8 unk51;
    ///* 0x52 */ u8 unk52;
    ///* 0x53 */ u8 unk53;
    /* 0x54 */ struct FourBytes unk54;
    /* 0x58 */ struct Temp003 *unk58;
    /* 0x5C */ struct Temp001 *unk5C;
}; // sizeof == 0x60

struct Temp001* func_ovl0_800CE1DC(struct Temp002 *arg0, s8 arg1) {
    arg0->unk5C = func_ovl0_800CE0D8(arg1, arg0->unk04);

    return arg0->unk5C;

    // WARNING: This is confirmed to return arg0->unk5C
}

struct Temp001* unref_ovl0_800CE218(struct Temp003 *arg0, s8 arg1) {
    arg0->unk4C = func_ovl0_800CE0D8(arg1, arg0->unk04);

    return arg0->unk4C;

    // WARNING: This might similarly return arg0->unk4C
}

struct SpriteBankCmds {
    /* 0x00 */ s32 count;
    /* 0x04 */ struct SpriteCommand *commands[1];
}; // sizeof == 4 + VLA

struct SpriteCommand {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 unk02; // texture id?
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06; // total frames?
    /* 0x08 */ s32 unk08; // flags?
    /* 0x0C */ f32 unk0C;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ f32 unk18;
    /* 0x1C */ f32 unk1C;
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ u8 bytecode[1];
}; // sizeof == 0x30 + VLA

struct SpriteBank {
    /* 0x00 */ s32 count;
    /* 0x04 */ struct SpriteEntry *entries[1];
}; // sizeof == 4 + VLA

enum HalSpriteBankFormat {
    HalSpriteFmtRGBA = 0,
    HalSpriteFmtYUV  = 1,
    HalSpriteFmtCI   = 2,
    HalSpriteFmtIA   = 3,
    HalSpriteFmtI    = 4
};

struct SpriteEntry {
    /* 0x00 */ u32 count;
    /* 0x04 */ s32 format;
    /* 0x08 */ s32 bitDepth;
    /* 0x0C */ s32 width;
    /* 0x10 */ s32 height;
    /* 0x14 */ s32 flags;
    // After this header, this are offsets to image data, then pallet data
    /* 0x18 */ void *sprOffsets[1];
    // void *palettes[count];
}; // sizeof == 0x18 + VLA

void func_ovl0_800CE254(s32 arg0, struct SpriteBankCmds *arg1, struct SpriteBank *arg2);
#ifdef NON_MATCHING
// nonmatching: reaglloc
// relocate_sprite_bank(loadIdx, cmds, imgs)
void func_ovl0_800CE254(s32 arg0, struct SpriteBankCmds *arg1, struct SpriteBank *arg2) {
    s32 i;
    u32 j;

    if (arg0 < 8) {
        D_ovl0_800D63C0[arg0] = arg1->count;
        D_ovl0_800D63E0[arg0] = arg2->count;
        D_ovl0_800D6400[arg0] = arg1->commands;
        D_ovl0_800D6420[arg0] = arg2->entries;

        // .....why?
        for (i = 1; i <= D_ovl0_800D63C0[arg0]; i++) {
            arg1->commands[i - 1] = (void *)((uintptr_t)arg1->commands[i - 1] + (uintptr_t)arg1);
        }
        // L800CE2E8
        for (i = 1; i <= D_ovl0_800D63E0[arg0]; i++) {
            arg2->entries[i - 1] = (void *)((uintptr_t)arg2->entries[i - 1] + (uintptr_t)arg2);
        }
        // L800CE320

        for (i = 0; i < D_ovl0_800D63E0[arg0]; i++) {
            for (j = 0; j < D_ovl0_800D6420[arg0][i]->count; j++) {
                D_ovl0_800D6420[arg0][i]->sprOffsets[j] =
                    (void *)((uintptr_t)D_ovl0_800D6420[arg0][i]->sprOffsets[j] + (uintptr_t)arg2);
            }
            // L800CE37C
            if (D_ovl0_800D6420[arg0][i]->format == HalSpriteFmtCI) {
                // void **palettes;

                if (D_ovl0_800D6420[arg0][i]->flags & 1) {
                    // one palette after the images
                    D_ovl0_800D6420[arg0][i]->sprOffsets[D_ovl0_800D6420[arg0][i]->count] = (void *)((uintptr_t)D_ovl0_800D6420[arg0][i]->sprOffsets[D_ovl0_800D6420[arg0][i]->count] + (uintptr_t)arg2);
                } else {
                    // L800CE3B0
                    // well, this is one way to write this loop...
                    for (j = D_ovl0_800D6420[arg0][i]->count;
                         j < D_ovl0_800D6420[arg0][i]->count * 2;
                         j++) {
                        D_ovl0_800D6420[arg0][i]->sprOffsets[j] =
                            (void
                                 *)((uintptr_t)D_ovl0_800D6420[arg0][i]->sprOffsets[j] + (uintptr_t)arg2);
                    }
                }
                // L800CE3F8
            }
            // L800CE3FC
        }
        // L800CE410
    }
    // L800CE410
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800CE254.s")
#endif

void func_ovl0_800D0C74(struct GObjCommon *);

struct GObjCommon *func_ovl0_800CE418(s32 arg0) {
    s32 i;
    struct Temp002 *alloced;

    D_ovl0_800D6350 = NULL;
    for (i = 0; i < ARRAY_COUNT(D_ovl0_800D6358); i++) { D_ovl0_800D6358[i] = NULL; }

    for (i = arg0 - 1; i >= 0; i--) {
        alloced = hal_alloc(sizeof(struct Temp002), 4);
        if (alloced == NULL) { return NULL; }
        alloced->next   = D_ovl0_800D6350;
        D_ovl0_800D6350 = alloced;
    }

    D_ovl0_800D6448 = 0;
    D_ovl0_800D644E = 0;
    if (find_gobj_with_id(-6)) { return NULL; }

    return omMakeGObjCommon(-6, func_ovl0_800D0C74, 0, 0x80000000);
}

// Formerly nonmatching
struct Temp002 *func_ovl0_800CE4E4(
    struct Temp002 *arg0,
    s32 arg1,
    s32 arg2,
    u16 arg3,
    u8 *arg4,
    s32 arg5,
    f32 arg6,
    f32 arg7,
    f32 arg8,
    f32 arg9,
    f32 argA,
    f32 argB,
    f32 argC,
    f32 argD,
    f32 argE,
    s32 argF,
    struct Temp003 *arg10) {
    struct Temp002 *s;
    s32 i;

    s = D_ovl0_800D6350;
    if (s == NULL) { return NULL; }

    D_ovl0_800D6448++;
    if (D_ovl0_800D644E < D_ovl0_800D6448) { D_ovl0_800D644E = D_ovl0_800D6448; }

    if (arg10 != NULL)
    {
        s->unk04 = arg10->unk04;
    }
    else
    {
        s->unk04 = ++D_ovl0_800D5D58[0];
    }
    // L800CE568
    if (arg10 != NULL)
    {
        s->unk5C = arg10->unk4C;

        if (s->unk5C != NULL)
        {
            s->unk5C->unk2A++;
        }
    }
    else
    {
        s->unk5C = NULL;
    }
    // L800CE590
    D_ovl0_800D6350 = s->next;
    if (arg0 == NULL)
    {
        s->next = D_ovl0_800D6358[arg1 >> 3];
        D_ovl0_800D6358[arg1 >> 3] = s;
    }
    else
    {
        s->next = arg0->next;
        arg0->next = s;
    }
    // L800CE5D4
    s->unk08 = arg1; // s8
    s->unk06 = arg2; // s16
    s->unk0A = arg3; // s8

    s->unk20 = arg6;
    s->unk24 = arg7;
    s->unk28 = arg8;
    s->unk2C = arg9;
    s->unk30 = argA;
    s->unk34 = argB;
    s->unk40 = argC;
    s->unk38 = argD;
    s->unk3C = argE;

    s->unk1E = arg5 + 1; // s16
    s->unk18 = s->unk1A = 0;        // s16
    s->unk14 = arg4;

    if (argF != 0)
    {
        s->unk06 |= 0x10;
    }

    s->unk0C = (arg4 != NULL) ? TRUE : FALSE;

    // L800CE670
    // s->unk48[3] = 0xFF; // s8/u8
    // s->unk48[2] = 0xFF;
    // s->unk48[1] = 0xFF;

    s->unk0B = 0; // s8

    if (TRUE) // What
    {
        s->unk48.b0 = s->unk48.b1 = s->unk48.b2 = s->unk48.b3 = 255;
        s->unk50.b0 = s->unk50.b1 = s->unk50.b2 = s->unk50.b3 = 0;
    }
    // s->unk53 = 0;
    s->unk12 = 0; // s16
    s->unk10 = 0;
    s->unk0E = 0;
    s->unk58 = arg10;

    return s;
}

// bankIdx looks to be a compound int? lower seven/eight bits are the actual idx
struct Temp002 *func_ovl0_800CE6B8(struct Temp002 *arg0, s32 bankIdx, s32 cmdIdx) {
    s32 idx;
    struct SpriteCommand *cmd;

    idx = bankIdx & 7;
    if (idx >= 8) { return NULL; }

    if (cmdIdx >= D_ovl0_800D63C0[idx]) { return NULL; }

    cmd = D_ovl0_800D6400[idx][cmdIdx];

    return func_ovl0_800CE4E4(
        arg0,
        bankIdx,
        cmd->unk08,
        cmd->unk02,
        cmd->bytecode,
        cmd->unk06,
        0.0f,
        0.0f,
        0.0f,
        cmd->unk14,
        cmd->unk18,
        cmd->unk1C,
        cmd->unk2C,
        cmd->unk0C,
        cmd->unk10,
        D_ovl0_800D6420[idx][cmd->unk02]->flags,
        NULL);
}

struct Temp002 *func_ovl0_800CEF4C(struct Temp002 *, struct Temp002 *, s32);

struct Temp002 *func_ovl0_800CE7A8(
    s32 arg0,
    s32 arg1,
    u16 arg2,
    u8 *arg3,
    s32 arg4,
    f32 arg5,
    f32 arg6,
    f32 arg7,
    f32 arg8,
    f32 arg9,
    f32 argA,
    f32 argB,
    f32 argC,
    f32 argD,
    s32 argE,
    struct Temp003 *argF) {
    struct Temp002 *ret;

    ret = func_ovl0_800CE4E4(
        NULL,
        arg0,
        arg1,
        arg2,
        arg3,
        arg4,
        arg5,
        arg6,
        arg7,
        arg8,
        arg9,
        argA,
        argB,
        argC,
        argD,
        argE,
        argF);
    if (ret != NULL) { func_ovl0_800CEF4C(ret, NULL, arg0 >> 3); }
    return ret;
}

struct Temp002 *func_ovl0_800CE870(s32 bankIdx, s32 cmdIdx) {
    struct Temp002 *ret;

    ret = func_ovl0_800CE6B8(NULL, bankIdx, cmdIdx);
    if (ret != NULL) { func_ovl0_800CEF4C(ret, NULL, bankIdx >> 3); }
    return ret;
}

struct Temp002 *func_ovl0_800CE8C0(
    s32 bankIdx,
    s32 cmdIdx,
    f32 arg2,
    f32 arg3,
    f32 arg4,
    f32 arg5,
    f32 arg6,
    f32 arg7) {
    struct Temp002 *s;
    struct SpriteCommand *cmd;
    s32 idx;

    idx = bankIdx & 7;
    if (idx >= 8) { return NULL; }

    if (cmdIdx >= D_ovl0_800D63C0[idx]) { return NULL; }

    cmd = D_ovl0_800D6400[idx][cmdIdx];
    s   = func_ovl0_800CE4E4(
        NULL,
        bankIdx,
        cmd->unk08,
        cmd->unk02,
        cmd->bytecode,
        cmd->unk06,
        arg2,
        arg3,
        arg4,
        arg5,
        arg6,
        arg7,
        cmd->unk2C,
        cmd->unk0C,
        cmd->unk10,
        D_ovl0_800D6420[idx][cmd->unk02]->flags,
        NULL);

    if (s != NULL) { func_ovl0_800CEF4C(s, NULL, bankIdx >> 3); }

    return s;
}

struct Temp002 *func_ovl0_800CE9E8(s32 bankIdx, s32 cmdIdx) {
    return func_ovl0_800CE6B8(NULL, bankIdx, cmdIdx);
}

void func_ovl0_800CEA14(struct Temp002 *s) {
    if (s != NULL) { func_ovl0_800CEF4C(s, NULL, s->unk08 >> 3); }
}

// maybe remove Temp002 from active queue (D_ovl0_800D6358)?
void func_ovl0_800CEA40(struct Temp002 *arg0) {
    struct Temp002 *prior, *curr;
    struct Temp003 *temp; // child?
    s32 idx;

    idx   = arg0->unk08 >> 3;
    curr  = D_ovl0_800D6358[idx];
    prior = NULL;

    while (curr != NULL) {
        if (curr == arg0) {
            if (prior == NULL) {
                D_ovl0_800D6358[idx] = curr->next;
            } else {
                prior->next = curr->next;
            }

            temp = arg0->unk58;
            if (temp != NULL && (arg0->unk06 & 4) && (temp->unk08 == 2)) { temp->unk54.half--; }

            if (arg0->unk5C != NULL) {
                arg0->unk5C->unk2A--;
                if (arg0->unk5C->unk2A == 0) { func_ovl0_800CE188(arg0->unk5C); }
            }

            curr->next      = D_ovl0_800D6350;
            D_ovl0_800D6350 = curr;
            D_ovl0_800D6448--;

            break;
        }

        prior = curr;
        curr  = curr->next;
    }
}

void unref_ovl0_800CEB50(void) {
    struct Temp002 *curr, *next;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(D_ovl0_800D6358); i++) {
        curr = D_ovl0_800D6358[i];

        while (curr != NULL) {
            next = curr->next;
            func_ovl0_800CEA40(curr);
            curr = next;
        }
    }
}

typedef u8 *CmdCsr;

/* BIG ENDIAN */
// this is big endian only, but this matches
CmdCsr bytecode_read_f32(CmdCsr raw, f32 *dst) {
    u8 buf[4];

    buf[0] = raw[0];
    buf[1] = raw[1];
    buf[2] = raw[2];
    buf[3] = raw[3];
    *dst   = *(f32 *)buf;

    return raw + sizeof(f32);
}

// Formerly nonmatching
CmdCsr bytecode_read_u16(CmdCsr raw, u16 *dst)
{
    u16 ext = *raw++;

    if (ext & 0x80)
    {
        ext = ((((ext & 0x7F) << 8)) + *raw++);
    }
    *dst = ext + 1;

    return raw;
}

// Formerly nonmatching
void func_ovl0_800CEC34(struct Temp002 *arg0, f32 arg1)
{
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 new_var;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 temp_f26;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 temp_f2;

    temp_f22 = arg0->unk2C;
    temp_f20 = arg0->unk30;
    temp_f24 = arg0->unk34;

    sp58 = func_8001863C(temp_f20, temp_f24);
    temp_f26 = __sinf(sp58);
    sp4C = cosf(sp58);
    sp54 = func_8001863C(temp_f22, (temp_f20 * temp_f26) + (temp_f24 * sp4C));
    sp48 = __sinf(sp54);
    sp44 = cosf(sp54);
    sp5C = sqrtf(((temp_f22 * temp_f22) + (temp_f20 * temp_f20)) + (temp_f24 * temp_f24));
    temp_f20 = func_80018948() * (M_PI_F * 2);
    new_var = __sinf(arg1) * sp5C;
    temp_f24 = sp48;
    temp_f22 = cosf(temp_f20) * new_var;
    temp_f20 = __sinf(temp_f20) * new_var;
    temp_f2 = cosf(arg1) * sp5C;

    arg0->unk2C = (f32)((temp_f22 * sp44) + (temp_f2 * sp48));
    arg0->unk30 = (f32)(((((-temp_f22) * temp_f26) * sp48) + (temp_f20 * sp4C)) + ((temp_f2 * temp_f26) * sp44));
    arg0->unk34 = (f32)(((((-temp_f22) * sp4C) * temp_f24) - (temp_f20 * temp_f26)) + ((temp_f2 * sp4C) * sp44));
}

// Formerly nonmatching
void func_ovl0_800CEDBC(struct Temp002 *arg0, struct Temp001 *arg1)
{
    Vec3f sp1C;
    f32 ratio;
    f32 denom;

    if (arg1 != NULL)
    {
        sp1C.z = arg1->unk1C - arg0->unk20;
        sp1C.y = arg1->unk20 - arg0->unk24;
        sp1C.x = arg1->unk24 - arg0->unk28;

        ratio = sqrtf(SQUARE(arg0->unk2C.x) + SQUARE(arg0->unk2C.y) + SQUARE(arg0->unk2C.z));

        denom = SQUARE(sp1C.z) + SQUARE(sp1C.y) + SQUARE(sp1C.x);

        if (denom != 0.0F)
        {
            ratio = ratio / sqrtf(denom);

            arg0->unk2C.x = sp1C.z * ratio;
            arg0->unk2C.y = sp1C.y * ratio;
            arg0->unk2C.z = sp1C.x * ratio;
        }
    }
}

// Formerly nonmatching
void func_ovl0_800CEEB8(struct Temp002 *arg0, struct Temp001 *arg1, f32 arg2) {
    // guess on the local names
    f32 dx;
    f32 dy;
    f32 dz;
    f32 sos;
    f32 frac;

    if (arg1 != NULL)
    {
        dx = arg1->unk1C - arg0->unk20;
        dy = arg1->unk20 - arg0->unk24;
        dz = arg1->unk24 - arg0->unk28;

        frac = SQUARE(dx) + SQUARE(dy) + SQUARE(dz);

        if (frac != 0.0F)
        {
            frac = (arg2 / frac);

            arg0->unk2C += frac * dx;
            arg0->unk30 += frac * dy;
            arg0->unk34 += frac * dz;
        }
    }
}

struct Temp003 *func_ovl0_800D35DC(s32 bankIdx, s32);

#ifdef MIPS_TO_C
struct Temp002 *func_ovl0_800CEF4C(struct Temp002 *arg0, struct Temp002 *arg1, s32 arg2) {
    u16 sp94;
    u8 command; // s0
    CmdCsr csr; // s1
    s32 temp1;  // sp88?
    s32 temp2;
    f32 sp80; // s3
    f32 sp7C;
    u8 mainCmd;

    // s2 is arg0
    if (arg0->unk06 & 0x800) { return arg0->next; }

    if (arg0->unk0C) {
        if (--arg0->unk0C == 0) {
            csr = &arg0->unk14[arg0->unk18];
            do {
                // L800CEFB8
                command = *csr++;
                if (command >= 0x80) {
                    sp94 = 0;
                    // this doesn't seem right, but this how i would write this...
                    /*
                    if ((mainCmd = command & 0xF8) < 0x99) {
                        mainCmd = command & 0xF8;
                    } else if ((command & 0xF0) == 0xC0 || (command & 0xF0) == 0xD0) {
                        mainCmd = command & 0xF0;
                    } else {
                        mainCmd = command;
                    }
                    */

                    mainCmd = command & 0xF8;
                    if (mainCmd >= 0x99 && (mainCmd = command & 0xF0) != 0xC0 && mainCmd != 0xD0) {
                        mainCmd = command;
                    }

                    // L800CF004
                    switch (mainCmd) {
                        case 0x80:
                        {
                            if (command & 1) { csr = bytecode_read_f32(csr, &arg0->unk20); }
                            if (command & 2) { csr = bytecode_read_f32(csr, &arg0->unk24); }
                            if (command & 4) { csr = bytecode_read_f32(csr, &arg0->unk28); }
                            break;
                        }
                        case 0x88:
                        {
                            if (command & 1) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk20 += sp80;
                            }
                            if (command & 2) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk24 += sp80;
                            }
                            if (command & 4) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk28 += sp80;
                            }
                            break;
                        }
                        case 0x90:
                        {
                            if (command & 1) { csr = bytecode_read_f32(csr, &arg0->unk2C); }
                            if (command & 2) { csr = bytecode_read_f32(csr, &arg0->unk30); }
                            if (command & 4) { csr = bytecode_read_f32(csr, &arg0->unk34); }
                            break;
                        }
                        case 0x98:
                        {
                            if (command & 1) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk2C += sp80;
                            }
                            if (command & 2) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk30 += sp80;
                            }
                            if (command & 4) {
                                csr = bytecode_read_f32(csr, &sp80);
                                arg0->unk34 += sp80;
                            }
                            break;
                        }
                        case 0xA0:
                        {
                            csr = bytecode_read_u16(csr, &arg0->unk0E);
                            csr = bytecode_read_f32(csr, &arg0->unk44);

                            if (arg0->unk0E == 1) {
                                arg0->unk0E = 0;
                                arg0->unk40 = arg0->unk44;
                            }
                            break;
                        }
                        case 0xA1:
                        {
                            arg0->unk06 = *csr++;
                            break;
                        }
                        case 0xA2:
                        {
                            csr = bytecode_read_f32(csr, &arg0->unk38);
                            if (arg0->unk38 == 0.0f) {
                                arg0->unk06 &= ~1;
                            } else {
                                arg0->unk06 |= 1;
                            }
                            break;
                        }
                        case 0xA3:
                        {
                            csr = bytecode_read_f32(csr, &arg0->unk3C);
                            if (arg0->unk3C == 1.0f) {
                                arg0->unk06 &= ~2;
                            } else {
                                arg0->unk06 |= 2;
                            }
                            break;
                        }
                        case 0xA4:
                        {
                            // branch? call?
                            struct Temp002 *temp;

                            temp1 = *csr++;
                            temp1 <<= 8;
                            temp1 += *csr++;

                            temp = func_ovl0_800CE6B8(arg0, arg0->unk08, temp1);
                            if (temp != NULL) {
                                temp->unk20 = arg0->unk20;
                                temp->unk24 = arg0->unk24;
                                temp->unk28 = arg0->unk28;
                                temp->unk04 = arg0->unk04;
                                temp->unk58 = arg0->unk58;
                                temp->unk5C = arg0->unk5C;
                                if (temp->unk5C != NULL) { temp->unk5C->unk2A++; }
                                func_ovl0_800CEF4C(temp, arg0, arg0->unk08 >> 3);
                            }
                            break;
                        }
                        case 0xA5:
                        {
                            struct Temp003 *temp;

                            temp1 = *csr++;
                            temp1 <<= 8;
                            temp1 += *csr++;

                            temp = func_ovl0_800D35DC(arg0->unk08, temp1);
                            if (temp != NULL) {
                                temp->unk14 = arg0->unk20;
                                temp->unk18 = arg0->unk24;
                                temp->unk1C = arg0->unk28;
                                temp->unk04 = arg0->unk04;
                                temp->unk4C = arg0->unk5C;
                                if (temp->unk4C != NULL) { temp->unk4C->unk2A++; }
                            }
                            break;
                        }
                        case 0xA6:
                        {
                            // sp88 = (csr[0] << 8) + csr[1];
                            temp1 = *csr++;
                            temp1 <<= 8;
                            temp1 += *csr++;

                            // temp1 = (csr[2] << 8) + csr[3];
                            temp2 = *csr++;
                            temp2 <<= 8;
                            temp2 += *csr++;

                            // csr += 4;

                            arg0->unk1E = (s32)((f32)temp1 * lbRandom_GetFloat()) + temp2;
                            break;
                        }
                        case 0xA7:
                        {
                            temp1 = *csr++;

                            if (temp1 >= (s32)(lbRandom_GetFloat() * 100.0f)) { arg0->unk1E = 1; }
                            goto loop_break;
                        }
                        case 0xA8:
                        {
                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk20 += sp80 * lbRandom_GetFloat();

                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk24 += sp80 * lbRandom_GetFloat();

                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk28 += sp80 * lbRandom_GetFloat();

                            break;
                        }
                        case 0xA9:
                        {
                            csr = bytecode_read_f32(csr, &sp80);
                            func_ovl0_800CEC34(arg0, sp80);
                            break;
                        }
                        case 0xAA:
                        {
                            struct Temp002 *ret;

                            temp1 = *csr++;
                            temp1 <<= 8;
                            temp1 += *csr++;

                            // temp1 = (csr[2] << 8) + csr[3];
                            temp2 = *csr++;
                            temp2 <<= 8;
                            temp2 += *csr++;

                            ret = func_ovl0_800CE6B8(
                                arg0, arg0->unk08, temp2 + (s32)((f32)temp1 * lbRandom_GetFloat()));
                            if (ret != NULL) {
                                ret->unk20 = arg0->unk20;
                                ret->unk24 = arg0->unk24;
                                ret->unk28 = arg0->unk28;
                                ret->unk04 = arg0->unk04;
                                ret->unk58 = arg0->unk58;
                                ret->unk5C = arg0->unk5C;

                                if (ret->unk5C != NULL) { ret->unk5C->unk2A++; }
                                func_ovl0_800CEF4C(ret, arg0, arg0->unk08 >> 3);
                            }
                            break;
                        }
                        case 0xAB:
                        {
                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk2C *= sp80;
                            arg0->unk30 *= sp80;
                            arg0->unk34 *= sp80;
                            break;
                        }
                        case 0xAC:
                        {
                            csr = bytecode_read_u16(csr, &arg0->unk0E);
                            csr = bytecode_read_f32(csr, &arg0->unk44);
                            csr = bytecode_read_f32(csr, &sp80);

                            arg0->unk44 += sp80 * lbRandom_GetFloat();
                            if (arg0->unk0E == 1) {
                                arg0->unk04 = 0;
                                arg0->unk40 = arg0->unk44;
                            }
                            break;
                        }
                        case 0xAD:
                        {
                            arg0->unk06 |= 0x0080;
                            break;
                        }
                        case 0xAE:
                        {
                            // why is this off?
                            arg0->unk06 &= ~0x0060;
                            break;
                        }
                        case 0xAF:
                        {
                            arg0->unk06 &= ~0x0040;
                            arg0->unk06 |= 0x0020;
                            break;
                        }
                        case 0xB0:
                        {
                            arg0->unk06 &= ~0x0020;
                            arg0->unk06 |= 0x0040;
                            break;
                        }
                        case 0xB1:
                        {
                            arg0->unk06 |= 0x0060;
                            break;
                        }
                        case 0xB2:
                        {
                            arg0->unk06 |= 0x0200;
                            break;
                        }
                        case 0xB3:
                        {
                            arg0->unk06 &= ~0x0400;
                            break;
                        }
                        case 0xB4:
                        {
                            arg0->unk06 |= 0x0400;
                            break;
                        }
                        case 0xB5:
                        {
                            arg0->unk06 |= 0x0100;
                            break;
                        }
                        case 0xB6:
                        {
                            arg0->unk06 &= ~0x0100;
                            break;
                        }
                        case 0xB7:
                        {
                            func_ovl0_800CEDBC(arg0, (void *)(&D_ovl0_800D639C)[*csr++]);
                            break;
                        }
                        case 0xB8:
                        {
                            temp1 = *csr++;
                            csr   = bytecode_read_f32(csr, &sp80);
                            func_ovl0_800CEEB8(arg0, (void *)(&D_ovl0_800D639C)[temp1], sp80);
                            break;
                        }
                        case 0xB9:
                        {
                            struct Temp002 *ret;

                            temp1 = *csr++;
                            temp1 <<= 8;
                            temp1 += *csr++;

                            ret = func_ovl0_800CE6B8(arg0, arg0->unk08, temp1);

                            if (ret != NULL) {
                                ret->unk20 = arg0->unk20;
                                ret->unk24 = arg0->unk24;
                                ret->unk28 = arg0->unk28;
                                ret->unk2C = arg0->unk2C;
                                ret->unk30 = arg0->unk30;
                                ret->unk34 = arg0->unk34;
                                ret->unk04 = arg0->unk04;
                                ret->unk58 = arg0->unk58;
                                ret->unk5C = arg0->unk5C;
                                if (ret->unk5C != NULL) { ret->unk5C->unk2A++; }
                                func_ovl0_800CEF4C(ret, arg0, arg0->unk08 >> 3);
                            }
                            break;
                        }
                        case 0xBA:
                        {
                            sp80 = (f32)*csr++;
                            arg0->unk4C.b0 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk4C.b1 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk4C.b2 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk4C.b3 += sp80 * lbRandom_GetFloat();

                            if (arg0->unk10 == 0) {
                                // this has lwl and lwr, so maybe it's a struct?
                                arg0->unk48 = arg0->unk4C;
                            }
                            break;
                        }
                        case 0xBB:
                        {
                            sp80 = (f32)*csr++;
                            arg0->unk54.b0 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk54.b1 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk54.b2 += sp80 * lbRandom_GetFloat();
                            sp80 = (f32)*csr++;
                            arg0->unk54.b3 += sp80 * lbRandom_GetFloat();

                            if (arg0->unk12 == 0) {
                                // this has lwl and lwr, so maybe it's a struct?
                                arg0->unk50 = arg0->unk54;
                            }
                            break;
                        }
                        case 0xBC:
                        {
                            arg0->unk0B = *csr++;
                            sp80        = (f32)*csr++;
                            arg0->unk0B += sp80 * lbRandom_GetFloat();
                            break;
                        }
                        case 0xBD:
                        {
                            csr = bytecode_read_f32(csr, &sp80);
                            csr = bytecode_read_f32(csr, &sp7C);

                            sp80 += sp7C * lbRandom_GetFloat();

                            sp7C = sqrtf(
                                SQUARE(arg0->unk2C) + SQUARE(arg0->unk30) + SQUARE(arg0->unk34));
                            sp80 /= sp7C;

                            arg0->unk2C *= sp80;
                            arg0->unk30 *= sp80;
                            arg0->unk34 *= sp80;
                            break;
                        }
                        case 0xBE:
                        {
                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk2C *= sp80;
                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk30 *= sp80;
                            csr = bytecode_read_f32(csr, &sp80);
                            arg0->unk34 *= sp80;
                            break;
                        }
                        case 0xBF:
                        {
                            temp1 = *csr++ - 1;
                            arg0->unk06 |= 0x8000 | (temp1 << 12);
                            break;
                        }
                        case 0xC0:
                        {
                            struct FourBytes *src, *dst; // sp2c, sp28;

                            dst  = &arg0->unk48;
                            src  = &arg0->unk4C;
                            csr  = bytecode_read_u16(csr, &arg0->unk10);
                            *src = *dst;
                            if (command & 1) { arg0->unk4C.b0 = *csr++; }
                            if (command & 2) { arg0->unk4C.b1 = *csr++; }
                            if (command & 4) { arg0->unk4C.b2 = *csr++; }
                            if (command & 8) { arg0->unk4C.b3 = *csr++; }

                            if (arg0->unk10 == 1) {
                                *dst        = *src;
                                arg0->unk10 = 0;
                            }
                            break;
                        }
                        case 0xD0:
                        {
                            struct FourBytes *src, *dst; // sp2c, sp28;

                            dst  = &arg0->unk50;
                            src  = &arg0->unk54;
                            csr  = bytecode_read_u16(csr, &arg0->unk12);
                            *src = *dst;
                            if (command & 1) { arg0->unk54.b0 = *csr++; }
                            if (command & 2) { arg0->unk54.b1 = *csr++; }
                            if (command & 4) { arg0->unk54.b2 = *csr++; }
                            if (command & 8) { arg0->unk54.b3 = *csr++; }

                            if (arg0->unk12 == 1) {
                                *dst        = *src;
                                arg0->unk12 = 0;
                            }
                            break;
                        }
                        case 0xFA:
                        {
                            s32 temp;
                            temp        = *csr++;
                            arg0->unk1C = (uintptr_t)csr - (uintptr_t)arg0->unk14;
                            arg0->unk09 = temp;
                            break;
                        }
                        case 0xFB:
                        {
                            if (--arg0->unk09 != 0) { csr = arg0->unk14 + arg0->unk1C; }
                            break;
                        }
                        case 0xFC:
                        {
                            arg0->unk1A = (uintptr_t)csr - (uintptr_t)arg0->unk14;
                            break;
                        }
                        case 0xFD:
                        {
                            csr = arg0->unk14 + arg0->unk1A;
                            break;
                        }
                        case 0xFE:
                        case 0xFF:
                        {
                            arg0->unk1E = 1;
                            goto loop_break;
                        }
                    }
                } else { // ?
                         // L800D03E8
                    sp94 = command & 0x1F;
                    if (command & 0x20) { sp94 = *csr++ + (sp94 << 8); }
                    // L800D0410
                    if (command & 0xC0 && (command & 0xC0) == 0x40) { arg0->unk0B = *csr++; }
                }
                // jtgt_ovl0_800D0434 ??
                // L800D0438
            } while (sp94 == 0);
        // L800D0448 break?
        loop_break:
            arg0->unk18 = csr - arg0->unk14;
            arg0->unk0C = sp94;
        }
    }
    // L800D0454
    // L800D0458
    if (arg0->unk0E != 0) { arg0->unk40 += (arg0->unk44 - arg0->unk40) / (f32)arg0->unk0E--; }
    // L800D04A0
    if (arg0->unk10 != 0) {
        //(arg0->unk4C.b0 - arg0->unk48.b0) * (1 / arg0->unk10);
        arg0->unk48.b0 =
            ((arg0->unk48.b0 << 16) + ((arg0->unk4C.b0 - arg0->unk48.b0) * (1 / arg0->unk10)))
            >> 16;
        arg0->unk48.b1 =
            ((arg0->unk48.b1 << 16) + ((arg0->unk4C.b1 - arg0->unk48.b1) * (1 / arg0->unk10)))
            >> 16;
        arg0->unk48.b2 =
            ((arg0->unk48.b2 << 16) + ((arg0->unk4C.b2 - arg0->unk48.b2) * (1 / arg0->unk10)))
            >> 16;
        arg0->unk48.b3 =
            ((arg0->unk48.b3 << 16) + ((arg0->unk4C.b3 - arg0->unk48.b3) * (1 / arg0->unk10)))
            >> 16;

        arg0->unk10--;
    }
    // L800D0574
    if (arg0->unk12 != 0) {
        arg0->unk50.b0 =
            ((arg0->unk50.b0 << 16) + ((arg0->unk54.b0 - arg0->unk50.b0) * 1 / arg0->unk12)) >> 16;
        arg0->unk50.b1 =
            ((arg0->unk50.b1 << 16) + ((arg0->unk54.b1 - arg0->unk50.b1) * 1 / arg0->unk12)) >> 16;
        arg0->unk50.b2 =
            ((arg0->unk50.b2 << 16) + ((arg0->unk54.b2 - arg0->unk50.b2) * 1 / arg0->unk12)) >> 16;
        arg0->unk50.b3 =
            ((arg0->unk50.b3 << 16) + ((arg0->unk54.b3 - arg0->unk50.b3) * 1 / arg0->unk12)) >> 16;

        arg0->unk12--;
    }
    // L800D0648
    if (--arg0->unk1E == 0) {
        struct Temp002 *next; // in s0 here?

        if (arg1 == NULL) {
            D_ovl0_800D6358[arg2] = arg0->next;
        } else {
            arg1->next = arg0->next;
        }
        // L800D0688
        next = arg0->next;
        if (arg0->unk58 != NULL && arg0->unk06 & 4 && arg0->unk58->unk08 == 2) {
            *(u16 *)&arg0->unk54 += 1;
        }
        // L800D06C8
        if (arg0->unk5C != NULL) {
            arg0->unk5C->unk2A--;
            if (arg0->unk5C->unk2A) {
                func_ovl0_800CE188(arg0->unk5C);

                if (arg1 == NULL) {
                    if (next != D_ovl0_800D6358[arg2]) { next = D_ovl0_800D6358[arg2]; }
                }
            }
        }
        // L800D071C
        arg0->next      = D_ovl0_800D6350;
        D_ovl0_800D6350 = arg0;
        D_ovl0_800D6448--;

        return next;
    }
    // L800D074C
    if (arg0->unk06 & 4) {
        u16 sinIdx;
        u16 cosIdx;
        f32 sp70;
        f32 sp6C;     // f2
        f32 sx1, sx2; // sp5C, sp58
        f32 cx1, cx2; // f16=>sp54, f12=>sp50
        f32 sx3, cx3; // f18, f0=>sp44
        struct Temp003 *a2 = arg0->unk58;

        sinIdx = RAD_TO_IDX(arg0->unk38) & 0xFFF;
        cosIdx = sinIdx + 0x400;
        sx1    = gSinTable[sinIdx & SIN_TABLE_IDX_MASK];
        if (sinIdx & 0x800) { sx1 = -sx1; }
        // L800D07D4
        cx1 = gSinTable[cosIdx & SIN_TABLE_IDX_MASK];
        if (cosIdx & 0x800) { cx1 = -cx1; }
        // L800D0810
        sinIdx = RAD_TO_IDX(arg0->unk3C);
        cosIdx = sinIdx + 0x400;
        sx2    = gSinTable[sinIdx & SIN_TABLE_IDX_MASK];
        if (sinIdx & 0x800) { sx2 = -sx2; }
        // L800D087C
        cx2 = gSinTable[cosIdx & SIN_TABLE_IDX_MASK];
        if (cosIdx & 0x800) { cx2 = -cx2; }
        // L800D08BC
        sx1 /= 32768.0f;
        cx1 /= 32768.0f;
        sx2 /= 32768.0f;
        cx2 /= 32768.0f;

        arg0->unk34 += a2->unk50;
        if (a2->unk38 < 0.0f) {
            sp70 = -a2->unk38;
        } else {
            sp70 = a2->unk38;
        }
        // L800D091C
        if (a2->unk3C < 0.0f) {
            sp6C = -a2->unk3C;
        } else {
            sp6C = a2->unk3C;
        }
        // L800D093C
        sinIdx = RAD_TO_IDX(sp6C);
        cosIdx = sinIdx + 0x400;
        sx3    = gSinTable[sinIdx & SIN_TABLE_IDX_MASK];
        if (sinIdx & 0x800) { sx3 = -sx3; }
        // L800D099C
        cx3 = gSinTable[cosIdx & SIN_TABLE_IDX_MASK];
        if (cosIdx & 0x800) { cx3 = -cx3; }
        // L800D09D8
        sp70 += arg0->unk34 * (sx3 / cx3);
        sp70 *= arg0->unk30;
        arg0->unk2C += a2->unk2C;

        sinIdx = RAD_TO_IDX(arg0->unk2C);
        cosIdx = sinIdx + 0x400;
        sx3    = gSinTable[sinIdx & SIN_TABLE_IDX_MASK];
        if (sinIdx & 0x800) { sx3 = -sx3; }
        cx3 = gSinTable[cosIdx & SIN_TABLE_IDX_MASK];
        if (cosIdx & 0x800) { cx3 = -cx3; }
        // L800D0AB8
        sp70 /= 32768.0f;
        arg0->unk20 = (((sp70 * cx3) * cx2) + (arg0->unk34 * sx2)) + a2->unk14;
        arg0->unk24 =
            ((((-(sp70 * cx3) * sx1) * sx2) + ((sp70 * sx3) * cx1)) + ((arg0->unk34 * sx1) * cx2))
            + a2->unk18;
        arg0->unk2C = ((((sx2 * cx1) * sx2) - ((sp70 * sx3) * sx1))
                       + ((arg0->unk34 * cx1) * ((sp70 * sx3) * sx1)))
                    + a2->unk1C;
    } else {
        // L800D0B80
        if (arg0->unk06 & 1) { arg0->unk30 -= arg0->unk38; }
        // L800D0BA4
        if (arg0->unk06 & 2) {
            arg0->unk2C *= arg0->unk3C;
            arg0->unk30 *= arg0->unk3C;
            arg0->unk34 *= arg0->unk3C;
        }
        // L800D0BD8
        arg0->unk20 += arg0->unk2C;
        arg0->unk24 += arg0->unk30;
        arg0->unk28 += arg0->unk34;
    }
    // L800D0C04
    if (arg0->unk06 & 0x8000) {
        struct Temp001 **t;
        t = &D_ovl0_800D63A0[(arg0->unk06 & 0x7000) >> 12];
        if (*t != NULL) {
            (*t)->unk1C = arg0->unk20;
            (*t)->unk20 = arg0->unk24;
            (*t)->unk24 = arg0->unk28;
        }
    }
    // L800D0C54
    return arg0->next;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800CEF4C.s")
#endif

#ifdef NON_MATCHING
// nonmatching: the loop check and D_ovl0_800D6358 are in wrong saved regs
void func_ovl0_800D0C74(struct GObjCommon *obj) {
    struct Temp002 *curr, *prev, *ret;
    u32 flags;
    s32 i;

    flags = obj->unk7C;
    for (i = 0; i < ARRAY_COUNT(D_ovl0_800D6358); i++) {
        if (!(flags & 0x10000)) {
            prev = NULL;
            curr = D_ovl0_800D6358[i];
            while (curr != NULL) {
                ret = func_ovl0_800CEF4C(curr, prev, i);
                if (ret == curr->next) {
                    prev = curr;
                    curr = ret;
                } else {
                    curr = ret;
                }
            }
        }
        flags >>= 1;
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800D0C74.s")
#endif

void func_ovl0_800D0D34(struct GObjCommon *obj);
#ifdef MIPS_TO_C
void func_ovl0_800D0D34(struct GObjCommon *obj) {
    s32 sp2D0;
    s32 sp2CC;
    s32 sp2C8;
    Mtx4f sp288;
    Mtx4f sp248;
    f32 sp220;
    f32 sp21C;
    s32 sp210;
    s32 sp20C;
    // viewport
    f32 sp208;
    f32 sp204;
    f32 sp200;
    f32 sp1FC;
    f32 sp1F8;
    f32 sp1F4;
    u32 sp1D4;
    struct OMCamera *cam; // s0
    s32 i;
    f32 f0, f12, f26, f2;

    // s1 is &sp288
    // s2 is i
    // s3 is &cam->unk64[i]
    // s5 is &sp248
    // f28 is 0.0f
    // f30 is 1.0f
    cam = obj->unk74;
    for (i = 0; i < cam->unk60; i++) {
        switch (cam->unk64[i]->unk04) {
            case 3:
            {
                hal_perspective_fast_f(
                    &sp248,
                    NULL,
                    cam->unk18.f6.f[1],
                    cam->unk18.f6.f[2],
                    cam->unk18.f6.f[3],
                    cam->unk18.f6.f[4],
                    cam->unk18.f6.f[5]);
                break;
            }
            case 4:
            {
                hal_perspective_f(
                    &sp248,
                    NULL,
                    cam->unk18.f6.f[1],
                    cam->unk18.f6.f[2],
                    cam->unk18.f6.f[3],
                    cam->unk18.f6.f[4],
                    cam->unk18.f6.f[5]);
                break;
            }
            case 5:
            {
                hal_ortho_f(
                    &sp248,
                    cam->unk18.f7.f[0],
                    cam->unk18.f7.f[1],
                    cam->unk18.f7.f[2],
                    cam->unk18.f7.f[3],
                    cam->unk18.f7.f[4],
                    cam->unk18.f7.f[5],
                    cam->unk18.f7.f[6]);
                break;
            }
            case 6:
            case 7:
            case 12:
            case 13:
            {
                hal_look_at_f(
                    &sp288,
                    cam->unk38.array[0][0],
                    cam->unk38.array[0][1],
                    cam->unk38.array[0][2],
                    cam->unk38.array[1][0],
                    cam->unk38.array[1][1],
                    cam->unk38.array[1][2],
                    cam->unk38.array[2][0],
                    cam->unk38.array[2][1],
                    cam->unk38.array[2][2]);
                break;
            }
            case 8:
            case 9:
            case 14:
            case 15:
            {
                hal_mod_look_at_f(
                    &sp288,
                    cam->unk38.array[0][0],
                    cam->unk38.array[0][1],
                    cam->unk38.array[0][2],
                    cam->unk38.array[1][0],
                    cam->unk38.array[1][1],
                    cam->unk38.array[1][2],
                    cam->unk38.array[2][0],
                    0.0f,
                    1.0f,
                    0.0f);
                break;
            }
            case 10:
            case 11:
            case 16:
            case 17:
            {
                hal_mod_look_at_f(
                    &sp288,
                    cam->unk38.array[0][0],
                    cam->unk38.array[0][1],
                    cam->unk38.array[0][2],
                    cam->unk38.array[1][0],
                    cam->unk38.array[1][1],
                    cam->unk38.array[1][2],
                    cam->unk38.array[2][0],
                    0.0f,
                    0.0f,
                    1.0f);
                break;
            }
            // L800D0F5C
            default:
            {
                hal_perspective_fast_f(
                    &sp248,
                    NULL,
                    cam->unk18.f6.f[1],
                    cam->unk18.f6.f[2],
                    cam->unk18.f6.f[3],
                    cam->unk18.f6.f[4],
                    cam->unk18.f6.f[5]);
                hal_look_at_f(
                    &sp288,
                    cam->unk38.array[0][0],
                    cam->unk38.array[0][1],
                    cam->unk38.array[0][2],
                    cam->unk38.array[1][0],
                    cam->unk38.array[1][1],
                    cam->unk38.array[1][2],
                    cam->unk38.array[2][0],
                    cam->unk38.array[2][1],
                    cam->unk38.array[2][2]);
                break;
            }
        }
        // L800D0FD0
    }
    // L800D0FE8
    if (cam->unk60 != 0) {
        guMtxCatF(sp288, sp248, sp248);
        sp208 = cam->unk08.vp.vscale[0];
        sp200 = -cam->unk08.vp.vscale[1];
        sp1F8 = cam->unk08.vp.vscale[2];
        sp204 = cam->unk08.vp.vtrans[0];
        sp1FC = cam->unk08.vp.vtrans[1];
        sp1F4 = cam->unk08.vp.vtrans[2];
    } else {
        // L800D108C
        guMtxIdentF(&sp248);
        sp208 = cam->unk08.vp.vscale[0];
        sp200 = -cam->unk08.vp.vscale[1];
        sp1F8 = cam->unk08.vp.vscale[2];
        sp204 = cam->unk08.vp.vtrans[0];
        sp1FC = cam->unk08.vp.vtrans[1];
        sp1F4 = cam->unk08.vp.vtrans[2];

        sp248[0][0] = 1.0f / sp208;
        sp248[1][1] = 1.0f / sp200;
        sp248[2][2] = -1.0f / sp1F8;
        sp248[3][0] = -sp204 / sp208;
        sp248[3][1] = -sp1FC / sp200;
        sp248[3][2] = sp1F4 / sp1F8;
    }
    // L800D1140

    sp220 = sqrtf(SQUARE(sp248[0][0]) + SQUARE(sp248[1][0]) + SQUARE(sp248[2][0]));
    sp21C = sqrtf(SQUARE(sp248[0][1]) + SQUARE(sp248[1][1]) + SQUARE(sp248[2][1]));

    gDPPipeSync(gpDisplayListHead[0]++);
    gDPSetTexturePersp(gpDisplayListHead[0]++, G_TP_NONE);
    gDPSetDepthSource(gpDisplayListHead[0]++, G_ZS_PIXEL);
    gDPSetColorDither(gpDisplayListHead[0]++, D_ovl0_800D5D50[0]);
    gDPSetAlphaDither(gpDisplayListHead[0]++, D_ovl0_800D5D54[0]);

    sp2D0 = -1;
    D_ovl0_800D5D5C[0]++;
    sp1D4 = 0;
    sp2CC = -1;
    sp2C8 = -1; // t7, i?
    while (sp2C8 != 16) {
        struct Temp002 *curr;   // s6
        struct Temp001 *parent; // s0, guess on name

        if (obj->unk30 & (1 << sp1D4)) { continue; }
        // L800D12A8
        curr = D_ovl0_800D6358[sp1D4];
        while (curr != NULL) {
            // L800D12C8
            if (curr->unk40 != 0.0f) {
                parent = curr->unk5C;
                if (parent != NULL) {
                    if (parent->unk29 != D_ovl0_800D5D5C[0]) {
                        if (parent->unk28 != 2) {
                            hal_rotate_rpy_translate_scale_f(
                                &parent->unk2C,
                                parent->unk04,
                                parent->unk08,
                                parent->unk0C,
                                parent->unk10,
                                parent->unk14,
                                parent->unk18,
                                parent->unk1C,
                                parent->unk20,
                                parent->unk24);
                        }
                        // L800D135C
                        if (parent->unk28 == 1) { parent->unk28 = 2; }
                        // L800D1370
                        guMtxCatF(parent->unk2C, sp248, parent->unk6C);
                        curr->unk5C->unkAC = sqrtf(
                            SQUARE(parent->unk6C[0][0]) + SQUARE(parent->unk6C[1][0])
                            + SQUARE(parent->unk6C[2][0]));
                        curr->unk5C->unkB0 = sqrtf(
                            SQUARE(parent->unk6C[0][1]) + SQUARE(parent->unk6C[1][1])
                            + SQUARE(parent->unk6C[2][1]));
                        curr->unk5C->unk29 = D_ovl0_800D5D5C[0];
                    }
                    // L800D13F8
                    if (parent->unk2C[0][0] > 0.0f) {
                        sp210 = -1;
                    } else {
                        sp210 = 0;
                    }
                    // L800D141C
                    if (parent->unk2C[1][1] > 0.0f) {
                        sp20C = -1;
                    } else {
                        sp20C = 0;
                    }
                    // L800D143C
                    f0 = (parent->unk6C[3][0])
                       + (((parent->unk6C[0][0] * curr->unk20)
                           + (parent->unk6C[1][0] * curr->unk24))
                          + (parent->unk6C[2][0] * curr->unk28));
                    f12 = (parent->unk6C[3][1])
                        + (((parent->unk6C[0][1] * curr->unk20)
                            + (parent->unk6C[1][1] * curr->unk24))
                           + (parent->unk6C[2][1] * curr->unk28));
                    f26 = (parent->unk6C[3][2])
                        + (((parent->unk6C[0][2] * curr->unk20)
                            + (parent->unk6C[1][2] * curr->unk24))
                           + (parent->unk6C[2][2] * curr->unk28));
                    f2 = (parent->unk6C[3][3])
                       + (((parent->unk6C[0][3] * curr->unk20)
                           + (parent->unk6C[1][3] * curr->unk24))
                          + (parent->unk6C[2][3] * curr->unk28));
                } else {
                    // L800D14E8
                    sp20C = 0;
                    sp210 = 0;

                    f0 = (sp248[3][0])
                       + (((sp248[0][0] * curr->unk20) + (sp248[1][0] * curr->unk24))
                          + (sp248[2][0] * curr->unk28));
                    f12 = (sp248[3][1])
                        + (((sp248[0][1] * curr->unk20) + (sp248[1][1] * curr->unk24))
                           + (sp248[2][1] * curr->unk28));
                    f26 = (sp248[3][2])
                        + (((sp248[0][2] * curr->unk20) + (sp248[1][2] * curr->unk24))
                           + (sp248[2][2] * curr->unk28));
                    f2 = (sp248[3][3])
                       + (((sp248[0][3] * curr->unk20) + (sp248[1][3] * curr->unk24))
                          + (sp248[2][3] * curr->unk28));
                }
                // L800D1598

                if (f2 == 0.0f) {
                    continue; // goto L800D2690
                }
                f2 = 1.0f / f2;
                // L800D15B4
                f0 = f0 * f2;
                if (f0 < -1.0f || 1.0f < f0 || f12 < -1.0f || 1.0f < f12 || f26 < 0.0f
                    || f26 < 1.0f) {
                    // L800D1634
                    continue; // goto L800D2690
                }
                // L800D1640
            }
            // L800D2690
            // L800D2694
        }
        // L800D26A0
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800D0D34.s")
#endif

void unref_ovl0_800D2720(s32 arg0, struct Temp001 **arg1) {
    if (arg0 > 0 && arg0 <= 8) { (&D_ovl0_800D639C)[arg0] = arg1; }
}

void unref_ovl0_800D2744(s32 arg0, s32 arg1) {
    D_ovl0_800D5D50[0] = arg0;
    D_ovl0_800D5D54[0] = arg1;
}

void func_ovl0_800D2C4C(struct GObjCommon *);
struct GObjCommon *func_ovl0_800D2758(s32 arg0);
#ifdef NON_MATCHING
// nonmatching: regalloc; D_ovl0_800D639C as an address
struct GObjCommon *func_ovl0_800D2758(s32 arg0) {
    struct Temp003 *new;
    s32 i;

    D_ovl0_800D6398 = NULL;
    // if (&D_ovl0_800D639C);
    D_ovl0_800D639C = NULL;
    for (i = arg0 - 1; i >= 0; i--) {
        new = hal_alloc(0x5C, 4);
        if (new == NULL) { return NULL; }
        new->next       = D_ovl0_800D6398;
        D_ovl0_800D6398 = new;
    }

    D_ovl0_800D644A = 0;
    D_ovl0_800D6450 = 0;

    return omMakeGObjCommon(-7, func_ovl0_800D2C4C, 0, 0x80000000);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800D2758.s")
#endif

void func_ovl0_800D27F8(struct Vec3f *arg0, struct Vec3f *arg1, struct DObj *arg2) {
    Mtx4f mtx;
    Mtx4f scratch;
    f32 sx, sy, sz;
    struct DObjDynamicStore *s;
    u8 *dataCsr;
    union Mtx3fi *k1;
    struct Mtx4Float *k2;
    struct Mtx3Float *k3;
    s32 i;

    guMtxIdentF(mtx);
    do {
        if (arg2->unk3C.v.x != 1.0f || arg2->unk3C.v.y != 1.0f || arg2->unk3C.v.z != 1.0f) {
            hal_scale_f(&scratch, arg2->unk3C.v.x, arg2->unk3C.v.y, arg2->unk3C.v.z);
            guMtxCatF(mtx, scratch, mtx);
        }

        if (arg2->unk28.f[1] != 0.0f || arg2->unk28.f[2] != 0.0f || arg2->unk28.f[3] != 0.0f) {
            hal_rotate_rpy_f(&scratch, arg2->unk28.f[1], arg2->unk28.f[2], arg2->unk28.f[3]);
            guMtxCatF(mtx, scratch, mtx);
        }

        if (arg2->unk18.f.v.x != 0.0f || arg2->unk18.f.v.y != 0.0f || arg2->unk18.f.v.z != 0.0f) {
            hal_translate_f(&scratch, arg2->unk18.f.v.x, arg2->unk18.f.v.y, arg2->unk18.f.v.z);
            guMtxCatF(mtx, scratch, mtx);
        }

        s = arg2->unk4C;
        if (s != NULL) {
            k1      = NULL;
            k2      = NULL;
            k3      = NULL;
            dataCsr = s->data;
            for (i = 0; i < ARRAY_COUNT(s->kinds); i++) {
                switch (s->kinds[i]) {
                    case 0: break;
                    case 1:
                        k1 = (void *)dataCsr;
                        dataCsr += sizeof(union Mtx3fi);
                        break;
                    case 2:
                        k2 = (void *)dataCsr;
                        dataCsr += sizeof(struct Mtx4Float);
                        break;
                    case 3:
                        k3 = (void *)dataCsr;
                        dataCsr += sizeof(struct Mtx3Float);
                        break;
                }
            }

            if (k3 != NULL) {
                if (k3->v.x != 1.0f || k3->v.y != 1.0f || k3->v.z != 1.0f) {
                    hal_scale_f(&scratch, k3->v.x, k3->v.y, k3->v.z);
                    guMtxCatF(mtx, scratch, mtx);
                }
            }
            if (k2 != NULL) {
                if (k2->f[1] != 0.0f || k2->f[2] != 0.0f || k2->f[3] != 0.0f) {
                    hal_rotate_rpy_f(&scratch, k2->f[1], k2->f[2], k2->f[3]);
                    guMtxCatF(mtx, scratch, mtx);
                }
            }
            if (k1 != NULL) {
                if (k1->f.v.x != 0.0f || k1->f.v.y != 0.0f || k1->f.v.z != 0.0f) {
                    hal_translate_f(&scratch, k1->f.v.x, k1->f.v.y, k1->f.v.z);
                    guMtxCatF(mtx, scratch, mtx);
                }
            }
        }

        arg2 = arg2->unk14;
    } while ((uintptr_t)arg2 != 1);

    arg0->x = mtx[3][0];
    arg0->y = mtx[3][1];
    arg0->z = mtx[3][2];
    // clang-format off
    sx = arg1->x; sy = arg1->y; sz = arg1->z;
    // clang-format on
    guNormalize(&mtx[0][0], &mtx[1][0], &mtx[2][0]);
    guNormalize(&mtx[0][1], &mtx[1][1], &mtx[2][1]);
    guNormalize(&mtx[0][2], &mtx[1][2], &mtx[2][2]);
    arg1->x = (mtx[0][0] * sx) + (mtx[1][0] * sy) + (mtx[2][0] * sz);
    arg1->y = (mtx[0][1] * sx) + (mtx[1][1] * sy) + (mtx[2][1] * sz);
    arg1->z = (mtx[0][2] * sx) + (mtx[1][2] * sy) + (mtx[2][2] * sz);
}

#ifdef MIPS_TO_C
void func_ovl0_800D2C4C(struct GObjCommon *obj) {
    struct Vec3f sp128;
    struct Vec3f sp11C;
    f32 spDC;
    f32 spB8;
    struct Temp003 *curr;
    D_ovl0_800D6458 = NULL;

    curr = (void *)D_ovl0_800D639C; // s0
    // s1 is &sp11C
    // s2 is 3
    // s3 is &D_ovl0_800D6440
    // s4 is &D_ovl0_800D6458
    while (curr != NULL) {
        if (obj->unk7C & (1 << ((curr->unk09 >> 3) + 16))) {
            D_ovl0_800D6458 = curr;
            curr            = curr->next;
            continue;
        } else if (curr->unk06 & 0x800) {
            // L800D2CEC
            D_ovl0_800D6458 = curr;
            curr            = curr->next;
            continue;
        }
        // L800D2D08
        if (curr->unk40 < 0.0f) {
            curr->unk44 -= curr->unk40;
        } else {
            // L800D2D30
            curr->unk44 += lbRandom_GetFloat() * curr->unk40;
        }
        // L800D2D54
        // f26 1.0f
        // f0 is 0.0f
        if (1.0f <= curr->unk44) {
            sp11C.x = curr->unk20;
            sp11C.y = curr->unk24;
            sp11C.z = curr->unk28;

            if (curr->unk48 != NULL) {
                func_ovl0_800D27F8(&sp128, &sp11C, curr->unk48);
                curr->unk14 = sp128.x;
                curr->unk18 = sp128.y;
                curr->unk1C = sp128.z;
            }
            // L800D2DB4
            if (curr->unk08 == 0 || curr->unk08 == 3 || curr->unk08 == 4) {
                // L800D2DCC
                // unk54 is a u16, but it should be a u32?
                spDC = (lbRandom_GetFloat() * (curr->unk54 - curr->unk50)) + curr->unk50;
                spB8 = (curr->unk54 - curr->unk50) / (f32)(s32)curr->unk44;
            } else {
                // L800D2E1C
                spDC = lbRandom_GetFloat() * (2.0f * M_PI_F);
                spB8 = (2.0f * M_PI_F) / (f32)(s32)curr->unk44;
            }
        }
        // L800D2E6C
        while (1.0f <= curr->unk44) {
            switch (curr->unk08) {
                case 0:
                case 3:
                case 4:
                {
                    // sinf(atan2f(sp11C.y, sp11C.z))
                }
                default:
            }
        }
        // L800D3424

        // L800D34FC
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800D2C4C.s")
#endif

// todo: align types for D_ovl0_800D639C and D_ovl0_800D6398
struct Temp003 *func_ovl0_800D353C(void) {
    struct Temp003 *t = D_ovl0_800D6398;

    if (t == NULL) { return NULL; }

    if (++D_ovl0_800D644A > D_ovl0_800D6450) { D_ovl0_800D6450 = D_ovl0_800D644A; }
    D_ovl0_800D6398 = t->next;
    t->next         = (void *)D_ovl0_800D639C;
    D_ovl0_800D639C = (void *)t;

    if (D_ovl0_800D6458 == NULL) { D_ovl0_800D6458 = t; }
    D_ovl0_800D5D58[0]++;
    t->unk04 = D_ovl0_800D5D58[0];
    t->unk4C = NULL;

    return t;
}

struct Temp003 *func_ovl0_800D35DC(s32 bankIdx, s32 cmdIdx) {
    struct Temp003 *sp2C;
    UNUSED u32 pad28;
    s32 idx; // v0

    idx = bankIdx & 7;

    if (idx >= 8) { return NULL; }
    if (cmdIdx >= D_ovl0_800D63C0[idx]) { return NULL; }

    sp2C = func_ovl0_800D353C();
    if (sp2C != NULL) {
        // a0 is &D_ovl0_800D6400[idx]
        sp2C->unk08 = D_ovl0_800D6400[idx][cmdIdx]->unk00;
        sp2C->unk09 = bankIdx;
        sp2C->unk06 = D_ovl0_800D6400[idx][cmdIdx]->unk08;
        sp2C->unk0A = D_ovl0_800D6400[idx][cmdIdx]->unk02;
        sp2C->unk0C = D_ovl0_800D6400[idx][cmdIdx]->unk06;
        sp2C->unk0E = D_ovl0_800D6400[idx][cmdIdx]->unk04;
        sp2C->unk14 = 0.0f;
        sp2C->unk18 = 0.0f;
        sp2C->unk1C = 0.0f;
        sp2C->unk20 = D_ovl0_800D6400[idx][cmdIdx]->unk14;
        sp2C->unk24 = D_ovl0_800D6400[idx][cmdIdx]->unk18;
        sp2C->unk28 = D_ovl0_800D6400[idx][cmdIdx]->unk1C;
        sp2C->unk2C = D_ovl0_800D6400[idx][cmdIdx]->unk0C;
        sp2C->unk30 = D_ovl0_800D6400[idx][cmdIdx]->unk10;
        sp2C->unk34 = D_ovl0_800D6400[idx][cmdIdx]->unk2C;
        sp2C->unk10 = D_ovl0_800D6400[idx][cmdIdx]->bytecode;
        sp2C->unk38 = D_ovl0_800D6400[idx][cmdIdx]->unk20;
        sp2C->unk3C = D_ovl0_800D6400[idx][cmdIdx]->unk24;
        sp2C->unk40 = D_ovl0_800D6400[idx][cmdIdx]->unk28;
        sp2C->unk44 = 0.0f;

        if (D_ovl0_800D6420[idx][D_ovl0_800D6400[idx][cmdIdx]->unk02]->flags != 0) {
            sp2C->unk06 |= 0x10;
        }
        sp2C->unk48 = NULL;

        switch (sp2C->unk08) {
            case 0:
            case 3:
            case 4:
                sp2C->unk50   = 0;
                sp2C->unk54.f = (M_PI_F * 2.0f);
                break;
            case 1:
                sp2C->unk50   = sp2C->unk14 + sp2C->unk20;
                sp2C->unk54.f = sp2C->unk18 + sp2C->unk24;
                sp2C->unk58   = sp2C->unk1C + sp2C->unk28;
                break;
            case 2: sp2C->unk54.half = 0; break;
            default:
                if (D_ovl0_800D6444 != NULL) { D_ovl0_800D6444(sp2C); }
                break;
        }
    }

    return sp2C;
}

// drop struct Temp003?
void func_ovl0_800D3884(struct Temp003 *arg0) {
    struct Temp003 *prev, *curr;

    curr = (void *)D_ovl0_800D639C;
    prev = NULL;
    while (curr != NULL) {
        if (curr == arg0) {
            if (arg0->unk08 == 2 && arg0->unk54.half != 0) {
                arg0->unk0E = 1;
                arg0->unk40 = 0.0f;
                return;
            }

            if (prev == NULL) {
                D_ovl0_800D639C = (void *)curr->next;
            } else {
                prev->next = curr->next;
            }

            if (arg0->unk4C != NULL) {
                arg0->unk4C->unk2A -= 1;
                if (arg0->unk4C->unk2A == 0) { func_ovl0_800CE188(arg0->unk4C); }
            }

            curr->next      = D_ovl0_800D6398;
            D_ovl0_800D6398 = curr;
            D_ovl0_800D644A -= 1;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void unref_ovl0_800D3978(void) {
    struct Temp003 *next, *curr;

    curr = (void *)D_ovl0_800D639C;
    while (curr != NULL) {
        next = curr->next;
        func_ovl0_800D3884(curr);
        curr = next;
    }
}

void unref_ovl0_800D39C0(void (*arg0)(struct Temp003 *), u32 arg1) {
    D_ovl0_800D6444 = arg0;
    D_ovl0_800D6440 = arg1;
}

void func_ovl0_800D39D4(s32 arg0, s32 arg1);
#ifdef MIPS_TO_C
#else
#pragma GLOBAL_ASM("game/nonmatching/ovl0/halsprite/func_ovl0_800D39D4.s")
#endif

void unref_ovl0_800D3BFC(struct Temp003 *arg0) {
    func_ovl0_800D39D4(arg0->unk04, arg0->unk08 >> 3);
}

// guess on the arg type..
void unref_ovl0_800D3C28(struct Temp003 *arg0) {
    func_ovl0_800D39D4(arg0->unk04, arg0->unk09 >> 3);
}

void unref_ovl0_800D3C54(struct GObjCommon *obj) {
    struct DObj *dobj;
    struct Temp003 *curr, *next;

    if (obj->unk0F == 1) {
        dobj = obj->unk74;
        while (dobj != NULL) {
            curr = (void *)D_ovl0_800D639C;
            while (curr != NULL) {
                next = curr->next;
                if (dobj == curr->unk48) { func_ovl0_800D3884(curr); }
                curr = next;
            }
            dobj = func_8000BAA0(dobj);
        }
    }
}

void unref_ovl0_800D3CE0(f32 arg0, f32 arg1, f32 arg2) {
    s32 i;
    struct Temp002 *curr;
    struct Temp003 *t3Curr;

    for (i = 0; i < ARRAY_COUNT(D_ovl0_800D6358); i++) {
        curr = D_ovl0_800D6358[i];
        while (curr != NULL) {
            curr->unk20 = arg0;
            curr->unk24 = arg1;
            curr->unk28 = arg2;
            curr        = curr->next;
        }
    }

    t3Curr = (void *)D_ovl0_800D639C;
    while (t3Curr != NULL) {
        t3Curr->unk14 = arg0;
        t3Curr->unk18 = arg1;
        t3Curr->unk1C = arg2;
        t3Curr        = t3Curr->next;
    }
}

void unref_ovl0_800D3D64(u16 arg0, s32 arg1) {
    struct Temp002 *t2Curr;
    struct Temp003 *t3Curr;

    t2Curr = D_ovl0_800D6358[arg1];
    while (t2Curr != NULL) {
        if (t2Curr->unk04 == arg0) { t2Curr->unk06 |= 0x0800; }
        t2Curr = t2Curr->next;
    }

    t3Curr = (void *)D_ovl0_800D639C;
    while (t3Curr != NULL) {
        if (t3Curr->unk04 == arg0) { t3Curr->unk06 |= 0x0800; }
        t3Curr = t3Curr->next;
    }
}

void unref_ovl0_800D3DE8(u16 arg0, s32 arg1) {
    struct Temp002 *t2Curr;
    struct Temp003 *t3Curr;

    t2Curr = D_ovl0_800D6358[arg1];
    while (t2Curr != NULL) {
        if (t2Curr->unk04 == arg0) { t2Curr->unk06 &= ~0x0800; }
        t2Curr = t2Curr->next;
    }

    t3Curr = (void *)D_ovl0_800D639C;
    while (t3Curr != NULL) {
        if (t3Curr->unk04 == arg0) { t3Curr->unk06 &= ~0x0800; }
        t3Curr = t3Curr->next;
    }
}

#pragma GCC diagnostic pop
