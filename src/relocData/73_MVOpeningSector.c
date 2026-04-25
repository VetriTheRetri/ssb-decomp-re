/* relocData file 73: MVOpeningSector */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Palette: Lut_0x0008 @ 0x8 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0008_palette[16] = {
	#include <MVOpeningSector/Lut_0x0008.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0030 @ 0x30 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0030_palette[16] = {
	#include <MVOpeningSector/Lut_0x0030.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0058 @ 0x58 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0058_palette[16] = {
	#include <MVOpeningSector/Lut_0x0058.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0080 @ 0x80 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0080_palette[16] = {
	#include <MVOpeningSector/Lut_0x0080.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00A8 @ 0xA8 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x00A8_palette[16] = {
	#include <MVOpeningSector/Lut_0x00A8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00D0 @ 0xD0 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x00D0_palette[16] = {
	#include <MVOpeningSector/Lut_0x00D0.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x00F8 @ 0xF8 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x00F8_palette[16] = {
	#include <MVOpeningSector/Lut_0x00F8.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0120 @ 0x120 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0120_palette[16] = {
	#include <MVOpeningSector/Lut_0x0120.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0148 @ 0x148 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0148_palette[16] = {
	#include <MVOpeningSector/Lut_0x0148.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0170 @ 0x170 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0170_palette[16] = {
	#include <MVOpeningSector/Lut_0x0170.palette.inc.c>
};

PAD(8);

/* Palette: Lut_0x0198 @ 0x198 (16 colors RGBA5551) */
u16 dMVOpeningSector_Lut_0x0198_palette[16] = {
	#include <MVOpeningSector/Lut_0x0198.palette.inc.c>
};

PAD(8);

/* Texture data @ 0x01C0 (520 bytes) */
u8 dMVOpeningSector_Tex_0x01C0[520] = {
	#include <MVOpeningSector/Tex_0x01C0.tex.inc.c>
};

/* Texture data @ 0x03C8 (520 bytes) */
u8 dMVOpeningSector_Tex_0x03C8[520] = {
	#include <MVOpeningSector/Tex_0x03C8.tex.inc.c>
};

/* Texture data @ 0x05D0 (72 bytes) */
u8 dMVOpeningSector_Tex_0x05D0[72] = {
	#include <MVOpeningSector/Tex_0x05D0.tex.inc.c>
};

/* Texture data @ 0x0618 (520 bytes) */
u8 dMVOpeningSector_Tex_0x0618[520] = {
	#include <MVOpeningSector/Tex_0x0618.tex.inc.c>
};

/* Texture data @ 0x0820 (264 bytes) */
u8 dMVOpeningSector_Tex_0x0820[264] = {
	#include <MVOpeningSector/Tex_0x0820.tex.inc.c>
};

/* Texture data @ 0x0928 (264 bytes) */
u8 dMVOpeningSector_Tex_0x0928[264] = {
	#include <MVOpeningSector/Tex_0x0928.tex.inc.c>
};

/* Texture data @ 0x0A30 (1544 bytes) */
u8 dMVOpeningSector_Tex_0x0A30[1544] = {
	#include <MVOpeningSector/Tex_0x0A30.tex.inc.c>
};

/* Texture data @ 0x1038 (776 bytes) */
u8 dMVOpeningSector_Tex_0x1038[776] = {
	#include <MVOpeningSector/Tex_0x1038.tex.inc.c>
};

/* Texture data @ 0x1340 (520 bytes) */
u8 dMVOpeningSector_Tex_0x1340[520] = {
	#include <MVOpeningSector/Tex_0x1340.tex.inc.c>
};

/* Texture data @ 0x1548 (1160 bytes) */
u8 dMVOpeningSector_Tex_0x1548[1160] = {
	#include <MVOpeningSector/Tex_0x1548.tex.inc.c>
};

/* Texture data @ 0x19D0 (1160 bytes) */
u8 dMVOpeningSector_Tex_0x19D0[1160] = {
	#include <MVOpeningSector/Tex_0x19D0.tex.inc.c>
};

/* Texture data @ 0x1E58 (520 bytes) */
u8 dMVOpeningSector_Tex_0x1E58[520] = {
	#include <MVOpeningSector/Tex_0x1E58.tex.inc.c>
};

/* Texture data @ 0x2060 (128 bytes) */
u8 dMVOpeningSector_Tex_0x2060[128] = {
	#include <MVOpeningSector/Tex_0x2060.tex.inc.c>
};

