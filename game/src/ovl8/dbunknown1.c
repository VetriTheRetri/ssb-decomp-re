#include <sys/develop.h>

// GLOBAL

// 0x8038EE60
dbUnknownLink *D_ovl8_8038EE60;

// 0x8038EE64
u32 D_ovl8_8038EE64;

// 0x8038EE68
u32 D_ovl8_8038EE68;

// 0x8038EE70
dbUnknownLink D_ovl8_8038EE70;

// 0x80371460
void func_ovl8_80371460(dbUnknownLink *arg0, dbUnknownLink *arg1, dbUnknownLink *arg2)
{
    arg0->unk_dbunklink_0xC = arg1;
    arg1->unk_dbunklink_0xC = arg2;
    arg2->unk_dbunklink_0x10 = arg1;
    arg1->unk_dbunklink_0x10 = arg0;
}

// 0x80371474
void func_ovl8_80371474(dbUnknownLink *arg0)
{
    func_ovl8_80371460(D_ovl8_8038EE70.unk_dbunklink_0x10, arg0, &D_ovl8_8038EE70);
}

// 0x803714A0
void func_ovl8_803714A0(dbUnknownLink *arg0)
{
    dbUnknownLink *temp_v0 = arg0->unk_dbunklink_0x10;
    dbUnknownLink *temp_v1 = arg0->unk_dbunklink_0xC;

    temp_v0->unk_dbunklink_0xC = temp_v1;
    temp_v1->unk_dbunklink_0x10 = temp_v0;
}

// 0x803714B4
dbUnknownLink* func_ovl8_803714B4(s32 arg0)
{
    dbUnknownLink *var_v1 = D_ovl8_8038EE70.unk_dbunklink_0xC;

    while (var_v1 != &D_ovl8_8038EE70)
    {
        if (var_v1->unk_dbunklink_0x4 >= arg0)
        {
            return var_v1;
        }
        var_v1 = var_v1->unk_dbunklink_0xC;
    }
    return NULL;
}

// 0x803714F8
void func_ovl8_803714F8(dbUnknownLink *arg0, s32 arg1)
{
    dbUnknownLink *temp_a2;
    dbUnknownLink *temp_v0;

    temp_a2 = (dbUnknownLink*) ((uintptr_t)arg0 + (intptr_t)arg1);
    temp_a2->unk_dbunklink_0x0 = arg0;

    temp_a2->unk_dbunklink_0x4 = arg0->unk_dbunklink_0x4 - arg1;
    temp_a2->unk_dbunklink_0x8 = NULL;

    temp_v0 = (dbUnknownLink*) ((uintptr_t)temp_a2 + (intptr_t)temp_a2->unk_dbunklink_0x4);

    if ((u32)temp_v0 < (u32)D_ovl8_8038EE68)
    {
        temp_v0->unk_dbunklink_0x0 = temp_a2;
    }
    func_ovl8_80371474(temp_a2);

    arg0->unk_dbunklink_0x4 = arg1;
}

// 0x80371560
void func_ovl8_80371560(dbUnknownLink *arg0)
{
    dbUnknownLink *temp_a0;
    dbUnknownLink *temp_a2;
    dbUnknownLink *temp_v0;

    temp_v0 = arg0->unk_dbunklink_0x0;

    temp_a2 = (dbUnknownLink*) ((uintptr_t)arg0 + (intptr_t)arg0->unk_dbunklink_0x4);

    if ((temp_v0 != NULL) && (temp_v0->unk_dbunklink_0x8 == NULL))
    {
        temp_v0->unk_dbunklink_0x4 += arg0->unk_dbunklink_0x4;

        if ((u32)temp_a2 < (u32)D_ovl8_8038EE68)
        {
            temp_a2->unk_dbunklink_0x0 = temp_v0;
        }
        arg0 = temp_v0;
    }
    else
    {
        func_ovl8_80371474(arg0);

        arg0->unk_dbunklink_0x8 = NULL;
    }
    if (((u32)temp_a2 < D_ovl8_8038EE68) && (temp_a2->unk_dbunklink_0x8 == NULL))
    {
        temp_a0 = (dbUnknownLink*) ((uintptr_t)temp_a2 + (intptr_t)temp_a2->unk_dbunklink_0x4);

        if ((u32)temp_a0 < D_ovl8_8038EE68)
        {
            temp_a0->unk_dbunklink_0x0 = arg0;
        }
        arg0->unk_dbunklink_0x4 += temp_a2->unk_dbunklink_0x4;

        func_ovl8_803714A0(temp_a2);
    }
}

// 0x80371638
void func_ovl8_80371638(dbUnknownLink *arg0, u32 arg1)
{
    dbUnknownLink *var_a1;

    D_ovl8_8038EE64 = arg1;
    D_ovl8_8038EE60 = arg0;

    D_ovl8_8038EE68 = ((uintptr_t)D_ovl8_8038EE60 + (uintptr_t)arg1);

    var_a1 = D_ovl8_8038EE60;

    var_a1->unk_dbunklink_0x0 = NULL;
    var_a1->unk_dbunklink_0x4 = arg1;
    var_a1->unk_dbunklink_0x8 = NULL;

    func_ovl8_80371460(&D_ovl8_8038EE70, var_a1, &D_ovl8_8038EE70);
}

// 0x8037169C
sb32 func_ovl8_8037169C(u32 arg0) // Unused?
{
    if (arg0 < 8)
    {
        arg0 = 8;
    }
    return func_ovl8_803714B4((arg0 + 0xF) & ~3) != NULL;
}

// 0x803716D8
dbUnknownLink** func_ovl8_803716D8(u32 arg0)
{
    dbUnknownLink *temp_v0;
    u32 temp_a1;

    if (arg0 < 8)
    {
        arg0 = 8;
    }
    temp_a1 = (arg0 + 0xF) & ~3;

    temp_v0 = func_ovl8_803714B4(temp_a1);

    if (temp_v0 == NULL)
    {
        return NULL;
    }
    if ((u32)(temp_v0->unk_dbunklink_0x4 - temp_a1) > 0x14)
    {
        func_ovl8_803714F8(temp_v0, temp_a1);
    }
    func_ovl8_803714A0(temp_v0);

    temp_v0->unk_dbunklink_0x8 = (dbUnknownLink*)1;

    return &temp_v0->unk_dbunklink_0xC;
}

// 0x80371764
void func_ovl8_80371764(dbUnknownLink *arg0)
{
    func_ovl8_80371560((void*) ((uintptr_t)arg0 - 0xC));
}
