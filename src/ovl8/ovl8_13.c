#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>


typedef struct dbUnknownS14 {
    s32 dbUnknownS14_0x0;
    db4Bytes dbUnknownS14_0x4;
    db4Bytes dbUnknownS14_0x8;
    s32 dbUnknownS14_0xC;
    s32 dbUnknownS14_0x10;
} dbUnknownS14;

typedef struct dbUnknown8_13
{
	u16 unk_dbunknown8_13_0x0;
	u16 width;
	u16 height;
	DBFontPadding padding;
	u8 bits_per_pixel;
	s32 unk_dbunknown8_13_0xc;
} dbUnknown8_13;

extern db4Bytes D_ovl8_80389F4C;
extern db4Bytes D_ovl8_80389F50;
extern GObj* D_ovl8_8038A860;
extern s16 D_ovl8_8038A864;
extern db4Bytes D_ovl8_8038A890[];
extern dbUnknownLinkStruct D_ovl8_8038A8A0;
extern dbFunction D_ovl8_8038A980;
extern dbUnknownLink D_ovl8_8038AAD8;
extern dbUnknownLinkStruct D_ovl8_8038AB00;

extern Vec3i D_8038EFE0_1AB830;
extern s32 D_8038EFEC_1AB83C;
extern Vec3i D_8038EFF0_1AB840;
extern s16 D_8038EFFC_1AB84C;
extern db4Shorts D_8038F000_1AB850;
extern DBFont D_8038F008_1AB858;
extern dbUnknown8_13 D_8038F020_1AB870;
extern s16 D_8038F030_1AB880;
extern u16 D_8038F032_1AB882;
extern f32 D_8038F034_1AB884;
extern f32 D_8038F038_1AB888;
extern void *D_8038F040_1AB890;
extern void* D_8038F03C_1AB88C;
extern u16 D_8038F044_1AB894;
extern u16 D_8038F046_1AB896;
extern u16 D_8038F048_1AB898;

extern dbUnknownS14 D_8038FB90_1AC3E0;
extern db4Bytes D_8038FB98_1AC3E8;

void func_ovl8_8037D000();
void func_ovl8_8037D45C();
void func_ovl8_8037D470(u16, u16, u8*, u8*);
void func_ovl8_8037D518(u16, u16, u8*, u8*);
void func_ovl8_8037D5AC(u16, u16, u8*, u8*);
void func_ovl8_8037D990(s32);
void func_ovl8_8037D99C(s32);
void func_ovl8_8037D9A8(s32);
void func_ovl8_8037D9B4(db4Bytes*);
void func_ovl8_8037D9D0(db4Bytes*);
void func_ovl8_8037D9EC(u16, u16);

// 0x8037D000
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D000.s")

// 0x8037D28C
s32 func_ovl8_8037D28C() 
{
	SYController *controller = &gSYControllerMain;
    s32 mask = 0;
    s16 threshold = D_ovl8_8038A864;\
    s8 range = controller->stick_range.x;
    
    if (range > threshold) 
    {
        mask = 0x40000;
    }
    if (range < -threshold) 
    {
        mask |= 0x80000;
    }

    range = controller->stick_range.y;
    
    if (range > threshold) 
    {
        mask |= 0x10000;
    }
    if (range < -threshold) 
    {
        mask |= 0x20000;
    }
    
    return mask;
}

// 0x8037D2F0
s32 func_ovl8_8037D2F0()
{
    D_ovl8_8038A860 = gcMakeGObjSPAfter(-0x1FA, func_ovl8_8037D000, 0, -1);

    if (D_ovl8_8038A860 == 0)
    {
        return -1;
    }

    func_ovl8_8037D45C();

    D_8038EFFC_1AB84C = 0;

    return 0;
}

// 0x8037D34C
void func_ovl8_8037D34C()
{
	if (D_ovl8_8038A860 != NULL)
	{
		gcEjectGObj(D_ovl8_8038A860);
		D_ovl8_8038A860 = NULL;
	}
}

