#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>

typedef struct dbUnknownSpriteHolder
{
    u8 dbUnknownSpriteHolder_0x0[0x40];
    Sprite *dbUnknownSpriteHolder_0x40;
} dbUnknownSpriteHolder;

// 0x80376530
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_7/func_ovl8_80376530.s")

// 0x80376848
s32 func_ovl8_80376848(s32 arg0, dbUnknown5* arg1)
{
    s32 var_v1;
    s32 var_v1_2;

    var_v1_2 = arg1->unk_dbunk5_0x14;
    var_v1_2 = ((var_v1_2 != 0x42464857) && (var_v1_2 != 0x4246574E)) ? 0 : 1;
    var_v1 = func_ovl8_803717A0(0xB8);

    if (var_v1 != 0)
    {
        func_ovl8_80376530(var_v1, 0, 0, arg1, arg1->unk_dbunk5_0x24, var_v1_2);
        var_v1_2 = var_v1;
    }
    else
        var_v1_2 = 0;

    return var_v1_2;
}

// 0x803768E0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_7/func_ovl8_803768E0.s")

// 0x803769AC
s32 func_ovl8_803769AC(Vec3i* arg0)
{
	return arg0[4].z;
}

// 0x803769B4
void func_ovl8_803769B4(dbUnknownS38 *arg0, dbUnknownS38 *arg1)
{
	func_ovl8_80372A48(arg0, arg1);
}

// 0x803769D4
s32 func_ovl8_803769D4(dbUnknown5* arg0)
{
    dbFunction* temp_v0;

    temp_v0 = arg0->db_func;
    temp_v0[17].unk_dbfunc_0x4(temp_v0[17].unk_dbfunc_0x0 + (uintptr_t)arg0);

    return 1;
}

// 0x80376A04
void func_ovl8_80376A04(dbUnknown5* arg0)
{
    dbFunction* temp_v0;

    func_ovl8_8037217C(&arg0->unk_dbunk5_0x38);
    func_ovl8_80375354(arg0);

    temp_v0 = arg0->db_func;
    temp_v0[16].unk_dbfunc_0x4(temp_v0[16].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x80376A48
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_7/func_ovl8_80376A48.s")

// 0x80376AA4
void func_ovl8_80376AA4(dbUnknownSpriteHolder* arg0, s16 arg1, s16 arg2)
{
    spMove(arg0->dbUnknownSpriteHolder_0x40, arg1, arg2);
}

// 0x80376ADC
void func_ovl8_80376ADC(dbUnknownS38* arg0)
{
    dbUnknown3* temp_v0;
    dbFunction* temp_v0_2;

    temp_v0 = func_ovl8_80373160(arg0);

    if (temp_v0 != NULL)
    {
        while (temp_v0 != NULL)
        {
            temp_v0_2 = temp_v0->unk_dbunk3_0x38->db_func;

            if (temp_v0_2[36].unk_dbfunc_0x4(temp_v0_2[36].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38) != 0)
            {
                temp_v0_2 = temp_v0->unk_dbunk3_0x38->db_func;
                temp_v0_2[11].unk_dbfunc_0x4(temp_v0_2[11].unk_dbfunc_0x0 + (uintptr_t)temp_v0->unk_dbunk3_0x38);
            }
            temp_v0 = temp_v0->unk_dbunk3_0x28;
        }
    }
}