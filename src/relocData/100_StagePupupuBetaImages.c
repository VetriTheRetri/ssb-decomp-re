/* relocData file 100: StagePupupuBetaImages — Pupupu Beta stage image pool.
 *
 * Block layout recovered by walking the extern reloc chains in
 * StagePupupuBeta1 (101) and StagePupupuBeta2 (102) — both files target
 * 12 (LUT, Tex) pairs in here at the same offsets. Layout matches the
 * StagePupupuImages pattern: PAD(8) + LUT(32) + PAD(8) + Tex(N) repeating.
 * Each Tex is followed by 8 bytes of trailing pad before the next LUT
 * (except the last one, which runs to end of file).
 */

#include "relocdata_types.h"

PAD(8);

/* @ 0x0008 */
u16 dStagePupupuBetaImages_Lut_0x0008_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* @ 0x0030, CI4 32×32 (512 bytes) */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x0030[512] = {
	#include <StagePupupuBetaImages/Tex_0x0030.tex.inc.c>
};

PAD(8);

/* @ 0x0238 */
u16 dStagePupupuBetaImages_Lut_0x0238_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0238.palette.inc.c>
};

PAD(8);

/* @ 0x0260, CI4 32×32 (512 bytes) */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x0260[512] = {
	#include <StagePupupuBetaImages/Tex_0x0260.tex.inc.c>
};

PAD(8);

/* @ 0x0468 */
u16 dStagePupupuBetaImages_Lut_0x0468_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0468.palette.inc.c>
};

PAD(8);

/* @ 0x0490, CI4 64×32 (1024 bytes) */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x0490[1024] = {
	#include <StagePupupuBetaImages/Tex_0x0490.tex.inc.c>
};

PAD(8);

/* @ 0x0898 */
u16 dStagePupupuBetaImages_Lut_0x0898_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0898.palette.inc.c>
};

PAD(8);

/* @ 0x08C0, CI4 32×32 (512 bytes) */
/* @tex fmt=CI4 dim=4x16 lut=dStagePupupuBetaImages_Lut_0x0898_palette */
u8 dStagePupupuBetaImages_Tex_0x08C0[512] = {
	#include <StagePupupuBetaImages/Tex_0x08C0.tex.inc.c>
};

PAD(8);

/* @ 0x0AC8 */
u16 dStagePupupuBetaImages_Lut_0x0AC8_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0AC8.palette.inc.c>
};

PAD(8);

/* @ 0x0AF0, CI4 32×32 (512 bytes) */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x0AF0[512] = {
	#include <StagePupupuBetaImages/Tex_0x0AF0.tex.inc.c>
};

PAD(8);

/* @ 0x0CF8 */
u16 dStagePupupuBetaImages_Lut_0x0CF8_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x0CF8.palette.inc.c>
};

PAD(8);

/* @ 0x0D20, CI4 64×32 (1024 bytes) */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x0D20[1024] = {
	#include <StagePupupuBetaImages/Tex_0x0D20.tex.inc.c>
};

PAD(8);

/* @ 0x1128 */
u16 dStagePupupuBetaImages_Lut_0x1128_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x1128.palette.inc.c>
};

PAD(8);

/* @ 0x1150, CI4 32×8 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dStagePupupuBetaImages_Tex_0x1150[128] = {
	#include <StagePupupuBetaImages/Tex_0x1150.tex.inc.c>
};

PAD(8);

/* @ 0x11D8 */
u16 dStagePupupuBetaImages_Lut_0x11D8_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x11D8.palette.inc.c>
};

PAD(8);

/* @ 0x1200, CI4 64×64 (2048 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dStagePupupuBetaImages_Tex_0x1200[2048] = {
	#include <StagePupupuBetaImages/Tex_0x1200.tex.inc.c>
};

PAD(8);

/* @ 0x1A08 */
u16 dStagePupupuBetaImages_Lut_0x1A08_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x1A08.palette.inc.c>
};

PAD(8);

/* @ 0x1A30, CI4 64×64 (2048 bytes) */
/* @tex fmt=CI4 dim=16x64 */
u8 dStagePupupuBetaImages_Tex_0x1A30[2048] = {
	#include <StagePupupuBetaImages/Tex_0x1A30.tex.inc.c>
};

PAD(8);

/* @ 0x2238 */
u16 dStagePupupuBetaImages_Lut_0x2238_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x2238.palette.inc.c>
};

PAD(8);

/* @ 0x2260, CI4 32×8 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dStagePupupuBetaImages_Tex_0x2260[128] = {
	#include <StagePupupuBetaImages/Tex_0x2260.tex.inc.c>
};

PAD(8);

/* @ 0x22E8 */
u16 dStagePupupuBetaImages_Lut_0x22E8_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x22E8.palette.inc.c>
};

PAD(8);

/* @ 0x2310, CI4 32×8 (128 bytes) */
/* @tex fmt=CI4 dim=4x16 */
u8 dStagePupupuBetaImages_Tex_0x2310[128] = {
	#include <StagePupupuBetaImages/Tex_0x2310.tex.inc.c>
};

PAD(8);

/* @ 0x2398 */
u16 dStagePupupuBetaImages_Lut_0x2398_palette[16] = {
	#include <StagePupupuBetaImages/Lut_0x2398.palette.inc.c>
};

PAD(8);

/* @ 0x23C0, CI4 64×32 (1024 bytes) — final block, no trailing pad */
/* @tex fmt=CI4 dim=8x64 */
u8 dStagePupupuBetaImages_Tex_0x23C0[1024] = {
	#include <StagePupupuBetaImages/Tex_0x23C0.tex.inc.c>
};
