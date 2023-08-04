#include "sys/system_04.h"

#include "sys/hal_gu.h"
#include "sys/interpolation.h"
#include "sys/obj_renderer.h"
#include "sys/om.h"
#include "sys/system_03_1.h"

#include <macros.h>
#include <ssb_types.h>

#include <PR/gu.h>
#include <PR/ultratypes.h>

/*********** data **********/
s32 D_8003B930 = 10;
s32 D_8003B934 = 10;
s32 D_8003B938 = 10;
s32 D_8003B93C = 10;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void unref_8000BBB0(struct GObjCommon *arg0, f32 arg1) {
    // might be `struct OMCamera *` instead...
    struct MObj *mobj;
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        mobj = dobj->unk80;
        while (mobj != NULL) {
            mobj->unk9C = arg1;
            mobj        = mobj->next;
        }

        dobj = func_8000BAA0(dobj);
    }
}

void unref_8000BC10(struct GObjCommon *arg0) {
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        func_80008EE4(dobj);
        dobj = func_8000BAA0(dobj);
    }
}

void unref_8000BC54(struct GObjCommon *arg0) {
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        // this pointer is used as an OMAnimation...?
        // is the function or the field type wrong?
        struct MObj *typingOff;

        func_80008EE4(dobj);
        typingOff = dobj->unk80;
        while (typingOff != NULL) {
            func_80008FB0((void *)typingOff);
            typingOff = typingOff->next;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void unref_8000BCBC(struct GObjCommon *arg0) {
    struct DObj *dobj = arg0->unk74;

    while (dobj != NULL) {
        // this pointer is used as an OMAnimation...?
        // is the function or the field type wrong?
        struct MObj *typingOff;

        typingOff = dobj->unk80;
        while (typingOff != NULL) {
            func_80008FB0((void *)typingOff);
            typingOff = typingOff->next;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void func_8000BD1C(struct DObj *arg0, union AnimCmd *arg1, f32 arg2) {
    struct AObj *aobj = arg0->unk6C;

    while (aobj != NULL) {
        aobj->unk05 = 0;
        aobj        = aobj->next;
    }
    arg0->unk70 = arg1;
    arg0->unk74 = LOWER_BOUND;
    arg0->unk7C = arg2;
}

void func_8000BD54(struct MObj *arg0, union AnimCmd *arg1, f32 arg2) {
    struct AObj *aobj = arg0->unk90;

    while (aobj != NULL) {
        aobj->unk05 = 0;
        aobj        = aobj->next;
    }
    arg0->unk94 = arg1;
    arg0->unk98 = LOWER_BOUND;
    arg0->unkA0 = arg2;
}

void func_8000BD8C(struct GObjCommon *arg0, union AnimCmd **arg1, f32 arg2) {
    struct DObj *dobj;
    u8 s2 = 1;

    dobj        = arg0->unk74;
    arg0->unk78 = arg2;
    while (dobj != NULL) {
        if (*arg1 != NULL) {
            func_8000BD1C(dobj, *arg1, arg2);
            dobj->unk55 = s2;
            s2          = 0;
        } else {
            dobj->unk74 = FLOAT_NEG_MAX;
            dobj->unk55 = 0;
        }

        arg1++;
        dobj = func_8000BAA0(dobj);
    }
}

void func_8000BE28(struct GObjCommon *arg0, union AnimCmd ***arg1, f32 arg2) {
    struct DObj *dobj;
    struct MObj *mobj;
    union AnimCmd **cmdlist;

    dobj        = arg0->unk74;
    arg0->unk78 = arg2;
    while (dobj != NULL) {
        if (arg1 != NULL) {
            if (*arg1 != NULL) {
                cmdlist = *arg1;
                mobj    = dobj->unk80;
                while (mobj != NULL) {
                    if (*cmdlist != NULL) { func_8000BD54(mobj, *cmdlist, arg2); }
                    cmdlist++;
                    mobj = mobj->next;
                }
            }
            arg1++;
        }
        dobj = func_8000BAA0(dobj);
    }
}

void func_8000BED8(struct GObjCommon *arg0, union AnimCmd **arg1, union AnimCmd ***arg2, f32 arg3) {
    struct DObj *dobj = arg0->unk74;
    struct MObj *mobj;
    union AnimCmd **cmdlist;
    u8 s5 = 1;

    arg0->unk78 = arg3;
    while (dobj != NULL) {
        if (arg1 != NULL) {
            if (*arg1 != NULL) {
                func_8000BD1C(dobj, *arg1, arg3);
                dobj->unk55 = s5;
                s5          = 0;
            } else {
                dobj->unk74 = FLOAT_NEG_MAX;
                dobj->unk55 = 0;
            }
            arg1++;
        }
        if (arg2 != NULL) {
            if (*arg2 != NULL) {
                cmdlist = *arg2;
                mobj    = dobj->unk80;
                while (mobj != NULL) {
                    if (*cmdlist != NULL) { func_8000BD54(mobj, *cmdlist, arg3); }
                    cmdlist++;
                    mobj = mobj->next;
                }
            }
            arg2++;
        }
        dobj = func_8000BAA0(dobj);
    }
}

// according to Kirby64, this is the animation processor
// could be a struct DObj as well (what is the relationship between these two?)
void func_8000BFE8(struct DObj *dobj) {
    struct AObj *sp80[10];
    struct AObj *aobj;
    s32 i;
    u32 cmd;
    u32 subcmd;
    f32 payload;

    if (dobj->unk74 != (f32)FLOAT_NEG_MAX) {
        if (dobj->unk74 == (f32)LOWER_BOUND) {
            dobj->unk74 = -dobj->unk7C;
        } else {
            dobj->unk74 -= dobj->unk78;
            dobj->unk7C += dobj->unk78;
            dobj->unk4->unk78 = dobj->unk7C;

            if (dobj->unk74 > 0.0f) { return; }
        }

        // clang-format off
        for (i = 0; i < ARRAY_COUNT(sp80); i++) { 
            sp80[i] = NULL; 
        }
        // clang-format on

        aobj = dobj->unk6C;
        while (aobj != NULL) {
            if (aobj->unk04 > 0 && aobj->unk04 < ARRAY_COUNT(sp80) + 1) {
                sp80[aobj->unk04 - 1] = aobj;
            }
            aobj = aobj->next;
        }

        do {
            if (dobj->unk70 == NULL) {
                aobj = dobj->unk6C;
                while (aobj != NULL) {
                    if (aobj->unk05) { aobj->unk0C += dobj->unk78 + dobj->unk74; }
                    aobj = aobj->next;
                }
                dobj->unk7C       = dobj->unk74;
                dobj->unk4->unk78 = dobj->unk74;
                dobj->unk74       = PROCESSED_DEFAULT;
                return;
            }

            cmd = dobj->unk70->w >> 25;
            switch (cmd) {
                case 8:
                case 9:
                {
                    payload = (f32)(dobj->unk70->w & 0x7FFF);
                    subcmd  = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }

                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = dobj->unk70->f;
                            dobj->unk70++;
                            sp80[i]->unk18 = sp80[i]->unk1C;
                            sp80[i]->unk1C = 0.0f;
                            sp80[i]->unk05 = 3;
                            if (payload != 0.0f) { sp80[i]->unk08 = 1.0f / payload; }
                            sp80[i]->unk0C = -dobj->unk74 - dobj->unk78;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 8) { dobj->unk74 += payload; }
                    break;
                }
                case 3:
                case 4:
                {
                    payload = (f32)(dobj->unk70->w & 0x7FFF);
                    subcmd  = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }
                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = dobj->unk70->f;
                            dobj->unk70++;
                            sp80[i]->unk05 = 2;
                            if (payload != 0.0f) {
                                sp80[i]->unk18 = (sp80[i]->unk14 - sp80[i]->unk10) / payload;
                            }
                            sp80[i]->unk0C = -dobj->unk74 - dobj->unk78;
                            sp80[i]->unk1C = 0.0f;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 3) { dobj->unk74 += payload; }
                    break;
                }
                case 5:
                case 6:
                {
                    payload = (f32)(dobj->unk70->w & 0x7FFF);
                    subcmd  = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }

                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = dobj->unk70->f;
                            dobj->unk70++;
                            sp80[i]->unk18 = sp80[i]->unk1C;
                            sp80[i]->unk1C = dobj->unk70->f;
                            dobj->unk70++;
                            sp80[i]->unk05 = 3;
                            if (payload != 0.0f) { sp80[i]->unk08 = 1.0f / payload; }
                            sp80[i]->unk0C = -dobj->unk74 - dobj->unk78;
                        }

                        subcmd >>= 1;
                    }

                    if (cmd == 5) { dobj->unk74 += payload; }
                    break;
                }
                case 7:
                {
                    subcmd = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }

                            sp80[i]->unk1C = dobj->unk70->f;
                            dobj->unk70++;
                        }
                        subcmd >>= 1;
                    }
                    break;
                }
                case 2:
                {
                    dobj->unk74 += (f32)(dobj->unk70++->w & 0x7FFF);
                    break;
                }
                case 10:
                case 11:
                {
                    payload = (f32)(dobj->unk70->w & 0x7FFF);
                    subcmd  = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }

                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = dobj->unk70->f;
                            dobj->unk70++;
                            sp80[i]->unk05 = 1;
                            sp80[i]->unk08 = payload;
                            sp80[i]->unk0C = -dobj->unk74 - dobj->unk78;
                            sp80[i]->unk1C = 0.0f;
                        }

                        subcmd >>= 1;
                    }

                    if (cmd == 10) { dobj->unk74 += payload; }
                    break;
                }
                case 14:
                {
                    dobj->unk70++;
                    dobj->unk70       = dobj->unk70->ptr;
                    dobj->unk7C       = -dobj->unk74;
                    dobj->unk4->unk78 = -dobj->unk74;

                    if (dobj->unk55 != 0 && dobj->unk4->unk80 != NULL) {
                        dobj->unk4->unk80(dobj, -2, 0);
                    }
                    break;
                }
                case 1:
                {
                    dobj->unk70++;
                    dobj->unk70 = dobj->unk70->ptr;

                    if (dobj->unk55 != 0 && dobj->unk4->unk80 != NULL) {
                        dobj->unk4->unk80(dobj, -2, 0);
                    }
                    break;
                }
                case 12:
                {
                    payload = (f32)(dobj->unk70->w & 0x7FFF);
                    subcmd  = (dobj->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = create_aobj_for_dobj(dobj, i + 1); }

                            sp80[i]->unk0C += payload;
                        }
                        subcmd >>= 1;
                    }

                    break;
                }
                case 13:
                {
                    dobj->unk70++;
                    if (sp80[3] == NULL) { sp80[3] = create_aobj_for_dobj(dobj, 3 + 1); }
                    sp80[3]->unk20 = dobj->unk70->ptr;
                    dobj->unk70++;
                    break;
                }
                case 0:
                {
                    aobj = dobj->unk6C;
                    while (aobj != NULL) {
                        if (aobj->unk05 != 0) { aobj->unk0C += dobj->unk78 + dobj->unk74; }
                        aobj = aobj->next;
                    }
                    dobj->unk7C       = dobj->unk74;
                    dobj->unk4->unk78 = dobj->unk74;
                    dobj->unk74       = PROCESSED_DEFAULT;
                    if (dobj->unk55 != 0 && dobj->unk4->unk80 != NULL) {
                        dobj->unk4->unk80(dobj, -1, 0);
                    }
                    return; // not break
                }
                case 15:
                {
                    dobj->unk54 = (dobj->unk70->w << 7) >> 22;
                    dobj->unk74 += (f32)(dobj->unk70++->w & 0x7FFF);
                    break;
                }
                case 16:
                {
                    if (dobj->unk4->unk80 != NULL) {
                        // only seems to match when spelled out...
                        dobj->unk4->unk80(
                            dobj,
                            ((dobj->unk70->w << 7) >> 22) >> 8,
                            ((dobj->unk70->w << 7) >> 22) & 0xFF);
                    }

                    dobj->unk74 += (f32)(dobj->unk70++->w & 0x7FFF);
                    ;
                    break;
                }
                case 17:
                {
                    subcmd = (dobj->unk70->w << 7) >> 22;
                    dobj->unk74 += (f32)(dobj->unk70++->w & 0x7FFF);

                    for (i = 4; i < 14; i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (dobj->unk4->unk80 != NULL) {
                                dobj->unk4->unk80(dobj, i, dobj->unk70->f);
                            }
                            dobj->unk70++;
                        }
                        subcmd >>= 1;
                    }
                    break;
                }
                // empty, but necessary
                default:
                {
                }
            }
        } while (dobj->unk74 <= 0.0f);
    }
}

