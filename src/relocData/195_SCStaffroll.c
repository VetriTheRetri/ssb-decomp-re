/* relocData file 195: SCStaffroll */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"


#if defined(REGION_JP)

/* JP binary has a different layout; fold it in as a chain-encoded
 * raw u32 blob. The companion .jp.reloc is empty so fixRelocChain
 * leaves the pre-baked JP chain bytes alone. */
/* JP binary has a different layout; fold it in as a single raw
 * u8 block that extractRelocInc regenerates from the JP binary
 * whenever JP assets are extracted. The companion .jp.reloc is
 * empty so fixRelocChain leaves the pre-baked chain bytes alone. */
u8 dSCStaffroll[30656] = {
	#include <SCStaffroll/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* Raw data from file offset 0x0000 to 0x0008 (8 bytes) */
u8 dSCStaffroll_gap_0x0000[8] = {
	#include <SCStaffroll/gap_0x0000.data.inc.c>
};

/* Raw data from file offset 0x0008 to 0x0178 (368 bytes) */
u8 dSCStaffroll_NameAndJobAUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobAUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0178 to 0x0218 (160 bytes) */
u8 dSCStaffroll_NameAndJobALower_Image[160] = {
	#include <SCStaffroll/NameAndJobALower_Image.data.inc.c>
};

/* Raw data from file offset 0x0218 to 0x02D8 (192 bytes) */
u8 dSCStaffroll_NameAndJobBUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobBUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x02D8 to 0x0398 (192 bytes) */
u8 dSCStaffroll_NameAndJobBLower_Image[192] = {
	#include <SCStaffroll/NameAndJobBLower_Image.data.inc.c>
};

/* Raw data from file offset 0x0398 to 0x0458 (192 bytes) */
u8 dSCStaffroll_NameAndJobCUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobCUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0458 to 0x04F8 (160 bytes) */
u8 dSCStaffroll_NameAndJobCLower_Image[160] = {
	#include <SCStaffroll/NameAndJobCLower_Image.data.inc.c>
};

/* Raw data from file offset 0x04F8 to 0x0668 (368 bytes) */
u8 dSCStaffroll_NameAndJobDUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobDUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0668 to 0x0728 (192 bytes) */
u8 dSCStaffroll_NameAndJobDLower_Image[192] = {
	#include <SCStaffroll/NameAndJobDLower_Image.data.inc.c>
};

/* Raw data from file offset 0x0728 to 0x07E8 (192 bytes) */
u8 dSCStaffroll_NameAndJobEUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobEUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x07E8 to 0x0888 (160 bytes) */
u8 dSCStaffroll_NameAndJobELower_Image[160] = {
	#include <SCStaffroll/NameAndJobELower_Image.data.inc.c>
};

/* Raw data from file offset 0x0888 to 0x0948 (192 bytes) */
u8 dSCStaffroll_NameAndJobFUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobFUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0948 to 0x0A08 (192 bytes) */
u8 dSCStaffroll_NameAndJobFLower_Image[192] = {
	#include <SCStaffroll/NameAndJobFLower_Image.data.inc.c>
};

/* Raw data from file offset 0x0A08 to 0x0B78 (368 bytes) */
u8 dSCStaffroll_NameAndJobGUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobGUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0B78 to 0x0C38 (192 bytes) */
u8 dSCStaffroll_NameAndJobGLower_Image[192] = {
	#include <SCStaffroll/NameAndJobGLower_Image.data.inc.c>
};

/* Raw data from file offset 0x0C38 to 0x0DA8 (368 bytes) */
u8 dSCStaffroll_NameAndJobHUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobHUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0DA8 to 0x0E68 (192 bytes) */
u8 dSCStaffroll_NameAndJobHLower_Image[192] = {
	#include <SCStaffroll/NameAndJobHLower_Image.data.inc.c>
};

/* Raw data from file offset 0x0E68 to 0x0F28 (192 bytes) */
u8 dSCStaffroll_NameAndJobIUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobIUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x0F28 to 0x0FE8 (192 bytes) */
u8 dSCStaffroll_NameAndJobILower_Image[192] = {
	#include <SCStaffroll/NameAndJobILower_Image.data.inc.c>
};

/* Raw data from file offset 0x0FE8 to 0x10A8 (192 bytes) */
u8 dSCStaffroll_NameAndJobJUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobJUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x10A8 to 0x1188 (224 bytes) */
u8 dSCStaffroll_NameAndJobJLower_Image[224] = {
	#include <SCStaffroll/NameAndJobJLower_Image.data.inc.c>
};

/* Raw data from file offset 0x1188 to 0x12F8 (368 bytes) */
u8 dSCStaffroll_NameAndJobKUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobKUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x12F8 to 0x13B8 (192 bytes) */
u8 dSCStaffroll_NameAndJobKLower_Image[192] = {
	#include <SCStaffroll/NameAndJobKLower_Image.data.inc.c>
};

/* Raw data from file offset 0x13B8 to 0x1478 (192 bytes) */
u8 dSCStaffroll_NameAndJobLUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobLUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x1478 to 0x1538 (192 bytes) */
u8 dSCStaffroll_NameAndJobLLower_Image[192] = {
	#include <SCStaffroll/NameAndJobLLower_Image.data.inc.c>
};

/* Raw data from file offset 0x1538 to 0x16A8 (368 bytes) */
u8 dSCStaffroll_NameAndJobMUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobMUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x16A8 to 0x17D8 (304 bytes) */
u8 dSCStaffroll_NameAndJobMLower_Image[304] = {
	#include <SCStaffroll/NameAndJobMLower_Image.data.inc.c>
};

/* Raw data from file offset 0x17D8 to 0x1948 (368 bytes) */
u8 dSCStaffroll_NameAndJobNUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobNUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x1948 to 0x19E8 (160 bytes) */
u8 dSCStaffroll_NameAndJobNLower_Image[160] = {
	#include <SCStaffroll/NameAndJobNLower_Image.data.inc.c>
};

/* Raw data from file offset 0x19E8 to 0x1B58 (368 bytes) */
u8 dSCStaffroll_NameAndJobOUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobOUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x1B58 to 0x1C88 (304 bytes) */
u8 dSCStaffroll_NameAndJobOLower_Image[304] = {
	#include <SCStaffroll/NameAndJobOLower_Image.data.inc.c>
};

/* Raw data from file offset 0x1C88 to 0x1D48 (192 bytes) */
u8 dSCStaffroll_NameAndJobPUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobPUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x1D48 to 0x1E08 (192 bytes) */
u8 dSCStaffroll_NameAndJobPLower_Image[192] = {
	#include <SCStaffroll/NameAndJobPLower_Image.data.inc.c>
};

/* Raw data from file offset 0x1E08 to 0x1F78 (368 bytes) */
u8 dSCStaffroll_NameAndJobQUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobQUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x1F78 to 0x2038 (192 bytes) */
u8 dSCStaffroll_NameAndJobQLower_Image[192] = {
	#include <SCStaffroll/NameAndJobQLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2038 to 0x20F8 (192 bytes) */
u8 dSCStaffroll_NameAndJobRUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobRUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x20F8 to 0x2198 (160 bytes) */
u8 dSCStaffroll_NameAndJobRLower_Image[160] = {
	#include <SCStaffroll/NameAndJobRLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2198 to 0x2258 (192 bytes) */
u8 dSCStaffroll_NameAndJobSUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobSUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2258 to 0x22F8 (160 bytes) */
u8 dSCStaffroll_NameAndJobSLower_Image[160] = {
	#include <SCStaffroll/NameAndJobSLower_Image.data.inc.c>
};

/* Raw data from file offset 0x22F8 to 0x23B8 (192 bytes) */
u8 dSCStaffroll_NameAndJobTUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobTUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x23B8 to 0x2478 (192 bytes) */
u8 dSCStaffroll_NameAndJobTLower_Image[192] = {
	#include <SCStaffroll/NameAndJobTLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2478 to 0x2538 (192 bytes) */
u8 dSCStaffroll_NameAndJobUUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobUUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2538 to 0x25D8 (160 bytes) */
u8 dSCStaffroll_NameAndJobULower_Image[160] = {
	#include <SCStaffroll/NameAndJobULower_Image.data.inc.c>
};

/* Raw data from file offset 0x25D8 to 0x2748 (368 bytes) */
u8 dSCStaffroll_NameAndJobVUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobVUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2748 to 0x27E8 (160 bytes) */
u8 dSCStaffroll_NameAndJobVLower_Image[160] = {
	#include <SCStaffroll/NameAndJobVLower_Image.data.inc.c>
};

/* Raw data from file offset 0x27E8 to 0x2958 (368 bytes) */
u8 dSCStaffroll_NameAndJobWUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobWUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2958 to 0x2A88 (304 bytes) */
u8 dSCStaffroll_NameAndJobWLower_Image[304] = {
	#include <SCStaffroll/NameAndJobWLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2A88 to 0x2BF8 (368 bytes) */
u8 dSCStaffroll_NameAndJobXUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobXUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2BF8 to 0x2C98 (160 bytes) */
u8 dSCStaffroll_NameAndJobXLower_Image[160] = {
	#include <SCStaffroll/NameAndJobXLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2C98 to 0x2D58 (192 bytes) */
u8 dSCStaffroll_NameAndJobYUpper_Image[192] = {
	#include <SCStaffroll/NameAndJobYUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2D58 to 0x2E18 (192 bytes) */
u8 dSCStaffroll_NameAndJobYLower_Image[192] = {
	#include <SCStaffroll/NameAndJobYLower_Image.data.inc.c>
};

/* Raw data from file offset 0x2E18 to 0x2F88 (368 bytes) */
u8 dSCStaffroll_NameAndJobZUpper_Image[368] = {
	#include <SCStaffroll/NameAndJobZUpper_Image.data.inc.c>
};

/* Raw data from file offset 0x2F88 to 0x3018 (144 bytes) */
u8 dSCStaffroll_NameAndJobZLower_Image[144] = {
	#include <SCStaffroll/NameAndJobZLower_Image.data.inc.c>
};

/* Raw data from file offset 0x3018 to 0x3078 (96 bytes) */
u8 dSCStaffroll_NameAndJobComma_Image[96] = {
	#include <SCStaffroll/NameAndJobComma_Image.data.inc.c>
};

/* Raw data from file offset 0x3078 to 0x30B8 (64 bytes) */
u8 dSCStaffroll_NameAndJobPeriod_Image[64] = {
	#include <SCStaffroll/NameAndJobPeriod_Image.data.inc.c>
};

/* Raw data from file offset 0x30B8 to 0x3118 (96 bytes) */
u8 dSCStaffroll_NameAndJobApostrophe_Image[96] = {
	#include <SCStaffroll/NameAndJobApostrophe_Image.data.inc.c>
};

/* Raw data from file offset 0x3118 to 0x31D8 (192 bytes) */
u8 dSCStaffroll_NameAndJob4_Image[192] = {
	#include <SCStaffroll/NameAndJob4_Image.data.inc.c>
};

/* Sprite: TextBoxAUpper */

/* Texture: TextBoxAUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxAUpper_tex[] = {
    #include <SCStaffroll/TextBoxAUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxAUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxAUpper_tex, 14, 0 },
};

/* Sprite: TextBoxAUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxAUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxAUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x329C to 0x32A8 (12 bytes) */
u8 dSCStaffroll_gap_0x329C[12] = {
	#include <SCStaffroll/gap_0x329C.data.inc.c>
};

/* Sprite: TextBoxALower */

/* Texture: TextBoxALower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxALower_tex[] = {
    #include <SCStaffroll/TextBoxALower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxALower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxALower_tex, 11, 0 },
};

/* Sprite: TextBoxALower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxALower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxALower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3354 to 0x3368 (20 bytes) */
u8 dSCStaffroll_gap_0x3354[20] = {
	#include <SCStaffroll/gap_0x3354.data.inc.c>
};

/* Sprite: TextBoxBUpper */

/* Texture: TextBoxBUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxBUpper_tex[] = {
    #include <SCStaffroll/TextBoxBUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxBUpper_tex, 14, 0 },
};

/* Sprite: TextBoxBUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxBUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxBUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x342C to 0x3438 (12 bytes) */
u8 dSCStaffroll_gap_0x342C[12] = {
	#include <SCStaffroll/gap_0x342C.data.inc.c>
};

/* Sprite: TextBoxBLower */

/* Texture: TextBoxBLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxBLower_tex[] = {
    #include <SCStaffroll/TextBoxBLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxBLower_tex, 13, 0 },
};

/* Sprite: TextBoxBLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxBLower = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxBLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x34F4 to 0x3508 (20 bytes) */
u8 dSCStaffroll_gap_0x34F4[20] = {
	#include <SCStaffroll/gap_0x34F4.data.inc.c>
};

/* Sprite: TextBoxCUpper */

/* Texture: TextBoxCUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxCUpper_tex[] = {
    #include <SCStaffroll/TextBoxCUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxCUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxCUpper_tex, 14, 0 },
};

/* Sprite: TextBoxCUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxCUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxCUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x35CC to 0x35D8 (12 bytes) */
u8 dSCStaffroll_gap_0x35CC[12] = {
	#include <SCStaffroll/gap_0x35CC.data.inc.c>
};

/* Sprite: TextBoxCLower */

/* Texture: TextBoxCLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxCLower_tex[] = {
    #include <SCStaffroll/TextBoxCLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxCLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxCLower_tex, 11, 0 },
};

/* Sprite: TextBoxCLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxCLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxCLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3684 to 0x3698 (20 bytes) */
u8 dSCStaffroll_gap_0x3684[20] = {
	#include <SCStaffroll/gap_0x3684.data.inc.c>
};

/* Sprite: TextBoxDUpper */

/* Texture: TextBoxDUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxDUpper_tex[] = {
    #include <SCStaffroll/TextBoxDUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxDUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxDUpper_tex, 14, 0 },
};

/* Sprite: TextBoxDUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxDUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxDUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x375C to 0x3768 (12 bytes) */
u8 dSCStaffroll_gap_0x375C[12] = {
	#include <SCStaffroll/gap_0x375C.data.inc.c>
};

/* Sprite: TextBoxDLower */

/* Texture: TextBoxDLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxDLower_tex[] = {
    #include <SCStaffroll/TextBoxDLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxDLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxDLower_tex, 13, 0 },
};

/* Sprite: TextBoxDLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxDLower = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxDLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3824 to 0x3838 (20 bytes) */
u8 dSCStaffroll_gap_0x3824[20] = {
	#include <SCStaffroll/gap_0x3824.data.inc.c>
};

/* Sprite: TextBoxEUpper */

/* Texture: TextBoxEUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxEUpper_tex[] = {
    #include <SCStaffroll/TextBoxEUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxEUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxEUpper_tex, 14, 0 },
};

/* Sprite: TextBoxEUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxEUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxEUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x38FC to 0x3908 (12 bytes) */
u8 dSCStaffroll_gap_0x38FC[12] = {
	#include <SCStaffroll/gap_0x38FC.data.inc.c>
};

/* Sprite: TextBoxELower */

/* Texture: TextBoxELower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxELower_tex[] = {
    #include <SCStaffroll/TextBoxELower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxELower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxELower_tex, 11, 0 },
};

/* Sprite: TextBoxELower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxELower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxELower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x39B4 to 0x39C8 (20 bytes) */
u8 dSCStaffroll_gap_0x39B4[20] = {
	#include <SCStaffroll/gap_0x39B4.data.inc.c>
};

/* Sprite: TextBoxFUpper */

/* Texture: TextBoxFUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxFUpper_tex[] = {
    #include <SCStaffroll/TextBoxFUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxFUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxFUpper_tex, 14, 0 },
};

/* Sprite: TextBoxFUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxFUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxFUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3A8C to 0x3A98 (12 bytes) */
u8 dSCStaffroll_gap_0x3A8C[12] = {
	#include <SCStaffroll/gap_0x3A8C.data.inc.c>
};

/* Sprite: TextBoxFLower */

/* Texture: TextBoxFLower (9(16)x13 i4c) */
u8 dSCStaffroll_TextBoxFLower_tex[] = {
    #include <SCStaffroll/TextBoxFLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxFLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxFLower_tex, 13, 0 },
};

/* Sprite: TextBoxFLower (9x13 i4c) */
Sprite dSCStaffroll_TextBoxFLower = {
	0, 0,
	9, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxFLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3B54 to 0x3B68 (20 bytes) */
u8 dSCStaffroll_gap_0x3B54[20] = {
	#include <SCStaffroll/gap_0x3B54.data.inc.c>
};

/* Sprite: TextBoxGUpper */

/* Texture: TextBoxGUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxGUpper_tex[] = {
    #include <SCStaffroll/TextBoxGUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxGUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxGUpper_tex, 14, 0 },
};

/* Sprite: TextBoxGUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxGUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxGUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3C2C to 0x3C38 (12 bytes) */
u8 dSCStaffroll_gap_0x3C2C[12] = {
	#include <SCStaffroll/gap_0x3C2C.data.inc.c>
};

/* Sprite: TextBoxGLower */

/* Texture: TextBoxGLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxGLower_tex[] = {
    #include <SCStaffroll/TextBoxGLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxGLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxGLower_tex, 12, 0 },
};

/* Sprite: TextBoxGLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxGLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxGLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3CEC to 0x3CF8 (12 bytes) */
u8 dSCStaffroll_gap_0x3CEC[12] = {
	#include <SCStaffroll/gap_0x3CEC.data.inc.c>
};

/* Sprite: TextBoxHUpper */

/* Texture: TextBoxHUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxHUpper_tex[] = {
    #include <SCStaffroll/TextBoxHUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxHUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxHUpper_tex, 14, 0 },
};

/* Sprite: TextBoxHUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxHUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxHUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3DBC to 0x3DC8 (12 bytes) */
u8 dSCStaffroll_gap_0x3DBC[12] = {
	#include <SCStaffroll/gap_0x3DBC.data.inc.c>
};

/* Sprite: TextBoxHLower */

/* Texture: TextBoxHLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxHLower_tex[] = {
    #include <SCStaffroll/TextBoxHLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxHLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxHLower_tex, 13, 0 },
};

/* Sprite: TextBoxHLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxHLower = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxHLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3E84 to 0x3E98 (20 bytes) */
u8 dSCStaffroll_gap_0x3E84[20] = {
	#include <SCStaffroll/gap_0x3E84.data.inc.c>
};

/* Sprite: TextBoxIUpper */

/* Texture: TextBoxIUpper (5(16)x14 i4c) */
u8 dSCStaffroll_TextBoxIUpper_tex[] = {
    #include <SCStaffroll/TextBoxIUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxIUpper_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxIUpper_tex, 14, 0 },
};

/* Sprite: TextBoxIUpper (5x14 i4c) */
Sprite dSCStaffroll_TextBoxIUpper = {
	0, 0,
	5, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxIUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x3F5C to 0x3F68 (12 bytes) */
u8 dSCStaffroll_gap_0x3F5C[12] = {
	#include <SCStaffroll/gap_0x3F5C.data.inc.c>
};

/* Sprite: TextBoxILower */

/* Texture: TextBoxILower (4(16)x13 i4c) */
u8 dSCStaffroll_TextBoxILower_tex[] = {
    #include <SCStaffroll/TextBoxILower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxILower_bitmaps[] = {
	{ 4, 16, 0, 0, dSCStaffroll_TextBoxILower_tex, 13, 0 },
};

/* Sprite: TextBoxILower (4x13 i4c) */
Sprite dSCStaffroll_TextBoxILower = {
	0, 0,
	4, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxILower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4024 to 0x4038 (20 bytes) */
u8 dSCStaffroll_gap_0x4024[20] = {
	#include <SCStaffroll/gap_0x4024.data.inc.c>
};

/* Sprite: TextBoxJUpper */

/* Texture: TextBoxJUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxJUpper_tex[] = {
    #include <SCStaffroll/TextBoxJUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxJUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxJUpper_tex, 14, 0 },
};

/* Sprite: TextBoxJUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxJUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxJUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x40FC to 0x4108 (12 bytes) */
u8 dSCStaffroll_gap_0x40FC[12] = {
	#include <SCStaffroll/gap_0x40FC.data.inc.c>
};

/* Sprite: TextBoxJLower */

/* Texture: TextBoxJLower (6(16)x14 i4c) */
u8 dSCStaffroll_TextBoxJLower_tex[] = {
    #include <SCStaffroll/TextBoxJLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxJLower_bitmaps[] = {
	{ 6, 16, 0, 0, dSCStaffroll_TextBoxJLower_tex, 14, 0 },
};

/* Sprite: TextBoxJLower (6x14 i4c) */
Sprite dSCStaffroll_TextBoxJLower = {
	0, 0,
	6, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxJLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x41CC to 0x41D8 (12 bytes) */
u8 dSCStaffroll_gap_0x41CC[12] = {
	#include <SCStaffroll/gap_0x41CC.data.inc.c>
};

/* Sprite: TextBoxKUpper */

/* Texture: TextBoxKUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxKUpper_tex[] = {
    #include <SCStaffroll/TextBoxKUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxKUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxKUpper_tex, 14, 0 },
};

/* Sprite: TextBoxKUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxKUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxKUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x429C to 0x42A8 (12 bytes) */
u8 dSCStaffroll_gap_0x429C[12] = {
	#include <SCStaffroll/gap_0x429C.data.inc.c>
};

/* Sprite: TextBoxKLower */

/* Texture: TextBoxKLower (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxKLower_tex[] = {
    #include <SCStaffroll/TextBoxKLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxKLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxKLower_tex, 13, 0 },
};

/* Sprite: TextBoxKLower (10x13 i4c) */
Sprite dSCStaffroll_TextBoxKLower = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxKLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4364 to 0x4378 (20 bytes) */
u8 dSCStaffroll_gap_0x4364[20] = {
	#include <SCStaffroll/gap_0x4364.data.inc.c>
};

/* Sprite: TextBoxLUpper */

/* Texture: TextBoxLUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxLUpper_tex[] = {
    #include <SCStaffroll/TextBoxLUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxLUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxLUpper_tex, 14, 0 },
};

/* Sprite: TextBoxLUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxLUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxLUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x443C to 0x4448 (12 bytes) */
u8 dSCStaffroll_gap_0x443C[12] = {
	#include <SCStaffroll/gap_0x443C.data.inc.c>
};

/* Sprite: TextBoxLLower */

/* Texture: TextBoxLLower (4(16)x13 i4c) */
u8 dSCStaffroll_TextBoxLLower_tex[] = {
    #include <SCStaffroll/TextBoxLLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxLLower_bitmaps[] = {
	{ 4, 16, 0, 0, dSCStaffroll_TextBoxLLower_tex, 13, 0 },
};

/* Sprite: TextBoxLLower (4x13 i4c) */
Sprite dSCStaffroll_TextBoxLLower = {
	0, 0,
	4, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxLLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4504 to 0x4518 (20 bytes) */
u8 dSCStaffroll_gap_0x4504[20] = {
	#include <SCStaffroll/gap_0x4504.data.inc.c>
};

/* Sprite: TextBoxMUpper */

/* Texture: TextBoxMUpper (14(16)x14 i4c) */
u8 dSCStaffroll_TextBoxMUpper_tex[] = {
    #include <SCStaffroll/TextBoxMUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxMUpper_bitmaps[] = {
	{ 14, 16, 0, 0, dSCStaffroll_TextBoxMUpper_tex, 14, 0 },
};

/* Sprite: TextBoxMUpper (14x14 i4c) */
Sprite dSCStaffroll_TextBoxMUpper = {
	0, 0,
	14, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxMUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x45DC to 0x45E8 (12 bytes) */
u8 dSCStaffroll_gap_0x45DC[12] = {
	#include <SCStaffroll/gap_0x45DC.data.inc.c>
};

/* Sprite: TextBoxMLower */

/* Texture: TextBoxMLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxMLower_tex[] = {
    #include <SCStaffroll/TextBoxMLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxMLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxMLower_tex, 11, 0 },
};

/* Sprite: TextBoxMLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxMLower = {
	0, 0,
	12, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxMLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4694 to 0x46A8 (20 bytes) */
u8 dSCStaffroll_gap_0x4694[20] = {
	#include <SCStaffroll/gap_0x4694.data.inc.c>
};

/* Sprite: TextBoxNUpper */

/* Texture: TextBoxNUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxNUpper_tex[] = {
    #include <SCStaffroll/TextBoxNUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxNUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxNUpper_tex, 14, 0 },
};

/* Sprite: TextBoxNUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxNUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxNUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x476C to 0x4778 (12 bytes) */
u8 dSCStaffroll_gap_0x476C[12] = {
	#include <SCStaffroll/gap_0x476C.data.inc.c>
};

/* Sprite: TextBoxNLower */

/* Texture: TextBoxNLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxNLower_tex[] = {
    #include <SCStaffroll/TextBoxNLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxNLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxNLower_tex, 11, 0 },
};

/* Sprite: TextBoxNLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxNLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxNLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4824 to 0x4838 (20 bytes) */
u8 dSCStaffroll_gap_0x4824[20] = {
	#include <SCStaffroll/gap_0x4824.data.inc.c>
};

/* Sprite: TextBoxOUpper */

/* Texture: TextBoxOUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxOUpper_tex[] = {
    #include <SCStaffroll/TextBoxOUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxOUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxOUpper_tex, 14, 0 },
};

/* Sprite: TextBoxOUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxOUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxOUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x48FC to 0x4908 (12 bytes) */
u8 dSCStaffroll_gap_0x48FC[12] = {
	#include <SCStaffroll/gap_0x48FC.data.inc.c>
};

/* Sprite: TextBoxOLower */

/* Texture: TextBoxOLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxOLower_tex[] = {
    #include <SCStaffroll/TextBoxOLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxOLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxOLower_tex, 11, 0 },
};

/* Sprite: TextBoxOLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxOLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxOLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x49B4 to 0x49C8 (20 bytes) */
u8 dSCStaffroll_gap_0x49B4[20] = {
	#include <SCStaffroll/gap_0x49B4.data.inc.c>
};

/* Sprite: TextBoxPUpper */

/* Texture: TextBoxPUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxPUpper_tex[] = {
    #include <SCStaffroll/TextBoxPUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxPUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxPUpper_tex, 14, 0 },
};

/* Sprite: TextBoxPUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxPUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxPUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4A8C to 0x4A98 (12 bytes) */
u8 dSCStaffroll_gap_0x4A8C[12] = {
	#include <SCStaffroll/gap_0x4A8C.data.inc.c>
};

/* Sprite: TextBoxPLower */

/* Texture: TextBoxPLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxPLower_tex[] = {
    #include <SCStaffroll/TextBoxPLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxPLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxPLower_tex, 12, 0 },
};

/* Sprite: TextBoxPLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxPLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxPLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4B4C to 0x4B58 (12 bytes) */
u8 dSCStaffroll_gap_0x4B4C[12] = {
	#include <SCStaffroll/gap_0x4B4C.data.inc.c>
};

/* Sprite: TextBoxQUpper */

/* Texture: TextBoxQUpper (13(16)x14 i4c) */
u8 dSCStaffroll_TextBoxQUpper_tex[] = {
    #include <SCStaffroll/TextBoxQUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQUpper_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBoxQUpper_tex, 14, 0 },
};

/* Sprite: TextBoxQUpper (13x14 i4c) */
Sprite dSCStaffroll_TextBoxQUpper = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxQUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4C1C to 0x4C28 (12 bytes) */
u8 dSCStaffroll_gap_0x4C1C[12] = {
	#include <SCStaffroll/gap_0x4C1C.data.inc.c>
};

/* Sprite: TextBoxQLower */

/* Texture: TextBoxQLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxQLower_tex[] = {
    #include <SCStaffroll/TextBoxQLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxQLower_tex, 12, 0 },
};

/* Sprite: TextBoxQLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxQLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxQLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4CDC to 0x4CE8 (12 bytes) */
u8 dSCStaffroll_gap_0x4CDC[12] = {
	#include <SCStaffroll/gap_0x4CDC.data.inc.c>
};

/* Sprite: TextBoxRUpper */

/* Texture: TextBoxRUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxRUpper_tex[] = {
    #include <SCStaffroll/TextBoxRUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxRUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxRUpper_tex, 14, 0 },
};

/* Sprite: TextBoxRUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxRUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxRUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4DAC to 0x4DB8 (12 bytes) */
u8 dSCStaffroll_gap_0x4DAC[12] = {
	#include <SCStaffroll/gap_0x4DAC.data.inc.c>
};

/* Sprite: TextBoxRLower */

/* Texture: TextBoxRLower (9(16)x11 i4c) */
u8 dSCStaffroll_TextBoxRLower_tex[] = {
    #include <SCStaffroll/TextBoxRLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxRLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxRLower_tex, 11, 0 },
};

/* Sprite: TextBoxRLower (9x11 i4c) */
Sprite dSCStaffroll_TextBoxRLower = {
	0, 0,
	9, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxRLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4E64 to 0x4E78 (20 bytes) */
u8 dSCStaffroll_gap_0x4E64[20] = {
	#include <SCStaffroll/gap_0x4E64.data.inc.c>
};

/* Sprite: TextBoxSUpper */

/* Texture: TextBoxSUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxSUpper_tex[] = {
    #include <SCStaffroll/TextBoxSUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxSUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxSUpper_tex, 14, 0 },
};

/* Sprite: TextBoxSUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxSUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxSUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4F3C to 0x4F48 (12 bytes) */
u8 dSCStaffroll_gap_0x4F3C[12] = {
	#include <SCStaffroll/gap_0x4F3C.data.inc.c>
};

/* Sprite: TextBoxSLower */

/* Texture: TextBoxSLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxSLower_tex[] = {
    #include <SCStaffroll/TextBoxSLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxSLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxSLower_tex, 11, 0 },
};

/* Sprite: TextBoxSLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxSLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxSLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x4FF4 to 0x5008 (20 bytes) */
u8 dSCStaffroll_gap_0x4FF4[20] = {
	#include <SCStaffroll/gap_0x4FF4.data.inc.c>
};

/* Sprite: TextBoxTUpper */

/* Texture: TextBoxTUpper (13(16)x14 i4c) */
u8 dSCStaffroll_TextBoxTUpper_tex[] = {
    #include <SCStaffroll/TextBoxTUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxTUpper_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBoxTUpper_tex, 14, 0 },
};

/* Sprite: TextBoxTUpper (13x14 i4c) */
Sprite dSCStaffroll_TextBoxTUpper = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxTUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x50CC to 0x50D8 (12 bytes) */
u8 dSCStaffroll_gap_0x50CC[12] = {
	#include <SCStaffroll/gap_0x50CC.data.inc.c>
};

/* Sprite: TextBoxTLower */

/* Texture: TextBoxTLower (9(16)x13 i4c) */
u8 dSCStaffroll_TextBoxTLower_tex[] = {
    #include <SCStaffroll/TextBoxTLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxTLower_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxTLower_tex, 13, 0 },
};

/* Sprite: TextBoxTLower (9x13 i4c) */
Sprite dSCStaffroll_TextBoxTLower = {
	0, 0,
	9, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxTLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5194 to 0x51A8 (20 bytes) */
u8 dSCStaffroll_gap_0x5194[20] = {
	#include <SCStaffroll/gap_0x5194.data.inc.c>
};

/* Sprite: TextBoxUUpper */

/* Texture: TextBoxUUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxUUpper_tex[] = {
    #include <SCStaffroll/TextBoxUUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxUUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxUUpper_tex, 14, 0 },
};

/* Sprite: TextBoxUUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxUUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxUUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x526C to 0x5278 (12 bytes) */
u8 dSCStaffroll_gap_0x526C[12] = {
	#include <SCStaffroll/gap_0x526C.data.inc.c>
};

/* Sprite: TextBoxULower */

/* Texture: TextBoxULower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxULower_tex[] = {
    #include <SCStaffroll/TextBoxULower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxULower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxULower_tex, 11, 0 },
};

/* Sprite: TextBoxULower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxULower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxULower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5324 to 0x5338 (20 bytes) */
u8 dSCStaffroll_gap_0x5324[20] = {
	#include <SCStaffroll/gap_0x5324.data.inc.c>
};

/* Sprite: TextBoxVUpper */

/* Texture: TextBoxVUpper (14(16)x14 i4c) */
u8 dSCStaffroll_TextBoxVUpper_tex[] = {
    #include <SCStaffroll/TextBoxVUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxVUpper_bitmaps[] = {
	{ 14, 16, 0, 0, dSCStaffroll_TextBoxVUpper_tex, 14, 0 },
};

/* Sprite: TextBoxVUpper (14x14 i4c) */
Sprite dSCStaffroll_TextBoxVUpper = {
	0, 0,
	14, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxVUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x53FC to 0x5408 (12 bytes) */
u8 dSCStaffroll_gap_0x53FC[12] = {
	#include <SCStaffroll/gap_0x53FC.data.inc.c>
};

/* Sprite: TextBoxVLower */

/* Texture: TextBoxVLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxVLower_tex[] = {
    #include <SCStaffroll/TextBoxVLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxVLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxVLower_tex, 11, 0 },
};

/* Sprite: TextBoxVLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxVLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxVLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x54B4 to 0x54C8 (20 bytes) */
u8 dSCStaffroll_gap_0x54B4[20] = {
	#include <SCStaffroll/gap_0x54B4.data.inc.c>
};

/* Sprite: TextBoxWUpper */

/* Texture: TextBoxWUpper (14(16)x14 i4c) */
u8 dSCStaffroll_TextBoxWUpper_tex[] = {
    #include <SCStaffroll/TextBoxWUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxWUpper_bitmaps[] = {
	{ 14, 16, 0, 0, dSCStaffroll_TextBoxWUpper_tex, 14, 0 },
};

/* Sprite: TextBoxWUpper (14x14 i4c) */
Sprite dSCStaffroll_TextBoxWUpper = {
	0, 0,
	14, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxWUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x558C to 0x5598 (12 bytes) */
u8 dSCStaffroll_gap_0x558C[12] = {
	#include <SCStaffroll/gap_0x558C.data.inc.c>
};

/* Sprite: TextBoxWLower */

/* Texture: TextBoxWLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxWLower_tex[] = {
    #include <SCStaffroll/TextBoxWLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxWLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxWLower_tex, 11, 0 },
};

/* Sprite: TextBoxWLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxWLower = {
	0, 0,
	12, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxWLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5644 to 0x5658 (20 bytes) */
u8 dSCStaffroll_gap_0x5644[20] = {
	#include <SCStaffroll/gap_0x5644.data.inc.c>
};

/* Sprite: TextBoxXUpper */

/* Texture: TextBoxXUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxXUpper_tex[] = {
    #include <SCStaffroll/TextBoxXUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxXUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxXUpper_tex, 14, 0 },
};

/* Sprite: TextBoxXUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxXUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxXUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x571C to 0x5728 (12 bytes) */
u8 dSCStaffroll_gap_0x571C[12] = {
	#include <SCStaffroll/gap_0x571C.data.inc.c>
};

/* Sprite: TextBoxXLower */

/* Texture: TextBoxXLower (12(16)x11 i4c) */
u8 dSCStaffroll_TextBoxXLower_tex[] = {
    #include <SCStaffroll/TextBoxXLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxXLower_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxXLower_tex, 11, 0 },
};

/* Sprite: TextBoxXLower (12x11 i4c) */
Sprite dSCStaffroll_TextBoxXLower = {
	0, 0,
	12, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxXLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x57D4 to 0x57E8 (20 bytes) */
u8 dSCStaffroll_gap_0x57D4[20] = {
	#include <SCStaffroll/gap_0x57D4.data.inc.c>
};

/* Sprite: TextBoxYUpper */

/* Texture: TextBoxYUpper (13(16)x14 i4c) */
u8 dSCStaffroll_TextBoxYUpper_tex[] = {
    #include <SCStaffroll/TextBoxYUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxYUpper_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBoxYUpper_tex, 14, 0 },
};

/* Sprite: TextBoxYUpper (13x14 i4c) */
Sprite dSCStaffroll_TextBoxYUpper = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxYUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x58AC to 0x58B8 (12 bytes) */
u8 dSCStaffroll_gap_0x58AC[12] = {
	#include <SCStaffroll/gap_0x58AC.data.inc.c>
};

/* Sprite: TextBoxYLower */

/* Texture: TextBoxYLower (10(16)x12 i4c) */
u8 dSCStaffroll_TextBoxYLower_tex[] = {
    #include <SCStaffroll/TextBoxYLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxYLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxYLower_tex, 12, 0 },
};

/* Sprite: TextBoxYLower (10x12 i4c) */
Sprite dSCStaffroll_TextBoxYLower = {
	0, 0,
	10, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxYLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x596C to 0x5978 (12 bytes) */
u8 dSCStaffroll_gap_0x596C[12] = {
	#include <SCStaffroll/gap_0x596C.data.inc.c>
};

/* Sprite: TextBoxZUpper */

/* Texture: TextBoxZUpper (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxZUpper_tex[] = {
    #include <SCStaffroll/TextBoxZUpper.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxZUpper_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxZUpper_tex, 14, 0 },
};

/* Sprite: TextBoxZUpper (12x14 i4c) */
Sprite dSCStaffroll_TextBoxZUpper = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxZUpper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5A3C to 0x5A48 (12 bytes) */
u8 dSCStaffroll_gap_0x5A3C[12] = {
	#include <SCStaffroll/gap_0x5A3C.data.inc.c>
};

/* Sprite: TextBoxZLower */

/* Texture: TextBoxZLower (10(16)x11 i4c) */
u8 dSCStaffroll_TextBoxZLower_tex[] = {
    #include <SCStaffroll/TextBoxZLower.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxZLower_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxZLower_tex, 11, 0 },
};

/* Sprite: TextBoxZLower (10x11 i4c) */
Sprite dSCStaffroll_TextBoxZLower = {
	0, 0,
	10, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxZLower_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5AF4 to 0x5B08 (20 bytes) */
u8 dSCStaffroll_gap_0x5AF4[20] = {
	#include <SCStaffroll/gap_0x5AF4.data.inc.c>
};

/* Sprite: TextBoxColon */

/* Texture: TextBoxColon (5(16)x11 i4c) */
u8 dSCStaffroll_TextBoxColon_tex[] = {
    #include <SCStaffroll/TextBoxColon.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxColon_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxColon_tex, 11, 0 },
};

/* Sprite: TextBoxColon (5x11 i4c) */
Sprite dSCStaffroll_TextBoxColon = {
	0, 0,
	5, 11,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	11, 11,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxColon_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5BB4 to 0x5BC8 (20 bytes) */
u8 dSCStaffroll_gap_0x5BB4[20] = {
	#include <SCStaffroll/gap_0x5BB4.data.inc.c>
};

/* Sprite: TextBoxComma */

/* Texture: TextBoxComma (5(16)x5 i4c) */
u8 dSCStaffroll_TextBoxComma_tex[] = {
    #include <SCStaffroll/TextBoxComma.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxComma_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxComma_tex, 5, 0 },
};

/* Sprite: TextBoxComma (5x5 i4c) */
Sprite dSCStaffroll_TextBoxComma = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxComma_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5C44 to 0x5C58 (20 bytes) */
u8 dSCStaffroll_gap_0x5C44[20] = {
	#include <SCStaffroll/gap_0x5C44.data.inc.c>
};

/* Sprite: TextBoxPeriod */

/* Texture: TextBoxPeriod (5(16)x5 i4c) */
u8 dSCStaffroll_TextBoxPeriod_tex[] = {
    #include <SCStaffroll/TextBoxPeriod.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxPeriod_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxPeriod_tex, 5, 0 },
};

/* Sprite: TextBoxPeriod (5x5 i4c) */
Sprite dSCStaffroll_TextBoxPeriod = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxPeriod_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5CD4 to 0x5CE8 (20 bytes) */
u8 dSCStaffroll_gap_0x5CD4[20] = {
	#include <SCStaffroll/gap_0x5CD4.data.inc.c>
};

/* Sprite: TextBoxDash */

/* Texture: TextBoxDash (9(16)x4 i4c) */
u8 dSCStaffroll_TextBoxDash_tex[] = {
    #include <SCStaffroll/TextBoxDash.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxDash_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxDash_tex, 4, 0 },
};

/* Sprite: TextBoxDash (9x4 i4c) */
Sprite dSCStaffroll_TextBoxDash = {
	0, 0,
	9, 4,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	4, 4,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxDash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5D5C to 0x5D68 (12 bytes) */
u8 dSCStaffroll_gap_0x5D5C[12] = {
	#include <SCStaffroll/gap_0x5D5C.data.inc.c>
};

/* Sprite: TextBox1 */

/* Texture: TextBox1 (9(16)x14 i4c) */
u8 dSCStaffroll_TextBox1_tex[] = {
    #include <SCStaffroll/TextBox1.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox1_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBox1_tex, 14, 0 },
};

/* Sprite: TextBox1 (9x14 i4c) */
Sprite dSCStaffroll_TextBox1 = {
	0, 0,
	9, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox1_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5E2C to 0x5E38 (12 bytes) */
u8 dSCStaffroll_gap_0x5E2C[12] = {
	#include <SCStaffroll/gap_0x5E2C.data.inc.c>
};

/* Sprite: TextBox2 */

/* Texture: TextBox2 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox2_tex[] = {
    #include <SCStaffroll/TextBox2.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox2_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox2_tex, 14, 0 },
};

/* Sprite: TextBox2 (13x14 i4c) */
Sprite dSCStaffroll_TextBox2 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox2_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5EFC to 0x5F08 (12 bytes) */
u8 dSCStaffroll_gap_0x5EFC[12] = {
	#include <SCStaffroll/gap_0x5EFC.data.inc.c>
};

/* Sprite: TextBox3 */

/* Texture: TextBox3 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox3_tex[] = {
    #include <SCStaffroll/TextBox3.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox3_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox3_tex, 14, 0 },
};

/* Sprite: TextBox3 (13x14 i4c) */
Sprite dSCStaffroll_TextBox3 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox3_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x5FCC to 0x5FD8 (12 bytes) */
u8 dSCStaffroll_gap_0x5FCC[12] = {
	#include <SCStaffroll/gap_0x5FCC.data.inc.c>
};

/* Sprite: TextBox4 */

/* Texture: TextBox4 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox4_tex[] = {
    #include <SCStaffroll/TextBox4.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox4_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox4_tex, 14, 0 },
};

/* Sprite: TextBox4 (13x14 i4c) */
Sprite dSCStaffroll_TextBox4 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox4_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x609C to 0x60A8 (12 bytes) */
u8 dSCStaffroll_gap_0x609C[12] = {
	#include <SCStaffroll/gap_0x609C.data.inc.c>
};

/* Sprite: TextBox5 */

/* Texture: TextBox5 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox5_tex[] = {
    #include <SCStaffroll/TextBox5.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox5_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox5_tex, 14, 0 },
};

/* Sprite: TextBox5 (13x14 i4c) */
Sprite dSCStaffroll_TextBox5 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox5_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x616C to 0x6178 (12 bytes) */
u8 dSCStaffroll_gap_0x616C[12] = {
	#include <SCStaffroll/gap_0x616C.data.inc.c>
};

/* Sprite: TextBox6 */

/* Texture: TextBox6 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox6_tex[] = {
    #include <SCStaffroll/TextBox6.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox6_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox6_tex, 14, 0 },
};

/* Sprite: TextBox6 (13x14 i4c) */
Sprite dSCStaffroll_TextBox6 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox6_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x623C to 0x6248 (12 bytes) */
u8 dSCStaffroll_gap_0x623C[12] = {
	#include <SCStaffroll/gap_0x623C.data.inc.c>
};

/* Sprite: TextBox7 */

/* Texture: TextBox7 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox7_tex[] = {
    #include <SCStaffroll/TextBox7.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox7_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox7_tex, 14, 0 },
};

/* Sprite: TextBox7 (13x14 i4c) */
Sprite dSCStaffroll_TextBox7 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox7_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x630C to 0x6318 (12 bytes) */
u8 dSCStaffroll_gap_0x630C[12] = {
	#include <SCStaffroll/gap_0x630C.data.inc.c>
};

/* Sprite: TextBox8 */

/* Texture: TextBox8 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox8_tex[] = {
    #include <SCStaffroll/TextBox8.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox8_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox8_tex, 14, 0 },
};

/* Sprite: TextBox8 (13x14 i4c) */
Sprite dSCStaffroll_TextBox8 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox8_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x63DC to 0x63E8 (12 bytes) */
u8 dSCStaffroll_gap_0x63DC[12] = {
	#include <SCStaffroll/gap_0x63DC.data.inc.c>
};

/* Sprite: TextBox9 */

/* Texture: TextBox9 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox9_tex[] = {
    #include <SCStaffroll/TextBox9.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox9_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox9_tex, 14, 0 },
};

/* Sprite: TextBox9 (13x14 i4c) */
Sprite dSCStaffroll_TextBox9 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox9_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x64AC to 0x64B8 (12 bytes) */
u8 dSCStaffroll_gap_0x64AC[12] = {
	#include <SCStaffroll/gap_0x64AC.data.inc.c>
};

/* Sprite: TextBox0 */

/* Texture: TextBox0 (13(16)x14 i4c) */
u8 dSCStaffroll_TextBox0_tex[] = {
    #include <SCStaffroll/TextBox0.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBox0_bitmaps[] = {
	{ 13, 16, 0, 0, dSCStaffroll_TextBox0_tex, 14, 0 },
};

/* Sprite: TextBox0 (13x14 i4c) */
Sprite dSCStaffroll_TextBox0 = {
	0, 0,
	13, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBox0_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x657C to 0x6588 (12 bytes) */
u8 dSCStaffroll_gap_0x657C[12] = {
	#include <SCStaffroll/gap_0x657C.data.inc.c>
};

/* Sprite: TextBoxQuote */

/* Texture: TextBoxQuote (5(16)x5 i4c) */
u8 dSCStaffroll_TextBoxQuote_tex[] = {
    #include <SCStaffroll/TextBoxQuote.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQuote_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxQuote_tex, 5, 0 },
};

/* Sprite: TextBoxQuote (5x5 i4c) */
Sprite dSCStaffroll_TextBoxQuote = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxQuote_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x6604 to 0x6618 (20 bytes) */
u8 dSCStaffroll_gap_0x6604[20] = {
	#include <SCStaffroll/gap_0x6604.data.inc.c>
};

/* Sprite: TextBoxAmpers */

/* Texture: TextBoxAmpers (16x14 i4c) */
u8 dSCStaffroll_TextBoxAmpers_tex[] = {
    #include <SCStaffroll/TextBoxAmpers.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxAmpers_bitmaps[] = {
	{ 16, 16, 0, 0, dSCStaffroll_TextBoxAmpers_tex, 14, 0 },
};

/* Sprite: TextBoxAmpers (16x14 i4c) */
Sprite dSCStaffroll_TextBoxAmpers = {
	0, 0,
	16, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxAmpers_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TextBoxSlash */

Gfx dSCStaffroll_TextBoxSlash_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxSlash (6(16)x12 i4c) */
u8 dSCStaffroll_TextBoxSlash_tex[] = {
    #include <SCStaffroll/TextBoxSlash.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxSlash_bitmaps[] = {
	{ 6, 16, 0, 0, dSCStaffroll_TextBoxSlash_tex, 12, 0 },
};

/* Sprite: TextBoxSlash (6x12 i4c) */
Sprite dSCStaffroll_TextBoxSlash = {
	0, 0,
	6, 12,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	12, 12,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxSlash_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TextBoxApostrophe */

Gfx dSCStaffroll_TextBoxApostrophe_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxApostrophe (5(16)x5 i4c) */
u8 dSCStaffroll_TextBoxApostrophe_tex[] = {
    #include <SCStaffroll/TextBoxApostrophe.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxApostrophe_bitmaps[] = {
	{ 5, 16, 0, 0, dSCStaffroll_TextBoxApostrophe_tex, 5, 0 },
};

/* Sprite: TextBoxApostrophe (5x5 i4c) */
Sprite dSCStaffroll_TextBoxApostrophe = {
	0, 0,
	5, 5,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	5, 5,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxApostrophe_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

/* Sprite: TextBoxQuestion */

Gfx dSCStaffroll_TextBoxQuestion_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxQuestion (12(16)x14 i4c) */
u8 dSCStaffroll_TextBoxQuestion_tex[] = {
    #include <SCStaffroll/TextBoxQuestion.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxQuestion_bitmaps[] = {
	{ 12, 16, 0, 0, dSCStaffroll_TextBoxQuestion_tex, 14, 0 },
};

/* Sprite: TextBoxQuestion (12x14 i4c) */
Sprite dSCStaffroll_TextBoxQuestion = {
	0, 0,
	12, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxQuestion_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TextBoxBracketOpen */

Gfx dSCStaffroll_TextBoxBracketOpen_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxBracketOpen (7(16)x14 i4c) */
u8 dSCStaffroll_TextBoxBracketOpen_tex[] = {
    #include <SCStaffroll/TextBoxBracketOpen.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketOpen_bitmaps[] = {
	{ 7, 16, 0, 0, dSCStaffroll_TextBoxBracketOpen_tex, 14, 0 },
};

/* Sprite: TextBoxBracketOpen (7x14 i4c) */
Sprite dSCStaffroll_TextBoxBracketOpen = {
	0, 0,
	7, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxBracketOpen_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TextBoxBracketClose */

Gfx dSCStaffroll_TextBoxBracketClose_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxBracketClose (7(16)x14 i4c) */
u8 dSCStaffroll_TextBoxBracketClose_tex[] = {
    #include <SCStaffroll/TextBoxBracketClose.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketClose_bitmaps[] = {
	{ 7, 16, 0, 0, dSCStaffroll_TextBoxBracketClose_tex, 14, 0 },
};

/* Sprite: TextBoxBracketClose (7x14 i4c) */
Sprite dSCStaffroll_TextBoxBracketClose = {
	0, 0,
	7, 14,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	14, 14,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxBracketClose_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(4);

/* Sprite: TextBoxEAccent */

Gfx dSCStaffroll_TextBoxEAccent_dl[] = { gsSPEndDisplayList() };

/* Texture: TextBoxEAccent (10(16)x13 i4c) */
u8 dSCStaffroll_TextBoxEAccent_tex[] = {
    #include <SCStaffroll/TextBoxEAccent.i4c.inc.c>
};

Bitmap dSCStaffroll_TextBoxEAccent_bitmaps[] = {
	{ 10, 16, 0, 0, dSCStaffroll_TextBoxEAccent_tex, 13, 0 },
};

/* Sprite: TextBoxEAccent (10x13 i4c) */
Sprite dSCStaffroll_TextBoxEAccent = {
	0, 0,
	10, 13,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	13, 13,
	4, 4,
	(Bitmap*)dSCStaffroll_TextBoxEAccent_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x6B64 to 0x6B78 (20 bytes) */
u8 dSCStaffroll_gap_0x6B64[20] = {
	#include <SCStaffroll/gap_0x6B64.data.inc.c>
};

/* Sprite: Crosshair */

/* Texture: Crosshair (29(32)x29 i4) */
u8 dSCStaffroll_Crosshair_tex[] = {
    #include <SCStaffroll/Crosshair.i4.inc.c>
};

Bitmap dSCStaffroll_Crosshair_bitmaps[] = {
	{ 29, 32, 0, 0, dSCStaffroll_Crosshair_tex, 29, 0 },
};

/* Sprite: Crosshair (29x29 i4) */
Sprite dSCStaffroll_Crosshair = {
	0, 0,
	29, 29,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	29, 29,
	4, 0,
	(Bitmap*)dSCStaffroll_Crosshair_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x6D9C to 0x6DA8 (12 bytes) */
u8 dSCStaffroll_gap_0x6D9C[12] = {
	#include <SCStaffroll/gap_0x6D9C.data.inc.c>
};

/* Sprite: TextBoxBracketLeft */

/* Texture: TextBoxBracketLeft (9(16)x60 i4) */
u8 dSCStaffroll_TextBoxBracketLeft_tex[] = {
    #include <SCStaffroll/TextBoxBracketLeft.i4.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketLeft_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxBracketLeft_tex, 60, 0 },
};

/* Sprite: TextBoxBracketLeft (9x60 i4) */
Sprite dSCStaffroll_TextBoxBracketLeft = {
	0, 0,
	9, 60,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	60, 60,
	4, 0,
	(Bitmap*)dSCStaffroll_TextBoxBracketLeft_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x6FDC to 0x6FE8 (12 bytes) */
u8 dSCStaffroll_gap_0x6FDC[12] = {
	#include <SCStaffroll/gap_0x6FDC.data.inc.c>
};

/* Sprite: TextBoxBracketRight */

/* Texture: TextBoxBracketRight (9(16)x60 i4) */
u8 dSCStaffroll_TextBoxBracketRight_tex[] = {
    #include <SCStaffroll/TextBoxBracketRight.i4.inc.c>
};

Bitmap dSCStaffroll_TextBoxBracketRight_bitmaps[] = {
	{ 9, 16, 0, 0, dSCStaffroll_TextBoxBracketRight_tex, 60, 0 },
};

/* Sprite: TextBoxBracketRight (9x60 i4) */
Sprite dSCStaffroll_TextBoxBracketRight = {
	0, 0,
	9, 60,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	1, 36,
	60, 60,
	4, 0,
	(Bitmap*)dSCStaffroll_TextBoxBracketRight_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

/* Raw data from file offset 0x721C to 0x7304 (232 bytes) */
u8 dSCStaffroll_gap_0x721C[232] = {
	#include <SCStaffroll/gap_0x721C.data.inc.c>
};

/* Raw data from file offset 0x7304 to 0x7338 (52 bytes) */
u8 dSCStaffroll_Interpolation_0x7304[52] = {
	#include <SCStaffroll/Interpolation_0x7304.data.inc.c>
};

/* Raw data from file offset 0x7338 to 0x78C0 (1416 bytes) */
u8 dSCStaffroll_AnimJoint_0x7338[1416] = {
	#include <SCStaffroll/AnimJoint_0x7338.data.inc.c>
};

/* DObjDesc: - @ 0x78C0 (3 entries) */
DObjDesc dSCStaffroll_DObjDesc_0x78C0[] = {
	{ 0, (void*)((u8*)dSCStaffroll_AnimJoint_0x7338 + 0x4A0), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dSCStaffroll_AnimJoint_0x7338 + 0x548), { 110.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

#endif
