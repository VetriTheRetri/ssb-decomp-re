#include <sys/develop.h>

extern s16 D_ovl8_8038A864;
extern s32 D_ovl8_8038A878;
extern s32 D_ovl8_8038A87C;
extern s32 D_ovl8_8038A880;
extern s32 D_ovl8_8038A884;
extern s32* D_ovl8_8038EFC4;

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

// 0x80373694
// TODO

// 0x80373750
// TODO

// 0x80373790
// TODO

// 0x803737DC
// TODO

// 0x803737DC
// TODO

// 0x80373828
// TODO

// 0x8037383C
// TODO

// 0x80373930
// TODO

// 0x80373980
// TODO

// 0x80373988
// TODO

// 0x80373990
// TODO

// 0x80373A28
// TODO

// 0x80373ABC
void func_ovl8_80373ABC(s32 arg0)
{
    return;
}

// 0x80373AC4
// TODO

// 0x80373B28
// TODO

// 0x80373B84
// TODO

// 0x80373BC0
void func_ovl8_80373BC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    return;
}

// 0x80373BD4
// TODO

// 0x80373C10
// TODO

// 0x80373CC4
// TODO

// 0x80373D88
// TODO

// 0x80373E24
// TODO

// 0x80373EA8
// TODO

// 0x803743C0
// TODO

// 0x803743CC
// TODO

// 0x803743D8
// TODO

// 0x8037481C
void func_ovl8_8037481C(void)
{
    func_ovl8_80373158();
}

// 0x8037483C
// TODO

// 0x8037486C
void func_ovl8_8037486C(void)
{
    func_ovl8_80372C00();
}

// 0x8037488C
// TODO

// 0x80374910
// TODO

// 0x8037499C
void func_ovl8_8037499C(void)
{
    func_ovl8_8037C5E8();
}

// 0x803749BC
// TODO

// 0x803749EC
// TODO

// 0x80374A28
// TODO

// 0x80374A54
// TODO

// 0x80374AE4
// TODO

// 0x80374B10
// TODO

// 0x80374B44
// TODO

// 0x80374B78
// TODO

// 0x80374BA4
// TODO

// 0x80374BD0
// TODO

// 0x80374C04
// TODO

// 0x80374C30
// TODO

// 0x80374C64
// TODO

// 0x80374C90
// TODO

// 0x80374CC0
// TODO

// 0x80374CCC
// TODO

// 0x80374CF8
// Not sure about types!
s32 func_ovl8_80374CF8(dbUnknownLinkStruct *arg0)
{
    return arg0->unk_dbunkstruct_0x40;
}

// 0x80374D00
// TODO

// 0x80374D2C
// TODO

// 0x80374D5C
// TODO

// 0x80374DB4
// TODO

// 0x80374E0C
void func_ovl8_80374E0C(s32 arg0)
{
    D_ovl8_8038EFC4[1] = arg0;
}

// 0x80374E1C
// TODO

// 0x80374F18
// TODO

// 0x80374F84
// TODO

// 0x80374FD0
// TODO

// 0x80375010
// TODO

// 0x80375050
// TODO

// 0x803750CC
void func_ovl8_803750CC(s16 arg0)
{
    D_ovl8_8038A864 = arg0;
    return;
}

// 0x803750E4
void func_ovl8_803750E4(dbUnkStruct arg0)
{
    D_ovl8_8038A878 = arg0.unk0;
    D_ovl8_8038A87C = arg0.unk4;
    D_ovl8_8038A880 = arg0.unk8;
    D_ovl8_8038A884 = arg0.unkC;
    return;
}

// 0x80375118
// TODO

// 0x803751C0
// TODO

// 0x80375270
// TODO

// 0x80375354
// TODO

// 0x80375528
// TODO

// 0x803755C4
// TODO

// 0x80375864
void func_ovl8_80375864(dbUnknownStructS18 *arg0, s32* arg1, s32* arg2, s32* arg3, s32* arg4)
{
    *arg1 = arg0->unk_0x8;
    *arg2 = arg0->unk_0x14;
    *arg3 = arg0->unk_0x10;
    *arg4 = arg0->unk_0xC;
    return;
}

// 0x8037588C
void func_ovl8_8037588C(dbUnknownStructS18 *arg0)
{
    arg0->unk_0x14 = 0;
    arg0->unk_0x10 = 0;
    arg0->unk_0xC = 0;
    arg0->unk_0x8 = 0;
    arg0->unk_0x0 = 4;
    arg0->unk_0x4 = 4;
    return;
}