#include "common.h"
#include <sys/develop.h>
#include <db/debug.h>

extern s32 D_803903D0_1ACC20;
extern dbUnknown5* D_803903D4_1ACC24;

extern s32 D_ovl8_80387F40;
extern s32 D_ovl8_80388298;
extern void* func_ovl8_803867E8;
extern void* func_ovl8_80386994;

extern dbFunction D_ovl8_8038E5A0;
extern dbFunction D_ovl8_8038E660;
extern dbFunction D_ovl8_8038E7B8;
extern s32 D_ovl8_8038E7E0;

void func_ovl8_80381B70(s32, s32*);
s32 func_ovl8_803865D0(DBMenuPosition*, s32, char*);

// 0x80386540
void func_ovl8_80386540(s32 arg0, s32 arg1)
{
	func_ovl8_80381B70(0x4B79576E, &func_ovl8_803867E8);
	func_ovl8_803865D0(&D_ovl8_80388298, arg0, arg1);
}

// 0x80386588
void func_ovl8_80386588(s32 arg0, s32 arg1)
{
	func_ovl8_80381B70(0x4B795064, &func_ovl8_80386994);
	func_ovl8_803865D0(&D_ovl8_80387F40, arg0, arg1);
}

// 0x803865D0
s32 func_ovl8_803865D0(DBMenuPosition* arg0, s32 arg1, char* arg2)
{
    dbUnknownS38* temp_a1;
    dbUnknownS38* temp_a2;
    dbFunction* temp_v0;
    dbFunction* temp_v1;

    D_803903D4_1ACC24 = func_ovl8_80381C80(arg0);
    temp_a2 = D_803903D4_1ACC24->unk_dbunk5_0xAC;
    temp_v1 = temp_a2->unk_dbunks38_0x30;
    temp_v1[33].unk_dbfunc_0x4(temp_v1[33].unk_dbfunc_0x0 + (uintptr_t)temp_a2, arg1, temp_a2, &D_803903D4_1ACC24);

    D_803903D0_1ACC20 = 0;
    while (D_803903D0_1ACC20 == 0)
    {
        gcStopCurrentGObjThread(1);
    }

    if (D_803903D4_1ACC24->unk_dbunk5_0xA8 != 0)
    {
        temp_a1 = D_803903D4_1ACC24->unk_dbunk5_0xAC;
        temp_v0 = temp_a1->unk_dbunks38_0x30;
        stringCopy(arg2, temp_v0[34].unk_dbfunc_0x4(temp_v0[34].unk_dbfunc_0x0 + (uintptr_t)temp_a1, temp_a1));
    }

    if (D_803903D4_1ACC24 != NULL)
    {
        temp_v1 = D_803903D4_1ACC24->db_func;
        temp_v1[1].unk_dbfunc_0x4(temp_v1[1].unk_dbfunc_0x0 + (uintptr_t)D_803903D4_1ACC24, 3);
    }

    return D_803903D4_1ACC24->unk_dbunk5_0xA8;
}

