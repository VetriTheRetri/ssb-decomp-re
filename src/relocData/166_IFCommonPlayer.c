/* relocData file 166: IFCommonPlayer */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"

/* Raw data from file offset 0x0000 to 0x0030 (48 bytes) */
u8 dIFCommonPlayer_gap_0x0000[48] = {
	#include <IFCommonPlayer/gap_0x0000.data.inc.c>
};

/* DisplayList: Magnify @ 0x30 (72 bytes) */
Gfx dIFCommonPlayer_Magnify_DisplayList[9] = {
	#include <IFCommonPlayer/Magnify.dl.inc.c>
};

/* Raw data from file offset 0x0078 to 0x0188 (272 bytes) */
u8 dIFCommonPlayer_Magnify_post[272] = {
	#include <IFCommonPlayer/Magnify_post.data.inc.c>
};

/* DObjDesc: Arrows @ 0x188 (5 entries) */
DObjDesc dIFCommonPlayer_Arrows[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dIFCommonPlayer_Magnify_post + 0x38), { 5.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dIFCommonPlayer_Magnify_post + 0x80), { 16.000001907348633f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dIFCommonPlayer_Magnify_post + 0xC8), { 27.000003814697266f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0x0270 to 0x02C8 (88 bytes) */
u8 dIFCommonPlayer_Arrows_AnimJoint[88] = {
	#include <IFCommonPlayer/Arrows_AnimJoint.data.inc.c>
};

/* Raw data from file offset 0x02C8 to 0x03D0 (264 bytes) */
u8 dIFCommonPlayer_MagnifyFrame_Image[264] = {
	#include <IFCommonPlayer/MagnifyFrame_Image.data.inc.c>
};