f32 func_8000CA28(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18; // arg0^2
    f32 temp_f2;  // arg1^2

    temp_f2  = SQUARE(arg1);
    temp_f18 = SQUARE(arg0);
    temp_f16 = temp_f2 * arg1 * temp_f18; // arg1^3 * arg0^2
    temp_f10 = 2.0f * temp_f16 * arg0;    // 2.0f * arg1^3 * arg0^3
    sp14     = 3.0f * temp_f2 * temp_f18; // 3 * arg1^2 * arg0^2
    sp18     = temp_f2 * arg0;            // arg0^3
    sp10     = temp_f16 - sp18;           // arg1^3 * arg0^2 - arg0^3

    return (((temp_f10 - sp14) + 1.0f) * arg2) + (arg3 * (sp14 - temp_f10))
         + (arg4 * ((sp10 - sp18) + arg1)) + (arg5 * sp10);
}

f32 func_8000CADC(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    f32 temp_f18;
    f32 temp_f16;
    f32 temp_f2;

    temp_f2  = 2.0f * arg1 * arg0;
    temp_f16 = 3.0f * arg1 * arg1 * arg0 * arg0;
    temp_f18 = 6.0f * arg1;

    return (((temp_f18 * arg1 * arg0 * arg0 * arg0) - (temp_f18 * arg0 * arg0)) * (arg2 - arg3))
         + (arg4 * ((temp_f16 - (2.0f * temp_f2)) + 1.0f)) + (arg5 * (temp_f16 - temp_f2));
}

f32 func_8000CB94(struct AObj *aobj) {
    switch (aobj->unk05) {
        case 2: return aobj->unk10 + (aobj->unk0C * aobj->unk18);
        case 3:
            return func_8000CA28(
                aobj->unk08, aobj->unk0C, aobj->unk10, aobj->unk14, aobj->unk18, aobj->unk1C);
        case 1: return aobj->unk08 <= aobj->unk0C ? aobj->unk14 : aobj->unk10;
    }
#ifdef AVOID_UB
    return 0.0f;
#endif
}

f32 func_8000CC40(struct AObj *aobj) {
    switch (aobj->unk05) {
        case 2: return aobj->unk18;
        case 3:
            return func_8000CADC(
                aobj->unk08, aobj->unk0C, aobj->unk10, aobj->unk14, aobj->unk18, aobj->unk1C);
        case 1: return 0.0f;
    }
#ifdef AVOID_UB
    return 0.0f;
#endif
}

void func_8000CCBC(struct DObj *dobj) {
    f32 f26; // sp54
    struct AObj *aobj;

    if (dobj->unk74 != (f32)FLOAT_NEG_MAX) {
        aobj = dobj->unk6C;

        while (aobj != NULL) {
            // L8000CD20
            if (aobj->unk05 != 0) {
                if (dobj->unk74 != FLOAT_MAYBE_SCALE_MIN) { aobj->unk0C += dobj->unk78; }
                // L8000CD58
                if (!(dobj->unk4->unk7C & 2)) {
                    switch (aobj->unk05) {
                        case 2: f26 = aobj->unk10 + (aobj->unk0C * aobj->unk18); break;
                        case 3:
                        {
                            f32 temp_f16 = SQUARE(aobj->unk08);
                            f32 temp_f12 = SQUARE(aobj->unk0C);
                            f32 temp_f18 = aobj->unk08 * temp_f12;
                            f32 temp_f14 = aobj->unk0C * temp_f12 * temp_f16;
                            f32 temp_f20 = 2.0f * temp_f14 * aobj->unk08;
                            f32 temp_f22 = 3.0f * temp_f12 * temp_f16;
                            f32 temp_f24 = temp_f14 - temp_f18;

                            f26 = (aobj->unk10 * ((temp_f20 - temp_f22) + 1.0f))
                                + (aobj->unk14 * (temp_f22 - temp_f20))
                                + (aobj->unk18 * ((temp_f24 - temp_f18) + aobj->unk0C))
                                + (aobj->unk1C * temp_f24);
                            break;
                        }
                        case 1: f26 = aobj->unk08 <= aobj->unk0C ? aobj->unk14 : aobj->unk10; break;
                        default:
                        {
                        }
                    }

                    // L8000CE5C L8000CE60
                    switch (aobj->unk04) {
                        case 1: dobj->unk28.f[1] = f26; break;
                        case 2: dobj->unk28.f[2] = f26; break;
                        case 3: dobj->unk28.f[3] = f26; break;
                        case 4:
                            if (f26 < 0.0f) {
                                f26 = 0.0f;
                            } else {
                                if (f26 > 1.0f) { f26 = 1.0f; }
                            }
                            hal_interpolation_cubic(&dobj->unk18.f.v, aobj->unk20, f26);
                            break;
                        case 5: dobj->unk18.f.v.x = f26; break;
                        case 6: dobj->unk18.f.v.y = f26; break;
                        case 7: dobj->unk18.f.v.z = f26; break;
                        case 8: dobj->unk3C.v.x = f26; break;
                        case 9: dobj->unk3C.v.y = f26; break;
                        case 10: dobj->unk3C.v.z = f26; break;
                    }
                }
            }
            // L8000CF10
            aobj = aobj->next;
        }
        // L8000CF20
        if (dobj->unk74 == FLOAT_MAYBE_SCALE_MIN) { dobj->unk74 = FLOAT_NEG_MAX; }
    }
    // L8000CF48
}

