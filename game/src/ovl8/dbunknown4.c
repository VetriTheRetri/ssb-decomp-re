#include <sys/develop.h>
#include <sys/obj_renderer.h>

extern void *D_ovl8_80388E60[1];
extern dbFunction D_ovl8_80388F18[1];
extern dbUnknownLink D_ovl8_80389070[1];
extern s32 D_ovl8_8038A1BC;

// WARNING: NONMATCHING - unused?
void* func_ovl8_80372790(dbUnknownS38 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2)
{
    if (arg0 == NULL)
    {
        arg0 = func_ovl8_803717A0(0xA0);

        if (arg0 == NULL) goto end;
    }
    if (arg1 == NULL)
    {
        // Order swap here; absolutely no idea how to fix
        arg1 = &arg0->unk_dbunks38_0x38;
        arg2 = &arg0->unk_dbunks38_0x94;

        func_ovl8_803717E0(arg1);
        func_ovl8_8037C2D0(arg2);
    }
    func_ovl8_803751C0(arg0, arg1, arg2);

    arg0->unk_dbunks38_0x18 = D_ovl8_80388E60;
    arg1->db_func = D_ovl8_80388F18;
    arg2->unk_dbunklink_0x8 = D_ovl8_80389070;

    func_ovl8_80373308(arg0, NULL);
end:
    return arg0;
}

// WARNING: NONMATCHING
void* func_ovl8_80372844(dbUnknownS38 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, dbBytesCopy *arg3)
{
    if (arg0 == NULL)
    {
        arg0 = func_ovl8_803717A0(0xA0);

        if (arg0 == NULL) goto end;
    }
    if (arg1 == NULL)
    {
        arg1 = &arg0->unk_dbunks38_0x38;
        arg2 = &arg0->unk_dbunks38_0x94;

        func_ovl8_803717E0(arg1);
        func_ovl8_8037C2D0(arg2);
    }
    func_ovl8_803751C0(arg0, arg1, arg2);

    arg0->unk_dbunks38_0x18 = D_ovl8_80388E60;
    arg1->db_func = D_ovl8_80388F18;
    arg2->unk_dbunklink_0x8 = D_ovl8_80389070;

    func_ovl8_80371ECC(arg0->unk_dbunks38_0x20, arg3);

    func_ovl8_80373308(arg0, arg3);
end:
    return arg0;
}

// 0x80372908 - unused?
void* func_ovl8_80372908(void *arg0, void *arg1)
{
    void *temp_v0 = func_ovl8_803717A0(0xA0);
    void *var_v1;

    if (temp_v0 != 0)
    {
        func_ovl8_80372844(temp_v0, 0, 0, arg1);

        var_v1 = temp_v0;
    }
    else var_v1 = NULL;

    return var_v1;
}

