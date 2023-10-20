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
void func_ovl8_803718FC(dbUnknownLinkStruct *arg0)
{
    dbFunction *temp_v0;

    temp_v0 = arg0->db_func;

    arg0->unk_dblinkstruct_0x20 = 1;

    temp_v0[4].unk_dbfunc_0x4(temp_v0[4].unk_dbfunc_0x0 + (uintptr_t)arg0);
}
