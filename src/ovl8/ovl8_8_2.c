#define DBFUNCTION_VARARGS 1
extern "C" {
#include <sys/objman.h>
#include <sys/objhelper.h>
#include <sys/objdisplay.h>
#include <sys/develop.h>
#include <db/debug.h>

s32 func_ovl8_8037A6D4(db4Shorts *rect1, db4Shorts *rect2, db4Shorts *intersection);
void func_ovl8_8037AA88(s32 arg0, s32 arg1, s32 arg2, s32 arg3, dbUnknown7* arg4);

typedef struct UiLineStepper {
    s32 startX;                 /* dbUnknown8_8_0x0*/
    s32 startY;                 /* dbUnknown8_8_0x4*/
	
    s32* errorSub;              /* dbUnknown8_8_0x8   (usually dx or dy)*/
    s32* errorAdd;              /* dbUnknown8_8_0xC   (usually 2*minor)*/

    s32 endX;                   /* dbUnknown8_8_0x10*/
    s32 endY;                   /* dbUnknown8_8_0x14*/
	
    s32* stepPrimary;           /* dbUnknown8_8_0x18  (dx or dy)*/
    s32* stepSecondary;         /* dbUnknown8_8_0x1C  (other axis)*/
	
    s32 currentX;               /* dbUnknown8_8_0x20*/
    s32 currentY;               /* dbUnknown8_8_0x24*/
	
    s32* posPrimary;            /* dbUnknown8_8_0x28  (&currentX or &currentY)*/
    s32* posSecondary;          /* dbUnknown8_8_0x2C  (&currentY or &currentX)*/
	
    s32 stepsRemaining;         /* dbUnknown8_8_0x30*/
    s32 totalSteps;             /* dbUnknown8_8_0x34*/

    s32 error;                  /* dbUnknown8_8_0x38*/
} UiLineStepper;

void func_ovl8_80377B40(Sprite*, s16*);
void func_ovl8_80377F50(Sprite*, db4Shorts*);
void func_ovl8_80377FE4(Sprite*, db4Shorts*, db4Shorts*);
void func_ovl8_803780B8(Sprite*, DBMenuPosition*);
s32 func_ovl8_8037A67C(s16*, s16*, s16*);
void func_ovl8_8037A904(db4Shorts*, db4Shorts*);
void func_ovl8_8037A9C0(db4Shorts*, s32, s32);
void func_ovl8_8037A9F4(DBMenuPosition*, DBMenuPosition*);
void func_ovl8_8037AA28(db4Shorts*, db4Shorts*);
s32 func_ovl8_8037AA5C(DBMenuPosition*);
s32 func_ovl8_8037ABDC(Vec2h*, UiLineStepper*);
void func_ovl8_8037B46C(Sprite*, DBMenuPosition*, dbUnknown8_SC*, s32); 
/* Spelled out for C++, where an empty parameter list means "(void)" and would
   not match these definitions in ovl8_8_2.c. C keeps the unspecified form. */
void func_ovl8_8037BD44();
#ifdef __cplusplus
void func_ovl8_8037BEC8(GObj*);
void func_ovl8_8037BF34(GObj*);
#else
void func_ovl8_8037BEC8();
void func_ovl8_8037BF34();
#endif
void* func_ovl8_8037BDF4(GObj*);
void* func_ovl8_8037BD94(GObj*);

/* BSS*/
extern s32 D_ovl8_8038EE60;
extern s32 D_ovl8_8038EE64;
extern s32 D_ovl8_8038EE68[];
extern s32 D_ovl8_8038EE70[];
extern Gfx D_8038EE90_1AB6E0[];

/* DATA*/
extern s32 D_ovl8_80389F5C;
extern s32 D_ovl8_80389F60;
extern s32 D_ovl8_80389F64;
extern Sprite D_ovl8_80389F70;    /* Template sprite structure*/
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

/* DATA -- defined in ovl8_8.c */
extern s32 D_ovl8_80387CA0[];
extern s32 D_ovl8_80387CA8[];
extern Bitmap D_ovl8_80387EA8;
extern Sprite D_ovl8_80387EB8;
extern s32 D_ovl8_80387EFC;
extern char D_ovl8_80387F00[];
extern char D_ovl8_80387F04[];
extern char D_ovl8_80387F08[];
extern char D_ovl8_80387F0C[];
extern char D_ovl8_80387F10[];
extern char D_ovl8_80387F14[];
extern char D_ovl8_80387F18[];
extern char D_ovl8_80387F1C[];
extern char D_ovl8_80387F20[];
extern char D_ovl8_80387F24[];
extern char D_ovl8_80387F28[];
extern char D_ovl8_80387F2C[];
extern char D_ovl8_80387F30[];
extern char D_ovl8_80387F34[];
extern char D_ovl8_80387F38[];

void  func_ovl8_80371638(...);
void* func_ovl8_803717A0(...);
void  func_ovl8_80371764(...);
s32   func_ovl8_803723AC(...);
void  func_ovl8_8037488C(...);
s32   func_ovl8_8037499C(...);
void*  func_ovl8_803759F0(...);
void  func_ovl8_80375B8C(...);
void  func_ovl8_80375C54(...);
void  func_ovl8_80375D44(...);
s32   func_ovl8_80375D4C(...);
void  func_ovl8_80375D54(...);
void  func_ovl8_80376EE0(...);
void  func_ovl8_80377AEC(...);
void*  func_ovl8_8037C3C0(...);
void  func_ovl8_8037C498(...);
void  func_ovl8_8037C4A4(...);
void* func_ovl8_8037C510(...);
void  func_ovl8_8037CE90(...);
void  func_ovl8_8037CFAC(...);
void  func_ovl8_8037CFD8(...);
void  func_ovl8_8037D2F0(...);
void  func_ovl8_8037D34C(...);
void  func_ovl8_8037D63C(...);
void  dbUiNodeTypeRegisterHandlers(...);
void* func_ovl8_803716D8(...);

// 0x8037A9C0
void func_ovl8_8037A9C0(db4Shorts* arg0, s32 arg1, s32 arg2)
{
	arg0->arr[0] = arg0->arr[0] + arg1,
	arg0->arr[2] = arg0->arr[2] + arg1;
	arg0->arr[1] = arg0->arr[1] + arg2,
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
    arg4->unk20 = (dbUnknownLinkStruct*)arg0;
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
        arg4->unk18 = (s32)((u8*)arg4 + 0x10);
        arg4->unk1C = (dbUnknownLink *) ((u8*)arg4 + 0x14);
    } else {
        arg4->unk30 = arg4->unk4;
        arg4->unk28 = ((u8*)arg4 + 0x24);
        arg4->unk2C = ((u8*)arg4 + 0x20);
        arg4->unk8 = (s32*) ((u8*)arg4 + 4);
        arg4->unkC = (s32*) arg4;
        arg4->unk18 = (s32)((u8*)arg4 + 0x14);
        arg4->unk1C = (dbUnknownLink *) ((u8*)arg4 + 0x10);
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
Sprite *func_ovl8_8037ACAC(s32 width, s32 height, s32 pixel_format, s32 tile_width, s32 tile_height)
{
    s32 num_bitmaps;
    s32 bytes_per_pixel;
    u8 *pixel_data;
    u8 *raw_alloc;
    Bitmap *bitmap_array;
    s32 tiles_wide;
    s32 tiles_high;
    s32 alignment;
    s32 tile_width_aligned;
    s32 tile_height_max;
    s32 pixel_offset;
    s32 remaining_width;
    s32 remaining_height;
    s32 total_pixel_bytes;
    s32 bitmap_idx;
    s32 actual;
    s32 width_remainder;
    s32 height_remainder;
    s32 i;
    s32 rows;
    s32 j;
    s32 cols;
    Sprite *sprite;
    s32 max_texture_size;

    switch (pixel_format)
    {
        case 1:
            bytes_per_pixel = 1;
            max_texture_size = 0x800;
            alignment = 8;
            break;

        case 2:
            bytes_per_pixel = 2;
            max_texture_size = 0x800;
            alignment = 4;
            break;

        case 3:
            bytes_per_pixel = 4;
            max_texture_size = 0x400;
            alignment = 4;
            break;

    }

    if (tile_width <= width) {
        actual = tile_width;
    } else {
        actual = width;
    }
    tile_width_aligned = actual;

    if ((tile_width_aligned % alignment) != 0) {
        actual = alignment;
    } else {
        actual = 0;
    }
    tile_width_aligned = ((tile_width_aligned / alignment) * alignment) + actual;
    tiles_wide = width / tile_width_aligned;
    
    width_remainder = width % tile_width_aligned;
        
    if (width_remainder != 0)
    {
        actual = (((width_remainder % alignment) != 0) ? (alignment) : (0));
        width_remainder = ((width_remainder / alignment) * alignment) + actual;
        if (width_remainder == 0)
        {
            width_remainder = alignment;
        }
    }
    
    actual = (tile_height <= height) ? (tile_height) : (height);
    
    tile_height_max = actual;
    if (max_texture_size < (actual * tile_width_aligned))
    {
        tile_height_max = max_texture_size / tile_width_aligned;
    }
    
    tiles_high = height / tile_height_max;
    height_remainder = height % tile_height_max;
    total_pixel_bytes = ((((((tile_width_aligned * tile_height_max) * bytes_per_pixel) * tiles_wide) * tiles_high) + (((width_remainder * tile_height_max) * tiles_high) * bytes_per_pixel)) + (((tile_width_aligned * height_remainder) * tiles_wide) * bytes_per_pixel)) + ((width_remainder * height_remainder) * bytes_per_pixel);
    
    cols = tiles_wide;

    if (width_remainder) {
        actual = 1;
    } else {
        actual = 0;
    }
    
    cols += actual;
    rows = tiles_high;

    if (height_remainder) {
        actual = 1;
    } else {
        actual = 0;
    }

    rows += actual;

    if ((((tiles_wide > 0) && (tiles_high > 0)) && (width_remainder != 0)) && (height_remainder != 0)) {
        actual = 1;
    } else {
        actual = 0;
    }

    num_bitmaps = (cols * rows) + actual;
    
    raw_alloc = pixel_data = (u8 *) func_ovl8_803716D8(total_pixel_bytes + 8);

    if (((uintptr_t) raw_alloc) & 7)
    {
        pixel_data = (raw_alloc - (((uintptr_t) raw_alloc) & 7)) + 8;
    }
    for (i = 0; i < total_pixel_bytes; i++) pixel_data[i] = 0xFF;

    bitmap_array = (Bitmap *) func_ovl8_803716D8(num_bitmaps * 0x10);
    remaining_height = height;
    pixel_offset = 0;
    bitmap_idx = 0;
    
    for (i = 0; i < rows; i++)
    {
        remaining_width = width;
        for (j = 0; j < cols; j++)
        {
            if (remaining_width >= tile_width_aligned)
            {
                bitmap_array[bitmap_idx].width = tile_width_aligned;
                bitmap_array[bitmap_idx].width_img = tile_width_aligned;
            }
            else
            {
                bitmap_array[bitmap_idx].width = remaining_width;
                bitmap_array[bitmap_idx].width_img = width_remainder;
            }
            if (tile_height_max <= remaining_height)
            {
                bitmap_array[bitmap_idx].actualHeight = tile_height_max;
            }
            else
            {
                bitmap_array[bitmap_idx].actualHeight = remaining_height;
            }
            
            bitmap_array[bitmap_idx].buf = (void *) (pixel_data + pixel_offset);
            bitmap_array[bitmap_idx].s = 0;
            bitmap_array[bitmap_idx].t = 0;
            bitmap_array[bitmap_idx].LUToffset = 0;
            pixel_offset += (bitmap_array[bitmap_idx].width_img * bitmap_array[bitmap_idx].actualHeight) * bytes_per_pixel;
            remaining_width -= tile_width_aligned;
            bitmap_idx++;
        }

        remaining_height -= tile_height_max;
    }

    sprite = (Sprite *) func_ovl8_803716D8(0x48);
    *sprite = D_ovl8_80389F70;
    
    if ((pixel_format == 1) || (pixel_format == 2))
    {
        actual = 0x220;
    }
    else
    {
        actual = 0x201;
    }
    sprite->attr = actual;
    sprite->bmsiz = pixel_format;
    sprite->height = height;
    sprite->nbitmaps = num_bitmaps;
    sprite->width = width;
    sprite->bmheight = tile_height_max;
    sprite->bmHreal = tile_height_max;
    sprite->ndisplist = (num_bitmaps * 12) + 24;
    sprite->bitmap = bitmap_array;
    sprite->rsp_dl = 0;
    *((void **) ((u8 *)(actual = (s32) sprite) + 0x44)) = raw_alloc;
    
    if (pixel_format == 1)
    {
        sprite->bmfmt = 2;
        sprite->nTLUT = 0x100;
        sprite->LUT = (int *) func_ovl8_803716D8(0x200);
    }

    return sprite;
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
		var_a2 = (dbUnknown8_SC*)&D_ovl8_8038A068;
	}
	else
	{
		var_a2 = (dbUnknown8_SC*)&D_ovl8_80389FB4;
	}

	func_ovl8_8037B46C(arg0, (DBMenuPosition*)arg1, var_a2, (s32)arg3);
}

// 0x8037B46C
void func_ovl8_8037B46C(Sprite* arg0, DBMenuPosition* arg1, dbUnknown8_SC* arg2, s32 arg3) 
{
    s32 var_v0;
    DBMenuPosition abs;
    s16 temp1, temp2;
	db4Bytes sp44;
    dbUnknown8_SC* var_s1;

    for (var_s1 = arg2; 0x7FFF != var_s1->x0; var_s1++) 
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

        func_ovl8_80376EE0((u8*)arg3, (u8*)&sp44, var_s1->dbUnknown8_SC_0x8);
        func_ovl8_80377AEC(arg0, (db4Shorts*)&abs, (u8*)&sp44, 4);
    }
}