/* Vtx: Vtx_0x20E0 @ 0x20E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x20E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x20E0.vtx.inc.c>
};

/* Vtx: Vtx_0x2110 @ 0x2110 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2110_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2110.vtx.inc.c>
};

/* Vtx: Vtx_0x2140 @ 0x2140 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2140_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2140.vtx.inc.c>
};

/* Vtx: Vtx_0x2170 @ 0x2170 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2170_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2170.vtx.inc.c>
};

/* Vtx: Vtx_0x21A0 @ 0x21A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x21A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x21A0.vtx.inc.c>
};

/* Vtx: Vtx_0x21D0 @ 0x21D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x21D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x21D0.vtx.inc.c>
};

/* Vtx: Vtx_0x2200 @ 0x2200 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2200_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2200.vtx.inc.c>
};

/* Vtx: Vtx_0x2230 @ 0x2230 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2230_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2230.vtx.inc.c>
};

/* Vtx: Vtx_0x2260 @ 0x2260 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2260_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2260.vtx.inc.c>
};

/* Vtx: Vtx_0x2290 @ 0x2290 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2290_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2290.vtx.inc.c>
};

/* Vtx: Vtx_0x22C0 @ 0x22C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x22C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x22C0.vtx.inc.c>
};

/* Vtx: Vtx_0x22F0 @ 0x22F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x22F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x22F0.vtx.inc.c>
};

/* Vtx: Vtx_0x2320 @ 0x2320 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2320_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2320.vtx.inc.c>
};

/* Vtx: Vtx_0x2350 @ 0x2350 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2350_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2350.vtx.inc.c>
};

/* Vtx: Vtx_0x2380 @ 0x2380 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2380_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2380.vtx.inc.c>
};

/* Vtx: Vtx_0x23B0 @ 0x23B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x23B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x23B0.vtx.inc.c>
};

/* Vtx: Vtx_0x23E0 @ 0x23E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x23E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x23E0.vtx.inc.c>
};

/* Vtx: Vtx_0x2410 @ 0x2410 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2410_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2410.vtx.inc.c>
};

/* Vtx: Vtx_0x2440 @ 0x2440 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2440_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2440.vtx.inc.c>
};

/* Vtx: Vtx_0x2470 @ 0x2470 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2470_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2470.vtx.inc.c>
};

/* Vtx: Vtx_0x24A0 @ 0x24A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x24A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x24A0.vtx.inc.c>
};

/* Vtx: Vtx_0x24D0 @ 0x24D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x24D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x24D0.vtx.inc.c>
};

/* Vtx: Vtx_0x2500 @ 0x2500 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2500_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2500.vtx.inc.c>
};

/* Vtx: Vtx_0x2530 @ 0x2530 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2530_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2530.vtx.inc.c>
};

/* Vtx: Vtx_0x2560 @ 0x2560 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2560_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2560.vtx.inc.c>
};

/* Vtx: Vtx_0x2590 @ 0x2590 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2590_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2590.vtx.inc.c>
};

/* Vtx: Vtx_0x25C0 @ 0x25C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x25C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x25C0.vtx.inc.c>
};

/* Vtx: Vtx_0x25F0 @ 0x25F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x25F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x25F0.vtx.inc.c>
};

/* Vtx: Vtx_0x2620 @ 0x2620 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2620_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2620.vtx.inc.c>
};

/* Vtx: Vtx_0x2650 @ 0x2650 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2650_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2650.vtx.inc.c>
};

/* Vtx: Vtx_0x2680 @ 0x2680 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2680_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2680.vtx.inc.c>
};

/* Vtx: Vtx_0x26B0 @ 0x26B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x26B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x26B0.vtx.inc.c>
};

/* Vtx: Vtx_0x26E0 @ 0x26E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x26E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x26E0.vtx.inc.c>
};

/* Vtx: Vtx_0x2710 @ 0x2710 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2710_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2710.vtx.inc.c>
};

/* Vtx: Vtx_0x2740 @ 0x2740 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2740_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2740.vtx.inc.c>
};

/* Vtx: Vtx_0x2770 @ 0x2770 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2770_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2770.vtx.inc.c>
};

/* Vtx: Vtx_0x27A0 @ 0x27A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x27A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x27A0.vtx.inc.c>
};

/* Vtx: Vtx_0x27D0 @ 0x27D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x27D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x27D0.vtx.inc.c>
};

/* Vtx: Vtx_0x2800 @ 0x2800 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2800_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2800.vtx.inc.c>
};

/* Vtx: Vtx_0x2830 @ 0x2830 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2830_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2830.vtx.inc.c>
};

/* Vtx: Vtx_0x2860 @ 0x2860 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2860_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2860.vtx.inc.c>
};

/* Vtx: Vtx_0x2890 @ 0x2890 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2890_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2890.vtx.inc.c>
};

/* Vtx: Vtx_0x28C0 @ 0x28C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x28C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x28C0.vtx.inc.c>
};

/* Vtx: Vtx_0x28F0 @ 0x28F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x28F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x28F0.vtx.inc.c>
};

/* Vtx: Vtx_0x2920 @ 0x2920 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2920_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2920.vtx.inc.c>
};

/* Vtx: Vtx_0x2950 @ 0x2950 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2950_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2950.vtx.inc.c>
};

/* Vtx: Vtx_0x2980 @ 0x2980 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2980_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2980.vtx.inc.c>
};

/* Vtx: Vtx_0x29B0 @ 0x29B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x29B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x29B0.vtx.inc.c>
};

/* Vtx: Vtx_0x29E0 @ 0x29E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x29E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x29E0.vtx.inc.c>
};

/* Vtx: Vtx_0x2A10 @ 0x2A10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2A10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2A10.vtx.inc.c>
};

/* Vtx: Vtx_0x2A40 @ 0x2A40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2A40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2A40.vtx.inc.c>
};

/* Vtx: Vtx_0x2A70 @ 0x2A70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2A70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2A70.vtx.inc.c>
};

/* Vtx: Vtx_0x2AA0 @ 0x2AA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2AA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2AA0.vtx.inc.c>
};

/* Vtx: Vtx_0x2AD0 @ 0x2AD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2AD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2AD0.vtx.inc.c>
};

/* Vtx: Vtx_0x2B00 @ 0x2B00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2B00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2B00.vtx.inc.c>
};

/* Vtx: Vtx_0x2B30 @ 0x2B30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2B30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2B30.vtx.inc.c>
};

/* Vtx: Vtx_0x2B60 @ 0x2B60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2B60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2B60.vtx.inc.c>
};

/* Vtx: Vtx_0x2B90 @ 0x2B90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2B90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2B90.vtx.inc.c>
};

/* Vtx: Vtx_0x2BC0 @ 0x2BC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2BC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2BC0.vtx.inc.c>
};

/* Vtx: Vtx_0x2BF0 @ 0x2BF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2BF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2BF0.vtx.inc.c>
};

/* Vtx: Vtx_0x2C20 @ 0x2C20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2C20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2C20.vtx.inc.c>
};

/* Vtx: Vtx_0x2C50 @ 0x2C50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2C50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2C50.vtx.inc.c>
};

/* Vtx: Vtx_0x2C80 @ 0x2C80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2C80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2C80.vtx.inc.c>
};

/* Vtx: Vtx_0x2CB0 @ 0x2CB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2CB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2CB0.vtx.inc.c>
};

/* Vtx: Vtx_0x2CE0 @ 0x2CE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2CE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2CE0.vtx.inc.c>
};

/* Vtx: Vtx_0x2D10 @ 0x2D10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2D10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2D10.vtx.inc.c>
};

/* Vtx: Vtx_0x2D40 @ 0x2D40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2D40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2D40.vtx.inc.c>
};

/* Vtx: Vtx_0x2D70 @ 0x2D70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2D70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2D70.vtx.inc.c>
};

/* Vtx: Vtx_0x2DA0 @ 0x2DA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2DA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2DA0.vtx.inc.c>
};

/* Vtx: Vtx_0x2DD0 @ 0x2DD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2DD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2DD0.vtx.inc.c>
};

/* Vtx: Vtx_0x2E00 @ 0x2E00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2E00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2E00.vtx.inc.c>
};

/* Vtx: Vtx_0x2E30 @ 0x2E30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2E30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2E30.vtx.inc.c>
};

/* Vtx: Vtx_0x2E60 @ 0x2E60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2E60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2E60.vtx.inc.c>
};

/* Vtx: Vtx_0x2E90 @ 0x2E90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2E90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2E90.vtx.inc.c>
};

/* Vtx: Vtx_0x2EC0 @ 0x2EC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2EC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2EC0.vtx.inc.c>
};

/* Vtx: Vtx_0x2EF0 @ 0x2EF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2EF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2EF0.vtx.inc.c>
};

/* Vtx: Vtx_0x2F20 @ 0x2F20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2F20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2F20.vtx.inc.c>
};

/* Vtx: Vtx_0x2F50 @ 0x2F50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2F50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2F50.vtx.inc.c>
};

/* Vtx: Vtx_0x2F80 @ 0x2F80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2F80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2F80.vtx.inc.c>
};

/* Vtx: Vtx_0x2FB0 @ 0x2FB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2FB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2FB0.vtx.inc.c>
};

/* Vtx: Vtx_0x2FE0 @ 0x2FE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x2FE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x2FE0.vtx.inc.c>
};

/* Vtx: Vtx_0x3010 @ 0x3010 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3010_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3010.vtx.inc.c>
};

/* Vtx: Vtx_0x3040 @ 0x3040 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3040_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3040.vtx.inc.c>
};

/* Vtx: Vtx_0x3070 @ 0x3070 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3070_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3070.vtx.inc.c>
};

/* Vtx: Vtx_0x30A0 @ 0x30A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x30A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x30A0.vtx.inc.c>
};

/* Vtx: Vtx_0x30D0 @ 0x30D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x30D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x30D0.vtx.inc.c>
};

/* Vtx: Vtx_0x3100 @ 0x3100 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3100_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3100.vtx.inc.c>
};

/* Vtx: Vtx_0x3130 @ 0x3130 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3130_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3130.vtx.inc.c>
};

/* Vtx: Vtx_0x3160 @ 0x3160 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3160_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3160.vtx.inc.c>
};

/* Vtx: Vtx_0x3190 @ 0x3190 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3190_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3190.vtx.inc.c>
};

/* Vtx: Vtx_0x31C0 @ 0x31C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x31C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x31C0.vtx.inc.c>
};

/* Vtx: Vtx_0x31F0 @ 0x31F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x31F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x31F0.vtx.inc.c>
};

/* Vtx: Vtx_0x3220 @ 0x3220 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3220_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3220.vtx.inc.c>
};

/* Vtx: Vtx_0x3250 @ 0x3250 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3250_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3250.vtx.inc.c>
};

/* Vtx: Vtx_0x3280 @ 0x3280 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3280_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3280.vtx.inc.c>
};

/* Vtx: Vtx_0x32B0 @ 0x32B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x32B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x32B0.vtx.inc.c>
};

/* Vtx: Vtx_0x32E0 @ 0x32E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x32E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x32E0.vtx.inc.c>
};

/* Vtx: Vtx_0x3310 @ 0x3310 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3310_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3310.vtx.inc.c>
};

/* Vtx: Vtx_0x3340 @ 0x3340 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3340_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3340.vtx.inc.c>
};

/* Vtx: Vtx_0x3370 @ 0x3370 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3370_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3370.vtx.inc.c>
};

/* Vtx: Vtx_0x33A0 @ 0x33A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x33A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x33A0.vtx.inc.c>
};

/* Vtx: Vtx_0x33D0 @ 0x33D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x33D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x33D0.vtx.inc.c>
};

/* Vtx: Vtx_0x3400 @ 0x3400 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3400_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3400.vtx.inc.c>
};

/* Vtx: Vtx_0x3430 @ 0x3430 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3430_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3430.vtx.inc.c>
};

/* Vtx: Vtx_0x3460 @ 0x3460 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3460_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3460.vtx.inc.c>
};

/* Vtx: Vtx_0x3490 @ 0x3490 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3490_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3490.vtx.inc.c>
};

/* Vtx: Vtx_0x34C0 @ 0x34C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x34C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x34C0.vtx.inc.c>
};

/* Vtx: Vtx_0x34F0 @ 0x34F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x34F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x34F0.vtx.inc.c>
};

/* Vtx: Vtx_0x3520 @ 0x3520 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3520_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3520.vtx.inc.c>
};

/* Vtx: Vtx_0x3550 @ 0x3550 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3550_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3550.vtx.inc.c>
};

/* Vtx: Vtx_0x3580 @ 0x3580 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3580_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3580.vtx.inc.c>
};

/* Vtx: Vtx_0x35B0 @ 0x35B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x35B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x35B0.vtx.inc.c>
};

/* Vtx: Vtx_0x35E0 @ 0x35E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x35E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x35E0.vtx.inc.c>
};

/* Vtx: Vtx_0x3610 @ 0x3610 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3610_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3610.vtx.inc.c>
};

/* Vtx: Vtx_0x3640 @ 0x3640 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3640_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3640.vtx.inc.c>
};

/* Vtx: Vtx_0x3670 @ 0x3670 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3670_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3670.vtx.inc.c>
};

/* Vtx: Vtx_0x36A0 @ 0x36A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x36A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x36A0.vtx.inc.c>
};

/* Vtx: Vtx_0x36D0 @ 0x36D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x36D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x36D0.vtx.inc.c>
};

/* Vtx: Vtx_0x3700 @ 0x3700 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3700_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3700.vtx.inc.c>
};

/* Vtx: Vtx_0x3730 @ 0x3730 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3730_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3730.vtx.inc.c>
};

/* Vtx: Vtx_0x3760 @ 0x3760 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3760_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3760.vtx.inc.c>
};

/* Vtx: Vtx_0x3790 @ 0x3790 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3790_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3790.vtx.inc.c>
};

/* Vtx: Vtx_0x37C0 @ 0x37C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x37C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x37C0.vtx.inc.c>
};

/* Vtx: Vtx_0x37F0 @ 0x37F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x37F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x37F0.vtx.inc.c>
};

/* Vtx: Vtx_0x3820 @ 0x3820 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3820_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3820.vtx.inc.c>
};

/* Vtx: Vtx_0x3850 @ 0x3850 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3850_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3850.vtx.inc.c>
};

/* Vtx: Vtx_0x3880 @ 0x3880 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3880_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3880.vtx.inc.c>
};

/* Vtx: Vtx_0x38B0 @ 0x38B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x38B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x38B0.vtx.inc.c>
};

/* Vtx: Vtx_0x38E0 @ 0x38E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x38E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x38E0.vtx.inc.c>
};

/* Vtx: Vtx_0x3910 @ 0x3910 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3910_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3910.vtx.inc.c>
};

/* Vtx: Vtx_0x3940 @ 0x3940 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3940_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3940.vtx.inc.c>
};

/* Vtx: Vtx_0x3970 @ 0x3970 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3970_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3970.vtx.inc.c>
};

/* Vtx: Vtx_0x39A0 @ 0x39A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x39A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x39A0.vtx.inc.c>
};

/* Vtx: Vtx_0x39D0 @ 0x39D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x39D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x39D0.vtx.inc.c>
};

/* Vtx: Vtx_0x3A00 @ 0x3A00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3A00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3A00.vtx.inc.c>
};

/* Vtx: Vtx_0x3A30 @ 0x3A30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3A30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3A30.vtx.inc.c>
};

/* Vtx: Vtx_0x3A60 @ 0x3A60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3A60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3A60.vtx.inc.c>
};

/* Vtx: Vtx_0x3A90 @ 0x3A90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3A90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3A90.vtx.inc.c>
};

/* Vtx: Vtx_0x3AC0 @ 0x3AC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3AC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3AC0.vtx.inc.c>
};

/* Vtx: Vtx_0x3AF0 @ 0x3AF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3AF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3AF0.vtx.inc.c>
};

/* Vtx: Vtx_0x3B20 @ 0x3B20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3B20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3B20.vtx.inc.c>
};

/* Vtx: Vtx_0x3B50 @ 0x3B50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3B50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3B50.vtx.inc.c>
};

/* Vtx: Vtx_0x3B80 @ 0x3B80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3B80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3B80.vtx.inc.c>
};

/* Vtx: Vtx_0x3BB0 @ 0x3BB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3BB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3BB0.vtx.inc.c>
};

/* Vtx: Vtx_0x3BE0 @ 0x3BE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3BE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3BE0.vtx.inc.c>
};

/* Vtx: Vtx_0x3C10 @ 0x3C10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3C10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3C10.vtx.inc.c>
};

/* Vtx: Vtx_0x3C40 @ 0x3C40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3C40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3C40.vtx.inc.c>
};

/* Vtx: Vtx_0x3C70 @ 0x3C70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3C70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3C70.vtx.inc.c>
};

/* Vtx: Vtx_0x3CA0 @ 0x3CA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3CA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3CA0.vtx.inc.c>
};

/* Vtx: Vtx_0x3CD0 @ 0x3CD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3CD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3CD0.vtx.inc.c>
};

/* Vtx: Vtx_0x3D00 @ 0x3D00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3D00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3D00.vtx.inc.c>
};

/* Vtx: Vtx_0x3D30 @ 0x3D30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3D30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3D30.vtx.inc.c>
};

/* Vtx: Vtx_0x3D60 @ 0x3D60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3D60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3D60.vtx.inc.c>
};

/* Vtx: Vtx_0x3D90 @ 0x3D90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3D90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3D90.vtx.inc.c>
};

/* Vtx: Vtx_0x3DC0 @ 0x3DC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3DC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3DC0.vtx.inc.c>
};

/* Vtx: Vtx_0x3DF0 @ 0x3DF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3DF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3DF0.vtx.inc.c>
};

/* Vtx: Vtx_0x3E20 @ 0x3E20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3E20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3E20.vtx.inc.c>
};

/* Vtx: Vtx_0x3E50 @ 0x3E50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3E50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3E50.vtx.inc.c>
};

/* Vtx: Vtx_0x3E80 @ 0x3E80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3E80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3E80.vtx.inc.c>
};

/* Vtx: Vtx_0x3EB0 @ 0x3EB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3EB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3EB0.vtx.inc.c>
};

/* Vtx: Vtx_0x3EE0 @ 0x3EE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3EE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3EE0.vtx.inc.c>
};

/* Vtx: Vtx_0x3F10 @ 0x3F10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3F10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3F10.vtx.inc.c>
};

/* Vtx: Vtx_0x3F40 @ 0x3F40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3F40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3F40.vtx.inc.c>
};

/* Vtx: Vtx_0x3F70 @ 0x3F70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3F70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3F70.vtx.inc.c>
};

/* Vtx: Vtx_0x3FA0 @ 0x3FA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3FA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3FA0.vtx.inc.c>
};

/* Vtx: Vtx_0x3FD0 @ 0x3FD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x3FD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x3FD0.vtx.inc.c>
};

/* Vtx: Vtx_0x4000 @ 0x4000 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4000_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4000.vtx.inc.c>
};

/* Vtx: Vtx_0x4030 @ 0x4030 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4030_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4030.vtx.inc.c>
};

/* Vtx: Vtx_0x4060 @ 0x4060 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4060_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4060.vtx.inc.c>
};

/* Vtx: Vtx_0x4090 @ 0x4090 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4090_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4090.vtx.inc.c>
};

/* Vtx: Vtx_0x40C0 @ 0x40C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x40C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x40C0.vtx.inc.c>
};

/* Vtx: Vtx_0x40F0 @ 0x40F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x40F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x40F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4120 @ 0x4120 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4120_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4120.vtx.inc.c>
};

/* Vtx: Vtx_0x4150 @ 0x4150 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4150_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4150.vtx.inc.c>
};

/* Vtx: Vtx_0x4180 @ 0x4180 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4180_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4180.vtx.inc.c>
};

/* Vtx: Vtx_0x41B0 @ 0x41B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x41B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x41B0.vtx.inc.c>
};

/* Vtx: Vtx_0x41E0 @ 0x41E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x41E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x41E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4210 @ 0x4210 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4210_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4210.vtx.inc.c>
};

/* Vtx: Vtx_0x4240 @ 0x4240 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4240_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4240.vtx.inc.c>
};

/* Vtx: Vtx_0x4270 @ 0x4270 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4270_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4270.vtx.inc.c>
};

/* Vtx: Vtx_0x42A0 @ 0x42A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x42A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x42A0.vtx.inc.c>
};

/* Vtx: Vtx_0x42D0 @ 0x42D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x42D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x42D0.vtx.inc.c>
};

/* Vtx: Vtx_0x4300 @ 0x4300 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4300_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4300.vtx.inc.c>
};

/* Vtx: Vtx_0x4330 @ 0x4330 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4330_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4330.vtx.inc.c>
};

/* Vtx: Vtx_0x4360 @ 0x4360 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4360_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4360.vtx.inc.c>
};

/* Vtx: Vtx_0x4390 @ 0x4390 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4390_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4390.vtx.inc.c>
};

/* Vtx: Vtx_0x43C0 @ 0x43C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x43C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x43C0.vtx.inc.c>
};

/* Vtx: Vtx_0x43F0 @ 0x43F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x43F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x43F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4420 @ 0x4420 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4420_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4420.vtx.inc.c>
};

/* Vtx: Vtx_0x4450 @ 0x4450 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4450_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4450.vtx.inc.c>
};

/* Vtx: Vtx_0x4480 @ 0x4480 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4480_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4480.vtx.inc.c>
};

/* Vtx: Vtx_0x44B0 @ 0x44B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x44B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x44B0.vtx.inc.c>
};

/* Vtx: Vtx_0x44E0 @ 0x44E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x44E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x44E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4510 @ 0x4510 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4510_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4510.vtx.inc.c>
};

/* Vtx: Vtx_0x4540 @ 0x4540 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4540_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4540.vtx.inc.c>
};

/* Vtx: Vtx_0x4570 @ 0x4570 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4570_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4570.vtx.inc.c>
};

/* Vtx: Vtx_0x45A0 @ 0x45A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x45A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x45A0.vtx.inc.c>
};

/* Vtx: Vtx_0x45D0 @ 0x45D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x45D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x45D0.vtx.inc.c>
};

/* Vtx: Vtx_0x4600 @ 0x4600 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4600_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4600.vtx.inc.c>
};

/* Vtx: Vtx_0x4630 @ 0x4630 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4630_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4630.vtx.inc.c>
};

/* Vtx: Vtx_0x4660 @ 0x4660 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4660_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4660.vtx.inc.c>
};

/* Vtx: Vtx_0x4690 @ 0x4690 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4690_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4690.vtx.inc.c>
};

/* Vtx: Vtx_0x46C0 @ 0x46C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x46C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x46C0.vtx.inc.c>
};

/* Vtx: Vtx_0x46F0 @ 0x46F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x46F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x46F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4720 @ 0x4720 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4720_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4720.vtx.inc.c>
};

/* Vtx: Vtx_0x4750 @ 0x4750 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4750_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4750.vtx.inc.c>
};

/* Vtx: Vtx_0x4780 @ 0x4780 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4780_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4780.vtx.inc.c>
};

/* Vtx: Vtx_0x47B0 @ 0x47B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x47B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x47B0.vtx.inc.c>
};

/* Vtx: Vtx_0x47E0 @ 0x47E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x47E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x47E0.vtx.inc.c>
};

/* Vtx: Vtx_0x4810 @ 0x4810 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4810_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4810.vtx.inc.c>
};

/* Vtx: Vtx_0x4840 @ 0x4840 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4840_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4840.vtx.inc.c>
};

/* Vtx: Vtx_0x4870 @ 0x4870 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4870_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4870.vtx.inc.c>
};

/* Vtx: Vtx_0x48A0 @ 0x48A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x48A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x48A0.vtx.inc.c>
};

/* Vtx: Vtx_0x48D0 @ 0x48D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x48D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x48D0.vtx.inc.c>
};

/* Vtx: Vtx_0x4900 @ 0x4900 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4900_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4900.vtx.inc.c>
};

/* Vtx: Vtx_0x4930 @ 0x4930 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4930_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4930.vtx.inc.c>
};

/* Vtx: Vtx_0x4960 @ 0x4960 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4960_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4960.vtx.inc.c>
};

/* Vtx: Vtx_0x4990 @ 0x4990 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4990_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4990.vtx.inc.c>
};

/* Vtx: Vtx_0x49C0 @ 0x49C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x49C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x49C0.vtx.inc.c>
};

/* Vtx: Vtx_0x49F0 @ 0x49F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x49F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x49F0.vtx.inc.c>
};

/* Vtx: Vtx_0x4A20 @ 0x4A20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4A20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4A20.vtx.inc.c>
};

/* Vtx: Vtx_0x4A50 @ 0x4A50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4A50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4A50.vtx.inc.c>
};

/* Vtx: Vtx_0x4A80 @ 0x4A80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4A80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4A80.vtx.inc.c>
};

/* Vtx: Vtx_0x4AB0 @ 0x4AB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4AB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4AB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4AE0 @ 0x4AE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4AE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4AE0.vtx.inc.c>
};

/* Vtx: Vtx_0x4B10 @ 0x4B10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4B10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4B10.vtx.inc.c>
};

/* Vtx: Vtx_0x4B40 @ 0x4B40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4B40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4B40.vtx.inc.c>
};

/* Vtx: Vtx_0x4B70 @ 0x4B70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4B70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4B70.vtx.inc.c>
};

/* Vtx: Vtx_0x4BA0 @ 0x4BA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4BA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4BA0.vtx.inc.c>
};

/* Vtx: Vtx_0x4BD0 @ 0x4BD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4BD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4BD0.vtx.inc.c>
};

/* Vtx: Vtx_0x4C00 @ 0x4C00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4C00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4C00.vtx.inc.c>
};

/* Vtx: Vtx_0x4C30 @ 0x4C30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4C30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4C30.vtx.inc.c>
};

/* Vtx: Vtx_0x4C60 @ 0x4C60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4C60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4C60.vtx.inc.c>
};

/* Vtx: Vtx_0x4C90 @ 0x4C90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4C90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4C90.vtx.inc.c>
};

/* Vtx: Vtx_0x4CC0 @ 0x4CC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4CC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4CC0.vtx.inc.c>
};

/* Vtx: Vtx_0x4CF0 @ 0x4CF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4CF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4CF0.vtx.inc.c>
};

/* Vtx: Vtx_0x4D20 @ 0x4D20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4D20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4D20.vtx.inc.c>
};

/* Vtx: Vtx_0x4D50 @ 0x4D50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4D50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4D50.vtx.inc.c>
};

/* Vtx: Vtx_0x4D80 @ 0x4D80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4D80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4D80.vtx.inc.c>
};

/* Vtx: Vtx_0x4DB0 @ 0x4DB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4DB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4DB0.vtx.inc.c>
};

/* Vtx: Vtx_0x4DE0 @ 0x4DE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4DE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4DE0.vtx.inc.c>
};

/* Vtx: Vtx_0x4E10 @ 0x4E10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4E10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4E10.vtx.inc.c>
};

/* Vtx: Vtx_0x4E40 @ 0x4E40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4E40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4E40.vtx.inc.c>
};

/* Vtx: Vtx_0x4E70 @ 0x4E70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4E70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4E70.vtx.inc.c>
};

/* Vtx: Vtx_0x4EA0 @ 0x4EA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4EA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4EA0.vtx.inc.c>
};

/* Vtx: Vtx_0x4ED0 @ 0x4ED0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4ED0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4ED0.vtx.inc.c>
};

/* Vtx: Vtx_0x4F00 @ 0x4F00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4F00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4F00.vtx.inc.c>
};

/* Vtx: Vtx_0x4F30 @ 0x4F30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4F30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4F30.vtx.inc.c>
};

/* Vtx: Vtx_0x4F60 @ 0x4F60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4F60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4F60.vtx.inc.c>
};

/* Vtx: Vtx_0x4F90 @ 0x4F90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4F90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4F90.vtx.inc.c>
};

/* Vtx: Vtx_0x4FC0 @ 0x4FC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4FC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4FC0.vtx.inc.c>
};

/* Vtx: Vtx_0x4FF0 @ 0x4FF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x4FF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x4FF0.vtx.inc.c>
};

/* Vtx: Vtx_0x5020 @ 0x5020 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5020_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5020.vtx.inc.c>
};

/* Vtx: Vtx_0x5050 @ 0x5050 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5050_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5050.vtx.inc.c>
};

/* Vtx: Vtx_0x5080 @ 0x5080 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5080_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5080.vtx.inc.c>
};

/* Vtx: Vtx_0x50B0 @ 0x50B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x50B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x50B0.vtx.inc.c>
};

/* Vtx: Vtx_0x50E0 @ 0x50E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x50E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x50E0.vtx.inc.c>
};

/* Vtx: Vtx_0x5110 @ 0x5110 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5110_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5110.vtx.inc.c>
};

/* Vtx: Vtx_0x5140 @ 0x5140 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5140_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5140.vtx.inc.c>
};

/* Vtx: Vtx_0x5170 @ 0x5170 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5170_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5170.vtx.inc.c>
};

/* Vtx: Vtx_0x51A0 @ 0x51A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x51A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x51A0.vtx.inc.c>
};

/* Vtx: Vtx_0x51D0 @ 0x51D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x51D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x51D0.vtx.inc.c>
};

/* Vtx: Vtx_0x5200 @ 0x5200 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5200_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5200.vtx.inc.c>
};

/* Vtx: Vtx_0x5230 @ 0x5230 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5230_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5230.vtx.inc.c>
};

/* Vtx: Vtx_0x5260 @ 0x5260 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5260_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5260.vtx.inc.c>
};

/* Vtx: Vtx_0x5290 @ 0x5290 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5290_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5290.vtx.inc.c>
};

/* Vtx: Vtx_0x52C0 @ 0x52C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x52C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x52C0.vtx.inc.c>
};

/* Vtx: Vtx_0x52F0 @ 0x52F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x52F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x52F0.vtx.inc.c>
};

/* Vtx: Vtx_0x5320 @ 0x5320 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5320_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5320.vtx.inc.c>
};

/* Vtx: Vtx_0x5350 @ 0x5350 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5350_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5350.vtx.inc.c>
};

/* Vtx: Vtx_0x5380 @ 0x5380 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5380_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5380.vtx.inc.c>
};

/* Vtx: Vtx_0x53B0 @ 0x53B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x53B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x53B0.vtx.inc.c>
};

/* Vtx: Vtx_0x53E0 @ 0x53E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x53E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x53E0.vtx.inc.c>
};

/* Vtx: Vtx_0x5410 @ 0x5410 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5410_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5410.vtx.inc.c>
};

/* Vtx: Vtx_0x5440 @ 0x5440 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5440_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5440.vtx.inc.c>
};

/* Vtx: Vtx_0x5470 @ 0x5470 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5470_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5470.vtx.inc.c>
};

/* Vtx: Vtx_0x54A0 @ 0x54A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x54A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x54A0.vtx.inc.c>
};

/* Vtx: Vtx_0x54D0 @ 0x54D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x54D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x54D0.vtx.inc.c>
};

/* Vtx: Vtx_0x5500 @ 0x5500 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5500_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5500.vtx.inc.c>
};

/* Vtx: Vtx_0x5530 @ 0x5530 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5530_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5530.vtx.inc.c>
};

/* Vtx: Vtx_0x5560 @ 0x5560 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5560_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5560.vtx.inc.c>
};

/* Vtx: Vtx_0x5590 @ 0x5590 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5590_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5590.vtx.inc.c>
};

/* Vtx: Vtx_0x55C0 @ 0x55C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x55C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x55C0.vtx.inc.c>
};

/* Vtx: Vtx_0x55F0 @ 0x55F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x55F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x55F0.vtx.inc.c>
};

/* Vtx: Vtx_0x5620 @ 0x5620 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5620_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5620.vtx.inc.c>
};

/* Vtx: Vtx_0x5650 @ 0x5650 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5650_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5650.vtx.inc.c>
};

/* Vtx: Vtx_0x5680 @ 0x5680 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5680_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5680.vtx.inc.c>
};

/* Vtx: Vtx_0x56B0 @ 0x56B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x56B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x56B0.vtx.inc.c>
};

/* Vtx: Vtx_0x56E0 @ 0x56E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x56E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x56E0.vtx.inc.c>
};

/* Vtx: Vtx_0x5710 @ 0x5710 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5710_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5710.vtx.inc.c>
};

/* Vtx: Vtx_0x5740 @ 0x5740 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5740_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5740.vtx.inc.c>
};

/* Vtx: Vtx_0x5770 @ 0x5770 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5770_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5770.vtx.inc.c>
};

/* Vtx: Vtx_0x57A0 @ 0x57A0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x57A0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x57A0.vtx.inc.c>
};

/* Vtx: Vtx_0x57D0 @ 0x57D0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x57D0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x57D0.vtx.inc.c>
};

/* Vtx: Vtx_0x5800 @ 0x5800 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5800_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5800.vtx.inc.c>
};

/* Vtx: Vtx_0x5830 @ 0x5830 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5830_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5830.vtx.inc.c>
};

/* Vtx: Vtx_0x5860 @ 0x5860 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5860_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5860.vtx.inc.c>
};

/* Vtx: Vtx_0x5890 @ 0x5890 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5890_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5890.vtx.inc.c>
};

/* Vtx: Vtx_0x58C0 @ 0x58C0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x58C0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x58C0.vtx.inc.c>
};

/* Vtx: Vtx_0x58F0 @ 0x58F0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x58F0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x58F0.vtx.inc.c>
};

/* Vtx: Vtx_0x5920 @ 0x5920 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5920_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5920.vtx.inc.c>
};

/* Vtx: Vtx_0x5950 @ 0x5950 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5950_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5950.vtx.inc.c>
};

/* Vtx: Vtx_0x5980 @ 0x5980 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5980_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5980.vtx.inc.c>
};

/* Vtx: Vtx_0x59B0 @ 0x59B0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x59B0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x59B0.vtx.inc.c>
};

/* Vtx: Vtx_0x59E0 @ 0x59E0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x59E0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x59E0.vtx.inc.c>
};

/* Vtx: Vtx_0x5A10 @ 0x5A10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5A10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5A10.vtx.inc.c>
};

/* Vtx: Vtx_0x5A40 @ 0x5A40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5A40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5A40.vtx.inc.c>
};

/* Vtx: Vtx_0x5A70 @ 0x5A70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5A70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5A70.vtx.inc.c>
};

/* Vtx: Vtx_0x5AA0 @ 0x5AA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5AA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5AA0.vtx.inc.c>
};

/* Vtx: Vtx_0x5AD0 @ 0x5AD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5AD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5AD0.vtx.inc.c>
};

/* Vtx: Vtx_0x5B00 @ 0x5B00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5B00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5B00.vtx.inc.c>
};

/* Vtx: Vtx_0x5B30 @ 0x5B30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5B30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5B30.vtx.inc.c>
};

/* Vtx: Vtx_0x5B60 @ 0x5B60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5B60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5B60.vtx.inc.c>
};

/* Vtx: Vtx_0x5B90 @ 0x5B90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5B90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5B90.vtx.inc.c>
};

/* Vtx: Vtx_0x5BC0 @ 0x5BC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5BC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5BC0.vtx.inc.c>
};

/* Vtx: Vtx_0x5BF0 @ 0x5BF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5BF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5BF0.vtx.inc.c>
};

/* Vtx: Vtx_0x5C20 @ 0x5C20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5C20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5C20.vtx.inc.c>
};

/* Vtx: Vtx_0x5C50 @ 0x5C50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5C50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5C50.vtx.inc.c>
};

/* Vtx: Vtx_0x5C80 @ 0x5C80 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5C80_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5C80.vtx.inc.c>
};

/* Vtx: Vtx_0x5CB0 @ 0x5CB0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5CB0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5CB0.vtx.inc.c>
};

/* Vtx: Vtx_0x5CE0 @ 0x5CE0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5CE0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5CE0.vtx.inc.c>
};

/* Vtx: Vtx_0x5D10 @ 0x5D10 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5D10_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5D10.vtx.inc.c>
};

/* Vtx: Vtx_0x5D40 @ 0x5D40 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5D40_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5D40.vtx.inc.c>
};

/* Vtx: Vtx_0x5D70 @ 0x5D70 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5D70_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5D70.vtx.inc.c>
};

/* Vtx: Vtx_0x5DA0 @ 0x5DA0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5DA0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5DA0.vtx.inc.c>
};

/* Vtx: Vtx_0x5DD0 @ 0x5DD0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5DD0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5DD0.vtx.inc.c>
};

/* Vtx: Vtx_0x5E00 @ 0x5E00 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5E00_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5E00.vtx.inc.c>
};

/* Vtx: Vtx_0x5E30 @ 0x5E30 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5E30_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5E30.vtx.inc.c>
};

/* Vtx: Vtx_0x5E60 @ 0x5E60 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5E60_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5E60.vtx.inc.c>
};

/* Vtx: Vtx_0x5E90 @ 0x5E90 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5E90_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5E90.vtx.inc.c>
};

/* Vtx: Vtx_0x5EC0 @ 0x5EC0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5EC0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5EC0.vtx.inc.c>
};

/* Vtx: Vtx_0x5EF0 @ 0x5EF0 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5EF0_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5EF0.vtx.inc.c>
};

/* Vtx: Vtx_0x5F20 @ 0x5F20 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5F20_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5F20.vtx.inc.c>
};

/* Vtx: Vtx_0x5F50 @ 0x5F50 (3 vertices) */
Vtx dMVOpeningSector_Vtx_0x5F50_Vtx[3] = {
	#include <MVOpeningSector/Vtx_0x5F50.vtx.inc.c>
};