// 0x8037D384
sb32 func_ovl8_8037D384()
{
    sb32 var_v1 = D_8038EFE0_1AB830.x != 0;

    if (var_v1 == FALSE)
    {
        var_v1 = D_8038EFE0_1AB830.y != 0;
    }

    return var_v1;
}

// 0x8037D3AC
Vec3i* func_ovl8_8037D3AC(Vec3i* arg0)
{
    *arg0 = D_8038EFE0_1AB830;
    D_8038EFE0_1AB830.x = 0;
    D_8038EFE0_1AB830.y = 0;

    return arg0;
}

// 0x8037D3DC
void *func_ovl8_8037D3DC(Vec3i *arg0)
{
    D_8038EFE0_1AB830 = *arg0;
    return arg0;
}

// 0x8037D404
void* func_ovl8_8037D404(Vec3i* arg0, s32 arg1)
{
    D_8038EFEC_1AB83C = arg1;
    D_8038EFF0_1AB840 = *arg0;

    return arg0;
}

// 0x8037D434
void* func_ovl8_8037D434(Vec3i* arg0)
{
    D_8038EFE0_1AB830 = *arg0;

    return arg0;
}

// 0x8037D45C
void func_ovl8_8037D45C()
{
    D_8038EFE0_1AB830.y = 0;
    D_8038EFE0_1AB830.x = 0;
}

// 0x8037D470
void func_ovl8_8037D470(u16 totalBits, u16 rowBits, u8* src, u8* dest) 
{
    u32 bitInByte;
    u32 bitInRow;
    
    for(bitInRow = bitInByte = 0; totalBits != 0; totalBits--)
    {
        u32 b, nibble;
        u8* temp_dest = dest++; 
        
        nibble = ((bitInByte & 1) ? (*src & 0xF) : ((*src >> 4) & 0xF)); 
        *temp_dest = nibble;
        
        if (FALSE);
        b = bitInByte++;

        if ((b & 1) != 0) 
        {
            bitInByte = 0;
            src++;
        }

        bitInRow++;

        if (bitInRow == rowBits) 
        {
            if (bitInByte != 0) 
            {
                src++;
            }

            bitInByte = 0;
            bitInRow = 0;
        }
    }
}

// 0x8037D518
void func_ovl8_8037D518(u16 totalPixels, u16 rowPixels, u8* src, u8* dest) 
{
    u32 pixelInByte;
    u32 bitInRow;
    
    for(bitInRow = pixelInByte = 0; totalPixels != 0; totalPixels--)
    {
        u32 b = pixelInByte;
        u8* temp_dest = dest++; *temp_dest = (((*src >> (3 - (b & 3) << 1))) & 3);
        
        if (FALSE);
        b = pixelInByte++;

        if ((b & 3) == 3) 
        {
            pixelInByte = 0;
            src++;
        }

        bitInRow++;

        if (bitInRow == rowPixels) 
        {
            if (pixelInByte != 0) 
            {
                src++;
            }

            pixelInByte = 0;
            bitInRow = 0;
        }
    }
}

// 0x8037D5AC
void func_ovl8_8037D5AC(u16 totalPixels, u16 rowPixels, u8* src, u8* dest) 
{
    u32 pixelInByte;
    u32 bitInRow;
    
    for(bitInRow = pixelInByte = 0; totalPixels != 0; totalPixels--)
    {
        u32 b = pixelInByte;
        u8* temp_dest = dest++; *temp_dest = ((*src >> (7 - (b & 7))) & 1);
        
        if (FALSE);
        b = pixelInByte++;

        if ((b & 7) == 7) 
        {
            pixelInByte = 0;
            src++;
        }

        bitInRow++;

        if (bitInRow == rowPixels) 
        {
            if (pixelInByte != 0) 
            {
                src++;
            }

            pixelInByte = 0;
            bitInRow = 0;
        }
    }
}

