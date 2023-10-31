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
sb32 func_ovl8_803718C4(dbUnknownLinkStruct *arg0, u32 arg1)
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
sb32 func_ovl8_803718FC(dbUnknownLinkStruct *arg0, u32 arg1)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;

    arg0->unk_dblinkstruct_0x20 = 1;

    temp_v0[4].unk_dbfunc_0x4(temp_v0[4].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
}

// 0x80371930
sb32 func_ovl8_80371930(dbUnknownLinkStruct *arg0, u32 arg1)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;

    arg0->unk_dblinkstruct_0x20 = 0;

    temp_v0[5].unk_dbfunc_0x4(temp_v0[5].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
}

// 0x80371960
sb32 func_ovl8_80371960(s32 arg0)
{
    return;
}

// 0x80371968
sb32 func_ovl8_80371968(s32 arg0)
{
    return;
}

// 0x80371970
sb32 func_ovl8_80371970(s32 arg0)
{
    return;
}

// 0x80371978
sb32 func_ovl8_80371978(s32 arg0)
{
    return;
}

// 0x80371980
sb32 func_ovl8_80371980(dbUnknown16 *arg0, dbUnknown16 *arg1)
{
    arg1->unk_dbunk16_0x0 -= arg0->unk_dbunk16_0x2;
    arg1->unk_dbunk16_0x2 -= arg0->unk_dbunk16_0x4;
}

// 0x803719A4
sb32 func_ovl8_803719A4(dbUnknown16 *arg0, dbUnknown16 *arg1)
{
    arg1->unk_dbunk16_0x0 += arg0->unk_dbunk16_0x2;
    arg1->unk_dbunk16_0x2 += arg0->unk_dbunk16_0x4;
}

// 0x803719C8
sb32 func_ovl8_803719C8(dbUnknownLinkStruct *arg0, s32 arg1)
{
    dbFunction *temp_v0 = arg0->db_func;

    temp_v0[15].unk_dbfunc_0x4(temp_v0[15].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);

    if (arg0->unk_dbunkstruct_0x4C != 0)
    {
        temp_v0 = arg0->db_func;
        temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    }
}