/* Raw data from file offset 0x5F80 to 0xD820 (30880 bytes) */
/* gap sub-block @ 0x5F80 (was gap+0x0, 128 bytes) */
u8 dMVOpeningSector_gap_0x5F80[128] = {
	#include <MVOpeningSector/gap_0x5F80.data.inc.c>
};

/* gap sub-block @ 0x6000 (was gap+0x80, 28800 bytes) */
Gfx dMVOpeningSector_DL_0x6000[3600] = {
	#include <MVOpeningSector/DL_0x6000.dl.inc.c>
};

/* gap sub-block @ 0xD080 (was gap+0x7100, 144 bytes) */
u8 dMVOpeningSector_gap_0x5F80_sub_0x7100[144] = {
	#include <MVOpeningSector/gap_0x5F80_sub_0x7100.data.inc.c>
};

/* gap sub-block @ 0xD110 (was gap+0x7190, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD110[24] = {
	#include <MVOpeningSector/DL_0xD110.dl.inc.c>
};

/* Vtx: Vtx_0xD1D0 @ 0xD1D0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD1D0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD1D0.vtx.inc.c>
};

/* gap sub-block @ 0xD1E0 (was gap+0x7260, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD1E0[24] = {
	#include <MVOpeningSector/DL_0xD1E0.dl.inc.c>
};

/* Vtx: Vtx_0xD2A0 @ 0xD2A0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD2A0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD2A0.vtx.inc.c>
};

/* gap sub-block @ 0xD2B0 (was gap+0x7330, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD2B0[24] = {
	#include <MVOpeningSector/DL_0xD2B0.dl.inc.c>
};

/* Vtx: Vtx_0xD370 @ 0xD370 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD370_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD370.vtx.inc.c>
};

/* gap sub-block @ 0xD380 (was gap+0x7400, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD380[24] = {
	#include <MVOpeningSector/DL_0xD380.dl.inc.c>
};

/* Vtx: Vtx_0xD440 @ 0xD440 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD440_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD440.vtx.inc.c>
};

/* gap sub-block @ 0xD450 (was gap+0x74D0, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD450[24] = {
	#include <MVOpeningSector/DL_0xD450.dl.inc.c>
};

/* Vtx: Vtx_0xD510 @ 0xD510 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD510_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD510.vtx.inc.c>
};

/* gap sub-block @ 0xD520 (was gap+0x75A0, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD520[24] = {
	#include <MVOpeningSector/DL_0xD520.dl.inc.c>
};

/* Vtx: Vtx_0xD5E0 @ 0xD5E0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD5E0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD5E0.vtx.inc.c>
};

/* gap sub-block @ 0xD5F0 (was gap+0x7670, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD5F0[24] = {
	#include <MVOpeningSector/DL_0xD5F0.dl.inc.c>
};

/* Vtx: Vtx_0xD6B0 @ 0xD6B0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD6B0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD6B0.vtx.inc.c>
};

/* gap sub-block @ 0xD6C0 (was gap+0x7740, 192 bytes) */
Gfx dMVOpeningSector_DL_0xD6C0[24] = {
	#include <MVOpeningSector/DL_0xD6C0.dl.inc.c>
};