// 0x8037D63C
void func_ovl8_8037D63C() 
{
    db4Bytes thing[2];

    thing[1] = D_ovl8_8038A890[0];
    thing[0] = D_ovl8_8038A890[1];
    D_8038F000_1AB850.arr[0] = D_8038F000_1AB850.arr[1] = 0;
    D_8038F048_1AB898 = 0;
    
    func_ovl8_8037D990(0x10);
    func_ovl8_8037D9D0(&thing[1]);
    func_ovl8_8037D9B4(&thing[0]);
    func_ovl8_8037D9EC(0, 0);
    func_ovl8_8037D99C(0);
    func_ovl8_8037D9A8(0);
}

// 0x8037D6D4
void func_ovl8_8037D6D4(DBFont* dbFont)
{
	u16 temp_a1;
	s32 var_v0;

	D_8038F008_1AB858 = *dbFont;
	temp_a1 = (D_8038F008_1AB858.width * D_8038F008_1AB858.bits_per_pixel) & 0xFFFF;
	var_v0 = (temp_a1 & 7 ? 1 : 0);

	D_8038F030_1AB880 = ((temp_a1 / 8) + var_v0) * D_8038F008_1AB858.height;
	D_8038F034_1AB884 = D_8038F008_1AB858.bits_per_pixel == 1 ? 1.0f : (f32) (1 << D_8038F008_1AB858.bits_per_pixel);

	if (D_8038F008_1AB858.bits_per_pixel == 1)
	{
		D_8038F03C_1AB88C = func_ovl8_8037D5AC;
		return;
	}
	if (D_8038F008_1AB858.bits_per_pixel == 2)
	{
		D_8038F03C_1AB88C = func_ovl8_8037D518;
		return;
	}
	D_8038F03C_1AB88C = func_ovl8_8037D470;
}

// 0x8037D7D4
void func_ovl8_8037D7D4(dbUnknown8_13 *arg0) {
    u16 temp_a1 = 0;
    s32 var_v0 = 0;

    D_8038F020_1AB870 = *arg0;
    temp_a1 = D_8038F020_1AB870.width * D_8038F020_1AB870.bits_per_pixel;
    var_v0 = (temp_a1 & 7 ? 1 : 0);
    
    D_8038F032_1AB882 = ((temp_a1 / 8) + var_v0) * D_8038F020_1AB870.height;
    D_8038F038_1AB888 = D_8038F020_1AB870.bits_per_pixel == 1 ? 1.0f : (f32) (1 << D_8038F020_1AB870.bits_per_pixel);

    if (D_8038F020_1AB870.bits_per_pixel == 1)
    {
        D_8038F040_1AB890 = &func_ovl8_8037D5AC;
        return;
    }
    if (D_8038F020_1AB870.bits_per_pixel == 2)
    {
        D_8038F040_1AB890 = &func_ovl8_8037D518;
        return;
    }
    D_8038F040_1AB890 = &func_ovl8_8037D470;
}

// 0x8037D8CC
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037D8CC.s")

// 0x8037D908
void func_ovl8_8037D908(dbUnknownS14* arg0)
{
    D_8038FB90_1AC3E0 = *arg0;

    func_ovl8_8037D9B4(&D_8038FB98_1AC3E8);
}

// 0x8037D95C
void func_ovl8_8037D95C(dbUnknownS14* arg0)
{
    *arg0 = D_8038FB90_1AC3E0;
}

// 0x8037D990
void func_ovl8_8037D990(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x0 = arg0;
}

// 0x8037D99C
void func_ovl8_8037D99C(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0xC = arg0;
}

// 0x8037D9A8
void func_ovl8_8037D9A8(s32 arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x10 = arg0;
}

// 0x8037D9B4
void func_ovl8_8037D9B4(db4Bytes* arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x8 = *arg0;
}

// 0x8037D9D0
void func_ovl8_8037D9D0(db4Bytes* arg0)
{
    D_8038FB90_1AC3E0.dbUnknownS14_0x4 = *arg0;
}

