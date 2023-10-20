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

struct dbFunction
{
    s16 unk_dbfunc_0x0;
    void *unk_dbfunc_0x4;
};

struct dbUnknownLinkStruct
{
    u8 filler_0x0[0x58];
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