/* Vtx: Vtx_0xD780 @ 0xD780 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD780_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD780.vtx.inc.c>
};

/* Vtx: Vtx_0xD790 @ 0xD790 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD790_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD790.vtx.inc.c>
};

/* Vtx: Vtx_0xD7A0 @ 0xD7A0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7A0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7A0.vtx.inc.c>
};

/* Vtx: Vtx_0xD7B0 @ 0xD7B0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7B0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7B0.vtx.inc.c>
};

/* Vtx: Vtx_0xD7C0 @ 0xD7C0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7C0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7C0.vtx.inc.c>
};

/* Vtx: Vtx_0xD7D0 @ 0xD7D0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7D0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7D0.vtx.inc.c>
};

/* Vtx: Vtx_0xD7E0 @ 0xD7E0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7E0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7E0.vtx.inc.c>
};

/* Vtx: Vtx_0xD7F0 @ 0xD7F0 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD7F0_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD7F0.vtx.inc.c>
};

/* Vtx: Vtx_0xD800 @ 0xD800 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD800_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD800.vtx.inc.c>
};

/* Vtx: Vtx_0xD810 @ 0xD810 (1 vertices) */
Vtx dMVOpeningSector_Vtx_0xD810_Vtx[1] = {
	#include <MVOpeningSector/Vtx_0xD810.vtx.inc.c>
};

