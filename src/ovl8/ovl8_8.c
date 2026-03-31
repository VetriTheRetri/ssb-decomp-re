#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>

s32 func_ovl8_8037A6D4(db4Shorts *rect1, db4Shorts *rect2, db4Shorts *intersection);
void func_ovl8_8037AA88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, dbUnknown7* arg4);

typedef struct dbUnknown8_SC {
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s32 dbUnknown8_SC_0x8;
} dbUnknown8_SC;

typedef struct UiLineStepper {
    s32 startX;                 // dbUnknown8_8_0x0
    s32 startY;                 // dbUnknown8_8_0x4

    s32* errorSub;              // dbUnknown8_8_0x8   (usually dx or dy)
    s32* errorAdd;              // dbUnknown8_8_0xC   (usually 2*minor)

    s32 endX;                   // dbUnknown8_8_0x10
    s32 endY;                   // dbUnknown8_8_0x14

    s32* stepPrimary;           // dbUnknown8_8_0x18  (dx or dy)
    s32* stepSecondary;         // dbUnknown8_8_0x1C  (other axis)

    s32 currentX;               // dbUnknown8_8_0x20
    s32 currentY;               // dbUnknown8_8_0x24

    s32* posPrimary;            // dbUnknown8_8_0x28  (&currentX or &currentY)
    s32* posSecondary;          // dbUnknown8_8_0x2C  (&currentY or &currentX)

    s32 stepsRemaining;         // dbUnknown8_8_0x30
    s32 totalSteps;             // dbUnknown8_8_0x34

    s32 error;                  // dbUnknown8_8_0x38
} UiLineStepper;

void func_ovl8_80377B40(Sprite*, s16*);
void func_ovl8_80377F50(Sprite*, db4Shorts*);
void func_ovl8_80377FE4(Sprite*, db4Shorts*, db4Shorts*);
void func_ovl8_803780B8(Sprite*, DBMenuPosition*);
s32 func_ovl8_8037A67C(s16*, s16*, s16*);
void func_ovl8_80379070(u8*, s32, Bitmap*, s16, DBMenuPosition*);
void func_ovl8_80379D74(u8*, s32, Bitmap*, s16, DBMenuPosition*);
void func_ovl8_8037A904(db4Shorts*, db4Shorts*);
void func_ovl8_8037A9C0(db4Shorts*, s32, s32);
void func_ovl8_8037A9F4(DBMenuPosition*, DBMenuPosition*);
void func_ovl8_8037AA28(db4Shorts*, db4Shorts*);
s32 func_ovl8_8037AA5C(DBMenuPosition*);
s32 func_ovl8_8037ABDC(Vec2h*, UiLineStepper*);
void func_ovl8_8037B46C(Sprite*, DBMenuPosition*, dbUnknown8_SC*, s32); 
void func_ovl8_8037BD44();
void func_ovl8_8037BEC8();
void func_ovl8_8037BF34();
void* func_ovl8_8037BDF4(GObj*);
void* func_ovl8_8037BD94(GObj*);

// BSS
extern s32 D_ovl8_8038EE60;
extern s32 D_ovl8_8038EE64;
extern s32 D_ovl8_8038EE68[];
extern s32 D_ovl8_8038EE70[];
extern Gfx D_8038EE90_1AB6E0[];
extern s32 D_ovl8_80389F70;

// DATA
s32 D_ovl8_80387CA0[] = { 0xDF000000, 0x00000000 };
s32 D_ovl8_80387CA8[]  =
{
	0xFC00FC00, 0xFC00FFFF, 0xFFFFFC40, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FC00, 0x0001FFFF,
	0xFC40FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0xFFFFFC40,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x0001FFFF, 0x00010001,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0xFFFFFC40, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0xFC00FC00, 0x0001FFFF, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0x00010001, 0xFFFFFC40, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0x0001FFFF, 0x00010001, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0x00010001,
	0x00010001, 0x00010001, 0xFFFFFC40, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0x00010001, 0x00010001,
	0xFFFFFFFF, 0x0001FFFF, 0xFC40FC00, 0xFFFFFFFF,
	0xFC00FC00, 0xFC00FFFF, 0x00010001, 0xFFFF0001,
	0x0001FFFF, 0xFC40FC00, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FFFF, 0x0001FFFF,
	0xFFFFFC40, 0x00010001, 0xFC00FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FFFF, 0xFFFFFC40, 0xFC00FFFF,
	0x00010001, 0xFFFFFC40, 0xFC00FC00, 0xFC00FC00,
	0xFC00FFFF, 0xFC40FC00, 0xFC00FC00, 0xFC00FC00,
	0x0001FFFF, 0xFFFF0001, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFFFF0001, 0x0001FFFF, 0xFC40FC00, 0xFC00FC00,
	0xFC00FC00, 0xFC00FC00, 0xFC00FC00, 0xFC00FC00,
	0xFFFFFFFF, 0xFC40FFFF, 0xFC40FC00, 0xFC00FC00
};

Bitmap D_ovl8_80387EA8 =
{
	16, 16,
	0, 0,
	D_ovl8_80387CA8,
	16, 0
};

Sprite D_ovl8_80387EB8 =
{
	0, 0,
	16, 16,
	1.0, 1.0,
	0, 0,
	0x200,
	0x1234,
	0xff, 0xff, 0xff, 0xff,
	0, 0,
	NULL,
	0, 1,
	1, 0x24,
	16, 16,
	G_IM_FMT_RGBA,
	G_IM_SIZ_16b,
	&D_ovl8_80387EA8,
	D_8038EE90_1AB6E0,
	NULL,
	0, 0
};

s32 D_ovl8_80387EFC = 0;

char D_ovl8_80387F00[] = "1";
char D_ovl8_80387F04[] = "2";
char D_ovl8_80387F08[] = "3";
char D_ovl8_80387F0C[] = "4";
char D_ovl8_80387F10[] = "5";
char D_ovl8_80387F14[] = "6";
char D_ovl8_80387F18[] = "7";
char D_ovl8_80387F1C[] = "8";
char D_ovl8_80387F20[] = "9";
char D_ovl8_80387F24[] = "0";
char D_ovl8_80387F28[] = ".";
char D_ovl8_80387F2C[] = "OK";
char D_ovl8_80387F30[] = "No";
char D_ovl8_80387F34[] = "B";
char D_ovl8_80387F38[] = "Caption";

extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;
extern dbUnknown8_SC* D_ovl8_80389FB4;
extern dbUnknown8_SC* D_ovl8_8038A068;
extern DBMenu D_ovl8_8038A11C;
extern GObj *D_8038EFC0_1AB810;
extern dbUnkStruct *D_8038EFC4_1AB814;
extern dbUnknownLinkStruct* D_8038EFC8_1AB818;
extern dbTestMenu* D_8038EFCC_1AB81C;
extern dbUnknown8_S28 D_ovl8_8038A144;
extern s16 D_ovl8_80389F30;
extern s16 D_ovl8_80389F34;
extern s16 D_ovl8_80389F38;
extern s16 D_ovl8_80389F3C;
extern s16 D_ovl8_80389F40;
extern s16 D_ovl8_80389F44;

extern DBMenu D_ovl8_80389F68;

// 0x80376B60
void func_ovl8_80376B60(s32 arg0, u8* arg1, u32* arg2)
{
	switch (arg0)
	{
	case 1:
		*arg2 = (u32) arg1;
		return;
	case 2:
		*arg2 = ((u32)arg1[0] << 8) & 0xF800;
		*arg2 |= (((u32)arg1[1] * 8) & 0x7C0);
		*arg2 |= (((u32)arg1[2] >> 2) & 0x3E);
		*arg2 |= arg1[3] ? 1 : 0;
		return;
	case 3:
		*arg2 = ((u32)arg1[0] << 24) & 0xFF000000;
		*arg2 |= (((u32)arg1[1] << 16) & 0xFF0000);
		*arg2 |= (((u32)arg1[2] << 8) & 0xFF00);
		*arg2 |= (((u32)arg1[3] << 0) & 0xFF);
		return;
	}
}

// 0x80376C40
void func_ovl8_80376C40(s32 arg0, u32 arg1, u8* arg2)
{
	u32 var_v0;
	switch (arg0)
	{
	case 2:
		arg2[0] = (u32) (((f32) ((arg1 >> 0xB) & 0x1F) / 31.0) * 255.0);
		arg2[1] = (u32) (((f32) ((arg1 >> 6) & 0x1F) / 31.0) * 255.0);
		arg2[2] = (u32) (((f32) ((arg1 >> 1) & 0x1F) / 31.0) * 255.0);
		if (arg1 & 1)
			var_v0 = 0x255;
		else
			var_v0 = 0;
		arg2[3] = var_v0;
		return;
	case 3:
		arg2[0] = (arg1 >> 24) & 0xFF;
		arg2[1] = (arg1 >> 16) & 0xFF;
		arg2[2] = (arg1 >> 8) & 0xFF;
		arg2[3] = (arg1 >> 0) & 0xFF;
		return;
	}
}

// 0x80376EE0
void func_ovl8_80376EE0(u8* arg0, u8* arg1, s32 arg2)
{
	f64 temp_f0;

	temp_f0 = (f64) arg2;
	arg1[0] = (s32) (((f32) arg0[0] / 100.0) * temp_f0);
	arg1[1] = (s32) (((f32) arg0[1] / 100.0) * temp_f0);
	arg1[2] = (s32) (((f32) arg0[2] / 100.0) * temp_f0);
	arg1[3] = arg0[3];
}

// 0x80376FB4
s32 func_ovl8_80376FB4()
{
	return 2;
}

// 0x80376FBC
s32 stringLength(char* string)
{
	s32 length;

	if (string == NULL)
		return 0;

	for (length = 0; *string != '\0'; string++, length++);
	return length;
}

// 0x80376FFC
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

// 0x80377044
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

// 0x8037709C
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

// 0x80377108 Some sort of fill function
void func_ovl8_80377108(char *dest, int value, int count)
{ 
    char * pos; 
    pos = count--;
    if(pos != 0){
        pos--;
        do {
            pos = dest;
            dest++; *pos = value;
        } while(count--); 
    } 
}


// 0x80377134
void func_ovl8_80377134(u8* arg0, s32 arg1)
{
	func_ovl8_80376B60(arg1, arg0, &D_ovl8_80389F64);
}

// 0x80377168
s32 func_ovl8_80377168(db2Shorts arg0, DBMenuPosition* arg1)
{
	if ((arg0.arr[0] >= arg1->x) && (arg0.arr[0] < (arg1->x + arg1->w)))
	{
		if ((arg0.arr[1] >= arg1->y) && (arg0.arr[1] < (arg1->y + arg1->h)))
		{
			return 1;
		}
	}

	return 0;
}

// 0x803771CC
void func_ovl8_803771CC(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
	arg1->x = arg0->x;
	arg1->y = arg0->y;
	arg1->w = arg1->x + arg0->w - 1;
	arg1->h = arg1->y + arg0->h - 1;
}