// 0x803866AC
s32 func_ovl8_803866AC(dbUnknown5* arg0, s32 arg1, dbUnknown5* arg2)
{
    dbFunction* temp_v0;
    dbUnknownS38* temp_v1;

    if (arg1 == -1) goto bn1;
    else if (arg1 == 129) goto b129;
    else if (arg1 == 132) goto b132;
    else if (arg1 == 128) goto b128;
    else if (arg1 == 130) goto b130;
    else if (arg1 != 131) goto end;
    else goto b131;

    bn1:
        func_ovl8_8037486C(arg2);
        goto end;

    b129:
        if (TRUE);
        arg0->unk_dbunk5_0xA8 = 1;
        D_803903D0_1ACC20 = 1;
        goto end;

    b132:
        if (TRUE);
        D_803903D0_1ACC20 = 1;
        arg0->unk_dbunk5_0xA8 = 0;
        goto end;

    b128:
        temp_v0 = arg0->unk_dbunk5_0xAC->unk_dbunks38_0x30;
        temp_v1 = arg0->unk_dbunk5_0xAC;

        temp_v0[27].unk_dbfunc_0x4(temp_v0[27].unk_dbfunc_0x0 + (uintptr_t)temp_v1, (u8)arg2->unk_dbunk5_0xC);
        temp_v1 = arg0->unk_dbunk5_0xAC;
        temp_v0 = temp_v1->unk_dbunks38_0x30;
        temp_v0[28].unk_dbfunc_0x4(temp_v0[28].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
        goto end;

    b130:
        temp_v1 = arg0->unk_dbunk5_0xAC;
        temp_v0 = temp_v1->unk_dbunks38_0x30;
        temp_v0[26].unk_dbfunc_0x4(temp_v0[26].unk_dbfunc_0x0 + (uintptr_t)temp_v1, 0x20);
        temp_v1 = arg0->unk_dbunk5_0xAC;
        temp_v0 = temp_v1->unk_dbunks38_0x30;
        temp_v0[28].unk_dbfunc_0x4(temp_v0[28].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
        goto end;

    b131:
        temp_v1 = arg0->unk_dbunk5_0xAC;
        temp_v0 = temp_v1->unk_dbunks38_0x30;
        temp_v0[32].unk_dbfunc_0x4(temp_v0[32].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
        goto end;

    end:
    return 0;
}

// 0x803867E8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_803867E8.s")

// 0x803868C0
void func_ovl8_803868C0(dbUnknown5* arg0)
{
    arg0->unk_dbunk5_0xAC = func_ovl8_8037319C(arg0, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_803868EC.s")
// void func_ovl8_803868EC(dbUnknownS38* arg0, s32 arg1)
// {
//     if (arg0 != NULL)
//     {
//         arg0->unk_dbunks38_0x18 = &D_ovl8_8038E5A0,
//         arg0->unk_dbunks38_0x20->db_func = &D_ovl8_8038E660;
//         arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = &D_ovl8_8038E7B8;
//         arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = &D_ovl8_8038E7E0;
//         // arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = D_ovl8_8038E7E0;

//         func_ovl8_803761F4(arg0, 0);

//         if (arg1 != 0)
//         {
//             func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
//             func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
//         }

//         if (arg1 & 1)
//         {
//             func_ovl8_803717C0(arg0);
//         }
//     }
// }

// 0x80386994
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80386994.s")

// 0x80386AFC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80386AFC.s")

// 0x80386BE0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80386BE0.s")

// 0x80386F90
int stringToNumber(char *string)
{
	int value = 0;
	int currentChar = *string;

	while (currentChar >= '0' && currentChar <= '9')
	{
		currentChar = *string++;
		value = currentChar + (value * 10) - '0';
		currentChar = *string;
	}
	return value;
}

// 0x80386FE0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80386FE0.s")

// 0x80387154
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80387154.s")

// 0x80387420
void stringCopyPartial(char* target, char* source, s32 count)
{
	char *targetCurrent;
	char *sourceCurrent;
	if (count == 0)
		return;

	targetCurrent = target++, sourceCurrent = source++;
	while ((*targetCurrent = *sourceCurrent) != '\0')
	{
		if (--count == 0)
			break;
		else
			targetCurrent = target++, sourceCurrent = source++;
	}
}

// 0x8038746C
u32 stringFromNumber(char* string, s64 number)
{
	u32 charsWritten;
	char c;
	char* current;

	charsWritten = 0;
	current = string;

	do
	{
		*current = number % 10 + '0';
		number = number * 0.1F;

		current++, charsWritten++;
	}
	while (number != 0);

	current--;

	while (current >= string)
	{
		c = (s64) (u32) (s64) (u32) (s64) *string;

		*string++ = *current;
		*current-- = c;
	}
	return charsWritten;
}

// 0x80387540
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_31/func_ovl8_80387540.s")