/* DObjDesc: GreatFoxDObjDesc @ 0xD820 (11 entries) */
DObjDesc dMVOpeningSector_GreatFoxDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7810), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7820), { -3106.987548828125f, 1182.884033203125f, -651.5912475585938f }, { 0.0f, 1.570796012878418f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7830), { -3126.51513671875f, -1398.65234375f, -579.3447265625f }, { 0.0f, 1.570796012878418f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7840), { 0.0002519999979995191f, 213.42897033691406f, -4962.00537109375f }, { 0.0f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7850), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7860), { -838.15576171875f, -100.0f, -2775.02783203125f }, { 0.0f, 1.570796012878418f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7870), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7880), { 3106.987548828125f, 1182.884033203125f, -651.5905151367188f }, { 0.0f, 1.570796012878418f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 2, (void*)((u8*)dMVOpeningSector_gap_0x5F80 + 0x7890), { 3126.51513671875f, -1398.65234375f, -579.3439331054688f }, { 0.0f, 1.570796012878418f, 0.0f }, { 9.999999747378752e-06f, 9.999999747378752e-06f, 9.999999747378752e-06f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

PAD(12);

/* Raw data from file offset 0xDA10 to 0xE110 (1792 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDA38[];
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDB4C[];
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDC60[];
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDDA4[];
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDEE8[];
extern u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDFFC[];

AObjEvent32 *dMVOpeningSector_GreatFoxAnimJoint_AnimJoint[10] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDA38,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDB4C,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDC60,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDDA4,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDEE8,
	(AObjEvent32 *)dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDFFC,
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDA38[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x00000000,  /* 0.0f */
	    0xB7E44939,  /* -2.7213814973947592e-05f */
	    0x00000000,  /* 0.0f */
	    0xB90660E8,  /* -0.00012815336231142282f */
	    0x00000000,  /* 0.0f */
	    0xB7DF39BE,  /* -2.6610559871187434e-05f */
	aobjEvent32SetValRateBlock(0x380, 19),
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x080, 47),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x100, 48),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x200, 45),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3A7E90C5,  /* 0.000971090339589864f */
	aobjEvent32SetValRate(0x200, 20),
	    0x3F801640,  /* 1.0006790161132812f */
	    0x3E033BEC,  /* 0.12815827131271362f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRate(0x080, 18),
	    0x3F7BC844,  /* 0.9835245609283447f */
	    0x3DF9F96D,  /* 0.12205777317285538f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRateBlock(0x100, 17),
	    0x3F80D19D,  /* 1.0063968896865845f */
	    0x3DF9F963,  /* 0.12205769866704941f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE4DA04C,  /* -0.20080679655075073f */
	    0xBE4633D9,  /* -0.19355715811252594f */
	    0xBE4E9ADF,  /* -0.20176266133785248f */
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE57D1A6,  /* -0.2107606828212738f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE32CBBF,  /* -0.1746053546667099f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE330963,  /* -0.17484049499034882f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x388D63AA,  /* 6.74196780892089e-05f */
	aobjEvent32SetVal0RateBlock(0x380, 25),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDB4C[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x00000000,  /* 0.0f */
	    0xB8FC4380,  /* -0.00012028869241476059f */
	    0x00000000,  /* 0.0f */
	    0xB92B8E77,  /* -0.00016360903100576252f */
	    0x00000000,  /* 0.0f */
	    0xB7E7DF5A,  /* -2.7641352062346414e-05f */
	aobjEvent32SetValRateBlock(0x380, 19),
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x080, 47),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x100, 48),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x200, 45),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3A7E90C5,  /* 0.000971090339589864f */
	aobjEvent32SetValRate(0x200, 20),
	    0x3F801640,  /* 1.0006790161132812f */
	    0x3E033BEC,  /* 0.12815827131271362f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRate(0x080, 18),
	    0x3F7BC844,  /* 0.9835245609283447f */
	    0x3DF9F96D,  /* 0.12205777317285538f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRateBlock(0x100, 17),
	    0x3F80D19D,  /* 1.0063968896865845f */
	    0x3DF9F963,  /* 0.12205769866704941f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE4DA04C,  /* -0.20080679655075073f */
	    0xBE4633D9,  /* -0.19355715811252594f */
	    0xBE4E9ADF,  /* -0.20176266133785248f */
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE57D1A6,  /* -0.2107606828212738f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE32CBBF,  /* -0.1746053546667099f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE330963,  /* -0.17484049499034882f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x388D63AA,  /* 6.74196780892089e-05f */
	aobjEvent32SetVal0RateBlock(0x380, 25),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDC60[] = {
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 39),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDDA4[] = {
	aobjEvent32SetValBlock(0x380, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	    0x3F666666,  /* 0.8999999761581421f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 39),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDEE8[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x00000000,  /* 0.0f */
	    0x3AB2DD2A,  /* 0.0013646234292536974f */
	    0x00000000,  /* 0.0f */
	    0x3B0050B1,  /* 0.001957934582605958f */
	    0x00000000,  /* 0.0f */
	    0x3AC310BA,  /* 0.001488230424001813f */
	aobjEvent32SetValRateBlock(0x380, 19),
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x080, 47),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x100, 48),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x200, 45),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3A7E90C5,  /* 0.000971090339589864f */
	aobjEvent32SetValRate(0x200, 20),
	    0x3F801640,  /* 1.0006790161132812f */
	    0x3E033BEC,  /* 0.12815827131271362f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRate(0x080, 18),
	    0x3F7BC844,  /* 0.9835245609283447f */
	    0x3DF9F96D,  /* 0.12205777317285538f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRateBlock(0x100, 17),
	    0x3F80D19D,  /* 1.0063968896865845f */
	    0x3DF9F963,  /* 0.12205769866704941f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE4DA04C,  /* -0.20080679655075073f */
	    0xBE4633D9,  /* -0.19355715811252594f */
	    0xBE4E9ADF,  /* -0.20176266133785248f */
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE57D1A6,  /* -0.2107606828212738f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE32CBBF,  /* -0.1746053546667099f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE330963,  /* -0.17484049499034882f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x388D63AA,  /* 6.74196780892089e-05f */
	aobjEvent32SetVal0RateBlock(0x380, 25),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_GreatFoxAnimJoint_AnimJoint_0xDFFC[] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x00000000,  /* 0.0f */
	    0xB7F21959,  /* -2.886045149352867e-05f */
	    0x00000000,  /* 0.0f */
	    0xB96A30C6,  /* -0.0002233414852526039f */
	    0x00000000,  /* 0.0f */
	    0xB7FDAB85,  /* -3.023982026206795e-05f */
	aobjEvent32SetValRateBlock(0x380, 19),
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	    0x3F800000,  /* 1.0f */
	    0x3E000000,  /* 0.125f */
	aobjEvent32SetValBlock(0x380, 5),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x080, 47),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x100, 48),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x200, 45),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetTargetRate(0x200, 0),
	    0x3A7E90C5,  /* 0.000971090339589864f */
	aobjEvent32SetValRate(0x200, 20),
	    0x3F801640,  /* 1.0006790161132812f */
	    0x3E033BEC,  /* 0.12815827131271362f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x080, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRate(0x080, 18),
	    0x3F7BC844,  /* 0.9835245609283447f */
	    0x3DF9F96D,  /* 0.12205777317285538f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x100, 0),
	    0x342530E7,  /* 1.5384613050173357e-07f */
	aobjEvent32SetValRateBlock(0x100, 17),
	    0x3F80D19D,  /* 1.0063968896865845f */
	    0x3DF9F963,  /* 0.12205769866704941f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE4DA04C,  /* -0.20080679655075073f */
	    0xBE4633D9,  /* -0.19355715811252594f */
	    0xBE4E9ADF,  /* -0.20176266133785248f */
	aobjEvent32SetValRateBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE57D1A6,  /* -0.2107606828212738f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE32CBBF,  /* -0.1746053546667099f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0xBE330963,  /* -0.17484049499034882f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x388D63AA,  /* 6.74196780892089e-05f */
	aobjEvent32SetVal0RateBlock(0x380, 25),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValBlock(0x380, 40),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32End(),
};