// 0x80377208
void func_ovl8_80377208(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
	arg1->x = arg0->x;
	arg1->y = arg0->y;
	arg1->w = (s16)arg0->w - arg0->x + 1;
	arg1->h = (s16)arg0->h - arg0->y + 1;
}

// 0x80377244
u32 func_ovl8_80377244()
{
	return func_ovl8_8037D28C() | gSYControllerMain.button_hold;
}

// 0x8037726C
void func_ovl8_8037726C(db2Shorts *arg0)
{
	func_ovl8_80375BB4(arg0);
}

// 0x8037728C
void func_ovl8_8037728C(Vec2h* arg0)
{
	func_ovl8_80375BD0(arg0);
}

// 0x803772AC
void func_ovl8_803772AC(dbUnknown5* arg0)
{
	DBMenu sp20;
	s16 arg1, arg2;
	dbFunction* db_func;

	func_ovl8_80374A54(arg0, &sp20);

	db_func = arg0->db_func;
	arg1 = 160 - (sp20.position.w / 2);
	arg2 = 120 - (sp20.position.h / 2);
	db_func[10].unk_dbfunc_0x4(db_func[10].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, arg2);
}

// 0x80377330
void func_ovl8_80377330(dbUnknown5* arg0, s16 arg1, s16 arg2)
{
	dbFunction* db_func;

	db_func = arg0->db_func;
	db_func[10].unk_dbfunc_0x4(db_func[10].unk_dbfunc_0x0 + (uintptr_t)arg0, arg1, arg2);
}

// 0x80377374
void func_ovl8_80377374(DBMenuPosition *arg0) 
{
    if (arg0 != NULL) 
    {
        D_ovl8_80389F68.position = *arg0;
    }
    else
    {
        D_ovl8_80389F68.position.x = D_ovl8_80389F68.position.y = 0;
        D_ovl8_80389F68.position.w = D_ovl8_80389F68.position.h = 32767;
    }
}

// 0x803773CC
void func_ovl8_803773CC(Bitmap* arg0, s16 arg1, db4Shorts* arg2)
{
    s16 row;
    s16 col;
    s16 width_img;
    s32 mode;
    s32 odd;
    u8 *pixAddr8;
    u16 *pixAddr16;
    u32 *pixAddr32;
    u8 color8;
    u8 readColor8;
    u16 color16;
    u16 readColor16;
    u32 color32;
    u32 readColor32;

    width_img = arg0->width_img;

    switch (arg1)
    {
    case 1:
        for (row = 0; row < arg2->uarr[3]; row++)
        {
            for (col = 0; col < arg2->uarr[2]; col++)
            {
                s32 rowCoord;
                mode = D_ovl8_80389F60;

                if (mode == 4)
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;
                    color8 = (u8)D_ovl8_80389F5C;
                    pixAddr8 = (u8*)arg0->buf + rowCoord * width_img + arg2->arr[0] + col;
                }
                else
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;

                    if (odd != 0)
                    {
                        s32 colCoord = arg2->arr[0] + col;
                        if (colCoord & 4)
                        {
                            pixAddr8 = (u8*)arg0->buf + rowCoord * width_img + arg2->arr[0] + col;
                            readColor8 = pixAddr8[-4];
                        }
                        else
                        {
                            pixAddr8 = (u8*)arg0->buf + rowCoord * width_img + arg2->arr[0] + col;
                            color8 = pixAddr8[4];
                            readColor8 = color8;
                        }
                    }
                    else
                    {
                        pixAddr8 = (u8*)arg0->buf + rowCoord * width_img + arg2->arr[0] + col;
                        readColor8 = pixAddr8[0];
                    }

                    if (mode == 2)
                    {
                        color8 = (readColor8 | (u32)D_ovl8_80389F5C) & 0xFF;
                    }
                    else if (mode == 1)
                    {
                        color8 = (readColor8 ^ (u32)D_ovl8_80389F5C) & 0xFF;
                    }
                }

                if (odd != 0)
                {
                    s32 colCoord = arg2->arr[0] + col;
                    if (colCoord & 4)
                    {
                        pixAddr8[-4] = color8;
                        *((u8*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img + arg2->arr[0] + col) - 4) = color8;
                        *((u8*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img + arg2->arr[0] + col) - 4) = color8;
                    }
                    else
                    {
                        pixAddr8[4] = color8;
                        *((u8*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img + arg2->arr[0] + col) + 4) = color8;
                    }
                }
                else
                {
                    pixAddr8[0] = color8;
                }
            }
        }
        break;

    case 2:
        for (row = 0; row < arg2->uarr[3]; row++)
        {
            for (col = 0; col < arg2->uarr[2]; col++)
            {
                s32 rowCoord;
                s16 col2;
                mode = D_ovl8_80389F60;

                col2 = col;

                if (mode == 4)
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;
                    color16 = (u16)D_ovl8_80389F5C;
                    pixAddr16 = (u16*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 2 + col2 * 2);
                }
                else
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;

                    if (odd != 0)
                    {
                        s32 colCoord = arg2->arr[0] + col;
                        if (colCoord & 2)
                        {
                            pixAddr16 = (u16*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 2 + col2 * 2);
                            readColor16 = pixAddr16[-2];
                        }
                        else
                        {
                            pixAddr16 = (u16*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 2 + col2 * 2);
                            color16 = pixAddr16[2];
                            readColor16 = color16;
                        }
                    }
                    else
                    {
                        pixAddr16 = (u16*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 2 + col2 * 2);
                        readColor16 = pixAddr16[0];
                    }

                    if (mode == 2)
                    {
                        color16 = (readColor16 | (u32)D_ovl8_80389F5C) & 0xFFFF;
                    }
                    else if (mode == 1)
                    {
                        color16 = (readColor16 ^ (u32)D_ovl8_80389F5C) & 0xFFFF;
                    }
                }

                if (odd != 0)
                {
                    s32 colCoord = arg2->arr[0] + col;
                    if (colCoord & 2)
                    {
                        pixAddr16[-2] = color16;
                        *(u16*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 2 + arg2->arr[0] * 2 + col2 * 2 - 4) = color16;
                        *(u16*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 2 + arg2->arr[0] * 2 + col2 * 2 - 4) = color16;
                    }
                    else
                    {
                        pixAddr16[2] = color16;
                        *(u16*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 2 + arg2->arr[0] * 2 + col2 * 2 + 4) = color16;
                    }
                }
                else
                {
                    pixAddr16[0] = color16;
                }
            }
        }
        break;

    case 3:
        for (row = 0; row < arg2->uarr[3]; row++)
        {
            for (col = 0; col < arg2->uarr[2]; col++)
            {
                s32 rowCoord;
                s16 col2;
                mode = D_ovl8_80389F60;

                col2 = col;

                if (mode == 4)
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;
                    color32 = D_ovl8_80389F5C;
                    pixAddr32 = (u32*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 4 + col2 * 4);
                }
                else
                {
                    rowCoord = arg2->arr[1] + row;
                    odd = rowCoord & 1;

                    if (odd != 0)
                    {
                        s32 colCoord = arg2->arr[0] + col;
                        if (colCoord & 2)
                        {
                            pixAddr32 = (u32*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 4 + col2 * 4);
                            readColor32 = pixAddr32[-2];
                        }
                        else
                        {
                            pixAddr32 = (u32*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 4 + col2 * 4);
                            color32 = pixAddr32[2];
                            readColor32 = color32;
                        }
                    }
                    else
                    {
                        pixAddr32 = (u32*)((u8*)arg0->buf + (rowCoord * width_img + arg2->arr[0]) * 4 + col2 * 4);
                        readColor32 = pixAddr32[0];
                    }

                    if (mode == 2)
                    {
                        color32 = readColor32 | (u32)D_ovl8_80389F5C;
                    }
                    else if (mode == 1)
                    {
                        color32 = readColor32 ^ (u32)D_ovl8_80389F5C;
                    }
                }

                if (odd != 0)
                {
                    s32 colCoord = arg2->arr[0] + col;
                    if (colCoord & 2)
                    {
                        pixAddr32[-2] = color32;
                        *(u32*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 4 + arg2->arr[0] * 4 + col2 * 4 - 8) = color32;
                        *(u32*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 4 + arg2->arr[0] * 4 + col2 * 4 - 8) = color32;
                    }
                    else
                    {
                        pixAddr32[2] = color32;
                        *(u32*)((u8*)arg0->buf + (arg2->arr[1] + row) * width_img * 4 + arg2->arr[0] * 4 + col2 * 4 + 8) = color32;
                    }
                }
                else
                {
                    pixAddr32[0] = color32;
                }
            }
        }
        break;
    }
}

// 0x80377AEC
void func_ovl8_80377AEC(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377B40(arg0, arg1);
}

// 0x80377B40
void func_ovl8_80377B40(Sprite *arg0, s16 *arg1) 
{
    DBMenuPosition sp90;
    db4Shorts sp88;
    db4Shorts sp80;
    s16 actualWidth;
    s32 i;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 x;
    s32 y;
    s32 cols;
    s32 rows;
    s32 actualHeight;
    s32 j;
    s32 var_v1;

    sp80.arr[0] = sp80.arr[1] = 0;
    sp80.arr[2]  = arg0->width;
    sp80.arr[3]  = arg0->height;
    func_ovl8_8037A67C(arg1, &sp80, &sp90);
    
    if (func_ovl8_8037AA5C(&sp90) == 0) 
    {
        actualWidth = arg0->bitmap->width;
        actualHeight = arg0->bitmap->actualHeight;
        cols = sp90.x / actualWidth;
        rows = sp90.y / actualHeight;
        
        var_v1 = ((arg0->width % actualWidth) != 0) ? 1 : 0;
        sp6C = (arg0->width / actualWidth) + var_v1;
        
        var_v1 = ((sp90.w % actualWidth) != 0) ? 1 : 0;
        sp74 = (sp90.w / actualWidth) + var_v1 + 1;
        
        var_v1 = ((sp90.h % actualHeight) != 0) ? 1 : 0;
        sp70 = (sp90.h / actualHeight) + var_v1 + 1;
        
        for (i = 0; i < sp70; i++) 
        {
            for (j = 0; j < sp74; j++) 
            {
                x = cols + j;
                x *= actualWidth;
                
                y = rows + i;
                y *= actualHeight;

                sp88.arr[0] = x;
                sp88.arr[1] = y;
                sp88.arr[2] = actualWidth;
                sp88.arr[3] = actualHeight;
                if (func_ovl8_8037A67C(&sp88, &sp90, &sp80) != 0) 
                {
                    sp80.arr[0] %= actualWidth;
                    sp80.arr[1] %= actualHeight;
                    func_ovl8_803773CC(arg0->bitmap + ((rows + i) * sp6C) + j + cols, arg0->bmsiz, &sp80);
                }
            }
        }
    }
}

// 0x80377EFC
void func_ovl8_80377EFC(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_80377F50(arg0, arg1);
}

// 0x80377F50
void func_ovl8_80377F50(Sprite* arg0, db4Shorts* arg1)
{
	db4Shorts sp18;

	sp18.arr[0] = arg1->arr[0];
	sp18.arr[1] = arg1->arr[1];
	sp18.arr[2] = sp18.arr[3] = 1;
	func_ovl8_80377B40(arg0, &sp18);
}

