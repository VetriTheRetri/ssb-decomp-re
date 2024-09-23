#include <sys/objmanager.h>
#include <sys/develop.h>
#include <debug.h>

extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376B60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376C40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80376EE0.s")

s32 func_ovl8_80376FB4()
{
	return 2;
}

// 80376FBC
s32 stringLength(char* string)
{
	s32 length;

	if (string == NULL)
		return 0;

	for (length = 0; *string != '\0'; string++, length++);
	return length;
}

// 80376FFC
void stringCopy(char* target, char* source)
{
	char* sourceCurrent;
	char* targetCurrent;

	if (target == NULL || source == NULL)
		return;
	
	while (*source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}
	
	*target = '\0';
}

// 80377044
void stringCopyCount(char* target, char* source, s32 count)
{
	char* sourceCurrent;
	char* targetCurrent;
	
	if (target == NULL || source == NULL)
		return;
	
	while (count != 0 && *source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		count -= 1;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}
	
	*target = '\0';
}

// 8037709C
void stringConcat(char* target, char* source)
{
	char* sourceCurrent;
	char* targetCurrent;

	if (target == NULL || source == NULL)
		return;
	
	target += stringLength(target);

	while (*source != '\0')
	{
		targetCurrent = target;
		sourceCurrent = source;
		target += 1;
		source += 1;
		*targetCurrent = *sourceCurrent;
	}
	
	*target = '\0';
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377108.s")
// void func_ovl8_80377108(char *a, int v, int b)
// {
// 	while (b--) { char *csr = a++; *csr = v; }
// }

void func_ovl8_80377134(s32 arg0, s32 arg1)
{
	func_ovl8_80376B60(arg1, arg0, &D_ovl8_80389F64, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803771CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377208.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037726C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037728C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803772AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803773CC.s")

void func_ovl8_80377AEC(char* arg0, s32 arg1, s32 arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0[0x31], arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377B40(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377EFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80377FE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80378064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803780B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803781A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803787C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80379070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_803798A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80379D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A0FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A5B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A6D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A8BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A904.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A9C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037A9F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037AA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037AA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037AA88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ABDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037ACAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B46C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B5F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B760.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B7F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BAD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BB28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BB78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BBF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BCB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BD94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BE34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BE94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BEC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037BF68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C0CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C0D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C174.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037C1D4.s")