/* Raw data from file offset 0xE110 to 0xE910 (2048 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE140[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE24C[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE284[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE2BC[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE300[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE344[];
extern u32 dMVOpeningSector_Arwing0_AnimJoint_0xE680[];

AObjEvent32 *dMVOpeningSector_Arwing0_AnimJoint[12] = {
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE140,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE24C,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE284,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE2BC,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE300,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE344,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing0_AnimJoint_0xE680,
	NULL,
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE140[] = {
	aobjEvent32SetValAfter(0x384, 0),
	    0x00000000,  /* 0.0f */
	    0x3F35C28F,  /* 0.7099999785423279f */
	    0x3F35C28F,  /* 0.7099999785423279f */
	    0x3F35C28F,  /* 0.7099999785423279f */
	aobjEvent32SetVal0Rate(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x060, 0),
	    0xC44E1F86,  /* -824.4925537109375f */
	    0xBE7D2000,  /* -0.2471923828125f */
	    0xC46F8FC7,  /* -958.2465209960938f */
	    0x4017A43C,  /* 2.369399070739746f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 40),
	    0xC030EBF3,  /* -2.7644011974334717f */
	aobjEvent32SetValRate(0x040, 40),
	    0x44F04C8C,  /* 1922.39208984375f */
	    0x42E7F581,  /* 115.97949981689453f */
	aobjEvent32SetValRate(0x003, 43),
	    0x00000000,  /* 0.0f */
	    0xBB60CA3A,  /* -0.003430022392421961f */
	    0x00000000,  /* 0.0f */
	    0xBB1B82EE,  /* -0.0023729163222014904f */
	aobjEvent32SetValRateBlock(0x020, 39),
	    0xC4B6E680,  /* -1463.203125f */
	    0xC25177B0,  /* -52.36688232421875f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC25177BA,  /* -52.366920471191406f */
	aobjEvent32SetValRate(0x020, 29),
	    0xC4AF029C,  /* -1400.08154296875f */
	    0x41AD1E45,  /* 21.639780044555664f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x42E7F580,  /* 115.9794921875f */
	aobjEvent32SetVal(0x010, 80),
	    0xC4F8430B,  /* -1986.0950927734375f */
	aobjEvent32SetValRate(0x040, 80),
	    0x4638E1C5,  /* 11832.4423828125f */
	    0x42C0ED6F,  /* 96.46373748779297f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRate(0x003, 27),
	    0xBE75DD2E,  /* -0.24010154604911804f */
	    0xBB4C5AC0,  /* -0.0031182020902633667f */
	    0xBEA5CF0A,  /* -0.3238452076911926f */
	    0xBBBB3EE7,  /* -0.0057142856530845165f */
	aobjEvent32Wait(25),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x41AD1E53,  /* 21.639806747436523f */
	aobjEvent32SetValRate(0x020, 52),
	    0xC3AEFD9E,  /* -349.98138427734375f */
	    0x3F1D10ED,  /* 0.6135395169258118f */
	aobjEvent32Wait(2),
	aobjEvent32SetVal0RateBlock(0x003, 50),
	    0xBE75DD2E,  /* -0.24010154604911804f */
	    0xBF190590,  /* -0.5977411270141602f */
	aobjEvent32SetTargetRate(0x060, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x073, 40),
	    0xBE75DD2E,  /* -0.24010154604911804f */
	    0xBF190590,  /* -0.5977411270141602f */
	    0xC4F8430B,  /* -1986.0950927734375f */
	    0xC3AEFD9E,  /* -349.98138427734375f */
	    0x4638E1C5,  /* 11832.4423828125f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE24C[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE284[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE2BC[] = {
	aobjEvent32SetValAfterBlock(0x387, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE300[] = {
	aobjEvent32SetValAfterBlock(0x387, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE344[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBDD4E367,  /* -0.10394936054944992f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBDD4E367,  /* -0.10394936054944992f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBDCFC4AF,  /* -0.10144936293363571f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F5E1E92,  /* 0.8676539659500122f */
	    0x3F60ADEE,  /* 0.877653956413269f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing0_AnimJoint_0xE680[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 30),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x38FE2D8F,  /* 0.00012120149767724797f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x38F0B156,  /* 0.0001147712318925187f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xB8EB562E,  /* -0.00011221725435461849f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FED5A13,  /* 1.8543113470077515f */
	    0x3FED5A13,  /* 1.8543113470077515f */
	    0x3FEFBED6,  /* 1.8730113506317139f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3F8FCD40,  /* 1.1234512329101562f */
	    0x3F8FCD40,  /* 1.1234512329101562f */
	    0x3F9114EF,  /* 1.1334513425827026f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3FDDE1BC,  /* 1.7334513664245605f */
	    0x3FDDE1BC,  /* 1.7334513664245605f */
	    0x3FDDE1BC,  /* 1.7334513664245605f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3F8FCD40,  /* 1.1234512329101562f */
	    0x3F8FCD40,  /* 1.1234512329101562f */
	    0x3F9114EF,  /* 1.1334513425827026f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3FAB8482,  /* 1.3399813175201416f */
	    0x3FAB8482,  /* 1.3399813175201416f */
	    0x3FAB8482,  /* 1.3399813175201416f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE09E117,  /* -0.13464771211147308f */
	    0xBE1A2A2E,  /* -0.15055152773857117f */
	    0xBE0F4EC7,  /* -0.13994894921779633f */
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x3F489046,  /* 0.7834514379501343f */
	    0xBCED027D,  /* -0.02893185056746006f */
	    0x3F489046,  /* 0.7834514379501343f */
	    0xBCED027D,  /* -0.02893185056746006f */
	    0x3F489046,  /* 0.7834514379501343f */
	    0xBCED027D,  /* -0.02893185056746006f */
	aobjEvent32SetValRateBlock(0x380, 11),
	    0x3F489049,  /* 0.7834516167640686f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	    0x3F489049,  /* 0.7834516167640686f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	    0x3F489049,  /* 0.7834516167640686f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	aobjEvent32SetValRateBlock(0x380, 9),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBCC3CB69,  /* -0.023900704458355904f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBCC3CB69,  /* -0.023900704458355904f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0xBCB78EB2,  /* -0.022406909614801407f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F8FCD42,  /* 1.1234514713287354f */
	    0x3F9114F0,  /* 1.1334514617919922f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	    0x3FA44822,  /* 1.2834513187408447f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0xE910 to 0xF1C0 (2224 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xE940[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEB30[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEB68[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEBA0[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEBD8[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEC10[];
extern u32 dMVOpeningSector_Arwing1_AnimJoint_0xEF4C[];

AObjEvent32 *dMVOpeningSector_Arwing1_AnimJoint[12] = {
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xE940,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEB30,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEB68,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEBA0,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEBD8,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEC10,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing1_AnimJoint_0xEF4C,
	NULL,
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xE940[] = {
	aobjEvent32SetValRate(0x070, 0),
	    0x44FEA0A8,  /* 2037.0205078125f */
	    0x40394DD3,  /* 2.8953750133514404f */
	    0x00000000,  /* 0.0f */
	    0xBFB475D6,  /* -1.4098460674285889f */
	    0xC55B8FC8,  /* -3512.986328125f */
	    0x42A08BDB,  /* 80.27315521240234f */
	aobjEvent32SetVal0RateBlock(0x387, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x040, 25),
	    0xC3AA7E2C,  /* -340.9857177734375f */
	    0x42AD8F93,  /* 86.7804183959961f */
	aobjEvent32SetVal0Rate(0x006, 36),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x010, 75),
	    0x44EF7820,  /* 1915.75390625f */
	    0xC1C7AC9A,  /* -24.959278106689453f */
	aobjEvent32SetValRate(0x020, 79),
	    0x42ABA2E0,  /* 85.818115234375f */
	    0x41846DD1,  /* 16.553621292114258f */
	aobjEvent32SetVal0Rate(0x380, 86),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x001, 18),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x001, 102),
	    0xBEF3208E,  /* -0.47485774755477905f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x42AD8F8D,  /* 86.7803726196289f */
	aobjEvent32SetValRate(0x040, 63),
	    0x45D24E5B,  /* 6729.79443359375f */
	    0x43B45FAD,  /* 360.7474670410156f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRate(0x004, 48),
	    0x3F11885B,  /* 0.5684868693351746f */
	    0x3C79A292,  /* 0.015236513689160347f */
	aobjEvent32SetVal0RateBlock(0x002, 32),
	    0xBE947AE2,  /* -0.2900000214576721f */
	aobjEvent32SetVal0Rate(0x002, 92),
	    0xBE947AE2,  /* -0.2900000214576721f */
	aobjEvent32Wait(7),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC1C7AC55,  /* -24.95914649963379f */
	aobjEvent32SetValRate(0x010, 19),
	    0x433F0F4A,  /* 191.05972290039062f */
	    0xC321356F,  /* -161.20872497558594f */
	aobjEvent32Wait(4),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x41846DB0,  /* 16.553558349609375f */
	aobjEvent32SetValRate(0x020, 19),
	    0x446F781C,  /* 957.876708984375f */
	    0x41F0C210,  /* 30.094757080078125f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(0x004, 36),
	    0x3F43E47F,  /* 0.7652053236961365f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x380, 0),
	    0x3DBE0812,  /* 0.09278883039951324f */
	    0x3DC5C197,  /* 0.09656064957380295f */
	    0x3DBE0812,  /* 0.09278883039951324f */
	aobjEvent32SetVal0Rate(0x380, 34),
	    0x404C6C05,  /* 3.1940929889678955f */
	    0x404C6C05,  /* 3.1940929889678955f */
	    0x404C6C05,  /* 3.1940929889678955f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x43B45FBC,  /* 360.7479248046875f */
	aobjEvent32SetValRate(0x040, 7),
	    0x4611A9CF,  /* 9322.4521484375f */
	    0x43B73F70,  /* 366.49560546875f */
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC32135AD,  /* -161.2096710205078f */
	aobjEvent32SetValRate(0x010, 7),
	    0xC40D1391,  /* -564.3057250976562f */
	    0xC2991607,  /* -76.54302215576172f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x43B73F55,  /* 366.4947814941406f */
	aobjEvent32SetValRate(0x040, 4),
	    0x4620A7E2,  /* 10281.970703125f */
	    0x431F90A0,  /* 159.56494140625f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(0x020, 0),
	    0x41F0C1CD,  /* 30.094629287719727f */
	aobjEvent32SetValRate(0x020, 17),
	    0x44A7E6AD,  /* 1343.2086181640625f */
	    0x3FD00B8C,  /* 1.625352382659912f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x040, 0),
	    0x431F90FD,  /* 159.5663604736328f */
	aobjEvent32SetValRate(0x040, 16),
	    0x463C8FD0,  /* 12067.953125f */
	    0x41012496,  /* 8.071432113647461f */
	aobjEvent32Wait(2),
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC2991621,  /* -76.54322052001953f */
	aobjEvent32SetValRateBlock(0x010, 14),
	    0xC49F029A,  /* -1272.081298828125f */
	    0xC07C215C,  /* -3.9395360946655273f */
	aobjEvent32SetTargetRate(0x070, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x070, 45),
	    0xC49F029A,  /* -1272.081298828125f */
	    0x44A7E6AD,  /* 1343.2086181640625f */
	    0x463C8FD0,  /* 12067.953125f */
	aobjEvent32Wait(5),
	aobjEvent32SetValBlock(0x385, 40),
	    0xBEF3208E,  /* -0.47485774755477905f */
	    0x3F43E47F,  /* 0.7652053236961365f */
	    0x404C6C05,  /* 3.1940929889678955f */
	    0x404C6C05,  /* 3.1940929889678955f */
	    0x404C6C05,  /* 3.1940929889678955f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEB30[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEB68[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEBA0[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEBD8[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEC10[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBDF05827,  /* -0.11735563725233078f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBDF05827,  /* -0.11735563725233078f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBDEB396F,  /* -0.11485563963651657f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F418C50,  /* 0.756047248840332f */
	    0x3F441BAC,  /* 0.7660472393035889f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing1_AnimJoint_0xEF4C[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 30),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x38927220,  /* 6.983079947531223e-05f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xB9634A7A,  /* -0.0002167615166399628f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xB8BAECF9,  /* -8.913310739444569e-05f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FE5EE25,  /* 1.7963300943374634f */
	    0x3FE5EE25,  /* 1.7963300943374634f */
	    0x3FE852E8,  /* 1.8150300979614258f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3F886151,  /* 1.0654698610305786f */
	    0x3F886151,  /* 1.0654698610305786f */
	    0x3F89A8FF,  /* 1.0754698514938354f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3FD675CE,  /* 1.6754701137542725f */
	    0x3FD675CE,  /* 1.6754701137542725f */
	    0x3FD675CE,  /* 1.6754701137542725f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3F886151,  /* 1.0654698610305786f */
	    0x3F886151,  /* 1.0654698610305786f */
	    0x3F89A8FF,  /* 1.0754698514938354f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3FA41894,  /* 1.2820000648498535f */
	    0x3FA41894,  /* 1.2820000648498535f */
	    0x3FA41894,  /* 1.2820000648498535f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE09E117,  /* -0.13464771211147308f */
	    0xBE1A2A2E,  /* -0.15055152773857117f */
	    0xBE0F4EC7,  /* -0.13994894921779633f */
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x3F39B864,  /* 0.7254698276519775f */
	    0xBCED027D,  /* -0.02893185056746006f */
	    0x3F39B864,  /* 0.7254698276519775f */
	    0xBCED027D,  /* -0.02893185056746006f */
	    0x3F39B864,  /* 0.7254698276519775f */
	    0xBCED027D,  /* -0.02893185056746006f */
	aobjEvent32SetValRateBlock(0x380, 11),
	    0x3F39B867,  /* 0.7254700064659119f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	    0x3F39B867,  /* 0.7254700064659119f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	    0x3F39B867,  /* 0.7254700064659119f */
	    0x3CCA69AA,  /* 0.024708587676286697f */
	aobjEvent32SetValRateBlock(0x380, 9),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBCC3CB69,  /* -0.023900704458355904f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBCC3CB69,  /* -0.023900704458355904f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0xBCB78EB2,  /* -0.022406909614801407f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x3F346012,  /* 0.704590916633606f */
	    0xBCC3BDC0,  /* -0.023894190788269043f */
	    0x3F346012,  /* 0.704590916633606f */
	    0xBCC3BDC0,  /* -0.023894190788269043f */
	    0x3F36EF6E,  /* 0.7145909070968628f */
	    0xBCBE47A6,  /* -0.023227524012327194f */
	aobjEvent32SetValRateBlock(0x380, 12),
	    0x3F346012,  /* 0.704590916633606f */
	    0x3CC3BDC0,  /* 0.023894190788269043f */
	    0x3F346012,  /* 0.704590916633606f */
	    0x3CC3BDC0,  /* 0.023894190788269043f */
	    0x3F36EF6E,  /* 0.7145909070968628f */
	    0x3CBE47A6,  /* 0.023227524012327194f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F5DF772,  /* 0.8670569658279419f */
	    0x3F6086CE,  /* 0.8770569562911987f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	    0x3F9CDC34,  /* 1.2254700660705566f */
	aobjEvent32End(),
};