// 0x80377F90
void func_ovl8_80377F90(char* arg0, db4Shorts* arg1, s32 arg2, u8* arg3, s32 arg4)
{
	func_ovl8_80376B60(arg0[0x31], arg3, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg4;
	func_ovl8_80377FE4(arg0, arg1, arg2);
}

// 0x80377FE4
void func_ovl8_80377FE4(Sprite* arg0, db4Shorts* arg1, db4Shorts* arg2)
{
	s32 temp_s0;
	s32 unused[12];
	db4Shorts sp3C;
	db4Shorts sp34;

	func_ovl8_8037AA88(arg1->arr[0], arg1->arr[1], arg2->arr[0], arg2->arr[1], &sp3C);

	do
	{
		temp_s0 = func_ovl8_8037ABDC(&sp34, &sp3C);
		func_ovl8_80377F50(arg0, &sp34);
	}
	while (temp_s0 > 0);
}

// 0x80378064
void func_ovl8_80378064(Sprite* arg0, db4Shorts* arg1, u8* arg2, s32 arg3)
{
	func_ovl8_80376B60(arg0->bmsiz, arg2, &D_ovl8_80389F5C);
	D_ovl8_80389F60 = arg3;
	func_ovl8_803780B8(arg0, arg1);
}

// 0x803780B8
void func_ovl8_803780B8(Sprite* arg0, DBMenuPosition* arg1)
{
	DBMenuPosition sp20;

	sp20.x = arg1->x;
	sp20.y = arg1->y;
	sp20.w = arg1->w;
	sp20.h = 1;
	func_ovl8_80377B40(arg0, &sp20);

	sp20.x = arg1->x;
	sp20.y = arg1->y + arg1->h - 1;
	sp20.w = arg1->w;
	sp20.h = 1;
	func_ovl8_80377B40(arg0, &sp20);

	sp20.x = arg1->x;
	sp20.y = arg1->y;
	sp20.w = 1;
	sp20.h = arg1->h;
	func_ovl8_80377B40(arg0, &sp20);

	sp20.x = arg1->x + arg1->w - 1;
	sp20.y = arg1->y;
	sp20.w = 1;
	sp20.h = arg1->h;
	func_ovl8_80377B40(arg0, &sp20);
}

// 0x803781A4
void func_ovl8_803781A4(s32 bmsiz, Bitmap *src, Bitmap *dst, db4Shorts *srcRect, db4Shorts *dstRect)
{
    u16 w;
    u16 h;
    s16 srcStride;
    s16 dstStride;
    s32 row;
    s32 col;
    u32 pixel;
    s32 srcY, dstY;
    s16 srcX, dstX;

    w = srcRect->uarr[2];
    h = srcRect->uarr[3];
    srcStride = src->width_img;
    dstStride = dst->width_img;

    switch (bmsiz)
    {
    case 1:
        if (h <= 0) break;
        for (row = 0; row < h; row++)
        {
            if (w <= 0) continue;
            for (col = 0; col < w; col++)
            {
                srcY = srcRect->arr[1] + row;
                if (srcY & 1)
                {
                    srcX = srcRect->arr[0];
                    if ((srcX + col) & 4)
                    {
                        pixel = *((u8 *)src->buf + srcY * srcStride + srcX + col - 4);
                    }
                    else
                    {
                        pixel = *((u8 *)src->buf + srcY * srcStride + srcX + col + 4);
                    }
                }
                else
                {
                    pixel = *((u8 *)src->buf + srcY * srcStride + srcRect->arr[0] + col);
                }

                dstY = dstRect->arr[1] + row;
                if (dstY & 1)
                {
                    dstX = dstRect->arr[0];
                    if ((dstX + col) & 4)
                    {
                        *((u8 *)dst->buf + dstY * dstStride + dstX + col - 4) = pixel;
                        *((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride + dstRect->arr[0] + col - 4) = pixel;
                        *((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride + dstRect->arr[0] + col - 4) = pixel;
                    }
                    else
                    {
                        *((u8 *)dst->buf + dstY * dstStride + dstX + col + 4) = pixel;
                        *((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride + dstRect->arr[0] + col + 4) = pixel;
                    }
                }
                else
                {
                    *((u8 *)dst->buf + dstY * dstStride + dstRect->arr[0] + col) = pixel;
                }
            }
        }
        break;
    case 2:
        if (h <= 0) break;
        for (row = 0; row < h; row++)
        {
            if (w <= 0) continue;
            for (col = 0; col < w; col++)
            {
                srcY = srcRect->arr[1] + row;
                if (srcY & 1)
                {
                    srcX = srcRect->arr[0];
                    if ((srcX + col) & 2)
                    {
                        pixel = *(u16 *)((u8 *)src->buf + srcY * srcStride * 2 + srcX * 2 + col * 2 - 4);
                    }
                    else
                    {
                        pixel = *(u16 *)((u8 *)src->buf + srcY * srcStride * 2 + srcX * 2 + col * 2 + 4);
                    }
                }
                else
                {
                    pixel = *(u16 *)((u8 *)src->buf + srcY * srcStride * 2 + srcRect->arr[0] * 2 + col * 2);
                }

                dstY = dstRect->arr[1] + row;
                if (dstY & 1)
                {
                    dstX = dstRect->arr[0];
                    if ((dstX + col) & 2)
                    {
                        *(u16 *)((u8 *)dst->buf + dstY * dstStride * 2 + dstX * 2 + col * 2 - 4) = pixel;
                        *(u16 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 2 + dstRect->arr[0] * 2 + col * 2 - 4) = pixel;
                        *(u16 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 2 + dstRect->arr[0] * 2 + col * 2 - 4) = pixel;
                    }
                    else
                    {
                        *(u16 *)((u8 *)dst->buf + dstY * dstStride * 2 + dstX * 2 + col * 2 + 4) = pixel;
                        *(u16 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 2 + dstRect->arr[0] * 2 + col * 2 + 4) = pixel;
                    }
                }
                else
                {
                    *(u16 *)((u8 *)dst->buf + dstY * dstStride * 2 + dstRect->arr[0] * 2 + col * 2) = pixel;
                }
            }
        }
        break;
    case 3:
        if (h <= 0) break;
        for (row = 0; row < h; row++)
        {
            if (w <= 0) continue;
            for (col = 0; col < w; col++)
            {
                srcY = srcRect->arr[1] + row;
                if (srcY & 1)
                {
                    srcX = srcRect->arr[0];
                    if ((srcX + col) & 2)
                    {
                        pixel = *(u32 *)((u8 *)src->buf + srcY * srcStride * 4 + srcX * 4 + col * 4 - 8);
                    }
                    else
                    {
                        pixel = *(u32 *)((u8 *)src->buf + srcY * srcStride * 4 + srcX * 4 + col * 4 + 8);
                    }
                }
                else
                {
                    pixel = *(u32 *)((u8 *)src->buf + srcY * srcStride * 4 + srcRect->arr[0] * 4 + col * 4);
                }

                dstY = dstRect->arr[1] + row;
                if (dstY & 1)
                {
                    dstX = dstRect->arr[0];
                    if ((dstX + col) & 2)
                    {
                        *(u32 *)((u8 *)dst->buf + dstY * dstStride * 4 + dstX * 4 + col * 4 - 8) = pixel;
                        *(u32 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 4 + dstRect->arr[0] * 4 + col * 4 - 8) = pixel;
                        *(u32 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 4 + dstRect->arr[0] * 4 + col * 4 - 8) = pixel;
                    }
                    else
                    {
                        *(u32 *)((u8 *)dst->buf + dstY * dstStride * 4 + dstX * 4 + col * 4 + 8) = pixel;
                        *(u32 *)((u8 *)dst->buf + (dstRect->arr[1] + row) * dstStride * 4 + dstRect->arr[0] * 4 + col * 4 + 8) = pixel;
                    }
                }
                else
                {
                    *(u32 *)((u8 *)dst->buf + dstY * dstStride * 4 + dstRect->arr[0] * 4 + col * 4) = pixel;
                }
            }
        }
        break;
    default:
        break;
    }
}

// 0x803787C0
void func_ovl8_803787C0(Sprite *src, Sprite *dst, DBMenuPosition *srcPos, db2Shorts *dstOffset)
{
    db2Shorts srcOff;           // sp+0x6C
    DBMenuPosition srcRect;     // sp+0xC0
    DBMenuPosition clipRect;    // sp+0xD0 (s3)
    DBMenuPosition dstRect;     // sp+0xC8
    DBMenuPosition dstTileRect; // sp+0xE0
    DBMenuPosition srcTileRect; // sp+0xD8 (s2 after reassign)
    s32 dstBmW;                 // sp+0xA8
    s32 dstBmH;                 // sp+0xA4
    s32 dstTileX0;              // sp+0xA0 = srcOff.x / dstBmW
    s32 dstTileY0;              // sp+0x9C = srcOff.y / dstBmH
    s32 dstTilesPerRow;         // sp+0xAC = CEILDIV(dst->width, dstBmW)
    s32 srcTileX0;              // sp+0x7C = srcRect.x / srcBmW
    s32 srcTileY0;              // sp+0x78 = srcRect.y / srcBmH
    s32 srcTilesPerRow;         // sp+0x88 = CEILDIV(src->width, srcBmW)
    s32 outerTilesX;            // sp+0xB4 = CEILDIV(dstRect.w, dstBmW) + 1
    s32 outerTilesY;            // sp+0xB0 = CEILDIV(dstRect.h, dstBmH) + 1
    s32 innerTilesX;            // sp+0x90 = CEILDIV(dstRect.w, srcBmW) + 1
    s32 innerTilesY;            // sp+0x8C = CEILDIV(dstRect.h, srcBmH) + 1
    s16 srcBmW;                 // s5
    s16 srcBmH;                 // s7
    s32 dstPixelX;              // sp+0x64
    s32 dstTileYIdx;            // sp+0x60
    s32 dstPixelY;              // sp+0x5C
    s32 rowTile;                // sp+0xB8
    s32 colTile;                // fp
    s32 innerY;                 // v0 / sp+0x94
    s32 innerX;                 // s0
    s32 srcPixelX;              // s1
    s32 srcTileYIdx;            // s4
    s32 srcPixelY;              // s6

    srcOff = *dstOffset;
    srcRect = *srcPos;

    clipRect.x = 0;
    clipRect.y = 0;
    clipRect.w = src->width;
    clipRect.h = src->height;

    func_ovl8_8037A67C((s16 *)srcPos, (s16 *)&clipRect, (s16 *)&srcRect);

    srcOff.arr[0] = srcOff.arr[0] + srcRect.x - srcPos->x;
    srcOff.arr[1] = srcOff.arr[1] + srcRect.y - srcPos->y;

    if (func_ovl8_8037AA5C(&srcRect) != 0)
    {
        return;
    }

    clipRect.x = 0;
    clipRect.y = 0;
    clipRect.w = dst->width;
    clipRect.h = dst->height;

    dstRect.x = srcOff.arr[0];
    dstRect.y = srcOff.arr[1];
    dstRect.w = srcRect.w;
    dstRect.h = srcRect.h;

    func_ovl8_8037A67C((s16 *)&clipRect, (s16 *)&dstRect, (s16 *)&dstTileRect);

    srcOff.arr[0] = srcOff.arr[0] + dstTileRect.x - dstRect.x;
    srcOff.arr[1] = srcOff.arr[1] + dstTileRect.y - dstRect.y;

    dstTileRect.x = srcOff.arr[0] - dstOffset->arr[0];
    dstTileRect.y = srcOff.arr[1] - dstOffset->arr[1];

    if (func_ovl8_8037AA5C(&dstTileRect) != 0)
    {
        return;
    }

    dstRect = dstTileRect;
    dstRect.x = srcOff.arr[0];
    dstRect.y = srcOff.arr[1];

    dstBmW = dst->bitmap->width;
    dstBmH = dst->bitmap->actualHeight;

    dstTileX0 = srcOff.arr[0] / dstBmW;
    dstTileY0 = srcOff.arr[1] / dstBmH;

    srcBmW = src->bitmap->width;
    srcBmH = src->bitmap->actualHeight;

    dstTilesPerRow = dst->width / dstBmW + ((dst->width % dstBmW) != 0);

    srcTileX0 = srcRect.x / srcBmW;
    srcTileY0 = srcRect.y / srcBmH;

    srcTilesPerRow = src->width / srcBmW + ((src->width % srcBmW) != 0);

    outerTilesX = dstRect.w / dstBmW + ((dstRect.w % dstBmW) != 0) + 1;
    outerTilesY = dstRect.h / dstBmH + ((dstRect.h % dstBmH) != 0) + 1;

    innerTilesX = dstRect.w / srcBmW + ((dstRect.w % srcBmW) != 0) + 1;
    innerTilesY = dstRect.h / srcBmH + ((dstRect.h % srcBmH) != 0) + 1;

    if (outerTilesY <= 0)
    {
        return;
    }

    for (rowTile = 0; rowTile < outerTilesY; rowTile++)
    {
        colTile = 0;
        if (outerTilesX <= 0)
        {
            goto next_row;
        }

        dstPixelX = dstTileX0 * dstBmW;
        dstTileYIdx = dstTileY0 + rowTile;
        dstPixelY = dstTileYIdx * dstBmH;

        do
        {
            dstTileRect.x = dstPixelX;
            dstTileRect.y = dstPixelY;
            dstTileRect.w = dstBmW;
            dstTileRect.h = dstBmH;

            if (innerTilesY <= 0)
            {
                goto next_col;
            }

            innerY = 0;
            do
            {
                innerX = 0;
                if (innerTilesX <= 0)
                {
                    goto next_innerY;
                }

                srcPixelX = srcTileX0 * srcBmW;
                srcTileYIdx = srcTileY0 + innerY;
                srcPixelY = srcTileYIdx * srcBmH;

                do
                {
                    srcTileRect.x = srcPixelX + srcOff.arr[0] - srcRect.x;
                    srcTileRect.y = srcPixelY + srcOff.arr[1] - srcRect.y;
                    srcTileRect.w = srcBmW;
                    srcTileRect.h = srcBmH;

                    if (func_ovl8_8037A67C((s16 *)&dstTileRect, (s16 *)&dstRect, (s16 *)&clipRect) != 0)
                    {
                        if (func_ovl8_8037A67C((s16 *)&clipRect, (s16 *)&srcTileRect, (s16 *)&clipRect) != 0)
                        {
                            srcTileRect.x = (clipRect.x - srcOff.arr[0] + srcRect.x) % srcBmW;
                            srcTileRect.y = (clipRect.y - srcOff.arr[1] + srcRect.y) % srcBmH;
                            clipRect.x = clipRect.x % dstBmW;
                            clipRect.y = clipRect.y % dstBmH;
                            clipRect.w = dstTileRect.w;
                            clipRect.h = dstTileRect.h;

                            func_ovl8_803781A4(
                                src->bmsiz,
                                &src->bitmap[srcTileYIdx * srcTilesPerRow + innerX + srcTileX0],
                                &dst->bitmap[dstTileYIdx * dstTilesPerRow + colTile + dstTileX0],
                                &clipRect,
                                &srcTileRect
                            );
                        }
                    }

                    innerX++;
                    srcPixelX += srcBmW;
                } while (innerX != innerTilesX);

            next_innerY:
                innerY++;
            } while (innerY != innerTilesY);

        next_col:
            dstPixelX += dstBmW;
            colTile++;
        } while (colTile != outerTilesX);

    next_row:
        ;
    }
}

// 0x80379070
void func_ovl8_80379070(u8* arg0, s32 arg1, Bitmap* arg2, s16 arg3, DBMenuPosition* arg4)
{
    s16 temp_v0;
    s16 var_a0;
    s16 var_a1;
    s32 temp_t0;
    s32 var_t2;
    u8* var_v1;
    s32 mode;
    u8 src_byte;
    u16 src_half;
    s32 src_word;
    u8 dest_byte;
    u16 dest_half;
    s32 dest_word;
    u8* pixel_addr;
    u16* pixel_addr16;
    s32* pixel_addr32;

    temp_v0 = arg2->width_img;

    switch (arg3) {
    default:
        break;
    case 1:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) return;
        mode = D_ovl8_80389F60;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                src_byte = *var_v1;
                var_v1++;

                if (mode == 4) {
                    temp_t0 = arg4->y + var_a1;
                    var_t2 = src_byte & 0xFF;
                    pixel_addr = (u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0;
                } else {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1) {
                        if ((arg4->x + var_a0) & 4) {
                            pixel_addr = (u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0;
                            dest_byte = pixel_addr[-4];
                        } else {
                            pixel_addr = (u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0;
                            var_t2 = pixel_addr[4];
                            dest_byte = var_t2 & 0xFF;
                        }
                    } else {
                        pixel_addr = (u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0;
                        dest_byte = *pixel_addr;
                    }
                    var_t2 = dest_byte & 0xFF;

                    if (mode == 0x10) {
                        if (src_byte != D_ovl8_80389F64) {
                            var_t2 = src_byte & 0xFF;
                        }
                    } else if (mode == 8) {
                        if (src_byte != 0) {
                            var_t2 = src_byte & 0xFF;
                        }
                    } else if (mode == 2) {
                        var_t2 = (dest_byte | src_byte) & 0xFF;
                    } else if (mode == 1) {
                        var_t2 = (dest_byte ^ src_byte) & 0xFF;
                    }
                }

                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 4) {
                        pixel_addr[-4] = var_t2;
                        ((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0)[-4] = var_t2;
                        ((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0)[-4] = var_t2;
                    } else {
                        pixel_addr[4] = var_t2;
                        ((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 + arg4->x + var_a0)[4] = var_t2;
                    }
                } else {
                    *pixel_addr = var_t2;
                }
                var_a0++;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += arg1 - (s32)arg4->w;
        } while (var_a1 < (s32)arg4->h);
        return;

    case 2:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) return;
        mode = D_ovl8_80389F60;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                src_half = *(u16*)var_v1;
                var_v1 += 2;

                if (mode == 4) {
                    temp_t0 = arg4->y + var_a1;
                    dest_half = src_half & 0xFFFF;
                    pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                } else {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1) {
                        if ((arg4->x + var_a0) & 2) {
                            pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                            dest_half = pixel_addr16[-2];
                        } else {
                            pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                            dest_half = pixel_addr16[2] & 0xFFFF;
                        }
                    } else {
                        pixel_addr16 = (u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2);
                        dest_half = *pixel_addr16;
                    }
                    dest_half &= 0xFFFF;

                    if (mode == 0x10) {
                        if (src_half != D_ovl8_80389F64) {
                            dest_half = src_half & 0xFFFF;
                        }
                    } else if (mode == 8) {
                        if (src_half != 0) {
                            dest_half = src_half & 0xFFFF;
                        }
                    } else if (mode == 2) {
                        dest_half = (dest_half | src_half) & 0xFFFF;
                    } else if (mode == 1) {
                        dest_half = (dest_half ^ src_half) & 0xFFFF;
                    }
                }

                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 2) {
                        pixel_addr16[-2] = dest_half;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[-2] = dest_half;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[-2] = dest_half;
                    } else {
                        pixel_addr16[2] = dest_half;
                        ((u16*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[2] = dest_half;
                    }
                } else {
                    *pixel_addr16 = dest_half;
                }
                var_a0++;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += (arg1 - (s32)arg4->w) * 2;
        } while (var_a1 < (s32)arg4->h);
        return;

    case 3:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) break;
        mode = D_ovl8_80389F60;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                src_word = *(s32*)var_v1;
                var_v1 += 4;

                if (mode == 4) {
                    temp_t0 = arg4->y + var_a1;
                    dest_word = src_word;
                    pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                } else {
                    temp_t0 = arg4->y + var_a1;
                    if (temp_t0 & 1) {
                        if ((arg4->x + var_a0) & 2) {
                            pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                            dest_word = pixel_addr32[-2];
                        } else {
                            pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                            dest_word = pixel_addr32[2];
                        }
                    } else {
                        pixel_addr32 = (s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4);
                        dest_word = *pixel_addr32;
                    }

                    if (mode == 0x10) {
                        if (src_word != D_ovl8_80389F64) {
                            dest_word = src_word;
                        }
                    } else if (mode == 8) {
                        if (src_word != 0) {
                            dest_word = src_word;
                        }
                    } else if (mode == 2) {
                        dest_word = dest_word | src_word;
                    } else if (mode == 1) {
                        dest_word = dest_word ^ src_word;
                    }
                }

                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 2) {
                        pixel_addr32[-2] = dest_word;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[-2] = dest_word;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[-2] = dest_word;
                    } else {
                        pixel_addr32[2] = dest_word;
                        ((s32*)((u8*)arg2->buf + (arg4->y + var_a1) * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[2] = dest_word;
                    }
                } else {
                    *pixel_addr32 = dest_word;
                }
                var_a0++;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += (arg1 - (s32)arg4->w) * 4;
        } while (var_a1 < (s32)arg4->h);
        break;
    }
}

// 0x803798A0
void func_ovl8_803798A0(Sprite* sprite, u8* dst_buffer, s32 dst_w, s16 dst_h, DBMenuPosition* src_pos, s32 arg5)
{
    DBMenuPosition spB0;
    DBMenuPosition spA8;
    DBMenuPosition spA0;
    DBMenuPosition sp98;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 s0;
    s32 s3;
    s32 s6;
    u8* s1;
    u8* sp5C;
    Bitmap* bitmap;

    D_ovl8_80389F60 = arg5;

    if (sprite->bmsiz == 1) {
        sp6C = 1;
    } else if (sprite->bmsiz == 2) {
        sp6C = 2;
    } else {
        sp6C = 4;
    }

    spB0.x = src_pos->x;
    spB0.y = src_pos->y;
    spB0.w = dst_w;
    spB0.h = dst_h;

    sp98.x = sp98.y = 0;
    sp98.w = sprite->width;
    sp98.h = sprite->height;

    func_ovl8_8037A67C((s16*)&spB0, (s16*)&sp98, (s16*)&spA8);

    if (func_ovl8_8037AA5C(&spA8) != 0) {
        return;
    }

    func_ovl8_8037A67C((s16*)&spA8, (s16*)&D_ovl8_80389F68, (s16*)&spA8);

    if (func_ovl8_8037AA5C(&spA8) != 0) {
        return;
    }

    s3 = sprite->bitmap->width;
    s6 = sprite->bitmap->actualHeight;

    sp5C = dst_buffer + (((spA8.y - spB0.y) * dst_w) + (spA8.x - spB0.x)) * sp6C;

    sp78 = spA8.x / s3;
    sp74 = spA8.y / s6;

    sp84 = (sprite->width / s3) + ((sprite->width % s3) != 0 ? 1 : 0);

    sp8C = ((u16)spA8.w / s3) + (((u16)spA8.w % s3) != 0 ? 1 : 0) + 1;

    sp88 = ((u16)spA8.h / s6) + (((u16)spA8.h % s6) != 0 ? 1 : 0) + 1;

    if (sp88 <= 0) {
        return;
    }

    for (sp90 = 0; sp90 < sp88; sp90++)
    {
        s1 = sp5C;

        for (s0 = 0; s0 != sp8C; s0++)
        {
            spA0.x = (sp78 + s0) * s3;
            spA0.y = (sp74 + sp90) * s6;
            spA0.w = s3;
            spA0.h = s6;

            if (func_ovl8_8037A67C((s16*)&spA0, (s16*)&spA8, (s16*)&sp98) != 0)
            {
                sp98.x %= s3;
                sp98.y %= s6;

                bitmap = sprite->bitmap + ((sp74 + sp90) * sp84) + s0 + sp78;

                func_ovl8_80379070(s1, dst_w, bitmap, sprite->bmsiz, &sp98);
                sp70 = sp98.h;
            }
            s1 += sp98.w * sp6C;
        }
        sp5C += sp70 * dst_w * sp6C;
    }
}

// 0x80379D74
// NON_MATCHING: IDO generates if-chain instead of jump table for 4-case switch.
// Frame size (0x8) and case bodies are structurally correct.
// BLOCKER: Need to figure out what triggers IDO jump table for 4 cases.
// With dummy cases 4-5, jump table generates but sltiu is 6 instead of 4.
#ifdef NON_MATCHING
void func_ovl8_80379D74(u8* arg0, s32 arg1, Bitmap* arg2, s16 arg3, DBMenuPosition* arg4)
{
    s16 temp_v0;
    s16 var_a0;
    s16 var_a1;
    s32 temp_t0;
    s32 var_t2;
    u8* var_v1;

    temp_v0 = arg2->width_img;

    switch (arg3) {
    default:
        break;
    case 1:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) return;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                temp_t0 = arg4->y + var_a1;
                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 4) {
                        var_t2 = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0)[-4];
                    } else {
                        var_t2 = ((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0)[4] & 0xFF;
                    }
                } else {
                    var_t2 = *((u8*)arg2->buf + temp_t0 * temp_v0 + arg4->x + var_a0);
                }
                *var_v1 = var_t2;
                var_a0++;
                var_v1++;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += arg1 - (s32)arg4->w;
        } while (var_a1 < (s32)arg4->h);
        return;

    case 2:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) return;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                temp_t0 = arg4->y + var_a1;
                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 2) {
                        var_t2 = ((u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[-2];
                    } else {
                        var_t2 = ((u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2))[2] & 0xFFFF;
                    }
                } else {
                    var_t2 = *((u16*)((u8*)arg2->buf + temp_t0 * temp_v0 * 2 + arg4->x * 2 + var_a0 * 2));
                }
                *(u16*)var_v1 = var_t2;
                var_a0++;
                var_v1 += 2;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += (arg1 - (s32)arg4->w) * 2;
        } while (var_a1 < (s32)arg4->h);
        return;

    case 3:
        var_v1 = arg0;
        var_a1 = 0;
        if ((s32)arg4->h <= 0) break;
        do {
            var_a0 = 0;
            if ((s32)arg4->w > 0)
            do {
                temp_t0 = arg4->y + var_a1;
                if (temp_t0 & 1) {
                    if ((arg4->x + var_a0) & 2) {
                        var_t2 = ((s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[-2];
                    } else {
                        var_t2 = ((s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4))[2];
                    }
                } else {
                    var_t2 = *((s32*)((u8*)arg2->buf + temp_t0 * temp_v0 * 4 + arg4->x * 4 + var_a0 * 4));
                }
                *(s32*)var_v1 = var_t2;
                var_a0++;
                var_v1 += 4;
            } while (var_a0 < (s32)arg4->w);
            var_a1++;
            var_v1 += (arg1 - (s32)arg4->w) * 4;
        } while (var_a1 < (s32)arg4->h);
        break;
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_80379D74.s")
#endif

// 0x8037A0FC
void func_ovl8_8037A0FC(Sprite* sprite, DBMenuPosition* dst_rect, u8* dst_buffer)
{
    DBMenuPosition spB0;
    DBMenuPosition spA8;
    DBMenuPosition spA0;
    DBMenuPosition sp98;
    s32 sp90;
    s32 sp8C;
    s32 sp88;
    s32 sp84;
    s32 sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 s0;
    s32 s3;
    s32 s6;
    u8* s1;
    u8* sp5C;
    Bitmap* bitmap;

    spB0 = *dst_rect;

    if (sprite->bmsiz == 1) {
        sp6C = 1;
    } else if (sprite->bmsiz == 2) {
        sp6C = 2;
    } else {
        sp6C = 4;
    }

    sp98.x = sp98.y = 0;
    sp98.w = sprite->width;
    sp98.h = sprite->height;

    func_ovl8_8037A67C((s16*)&spB0, (s16*)&sp98, (s16*)&spA8);

    if (func_ovl8_8037AA5C(&spA8) == 0)
    {
        s3 = sprite->bitmap->width;
        s6 = sprite->bitmap->actualHeight;

        sp5C = dst_buffer + (((spA8.y - spB0.y) * dst_rect->w) + (spA8.x - spB0.x)) * sp6C;

        sp78 = spA8.x / s3;
        sp74 = spA8.y / s6;

        sp84 = (sprite->width / s3) + ((sprite->width % s3) != 0 ? 1 : 0);

        sp8C = (spA8.w / s3) + ((spA8.w % s3) != 0 ? 1 : 0) + 1;

        sp88 = (spA8.h / s6) + ((spA8.h % s6) != 0 ? 1 : 0) + 1;

        for (sp90 = 0; sp90 < sp88; sp90++)
        {
            s1 = sp5C;

            for (s0 = 0; s0 != sp8C; s0++)
            {
                spA0.x = (sp78 + s0) * s3;
                spA0.y = (sp74 + sp90) * s6;
                spA0.w = s3;
                spA0.h = s6;

                if (func_ovl8_8037A67C((s16*)&spA0, (s16*)&spA8, (s16*)&sp98) != 0)
                {
                    sp98.x %= s3;
                    sp98.y %= s6;

                    bitmap = sprite->bitmap + ((sp74 + sp90) * sp84) + s0 + sp78;

                    func_ovl8_80379D74(s1, dst_rect->w, bitmap, sprite->bmsiz, &sp98);
                    sp70 = sp98.h;
                }
                s1 += sp98.w * sp6C;
            }
            sp5C += sp70 * dst_rect->w * sp6C;
        }
    }
}

// 0x8037A5B8
void func_ovl8_8037A5B8(Sprite* arg0, DBMenuPosition* arg1, s32 arg2)
{
	DBMenuPosition sp28;
	u32 var_a1;
	u32 sp20;

	sp28.x = arg1->x;
	sp28.y = arg1->y;
	sp28.w = sp28.h = 1;
	func_ovl8_8037A0FC(arg0, &sp28, &sp20);

	var_a1 = sp20;
	if (arg0->bmsiz == 2)
	{
		var_a1 = sp20 >> 0x10;
	}
	func_ovl8_80376C40(arg0->bmsiz, var_a1, arg2);
}

// 0x8037A62C
void func_ovl8_8037A62C(db4Shorts* arg0, s32 arg1)
{
	DBMenuPosition sp20;
	db2Shorts sp1C;

	sp20.x = 0;
	sp20.y = arg1;
	sp20.w = arg0->arr[2];
	sp20.h = arg0->arr[3] - arg1;
	sp1C.arr[0] = sp1C.arr[1] = 0;
	func_ovl8_803787C0(arg0, arg0, &sp20, &sp1C);
}

// 0x8037A67C
s32 func_ovl8_8037A67C(s16* arg0, s16* arg1, s16* arg2)
{
	s32 sp30[2];
	s32 sp28[2];
	s32 sp20[2];
	s32 sp1C;

	func_ovl8_8037A9F4(arg0, &sp30);
	func_ovl8_8037A9F4(arg1, &sp28);
	sp1C = func_ovl8_8037A6D4(&sp30, &sp28, &sp20);
	func_ovl8_8037AA28(&sp20, arg2);
	return sp1C;
}

// 0x8037A6D4
s32 func_ovl8_8037A6D4(db4Shorts *rect1, db4Shorts *rect2, db4Shorts *intersection) {
    s16 rect1_bottom;
    s16 rect1_right;
    s16 rect2_right;
    s16 rect2_left;
    s16 result_value;
    s32 overlapX;
    s32 overlapY;
    
    // Check X-axis overlap
    overlapX = 0;
    rect2_left = rect2->arr[0], rect1_right = rect1->arr[2];
    
    // Case 1: rect2 left edge inside rect1, rect2 extends past rect1 right
    if ((rect2_left < rect1_right) && (rect2->arr[2] >= rect1_right)) {
        overlapX = 1;
    }
    // Case 2: rect1 left edge inside rect2
    else if ((rect1->arr[0] >= rect2_left) && (rect1->arr[0] < rect2->arr[2])) {
        overlapX = 1;
    }
    // Case 3: rect1 completely contains rect2 horizontally
    else if ((rect1->arr[0] < rect2_left) && (rect1_right >= rect2->arr[2])) {
        overlapX = 1;
    }
    
    if (overlapX != 0) {
        // Compute intersection left edge: max(rect1_left, rect2_left)
        result_value = rect2_left < rect1->arr[0] ? rect1->arr[0] : rect2_left;

        intersection->arr[0] = result_value;
        
        // Compute intersection right edge: min(rect1_right, rect2_right)
        rect2_right = rect2->arr[2];
        rect1_right = rect1->arr[2];
        result_value = rect1_right < rect2_right ? rect1_right : rect2_right;
        intersection->arr[2] = result_value;
        
        // Check Y-axis overlap
        rect1_bottom = rect1->arr[3];
        rect2_left = rect2->arr[1];  // reused as rect2_top
        overlapY = 0;
        rect1_right = rect1->arr[1]; // reused as rect1_top
        
        // Case 1: rect2 top edge inside rect1, rect2 extends past rect1 bottom
        if ((rect2_left < rect1_bottom) && (rect2->arr[3] >= rect1_bottom)) {
            overlapY = 1;
        }
        // Case 2: rect1 top edge inside rect2
        else if ((rect1->arr[1] >= rect2_left) && (rect1->arr[1] < rect2->arr[3])) {
            overlapY = 1;
        }
        // Case 3: rect1 completely contains rect2 vertically
        else if ((rect1->arr[1] < rect2_left) && (rect1_bottom >= rect2->arr[3])) {
            overlapY = 1;
        }
        
        if (overlapY != 0) {
            // Compute intersection top edge: max(rect1_top, rect2_top)
            rect1_right = rect1->arr[1]; // reused as rect1_top
            result_value = rect2_left < rect1_right ?  rect1_right : rect2_left;    // rect2_top
            intersection->arr[1] = result_value;
            
            // Compute intersection bottom edge: min(rect1_bottom, rect2_bottom)
            rect2_right = rect2->arr[3]; // reused as rect2_bottom
            rect1_bottom = rect1->arr[3];
            result_value = rect1_bottom < rect2_right ? rect1_bottom : rect2_right;
            intersection->arr[3] = result_value;
            return 1; // Rectangles intersect
        }
    }
    intersection->arr[2] = 0;
    intersection->arr[3] = 0;
    intersection->arr[1] = 0;
    intersection->arr[0] = 0;
    return 0;
}

// 0x8037A8BC
void func_ovl8_8037A8BC(void* arg0, void* arg1)
{
	s32 sp20[2];
	s32 sp18[2];

	func_ovl8_8037A9F4(arg0, &sp20);
	func_ovl8_8037A9F4(arg1, &sp18);
	func_ovl8_8037A904(&sp20, &sp18);
	func_ovl8_8037AA28(&sp18, arg1);
}

// 0x8037A904
void func_ovl8_8037A904(db4Shorts* arg0, db4Shorts* arg1)
{
	s32 temp_a3;

	temp_a3 = arg0->arr[0] - arg1->arr[0];
	if (temp_a3 > 0)
	{
		func_ovl8_8037A9C0(arg1, temp_a3, 0);
	}

	temp_a3 = arg0->arr[2] - arg1->arr[2];
	if (temp_a3 < 0)
	{
		func_ovl8_8037A9C0(arg1, temp_a3, 0);
	}

	temp_a3 = arg0->arr[1] - arg1->arr[1];
	if (temp_a3 > 0)
	{
		func_ovl8_8037A9C0(arg1, 0, temp_a3);
	}

	temp_a3 = arg0->arr[3] - arg1->arr[3];
	if (temp_a3 < 0)
	{
		func_ovl8_8037A9C0(arg1, 0, temp_a3);
	}
}

// 0x8037A9C0
void func_ovl8_8037A9C0(db4Shorts* arg0, s32 arg1, s32 arg2)
{
	arg0->arr[0] = arg0->arr[0] + arg1;\
	arg0->arr[2] = arg0->arr[2] + arg1;
	arg0->arr[1] = arg0->arr[1] + arg2;\
	arg0->arr[3] = arg0->arr[3] + arg2;
}

// 0x8037A9F4
void func_ovl8_8037A9F4(DBMenuPosition* arg0, DBMenuPosition* arg1)
{
	arg1->x = arg0->x;
	arg1->y = arg0->y;
	arg1->w = arg0->x + arg0->w;
	arg1->h = arg0->y + arg0->h;
}

// 0x8037AA28
void func_ovl8_8037AA28(db4Shorts* arg0, db4Shorts* arg1)
{
	arg1->arr[0] = arg0->arr[0];
	arg1->arr[1] = arg0->arr[1];
	arg1->arr[2] = arg0->arr[2] - arg0->arr[0];
	arg1->arr[3] = arg0->arr[3] - arg0->arr[1];
}

// 0x8037AA5C
s32 func_ovl8_8037AA5C(DBMenuPosition* arg0)
{
	if (arg0->w <= 0 || arg0->h <= 0)
	{
		return 1;
	}
	return 0;
}

// 0x8037AA88
void func_ovl8_8037AA88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, dbUnknown7* arg4) {
    s32 var_v0;
    
    arg4->unk0 = arg2 - arg0;
    arg4->unk4 = arg3 - arg1;
    arg4->unk20 = arg0;
    arg4->unk24 = arg1;
    var_v0 = arg4->unk0 == 0 ? 0 : (arg4->unk0 > 0 ? 1 : -1);
    
    arg4->unk10 = var_v0;
    var_v0 = arg4->unk4 == 0 ? 0 : (arg4->unk4 > 0 ? 1 : -1);
    
    arg4->unk14 = var_v0;
    var_v0 = arg4->unk0 < 0 ? -arg4->unk0 : arg4->unk0;

    arg4->unk0 = var_v0;
    var_v0 = arg4->unk4 < 0 ? -arg4->unk4 : arg4->unk4;
    arg4->unk4 = var_v0;
    
    if (var_v0 < arg4->unk0) {
        arg4->unk30 = arg4->unk0;
        arg4->unk28 = ((u8*)arg4 + 0x20);
        arg4->unk2C = ((u8*)arg4 + 0x24);
        arg4->unk8 =  (s32*) arg4;
        arg4->unkC = (s32*) ((u8*)arg4 + 4);
        arg4->unk18 = ((u8*)arg4 + 0x10);
        arg4->unk1C = (void* ) ((u8*)arg4 + 0x14);
    } else {
        arg4->unk30 = arg4->unk4;
        arg4->unk28 = ((u8*)arg4 + 0x24);
        arg4->unk2C = ((u8*)arg4 + 0x20);
        arg4->unk8 = (s32*) ((u8*)arg4 + 4);
        arg4->unkC = (s32) arg4;
        arg4->unk18 = ((u8*)arg4 + 0x14);
        arg4->unk1C = (void* ) ((u8*)arg4 + 0x10);
    }
    arg4->unk34 = (*arg4->unkC / 2);
    arg4->unk38 = arg4->unk30;
}


// 0x8037ABDC
s32 func_ovl8_8037ABDC(Vec2h* arg0, UiLineStepper* arg1) 
{
    if (arg1->error == arg1->stepsRemaining) 
    {
        arg0->x = arg1->currentX;
        arg0->y = arg1->currentY;
    } 
    else 
    {
        if (arg1->totalSteps < 0) 
        {
            *arg1->posPrimary += *arg1->stepPrimary;
            arg1->totalSteps += *arg1->errorAdd;
        } 
        else 
        {
            *arg1->posPrimary += *arg1->stepPrimary;
            
            if (arg1->currentX && arg1->currentX);
            
            *arg1->posSecondary += *arg1->stepSecondary;
            
            if (arg1->currentX && arg1->currentX);
            
            arg1->totalSteps += *arg1->errorAdd - *arg1->errorSub;
        }
        
        arg0->x = arg1->currentX;
        arg0->y = arg1->currentY;
    }
    
    return arg1->stepsRemaining--;
}

// 0x8037ACAC
// This function creates a tiled texture/bitmap structure for the debug menu UI.
// It divides a width x height region into tiles, allocates bitmap memory, and
// fills a descriptor array for each tile.
dbUnknown3* func_ovl8_8037ACAC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 tileDim;    // a0
    s32 maxArea;    // a1
    s32 bpp;        // ra (repurposed)
    s32 v1;
    s32 t1;         // tileStripW
    s32 t3;         // tileRowH
    s32 t5;         // remTileW
    s32 a6;         // numFullTilesX -> a2 copy
    s32 v0;
    s32 a0rem;      // remainderH
    s32 totalBytes;
    s32 numTiles;
    s32 numTileRows;
    s32 tileColsX;  // s1
    s32 origAlloc;
    s32 tileDescs;
    s32 tileDescArr;
    dbUnknown3* result;

    if (arg2 == 1) {
        bpp = 1;
        maxArea = 0x800;
        tileDim = 8;
    } else if (arg2 == 2) {
        bpp = 2;
        maxArea = 0x800;
        tileDim = 4;
    } else if (arg2 == 3) {
        bpp = 4;
        maxArea = 0x400;
        tileDim = 4;
    } else {
        bpp = *(s32*)((u8*)&arg2 + 0x64);  // sp+0x90 in caller frame - unreachable in practice
        maxArea = *(s32*)((u8*)&arg2 + 0x0C);
        tileDim = *(s32*)((u8*)&arg2 + 0x4C);
    }

    // clamp width to arg3
    v1 = (arg0 < arg3) ? arg0 : arg3;
    t1 = v1;

    // round up to tileDim
    v1 = (v1 % tileDim != 0) ? tileDim : 0;
    t1 = (t1 / tileDim) * tileDim + v1;

    // X tile division
    a6 = arg0 / t1;
    v0 = arg0 % t1;
    t5 = v0;

    // round up remainder
    if (v0 != 0) {
        v1 = (v0 % tileDim != 0) ? tileDim : 0;
        t5 = (v0 / tileDim) * tileDim + v1;
        if (t5 == 0) {
            t5 = tileDim;
        }
    }

    // clamp height to arg4
    v0 = arg4;
    v1 = (arg1 < v0) ? arg1 : v0;
    t3 = v1;
    if (v1 * t1 > maxArea) {
        t3 = maxArea / t1;
    }

    // Y tile division
    a0rem = arg1 % t3;
    v0 = arg1 / t3;

    // total bytes computation
    totalBytes  = t1 * t3 * bpp * a6 * v0;
    totalBytes += t5 * t3 * v0 * bpp;
    totalBytes += t1 * a0rem * a6 * bpp;
    totalBytes += t5 * a0rem * bpp;

    // tile counts
    v1 = (t5 != 0) ? 1 : 0;
    tileColsX = a6 + v1;

    v1 = (a0rem != 0) ? 1 : 0;
    numTileRows = v0 + v1;

    // corner tile check
    if (a6 > 0) {
        if (v0 > 0) {
            if (t5 != 0) {
                if (a0rem != 0) {
                    v1 = 1;
                } else {
                    v1 = 0;
                }
            } else {
                v1 = 0;
            }
        } else {
            v1 = 0;
        }
    } else {
        v1 = 0;
    }

    numTiles = tileColsX * numTileRows + v1;

    // allocate bitmap (8 extra for alignment)
    {
        s32 bitmapBase;
        s32 bitmapAligned;
        s32 k;
        u8* p;
        s32 rem;

        origAlloc = (s32)func_ovl8_803716D8(totalBytes + 8);
        bitmapBase = origAlloc;
        v1 = bitmapBase & 7;
        if (v1 != 0) {
            bitmapAligned = (bitmapBase - v1) + 8;
        } else {
            bitmapAligned = bitmapBase;
        }

        // memset to 0xFF
        k = 0;
        if (totalBytes > 0) {
            rem = totalBytes & 3;
            if (rem != 0) {
                p = (u8*)bitmapAligned;
                do {
                    k++;
                    *p = 0xFF;
                    p++;
                } while (rem != k);
                if (k == totalBytes) goto done_memset;
            }
            p = (u8*)(bitmapAligned + k);
            do {
                k += 4;
                p[0] = 0xFF;
                p[1] = 0xFF;
                p[2] = 0xFF;
                p[3] = 0xFF;
                p += 4;
            } while (k != totalBytes);
        }
    done_memset:
        k = 0;

        // allocate tile descriptors (16 bytes each)
        tileDescArr = (s32)func_ovl8_803716D8(numTiles << 4);

        // fill tile descriptors
        {
            s32 a5;       // byte offset
            s32 idx;      // t0
            s32 curW;     // a0
            s32 curH;     // a3 (height remaining)
            s32 j;        // a2
            s16* tile;    // v1

            a5 = 0;
            idx = 0;
            curH = arg1;
            if (numTileRows > 0) {
                curW = arg0;
                do {
                    if (tileColsX > 0) {
                        j = 0;
                        tile = (s16*)(tileDescArr + (idx << 4));
                        if (tileColsX & 1) {
                            // first tile (odd peel)
                            if (curW < t1) {
                                tile[0] = t1;
                                tile[1] = t1;
                            } else {
                                tile[0] = curW;
                                tile[1] = t5;
                            }
                            if (curH < t3) {
                                tile[6] = curH;
                            } else {
                                tile[6] = t3;
                            }
                            *(s32*)&tile[4] = bitmapAligned + a5;
                            j = 1;
                            tile[2] = 0;
                            tile[3] = 0;
                            tile[7] = 0;
                            curW -= t1;
                            idx++;
                            tile += 8;
                            a5 += tile[-7] * tile[-2] * bpp;
                            if (j == tileColsX) goto end_inner;
                        }
                        // main loop (pairs)
                        do {
                            if (curW < t1) {
                                tile[0] = curW;
                                tile[1] = t5;
                            } else {
                                tile[0] = t1;
                                tile[1] = t1;
                            }
                            if (curH < t3) {
                                tile[6] = curH;
                            } else {
                                tile[6] = t3;
                            }
                            *(s32*)&tile[4] = bitmapAligned + a5;
                            curW -= t1;
                            tile[2] = 0;
                            tile[3] = 0;
                            tile[7] = 0;
                            idx++;
                            tile += 8;
                            a5 += tile[-7] * tile[-2] * bpp;

                            // second of pair
                            if (curW < t1) {
                                tile[0] = curW;
                                tile[1] = t5;
                            } else {
                                tile[0] = t1;
                                tile[1] = t1;
                            }
                            if (curH < t3) {
                                tile[6] = curH;
                            } else {
                                tile[6] = t3;
                            }
                            *(s32*)&tile[4] = bitmapAligned + a5;
                            j += 2;
                            tile[2] = 0;
                            tile[3] = 0;
                            tile[7] = 0;
                            curW -= t1;
                            idx++;
                            tile += 8;
                            a5 += tile[-7] * tile[-2] * bpp;
                        } while (j != tileColsX);
                    }
                end_inner:
                    k++;
                    curH -= t3;
                } while (k != numTileRows);
            }
        }

        // allocate 0x48 struct
        result = (dbUnknown3*)func_ovl8_803716D8(0x48);

        // copy template from D_ovl8_80389F70
        {
            s32* src = (s32*)&D_ovl8_80389F70;
            s32* dst = (s32*)result;
            s32* end = (s32*)((u8*)&D_ovl8_80389F70 + 0x3C);
            s32* dd = dst;
            do {
                src += 3;
                dd += 3;
                dd[-3] = src[-3];
                dd[-2] = src[-2];
                dd[-1] = src[-1];
            } while (src != end);
            // last 2 words
            dd[0] = src[0];
            dd[1] = src[1];
        }

        // set fields based on mode
        if (arg2 == 1 || arg2 == 2) {
            v1 = 0x220;
        } else {
            v1 = 0x201;
        }

        {
            s16* r = (s16*)result;
            u8* rb = (u8*)result;
            s32* rw = (s32*)result;

            r[0xA] = v1;                               // 0x14
            rb[0x31] = arg2;                            // 0x31
            r[2] = arg0;                                // 0x4
            r[0x16] = t3;                               // 0x2C
            r[0x17] = t3;                               // 0x2E
            r[0x15] = numTiles * 12 + 0x18;             // 0x2A
            r[0x14] = numTiles;                         // 0x28
            r[3] = arg1;                                // 0x6
            rw[0xE] = 0;                                // 0x38
            rw[0xD] = tileDescArr;                      // 0x34
            rw[0x11] = origAlloc;                       // 0x44

            if (arg2 == 1) {
                rb[0x30] = 2;
                r[0xF] = 0x100;                         // 0x1E
                rw[8] = (s32)func_ovl8_803716D8(0x200); // 0x20
            }
        }
    }

    return result;
}

