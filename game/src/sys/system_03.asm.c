#include "sys/system_03.h"

#include "sys/om.h"
#include "sys/system_03_1.h"
#include "sys/system_04.h"

#include <macros.h>

#include <PR/ultratypes.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

s32 func_8000ACD0(struct GObjCommon *arg0, s32 arg1, struct GObjCommon *arg2) {
    if (arg0 == NULL) { arg0 = D_80046A54; }

    if (arg2 == NULL) { arg2 = D_80046A54; }

    if (arg0->unk70 == ARRAY_COUNT(arg0->unk48)) { return -1; }

    arg0->unk48[arg0->unk70].unk04 = arg1;
    arg0->unk48[arg0->unk70].unk00 = arg2;
    arg0->unk70++;

    return 0;
}

struct GObjCommon *func_8000AD38(struct GObjCommon *obj, void *link) {
    return (struct GObjCommon *)func_8000ACD0(
        obj, ((struct MaybeCommonLink *)link)->unk04, ((struct MaybeCommonLink *)link)->unk00);
}

void unref_8000AD60(s32 idx, s32 arg1, struct GObjCommon *arg2) {
    struct MaybeCommonLink link;

    link.unk00 = arg2 != NULL ? arg2 : D_80046A54;
    link.unk04 = arg1;

    func_8000AFE4(idx, func_8000AD38, &link, 0);
}

#ifdef NON_MATCHING
s32 func_8000ADB0(void (*defaultHandler)(struct MaybeCommonLink)) {
    struct GObjCommon *s0;
    struct MaybeCommonLink *csr;
    s32 i;

    // nonmatching: s0 is transformed into the same pointer as csr (base + 0x48),
    //              but then it reads the len at csr + 0x28 (aka base + 0x70) for the loop
    s0  = D_80046A54;
    csr = s0->unk48;
    for (i = 0; i < s0->unk70; i++) {
        switch (csr[i].unk04 + 5) {
            case 4: omEjectGObjCommon(NULL); return 1;
            case 3: func_8000B284(NULL); break;
            case 2: func_8000B2B8(NULL); break;
            case 1: D_80046A54->unk7C |= 1; break;
            case 0: D_80046A54->unk7C &= ~1; break;
            default:
                if (defaultHandler != NULL) { defaultHandler(csr[i]); }
                break;
        }
    }
    s0->unk70 = 0;

    return 0;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/system_03/func_8000ADB0.s")
#endif
#pragma GCC diagnostic pop