// 0x8037B5F8
s32 stringToNumberSigned(char* str)
{
	s32 num = 0;
	s32 sign;

    if (str[0] == '-') {
        str++;
        sign = -1;
    } else {
        sign = 1;
    }

	while (str[0] != '\0')
	{
		num *= 10;
		num += *str - '0';
        str++;
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
void func_ovl8_8037B760(u8* src, u8* dest, s32 len) 
{
    u8* temp_src;
    u8* temp_dest;
    
    if (src >= dest) 
    {
        temp_src = src;
        temp_dest = dest;
        
        while (len--)
        {
            *temp_dest++ = *temp_src++;
        }
    } 
    else 
    {
        temp_src = src + len - 1;
        temp_dest = dest + len - 1;
        
        while (len--)
        {
            *temp_dest-- = *temp_src--;
        }
    }
}

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
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 temp_f6;

    var_a2 = (arg0 == 1) ? 0x800 : (arg0 == 2) ? 0x800 : 0x400;
    
    temp_f6 = sqrtf(var_a2);
    
    if (var_a2 < (*arg1 * *arg2)) 
    {
        if (*arg1 >= *arg2) 
        {
            var_a0 = *arg2;
            var_a1 = var_a2 / *arg2;
        } 
        else 
        {
            var_a0 = var_a2 / *arg1;
            var_a1 = *arg1;
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
    
    temp_v0 = (dbUnkStruct*)func_ovl8_803717A0(0x10);
    
    if (temp_v0 != NULL) 
    {
        func_ovl8_8037C3C0(temp_v0);
        var_v1 = (dbMenuSprite*)temp_v0;
    } 
    else var_v1 = NULL;
    
    D_8038EFC4_1AB814 = (dbUnkStruct*)var_v1;
    
    func_ovl8_8037C498(D_8038EFC4_1AB814, D_8038EFC4_1AB814);
    gcAddGObjProcess((GObj*)func_ovl8_8037C510(D_8038EFC4_1AB814), (void (*)(GObj*))func_ovl8_8037BD94, 0, 1);
    
    temp_v0_2 = (dbUnknownLinkStruct*)func_ovl8_803717A0(0x68);
    
    if (temp_v0_2 != NULL) 
    {
        func_ovl8_8037CE90(temp_v0_2, &sp28);
        var_v1 = (dbMenuSprite*)temp_v0_2;
    } 
    else var_v1 = NULL;
    
    D_8038EFC8_1AB818 = (dbUnknownLinkStruct*)var_v1;
    
    func_ovl8_8037CFD8(D_8038EFC8_1AB818, D_8038EFC8_1AB818);
    var_v1 = (dbMenuSprite*)D_8038EFC8_1AB818;
    gcAddGObjProcess(var_v1->unk_dbmenusprite_0x48, (void (*)(GObj*))func_ovl8_8037BDF4, 0, 1);
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

	func_ovl8_8037BD44();
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

	temp_v0 = (dbTestMenu*)func_ovl8_803717A0(0x7C);

	if (temp_v0 != NULL)
	{
		func_ovl8_803759F0(temp_v0, 0, arg0, sprite);
		var_v1 = (dbTestMenu*)temp_v0;
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

	temp_s0 = (dbUnknown5 *)arg0->user_data.p;

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

	temp_a1 = (dbUnknownS38 *)arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbunks38_0x20)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbunks38_0x20, temp_a1);
}

// 0x8037BEC8
void func_ovl8_8037BEC8(GObj* arg0)
{
	dbTestMenu* temp_s0;
	dbFunction* temp_v0;

	temp_s0 = (dbTestMenu *)arg0->user_data.p;

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

	temp_a1 = (dbTestMenu *)arg0->user_data.p;
	temp_v0 = ((dbUnknownLinkStruct*) temp_a1->unk_dbtestmenu_0x10)->db_func;
	temp_v0[11].unk_dbfunc_0x4(temp_v0[11].unk_dbfunc_0x0 + (uintptr_t)temp_a1->unk_dbtestmenu_0x10, temp_a1);
}

// 0x8037BF68
s32 func_ovl8_8037BF68(s32 user_data, Sprite* sprite, void (*proc)(GObj*), void (*proc_display)(GObj*), GObj **camera_out, GObj **sprite_out, sb32 low_priority)
{
	GObj *camera_gobj;
	GObj *sprite_gobj;

	camera_gobj = gcMakeCameraGObj(-0x1FF, gcDefaultFuncRun, 0, 0x80000000, func_80018300, low_priority == 0 ? 2 : 1, 0x8000000000000000ULL, 0, 1, 0, NULL, 1, 0);
	if (camera_gobj == NULL)
		return -1;

	((CObj*)camera_gobj->obj)->flags = 8;
	camera_gobj->camera_tag = (u32)camera_gobj;
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
	gcAddGObjDisplay(sprite_gobj, proc_display, 0x3F, 1, (u32)camera_gobj);
	gcAddSObjForGObj(sprite_gobj, sprite);
	gcAddGObjProcess(sprite_gobj, proc, 0, 1);
	sprite_gobj->user_data.p = (void*)user_data;
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
        u16 curr = *var_v0;

        if (*var_v0 & 0x80) 
        {
            s16 run_length = (u8)-curr;

            if (curr++);
            
            var_v0++;

            if (run_length++);
            
            while (run_length--) { *var_v1++ = *var_v0; var_a3--; }
            
            var_v0++;
        } 
        else 
        {
            s16 run_length = curr;

            if (curr);
            
            var_v0++;
            
            if (run_length++);

            while (run_length--) { *var_v1++ = *var_v0++; var_a3--; }
        }
    }
    
    *src = var_v0;
    *dest = var_v1;
}
}