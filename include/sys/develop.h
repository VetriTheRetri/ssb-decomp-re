#ifndef _DEVELOP_H_
#define _DEVELOP_H_

#include <ssb_types.h>
#include <PR/ultratypes.h>
#include <sys/obj.h>

typedef enum dbObjectDisplayMode
{
	dbObject_DisplayMode_Master,
	dbObject_DisplayMode_HitCollisionFill,
	dbObject_DisplayMode_HitAttackOutline,
	dbObject_DisplayMode_MapCollision

} dbObjectDisplayMode;

typedef struct dbUnknownLinkStruct dbUnknownLinkStruct;
typedef struct dbUnknownLink dbUnknownLink;
typedef struct dbFunction dbFunction;
typedef struct dbUnknown16 dbUnknown16;
typedef struct dbBytesContainer dbBytesContainer;
typedef struct db4Bytes db4Bytes;
typedef struct db2Shorts db2Shorts;
typedef struct db4Shorts db4Shorts;
typedef struct dbUnAl1 dbUnAl1;
typedef struct dbBytesCopy dbBytesCopy;
typedef struct dbTestMenu dbTestMenu;
typedef struct dbMenuSprite dbMenuSprite;
typedef struct dbUnknown2 dbUnknown2;
typedef struct dbUnknown3 dbUnknown3;
typedef struct dbUnknownS38 dbUnknownS38;
typedef struct dbUnkStruct dbUnkStruct;
typedef struct dbUnknownStructS18 dbUnknownStructS18;
typedef struct dbUnknownStruct2S18 dbUnknownStruct2S18;

struct dbMenuSprite
{
	GObj* unk_dbmenusprite_0x0;
	GObj* unk_dbmenusprite_0x4;
	Sprite* sprite;
	s32 unk_dbmenusprite_0xC;
	dbMenuSprite* unk_dbmenusprite_0x10;
	u8 filler_0xC[0x48 - 0x14];
	GObj* unk_dbmenusprite_0x48;
};

struct db4Bytes
{
	u8 arr[4];
};

struct db2Shorts
{
	s16 arr[2];
};

struct db4Shorts
{
	s16 arr[4];
};

struct dbBytesContainer
{
	db4Shorts unk_dbbytescont_0x0;
};

struct dbUnAl1
{
	u16 unk_dbunal1_0x0;
	db4Shorts unk_dbunal1_0x2;
};

struct dbUnknown16
{
	s16 unk_dbunk16_0x0;
	s16 unk_dbunk16_0x2;
	s16 unk_dbunk16_0x4;
};

struct dbFunction
{
	s16 unk_dbfunc_0x0;
	sb32 (*unk_dbfunc_0x4)();
};

struct dbBytesCopy
{
	db4Shorts unk_dbbytescopy_0x0;
	db4Bytes unk_dbbytescopy_0x8;
	db4Bytes unk_dbbytescopy_0xC;
	u16 unk_dbbytescopy_0x10;
	s32 unk_dbbytescopy_0x14;
	s32 unk_dbbytescopy_0x18;
};

struct dbUnknownLinkStruct
{
	u16 unk_dbunkstruct_0x0;
	db4Shorts unk_dbunkstruct_0x2;
	s32 unk_dbunkstruct_0xC;
	s32 unk_dbunkstruct_0x10;
	db4Bytes unk_dbunkstruct_0x14;
	db4Bytes unk_dbunkstruct_0x18;
	dbUnknownLinkStruct* unk_dbunkstruct_0x1C;
	dbUnknownLinkStruct* unk_dbunkstruct_0x20;
	u16 unk_dbunkstruct_0x24;
	sb32 unk_dbunkstruct_0x28;
	u16 unk_dbunkstruct_0x2C;
	s32 unk_dbunkstruct_0x30;
	s32 unk_dbunkstruct_0x34;
	s32 unk_dbunkstruct_0x38;
	s32 unk_dbunkstruct_0x3C;
	s32 unk_dbunkstruct_0x40;
	s32 unk_dbunkstruct_0x44;
	dbUnknownLinkStruct* unk_dbunkstruct_0x48;
	dbUnknownLinkStruct* unk_dbunkstruct_0x4C;
	db4Bytes unk_dbunkstruct_0x50;
	sb32 (*unk_dbunkstruct_0x54)();
	dbFunction* db_func; // Points to a whole bunch of function pointers?
};

struct dbTestMenu
{
	GObj* unk_dbtestmenu_0x0;
	GObj* unk_dbtestmenu_0x4;
	db4Shorts* unk_dbtestmenu_0x8;
	dbFunction* db_func;
	dbUnknownLinkStruct* unk_dbtestmenu_0x10;
	dbUnknownLinkStruct unk_dbtestmenu_0x14;
};

struct dbUnknown2
{
	db4Bytes unk_dbmorethan_0x0;
};

struct dbUnknown3
{
	s32 unk_dbunk3_0x0;
	u8 filler_0x4[0x18 - 0x4];
	dbFunction* unk_dbunk3_0x18;
	void* unk_dbunk3_0x1C;
	dbUnknown3* unk_dbunk3_0x20;
	dbUnknown3* unk_dbunk3_0x24;
	dbUnknown3* unk_dbunk3_0x28;
	void* unk_dbunk3_0x2C;
	u32 unk_dbunk3_0x30;
	void* unk_dbunk3_0x34;
	dbUnknownLinkStruct* unk_dbunk3_0x38;
	u8 filler_0x3C[0x48 - 0x3C];
	dbUnknown3* unk_dbunk3_0x48;
};

struct dbUnknownLink
{
	dbUnknownLink* dbunklink_0x0;
	s32 unk_dbunklink_0x4;
	dbUnknownLink* unk_dbunklink_0x8;
	void* unk_dbunklink_0xC;
	void* unk_dbunklink_0x10;
	dbUnknownLinkStruct unk_dbunklink_0x14;
};

struct dbUnknownS38
{
	u8 filler_0x0[0x18];
	dbFunction* unk_dbunks38_0x18;
	dbUnknownLink* unk_dbunks38_0x1C;
	dbUnknownLinkStruct* unk_dbunks38_0x20;
	void* unk_dbunks38_0x24;
	void* unk_dbunks38_0x28;
	void* unk_dbunks38_0x2C;
	dbFunction* unk_dbunks38_0x30;
	u8 filler_0x34[0x38 - 0x34];
	dbUnknownLinkStruct unk_dbunks38_0x38;
	dbUnknownLink unk_dbunks38_0x94;
};

struct dbUnkStruct
{
	s32 unk0;
	s32 unk4;
	s32 unk8;
	s32 unkC;
};

struct dbUnknownStructS18
{
	s32 unk_0x0;
	s32 unk_0x4;
	s32 unk_0x8;
	s32 unk_0xC;
	s32 unk_0x10;
	s32 unk_0x14;
};

struct dbUnknownStruct2S18
{
	s32 unk_0x0;
	s32 unk_0x4;
	s32 unk_0x8;
	s32 unk_0xC;
	s32 unk_0x10;
	u16 unk_0x14;
	u16 unk_0x16;
};

#endif