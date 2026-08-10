extern "C" {
#include "common.h"
#include <sys/develop.h>
#include <db/debug.h>
}

extern "C" {

extern dbUnknownLinkStruct* func_ovl8_80381C80(DBMenu* arg0);
extern void stringCopy(char* target, char* source);
extern s32 stringLength(char* string);
extern int stringToNumber(char* string);
extern void func_ovl8_8037486C(dbUnknown3* arg0);
extern void* func_ovl8_803717A0(s32 arg0);
extern void* func_ovl8_803717E0(dbUnknownLinkStruct* arg0);
extern void func_ovl8_803717C0(dbUnknownLinkStruct* arg0);
extern void func_ovl8_803718C4(dbUnknownLinkStruct* arg0, s32 arg1);
extern void* func_ovl8_8037C2D0(void** arg0);
extern void func_ovl8_8037C30C(dbUnknownLink* arg0, s32 arg1);
extern dbUnknown5* func_ovl8_80376010(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, DBMenu* arg3, s32 arg4);
extern dbUnknown3* func_ovl8_8037319C(dbUnknownS38* arg0, s32 arg1);
extern void func_ovl8_803761F4(dbUnknownS38* arg0, s32 arg1);
extern s32 func_ovl8_803865D0(DBMenuPosition* arg0, s32 arg1, char* arg2);
extern s32 func_ovl8_80386FE0(char* out, char* src, sb32 leftAlign, s32 width, s32 maxLen);
extern s32 func_ovl8_80387154(u8* output_str, s64 value, sb32 is_float, s32 align_left, sb32 show_sign, s32 width, s32 precision);

typedef union {
    s64 i;
    f32 f;
} S64F32;

extern s32 D_803903D0_1ACC20;
extern dbUnknown5* D_803903D4_1ACC24;

extern s32 D_ovl8_80387F40;
extern s32 D_ovl8_80388298;
dbUnknown5* func_ovl8_803867E8(void* arg0, DBMenu* arg1);
dbUnknown5* func_ovl8_80386994(void* arg0, DBMenu* arg1);
u32 stringFromNumber(char* string, s64 number);
s32 func_ovl8_80387540(char*, f32, s32);

extern void func_ovl8_803718FC();
extern void func_ovl8_80371930();
extern void func_ovl8_80371960();
extern void func_ovl8_80371968();
extern void func_ovl8_80371970();
extern void func_ovl8_80371978();
extern void func_ovl8_80371980();
extern void func_ovl8_803719A4();
extern void func_ovl8_803719C8();
extern void func_ovl8_80371A2C();
extern void func_ovl8_80371AD8();
extern void func_ovl8_80371B34();
extern void func_ovl8_80371B98();
extern void func_ovl8_80371BCC();
extern void func_ovl8_80371C2C();
extern void func_ovl8_80371C8C();
extern void func_ovl8_80371D00();
extern void func_ovl8_80371DE4();
extern void func_ovl8_80371DEC();
extern void func_ovl8_80371DF4();
extern void func_ovl8_80371E04();
extern void func_ovl8_80371E0C();
extern void func_ovl8_80371E14();
extern void func_ovl8_80371E24();
extern void func_ovl8_80371E2C();
extern void func_ovl8_80371E58();
extern void func_ovl8_803721E8();
extern void func_ovl8_80372224();
extern void func_ovl8_80372250();
extern void func_ovl8_803722A0();
extern void func_ovl8_803722F0();
extern void func_ovl8_80372348();
extern void func_ovl8_80372358();
extern void func_ovl8_80372360();
extern void func_ovl8_80372A48();
extern void func_ovl8_80372A94();
extern void func_ovl8_80372D18();
extern void func_ovl8_80372D70();
extern void func_ovl8_80372DC8();
extern void func_ovl8_80372DD8();
extern void func_ovl8_80372DE8();
extern void func_ovl8_80372E40();
extern void func_ovl8_80372FEC();
extern void func_ovl8_80373044();
extern void func_ovl8_80373118();
extern void func_ovl8_80373138();
extern void func_ovl8_803732B0();
extern void func_ovl8_80375528();
extern void func_ovl8_803755C4();
extern void func_ovl8_80375864();
extern void func_ovl8_803762AC();
extern void func_ovl8_803762B4();
extern void func_ovl8_803764C8();
extern void func_ovl8_8037C358();

extern dbFunction D_ovl8_8038E5A0[];
extern dbFunction D_ovl8_8038E660[];
extern dbFunction D_ovl8_8038E7B8[];
extern dbFunction D_ovl8_8038E7E0[];
extern dbFunction D_ovl8_8038E840[];
extern dbFunction D_ovl8_8038E900[];
extern dbFunction D_ovl8_8038EA58[];
extern dbFunction D_ovl8_8038EA80[];

void dbUiNodeTypeRegisterHandler(s32, s32*);
s32 func_ovl8_803865D0(DBMenuPosition*, s32, char*);
void stringCopyPartial(char* target, char* source, s32 count);

// 0x80386540
void func_ovl8_80386540(s32 arg0, s32 arg1)
{
	dbUiNodeTypeRegisterHandler('KyWn', (s32*) &func_ovl8_803867E8);
	func_ovl8_803865D0((DBMenuPosition*) &D_ovl8_80388298, arg0, (char*) arg1);
}

// 0x80386588
void func_ovl8_80386588(s32 arg0, s32 arg1)
{
	dbUiNodeTypeRegisterHandler('KyPd', (s32*) &func_ovl8_80386994);
	func_ovl8_803865D0((DBMenuPosition*) &D_ovl8_80387F40, arg0, (char*) arg1);
}

// 0x803865D0
s32 func_ovl8_803865D0(DBMenuPosition* arg0, s32 arg1, char* arg2)
{
	dbUnknownS38* temp_a1;
	dbUnknownS38* temp_a2;
	dbFunction* temp_v0;
	dbFunction* temp_v1;

	D_803903D4_1ACC24 = (dbUnknown5*) func_ovl8_80381C80((DBMenu*) arg0);
	temp_a2 = D_803903D4_1ACC24->unk_dbunk5_0xAC;
	temp_v1 = temp_a2->unk_dbunks38_0x30;
	((sb32 (*)(uintptr_t, s32, s32, dbUnknown5**)) temp_v1[33].unk_dbfunc_0x4)(temp_v1[33].unk_dbfunc_0x0 + (uintptr_t)temp_a2, (s32) arg1, (s32) temp_a2, &D_803903D4_1ACC24);

	D_803903D0_1ACC20 = 0;
	while (D_803903D0_1ACC20 == 0)
	{
		gcSleepCurrentGObjThread(1);
	}

	if (D_803903D4_1ACC24->unk_dbunk5_0xA8 != 0)
	{
		temp_a1 = D_803903D4_1ACC24->unk_dbunk5_0xAC;
		temp_v0 = temp_a1->unk_dbunks38_0x30;
		stringCopy(arg2, (char*) ((sb32 (*)(uintptr_t, s32)) temp_v0[34].unk_dbfunc_0x4)(temp_v0[34].unk_dbfunc_0x0 + (uintptr_t)temp_a1, (s32) temp_a1));
	}

	if (D_803903D4_1ACC24 != NULL)
	{
		temp_v1 = D_803903D4_1ACC24->db_func;
		((sb32 (*)(uintptr_t, s32)) temp_v1[1].unk_dbfunc_0x4)(temp_v1[1].unk_dbfunc_0x0 + (uintptr_t)D_803903D4_1ACC24, 3);
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
		func_ovl8_8037486C((dbUnknown3*) arg2);
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

		((sb32 (*)(uintptr_t, s32)) temp_v0[27].unk_dbfunc_0x4)(temp_v0[27].unk_dbfunc_0x0 + (uintptr_t)temp_v1, (s32) arg2->unk_dbunk5_0xC.b);
		temp_v1 = arg0->unk_dbunk5_0xAC;
		temp_v0 = temp_v1->unk_dbunks38_0x30;
		((sb32 (*)(uintptr_t)) temp_v0[28].unk_dbfunc_0x4)(temp_v0[28].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
		goto end;

	b130:
		temp_v1 = arg0->unk_dbunk5_0xAC;
		temp_v0 = temp_v1->unk_dbunks38_0x30;
		((sb32 (*)(uintptr_t, s32)) temp_v0[26].unk_dbfunc_0x4)(temp_v0[26].unk_dbfunc_0x0 + (uintptr_t)temp_v1, 0x20);
		temp_v1 = arg0->unk_dbunk5_0xAC;
		temp_v0 = temp_v1->unk_dbunks38_0x30;
		((sb32 (*)(uintptr_t)) temp_v0[28].unk_dbfunc_0x4)(temp_v0[28].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
		goto end;

	b131:
		temp_v1 = arg0->unk_dbunk5_0xAC;
		temp_v0 = temp_v1->unk_dbunks38_0x30;
		((sb32 (*)(uintptr_t)) temp_v0[32].unk_dbfunc_0x4)(temp_v0[32].unk_dbfunc_0x0 + (uintptr_t)temp_v1);
		goto end;

	end:
	return 0;
}

// 0x803867E8
dbUnknown5* func_ovl8_803867E8(void* arg0, DBMenu* arg1) 
{
    dbUnknown5* sp44;
    volatile s32 pad2;
    dbUnknown5* temp_v0;
    dbUnknown5* retval;
    dbUnknownLinkStruct* sp34;
    dbUnknownLink* sp30;
    
    if ((sp44 = (dbUnknown5 *) func_ovl8_803717A0(0x118)) != NULL)
    {
        temp_v0 = sp44;
        sp34 = NULL;
        sp30 = NULL;
        
        if (temp_v0 != NULL || ((temp_v0 = (dbUnknown5 *) func_ovl8_803717A0(0x118)) != NULL))
        {
            if (sp34 == NULL)
            {
                sp34 = (dbUnknownLinkStruct *) &temp_v0->unk_dbunk5_0xB0,
                sp30 = (dbUnknownLink *) &temp_v0->unk_dbunk5_0x10C;
                #line 238
                func_ovl8_803717E0(sp34);
                func_ovl8_8037C2D0((void**) sp30);
                #line 244
            }
            
            func_ovl8_80376010(temp_v0, sp34, sp30, arg1, 1);

            temp_v0->db_func = (dbFunction *) &D_ovl8_8038E5A0;
            sp34->db_func = (dbFunction *) &D_ovl8_8038E660;
            sp30->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038E7B8;
            temp_v0->unk_dbunk5_0x44.ls = (dbUnknownLinkStruct *) &D_ovl8_8038E7E0;
        }

        retval = sp44;
    }
    else {
        retval = NULL;
    }

    return retval;
}

// 0x803868C0
void func_ovl8_803868C0(dbUnknown5* arg0)
{
	arg0->unk_dbunk5_0xAC = (dbUnknownS38*) func_ovl8_8037319C((dbUnknownS38*) arg0, 1);
}

// 0x803868EC
void func_ovl8_803868EC(dbUnknownS38* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunks38_0x18 = (dbFunction *) &D_ovl8_8038E5A0,
        arg0->unk_dbunks38_0x20->db_func = (dbFunction *) &D_ovl8_8038E660;
        arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038E7B8;
        arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = (s32) &D_ovl8_8038E7E0;

        #line 276
        func_ovl8_803761F4(arg0, 0);
        #line 282

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
        }

        if (arg1 & 1)
        {
            func_ovl8_803717C0((dbUnknownLinkStruct *) arg0);
        }
    }
}

// 0x80386994
dbUnknown5* func_ovl8_80386994(void* arg0, DBMenu* arg1) 
{
    dbUnknown5* sp4C;
    dbUnknown5* var_s1;
    dbUnknown5* temp_v0;
    dbUnknown5* retval;
    dbUnknownLinkStruct* sp3C;
    dbUnknownLink* sp38;
    volatile s32 pad2;
    dbUnknownLinkStruct* sp30;
    dbUnknownLink* sp2C;
    
    if ((sp4C = (dbUnknown5 *) func_ovl8_803717A0(0x118)) != NULL)
    {
        temp_v0 = sp4C;
        sp3C = NULL;
        sp38 = NULL;
        
        if (temp_v0 != NULL || ((temp_v0 = (dbUnknown5 *) func_ovl8_803717A0(0x118)) != NULL))
        {
            if (sp3C == NULL)
            {
                sp3C = (dbUnknownLinkStruct *) &temp_v0->unk_dbunk5_0xBC,
                sp38 = (dbUnknownLink *) &temp_v0->unk_dbunk5_0xB0;
                #line 318
                func_ovl8_803717E0(sp3C);
                func_ovl8_8037C2D0((void**) sp38);
                #line 325
            }
            
            var_s1 = temp_v0;
            sp30 = sp3C;
            sp2C = sp38;

            if (var_s1 != NULL || ((var_s1 = (dbUnknown5 *) func_ovl8_803717A0(0x118)) != NULL))
            {
                if (sp3C == NULL)
                {
                    sp30 = (dbUnknownLinkStruct *) &var_s1->unk_dbunk5_0xB0,
                    sp2C = (dbUnknownLink *) &var_s1->unk_dbunk5_0x10C;
                    #line 335
                    func_ovl8_803717E0(sp30);
                    func_ovl8_8037C2D0((void**) sp2C);
                    #line 341
                }
                
                func_ovl8_80376010(var_s1, sp30, sp2C, arg1, 1);
    
                var_s1->db_func = (dbFunction *) &D_ovl8_8038E5A0;
                sp30->db_func = (dbFunction *) &D_ovl8_8038E660;
                sp2C->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038E7B8;
                var_s1->unk_dbunk5_0x44.ls = (dbUnknownLinkStruct *) &D_ovl8_8038E7E0;
            }
            
            temp_v0->db_func = (dbFunction *) &D_ovl8_8038E840;
            sp3C->db_func = (dbFunction *) &D_ovl8_8038E900;
            sp38->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038EA58;
            temp_v0->unk_dbunk5_0x44.ls = (dbUnknownLinkStruct *) &D_ovl8_8038EA80;
        }

        retval = sp4C;
    }
    else {
        retval = NULL;
    }

    return retval;
}

// 0x80386AFC
void func_ovl8_80386AFC(dbUnknownS38* arg0, s32 arg1) 
{
    if (arg0 != NULL) 
    {
        arg0->unk_dbunks38_0x18 = (dbFunction *) &D_ovl8_8038E840,
        arg0->unk_dbunks38_0x20->db_func = (dbFunction *) &D_ovl8_8038E900;
        arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038EA58;
        arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = (s32) &D_ovl8_8038EA80;
        
        if (arg0 != NULL) 
        {
            arg0->unk_dbunks38_0x18 = (dbFunction *) &D_ovl8_8038E5A0,
            arg0->unk_dbunks38_0x20->db_func = (dbFunction *) &D_ovl8_8038E660;
            arg0->unk_dbunks38_0x1C->unk_dbunklink_0x8 = (dbUnknownLink *) &D_ovl8_8038E7B8;
            arg0->unk_dbunks38_0x38.unk_dbunkstruct_0xC = (s32) &D_ovl8_8038E7E0;
            func_ovl8_803761F4(arg0, 0);
        }
        
        if (arg1 != 0) {
            func_ovl8_8037C30C(arg0->unk_dbunks38_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunks38_0x20, 0);
        }
        
        if (arg1 & 1) {
            func_ovl8_803717C0((dbUnknownLinkStruct *) arg0);
        }
    }
}

// 0x80386BE0
void func_ovl8_80386BE0(u8* out, u8** argList)
{
    s32 *argPtr; // s2
    s32 argParity;
    s32 size;
    s32 fieldWidth;
    s32 zeroPad;
    s32 leftAlign;
    s64 sp74;
    s32 sp70;
    s32 var_v0_3;
    s32 temp_a1;
    s32 precision;
    s32 var_v0_2;
    f32 sp58;
    u8 var_a0;
    u8 var_v1;
    u8 var_v1_2;
    u8* temp_v0;
    u8* fmtPtr;
    u8* outPtr;

    argPtr = (s32*)&argList[1];
    outPtr = out;
    fmtPtr = (u8*)*argList;

    var_v0_3 = ((uintptr_t)argPtr & 7) ? 1 : 0;

    var_v1 = *fmtPtr;
    argParity = var_v0_3;
    sp70 = 1;

    while (*fmtPtr)
    {
        var_v1 = *fmtPtr;
        if (var_v1 & 0x80)
        {
            u8* v0;
            u8* v1;

            *outPtr++ = *fmtPtr++;
            *outPtr++ = *fmtPtr++;
        }
        else
        {
            precision = 0;

            if (*fmtPtr != '%')
            {
                *outPtr++ = *fmtPtr++;
            }
            else
            {
                var_a0 = fmtPtr[1];
                fmtPtr++;
                fieldWidth = 0;
                zeroPad = 0;
                leftAlign = 0;
                size = 4;
                var_v1_2 = var_a0;

                if (var_a0 == '-')
                {
                    var_a0 = fmtPtr[1];
                    leftAlign = sp70;
                    fmtPtr++;
                    var_v1_2 = var_a0;
                }

                if (var_v1_2 == '0')
                {
                    var_a0 = fmtPtr[1];
                    zeroPad = sp70;
                    fmtPtr++;
                    var_v1_2 = var_a0;
                }

                if (((s32) var_v1_2 >= '1') && ((s32) var_v1_2 <= '9'))
                {
                    fieldWidth = stringToNumber((char *) fmtPtr);
                    var_a0 = *fmtPtr;
                    var_v1_2 = var_a0;

                    if (((s32) var_a0 >= '0') && ((s32) var_v1_2 <='9'))
                    {
                        while (TRUE)
                        {
                            var_a0 = fmtPtr[1];
                            fmtPtr++;
                            var_v1_2 = var_a0;
                            if (((s32) var_a0 >= '0') && ((s32) var_v1_2 <='9'))
                            {
                                continue;
                            }
                            break;
                        }
                    }
                }

                if (var_v1_2 == '.')
                {
                    var_a0 = fmtPtr[1];
                    fmtPtr++;
                    var_v1_2 = var_a0;

                    if (((s32) var_a0 >= '0') && ((s32) var_v1_2 <= '9'))
                    {
                        precision = stringToNumber((char *) fmtPtr);
                        var_a0 = *fmtPtr;
                        var_v1_2 = var_a0;

                        if (((s32) var_a0 >= '0') && ((s32) var_v1_2 <= '9'))
                        {
                            while (TRUE)
                            {
                                var_a0 = fmtPtr[1];
                                fmtPtr++;
                                var_v1_2 = var_a0;
                                if (((s32) var_a0 >= '0') && ((s32) var_v1_2 <= '9'))
                                {
                                    continue;
                                }
                                break;
                            }
                        }
                    }
                }

                var_v0_2 = var_v1_2;
                switch (var_v1_2)
                {
                case 'i':
                    var_a0 = fmtPtr[1];
                    fmtPtr++;
                    var_v0_2 = var_a0;
                    break;
                case 'l':
                    var_a0 = fmtPtr[1];
                    size = 8;
                    fmtPtr++;
                    var_v0_2 = var_a0;
                    break;
                }

                switch (var_v0_2)
                {
                case 'c':
                {
                    
                    
                    *outPtr++ = *(u8*)argPtr;
                    argPtr += 1;
                    argParity = sp70 - argParity;
                    
                    break;
                }
                case 's':
                    temp_a1 = (s32)*argPtr;
                    argPtr++;
                    argParity = sp70 - argParity;
                    var_v0_3 = func_ovl8_80386FE0((char *) (char*) outPtr, (char*) temp_a1, leftAlign, fieldWidth, precision);
                    outPtr = &outPtr[var_v0_3];
                    break;
                case 'd':
                    switch (size)
                    {
                    case 4:
                        sp74 = *argPtr;
                        argParity = sp70 - argParity;
                        break;
                    case 8:
                        if (argParity != 0) {
                            argParity = 0;
                            argPtr++;
                        }
                        sp74 = *((s64*)argPtr);
                        break;
                    }

                    argPtr = (s32*)((u8*)argPtr + size);
                    var_v0_3 = func_ovl8_80387154(outPtr, sp74, FALSE, leftAlign, zeroPad, fieldWidth, precision);
                    outPtr = &outPtr[var_v0_3];
                    break;
                case 'f':
                    if (argParity != 0) 
                    {
                        argParity = 0;
                        argPtr++;
                    }
                    sp58 = (*(f64*)argPtr);
                    argPtr += 2;
                    sp74 = *(s64*)&sp58;
                    var_v0_3 = func_ovl8_80387154(outPtr, sp74, TRUE, leftAlign, zeroPad, fieldWidth, precision);
                    outPtr = &outPtr[var_v0_3];
                    break;
                default:
                {
                    *outPtr++ = var_a0;
                    break;
                }
                }

                fmtPtr++;
            }
        }

    }

    *outPtr = '\0';
}

// 0x80386F90
int stringToNumber(char *string)
{
    s32 value = 0;

    while ((*string >= '0') && (*string <= '9'))
    {
        value = (value * 10) - '0' + *string;
        string++;
    }

    return value;
}

// 0x80386FE0
s32 func_ovl8_80386FE0(char* out, char* src, sb32 leftAlign, s32 width, s32 maxLen) 
{
    s32 i;
    s32 len;

    len = stringLength(src);

    if (maxLen != 0 && maxLen < len) {
        len = maxLen;
    }
    
    if (leftAlign == FALSE) 
    {
        for (i = 0; i < width - len; i++)
        {
            *out++ = ' ';
        }
    }
    
    stringCopyPartial(out, src, len);
    
    out += len;
    
    if (leftAlign != FALSE) 
    {
        for (i = 0; i < width - len; i++)
        {
            *out++ = ' ';
        }
    }

    return (width < len) ? len : width;
}

// 0x80387154
s32 func_ovl8_80387154(u8* output_str, s64 value, sb32 is_float, s32 align_left, sb32 show_sign, s32 width, s32 precision)
{
    sb32 force_sign;
    s32 total_length;
    s32 num_string_length;
    s32 pad_char;
    s32 right_pad_char;
    s32 is_negative;
    s32 i;
    u8 number_buffer[64];
    u8* c;
    S64F32 u;

    is_negative = 0;
    force_sign = (show_sign != 0);

    pad_char = force_sign ? '0' : ' ';
    right_pad_char = (is_float == 1 && align_left != 0 && force_sign != 0) ? '0' : ' ';

    total_length = 0;
    if (is_float == 0) {
        if (value < 0) {
            is_negative = 1;
            value = -value;
            total_length = 1;
        }
        num_string_length = stringFromNumber((char *) number_buffer, value);
    } else {
        u.i = value;
        if (u.f < 0.0f) {
            is_negative = 1;
            u.f = -u.f;
            total_length = 1;
        }
        num_string_length = func_ovl8_80387540((char *) number_buffer, u.f, precision);
    }

    total_length += num_string_length;

    if (is_negative && force_sign) {
        *output_str++ = '-';
    }


    if (align_left == 0) {
        for (i = 0; i < width - total_length; i++) {
            *output_str++ = pad_char;
        }
    }

    if (is_negative && !force_sign) {
        *output_str++ = '-';
    }

    c = number_buffer;
    while (num_string_length > 0) {
        *output_str = *c;
        output_str++;
        c++;
        num_string_length--;
    }

    pad_char = right_pad_char;
    if (align_left != 0) {
        for (i = 0; i < width - total_length; i++) {
            *output_str++ = pad_char;
        }
    }

    force_sign = (width < total_length) ? total_length : width;
    return force_sign;
}

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
        *current = (s64) number % 10 + '0';
        number = (s64) number * 0.1F;
        
        current++, charsWritten++;
    }
    while (number != 0);
    
    while (--current >= string)
    {
        c = (s64) (u32) (s64) (u32) (s64) *string;
         
        *string = *current;
        string++;
        *current = c;
    }
    return charsWritten;
}

