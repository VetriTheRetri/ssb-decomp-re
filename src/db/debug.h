#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <ssb_types.h>
#include <sys/objdisplay.h>
#include <sys/thread6.h>

#include "dbdef.h"
#include "dbfunctions.h"

struct DBMenuOption
{
	s32 type;
	void (*proc_a)();
	char *label;

	union
	{
		void *def;		// So that no complaints are made by the compiler about incompatible pointer assignment...
		s32 *s;
		u32 *w;
		u8 *b;
		f32 *f;
		void **p;

	} value;

	f32 min;
	f32 max;
	f32 unknown18;
};

struct DBMenuPosition
{
	s16 x;
	s16 y;
	u16 w;
	u16 h;
};

struct DBFighter
{
	u8 fkind;
	u8 costume;
	GObj *fighter_gobj;
};

typedef struct dbUnk80369EE0_1
{
	void *unk_80369EE0_1_0x0;
	u32 unk_80369EE0_1_0x4;
	u32 unk_80369EE0_1_0x8;

} dbUnk80369EE0_1;

#endif
