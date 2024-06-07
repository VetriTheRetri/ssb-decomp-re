#include "common.h"

typedef struct unref_80023840_struct {
    u8 pad[0x18];
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 unk1B;
} unref_80023840_struct;

void unref_80023840(unref_80023840_struct* arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    arg0->unk18 = arg1;
    arg0->unk19 = arg2;
    arg0->unk1A = arg3;
    arg0->unk1B = arg4;
}