// the arg typing may be off?
void func_8000CF6C(struct MObj *mobj) {
    struct AObj *sp90[10];
    struct AObj *sp7C[5];
    struct AObj *aobj;
    s32 i;
    u32 cmd;
    u32 subcmd;
    f32 payload;

    if (mobj->unk98 != (f32)FLOAT_NEG_MAX) {
        if (mobj->unk98 == (f32)LOWER_BOUND) {
            mobj->unk98 = -mobj->unkA0;
        } else {
            mobj->unk98 -= mobj->unk9C;
            mobj->unkA0 += mobj->unk9C;

            if (mobj->unk98 > 0.0f) { return; }
        }

        // clang-format off
        for (i = 0; i < ARRAY_COUNT(sp90); i++) { 
            sp90[i] = NULL; 
        }

        for (i = 0; i < ARRAY_COUNT(sp7C); i++) { 
            sp7C[i] = NULL; 
        }
        // clang-format on

        aobj = mobj->unk90;
        while (aobj != NULL) {
            if (aobj->unk04 >= 13 && aobj->unk04 < 23) { sp90[aobj->unk04 - 13] = aobj; }

            if (aobj->unk04 >= 37 && aobj->unk04 < 42) { sp7C[aobj->unk04 - 37] = aobj; }

            aobj = aobj->next;
        }

        do {
            if (mobj->unk94 == NULL) {
                aobj = mobj->unk90;
                while (aobj != NULL) {
                    if (aobj->unk05 != 0) { aobj->unk0C += mobj->unk9C + mobj->unk98; }
                    aobj = aobj->next;
                }
                mobj->unkA0 = mobj->unk98;
                mobj->unk98 = PROCESSED_DEFAULT;

                break; // or return?
            }

            cmd = mobj->unk94->w >> 25;
            switch (cmd) {
                case 8:
                case 9:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }
                            sp90[i]->unk10 = sp90[i]->unk14;
                            sp90[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;
                            sp90[i]->unk18 = sp90[i]->unk1C;
                            sp90[i]->unk1C = 0.0f;
                            sp90[i]->unk05 = 3;

                            if (payload != 0.0f) { sp90[i]->unk08 = 1.0f / payload; }
                            sp90[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 8) { mobj->unk98 += payload; }
                    break;
                }
                case 3:
                case 4:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }

                            sp90[i]->unk10 = sp90[i]->unk14;
                            sp90[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;
                            sp90[i]->unk05 = 2;
                            if (payload != 0.0f) {
                                sp90[i]->unk18 = (sp90[i]->unk14 - sp90[i]->unk10) / payload;
                            }
                            sp90[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                            sp90[i]->unk1C = 0.0f;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 3) { mobj->unk98 += payload; }
                    break;
                }
                case 5:
                case 6:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }
                            sp90[i]->unk10 = sp90[i]->unk14;
                            sp90[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;
                            sp90[i]->unk18 = sp90[i]->unk1C;
                            sp90[i]->unk1C = mobj->unk94->f;
                            mobj->unk94++;

                            sp90[i]->unk05 = 3;
                            if (payload != 0.0f) { sp90[i]->unk08 = 1.0f / payload; }
                            sp90[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 5) { mobj->unk98 += payload; }
                    break;
                }
                case 7:
                {
                    subcmd = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }
                            sp90[i]->unk1C = mobj->unk94->f;
                            mobj->unk94++;
                        }
                        subcmd >>= 1;
                    }
                    break;
                }
                case 2:
                {
                    mobj->unk98 += (f32)(mobj->unk94->w & 0x7FFF);
                    mobj->unk94++;

                    break;
                }
                case 10:
                case 11:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }
                            sp90[i]->unk10 = sp90[i]->unk14;
                            sp90[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;

                            sp90[i]->unk05 = 1;
                            sp90[i]->unk08 = payload;
                            sp90[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                            sp90[i]->unk1C = 0.0f;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 10) { mobj->unk98 += payload; }
                    break;
                }
                case 14:
                {
                    mobj->unk94++;
                    mobj->unk94 = mobj->unk94->ptr;
                    mobj->unkA0 = -mobj->unk98;
                    break;
                }
                case 1:
                {
                    mobj->unk94++;
                    mobj->unk94 = mobj->unk94->ptr;
                    break;
                }
                case 12:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp90); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp90[i] == NULL) { sp90[i] = create_aobj_for_mobj(mobj, i + 13); }
                            sp90[i]->unk0C += payload;
                        }
                        subcmd >>= 1;
                    }

                    break;
                }
                case 0:
                {
                    aobj = mobj->unk90;
                    while (aobj != NULL) {
                        if (aobj->unk05 != 0) { aobj->unk0C += mobj->unk9C + mobj->unk98; }
                        aobj = aobj->next;
                    }

                    mobj->unkA0 = mobj->unk98;
                    mobj->unk98 = PROCESSED_DEFAULT;
                    return; // not break
                }
                case 18:
                case 19:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp7C); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp7C[i] == NULL) { sp7C[i] = create_aobj_for_mobj(mobj, i + 37); }
                            sp7C[i]->unk10 = sp7C[i]->unk14;
                            sp7C[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;

                            sp7C[i]->unk05 = 1;
                            sp7C[i]->unk08 = payload;
                            sp7C[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 18) { mobj->unk98 += payload; }
                    break;
                }
                case 20:
                case 21:
                {
                    payload = (f32)(mobj->unk94->w & 0x7FFF);
                    subcmd  = (mobj->unk94++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp7C); i++) {
                        if (subcmd == 0) { break; }

                        if (subcmd & 1) {
                            if (sp7C[i] == NULL) { sp7C[i] = create_aobj_for_mobj(mobj, i + 37); }
                            sp7C[i]->unk10 = sp7C[i]->unk14;
                            sp7C[i]->unk14 = mobj->unk94->f;
                            mobj->unk94++;

                            sp7C[i]->unk05 = 2;
                            if (payload != 0.0f) { sp7C[i]->unk08 = 1.0f / payload; }
                            sp7C[i]->unk0C = -mobj->unk98 - mobj->unk9C;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 20) { mobj->unk98 += payload; }
                    break;
                }
                case 22:
                {
                    mobj->unk98 = (f32)(mobj->unk94->w & 0x7FFF);

                    subcmd = (mobj->unk94++->w << 7) >> 22;

                    if (subcmd & 0x01) {
                        mobj->unk08.unk4C = mobj->unk94->w;
                        mobj->unk94++;
                    }
                    if (subcmd & 0x02) {
                        mobj->unk08.unk6C = mobj->unk94->w;
                        mobj->unk94++;
                    }
                    if (subcmd & 0x04) {
                        mobj->unk08.unk68 = mobj->unk94->w;
                        mobj->unk94++;
                    }
                    if (subcmd & 0x08) {
                        mobj->unk08.unk74 = mobj->unk94->w;
                        mobj->unk94++;
                    }
                    if (subcmd & 0x10) {
                        mobj->unk08.unk70 = mobj->unk94->w;
                        mobj->unk94++;
                    }
                    break;
                }
                default:
                {
                }
            }
        } while (mobj->unk98 <= 0.0f);
    }
}

