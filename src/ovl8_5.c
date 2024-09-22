#include "common.h"


extern s32 D_ovl8_80387F40;
extern s32 D_ovl8_80388298;
extern void* func_ovl8_803867E8;
extern void* func_ovl8_80386994;

void func_ovl8_80381B70(s32, s32*);
void func_ovl8_803865D0(s32*, s32, s32);

void func_ovl8_80386540(s32 arg0, s32 arg1)
{
	func_ovl8_80381B70(0x4B79576E, &func_ovl8_803867E8);
	func_ovl8_803865D0(&D_ovl8_80388298, arg0, arg1);
}

void func_ovl8_80386588(s32 arg0, s32 arg1)
{
	func_ovl8_80381B70(0x4B795064, &func_ovl8_80386994);
	func_ovl8_803865D0(&D_ovl8_80387F40, arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803865D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803866AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803867E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803868C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803868EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386BE0.s")

// 80386F90
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

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80386FE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387154.s")

// 80387420
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

// 8038746C
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


#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387540.s")

s32 func_ovl8_803879A0(s32 arg0, s32 arg1)
{
	s32 temp_v0;
	s32 var_v1;

	temp_v0 = func_ovl8_803717A0(0x140);

	if (temp_v0 != 0)
	{
		func_ovl8_803879FC(temp_v0, 0, 0, arg1, arg0);
		var_v1 = temp_v0;
	}
	else
		var_v1 = 0;

	return var_v1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_803879FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387AF8.s")

void func_ovl8_80387BD0(s32 arg0)
{
	func_ovl8_80381308(arg0 + 0xB8);
}

void func_ovl8_80387BF0(s32 arg0, s32 arg1)
{
	func_ovl8_80381B04(arg0 + 0xB8);
	func_ovl8_80373694(arg0, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/ovl8_5/func_ovl8_80387C24.s")