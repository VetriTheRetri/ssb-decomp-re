/* relocData file 161: FoxSpecial3 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern Gfx dFoxSpecial3_Joint_0x1FA0_post[];
extern Gfx dFoxSpecial3_Joint_0x2920_post[];
extern u16 dFoxSpecial3_Lut_0x0008_palette[];
extern u16 dFoxSpecial3_Lut_0x00B8_palette[];
extern u16 dFoxSpecial3_Lut_0x0168_palette[];
extern u16 dFoxSpecial3_Lut_0x01D8_palette[];
extern u16 dFoxSpecial3_Lut_0x0308_palette[];
extern u16 dFoxSpecial3_Lut_0x0538_palette[];
extern u16 dFoxSpecial3_Lut_0x0668_palette[];
extern u16 dFoxSpecial3_Lut_0x0798_palette[];
extern u16 dFoxSpecial3_Lut_0x0808_palette[];
extern u16 dFoxSpecial3_Lut_0x08B8_palette[];
extern u16 dFoxSpecial3_Lut_0x0998_palette[];
extern u16 dFoxSpecial3_Lut_0x0AC8_palette[];
extern u16 dFoxSpecial3_Lut_0x0BF8_palette[];
extern u16 dFoxSpecial3_Lut_0x0E28_palette[];
extern u16 dFoxSpecial3_Lut_0x1058_palette[];
extern u16 dFoxSpecial3_Lut_0x1178_palette[];
extern u8 dFoxSpecial3_Tex_0x0030[];
extern u8 dFoxSpecial3_Tex_0x00E0[];
extern u8 dFoxSpecial3_Tex_0x0190[];
extern u8 dFoxSpecial3_Tex_0x0200[];
extern u8 dFoxSpecial3_Tex_0x0330[];
extern u8 dFoxSpecial3_Tex_0x0560[];
extern u8 dFoxSpecial3_Tex_0x0690[];
extern u8 dFoxSpecial3_Tex_0x07C0[];
extern u8 dFoxSpecial3_Tex_0x0830[];
extern u8 dFoxSpecial3_Tex_0x08E0[];
extern u8 dFoxSpecial3_Tex_0x0928[];
extern u8 dFoxSpecial3_Tex_0x0950[];
extern u8 dFoxSpecial3_Tex_0x09C0[];
extern u8 dFoxSpecial3_Tex_0x0AF0[];
extern u8 dFoxSpecial3_Tex_0x0C20[];
extern u8 dFoxSpecial3_Tex_0x0E50[];
extern u8 dFoxSpecial3_Tex_0x1080[];
extern u8 dFoxSpecial3_Tex_0x11A0[];
extern Vtx dFoxSpecial3_Vtx_0x11E0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1220_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1260_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x12C0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x14A0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1680_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x16C0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x17A0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1830_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1870_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x18C0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1930_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1980_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x19E0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1A40_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1AA0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1B00_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1B40_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1D80_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1DE0_Vtx[];
extern Vtx dFoxSpecial3_Vtx_0x1EC0_Vtx[];
extern Vtx dFoxSpecial3_gap_0x1B80[];
extern Vtx dFoxSpecial3_gap_0x1E60[];
extern Vtx dFoxSpecial3_gap_0x1F00[];
extern Vtx dFoxSpecial3_gap_0x1F00_sub_0x40[];
extern Vtx dFoxSpecial3_gap_0x1F00_sub_0x60[];
extern u8 dStageSectorFile2_Tex_0x19F8[];
extern u32 dFoxSpecial3__2EB4__AnimJoint[];
extern u8 dStageSectorFile2_Tex_0x19F8[];

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0008_palette[16] = {
	#include <FoxSpecial3/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0030 to 0x00B8 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dFoxSpecial3_Lut_0x0008_palette */
u8 dFoxSpecial3_Tex_0x0030[136] = {
	#include <FoxSpecial3/Tex_0x0030.tex.inc.c>
};

/* Palette: Lut_0x00B8 @ 0xB8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x00B8_palette[16] = {
	#include <FoxSpecial3/Lut_0x00B8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x00E0 to 0x0168 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dFoxSpecial3_Lut_0x00B8_palette */