#ifdef MIPS_TO_C
void func_8000DA40(struct MObj *mobj) {
    struct AObj *aobj;
    f32 temp_f26;

    if (mobj->unk98 != (f32)FLOAT_NEG_MAX) {
        aobj = mobj->unk90;
        while (aobj != NULL) {
            // L8000DA94
            if (aobj->unk05 != 0) {
                if (mobj->unk98 != FLOAT_MAYBE_SCALE_MIN) { aobj->unk0C += mobj->unk9C; }
                // L8000DAD0
                if (aobj->unk04 < 37) {
                    switch (aobj->unk05) {
                        case 2: temp_f26 = aobj->unk10 + (aobj->unk0C * aobj->unk18); break;
                        case 3:
                        {
                            f32 temp_f16 = SQUARE(aobj->unk08);
                            f32 temp_f12 = SQUARE(aobj->unk0C);
                            f32 temp_f18 = aobj->unk08 * temp_f12;
                            f32 temp_f14 = aobj->unk0C * temp_f12 * temp_f16;
                            f32 temp_f20 = 2.0f * temp_f14 * aobj->unk08;
                            f32 temp_f22 = 3.0f * temp_f12 * temp_f16;
                            f32 temp_f24 = temp_f14 - temp_f18;

                            temp_f26 = (aobj->unk10 * ((temp_f20 - temp_f22) + 1.0f))
                                     + (aobj->unk14 * (temp_f22 - temp_f20))
                                     + (aobj->unk18 * ((temp_f24 - temp_f18) + aobj->unk0C))
                                     + (aobj->unk1C * temp_f24);
                            break;
                        }
                        case 1:
                            temp_f26 = aobj->unk08 <= aobj->unk0C ? aobj->unk14 : aobj->unk10;
                            break;
                        default: break;
                    }
                    // L8000DBD0
                    switch (aobj->unk04) {
                        case 13: mobj->unk80 = temp_f26; break;
                        case 14: mobj->unk08.unk14 = temp_f26; break;
                        case 15: mobj->unk08.unk18 = temp_f26; break;
                        case 16: mobj->unk08.unk1C = temp_f26; break;
                        case 17: mobj->unk08.unk20 = temp_f26; break;
                        case 18: mobj->unk82 = temp_f26; break;
                        case 19: mobj->unk08.unk3C = temp_f26; break;
                        case 20: mobj->unk08.unk40 = temp_f26; break;
                        case 21: mobj->unk84 = temp_f26; break;
                        case 22: mobj->unk88 = temp_f26; break;
                        default: break;
                    }
                    // L8000DD3C
                } else {
                    // L8000DD3C
                    if (aobj->unk05 != 1) {
                        if (aobj->unk05 == 2) {
                            s32 v1;

                            v1 = (s32)(aobj->unk0C * aobj->unk08 * 256.0f);
                            if (v1 < 0) { v1 = 0; }
                            if (v1 > 256) { v1 = 256; }
                        }
                    } else {
                    }
                }
            }
            // L8000DEE4 L8000DEE8
            aobj = aobj->next;
        }
        // L8000DEF8
    }
    // L8000DF20
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/func_8000DA40.s")
#endif

void func_8000DF34(struct GObjCommon *arg0) {
    struct DObj *dobj;
    struct MObj *mobj;

    dobj = arg0->unk74;
    while (dobj != NULL) {
        // L8000DF58
        func_8000BFE8(dobj);
        func_8000CCBC(dobj);

        mobj = dobj->unk80;
        while (mobj != NULL) {
            func_8000CF6C(mobj);
            func_8000DA40(mobj);

            mobj = mobj->next;
        }

        if (dobj->unk10 != NULL) {
            dobj = dobj->unk10;
        } else if (dobj->unk8 != NULL) {
            dobj = dobj->unk8;
        } else {
            while (TRUE) {
                if ((uintptr_t)dobj->unk14 == 1) {
                    dobj = NULL;
                    break;
                }

                if (dobj->unk14->unk8 != NULL) {
                    dobj = dobj->unk14->unk8;
                    break;
                }

                dobj = dobj->unk14;
            }
        }
    }
}

struct AObj *func_8000E008(struct AObj *aobj, u8 key) {
    while (aobj != NULL) {
        if (aobj->unk04 == key) { return aobj; }

        aobj = aobj->next;
    }

    return NULL;
}

void func_8000E044(struct DObj *dobj, f32 arg1) {
    struct AObj *aobj;

    aobj        = dobj->unk6C;
    dobj->unk74 = dobj->unk78 + arg1;
    while (aobj != NULL) {
        aobj->unk08 = 1.0f / arg1;
        aobj        = aobj->next;
    }
}

f32 func_8000E084(struct DObj *dobj, s32 idx) {
    switch (idx) {
        case 1: return dobj->unk28.f[1];
        case 2: return dobj->unk28.f[2];
        case 3: return dobj->unk28.f[3];
        // no four?
        case 5: return dobj->unk18.f.v.x;
        case 6: return dobj->unk18.f.v.y;
        case 7: return dobj->unk18.f.v.z;
        case 8: return dobj->unk3C.v.x;
        case 9: return dobj->unk3C.v.y;
        case 10: return dobj->unk3C.v.z;
    }
#ifdef AVOID_UB
    // todo: return NaN?
    return 0.0f;
#endif
}

f32 func_8000E0F4(struct UnkEC64Arg3 *arg0, s32 idx) {
    switch (idx) {
        case 1: return arg0->unk14.x;
        case 2: return arg0->unk14.y;
        case 3: return arg0->unk14.z;
        // no four?
        case 5: return arg0->unk08.x;
        case 6: return arg0->unk08.y;
        case 7: return arg0->unk08.z;
        case 8: return arg0->unk20.x;
        case 9: return arg0->unk20.y;
        case 10: return arg0->unk20.z;
    }
#ifdef AVOID_UB
    // todo: return NaN?
    return 0.0f;
#endif
}

s32 func_8000E164(
    s32 arg0,
    struct DObj *arg1,
    f32 *arg2,
    f32 *arg3,
    struct AObj *arg4,
    struct UnkEC64Arg3 *arg5,
    s32 arg6,
    s32 arg7,
    struct Vec3f *arg8,
    s32 *arg9) {
    struct AObj *aobj; // sp24

    aobj = func_8000E008(arg4, arg6);

    if (aobj != NULL && aobj->unk05 != 0) {
        if (arg0 == 0 && arg1->unk74 != (f32)PROCESSED_DEFAULT) { aobj->unk0C += arg1->unk78; }
        // L8000E1DC
        *arg2 = func_8000CB94(aobj);
        if (arg7 != 0) { *arg3 = func_8000CC40(aobj); }
    } else {
        // L8000E20C
        if (arg6 == 5 || arg6 == 6 || arg6 == 7) {
            if (*arg9 != 0) {
                switch (arg6) {
                    case 5: *arg2 = arg8->x; break;
                    case 6: *arg2 = arg8->y; break;
                    case 7: *arg2 = arg8->z; break;
                }
            } else {
                // L8000E284
                aobj = func_8000E008(arg4, 4);
                if (aobj != NULL && aobj->unk05 != 0) {
                    if (arg0 == 0 && arg1->unk74 != (f32)PROCESSED_DEFAULT) {
                        aobj->unk0C += arg1->unk78;
                    }
                    // L8000E2DC
                    *arg2 = func_8000CB94(aobj);
                    if (*arg2 < 0.0f) {
                        *arg2 = 0.0f;
                    } else if (*arg2 > 1.0f) {
                        *arg2 = 1.0f;
                    }
                    // L8000E330
                    hal_interpolation_cubic(arg8, aobj->unk20, *arg2);
                    switch (arg6) {
                        case 5: *arg2 = arg8->x; break;
                        case 6: *arg2 = arg8->y; break;
                        case 7: *arg2 = arg8->z; break;
                    }

                    *arg9 = 1;
                } else {
                    // L8000E39C
                    if (arg0 == 0) {
                        if (arg5 == 0) { return 1; }
                        // L8000E3B8
                        *arg2 = func_8000E0F4(arg5, arg6);
                    } else {
                        // L8000E3C8
                        *arg2 = func_8000E084(arg1, arg6);
                    }
                }
            }
        } else {
            // L8000E3D8
            if (arg0 == 0) {
                if (arg5 == 0) { return 1; }
                // L8000E3F4
                *arg2 = func_8000E0F4(arg5, arg6);
            } else {
                // L8000E404
                *arg2 = func_8000E084(arg1, arg6);
            }
        }
    }
    // L8000E410 L8000E414
    return 0;
}

void func_8000E428(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, struct AObj *arg5);
#ifdef MIPS_TO_C
void func_8000E428(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 *arg4, struct AObj *arg5) {
    f32 sp3C;
    f32 sp38;

    f32 sp2C;
    f32 sp28;
    f32 sp24;

    f32 sp20;
    f32 sp1C;

    f32 temp;

    switch (arg0) {
        case 1:
        case 2:
        case 3: sp2C = arg2; break;
        // no four
        case 5:
        case 6:
        case 7: sp2C = arg1; break;
        case 8:
        case 9:
        case 10: sp2C = arg3; break;
    }
    // L8000E478
    if (sp2C != 0.0f) {
        sp3C = 2.0f * arg5->unk18 + arg5->unk1C;
        sp28 = -6.0f * sp2C;
        sp38 = sp28 * (arg5->unk14 - arg5->unk10);
        sp24 = SQUARE(sp3C);
        if (sp38 < sp24) {
            sp1C = -sp3C;
            sp20 = sp24 - sp38;
            temp = (sqrtf(sp20) + sp1C) / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E53C
            temp = (sp1C - sqrtf(sp20)) / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E584
        } else if (sp24 - sp38 == 0.0f) {
            // L8000E58C
            temp = -sp3C / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
        }
        // L8000E5CC
        sp20 = sp24 + (sp24 * sp38);
        if (0.0f < sp20) {
            sp1C = -sp3C;
            temp = (sqrtf(sp20) + sp1C) / -sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E62C
            temp = (sp1C - sqrtf(sp20)) / sp24;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E668
        } else if (sp20 == 0.0f) {
            // L8000E674

            temp = -sp3C / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
        }
        // L8000E6A8
        sp3C = -(arg5->unk18 + (2.0f * arg5->unk1C));
        sp38 = sp28 * (arg5->unk10 - arg5->unk14);
        sp24 = SQUARE(sp3C);

        if (sp38 < sp24) {
            sp20 = sp24 - sp38;
            sp1C = -sp3C;
            temp = (sqrtf(sp20) - sp1C) / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E740
            temp = (sp1C - sqrtf(sp20)) / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }

        } else if (sp24 - sp3C == 0.0f) {
            // L8000E78C
            temp = -sp3C / sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
        }
        // L8000E7C8
        sp20 = sp24 + sp38;
        if (sp20 < sp2C) {
            sp1C = -sp3C;
            sp24 = -sp2C;

            temp = (sqrtf(sp20) + sp1C) / sp24;
            if (*arg4 < temp) { *arg4 = temp; }
            // L8000E82C
            temp = (sp1C - sqrtf(sp20)) / sp24;
            if (*arg4 < temp) { *arg4 = temp; }
        } else if (sp20 == 0.0f) {
            // L8000E868
            temp = -sp3C / -sp2C;
            if (*arg4 < temp) { *arg4 = temp; }
        }
    }
    // L8000E89C return
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/func_8000E428.s")
#endif

f32 func_8000E8A8(
    struct DObj *arg0,
    union AnimCmd **arg1,
    f32 arg2,
    struct UnkEC64Arg3 *arg3,
    s32 arg4,
    f32 arg5,
    f32 arg6,
    f32 arg7,
    f32 arg8);
#ifdef NON_MATCHING
f32 func_8000E8A8(
    struct DObj *arg0,
    union AnimCmd **arg1,
    f32 arg2,
    struct UnkEC64Arg3 *arg3,
    s32 arg4,
    f32 arg5,
    f32 arg6,
    f32 arg7,
    f32 arg8) {
    f32 temp_f0; // A0
    struct AObj *newAObj;
    struct AObj *origAObj;
    s32 i;

    struct AObj *spC4;
    struct AObj *spC0;
    f32 phi_f16; // bc
    f32 phi_f14; // b8
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 phi_f12; // a0
    s32 sp9C;
    s32 sp98;
    struct Vec3f sp8C;
    struct Vec3f sp80;

    spC0 = NULL;
    sp9C = 0;
    sp98 = 0;
    spA4 = 0.0f;

    if (arg1 == NULL || *arg1 == NULL) {
        if (arg3 == NULL) {
            func_80008EE4(arg0);
            return 0;
        }
    }
    // L8000E928
    spC4        = arg0->unk6C;
    arg0->unk6C = NULL;
    if (arg1 != NULL && *arg1 != NULL) {
        arg0->unk70 = *arg1;
        arg0->unk74 = LOWER_BOUND;
        arg0->unk7C = arg2;
        func_8000BFE8(arg0);
        spC0        = arg0->unk6C;
        arg0->unk6C = NULL;
    }
    // L8000E968
    for (i = 1; i <= 10; i++) {
        if (i == 4) { continue; }
        spA8 = 0.0f;
        spAC = 0.0f;

        if (func_8000E164(0, arg0, &spB0, &spA8, spC0, arg3, i, arg4, &sp80, &sp98) != 0) {
            continue;
        }

        func_8000E164(1, arg0, &spB4, &spAC, spC4, arg3, i, arg4, &sp8C, &sp9C);

        if (spB0 != spB4 || spA8 != spAC) {
            // L8000EA40
            newAObj = create_aobj_for_dobj(arg0, i);

            if (i == 1 || i == 2 || i == 3) {
                temp_f0 = spB4 + 6.2831855f; // 2*pi

                if (spB0 < spB4) {
                    phi_f14 = (spB0 - spB4);
                    phi_f16 = -phi_f14;
                } else {
                    phi_f14 = (spB0 - spB4);
                    phi_f16 = phi_f14;
                }
                // L8000EA8C
                if (spB0 < temp_f0) {
                    phi_f12 = -(spB0 - temp_f0);
                } else {
                    phi_f12 = spB0 - temp_f0;
                }
                // L8000EAAC
                if (phi_f12 < phi_f16) {
                    // spB4 = temp_f0;
                    phi_f14 = spB0 - temp_f0;
                }
                // L8000EAC8
                temp_f0 = spB4 - 6.2831855f;
                if (spB0 < spB4) {
                    phi_f16 = -phi_f14;
                } else {
                    phi_f16 = phi_f14;
                }
                // L8000EAE0
                if (spB0 < temp_f0) {
                    phi_f12 = -(spB0 - temp_f0);
                } else {
                    phi_f12 = spB0 - temp_f0;
                }
                // L8000EB00
                if (phi_f12 < phi_f16) { spB4 = temp_f0; }
            }
            // L8000EB14
            switch (arg4) {
                case 0:
                    newAObj->unk10 = spB4;
                    newAObj->unk14 = spB0;
                    newAObj->unk05 = 2;
                    newAObj->unk08 = 1.0f / arg5;
                    newAObj->unk0C = -arg0->unk78;
                    newAObj->unk18 = (newAObj->unk14 - newAObj->unk10) / arg5;
                    newAObj->unk1C = 0.0f;
                    break;
                case 1:
                case 2:
                    newAObj->unk10 = spB4;
                    newAObj->unk14 = spB0;
                    newAObj->unk05 = 3;
                    newAObj->unk08 = 1.0f / arg5;
                    newAObj->unk0C = -arg0->unk78;
                    newAObj->unk18 = spAC;
                    newAObj->unk1C = spA8;

                    if (arg4 == 2) { func_8000E428(i, arg6, arg7, arg8, &spA4, newAObj); }
                    break;
                default:
                {
                }
            }
        }
        // L8000EBDC L8000EBE0
    }
    // 8000EBEC
    origAObj    = arg0->unk6C;
    arg0->unk6C = spC4;
    func_80008EE4(arg0);
    arg0->unk6C = spC0;
    func_80008EE4(arg0);

    arg0->unk6C = origAObj;
    arg0->unk70 = NULL;
    arg0->unk74 = arg0->unk78 + arg5;
    arg0->unk7C = -arg0->unk78;

    return spA4;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/func_8000E8A8.s")
#endif

#ifdef NON_MATCHING
f32 unref_8000EC64(
    struct GObjCommon *arg0,
    union AnimCmd **arg1,
    f32 arg2,
    struct UnkEC64Arg3 *arg3,
    s32 arg4,
    f32 arg5,
    f32 arg6,
    f32 arg7,
    f32 arg8,
    f32 arg9) {
    f32 sp68;

    f32 foundMax; // sp8C
    f32 ret;

    struct DObj *dobj; // s2

    dobj        = arg0->unk74;
    arg0->unk78 = arg2;
    if (arg4 == 2) {
        sp68     = arg5;
        foundMax = 0.0f;
        while (dobj != NULL) {
            ret = func_8000E8A8(dobj, arg1, arg2, arg3, arg4, foundMax, arg7, arg8, arg9);
            if (foundMax < ret) { foundMax = ret; }

            if (arg1 != NULL) { arg1++; }

            if (arg3 != NULL) { arg3++; }

            dobj = func_8000BAA0(dobj);
        }
        dobj = arg0->unk74;
        // L8000ED3C
        if (foundMax < sp68) {
            foundMax = sp68;
        } else if (arg6 < foundMax) {
            foundMax = arg6;
        }

        while (dobj != NULL) {
            func_8000E044(dobj, foundMax);
            dobj = func_8000BAA0(dobj);
        }
        // L8000ED94
        arg5 = foundMax;
    } else {
        // L8000ED9C
        while (dobj != NULL) {
            func_8000E8A8(dobj, arg1, arg2, arg3, arg4, arg5, arg7, arg8, arg9);

            if (arg1 != NULL) { arg1++; }

            if (arg3 != NULL) { arg3++; }

            dobj = func_8000BAA0(dobj);
        }
    }
    // L8000EE00
    arg0->unk78 = 0.0f;

    return arg5;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/unref_8000EC64.s")
#endif

void unref_8000EE40(
    struct GObjCommon *arg0,
    union AnimCmd **arg1,
    f32 arg2,
    struct UnkEC64Arg3 *arg3);
#ifdef NON_MATCHING
void unref_8000EE40(
    struct GObjCommon *arg0,
    union AnimCmd **arg1,
    f32 arg2,
    struct UnkEC64Arg3 *arg3) {
    s32 i;
    struct DObj *dobj;

    f32 sp84;
    UNUSED u32 pad80;
    s32 sp7C;
    struct Vec3f sp70;
    s32 sp6C;

    dobj        = arg0->unk74;
    sp7C        = 0;
    sp6C        = 1;
    arg0->unk78 = arg2;

    while (dobj != NULL) {
        // L8000EEB4
        if (*arg1 != NULL) {
            func_8000BD1C(dobj, *arg1, arg2);
            dobj->unk55 = sp6C;
            sp6C        = 0;

            for (i = 1; i <= 10; i++) {
                if (i == 4) { continue; }

                func_8000E164(0, dobj, &sp84, NULL, dobj->unk6C, arg3, i, 0, &sp70, &sp7C);

                switch (i) {
                    case 1: dobj->unk28.f[1] = sp84; break;
                    case 2: dobj->unk28.f[2] = sp84; break;
                    case 3: dobj->unk28.f[3] = sp84; break;
                    case 5: dobj->unk18.f.v.x = sp84; break;
                    case 6: dobj->unk18.f.v.y = sp84; break;
                    case 7: dobj->unk18.f.v.z = sp84; break;
                    case 8: dobj->unk3C.v.x = sp84; break;
                    case 9: dobj->unk3C.v.y = sp84; break;
                    case 10: dobj->unk3C.v.z = sp84; break;
                }
            }
        } else {
            // L8000EFB4
            dobj->unk74 = (f32)FLOAT_NEG_MAX;
            dobj->unk55 = 0;
            if (arg3 != NULL) {
                dobj->unk18.f.v                      = arg3->unk08;
                *((struct Vec3f *)&dobj->unk28.f[1]) = arg3->unk14;
                dobj->unk3C.v                        = arg3->unk20;
            }
        }

        arg1++;

        if (arg3 != NULL) { arg3++; }

        dobj = func_8000BAA0(dobj);
    }
    // L8000F020
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/unref_8000EE40.s")
#endif

void func_8000F058(struct DObj *dobj) {
    func_80008CC0(dobj, 27, 0);
    func_80008CC0(dobj, 32, 0);
}

struct DObj *unref_8000F090(struct GObjCommon *arg0, void *arg1) {
    struct DObj *dobj;

    dobj = func_800092D0(arg0, arg1);
    func_8000F058(dobj);

    return dobj;
}

struct DObj *unref_8000F0C0(struct DObj *arg0, void *arg1) {
    struct DObj *newDObj;

    newDObj = func_80009380(arg0, arg1);
    func_8000F058(newDObj);

    return newDObj;
}

struct DObj *unref_8000F0F0(struct DObj *arg0, void *arg1) {
    struct DObj *newDObj;

    newDObj = func_800093F4(arg0, arg1);
    func_8000F058(newDObj);

    return newDObj;
}

#ifdef NON_MATCHING
// nonmatching: regalloc around arg1->unk00 in v0 not v1
void func_8000F120(struct GObjCommon *arg0, struct UnkEC64Arg3 *arg1, struct DObj **arg2) {
    int i;
    struct DObj *dobj;
    s32 trunc;
    struct DObj *sp44[18];

    // clang-format off
    for (i = 0; i < ARRAY_COUNT(sp44); i++) {
        sp44[i] = NULL;
    }
    // clang-format on

    while (arg1->unk00 != 18) {
        // L8000F18C
        trunc = arg1->unk00 & 0xFFF;
        if (trunc) {
            dobj = sp44[trunc] = func_800093F4(sp44[trunc - 1], arg1->unk04);
        } else {
            dobj = sp44[0] = func_800092D0(arg0, arg1->unk04);
        }
        // L8000F1C4
        if (arg1->unk00 & 0xF000) { func_80008CC0(dobj, 18, 0); }

        // L8000F1EC
        if (arg1->unk00 & 0x8000) {
            func_80008CC0(dobj, 44, 0);
        } else if (arg1->unk00 & 0x4000) {
            func_80008CC0(dobj, 46, 0);
        } else if (arg1->unk00 & 0x2000) {
            func_80008CC0(dobj, 48, 0);
        } else if (arg1->unk00 & 0x1000) {
            func_80008CC0(dobj, 50, 0);
        } else {
            func_8000F058(dobj);
        }
        // L8000F274
        dobj->unk18.f.v                      = arg1->unk08;
        *((struct Vec3f *)&dobj->unk28.f[1]) = arg1->unk14;
        dobj->unk3C.v                        = arg1->unk20;

        if (arg2 != NULL) {
            *arg2 = dobj;
            arg2++;
        }

        arg1++;
    }
    // L8000F2D4
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/func_8000F120.s")
#endif

void func_8000F2FC(struct DObj *arg0, u8 arg1, u8 arg2, u8 arg3) {
    if (arg1 != 0) { func_80008CC0(arg0, arg1, 0); }
    if (arg2 != 0) { func_80008CC0(arg0, arg2, 0); }
    if (arg3 != 0) { func_80008CC0(arg0, arg3, 0); }
}

void func_8000F364(struct DObj *arg0, u8 arg1, u8 arg2, u8 arg3, s32 arg4) {
    s32 phi_t0 = 0;
    s32 phi_t1 = 0; // sp20
    s32 phi_v1 = 0; // sp1C

    switch (arg1) {
        case 18: phi_t0 = 1; break;
        case 26: phi_v1 = 1; break;
        case 27:
            phi_v1 = 1;
            phi_t0 = 1;
            break;
        case 28:
            phi_t1 = 1;
            phi_v1 = 1;
            phi_t0 = 1;
            break;
        case 29: phi_v1 = 2; break;
        case 30:
            phi_v1 = 2;
            phi_t0 = 1;
            break;
        case 31:
            phi_v1 = 2;
            phi_t1 = 1;
            phi_t0 = 1;
            break;
        case 32: phi_t1 = 1; break;
    }
    // L8000F408
    switch (arg2) {
        case 26: phi_v1 = 1; break;
        case 29: phi_v1 = 2; break;
        case 32: phi_t1 = 1; break;
    }
    // L8000F448
    if (arg3 == 32) { phi_t1 = 1; }

    if (phi_t0 != 0) { func_80008CC0(arg0, 18, 0); }
    // L8000F47C
    if (arg4 & 0x4000) {
        if (phi_v1 == 1) {
            func_80008CC0(arg0, 46, 0);
        } else {
            func_80008CC0(arg0, 45, 0);
        }
    } else if (arg4 & 0x2000) {
        if (phi_v1 == 1) {
            func_80008CC0(arg0, 48, 0);
        } else {
            func_80008CC0(arg0, 47, 0);
        }
    } else if (arg4 & 0x1000) {
        if (phi_v1 == 1) {
            func_80008CC0(arg0, 50, 0);
        } else {
            func_80008CC0(arg0, 49, 0);
        }
    } else if (phi_t1 != 0) {
        if (phi_v1 == 1) {
            func_80008CC0(arg0, 44, 0);
        } else {
            func_80008CC0(arg0, 43, 0);
        }
    } else {
        if (phi_v1 == 1) {
            func_80008CC0(arg0, 42, 0);
        } else {
            func_80008CC0(arg0, 41, 0);
        }
    }
}

void func_8000F590(
    struct GObjCommon *arg0,
    struct UnkEC64Arg3 *arg1,
    struct DObj **arg2,
    u8 arg3,
    u8 arg4,
    u8 arg5) {
    int i;
    struct DObj *dobj;
    s32 trunc;
    struct DObj *sp54[18];

    // clang-format off
    for (i = 0; i < ARRAY_COUNT(sp54); i++) {
        sp54[i] = NULL;
    }
    // clang-format on

    while (arg1->unk00 != 18) {
        // L8000F614
        trunc = arg1->unk00 & 0xFFF;
        if (trunc) {
            dobj = sp54[trunc] = func_800093F4(sp54[trunc - 1], arg1->unk04);
        } else {
            // L8000F638
            dobj = sp54[0] = func_800092D0(arg0, arg1->unk04);
        }
        // L8000F64C
        if (arg1->unk00 & 0xF000) {
            func_8000F364(dobj, arg3, arg4, arg5, arg1->unk00 & 0xF000);
        } else {
            // L8000F684
            func_8000F2FC(dobj, arg3, arg4, arg5);
        }
        // L8000F690
        dobj->unk18.f.v                      = arg1->unk08;
        *((struct Vec3f *)&dobj->unk28.f[1]) = arg1->unk14;
        dobj->unk3C.v                        = arg1->unk20;

        if (arg2 != NULL) {
            *arg2 = dobj;
            arg2++;
        }
        arg1++;
    }
}

void func_8000F720(
    struct GObjCommon *arg0,
    struct UnkEC64Arg3 *arg1,
    struct MObjSub ***arg2,
    struct DObj **arg3,
    u8 arg4,
    u8 arg5,
    u8 arg6) {
    int i;
    struct DObj *dobj;
    s32 trunc;
    struct DObj *sp5C[18];
    struct MObjSub **csr;
    struct MObjSub *msub;

    // clang-format off
    for (i = 0; i < ARRAY_COUNT(sp5C); i++) {
        sp5C[i] = NULL;
    }
    // clang-format on

    while (arg1->unk00 != 18) {
        // L8000F7A0
        trunc = arg1->unk00 & 0xFFF;
        if (trunc) {
            dobj = sp5C[trunc] = func_800093F4(sp5C[trunc - 1], arg1->unk04);
        } else {
            dobj = sp5C[0] = func_800092D0(arg0, arg1->unk04);
        }
        // L8000F7DC
        if (arg1->unk00 & 0xF000) {
            func_8000F364(dobj, arg4, arg5, arg6, arg1->unk00 & 0xF000);
        } else {
            func_8000F2FC(dobj, arg4, arg5, arg6);
        }
        // L8000F820
        dobj->unk18.f.v                      = arg1->unk08;
        *((struct Vec3f *)&dobj->unk28.f[1]) = arg1->unk14;
        dobj->unk3C.v                        = arg1->unk20;

        if (arg2 != NULL) {
            if (*arg2 != NULL) {
                csr  = *arg2;
                msub = *csr;
                while (msub != NULL) {
                    func_800090DC(dobj, msub);
                    csr++;
                    msub = *csr;
                }
            }

            arg2++;
        }
        // L8000F8A0
        if (arg3 != NULL) {
            *arg3 = dobj;
            arg3++;
        }
        // L8000F8B4
        arg1++;
    }
    // L8000F8C4
}

void func_8000F8F4(struct GObjCommon *arg0, struct MObjSub ***arg1) {
    struct DObj *dobj;
    struct MObjSub **csr;
    struct MObjSub *msub;

    dobj = arg0->unk74;
    while (dobj != NULL) {
        if (arg1 != NULL) {
            if (*arg1 != NULL) {
                csr  = *arg1;
                msub = *csr;
                while (msub != NULL) {
                    func_800090DC(dobj, msub);
                    csr++;
                    msub = *csr;
                }
            }
            arg1++;
        }
        // L8000F95C
        dobj = func_8000BAA0(dobj);
    }
}

void func_8000F988(struct GObjCommon *arg0, struct UnkEC64Arg3 *arg1) {
    struct DObj *dobj;

    dobj = arg0->unk74;
    while (dobj != NULL && arg1->unk00 != 18) {
        dobj->unk18.f.v                      = arg1->unk08;
        *((struct Vec3f *)&dobj->unk28.f[1]) = arg1->unk14;
        dobj->unk3C.v                        = arg1->unk20;

        arg1++;
        dobj = func_8000BAA0(dobj);
    }
}

void func_8000FA3C(struct DObj *dobj, union AnimCmd *arg1, f32 arg2) {
    struct AObj *aobj;

    aobj = dobj->unk6C;
    while (aobj != NULL) {
        aobj->unk05 = 0;
        aobj        = aobj->next;
    }
    dobj->unk70 = arg1;
    dobj->unk74 = LOWER_BOUND;
    dobj->unk7C = arg2;
}

// maybe this takes an `SObj *`...?
void func_8000FA74(struct DObj *arg) {
    struct AObj *sp80[10];
    struct AObj *aobj;
    s32 i;
    u32 cmd;
    u32 subcmd;
    f32 payload;

    if (arg->unk74 != (f32)FLOAT_NEG_MAX) {
        if (arg->unk74 == (f32)LOWER_BOUND) {
            arg->unk74 = -arg->unk7C;
        } else {
            arg->unk74 -= arg->unk78;
            arg->unk7C += arg->unk78;
            arg->unk4->unk78 = arg->unk7C;

            if (arg->unk74 > 0.0f) { return; }
        }
        // L8000FB44
        // clang-format off
        for (i = 0; i < ARRAY_COUNT(sp80); i++) {
            sp80[i] = NULL;
        }
        // clang-format on
        aobj = arg->unk6C;
        while (aobj != NULL) {
            if (aobj->unk04 >= 25 && aobj->unk04 < 35) { sp80[aobj->unk04 - 25] = aobj; }
            aobj = aobj->next;
        }
        // L8000FBA0
        do {
            // L8000FBAC
            if (arg->unk70 == NULL) {
                aobj = arg->unk6C;
                while (aobj != NULL) {
                    if (aobj->unk05) { aobj->unk0C += arg->unk78 + arg->unk74; }
                    aobj = aobj->next;
                }
                arg->unk7C = arg->unk74;
                arg->unk74 = PROCESSED_DEFAULT;
                return;
            }
            // L8000FC0C
            cmd = arg->unk70->w >> 25;
            switch (cmd) {
                case 8:
                case 9:
                {
                    payload = (f32)(arg->unk70->w & 0x7FFF);
                    subcmd  = (arg->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }
                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = arg->unk70->f;
                            arg->unk70++;
                            sp80[i]->unk18 = sp80[i]->unk1C;
                            sp80[i]->unk1C = 0.0f;
                            sp80[i]->unk05 = 3;

                            if (payload != 0.0f) { sp80[i]->unk08 = 1.0f / payload; }
                            sp80[i]->unk0C = -arg->unk74 - arg->unk78;
                        }
                        subcmd >>= 1;
                    }
                    // L8000FD18
                    if (cmd == 8) { arg->unk74 += payload; }
                    break;
                }
                case 3:
                case 4:
                {
                    payload = (f32)(arg->unk70->w & 0x7FFF);
                    subcmd  = (arg->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }
                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = arg->unk70->f;
                            arg->unk70++;
                            sp80[i]->unk05 = 2;

                            if (payload != 0.0f) {
                                sp80[i]->unk18 = (sp80[i]->unk14 - sp80[i]->unk10) / payload;
                            }
                            sp80[i]->unk0C = -arg->unk74 - arg->unk78;
                            sp80[i]->unk1C = 0.0f;
                        }
                        subcmd >>= 1;
                    }
                    // L8000FE20
                    if (cmd == 3) { arg->unk74 += payload; }
                    break;
                }
                case 5:
                case 6:
                {
                    payload = (f32)(arg->unk70->w & 0x7FFF);
                    subcmd  = (arg->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }

                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = arg->unk70->f;
                            arg->unk70++;
                            sp80[i]->unk18 = sp80[i]->unk1C;
                            sp80[i]->unk1C = arg->unk70->f;
                            arg->unk70++;
                            sp80[i]->unk05 = 3;
                            if (payload != 0.0f) { sp80[i]->unk08 = 1.0f / payload; }
                            sp80[i]->unk0C = -arg->unk74 - arg->unk78;
                        }

                        subcmd >>= 1;
                    }

                    if (cmd == 5) { arg->unk74 += payload; }
                    break;
                }
                case 7:
                {
                    subcmd = (arg->unk70++->w << 7) >> 22;
                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }

                            sp80[i]->unk1C = arg->unk70->f;
                            arg->unk70++;
                        }
                        subcmd >>= 1;
                    }
                    break;
                }
                case 2:
                {
                    arg->unk74 += (f32)(arg->unk70++->w & 0x7FFF);
                    break;
                }
                case 10:
                case 11:
                {
                    payload = (f32)(arg->unk70->w & 0x7FFF);
                    subcmd  = (arg->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }

                            sp80[i]->unk10 = sp80[i]->unk14;
                            sp80[i]->unk14 = arg->unk70->f;
                            arg->unk70++;
                            sp80[i]->unk05 = 1;
                            sp80[i]->unk08 = payload;
                            sp80[i]->unk0C = -arg->unk74 - arg->unk78;
                            sp80[i]->unk1C = 0.0f;
                        }
                        subcmd >>= 1;
                    }

                    if (cmd == 10) { arg->unk74 += payload; }

                    break;
                }
                case 14:
                {
                    arg->unk70++;
                    arg->unk70       = arg->unk70->ptr;
                    arg->unk7C       = -arg->unk74;
                    arg->unk4->unk78 = -arg->unk74;
                    break;
                }
                case 1:
                {
                    arg->unk70++;
                    arg->unk70 = arg->unk70->ptr;
                    break;
                }
                case 12:
                {
                    payload = (f32)(arg->unk70->w & 0x7FFF);
                    subcmd  = (arg->unk70++->w << 7) >> 22;

                    for (i = 0; i < ARRAY_COUNT(sp80); i++) {
                        if (subcmd == 0) { break; }
                        if (subcmd & 1) {
                            if (sp80[i] == NULL) { sp80[i] = func_80009010(arg, i + 25); }

                            sp80[i]->unk0C += payload;
                        }
                        subcmd >>= 1;
                    }
                    break;
                }
                case 13:
                {
                    subcmd = (arg->unk70++->w << 7) >> 22;

                    if (subcmd & 0x08) {
                        if (sp80[3] == NULL) { sp80[3] = func_80009010(arg, 3 + 25); }

                        sp80[3]->unk20 = arg->unk70->ptr;
                        arg->unk70++;
                    }
                    if (subcmd & 0x80) {
                        if (sp80[7] == NULL) { sp80[7] = func_80009010(arg, 7 + 25); }

                        sp80[7]->unk20 = arg->unk70->ptr;
                        arg->unk70++;
                    }
                    break;
                }
                case 0:
                {
                    aobj = arg->unk6C;
                    while (aobj != NULL) {
                        if (aobj->unk05 != 0) { aobj->unk0C += arg->unk78 + arg->unk74; }
                        aobj = aobj->next;
                    }
                    arg->unk7C = arg->unk74;
                    arg->unk74 = PROCESSED_DEFAULT;
                    return; // not break
                }
                case 23:
                {
                    arg->unk74 += (f32)(arg->unk70++->w & 0x7FFF);
                    arg->unk70 += 2;
                    break;
                }
                default:
                {
                }
            }
            // L800102F4
        } while (arg->unk74 <= 0.0f);
    }
    // L80010308
}

