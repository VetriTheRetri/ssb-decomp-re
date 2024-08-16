#ifndef _MNTYPES_H_
#define _MNTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <gm/generic.h>
#include <mn/mndef.h>

struct mnCongraFile
{
	u32 image1_file_id;
	intptr_t image1_offset;
	u32 image2_file_id;
	intptr_t image2_offset;
};

#endif