// 0x8037112AC
sb32 func_ovl8_80371A2C(dbUnknownLinkStruct *arg0)
{
    dbFunction *temp_v0;

    func_ovl8_80371E58();

    temp_v0 = arg0->db_func;

    if (temp_v0[36].unk_dbfunc_0x4(temp_v0[36].unk_dbfunc_0x0 + (uintptr_t)arg0) != FALSE)
    {
        temp_v0 = arg0->db_func;

        temp_v0[24].unk_dbfunc_0x4(temp_v0[24].unk_dbfunc_0x0 + (uintptr_t)arg0);
    }
    if (arg0->unk_dbunkstruct_0x1C != NULL)
    {
        temp_v0 = arg0->db_func;

        temp_v0[12].unk_dbfunc_0x4(temp_v0[12].unk_dbfunc_0x0 + (uintptr_t)arg0);
    }
    temp_v0 = arg0->db_func;

    temp_v0[35].unk_dbfunc_0x4(temp_v0[35].unk_dbfunc_0x0 + (uintptr_t)arg0, 0);
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
sb32 func_ovl8_80371AD8(dbUnknownLinkStruct *arg0, s32 arg1)
{
    dbFunction *temp_v0;

    if (arg0->unk_dbunkstruct_0x4C != NULL)
    {
        temp_v0 = arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20->db_func;
        temp_v0[15].unk_dbfunc_0x4(temp_v0[15].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20, arg1);
    }
    else
    {
        temp_v0 = arg0->db_func;
        temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    }
}

// 0x80371B34   
sb32 func_ovl8_80371B34(dbUnknownLinkStruct *arg0, s32 arg1)
{
    if (arg0->unk_dbunkstruct_0x4C != NULL)
    {
        arg0->db_func[15].unk_dbfunc_0x4(arg0->db_func[15].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
    }
    arg0->db_func[17].unk_dbfunc_0x4(arg0->db_func[17].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1);
}

// 0x80371B98
sb32 func_ovl8_80371B98(dbUnknownLinkStruct *arg0, db4Bytes *arg1)
{
    func_ovl8_80377168(*arg1, &arg0->unk_dbunkstruct_0x2);
}

// 0x80371BCC
sb32 func_ovl8_80371BCC(dbUnknownLinkStruct *arg0, s32 arg1)
{
    if ((arg0->unk_dbunkstruct_0x1C == NULL) || (arg0->unk_dbunkstruct_0x20 == NULL))
    {
        return FALSE;
    }
    return arg0->db_func[19].unk_dbfunc_0x4(arg0->db_func[19].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, arg0);
}

// 0x80371C1C
sb32 func_ovl8_80371C1C(s32 arg0, s32 arg1)
{
    return 0;
}

// 0x80371C2C
sb32 func_ovl8_80371C2C(dbUnknownLinkStruct *arg0, dbBytesContainer *arg1)
{
    arg1->unk_dbbytescont_0x0 = arg0->unk_dbunkstruct_0x2;
}

// 0x80371C50
sb32 func_ovl8_80371C50(dbUnknownLinkStruct *arg0, dbBytesContainer *arg1)
{
    if (arg0->unk_dbunkstruct_0x4C == NULL)
    {
        arg1->unk_dbbytescont_0x0.arr[0] = arg1->unk_dbbytescont_0x0.arr[1] = 0;
    }
}

// 0x80371C8C
sb32 func_ovl8_80371C8C(dbUnknownLinkStruct *arg0, dbBytesContainer *arg1)
{
    arg1->unk_dbbytescont_0x0 = arg0->unk_dbunkstruct_0x2;
    arg1->unk_dbbytescont_0x0.arr[0] = arg1->unk_dbbytescont_0x0.arr[1] = 0;
}

// 0x80371CB8
sb32 func_ovl8_80371CB8(dbUnknownLinkStruct *arg0)
{
    if (arg0->unk_dbunkstruct_0x4C != NULL)
    {
        dbFunction *db_func = arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20->db_func;
        dbUnknownLinkStruct *temp_v1 = arg0->unk_dbunkstruct_0x4C->unk_dbunkstruct_0x20;

        return db_func[23].unk_dbfunc_0x4(db_func[23].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
    }
    else return FALSE;
}

// 0x80371D00
sb32 func_ovl8_80371D00(s32 arg0)
{
    return;
}

// 0x80371D08
sb32 func_ovl8_80371D08(dbUnknownLinkStruct *arg0, s16 arg1, s16 arg2)
{
    // Whitespace regswap memes
    arg0->unk_dbunkstruct_0x2.arr[0] += arg1, arg0->unk_dbunkstruct_0x2.arr[1] += arg2;

    return arg0->db_func[26].unk_dbfunc_0x4(arg0->db_func[26].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80371D64
sb32 func_ovl8_80371D64(s32 arg0, s16 arg1, s16 arg2)
{
    return;
}

// 0x80371D74
sb32 func_ovl8_80371D74(dbUnknownLinkStruct *arg0, s16 arg1, s16 arg2)
{
    arg0->unk_dbunkstruct_0x2.arr[1] = arg2;
    arg0->unk_dbunkstruct_0x2.arr[0] = arg1;

    arg0->db_func[28].unk_dbfunc_0x4(arg0->db_func[28].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80371DC0
sb32 func_ovl8_80371DC0(sb32 arg0, s16 arg1, s16 arg2)
{
    return;
}

// 0x80371DD0
sb32 func_ovl8_80371DD0(dbUnknownLinkStruct *arg0)
{
    arg0->unk_dbunkstruct_0x1C = (void*)1;
}

// 0x80371DDC
sb32 func_ovl8_80371DDC(dbUnknownLinkStruct *arg0)
{
    arg0->unk_dbunkstruct_0x1C = NULL;
}

// 0x80371DE4
sb32 func_ovl8_80371DE4(dbUnknownLinkStruct *arg0)
{
    return arg0->unk_dbunkstruct_0xC;
}

// 0x80371DEC
sb32 func_ovl8_80371DEC(sb32 arg0)
{
    return;
}

// 0x80371DF4
sb32 func_ovl8_80371DF4(sb32 arg0)
{
    return;
}

// 0x80371DFC
sb32 func_ovl8_80371DFC(sb32 arg0)
{
    return;
}

// 0x80371E04
sb32 func_ovl8_80371E04(dbUnknownLinkStruct *arg0, sb32 arg1)
{
    arg0->unk_dbunkstruct_0x28 = arg1;
}

// 0x80371E0C
sb32 func_ovl8_80371E0C(dbUnknownLinkStruct *arg0)
{
    return arg0->unk_dbunkstruct_0x28;
}

// 0x80371E14
sb32 func_ovl8_80371E14(sb32 arg0)
{
    return;
}

// 0x80371E1C
sb32 func_ovl8_80371E1C(sb32 arg0)
{
    return;
}

// 0x80371E24
sb32 func_ovl8_80371E24(dbUnknownLinkStruct *arg0, sb32 (*arg1)())
{
    arg0->unk_dbunkstruct_0x54 = arg1;
}

// 0x80371E2C
sb32 func_ovl8_80371E2C(dbUnknownLinkStruct *arg0)
{
    arg0->db_func[37].unk_dbfunc_0x4(arg0->db_func[37].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80371E58
sb32 func_ovl8_80371E58(dbUnknownLinkStruct *arg0)
{
    if (arg0->unk_dbunkstruct_0x54 != NULL)
    {
        arg0->unk_dbunkstruct_0x54();
    }
    arg0->db_func[38].unk_dbfunc_0x4(arg0->db_func[38].unk_dbfunc_0x0 + (uintptr_t)arg0, arg0);
}

// 0x80371EA0
void func_ovl8_80371EA0(dbUnknownLinkStruct *arg0)
{
    arg0->unk_dbunkstruct_0x48 = arg0->unk_dbunkstruct_0x4C = NULL;
    arg0->unk_dbunkstruct_0xC = 0x50414E45;
    arg0->unk_dbunkstruct_0x1C = (void*)1;
    arg0->unk_dbunkstruct_0x20 = (void*)1;
    arg0->unk_dbunkstruct_0x28 = 0;
    arg0->unk_dbunkstruct_0x54 = NULL;
}

// 0x80371ECC
void func_ovl8_80371ECC(dbUnknownLinkStruct *arg0, dbBytesCopy *arg1)
{
    func_ovl8_80371EA0();
    arg0->unk_dbunkstruct_0x2 = arg1->unk_dbbytescopy_0x0;
    arg0->unk_dbunkstruct_0x14 = arg1->unk_dbbytescopy_0x8;
    arg0->unk_dbunkstruct_0x18 = arg1->unk_dbbytescopy_0xC;
    arg0->unk_dbunkstruct_0x50.arr[0] = arg1->unk_dbbytescopy_0xC.arr[0];
    arg0->unk_dbunkstruct_0x50.arr[1] = arg1->unk_dbbytescopy_0xC.arr[1];
    arg0->unk_dbunkstruct_0x50.arr[2] = arg1->unk_dbbytescopy_0xC.arr[2];
    arg0->unk_dbunkstruct_0x50.arr[3] = arg1->unk_dbbytescopy_0xC.arr[3];
    arg0->unk_dbunkstruct_0xC = arg1->unk_dbbytescopy_0x18;
    arg0->unk_dbunkstruct_0x10 = arg1->unk_dbbytescopy_0x14;
    arg0->unk_dbunkstruct_0x24 = arg1->unk_dbbytescopy_0x10;
    arg0->unk_dbunkstruct_0x2C = 0;
    arg0->unk_dbunkstruct_0x30 = 0x8000;
    arg0->unk_dbunkstruct_0x34 = 0x4000;
    arg0->unk_dbunkstruct_0x38 = 0x800;
    arg0->unk_dbunkstruct_0x3C = 0x400;
    arg0->unk_dbunkstruct_0x40 = 0x100;
    arg0->unk_dbunkstruct_0x44 = 0x200;
}