// 0x8037B3E4
void func_ovl8_8037B3E4(dbUnknown3* arg0)
{
	dbUnknown3 *temp_a0;

	func_ovl8_80371764(arg0->unk_dbunk3_0x44);
	func_ovl8_80371764(arg0->unk_dbunk3_0x34);

	temp_a0 = arg0->unk_dbunk3_0x20;
	if (temp_a0 != NULL)
	{
		func_ovl8_80371764(temp_a0);
	}

	func_ovl8_80371764(arg0);
}

// 0x8037B434
void func_ovl8_8037B434(Sprite* arg0, s32 arg1, s32 arg2, SYColorRGBA* arg3)
{
	dbUnknown8_SC* var_a2;

	if (arg2 != 0)
	{
		var_a2 = &D_ovl8_8038A068;
	}
	else
	{
		var_a2 = &D_ovl8_80389FB4;
	}

	func_ovl8_8037B46C(arg0, arg1, var_a2, arg3);
}

// 0x8037B46C
void func_ovl8_8037B46C(Sprite* arg0, DBMenuPosition* arg1, dbUnknown8_SC* arg2, s32 arg3) 
{
    s32 var_v0;
    DBMenuPosition abs;
	s32 unused;
	db4Bytes sp44;
    s16 temp1, temp2;
    dbUnknown8_SC* var_s1;

    for (var_s1 = arg2; var_s1->x0 != (0x7FFF, 0x7FFF); var_s1++) 
    {
        var_v0 = (var_s1->x0 & 0x8000) ? (arg1->w - (var_s1->x0 & 0x7FFF)) - 1 : var_s1->x0;
        abs.x = arg1->x + var_v0;
        
        var_v0 = (var_s1->y0 & 0x8000) ? (arg1->h - (var_s1->y0 & 0x7FFF)) - 1 : var_s1->y0;
        abs.y = arg1->y + var_v0;
        
        var_v0 = (var_s1->x1 & 0x8000) ? (arg1->w - (var_s1->x1 & 0x7FFF)) - 1 : var_s1->x1;
        temp1 = arg1->x + var_v0;
        
        var_v0 = (var_s1->y1 & 0x8000) ? (arg1->h - (var_s1->y1 & 0x7FFF)) - 1 : var_s1->y1;
        temp2 = arg1->y + var_v0;

        abs.w = (temp1 - abs.x) + 1;
        abs.h = (temp2 - abs.y) + 1;

        func_ovl8_80376EE0(arg3, &sp44, var_s1->dbUnknown8_SC_0x8);
        func_ovl8_80377AEC(arg0, &abs, &sp44, 4);
    }
}

