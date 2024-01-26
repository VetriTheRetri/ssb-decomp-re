#include <sys/develop.h>

// 0x80373350
dbUnknownLinkStruct* func_ovl8_80373350(s32 arg0, s32 arg1)
{
    dbUnknownLinkStruct *temp_v0;
    dbUnknownLinkStruct *var_v1;

    temp_v0 = func_ovl8_803717A0(0xA4);
    if (temp_v0 != NULL)
    {
        func_ovl8_8037345C(temp_v0, 0, 0, arg1, arg0);
        var_v1 = temp_v0;
    }
    else
    {
        var_v1 = 0;
    }
    return var_v1;
}

// 0x803733AC
// TODO

// 0x8037345C
// TODO

// 0x8037354C
// TODO

// 0x803735E4
// TODO

// 0x80373640
void func_ovl8_80373640(s32 arg0)
{
    return;
}

// 0x80373648
void func_ovl8_80373648(s32 arg0)
{
    return;
}

// 0x80373650
// TODO

// 0x8037367C
f32 func_ovl8_8037367C(f32* arg0)
{
    return *arg0;
}

// 0x80373684
f32 func_ovl8_80373684(f32* arg0)
{
    return arg0[1];
}

// 0x8037368C
f32 func_ovl8_8037368C(f32* arg0)
{
    return arg0[2];
}