/* Raw data from file offset 0xF1C0 to 0xF9A0 (2016 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF1F0[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF39C[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF3D4[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF40C[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF444[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF47C[];
extern u32 dMVOpeningSector_Arwing2_AnimJoint_0xF7B0[];

AObjEvent32 *dMVOpeningSector_Arwing2_AnimJoint[12] = {
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF1F0,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF39C,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF3D4,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF40C,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF444,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF47C,
	NULL,
	(AObjEvent32 *)dMVOpeningSector_Arwing2_AnimJoint_0xF7B0,
	NULL,
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF1F0[] = {
	aobjEvent32SetVal0RateBlock(0x3C7, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0xC55B8FC8,  /* -3512.986328125f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRateBlock(0x030, 0),
	    0xC5389AE0,  /* -2953.6796875f */
	    0x3E07EFFF,  /* 0.1327514499425888f */
	    0x00000000,  /* 0.0f */
	    0x41F10C8D,  /* 30.131128311157227f */
	aobjEvent32SetVal0Rate(0x380, 39),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32Cmd12(0x380, 6),
	aobjEvent32SetVal0Rate(0x002, 40),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0x002, 6),
	aobjEvent32SetValRate(0x005, 40),
	    0x00000000,  /* 0.0f */
	    0x37B2C96B,  /* 2.1313046090654097e-05f */
	    0x00000000,  /* 0.0f */
	    0xBBA92FF9,  /* -0.005163189489394426f */
	aobjEvent32Cmd12(0x005, 6),
	aobjEvent32SetValRate(0x050, 58),
	    0xC5068949,  /* -2152.580322265625f */
	    0x424CA760,  /* 51.1634521484375f */
	    0x4584AF7A,  /* 4245.9345703125f */
	    0x4361A2B4,  /* 225.63555908203125f */
	aobjEvent32Cmd12(0x050, 6),
	aobjEvent32SetValRate(0x020, 80),
	    0xC30707CF,  /* -135.03050231933594f */
	    0xC27B51AD,  /* -62.82976150512695f */
	aobjEvent32Cmd12(0x020, 6),
	aobjEvent32Wait(33),
	aobjEvent32SetValRate(0x380, 27),
	    0x3FFCC0A1,  /* 1.9746285676956177f */
	    0x3CC8D4DC,  /* 0.024515561759471893f */
	    0x3FFD455E,  /* 1.9786794185638428f */
	    0x3CD79706,  /* 0.026317130774259567f */
	    0x3FFCC0A1,  /* 1.9746285676956177f */
	    0x3CCD56DA,  /* 0.025065828114748f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x007, 13),
	    0x3A940ECB,  /* 0.0011295912554487586f */
	    0x376FE41D,  /* 1.4298621863417793e-05f */
	    0x3E8A3D72,  /* 0.27000004053115845f */
	    0x3C9E0E37,  /* 0.01929388754069805f */
	    0xBE8C1BB8,  /* -0.2736489772796631f */
	    0xBC0C513F,  /* -0.008564292453229427f */
	aobjEvent32SetVal0Rate(0x003, 66),
	    0x3A940ECB,  /* 0.0011295912554487586f */
	    0x3F9B5CD4,  /* 1.2137703895568848f */
	aobjEvent32SetValRate(0x004, 66),
	    0xBF2D344A,  /* -0.6765791177749634f */
	    0xBBB485B6,  /* -0.005509103648364544f */
	aobjEvent32Wait(5),
	aobjEvent32SetTargetRate(0x050, 0),
	    0x42411855,  /* 48.27376174926758f */
	    0x43636EEA,  /* 227.43325805664062f */
	aobjEvent32SetValRate(0x050, 62),
	    0x45DCF408,  /* 7070.50390625f */
	    0x4021805E,  /* 2.5234599113464355f */
	    0x466501F8,  /* 14656.4921875f */
	    0x421CBE9F,  /* 39.186153411865234f */
	aobjEvent32Wait(8),
	aobjEvent32SetTargetRate(0x380, 0),
	    0x3C9B37F4,  /* 0.018947578966617584f */
	    0x3C963B21,  /* 0.01833874173462391f */
	    0x3C97A45A,  /* 0.018510986119508743f */
	aobjEvent32SetVal0Rate(0x380, 54),
	    0x401E291F,  /* 2.471259832382202f */
	    0x401E291F,  /* 2.471259832382202f */
	    0x401E291F,  /* 2.471259832382202f */
	aobjEvent32Wait(14),
	aobjEvent32SetTargetRate(0x020, 0),
	    0xC2C14A2C,  /* -96.64486694335938f */
	aobjEvent32SetValRate(0x020, 40),
	    0xC45ADF3C,  /* -875.488037109375f */
	    0xBF88592B,  /* -1.0652211904525757f */
	aobjEvent32Wait(39),
	aobjEvent32SetVal0Rate(0x004, 7),
	    0xBF2D344A,  /* -0.6765791177749634f */
	aobjEvent32SetVal0Rate(0x003, 47),
	    0x3A940ECB,  /* 0.0011295912554487586f */
	    0x3F9B5CD4,  /* 1.2137703895568848f */
	aobjEvent32Wait(1),
	aobjEvent32SetTargetRate(0x030, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x380, 46),
	    0x401E291F,  /* 2.471259832382202f */
	    0x401E291F,  /* 2.471259832382202f */
	    0x401E291F,  /* 2.471259832382202f */
	aobjEvent32SetVal0RateBlock(0x070, 6),
	    0x45DCF408,  /* 7070.50390625f */
	    0xC45ADF3C,  /* -875.488037109375f */
	    0x466501F8,  /* 14656.4921875f */
	aobjEvent32SetValBlock(0x074, 40),
	    0xBF2D344A,  /* -0.6765791177749634f */
	    0x45DCF408,  /* 7070.50390625f */
	    0xC45ADF3C,  /* -875.488037109375f */
	    0x466501F8,  /* 14656.4921875f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF39C[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF3D4[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF40C[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF444[] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetValAfterBlock(0x380, 5),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32SetVal0Rate(0x380, 141),
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	    0x3727C5AC,  /* 9.999999747378752e-06f */
	aobjEvent32Wait(155),
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF47C[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBDF05827,  /* -0.11735563725233078f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBDF05827,  /* -0.11735563725233078f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBDEB396F,  /* -0.11485563963651657f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0xBD002F04,  /* -0.03129483759403229f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0xBD002F04,  /* -0.03129483759403229f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	    0xBCFAE7EF,  /* -0.030628172680735588f */
	aobjEvent32SetValRateBlock(0x380, 12),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3D002F04,  /* 0.03129483759403229f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3D002F04,  /* 0.03129483759403229f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	    0x3CFAE7EF,  /* 0.030628172680735588f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0xBD55A3B4,  /* -0.05215807259082794f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0xBD55A3B4,  /* -0.05215807259082794f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	    0xBD51169F,  /* -0.05104696378111839f */
	aobjEvent32SetVal0RateBlock(0x380, 6),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetValRateBlock(0x380, 6),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3D55A3B4,  /* 0.05215807259082794f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3D55A3B4,  /* 0.05215807259082794f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	    0x3D51169F,  /* 0.05104696378111839f */
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x3FC81F02,  /* 1.563446283340454f */
	    0x3DD12C33,  /* 0.1021350845694542f */
	    0x3FC81F02,  /* 1.563446283340454f */
	    0x3DD12C33,  /* 0.1021350845694542f */
	    0x3FC81F02,  /* 1.563446283340454f */
	    0x3DCE6029,  /* 0.10076934844255447f */
	aobjEvent32SetVal0RateBlock(0x380, 5),
	    0x3FCDAF49,  /* 1.6069117784500122f */
	    0x3FCDAF49,  /* 1.6069117784500122f */
	    0x3FCD90F2,  /* 1.6059858798980713f */
	aobjEvent32SetValRateBlock(0x380, 1),
	    0x3FC81F02,  /* 1.563446283340454f */
	    0xBE512C02,  /* -0.2042694389820099f */
	    0x3FC81F02,  /* 1.563446283340454f */
	    0xBE512C02,  /* -0.2042694389820099f */
	    0x3FC81F02,  /* 1.563446283340454f */
	    0xBE4E5FF9,  /* -0.20153798162937164f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4A326A,  /* 0.7898317575454712f */
	    0x3F4CC1C6,  /* 0.799831748008728f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32End(),
};

u32 dMVOpeningSector_Arwing2_AnimJoint_0xF7B0[] = {
	aobjEvent32SetVal0Rate(0x380, 0),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x3FC90FCF,  /* 1.570794939994812f */
	    0xBFBE56CE,  /* -1.4870240688323975f */
	    0xBFC90FCF,  /* -1.570794939994812f */
	    0xB849615E,  /* -4.801281465915963e-05f */
	    0x40E54B60,  /* 7.1654510498046875f */
	    0xC3963A20,  /* -300.4541015625f */
	aobjEvent32SetValRateBlock(0x380, 60),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3677BA00,  /* 3.691413439810276e-06f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x398818CB,  /* 0.0002595841360744089f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x398606C2,  /* 0.00025563506642356515f */
	aobjEvent32SetValBlock(0x380, 1),
	    0x3FEA4131,  /* 1.830114483833313f */
	    0x3FEA4131,  /* 1.830114483833313f */
	    0x3FECA5F4,  /* 1.8488144874572754f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3F8CB45F,  /* 1.0992544889450073f */
	    0x3F8CB45F,  /* 1.0992544889450073f */
	    0x3F8DFC0D,  /* 1.1092544794082642f */
	aobjEvent32SetValBlock(0x380, 2),
	    0x3FDAC8DA,  /* 1.709254503250122f */
	    0x3FDAC8DA,  /* 1.709254503250122f */
	    0x3FDAC8DA,  /* 1.709254503250122f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3F8CB45F,  /* 1.0992544889450073f */
	    0x3F8CB45F,  /* 1.0992544889450073f */
	    0x3F8DFC0D,  /* 1.1092544794082642f */
	aobjEvent32SetValBlock(0x380, 3),
	    0x3FA86BA0,  /* 1.3157844543457031f */
	    0x3FA86BA0,  /* 1.3157844543457031f */
	    0x3FA86BA0,  /* 1.3157844543457031f */
	aobjEvent32SetTargetRate(0x380, 0),
	    0xBE09E117,  /* -0.13464771211147308f */
	    0xBE1A2A2E,  /* -0.15055152773857117f */
	    0xBE0F4EC7,  /* -0.13994894921779633f */
	aobjEvent32SetValRateBlock(0x380, 8),
	    0x3F425E7E,  /* 0.7592543363571167f */
	    0xBCED0271,  /* -0.02893182821571827f */
	    0x3F425E7E,  /* 0.7592543363571167f */
	    0xBCED0271,  /* -0.02893182821571827f */
	    0x3F425E7E,  /* 0.7592543363571167f */
	    0xBCED0271,  /* -0.02893182821571827f */
	aobjEvent32SetValRateBlock(0x380, 11),
	    0x3F425E82,  /* 0.7592545747756958f */
	    0x3CCA699C,  /* 0.024708561599254608f */
	    0x3F425E82,  /* 0.7592545747756958f */
	    0x3CCA699C,  /* 0.024708561599254608f */
	    0x3F425E82,  /* 0.7592545747756958f */
	    0x3CCA699C,  /* 0.024708561599254608f */
	aobjEvent32SetValRateBlock(0x380, 9),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3D2154E5,  /* 0.03938760235905647f */
	aobjEvent32SetValRateBlock(0x380, 4),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBD5B4C49,  /* -0.05353954806923866f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBD5B4C49,  /* -0.05353954806923866f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0xBD552DEE,  /* -0.052045755088329315f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F669D8C,  /* 0.900841474533081f */
	    0x3F692CE8,  /* 0.9108414649963379f */
	aobjEvent32SetVal0RateBlock(0x380, 3),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32SetValBlock(0x380, 21),
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	    0x3FA12F40,  /* 1.2592544555664062f */
	aobjEvent32End(),
};

