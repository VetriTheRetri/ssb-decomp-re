#include <sys/develop.h>

// 0x803717A0
void* func_ovl8_803717A0(u32 arg0)
{
    return func_ovl8_803716D8(arg0);
}

// 0x803717C0
void* func_ovl8_803717C0(void *arg0)
{
    return func_ovl8_80371764(arg0);
}

// 0x803717E0
dbUnknownLinkStruct* func_ovl8_803717E0(dbUnknownLinkStruct *arg0)
{
    if (arg0 == NULL)
    {
        arg0 = func_ovl8_803717A0(0x5C);

        if (arg0 == NULL) goto end;
    }
    arg0->db_func = D_ovl8_80388980;

    func_ovl8_80371EA0(arg0);
end:
    return arg0;
}

// 0x80371828
dbUnknownLinkStruct* func_ovl8_80371828(dbUnknownLinkStruct *arg0, void *arg1)
{
    if (arg0 == NULL)
    {
        arg0 = func_ovl8_803717A0(0x5C);

        if (arg0 == NULL) goto end;
    }
    arg0->db_func = D_ovl8_80388980;

    func_ovl8_80371ECC(arg0, arg1);

end:
    return arg0;
}

// 0x80371878
void* func_ovl8_80371878(dbUnknownLinkStruct *arg0, void *arg1)
{
    void *param = func_ovl8_803717A0(0x5C);
    void *ret;

    if (param != NULL)
    {
        func_ovl8_80371828(param, arg1);

        ret = param;
    }
    else ret = NULL;

    return ret;
}

// 0x803718C4
void func_ovl8_803718C4(dbUnknownLinkStruct *arg0, u32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->db_func = D_ovl8_80388980;

        if (arg1 & 1)
        {
            func_ovl8_803717C0();
        }
    }
}

// 0x803718FC
void func_ovl8_803718FC(dbUnknownLinkStruct *arg0, u32 arg1)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;

    arg0->unk_dblinkstruct_0x20 = 1;

    temp_v0[4].unk_dbfunc_0x4(temp_v0[4].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
}

// 0x80371930
void func_ovl8_80371930(dbUnknownLinkStruct *arg0, u32 arg1)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;

    arg0->unk_dblinkstruct_0x20 = 0;

    temp_v0[5].unk_dbfunc_0x4(temp_v0[5].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
}

// 0x80371960
void func_ovl8_80371960(s32 arg0)
{
    return;
}

// 0x80371968
void func_ovl8_80371968(s32 arg0)
{
    return;
}

// 0x80371970
void func_ovl8_80371970(s32 arg0)
{
    return;
}

// 0x80371978
void func_ovl8_80371978(s32 arg0)
{
    return;
}

// 0x80371980
void func_ovl8_80371980(dbUnknown16 *arg0, dbUnknown16 *arg1)
{
    arg1->unk_dbunk16_0x0 -= arg0->unk_dbunk16_0x2;
    arg1->unk_dbunk16_0x2 -= arg0->unk_dbunk16_0x4;
}

// 0x803719A4
void func_ovl8_803719A4(dbUnknown16 *arg0, dbUnknown16 *arg1)
{
    arg1->unk_dbunk16_0x0 += arg0->unk_dbunk16_0x2;
    arg1->unk_dbunk16_0x2 += arg0->unk_dbunk16_0x4;
}

// 0x803719C8
void func_ovl8_803719C8(dbUnknownLinkStruct *arg0, s32 arg1)
{
    dbFunction *temp_v0 = arg0->db_func;

    temp_v0[15].unk_dbfunc_0x4(temp_v0[15].unk_dbfunc_0x0 + (u32)arg0, arg1);

    if (arg0->unk_dbunkstruct_0x4C != 0)
    {
        temp_v0 = arg0->db_func;
        temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (u32)arg0, arg1);
    }
}

// 0x8037112AC
void func_ovl8_80371A2C(dbUnknownLinkStruct *arg0)
{
    dbFunction *temp_v0;

    func_ovl8_80371E58();

    temp_v0 = arg0->db_func;

    if (temp_v0[36].unk_dbfunc_0x4(temp_v0[36].unk_dbfunc_0x0 + (u32)arg0) != FALSE)
    {
        temp_v0 = arg0->db_func;

        temp_v0[24].unk_dbfunc_0x4(temp_v0[24].unk_dbfunc_0x0 + (u32)arg0);
    }
    if (arg0->unk_dbunkstruct_0x1C != NULL)
    {
        temp_v0 = arg0->db_func;

        temp_v0[12].unk_dbfunc_0x4(temp_v0[12].unk_dbfunc_0x0 + (u32)arg0);
    }
    temp_v0 = arg0->db_func;

    temp_v0[35].unk_dbfunc_0x4(temp_v0[35].unk_dbfunc_0x0 + (u32)arg0, 0);
}

// 0x80371ABC
sb32 func_ovl8_80371ABC(s32 arg0)
{
    return;
}

// 0x80371AC4
sb32 func_ovl8_80371AC4(s32 arg0)
{
    return;
}

// 0x80371ACC
sb32 func_ovl8_80371ACC(s32 arg0, s32 arg1)
{
    return;
}

// 0x80371AD8
void func_ovl8_80371AD8(dbUnknownLinkStruct *arg0, s32 arg1)
{
    dbFunction *temp_v0;

    if (arg0->unk_dbunkstruct_0x4C != NULL)
    {
        temp_v0 = arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20->db_func;
        temp_v0[15].unk_dbfunc_0x4(temp_v0[15].unk_dbfunc_0x0 + (u32)arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20, arg1);
    }
    else
    {
        temp_v0 = arg0->db_func;
        temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (u32)arg0, arg1);
    }
}

// 0x80371B34   
void func_ovl8_80371B34(dbUnknownLinkStruct *arg0, s32 arg1)
{
    if (arg0->unk_dbunkstruct_0x4C != NULL)
    {
        arg0->db_func[15].unk_dbfunc_0x4(arg0->db_func[15].unk_dbfunc_0x0 + (u32)arg0, arg1);
    }
    arg0->db_func[17].unk_dbfunc_0x4(arg0->db_func[17].unk_dbfunc_0x0 + (u32)arg0, arg1);
}

// 0x80371B98
void func_ovl8_80371B98(void *arg0, db4Bytes *arg1)
{
    func_ovl8_80377168(*arg1, (u32)arg0 + 2);
}

// 0x80371BCC
sb32 func_ovl8_80371BCC(dbUnknownLinkStruct *arg0, s32 arg1)
{
    if ((arg0->unk_dbunkstruct_0x1C == NULL) || (arg0->unk_dbunkstruct_0x20 == NULL))
    {
        return FALSE;
    }
    return arg0->db_func[19].unk_dbfunc_0x4(arg0->db_func[19].unk_dbfunc_0x0 + (u32)arg0, arg1, arg0);
}