// could take an SObj ...?
// But it seems that the game only has SObj sized at 0x6C
struct TempUnkObj {
    /* 0x00 */ u32 pad00;
    /* 0x04 */ struct GObjCommon *unk04;
    /* 0x08 */ u8 pad08[0x20 - 0x08];
    /* 0x20 */ f32 unk20;
    /* 0x24 */ u8 pad24[0x3C - 0x24];
    /* 0x3C */ struct Vec3f unk3C;
    /* 0x48 */ struct Vec3f unk48;
    /* 0x54 */ f32 unk54;
    /* 0x58 */ u8 pad58[0x6c - 0x58];
    /* 0x6C */ struct AObj *unk6C;
    /* 0x70 */ u32 pad70;
    /* 0x74 */ f32 unk74;
    /* 0x78 */ f32 unk78;
}; // size >= 0x7C

void func_80010344(struct TempUnkObj *arg) {
    struct AObj *aobj;

    if (arg->unk74 != (f32)FLOAT_NEG_MAX) {
        aobj = arg->unk6C;
        while (aobj != NULL) {
            if (aobj->unk05 != 0) {
                if (arg->unk74 != (f32)FLOAT_MAYBE_SCALE_MIN) { aobj->unk0C += arg->unk78; }
                // L800103D8
                if (!(arg->unk04->unk7C & 2)) {
                    switch (aobj->unk04) {
                        case 25: arg->unk3C.x = func_8000CB94(aobj); break;
                        case 26: arg->unk3C.y = func_8000CB94(aobj); break;
                        case 27: arg->unk3C.z = func_8000CB94(aobj); break;
                        case 28:
                        {
                            f32 temp = func_8000CB94(aobj);
                            if (temp < 0.0f) {
                                temp = 0.0f;
                            } else {
                                if (temp > 1.0f) { temp = 1.0f; }
                            }
                            hal_interpolation_cubic(&arg->unk3C, aobj->unk20, temp);
                            break;
                        }
                        case 29: arg->unk48.x = func_8000CB94(aobj); break;
                        case 30: arg->unk48.y = func_8000CB94(aobj); break;
                        case 31: arg->unk48.z = func_8000CB94(aobj); break;
                        case 32:
                        {
                            f32 temp = func_8000CB94(aobj);
                            if (temp < 0.0f) {
                                temp = 0.0f;
                            } else {
                                if (temp > 1.0f) { temp = 1.0f; }
                            }
                            hal_interpolation_cubic(&arg->unk48, aobj->unk20, temp);
                            break;
                        }
                        case 33: arg->unk54 = func_8000CB94(aobj); break;
                        case 34: arg->unk20 = func_8000CB94(aobj); break;
                    }
                }
            }
            // L80010530
            aobj = aobj->next;
        }
        // L8001053C
        if (arg->unk74 == FLOAT_MAYBE_SCALE_MIN) { arg->unk74 = FLOAT_NEG_MAX; }
    }
    // L80010564
}