PAD(4);

/* Raw data from file offset 0xF9A0 to 0xFA90 (240 bytes) */
u32 dMVOpeningSector_Cam_AnimJoint[60] = {
	aobjEvent32SetVal0Rate(0x034, 0),
	    0x469FEC01,  /* 20470.001953125f */
	    0x00000000,  /* 0.0f */
	    0xC4AB8C40,  /* -1372.3828125f */
	aobjEvent32SetValRate(0x043, 0),
	    0xC687AA4D,  /* -17365.150390625f */
	    0x439D6947,  /* 314.8224792480469f */
	    0xC5A1CE57,  /* -5177.79248046875f */
	    0x42C6FA5C,  /* 99.48898315429688f */
	    0x4437A751,  /* 734.6143188476562f */
	    0x41A6C8B4,  /* 20.847999572753906f */
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x41B1E149,  /* 22.235002517700195f */
	aobjEvent32SetValRate(0x002, 57),
	    0xC3ECC3B3,  /* -473.5289001464844f */
	    0x425B124B,  /* 54.76786422729492f */
	aobjEvent32SetValRate(0x001, 58),
	    0xC5002C22,  /* -2050.75830078125f */
	    0x42E10871,  /* 112.51648712158203f */
	aobjEvent32SetValRate(0x070, 95),
	    0xC2650C90,  /* -57.26226806640625f */
	    0xBF9FBB27,  /* -1.2478989362716675f */
	    0x449A67D8,  /* 1235.2451171875f */
	    0x402C2FE2,  /* 2.690422534942627f */
	    0x454984E4,  /* 3224.3056640625f */
	    0x403909C2,  /* 2.8912205696105957f */
	aobjEvent32SetValRateBlock(0x004, 53),
	    0x466E8D3A,  /* 15267.306640625f */
	    0xC316876E,  /* -150.52902221679688f */
	aobjEvent32SetValRate(0x004, 52),
	    0x45DBB5FC,  /* 7030.748046875f */
	    0xC2CCC175,  /* -102.37784576416016f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x002, 48),
	    0x440F354C,  /* 572.832763671875f */
	    0x417455AA,  /* 15.270914077758789f */
	aobjEvent32Wait(1),
	aobjEvent32SetVal0Rate(0x001, 47),
	    0x448F8F04,  /* 1148.46923828125f */
	aobjEvent32Wait(37),
	aobjEvent32SetValRate(0x070, 30),
	    0xC31BFCC5,  /* -155.9873809814453f */
	    0xBF1EDF3F,  /* -0.6205939650535583f */
	    0x44939164,  /* 1180.54345703125f */
	    0xC03876F0,  /* -2.8822593688964844f */
	    0x454C711A,  /* 3271.06884765625f */
	    0x3F47DF60,  /* 0.7807521820068359f */
	aobjEvent32Wait(10),
	aobjEvent32SetVal0Rate(0x007, 55),
	    0x439A2082,  /* 308.25396728515625f */
	    0x44896C02,  /* 1099.375244140625f */
	    0x4586C705,  /* 4312.87744140625f */
	aobjEvent32Wait(20),
	aobjEvent32SetVal0RateBlock(0x070, 35),
	    0xC2C333A6,  /* -97.60087585449219f */
	    0x44940BB9,  /* 1184.3663330078125f */
	    0x454CB0E0,  /* 3275.0546875f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
};

/* Sprite: Cockpit */

Gfx dMVOpeningSector_Cockpit_dl[] = { gsSPEndDisplayList() };

/* Texture: Cockpit (320x287 rgba16, 48 tiles) */
u8 dMVOpeningSector_Cockpit_tex[] = {
    #include <MVOpeningSector/Cockpit.rgba16.inc.c>
};

Bitmap dMVOpeningSector_Cockpit_bitmaps[] = {
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xF08, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1E10, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x2D18, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x3C20, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x4B28, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x5A30, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x6938, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x7840, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x8748, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x9650, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xA558, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xB460, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xC368, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xD270, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xE178, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xF080, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0xFF88, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x10E90, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x11D98, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x12CA0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x13BA8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x14AB0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x159B8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x168C0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x177C8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x186D0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x195D8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1A4E0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1B3E8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1C2F0, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1D1F8, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1E100, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1F008, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x1FF10, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x20E18, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x21D20, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x22C28, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x23B30, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x24A38, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x25940, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x26848, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x27750, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x28658, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x29560, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x2A468, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x2B370, 6, 0 },
	{ 320, 320, 0, 0, dMVOpeningSector_Cockpit_tex + 0x2C278, 5, 0 },
};

/* Sprite: Cockpit (320x240 rgba16) */
Sprite dMVOpeningSector_Cockpit = {
	0, 0,
	320, 240,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)0x00000000,
	0, 1,
	48, 600,
	5, 6,
	0, 2,
	(Bitmap*)dMVOpeningSector_Cockpit_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};

PAD(12);