u8 dFoxSpecial3_Tex_0x00E0[128] = {
	#include <FoxSpecial3/Tex_0x00E0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0168 @ 0x168 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0168_palette[16] = {
	#include <FoxSpecial3/Lut_0x0168.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0190 to 0x01D8 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x0168_palette */
u8 dFoxSpecial3_Tex_0x0190[64] = {
	#include <FoxSpecial3/Tex_0x0190.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x01D8 @ 0x1D8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x01D8_palette[16] = {
	#include <FoxSpecial3/Lut_0x01D8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0200 to 0x0308 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dFoxSpecial3_Lut_0x01D8_palette */
u8 dFoxSpecial3_Tex_0x0200[256] = {
	#include <FoxSpecial3/Tex_0x0200.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0308 @ 0x308 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0308_palette[16] = {
	#include <FoxSpecial3/Lut_0x0308.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0330 to 0x0538 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dFoxSpecial3_Lut_0x0308_palette */
u8 dFoxSpecial3_Tex_0x0330[512] = {
	#include <FoxSpecial3/Tex_0x0330.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0538 @ 0x538 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0538_palette[16] = {
	#include <FoxSpecial3/Lut_0x0538.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0560 to 0x0668 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dFoxSpecial3_Lut_0x0538_palette */
u8 dFoxSpecial3_Tex_0x0560[256] = {
	#include <FoxSpecial3/Tex_0x0560.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0668 @ 0x668 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0668_palette[16] = {
	#include <FoxSpecial3/Lut_0x0668.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0690 to 0x0798 (264 bytes) */
/* @tex fmt=CI4 dim=32x16 lut=dFoxSpecial3_Lut_0x0668_palette */
u8 dFoxSpecial3_Tex_0x0690[256] = {
	#include <FoxSpecial3/Tex_0x0690.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0798 @ 0x798 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0798_palette[16] = {
	#include <FoxSpecial3/Lut_0x0798.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x07C0 to 0x0808 (72 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x0798_palette */
u8 dFoxSpecial3_Tex_0x07C0[64] = {
	#include <FoxSpecial3/Tex_0x07C0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0808 @ 0x808 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0808_palette[16] = {
	#include <FoxSpecial3/Lut_0x0808.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0830 to 0x08B8 (136 bytes) */
/* @tex fmt=CI4 dim=16x16 lut=dFoxSpecial3_Lut_0x0808_palette */
u8 dFoxSpecial3_Tex_0x0830[128] = {
	#include <FoxSpecial3/Tex_0x0830.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x08B8 @ 0x8B8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x08B8_palette[16] = {
	#include <FoxSpecial3/Lut_0x08B8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x08E0 to 0x0998 (184 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x08B8_palette */
/* Three sequential textures previously combined into one 184-byte
 * Tex_0x08E0 with byte-offset arithmetic references at +0x48 and +0x70. */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x08B8_palette */
u8 dFoxSpecial3_Tex_0x08E0[72] = {
	#include <FoxSpecial3/Tex_0x08E0.tex.inc.c>
};
u8 dFoxSpecial3_Tex_0x0928[40] = {
	#include <FoxSpecial3/Tex_0x0928.tex.inc.c>
};
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Tex_0x0928 */
u8 dFoxSpecial3_Tex_0x0950[72] = {
	#include <FoxSpecial3/Tex_0x0950.tex.inc.c>
};

/* Palette: Lut_0x0998 @ 0x998 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0998_palette[16] = {
	#include <FoxSpecial3/Lut_0x0998.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x09C0 to 0x0AC8 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dFoxSpecial3_Lut_0x0998_palette */
u8 dFoxSpecial3_Tex_0x09C0[256] = {
	#include <FoxSpecial3/Tex_0x09C0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0AC8 @ 0xAC8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0AC8_palette[16] = {
	#include <FoxSpecial3/Lut_0x0AC8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0AF0 to 0x0BF8 (264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dFoxSpecial3_Lut_0x0AC8_palette */
u8 dFoxSpecial3_Tex_0x0AF0[256] = {
	#include <FoxSpecial3/Tex_0x0AF0.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0BF8 @ 0xBF8 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0BF8_palette[16] = {
	#include <FoxSpecial3/Lut_0x0BF8.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0C20 to 0x0E28 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dFoxSpecial3_Lut_0x0BF8_palette */
u8 dFoxSpecial3_Tex_0x0C20[512] = {
	#include <FoxSpecial3/Tex_0x0C20.tex.inc.c>
};

PAD(8);

/* Palette: Lut_0x0E28 @ 0xE28 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x0E28_palette[16] = {
	#include <FoxSpecial3/Lut_0x0E28.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x0E50 to 0x1058 (520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dFoxSpecial3_Lut_0x0E28_palette */
u8 dFoxSpecial3_Tex_0x0E50[520] = {
	#include <FoxSpecial3/Tex_0x0E50.tex.inc.c>
};

/* Palette: Lut_0x1058 @ 0x1058 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x1058_palette[16] = {
	#include <FoxSpecial3/Lut_0x1058.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x1080 to 0x1178 (248 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x1058_palette */
u8 dFoxSpecial3_Tex_0x1080[248] = {
	#include <FoxSpecial3/Tex_0x1080.tex.inc.c>
};

/* Palette: Lut_0x1178 @ 0x1178 (16 colors RGBA5551) */
u16 dFoxSpecial3_Lut_0x1178_palette[16] = {
	#include <FoxSpecial3/Lut_0x1178.palette.inc.c>
};

PAD(8);

/* Raw data from file offset 0x11A0 to 0x11E0 (64 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dFoxSpecial3_Lut_0x1178_palette */
u8 dFoxSpecial3_Tex_0x11A0[64] = {
	#include <FoxSpecial3/Tex_0x11A0.tex.inc.c>
};

/* Vtx: Vtx_0x11E0 @ 0x11E0 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x11E0_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x11E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1220 @ 0x1220 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1220_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1220.vtx.inc.c>
};

/* Vtx: Vtx_0x1260 @ 0x1260 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x1260_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x1260.vtx.inc.c>
};

/* Vtx: Vtx_0x12C0 @ 0x12C0 (30 vertices) */
Vtx dFoxSpecial3_Vtx_0x12C0_Vtx[30] = {
	#include <FoxSpecial3/Vtx_0x12C0.vtx.inc.c>
};

/* Vtx: Vtx_0x14A0 @ 0x14A0 (30 vertices) */
Vtx dFoxSpecial3_Vtx_0x14A0_Vtx[30] = {
	#include <FoxSpecial3/Vtx_0x14A0.vtx.inc.c>
};

/* Vtx: Vtx_0x1680 @ 0x1680 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1680_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1680.vtx.inc.c>
};

/* Vtx: Vtx_0x16C0 @ 0x16C0 (14 vertices) */
Vtx dFoxSpecial3_Vtx_0x16C0_Vtx[14] = {
	#include <FoxSpecial3/Vtx_0x16C0.vtx.inc.c>
};

/* Vtx: Vtx_0x17A0 @ 0x17A0 (9 vertices) */
Vtx dFoxSpecial3_Vtx_0x17A0_Vtx[9] = {
	#include <FoxSpecial3/Vtx_0x17A0.vtx.inc.c>
};

/* Vtx: Vtx_0x1830 @ 0x1830 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1830_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1830.vtx.inc.c>
};

/* Vtx: Vtx_0x1870 @ 0x1870 (5 vertices) */
Vtx dFoxSpecial3_Vtx_0x1870_Vtx[5] = {
	#include <FoxSpecial3/Vtx_0x1870.vtx.inc.c>
};

/* Vtx: Vtx_0x18C0 @ 0x18C0 (7 vertices) */
Vtx dFoxSpecial3_Vtx_0x18C0_Vtx[7] = {
	#include <FoxSpecial3/Vtx_0x18C0.vtx.inc.c>
};

/* Vtx: Vtx_0x1930 @ 0x1930 (5 vertices) */
Vtx dFoxSpecial3_Vtx_0x1930_Vtx[5] = {
	#include <FoxSpecial3/Vtx_0x1930.vtx.inc.c>
};

/* Vtx: Vtx_0x1980 @ 0x1980 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x1980_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x1980.vtx.inc.c>
};

/* Vtx: Vtx_0x19E0_Vtx @ 0x19E0 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x19E0_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x19E0.vtx.inc.c>
};

/* Vtx: Vtx_0x1A40 @ 0x1A40 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x1A40_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x1A40.vtx.inc.c>
};

/* Vtx: Vtx_0x1AA0 @ 0x1AA0 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x1AA0_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x1AA0.vtx.inc.c>
};

/* Vtx: Vtx_0x1B00_Vtx @ 0x1B00 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1B00_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1B00.vtx.inc.c>
};

/* Vtx: Vtx_0x1B40 @ 0x1B40 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1B40_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1B40.vtx.inc.c>
};

/* Vtx: gap_0x1B80 @ 0x1B80 (32 vertices) */
Vtx dFoxSpecial3_gap_0x1B80[32] = {
	#include <FoxSpecial3/gap_0x1B80.vtx.inc.c>
};

/* Vtx: Vtx_0x1D80 @ 0x1D80 (6 vertices) */
Vtx dFoxSpecial3_Vtx_0x1D80_Vtx[6] = {
	#include <FoxSpecial3/Vtx_0x1D80.vtx.inc.c>
};

/* Vtx: Vtx_0x1DE0 @ 0x1DE0 (8 vertices) */
Vtx dFoxSpecial3_Vtx_0x1DE0_Vtx[8] = {
	#include <FoxSpecial3/Vtx_0x1DE0.vtx.inc.c>
};

/* Raw data from file offset 0x1E60 to 0x1EC0 (96 bytes) */
Vtx dFoxSpecial3_gap_0x1E60[6] = {
	#include <FoxSpecial3/gap_0x1E60.vtx.inc.c>
};

/* Vtx: Vtx_0x1EC0 @ 0x1EC0 (4 vertices) */
Vtx dFoxSpecial3_Vtx_0x1EC0_Vtx[4] = {
	#include <FoxSpecial3/Vtx_0x1EC0.vtx.inc.c>
};

/* Raw data from file offset 0x1F00 to 0x1FA0 (160 bytes) */
/* gap sub-block @ 0x1F00 (was gap+0x0, 64 bytes) */
Vtx dFoxSpecial3_gap_0x1F00[4] = {
	#include <FoxSpecial3/gap_0x1F00.vtx.inc.c>
};

/* gap sub-block @ 0x1F40 (was gap+0x40, 32 bytes) */
Vtx dFoxSpecial3_gap_0x1F00_sub_0x40[2] = {
	#include <FoxSpecial3/gap_0x1F00_sub_0x40.vtx.inc.c>
};

/* gap sub-block @ 0x1F60 (was gap+0x60, 64 bytes) */
Vtx dFoxSpecial3_gap_0x1F00_sub_0x60[4] = {
	#include <FoxSpecial3/gap_0x1F00_sub_0x60.vtx.inc.c>
};

/* DisplayList: Joint_0x1FA0 @ 0x1FA0 (64 bytes) */
Gfx dFoxSpecial3_Joint_0x1FA0_DisplayList[8] = {
	#include <FoxSpecial3/Joint_0x1FA0.dl.inc.c>
};

/* Gfx DL: Joint_0x1FA0_post @ 0x1FE0 (273 cmds) */
Gfx dFoxSpecial3_Joint_0x1FA0_post[273] = {
	#include <FoxSpecial3/Joint_0x1FA0_post.dl.inc.c>
};

/* Gfx DL: Joint_0x1FA0_post_post @ 0x2868 (23 cmds) */
Gfx dFoxSpecial3_Joint_0x1FA0_post_post[23] = {
	#include <FoxSpecial3/Joint_0x1FA0_post_post.dl.inc.c>
};

/* DisplayList: Joint_0x2920 @ 0x2920 (136 bytes) */
Gfx dFoxSpecial3_Joint_0x2920_DisplayList[17] = {
	#include <FoxSpecial3/Joint_0x2920.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post @ 0x29A8 (5 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post[5] = {
	#include <FoxSpecial3/Joint_0x2920_post.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post_post @ 0x29D0 (4 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post_post[4] = {
	#include <FoxSpecial3/Joint_0x2920_post_post.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post_post_post @ 0x29F0 (6 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post_post_post[6] = {
	#include <FoxSpecial3/Joint_0x2920_post_post_post.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post_post_post_post @ 0x2A20 (6 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post_post_post_post[6] = {
	#include <FoxSpecial3/Joint_0x2920_post_post_post_post.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post_post_post_post_post @ 0x2A50 (22 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post_post_post_post_post[22] = {
	#include <FoxSpecial3/Joint_0x2920_post_post_post_post_post.dl.inc.c>
};

/* Gfx DL: Joint_0x2920_post_post_post_post_post_post @ 0x2B00 (22 cmds) */
Gfx dFoxSpecial3_Joint_0x2920_post_post_post_post_post_post[22] = {
	#include <FoxSpecial3/Joint_0x2920_post_post_post_post_post_post.dl.inc.c>
};

/* DObjDLLink @ 0x2BB0 (2 entries) — DL slot for a DObjDesc entry. */
DObjDLLink dFoxSpecial3_JointCmd_0x2BB0[] = {
	{ 0, dFoxSpecial3_Joint_0x1FA0_DisplayList },
	{ 4, NULL },
};

/* Raw data from file offset 0x2BC0 to 0x2C30 (112 bytes) — 7 sequential
 * DObjDLLink[2] terminator-pairs, one per Joint display list. Originally
 * a single u8[112] blob with byte-offset references from gap_0x2C88. */
DObjDLLink dFoxSpecial3_JointCmd_0x2BC0[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_DisplayList },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2BD0[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_post_post },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2BE0[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_post_post_post },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2BF0[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_post_post_post_post },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2C00[2] = {
	{ 0, dFoxSpecial3_Joint_0x1FA0_post_post },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2C10[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_post_post_post_post_post },
	{ 4, NULL },
};
DObjDLLink dFoxSpecial3_JointCmd_0x2C20[2] = {
	{ 1, dFoxSpecial3_Joint_0x2920_post_post_post_post_post_post },
	{ 4, NULL },
};

/* DObjDesc: EntryArwing @ 0x2C30 (13 entries) — previously split into
 * a 2-entry "EntryArwing" + 492-byte gap_0x2C88 blob; in fact it's one
 * 13-entry scene graph ending with the {18, ...} sentinel at index 12,
 * followed by 8 bytes of trailer whose chain ptr at +0x240 targets
 * __2E74__AnimJoint. Entry cmd ids 0x8002 / 0x8003 carry high-bit
 * flags on top of cmd=2/3. */
DObjDesc dFoxSpecial3_EntryArwing[13] = {
	{ 0x0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x1, (void*)dFoxSpecial3_JointCmd_0x2BB0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x8002, (void*)dFoxSpecial3_JointCmd_0x2BC0, { 213.48599243164062f, -97.46099853515625f, 394.4850158691406f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 0x8002, (void*)dFoxSpecial3_JointCmd_0x2BD0, { -213.48602294921875f, -97.46099853515625f, 394.4850158691406f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 0x8002, (void*)dFoxSpecial3_JointCmd_0x2BE0, { 213.48599243164062f, -97.46099853515625f, 394.4850158691406f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 0x8002, (void*)dFoxSpecial3_JointCmd_0x2BF0, { -213.48602294921875f, -97.46099853515625f, 394.4850158691406f }, { 0.0f, 0.0f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 0x2, (void*)dFoxSpecial3_JointCmd_0x2C00, { 0.0f, 168.23626708984375f, -261.0562744140625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x8003, (void*)dFoxSpecial3_JointCmd_0x2C10, { 0.0f, -41.76900100708008f, -696.1500244140625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x8003, (void*)dFoxSpecial3_JointCmd_0x2C20, { 0.0f, -41.76900100708008f, -696.1500244140625f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x12, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* 8-byte trailer past the DObjDesc sentinel — a 4-byte pad followed by
 * a chain pointer to the AnimJoint script at __2E74__AnimJoint. */
PAD(4);
extern u8 dFoxSpecial3__2E74__AnimJoint[];
AObjEvent32 *dFoxSpecial3_EntryArwing_post[1] = {
	(AObjEvent32 *)dFoxSpecial3__2E74__AnimJoint,
};

/* TODO: data.inc.c — block at 0x2E74 was u32[16]; contains 1 embedded chain pointer(s) split out below */
u8 dFoxSpecial3__2E74__AnimJoint[60] = {
	/* TODO: data.inc.c */
	#include <FoxSpecial3/_2E74__AnimJoint.data.inc.c>
};

u32 dFoxSpecial3_data_0x2EB0[1] = { (u32)dFoxSpecial3__2EB4__AnimJoint };


/* Raw data from file offset 0x2EB4 to 0x2F80 (204 bytes) */
u32 dFoxSpecial3__2EB4__AnimJoint[50] = {
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FC911F1,
	    0x3FC911F1,
	    0x3FCB76B4,
	aobjEvent32SetValBlock(0x380, 2),
	    0x3F570A3D,
	    0x3F570A3D,
	    0x3F59999A,
	aobjEvent32SetValBlock(0x380, 2),
	    0x3FB9999A,
	    0x3FB9999A,
	    0x3FB9999A,
	aobjEvent32SetValBlock(0x380, 3),
	    0x3F570A3D,
	    0x3F570A3D,
	    0x3F59999A,
	aobjEvent32SetValBlock(0x380, 3),
	    0x3F873C60,
	    0x3F873C60,
	    0x3F873C60,
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE09E117,
	    0xBE1A2A2E,
	    0xBE0F4EC7,
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x3F000000,
	    0xBC63F461,
	    0x3F000000,
	    0xBC63F461,
	    0x3F000000,
	    0xBC63F461,
	aobjEvent32SetValRateBlock(0x380, 32),
	    0x3F000003,
	    0x3C47CE0C,
	    0x3F000003,
	    0x3C47CE0C,
	    0x3F000003,
	    0x3C47CE0C,
	aobjEvent32SetValRateBlock(0x380, 9),
	    0x3F800000,
	    0x3CE81B4A,
	    0x3F800000,
	    0x3CE81B4A,
	    0x3F800000,
	    0x3CEEEEEA,
	aobjEvent32End(),
};
