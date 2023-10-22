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
typedef struct db4Bytes db4Bytes;

struct db4Bytes
{
    u8 arr[4];
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

struct dbUnknownLinkStruct
{
    u8 filler_0x0[0x1C];
    void *unk_dbunkstruct_0x1C;
    dbUnknownLinkStruct *unk_dbunkstruct_0x20;
    u8 filler_0x24[0x4C - 0x24];
    dbUnknownLinkStruct *unk_dbunkstruct_0x4C;
    s32 unk_dbunkstruct_0x50;
    s32 unk_dbunkstruct_0x54;
    dbFunction *db_func;        // Points to a whole bunch of function pointers?
};

struct dbUnknownLink
{
    dbUnknownLink *dbunklink_0x0;
    s32 unk_dbunklink_0x4;
    dbUnknownLink *unk_dbunklink_0x8;
    dbUnknownLink *unk_dbunklink_0xC;
    dbUnknownLink *unk_dbunklink_0x10;
};

#endif