void func_80010580(struct GObjCommon *obj) {
    struct DObj *dobj; // could be SObj?
    dobj = obj->unk74;
    func_8000FA74(dobj);
    func_80010344((void *)dobj);
}

#ifdef NON_MATCHING
s32 unref_800105AC(union AnimCmd **arg0) {
    union AnimCmd *list; // a0
    u32 subcmd;          // v0
    s32 v1 = 0;
    s32 i;   // a2
    u32 cmd; // a1
    u32 id;

    while (*arg0 == NULL) { arg0++; }

    list = *arg0;
    // loop start?
    while (TRUE) {
        cmd = list->w;
        id  = cmd >> 25;
        switch (id) {
            case 3:
            case 8:
            case 10:
                v1 += cmd & 0x7FFF;
                // fall-thru
            case 4:
            case 7:
            case 9:
            case 11:
                subcmd = (cmd << 7) >> 22;
                list++;
                for (i = 0; i < 10; i++) {
                    if (subcmd == 0) { break; }
                    if (subcmd & 1) { list++; }

                    subcmd >>= 1;
                }
                break;
            case 5:
                v1 += cmd & 0x7FFF;
                // fall-thru
            case 6:
                subcmd = (cmd << 7) >> 22;
                list++;
                for (i = 0; i < 10; i++) {
                    if (subcmd == 0) { break; }
                    if (subcmd & 1) { list += 2; }

                    subcmd >>= 1;
                }
                break;
            case 2:
            case 15:
                v1 += cmd & 0x7FFF;
                list++;
                break;
            case 12: list++; break;
            case 13: list += 2; break;
            case 17:
                v1 += cmd & 0x7FFF;
                subcmd = (cmd << 7) >> 22;
                list++;
                for (i = 4; i < 14; i++) {
                    if (subcmd == 0) { break; }
                    if (subcmd & 1) { list++; }

                    subcmd >>= 1;
                }
                break;
            case 0: return v1;
            case 1:
            case 14: return -v1;
            default:
            {
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/unref_800105AC.s")
#endif

void unref_80010710(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_8003B930 = arg0;
    D_8003B934 = arg1;
    D_8003B938 = arg2;
    D_8003B93C = arg3;
}

void func_80010734(void *arg0) {
    D_800470AC = arg0;
}

// possible start of system 05?

void unref_80010740(void) {
    return;
}

void func_80010748(Mtx *arg0, struct DObj *arg1, s32 arg2) {
    Mtx4f sp48;
    struct Vec3f sp3C;

    struct TempUnkObj *obj;
    f32 res;

    obj    = D_80046A58->unk74;
    sp3C.z = arg1->unk18.f.v.x - obj->unk3C.x;
    sp3C.y = arg1->unk18.f.v.y - obj->unk3C.y;
    sp3C.x = arg1->unk18.f.v.z - obj->unk3C.z;
    res    = 1.0f / sqrtf(SQUARE(sp3C.z) + SQUARE(sp3C.y) + SQUARE(sp3C.x));
    sp3C.z *= res;
    sp3C.y *= res;
    sp3C.x *= res;

    res = sqrtf(SQUARE(sp3C.z) + SQUARE(sp3C.y));

    sp48[0][3] = sp48[1][3] = sp48[2][3] = sp48[1][2] = 0.0f;
    sp48[3][3]                                        = 1.0f;

    if (res != 0.0f) {
        f32 invrt = (1.0f / res);

        sp48[2][2] = res;

        sp48[0][0] = -sp3C.z;

        sp48[1][0] = sp3C.y * invrt;

        sp48[2][0] = -sp3C.z * sp3C.x * invrt;
        sp48[0][1] = -sp3C.y;

        sp48[1][1] = -sp3C.z * invrt;
        sp48[2][1] = -sp3C.y * sp3C.x * invrt;

        sp48[0][2] = -sp3C.x;
    } else {
        sp48[1][0] = sp48[2][0] = sp48[0][1] = sp48[2][1] = sp48[0][2] = 0.0f;
        sp48[0][0] = sp48[1][1] = sp48[2][2] = 1.0f;
    }
    // L800108C0
    if (arg2) {
        sp48[3][0] = arg1->unk18.f.v.x;
        sp48[3][1] = arg1->unk18.f.v.y;
        sp48[3][2] = arg1->unk18.f.v.z;
    } else {
        sp48[3][0] = sp48[3][1] = sp48[3][2] = 0.0f;
    }

    hal_mtx_f2l_fixed_w(&sp48, arg0);
}

#ifdef NON_MATCHING
// nonmatching: store reorder in first if block (res != 0.0f)
void func_80010918(Mtx *arg0, struct DObj *arg1, s32 arg2) {
    Mtx4f sp48;
    struct Vec3f sp3C;

    struct TempUnkObj *obj;
    f32 res;

    obj    = D_80046A58->unk74;
    sp3C.z = arg1->unk18.f.v.x - obj->unk3C.x;
    sp3C.y = arg1->unk18.f.v.y - obj->unk3C.y;
    sp3C.x = arg1->unk18.f.v.z - obj->unk3C.z;
    res    = 1.0f / sqrtf(SQUARE(sp3C.z) + SQUARE(sp3C.y) + SQUARE(sp3C.x));
    sp3C.z *= res;
    sp3C.y *= res;
    sp3C.x *= res;

    res = sqrtf(SQUARE(sp3C.z) + SQUARE(sp3C.y));

    sp48[0][3] = sp48[1][3] = sp48[2][3] = sp48[0][1] = 0.0f;
    sp48[3][3]                                        = 1.0f;

    if (res != 0.0f) {
        f32 invrt = (1.0f / res); // f16

        sp48[1][1] = res;

        sp48[0][0] = -sp3C.x * invrt;
        sp48[2][2] = -sp3C.x;

        sp48[2][1] = -sp3C.y;
        sp48[1][0] = -sp3C.y * sp3C.z * invrt;

        sp48[2][0] = -sp3C.z;
        sp48[0][2] = sp3C.z * invrt;
        sp48[1][2] = -sp3C.y * sp3C.x * invrt;
    } else {
        sp48[1][0] = sp48[2][0] = sp48[2][1] = sp48[0][2] = sp48[1][2] = 0.0f;
        sp48[0][0] = sp48[1][1] = sp48[2][2] = 1.0f;
    }
    // L800108C0
    if (arg2) {
        sp48[3][0] = arg1->unk18.f.v.x;
        sp48[3][1] = arg1->unk18.f.v.y;
        sp48[3][2] = arg1->unk18.f.v.z;
    } else {
        sp48[3][0] = sp48[3][1] = sp48[3][2] = 0.0f;
    }

    hal_mtx_f2l_fixed_w(&sp48, arg0);
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_04/func_80010918.s")
#endif

void func_80010AE8(Mtx *arg0, struct DObj *arg1, s32 arg2) {
    Mtx4f sp48;
    f32 sp44;
    f32 sp40;

    struct TempUnkObj *obj;
    f32 res;

    obj  = D_80046A58->unk74;
    sp44 = arg1->unk18.f.v.x - obj->unk3C.x;
    sp40 = arg1->unk18.f.v.y - obj->unk3C.y;
    res  = sqrtf(SQUARE(sp44) + SQUARE(sp40));

    sp48[0][3] = sp48[1][3] = sp48[2][3] = sp48[2][0] = sp48[2][1] = sp48[0][2] = sp48[1][2] = 0.0f;
    sp48[2][2] = sp48[3][3] = 1.0f;

    if (res != 0.0f) {
        f32 invrt = 1.0f / res;

        sp44 *= invrt;
        sp40 *= invrt;

        sp48[0][0] = -sp44;
        sp48[0][1] = -sp40;
        sp48[1][0] = sp40;
        sp48[1][1] = -sp44;
    } else {
        sp48[1][0] = sp48[0][1] = 0.0f;
        sp48[0][0] = sp48[1][1] = 1.0f;
    }

    if (arg2) {
        sp48[3][0] = arg1->unk18.f.v.x;
        sp48[3][1] = arg1->unk18.f.v.y;
        sp48[3][2] = arg1->unk18.f.v.z;
    } else {
        // why does this have to be 0, and not 0.0f...
        sp48[3][0] = sp48[3][1] = sp48[3][2] = 0;
    }

    hal_mtx_f2l_fixed_w(&sp48, arg0);
}

void func_80010C2C(Mtx *arg0, struct DObj *arg1, s32 arg2) {
    Mtx4f sp48;
    f32 sp44;
    f32 sp40;

    struct TempUnkObj *obj;
    f32 res;

    obj  = D_80046A58->unk74;
    sp44 = arg1->unk18.f.v.x - obj->unk3C.x;
    sp40 = arg1->unk18.f.v.z - obj->unk3C.z;
    res  = sqrtf(SQUARE(sp44) + SQUARE(sp40));

    sp48[0][3] = sp48[1][3] = sp48[2][3] = sp48[1][0] = sp48[0][1] = sp48[1][2] = sp48[2][1] = 0.0f;
    sp48[1][1] = sp48[3][3] = 1.0f;

    if (res != 0.0f) {
        f32 invrt = 1.0f / res;

        sp44 *= invrt;
        sp40 *= invrt;

        sp48[0][2] = sp44;
        sp48[2][0] = -sp44;
        sp48[0][0] = -sp40;
        sp48[2][2] = -sp40;
    } else {
        sp48[2][0] = sp48[0][2] = 0.0f;
        sp48[0][0] = sp48[2][2] = 1.0f;
    }

    if (arg2) {
        sp48[3][0] = arg1->unk18.f.v.x;
        sp48[3][1] = arg1->unk18.f.v.y;
        sp48[3][2] = arg1->unk18.f.v.z;
    } else {
        // why does this have to be 0, and not 0.0f...
        sp48[3][0] = sp48[3][1] = sp48[3][2] = 0;
    }

    hal_mtx_f2l_fixed_w(&sp48, arg0);
}