// 0x8037B5F8
s32 stringToNumberSigned(char* str)
{
	s32 num = 0;
	s32 sign = (str[0] == '-') ? (str++, -1) : 1;

	while (str[0] != '\0')
	{
		num *= 10;
		num += str++[0] - '0';
	}

	return sign * num;
}

// 0x8037B654
s32 func_ovl8_8037B654(s32 val, char* str) 
{
    s32 digit;
    s32 found_first_digit;
    s32 index;
    s32 place;
    s32 remaining;
    s32 abs = (val < 0) ? -val : val;
    s32 ret;
    
    remaining = abs;
    index = 0;
    found_first_digit = FALSE;
    
    if (val < 0)
    {
        abs = index++,
        str[abs] = '-';  // '-' character
    }

    place = 1000000000;
    found_first_digit = FALSE;
    
    while (place != 0) 
    {
        digit = remaining / place;
        
        if ((digit != 0) || (found_first_digit != FALSE)) 
        {   
            abs = index--;
            str[abs] = digit + '0';  // Convert digit to ASCII
            index += 2;
        }
        if (digit != 0)
        {
            found_first_digit = TRUE;
            remaining -= place * digit;
        }
        place /= 10;
    }
    if (index != 0) 
    {
        str[index] = '\0';  // Null terminator
    }
    else
    {
        str[0] = '0';  // '0' character
        str[1] = '\0';     // Null terminator
    }
}