// 0x8037D9EC
void func_ovl8_8037D9EC(u16 arg0, u16 arg1)
{
    D_8038F044_1AB894 = arg0;
    D_8038F046_1AB896 = arg1;
}

// 0x8037DA08
u32 func_ovl8_8037DA08(u8 arg0, u8 arg1) 
{
    arg0 = arg0 & 0x7F;
    arg1 = arg1 & 0x7F;
    
    arg1 = (arg0 & 1) ? arg1 + 0x1F : arg1 + 0x7D;
    arg0 = ((arg0 - 0x21) >> 1) + 0x81;
    
    if (arg1 >= 0x7F) 
    {
        arg1 += 0x01;
    }
    
    if (arg0 >= 0xA0) 
    {
        arg0 += 0x40;
    }
    
    return (((arg0 * 0xC0) + arg1) - 0x6100) * D_8038F032_1AB882;
}

// 0x8037DAA0
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DAA0.s")

void func_ovl8_8037DD60(DBMenuPosition* pos, char* text)
{
	s16 temp_s5;
	char current;

	temp_s5 = D_8038F000_1AB850.arr[0];
	for (current = *text; current != '\0'; text++, current = *text)
	{
		if (current == '\n')
		{
			D_8038F000_1AB850.arr[0] = temp_s5;
			D_8038F000_1AB850.arr[1] = D_8038F008_1AB858.height + D_8038F000_1AB850.arr[1] + D_8038F046_1AB896;
		}
		else
			func_ovl8_8037DAA0(pos, current);
	}
}

// 0x8037DE1C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DE1C.s")

void func_ovl8_8037DFCC(s16 arg0, s16 arg1)
{
	D_8038F000_1AB850.arr[1] = arg1;
	D_8038F000_1AB850.arr[0] = arg0;
}

// 0x8037DFF8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037DFF8.s")

// 0x8037E6F4
u32 func_ovl8_8037E6F4(u8 arg0) {
    u32 retVal;
    u32 var_a0;
    DBFontPadding* temp_v0;

    if (D_8038F048_1AB898 & 0xFF00) 
    {
        D_8038F048_1AB898 = 0;
        
        retVal = D_8038F020_1AB870.width;
    }
    else if (arg0 & 0x80) 
    {
        D_8038F048_1AB898 = (arg0 & 0xFF) << 8;
        
        retVal = 0;
    }
    else if (((arg0 >= ' ') && (arg0 <= '~')) || ((arg0 >= 0xA0) && (arg0 < 0xE0))) 
    {
        var_a0 = (arg0 >= 0xA1) ? arg0 - 'A' : arg0 - ' ';
        
        retVal = (D_8038F008_1AB858.width - D_8038F008_1AB858.padding[var_a0].left_padding) - D_8038F008_1AB858.padding[var_a0].right_padding;
    }
    else retVal = 0;
    
    return retVal;
}

// 0x8037E7A8
s32 func_ovl8_8037E7A8(u8 * s) 
{
    s32 width = 0;

    if (s == NULL) {
        return 0;
    }
    
    while (*s != 0) {
        u8 *p = s++;\
        width += func_ovl8_8037E6F4(*p);   
    }
    
    return width;
}

// 0x8037E80C
u16 func_ovl8_8037E80C()
{
    return D_8038F008_1AB858.height;
}

// 0x8037E818
u16 func_ovl8_8037E818()
{
    return D_8038F044_1AB894;
}

// 0x8037E824
u16 func_ovl8_8037E824()
{
    return D_8038F046_1AB896;
}

// 0x8037E830
typedef struct {
    s32 unk0[0x10/4];
    u16 unk10;
    s32 unk14[0x10/4];
    s32 unk24;
} UnkStruct8037E830;
s32 func_ovl8_8037E830(s32 arg0, UnkStruct8037E830 *arg1)
{
    s32 sp34;
    s32 temp_v0;
    s32 sp2C;
    s32 var_v1;

    temp_v0 = arg1->unk10;

    if (temp_v0 == 2)
        sp2C = 2;
    else if (temp_v0 == 5)
        sp2C = 3;
    
    sp34 = func_ovl8_803717A0(0x120);
    if (sp34 != 0)
    {
        func_ovl8_8037E97C(sp34, 0, 0, arg1, sp2C, arg1->unk24, arg0);
        var_v1 = sp34;
    }
    else
        var_v1 = 0;
    
    return var_v1;
}