// 0x80387540
s32 func_ovl8_80387540(char* str, f32 value, s32 precision) 
{
    s32 written = 0;
    
    written += stringFromNumber(str, value);

    str += written;
    *str++ = '.';
    written++; 
    value -= (f32) (s32) value;
    value *= 10.0F;
    
    precision = (precision != 0) ? precision : 5;
    
    while (precision != 0)
    {
        *str++ = (u32) value + '0';
        written++;
        value = (value - (f32) (s32) value) * 10.0f; 
        precision--;
    }
    
    return written;
}

dbFunction D_ovl8_8038E5A0[] = {
	{0, NULL},
	{0, (sb32(*)()) func_ovl8_803868EC},
	{0, (sb32(*)()) func_ovl8_803762B4},
	{0, (sb32(*)()) func_ovl8_80375528},
	{0, (sb32(*)()) func_ovl8_803755C4},
	{0, (sb32(*)()) func_ovl8_80375864},
	{0, (sb32(*)()) func_ovl8_803762AC},
	{0, (sb32(*)()) func_ovl8_80372A48},
	{0, (sb32(*)()) func_ovl8_80372A94},
	{0, (sb32(*)()) func_ovl8_803764C8},
	{0, (sb32(*)()) func_ovl8_80372D18},
	{0, (sb32(*)()) func_ovl8_80372D70},
	{0, (sb32(*)()) func_ovl8_80372DC8},
	{0, (sb32(*)()) func_ovl8_80372DD8},
	{0, (sb32(*)()) func_ovl8_80372DE8},
	{0, (sb32(*)()) func_ovl8_80372E40},
	{0, (sb32(*)()) func_ovl8_80372FEC},
	{0, (sb32(*)()) func_ovl8_80373044},
	{0, (sb32(*)()) func_ovl8_803866AC},
	{0, (sb32(*)()) func_ovl8_80373118},
	{0, (sb32(*)()) func_ovl8_80373138},
	{0, (sb32(*)()) func_ovl8_803732B0},
	{0, (sb32(*)()) func_ovl8_803868C0},
	{0, NULL},
};