// 0x8037B760
// NON_MATCHING: loop body missing 2 register-copy instructions per iteration
// (or a0,v0 and or a2,v1 pointer temps before lbu/sb) - likely recomp scheduling difference.
#ifdef NON_MATCHING
void func_ovl8_8037B760(u8 *src, u8 *dst, s32 count) {
    u8 *s;
    u8 *d;

    if (!(src < dst)) {
        s = src;
        d = dst;
        while (count--) {
            *d = *s;
            s++;
            d++;
        }
    } else {
        s = src + count - 1;
        d = dst + count - 1;
        while (count--) {
            *d = *s;
            s--;
            d--;
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_8/func_ovl8_8037B760.s")
#endif /* NON_MATCHING */

// 0x8037B7F0
s32 func_ovl8_8037B7F0(u8 *str, s32 index)
{
	s32 pos = 0;
	u8 c = str[pos];

	while (str[pos] != 0)
	{
		if (index < pos)
			return 0;

		if (c & 0x80) // high-bit set => multi-byte char?
		{
			if (index == pos)
				return 1;
			pos++;
			if (index == pos)
				return 1;
		}
		pos++;
		c = str[pos];
	}
	return 0;
}

// 0x8037B85C
void func_ovl8_8037B85C(s32 arg0, s32* arg1, s32* arg2) 
{
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 temp_f6;

    var_a2 = (arg0 == 1) ? 0x800 : (arg0 == 2) ? 0x800 : 0x400;
    
    temp_f6 = sqrtf(var_a2);
    
    temp_v0 = *arg1;
    temp_v1 = *arg2;
    
    if (var_a2 < (temp_v0 * temp_v1)) 
    {
        if (temp_v0 >= temp_v1) 
        {
            var_a0 = temp_v1;
            var_a1 = var_a2 / temp_v1;
        } 
        else 
        {
            var_a0 = var_a2 / temp_v0;
            var_a1 = temp_v0;
        }
        
        if (temp_f6 < var_a1) 
        {
            var_a1 = temp_f6;
        }
        
        if (temp_f6 < var_a0) 
        {
            var_a0 = temp_f6;
        }

        var_a1 &= ~3;
        var_a0 &= ~3;
        
        *arg1 = var_a1;
        *arg2 = var_a0;
    }
}

// 0x8037B98C
void func_ovl8_8037B98C(dbMenuSprite *arg0)
{
    dbUnkStruct *temp_v0;
    dbUnknownLinkStruct *temp_v0_2;
    DBMenu sp28;
    dbMenuSprite *var_v1;

    sp28 = D_ovl8_8038A11C;
    
    D_8038EFC0_1AB810 = arg0->unk_dbmenusprite_0x0;
    
    func_ovl8_80371638(D_8038EFC0_1AB810, arg0->unk_dbmenusprite_0x4);
    func_ovl8_8037D2F0();
    
    temp_v0 = func_ovl8_803717A0(0x10);
    
    if (temp_v0 != NULL) 
    {
        func_ovl8_8037C3C0(temp_v0);
        var_v1 = temp_v0;
    } 
    else var_v1 = NULL;
    
    D_8038EFC4_1AB814 = var_v1;
    
    func_ovl8_8037C498(D_8038EFC4_1AB814, D_8038EFC4_1AB814);
    gcAddGObjProcess(func_ovl8_8037C510(D_8038EFC4_1AB814), func_ovl8_8037BD94, 0, 1);
    
    temp_v0_2 = func_ovl8_803717A0(0x68);
    
    if (temp_v0_2 != NULL) 
    {
        func_ovl8_8037CE90(temp_v0_2, &sp28);
        var_v1 = temp_v0_2;
    } 
    else var_v1 = NULL;
    
    D_8038EFC8_1AB818 = var_v1;
    
    func_ovl8_8037CFD8(D_8038EFC8_1AB818, D_8038EFC8_1AB818);
    var_v1 = D_8038EFC8_1AB818;
    gcAddGObjProcess(var_v1->unk_dbmenusprite_0x48, func_ovl8_8037BDF4, 0, 1);
    func_ovl8_8037D63C();
    
    D_8038EFCC_1AB81C = NULL;
    
    dbUiNodeTypeRegisterHandlers();
}

// 0x8037BAD8
void func_ovl8_8037BAD8()
{
	dbFunction* temp_v0;

	if (D_8038EFC4_1AB814 != NULL)
	{
		if (D_8038EFC4_1AB814 != NULL)
		{
			temp_v0 = D_8038EFC4_1AB814->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFC4_1AB814, 3);
		}

		D_8038EFC4_1AB814 = NULL;
	}
}

// 0x8037BB28
void func_ovl8_8037BB28()
{
	dbFunction* temp_v0;

	if (D_8038EFC8_1AB818 != NULL)
	{
		if (D_8038EFC8_1AB818 != NULL)
		{
			temp_v0 = D_8038EFC8_1AB818->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFC8_1AB818, 3);
		}

		D_8038EFC8_1AB818 = NULL;
	}
}

// 0x8037BB78
void func_ovl8_8037BB78()
{
	s32 temp_v0;
	s32 temp_v0_2;

	while(TRUE)
	{
		temp_v0 = func_ovl8_8037499C(1);

		if (temp_v0 != 0)
		{
			func_ovl8_8037488C(temp_v0);
			continue;
		}

		break;
	}

	while (TRUE)
	{
		temp_v0_2 = func_ovl8_8037499C(0);

		if (temp_v0_2 != 0)
		{
			func_ovl8_8037488C(temp_v0_2);
			continue;
		}

		break;
	}

	func_ovl8_8037BD44(temp_v0_2);
	func_ovl8_8037BAD8();
	func_ovl8_8037BB28();
	func_ovl8_8037D34C();
}

// 0x8037BBF0
s32 func_ovl8_8037BBF0(dbUnknown8_S28* arg0, Sprite* sprite, u16 arg2, u16 arg3)
{
	dbTestMenu *temp_v0;
	s32 sp20;
	dbTestMenu *var_v1;

	temp_v0 = func_ovl8_803717A0(0x7C);

	if (temp_v0 != NULL)
	{
		func_ovl8_803759F0(temp_v0, 0, arg0, sprite);
		var_v1 = temp_v0;
	}
	else
		var_v1 = NULL;

	D_8038EFCC_1AB81C = var_v1;
	sp20 = func_ovl8_803723AC(D_8038EFCC_1AB81C, D_8038EFCC_1AB81C, sprite, func_ovl8_8037BEC8, func_ovl8_8037BF34, FALSE);
	func_ovl8_80375B8C(D_8038EFCC_1AB81C, arg2, arg3);

	if (sp20 != 0)
	{
		return sp20;
	}

	func_ovl8_80375C54(D_8038EFCC_1AB81C);

	return 0;
}

// 0x8037BCB8
s32 func_ovl8_8037BCB8()
{
	dbUnknown8_S28 sp18;

	if (D_8038EFCC_1AB81C != NULL)
		return -1;

	sp18 = D_ovl8_8038A144;
	sp18.str = 'Arow'; // 0x41726F77

	return func_ovl8_8037BBF0(&sp18, &D_ovl8_80387EB8, 4, 1);
}

// 0x8037BD44
void func_ovl8_8037BD44()
{
	dbFunction* temp_v0;

	if (D_8038EFCC_1AB81C != NULL)
	{
		if (D_8038EFCC_1AB81C != NULL)
		{
			temp_v0 = D_8038EFCC_1AB81C->db_func;
			temp_v0[1].unk_dbfunc_0x4(temp_v0[1].unk_dbfunc_0x0 + (uintptr_t) D_8038EFCC_1AB81C, 3);
		}

		D_8038EFCC_1AB81C = NULL;
	}
}

// 0x8037BD94
void* func_ovl8_8037BD94(GObj* arg0)
{
	void *temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		func_ovl8_8037C4A4(temp_s0, arg0);
		gcSleepCurrentGObjThread(1);
	}

	return temp_s0;
}