// 0x8037E8C8
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E8C8.s")

// 0x8037E97C
#pragma GLOBAL_ASM("asm/nonmatchings/ovl8/ovl8_13/func_ovl8_8037E97C.s")

// 0x8037EB00
void func_ovl8_8037EB00(dbUnknown5* arg0, s32 arg1)
{
    s32 temp_a0;

    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038A8A0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038A980;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038AAD8;
        arg0->unk_dbunk5_0x4C = &D_ovl8_8038AB00;

        temp_a0 = arg0->unk_dbunk5_0xB0;
        arg0->unk_dbunk5_0x48 = 0;
        arg0->unk_dbunk5_0xB0 = 0;
        arg0->unk_dbunk5_0xB4 = 0;

        if (temp_a0 != 0) {
            func_ovl8_8037B3E4(temp_a0);
        }

        func_ovl8_8037C92C(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
            func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x8037EBC8
void func_ovl8_8037EBC8(dbUnknown5* arg0) 
{
    u16 sp56;
    u16 sp54;
    s32* sp50;
    s32 sp4C;
    char* str;
    s32 unused2;
    s32 a0;
    s32 a1;
    dbUnknownS14* sp38;
    Vec2h sp34;
    db4Bytes sp30;
    dbFunction* temp_v1;
    f32 unused3;

    str = &arg0->unk_dbunk5_0xC;
    
    if (arg0->unk_dbunk5_0x48 != NULL) 
    {
        sp4C = func_ovl8_8037E7A8(str);
        
        temp_v1 = arg0->unk_dbunk5_0x4C;
        temp_v1[4].unk_dbfunc_0x4(temp_v1[4].unk_dbfunc_0x0 + (uintptr_t)&arg0->unk_dbunk5_0x40, &sp50);
        
        func_ovl8_8037D95C(&sp38);
        func_ovl8_8037D990(0x10);

        if (arg0->unk_dbunk5_0x0 == (0.0F, 0.0F)) 
        {
            func_ovl8_8037B434(arg0->unk_dbunk5_0xB4, &sp50, 0, &arg0->unk_dbunk5_0x38->bg_color);
            func_ovl8_8037D9D0(&D_ovl8_80389F4C);
            
            sp34.x = sp34.y = 6;
            func_ovl8_8037A5B8(arg0->unk_dbunk5_0xB4, &sp34, &sp30);
            func_ovl8_8037D9B4(&sp30);

            a0 = (sp54 / 2) - (sp4C / 2);
            a1 = (sp56 / 2) - (func_ovl8_8037E80C() / 2);
            func_ovl8_8037DFCC(a0, a1);
            func_ovl8_8037DD60(arg0->unk_dbunk5_0xB4, str);
        } 
        else 
        {
            func_ovl8_8037B434(arg0->unk_dbunk5_0xB0, &sp50, 1, &arg0->unk_dbunk5_0x38->bg_color);
            func_ovl8_8037D9D0(&D_ovl8_80389F50);
            
            sp34.x = sp34.y = 6;
            func_ovl8_8037A5B8(arg0->unk_dbunk5_0xB0, &sp34, &sp30);
            func_ovl8_8037D9B4(&sp30);

            a0 = (sp54 / 2) - (sp4C / 2);
            a1 = (sp56 / 2) - (func_ovl8_8037E80C() / 2);
            func_ovl8_8037DFCC(a0 + 1, a1 + 1);
            func_ovl8_8037DD60(arg0->unk_dbunk5_0xB0, str);
        }
        
        func_ovl8_8037D908(&sp38);
    }
}