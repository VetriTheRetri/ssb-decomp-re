#ifndef _DBTYPES_H_
#define _DBTYPES_H_

#include <ssb_types.h>
#include <sys/obj.h>
#include <sys/controller.h>

#include "dbdef.h"

struct DBFont
{
	u16 unk_dbfont_0x0;
	u16 unk_dbfont_0x2;
	u16 unk_dbfont_0x4;
	u16 *dimensions;
	u8 unk_dbfont_0x8;
	u32 *glyphs;
};

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

struct DBTextBuffer
{
	void *font_buffer;
	u32 font_buffer_size;
	u32 unk_dbtextbuf_0x8;
};

#endif