// 0x8037295C
void func_ovl8_8037295C(dbUnknownS38 *arg0, u32 arg1)
{
    void *temp_s0;
    void *temp_v0;
    dbFunction *db_func;
    dbUnknownS38 *var_v1;

    if (arg0 != NULL)
    {
        arg0->unk_dbunks38_0x18 = D_ovl8_80388E60,
        arg0->unk_dbunks38_0x20->db_func = D_ovl8_80388F18,
        arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = D_ovl8_80389070;

        temp_v0 = func_ovl8_80373160();

        var_v1 = temp_v0;

        if (var_v1 != NULL)
        {
            while (var_v1 != NULL)
            {
                temp_s0 = var_v1->unk_dbunks38_0x28;

                if (var_v1 != NULL)
                {
                    db_func = var_v1->unk_dbunks38_0x30;
                    db_func[1].unk_dbfunc_0x4(db_func[1].unk_dbfunc_0x0 + (uintptr_t)var_v1, 3);
                }
                var_v1 = temp_s0;
            }
        }
        func_ovl8_80375270(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x80372A3C
s32 func_ovl8_80372A3C(s32 arg0) {
    return 0;
}

// 0x80372A48
void func_ovl8_80372A48(dbUnknownS38 *arg0, dbUnknownS38 *arg1)
{
    dbUnknownS38 *temp_v0 = func_ovl8_80373168();

    if (temp_v0 != NULL)
    {
        temp_v0->unk_dbunks38_0x28 = arg1;
        arg1->unk_dbunks38_0x24 = temp_v0;
        arg1->unk_dbunks38_0x28 = NULL;
    }
    else
    {
        arg0->unk_dbunks38_0x28 = arg1;
        arg1->unk_dbunks38_0x24 = NULL;
        arg1->unk_dbunks38_0x28 = NULL;
    }
}

// 0x80372A94
void func_ovl8_80372A94(dbUnknownLinkStruct *arg0, void *arg1)
{
    s32 sp1C[3]; // should this be a type?
    dbUnknownLinkStruct *var_v1;

    func_ovl8_80371E2C(arg0->unk_dbunkstruct_0x20);

    if ((D_ovl8_8038A1BC == 0) && (func_ovl8_8037D384() != FALSE))
    {
        func_ovl8_8037D3AC(sp1C);

        var_v1 = arg0;

        if (arg0 != NULL)
        {
            var_v1 = arg0->unk_dbunkstruct_0x20;
        }
        if (sp1C[0] & var_v1->unk_dbunkstruct_0x30)
        {
            if (func_ovl8_80372B98(arg0, sp1C) == 0)
            {
                func_ovl8_8037D434(sp1C);
            }
        }
        else func_ovl8_8037D434(sp1C);
    }
}

// 0x80372B40
void func_ovl8_80372B40(dbUnknownS38 *arg0)
{
    dbFunction *db_func = arg0->unk_dbunks38_0x18;

    db_func[16].unk_dbfunc_0x4(db_func[16].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372B6C
void func_ovl8_80372B6C(dbUnknownS38 *arg0)
{
    dbFunction *db_func = arg0->unk_dbunks38_0x18;

    db_func[17].unk_dbfunc_0x4(db_func[17].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372B98
s32 func_ovl8_80372B98(dbUnknownS38 *arg0, db4Shorts *arg1)
{
    dbUnknownLinkStruct *temp_v1 = arg0->unk_dbunks38_0x20;
    dbFunction *db_func = temp_v1->db_func;
    s16 p = db_func[16].unk_dbfunc_0x0; // ??? This line is required or else it doesn't match

    if (db_func[16].unk_dbfunc_0x4(temp_v1->db_func[16].unk_dbfunc_0x0 + (uintptr_t)temp_v1, &arg1[1]) == 0)
    {
        return 0;
    }
    else
    {
        temp_v1 = arg0->unk_dbunks38_0x20;

        return temp_v1->db_func[18].unk_dbfunc_0x4(temp_v1->db_func[18].unk_dbfunc_0x0 + (uintptr_t)temp_v1, &arg1[0]);
    }
}

// 0x80372C00
void func_ovl8_80372C00(dbUnknown3 *arg0)
{
    db2Shorts sp34;
    db2Shorts sp30;
    dbUnknown3 *temp;
    dbFunction *db_func;

    func_ovl8_8037726C(&sp30);

    temp = arg0;

    if (arg0 != NULL)
    {
        temp = (dbUnknown3 *)arg0->unk_dbunk3_0x20;
    }
    while (func_ovl8_80377244() & temp->unk_dbunk3_0x30)
    {
        func_ovl8_8037726C(&sp34);

        if ((sp34.arr[0] != sp30.arr[0]) || (sp34.arr[1] != sp30.arr[1]))
        {
            temp = (void*)arg0->unk_dbunk3_0x18;

            // Ugh...

            ((dbFunction*)temp)[11].unk_dbfunc_0x4(((dbFunction*)temp)[11].unk_dbfunc_0x0 + (uintptr_t)arg0, (s16)(sp34.arr[0] - sp30.arr[0]), (s16)(sp34.arr[1] - sp30.arr[1]));

            *(db2Shorts*)&sp30 = *(db2Shorts*)&sp34;
        }
        func_ovl8_8037D45C();
        stop_current_process(1);

        temp = arg0;

        if (arg0 != NULL)
        {
            temp = arg0->unk_dbunk3_0x20;
        }
    }
    func_ovl8_8037D45C();
}

void func_ovl8_80372D18(dbUnknown3 *arg0, s16 arg1, s16 arg2)
{
    func_ovl8_80371D74(arg0->unk_dbunk3_0x20, arg1, arg2);

    arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372D70
void func_ovl8_80372D70(dbUnknown3 *arg0, s16 arg1, s16 arg2)
{
    func_ovl8_80371D08(arg0->unk_dbunk3_0x20, arg1, arg2);

    arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[15].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372DC8
sb32 func_ovl8_80372DC8(s32 arg0, s32 arg1, s32 arg2)
{
    return;
}

// 0x80372DD8
sb32 func_ovl8_80372DD8(s32 arg0, s32 arg1, s32 arg2)
{
    return;
}

// 0x80372DE8
void func_ovl8_80372DE8(void)
{
    dbUnknown3 *temp_v0 = func_ovl8_80373160();

    if (temp_v0 != NULL)
    {
        while (temp_v0 != NULL)
        {
            dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;

            db_func[34].unk_dbfunc_0x4(db_func[34].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);

            temp_v0 = temp_v0->unk_dbunk3_0x28;
        }
    }
}

// 0x80372E40
void func_ovl8_80372E40(void)
{
    dbUnknown3 *temp_v0 = func_ovl8_80373160();

    if (temp_v0 != NULL)
    {
        while (temp_v0 != NULL)
        {
            dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;

            db_func[32].unk_dbfunc_0x4(db_func[32].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);

            temp_v0 = temp_v0->unk_dbunk3_0x28;
        }
    }
}

// 0x80372E98
sb32 func_ovl8_80372E98(dbUnknown3 *arg0)
{
    dbUnknown3 *var_v0;
    dbUnknown3 *var_v1_2;
    sb32 var_v1;

    var_v0 = arg0;

    if (arg0 != NULL)
    {
        var_v0 = arg0->unk_dbunk3_0x20;
    }
    var_v1_2 = (var_v0->unk_dbunk3_0x48->unk_dbunk3_0x0 == -0x1FD) ? FALSE : TRUE;

    var_v1 = (sb32)var_v1_2; // Why does this keep working? I feel like we're missing something big time with this overlay.

    var_v1_2 = arg0;

    if (arg0 != NULL)
    {
        var_v1_2 = arg0->unk_dbunk3_0x20;
    }

    return func_ovl8_8037C584(var_v1) == var_v1_2->unk_dbunk3_0x48;
}

// 0x80372F04
void func_ovl8_80372F04(dbUnknown3 *arg0)
{
    dbUnknown3 *var_v0;
    sb32 st;

    var_v0 = arg0;

    if (arg0 != NULL)
    {
        var_v0 = arg0->unk_dbunk3_0x20;
    }
    st = var_v0->unk_dbunk3_0x48->unk_dbunk3_0x0 == -0x1FC;

    var_v0 = arg0;

    if (st != FALSE)
    {
        if (arg0 != NULL)
        {
            var_v0 = arg0->unk_dbunk3_0x20;
        }
        func_ovl8_8037C518(var_v0->unk_dbunk3_0x48, 0x1F, 2);

        var_v0 = arg0;

        if (arg0 != NULL)
        {
            var_v0 = arg0->unk_dbunk3_0x20;
        }
        func_8000A24C(var_v0->unk_dbunk3_0x48->unk_dbunk3_0x38, 1);
    }
    else
    {
        if (arg0 != NULL)
        {
            var_v0 = arg0->unk_dbunk3_0x20;
        }
        func_ovl8_8037C518(var_v0->unk_dbunk3_0x48, 0x1F, 1);

        var_v0 = arg0;

        if (arg0 != NULL)
        {
            var_v0 = arg0->unk_dbunk3_0x20;
        }
        func_8000A24C(var_v0->unk_dbunk3_0x48->unk_dbunk3_0x38, 2);
    }
    arg0->unk_dbunk3_0x18[14].unk_dbfunc_0x4(arg0->unk_dbunk3_0x18[14].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80372FEC
void func_ovl8_80372FEC(void)
{
    dbUnknown3 *temp_v0 = func_ovl8_80373160();

    if (temp_v0 != NULL)
    {
        while (temp_v0 != NULL)
        {
            dbFunction *db_func = temp_v0->unk_dbunk3_0x38->db_func;

            db_func[11].unk_dbfunc_0x4(db_func[11].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);

            temp_v0 = temp_v0->unk_dbunk3_0x28;
        }
    }
}

// 0x80373044
// TODO

// 0x803730DC
// TODO

// 0x80373118
// May use wrong types!
void func_ovl8_80373118(dbUnknownLinkStruct *arg0)
{
    func_ovl8_80371DD0(arg0->unk_dbunkstruct_0x20);
}

// 0x80373138
// May use wrong types!
void func_ovl8_80373138(dbUnknownLinkStruct *arg0)
{
    func_ovl8_80371DDC(arg0->unk_dbunkstruct_0x20);
}

// 0x80373158
void func_ovl8_80373158(dbUnknownS38 *arg0, void *arg1)
{
    arg0->unk_dbunks38_0x24 = arg1;
}

// 0x80373160
void* func_ovl8_80373160(dbUnknownS38 *arg0)
{
    return arg0->unk_dbunks38_0x28;
}

// 0x80373168
void* func_ovl8_80373168(dbUnknownS38 *arg0)
{
    dbUnknownS38 *var_v0, *var_v1;

    var_v1 = arg0->unk_dbunks38_0x28;

    if (var_v1 != NULL)
    {
        var_v0 = var_v1->unk_dbunks38_0x28;

        while (var_v0 != NULL)
        {
            var_v1 = var_v0;

            if (var_v0 != NULL)
            {
                var_v0 = var_v0->unk_dbunks38_0x28;
            }
            else break;
        }
    }
    return var_v1;
}

// 0x8037319C
// TODO

// 0x80373218
// TODO

// 0x803732B0
// TODO

// 0x80373308
void func_ovl8_80373308(dbUnknownS38 *arg0, void* arg1) 
{
    void *var_a1;
    
    arg0->unk_dbunks38_0x28 = arg0->unk_dbunks38_0x24 = NULL;

    var_a1 = arg0;

    if (arg0 != NULL)
    {
        var_a1 = arg0->unk_dbunks38_0x20;
    }
    func_ovl8_8037C3AC(arg0->unk_dbunks38_0x1C, var_a1);
}