dbFunction D_ovl8_8038E660[] = {
	{0, NULL},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803868EC},
	{0, (sb32(*)()) func_ovl8_803718FC},
	{0, (sb32(*)()) func_ovl8_80371930},
	{0, (sb32(*)()) func_ovl8_80371960},
	{0, (sb32(*)()) func_ovl8_80371968},
	{0, (sb32(*)()) func_ovl8_80371970},
	{0, (sb32(*)()) func_ovl8_80371978},
	{0, (sb32(*)()) func_ovl8_80371980},
	{0, (sb32(*)()) func_ovl8_803719A4},
	{0, (sb32(*)()) func_ovl8_803719C8},
	{0, (sb32(*)()) func_ovl8_80371A2C},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803762B4},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803868C0},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372A94},
	{0, (sb32(*)()) func_ovl8_80371AD8},
	{0, (sb32(*)()) func_ovl8_80371B34},
	{0, (sb32(*)()) func_ovl8_80371B98},
	{0, (sb32(*)()) func_ovl8_80371BCC},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803764C8},
	{0, (sb32(*)()) func_ovl8_80371C2C},
	{(s16)0xFF88, (sb32(*)()) func_ovl8_80372224},
	{0, (sb32(*)()) func_ovl8_80371C8C},
	{(s16)0xFF88, (sb32(*)()) func_ovl8_80372358},
	{0, (sb32(*)()) func_ovl8_80371D00},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372D70},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372DC8},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372D18},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372DD8},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80373118},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80373138},
	{0, (sb32(*)()) func_ovl8_80371DE4},
	{0, (sb32(*)()) func_ovl8_80371DEC},
	{0, (sb32(*)()) func_ovl8_80371DF4},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80372DE8},
	{0, (sb32(*)()) func_ovl8_80371E04},
	{0, (sb32(*)()) func_ovl8_80371E0C},
	{0, (sb32(*)()) func_ovl8_80371E14},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803732B0},
	{0, (sb32(*)()) func_ovl8_80371E24},
	{0, (sb32(*)()) func_ovl8_80371E2C},
	{0, (sb32(*)()) func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_8038E7B8[] = {
	{0, NULL},
	{(s16)0xFEF4, (sb32(*)()) func_ovl8_803868EC},
	{(s16)0xFEF4, (sb32(*)()) func_ovl8_803866AC},
	{0, (sb32(*)()) func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_8038E7E0[] = {
	{0, NULL},
	{(s16)0xFFC8, (sb32(*)()) func_ovl8_803868EC},
	{(s16)0xFFC8, (sb32(*)()) func_ovl8_803762B4},
	{0, (sb32(*)()) func_ovl8_803721E8},
	{0, (sb32(*)()) func_ovl8_80372224},
	{0, (sb32(*)()) func_ovl8_80372250},
	{0, (sb32(*)()) func_ovl8_803722A0},
	{0, (sb32(*)()) func_ovl8_803722F0},
	{0, (sb32(*)()) func_ovl8_80372348},
	{0, (sb32(*)()) func_ovl8_80372358},
	{0, (sb32(*)()) func_ovl8_80372360},
	{0, NULL},
};

dbFunction D_ovl8_8038E840[] = {
	{0, NULL},
	{0, (sb32(*)()) func_ovl8_80386AFC},
	{0, (sb32(*)()) func_ovl8_803762B4},
	{0, (sb32(*)()) func_ovl8_80375528},
	{0, (sb32(*)()) func_ovl8_803755C4},
	{0, (sb32(*)()) func_ovl8_80375864},
	{0, (sb32(*)()) func_ovl8_803762AC},
	{0, (sb32(*)()) func_ovl8_80372A48},
	{0, (sb32(*)()) func_ovl8_80372A94},
	{0, (sb32(*)()) func_ovl8_803764C8},
	{0, (sb32(*)()) func_ovl8_80372D18},
	{0, (sb32(*)()) func_ovl8_80372D70},
	{0, (sb32(*)()) func_ovl8_80372DC8},
	{0, (sb32(*)()) func_ovl8_80372DD8},
	{0, (sb32(*)()) func_ovl8_80372DE8},
	{0, (sb32(*)()) func_ovl8_80372E40},
	{0, (sb32(*)()) func_ovl8_80372FEC},
	{0, (sb32(*)()) func_ovl8_80373044},
	{0, (sb32(*)()) func_ovl8_803866AC},
	{0, (sb32(*)()) func_ovl8_80373118},
	{0, (sb32(*)()) func_ovl8_80373138},
	{0, (sb32(*)()) func_ovl8_803732B0},
	{0, (sb32(*)()) func_ovl8_803868C0},
	{0, NULL},
};

dbFunction D_ovl8_8038E900[] = {
	{0, NULL},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80386AFC},
	{0, (sb32(*)()) func_ovl8_803718FC},
	{0, (sb32(*)()) func_ovl8_80371930},
	{0, (sb32(*)()) func_ovl8_80371960},
	{0, (sb32(*)()) func_ovl8_80371968},
	{0, (sb32(*)()) func_ovl8_80371970},
	{0, (sb32(*)()) func_ovl8_80371978},
	{0, (sb32(*)()) func_ovl8_80371980},
	{0, (sb32(*)()) func_ovl8_803719A4},
	{0, (sb32(*)()) func_ovl8_803719C8},
	{0, (sb32(*)()) func_ovl8_80371A2C},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_803762B4},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_803868C0},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372A94},
	{0, (sb32(*)()) func_ovl8_80371AD8},
	{0, (sb32(*)()) func_ovl8_80371B34},
	{0, (sb32(*)()) func_ovl8_80371B98},
	{0, (sb32(*)()) func_ovl8_80371BCC},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_803764C8},
	{0, (sb32(*)()) func_ovl8_80371C2C},
	{(s16)0xFF7C, (sb32(*)()) func_ovl8_80372224},
	{0, (sb32(*)()) func_ovl8_80371C8C},
	{(s16)0xFF7C, (sb32(*)()) func_ovl8_80372358},
	{0, (sb32(*)()) func_ovl8_80371D00},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372D70},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372DC8},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372D18},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372DD8},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80373118},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80373138},
	{0, (sb32(*)()) func_ovl8_80371DE4},
	{0, (sb32(*)()) func_ovl8_80371DEC},
	{0, (sb32(*)()) func_ovl8_80371DF4},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_80372DE8},
	{0, (sb32(*)()) func_ovl8_80371E04},
	{0, (sb32(*)()) func_ovl8_80371E0C},
	{0, (sb32(*)()) func_ovl8_80371E14},
	{(s16)0xFF44, (sb32(*)()) func_ovl8_803732B0},
	{0, (sb32(*)()) func_ovl8_80371E24},
	{0, (sb32(*)()) func_ovl8_80371E2C},
	{0, (sb32(*)()) func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_8038EA58[] = {
	{0, NULL},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_80386AFC},
	{(s16)0xFF50, (sb32(*)()) func_ovl8_803866AC},
	{0, (sb32(*)()) func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_8038EA80[] = {
	{0, NULL},
	{(s16)0xFFC8, (sb32(*)()) func_ovl8_80386AFC},
	{(s16)0xFFC8, (sb32(*)()) func_ovl8_803762B4},
	{0, (sb32(*)()) func_ovl8_803721E8},
	{0, (sb32(*)()) func_ovl8_80372224},
	{0, (sb32(*)()) func_ovl8_80372250},
	{0, (sb32(*)()) func_ovl8_803722A0},
	{0, (sb32(*)()) func_ovl8_803722F0},
	{0, (sb32(*)()) func_ovl8_80372348},
	{0, (sb32(*)()) func_ovl8_80372358},
	{0, (sb32(*)()) func_ovl8_80372360},
	{0, NULL},
};

} // extern "C"