// 0x8037BDF4
void* func_ovl8_8037BDF4(GObj* arg0)
{
	void *temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		func_ovl8_8037CFAC(temp_s0);
		gcSleepCurrentGObjThread(1);
	}

	return temp_s0;
}

// 0x8037BE34
void func_ovl8_8037BE34(GObj* arg0)
{
	dbUnknown5 *temp_s0;
	dbFunction *temp_v0;

	temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		temp_v0 = temp_s0->db_func;
		temp_v0[8].unk_dbfunc_0x4(temp_v0[8].unk_dbfunc_0x0 + (uintptr_t)temp_s0, arg0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BE94
void func_ovl8_8037BE94(GObj* arg0)
{
	dbUnknownS38* temp_a1;
	dbFunction* temp_v0;

	temp_a1 = arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbunks38_0x20)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbunks38_0x20, temp_a1);
}

// 0x8037BEC8
void func_ovl8_8037BEC8(GObj* arg0)
{
	dbTestMenu* temp_s0;
	dbFunction* temp_v0;

	temp_s0 = arg0->user_data.p;

	while (TRUE)
	{
		temp_v0 = ((dbUnknownLinkStruct*)temp_s0->unk_dbtestmenu_0x10)->db_func;
		temp_v0[14].unk_dbfunc_0x4(temp_v0[14].unk_dbfunc_0x0 + (uintptr_t)temp_s0->unk_dbtestmenu_0x10, arg0);
		gcSleepCurrentGObjThread(1);
	}
}

// 0x8037BF34
void func_ovl8_8037BF34(GObj* arg0)
{
	dbTestMenu* temp_a1;
	dbFunction* temp_v0;

	temp_a1 = arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbtestmenu_0x10)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbtestmenu_0x10, temp_a1);
}

// 0x8037BF68
s32 func_ovl8_8037BF68(s32 user_data, Sprite* sprite, void (*proc)(GObj*), void (*proc_display)(GObj*), GObj **camera_out, GObj **sprite_out, sb32 low_priority)
{
	GObj *camera_gobj;
	GObj *sprite_gobj;

	camera_gobj = gcMakeCameraGObj(-0x1FF, gcDefaultFuncRun, 0, 0x80000000, func_80018300, !low_priority ? 2 : 1, 0x8000000000000000ULL, 0, 1, 0, NULL, 1, 0);
	if (camera_gobj == NULL)
		return -1;

	((CObj*)camera_gobj->obj)->flags = 8;
	camera_gobj->camera_tag = camera_gobj;
	if (!low_priority)
	{
		sprite_gobj = gcMakeGObjSPBefore(-0x1FD, NULL, 0x1F, 1);
		if (sprite_gobj == NULL)
			return -1;
	}
	else
	{
		sprite_gobj = gcMakeGObjSPBefore(-0x1FC, NULL, 0x1F, 2);
		if (sprite_gobj == NULL)
			return -1;
	}
	gcAddGObjDisplay(sprite_gobj, proc_display, 0x3F, 1, camera_gobj);
	gcAddSObjForGObj(sprite_gobj, sprite);
	gcAddGObjProcess(sprite_gobj, proc, 0, 1);
	sprite_gobj->user_data.p = user_data;
	*camera_out = camera_gobj;
	*sprite_out = sprite_gobj;
	return 0;
}

// 0x8037C0CC
dbUnknownLinkStruct* func_ovl8_8037C0CC()
{
	return D_8038EFC8_1AB818;
}

// 0x8037C0D8
void func_ovl8_8037C0D8(u16 arg0, u16 arg1, u16 arg2, u16 arg3, s16 arg4, s16 arg5)
{
	if (D_8038EFCC_1AB81C != NULL)
	{
		D_ovl8_80389F30 = arg0;
		D_ovl8_80389F34 = arg1;
		D_ovl8_80389F3C = arg2;
		D_ovl8_80389F38 = arg3;
		D_ovl8_80389F40 = arg4;
		D_ovl8_80389F44 = arg5;
	}
}

// 0x8037C144
void func_ovl8_8037C144(s32 arg0)
{
	if (D_8038EFCC_1AB81C != NULL)
	{
		func_ovl8_80375D44(D_8038EFCC_1AB81C, arg0);
	}
}

// 0x8037C174
s32 func_ovl8_8037C174()
{
	if (D_8038EFCC_1AB81C == NULL)
	{
		return 0;
	}
	return func_ovl8_80375D4C(D_8038EFCC_1AB81C);
}

// 0x8037C1AC
void func_ovl8_8037C1AC(db4Shorts *arg0)
{
	func_ovl8_80375D54(D_8038EFCC_1AB81C, arg0);
}

// 0x8037C1D4
void func_ovl8_8037C1D4(u8** src, u8** dest, s32 count) 
{
    s32 var_a3;
    u8* var_v0;
    u8* var_v1;

    var_v0 = *src;
    var_v1 = *dest;
    var_a3 = count;
    
    while (var_a3 > 0) 
    {
        u8 curr = *var_v0;
        u32 next = *var_v0 + 1;
        
        if (curr & 0x80) 
        {
            s16 run_length = (u8)(-curr++) + 1;
            s16 temp_t1;
            var_v0++;

            temp_t1 = run_length--;
            
            while (temp_t1) 
            {
                u8 *a2 = var_v1++;\
                temp_t1 = run_length--;
                *a2 = *var_v0;
                var_a3--;
            }
            
            var_v0++;
        } 
        else 
        {
            s16 run_length = curr++ + 1;
            s16 temp_t1;
            var_v0++;

            temp_t1 = run_length--;
            
            while (temp_t1) 
            {
                u8 *a2 = var_v1++, *t2 = var_v0++;\
                temp_t1 = run_length--;
                *a2 = *t2;
                var_a3--;
            }
        }
    }
    
    *src = var_v0;
    *dest = var_v1;
}
