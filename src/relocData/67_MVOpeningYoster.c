/* relocData file 67: MVOpeningYoster */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

PAD(8);

/* Raw data from file offset 0x0008 to 0x0210 (520 bytes) */
u16 dMVOpeningYoster_Lut255_0x0008[260] = {
	#include <MVOpeningYoster/Lut255_0x0008.palette.inc.c>
};

/* Raw data from file offset 0x0210 to 0x0418 (520 bytes) */
u16 dMVOpeningYoster_Lut255_0x0210[260] = {
	#include <MVOpeningYoster/Lut255_0x0210.palette.inc.c>
};

/* Raw data from file offset 0x0418 to 0x0620 (520 bytes) */
u16 dMVOpeningYoster_Lut255_0x0418[260] = {
	#include <MVOpeningYoster/Lut255_0x0418.palette.inc.c>
};

/* Raw data from file offset 0x0620 to 0x0828 (520 bytes) */
u16 dMVOpeningYoster_Lut255_0x0620[260] = {
	#include <MVOpeningYoster/Lut255_0x0620.palette.inc.c>
};

/* Texture data @ 0x0828 (4104 bytes) */
/* @tex fmt=RGBA16 dim=64x32 */
u8 dMVOpeningYoster_Tex_0x0828[4096] = {
	#include <MVOpeningYoster/Tex_0x0828.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x1830 (2056 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVOpeningYoster_Lut255_0x0008 */
u8 dMVOpeningYoster_Tex_0x1830[2056] = {
	#include <MVOpeningYoster/Tex_0x1830.tex.inc.c>
};

/* Texture data @ 0x2038 (2056 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVOpeningYoster_Lut255_0x0210 */
u8 dMVOpeningYoster_Tex_0x2038[2056] = {
	#include <MVOpeningYoster/Tex_0x2038.tex.inc.c>
};

/* Texture data @ 0x2840 (2056 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVOpeningYoster_Lut255_0x0418 */
u8 dMVOpeningYoster_Tex_0x2840[2048] = {
	#include <MVOpeningYoster/Tex_0x2840.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x3048 (2056 bytes) */
/* @tex fmt=CI8 dim=32x64 lut=dMVOpeningYoster_Lut255_0x0620 */
u8 dMVOpeningYoster_Tex_0x3048[2056] = {
	#include <MVOpeningYoster/Tex_0x3048.tex.inc.c>
};

/* Texture data @ 0x3850 (4104 bytes) */
u8 dMVOpeningYoster_Tex_0x3850[4104] = {
	#include <MVOpeningYoster/Tex_0x3850.tex.inc.c>
};

/* Texture data @ 0x4858 (4104 bytes) */
u8 dMVOpeningYoster_Tex_0x4858[4104] = {
	#include <MVOpeningYoster/Tex_0x4858.tex.inc.c>
};

/* Texture data @ 0x5860 (4104 bytes) */
u8 dMVOpeningYoster_Tex_0x5860[4096] = {
	#include <MVOpeningYoster/Tex_0x5860.tex.inc.c>
};

PAD(8);

/* Texture data @ 0x6868 (4096 bytes) */
u8 dMVOpeningYoster_Tex_0x6868[4096] = {
	#include <MVOpeningYoster/Tex_0x6868.tex.inc.c>
};

/* Vtx: Vtx_0x7868_Vtx @ 0x7868 (10 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7868_Vtx[10] = {
	#include <MVOpeningYoster/Vtx_0x7868.vtx.inc.c>
};

/* Vtx: Vtx_0x7908 @ 0x7908 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7908_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7908.vtx.inc.c>
};

/* Vtx: Vtx_0x7948 @ 0x7948 (32 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7948_Vtx[32] = {
	#include <MVOpeningYoster/Vtx_0x7948.vtx.inc.c>
};

/* Vtx: Vtx_0x7B48 @ 0x7B48 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7B48_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x7B48.vtx.inc.c>
};

/* Vtx: Vtx_0x7B58 @ 0x7B58 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7B58_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x7B58.vtx.inc.c>
};

/* Vtx: Vtx_0x7B68 @ 0x7B68 (5 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7B68_Vtx[5] = {
	#include <MVOpeningYoster/Vtx_0x7B68.vtx.inc.c>
};

/* Vtx: Vtx_0x7BB8 @ 0x7BB8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7BB8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x7BB8.vtx.inc.c>
};

/* Vtx: Vtx_0x7BC8 @ 0x7BC8 (2 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7BC8_Vtx[2] = {
	#include <MVOpeningYoster/Vtx_0x7BC8.vtx.inc.c>
};

/* Vtx: Vtx_0x7BE8 @ 0x7BE8 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7BE8_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7BE8.vtx.inc.c>
};

/* Vtx: Vtx_0x7C28 @ 0x7C28 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7C28_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7C28.vtx.inc.c>
};

/* Vtx: Vtx_0x7C68 @ 0x7C68 (6 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7C68_Vtx[6] = {
	#include <MVOpeningYoster/Vtx_0x7C68.vtx.inc.c>
};

/* Vtx: Vtx_0x7CC8 @ 0x7CC8 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7CC8_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7CC8.vtx.inc.c>
};

/* Vtx: Vtx_0x7D08 @ 0x7D08 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7D08_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7D08.vtx.inc.c>
};

/* Vtx: Vtx_0x7D48 @ 0x7D48 (32 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7D48_Vtx[32] = {
	#include <MVOpeningYoster/Vtx_0x7D48.vtx.inc.c>
};

/* Vtx: Vtx_0x7F48 @ 0x7F48 (8 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7F48_Vtx[8] = {
	#include <MVOpeningYoster/Vtx_0x7F48.vtx.inc.c>
};

/* Vtx: Vtx_0x7FC8 @ 0x7FC8 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x7FC8_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x7FC8.vtx.inc.c>
};

/* Vtx: Vtx_0x8008 @ 0x8008 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x8008_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x8008.vtx.inc.c>
};

/* Vtx: Vtx_0x8048 @ 0x8048 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x8048_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x8048.vtx.inc.c>
};

/* Vtx: Vtx_0x8088 @ 0x8088 (4 vertices) */
Vtx dMVOpeningYoster_Vtx_0x8088_Vtx[4] = {
	#include <MVOpeningYoster/Vtx_0x8088.vtx.inc.c>
};

/* Raw data from file offset 0x80C8 to 0x9808 (5952 bytes) */
/* gap sub-block @ 0x80C8 (was gap+0x0, 88 bytes) */
Gfx dMVOpeningYoster_DL_0x80C8[11] = {
	#include <MVOpeningYoster/DL_0x80C8.dl.inc.c>
};

/* gap sub-block @ 0x8120 (was gap+0x58, 168 bytes) */
Gfx dMVOpeningYoster_DL_0x8120[21] = {
	#include <MVOpeningYoster/DL_0x8120.dl.inc.c>
};

/* gap sub-block @ 0x81C8 (was gap+0x100, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x81C8[16] = {
	#include <MVOpeningYoster/DL_0x81C8.dl.inc.c>
};

/* gap sub-block @ 0x8248 (was gap+0x180, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x8248[17] = {
	#include <MVOpeningYoster/DL_0x8248.dl.inc.c>
};

/* gap sub-block @ 0x82D0 (was gap+0x208, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x82D0[12] = {
	#include <MVOpeningYoster/DL_0x82D0.dl.inc.c>
};

/* gap sub-block @ 0x8330 (was gap+0x268, 104 bytes) */
Gfx dMVOpeningYoster_DL_0x8330[13] = {
	#include <MVOpeningYoster/DL_0x8330.dl.inc.c>
};

/* gap sub-block @ 0x8398 (was gap+0x2D0, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x8398[16] = {
	#include <MVOpeningYoster/DL_0x8398.dl.inc.c>
};

/* gap sub-block @ 0x8418 (was gap+0x350, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x8418[17] = {
	#include <MVOpeningYoster/DL_0x8418.dl.inc.c>
};

/* gap sub-block @ 0x84A0 (was gap+0x3D8, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x84A0[12] = {
	#include <MVOpeningYoster/DL_0x84A0.dl.inc.c>
};

/* gap sub-block @ 0x8500 (was gap+0x438, 104 bytes) */
Gfx dMVOpeningYoster_DL_0x8500[13] = {
	#include <MVOpeningYoster/DL_0x8500.dl.inc.c>
};

/* gap sub-block @ 0x8568 (was gap+0x4A0, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x8568[16] = {
	#include <MVOpeningYoster/DL_0x8568.dl.inc.c>
};

/* gap sub-block @ 0x85E8 (was gap+0x520, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x85E8[17] = {
	#include <MVOpeningYoster/DL_0x85E8.dl.inc.c>
};

/* gap sub-block @ 0x8670 (was gap+0x5A8, 112 bytes) */
Gfx dMVOpeningYoster_DL_0x8670[14] = {
	#include <MVOpeningYoster/DL_0x8670.dl.inc.c>
};

/* gap sub-block @ 0x86E0 (was gap+0x618, 120 bytes) */
Gfx dMVOpeningYoster_DL_0x86E0[15] = {
	#include <MVOpeningYoster/DL_0x86E0.dl.inc.c>
};

/* gap sub-block @ 0x8758 (was gap+0x690, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x8758[16] = {
	#include <MVOpeningYoster/DL_0x8758.dl.inc.c>
};

/* gap sub-block @ 0x87D8 (was gap+0x710, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x87D8[17] = {
	#include <MVOpeningYoster/DL_0x87D8.dl.inc.c>
};

/* gap sub-block @ 0x8860 (was gap+0x798, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x8860[12] = {
	#include <MVOpeningYoster/DL_0x8860.dl.inc.c>
};

/* gap sub-block @ 0x88C0 (was gap+0x7F8, 368 bytes) */
Gfx dMVOpeningYoster_DL_0x88C0[46] = {
	#include <MVOpeningYoster/DL_0x88C0.dl.inc.c>
};

/* gap sub-block @ 0x8A30 (was gap+0x968, 168 bytes) */
Gfx dMVOpeningYoster_DL_0x8A30[21] = {
	#include <MVOpeningYoster/DL_0x8A30.dl.inc.c>
};

/* gap sub-block @ 0x8AD8 (was gap+0xA10, 192 bytes) */
Gfx dMVOpeningYoster_DL_0x8AD8[24] = {
	#include <MVOpeningYoster/DL_0x8AD8.dl.inc.c>
};

/* gap sub-block @ 0x8B98 (was gap+0xAD0, 200 bytes) */
Gfx dMVOpeningYoster_DL_0x8B98[25] = {
	#include <MVOpeningYoster/DL_0x8B98.dl.inc.c>
};

/* gap sub-block @ 0x8C60 (was gap+0xB98, 176 bytes) */
Gfx dMVOpeningYoster_DL_0x8C60[22] = {
	#include <MVOpeningYoster/DL_0x8C60.dl.inc.c>
};

/* gap sub-block @ 0x8D10 (was gap+0xC48, 184 bytes) */
Gfx dMVOpeningYoster_DL_0x8D10[23] = {
	#include <MVOpeningYoster/DL_0x8D10.dl.inc.c>
};

/* gap sub-block @ 0x8DC8 (was gap+0xD00, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x8DC8[16] = {
	#include <MVOpeningYoster/DL_0x8DC8.dl.inc.c>
};

/* gap sub-block @ 0x8E48 (was gap+0xD80, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x8E48[17] = {
	#include <MVOpeningYoster/DL_0x8E48.dl.inc.c>
};

/* gap sub-block @ 0x8ED0 (was gap+0xE08, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x8ED0[12] = {
	#include <MVOpeningYoster/DL_0x8ED0.dl.inc.c>
};

/* gap sub-block @ 0x8F30 (was gap+0xE68, 112 bytes) */
Gfx dMVOpeningYoster_DL_0x8F30[14] = {
	#include <MVOpeningYoster/DL_0x8F30.dl.inc.c>
};

/* gap sub-block @ 0x8FA0 (was gap+0xED8, 128 bytes) */
Gfx dMVOpeningYoster_DL_0x8FA0[16] = {
	#include <MVOpeningYoster/DL_0x8FA0.dl.inc.c>
};

/* gap sub-block @ 0x9020 (was gap+0xF58, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x9020[17] = {
	#include <MVOpeningYoster/DL_0x9020.dl.inc.c>
};

/* gap sub-block @ 0x90A8 (was gap+0xFE0, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x90A8[12] = {
	#include <MVOpeningYoster/DL_0x90A8.dl.inc.c>
};

/* gap sub-block @ 0x9108 (was gap+0x1040, 104 bytes) */
Gfx dMVOpeningYoster_DL_0x9108[13] = {
	#include <MVOpeningYoster/DL_0x9108.dl.inc.c>
};

/* gap sub-block @ 0x9170 (was gap+0x10A8, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x9170[17] = {
	#include <MVOpeningYoster/DL_0x9170.dl.inc.c>
};

/* gap sub-block @ 0x91F8 (was gap+0x1130, 136 bytes) */
Gfx dMVOpeningYoster_DL_0x91F8[17] = {
	#include <MVOpeningYoster/DL_0x91F8.dl.inc.c>
};

/* gap sub-block @ 0x9280 (was gap+0x11B8, 96 bytes) */
Gfx dMVOpeningYoster_DL_0x9280[12] = {
	#include <MVOpeningYoster/DL_0x9280.dl.inc.c>
};

/* gap sub-block @ 0x92E0 (was gap+0x1218, 352 bytes) */
Gfx dMVOpeningYoster_DL_0x92E0[44] = {
	#include <MVOpeningYoster/DL_0x92E0.dl.inc.c>
};

/* gap sub-block @ 0x9440 (was gap+0x1378, 120 bytes) */
Gfx dMVOpeningYoster_DL_0x9440[15] = {
	#include <MVOpeningYoster/DL_0x9440.dl.inc.c>
};

/* gap sub-block @ 0x94B8 (was gap+0x13F0, 120 bytes) */
Gfx dMVOpeningYoster_DL_0x94B8[15] = {
	#include <MVOpeningYoster/DL_0x94B8.dl.inc.c>
};

/* gap sub-block @ 0x9530 (was gap+0x1468, 152 bytes) */
Gfx dMVOpeningYoster_DL_0x9530[19] = {
	#include <MVOpeningYoster/DL_0x9530.dl.inc.c>
};

/* Vtx: Vtx_0x95C8 @ 0x95C8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x95C8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x95C8.vtx.inc.c>
};

/* Vtx: Vtx_0x95D8 @ 0x95D8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x95D8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x95D8.vtx.inc.c>
};

/* Vtx: Vtx_0x95E8 @ 0x95E8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x95E8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x95E8.vtx.inc.c>
};

/* Vtx: Vtx_0x95F8 @ 0x95F8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x95F8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x95F8.vtx.inc.c>
};

/* Vtx: Vtx_0x9608 @ 0x9608 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9608_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9608.vtx.inc.c>
};

/* Vtx: Vtx_0x9618 @ 0x9618 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9618_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9618.vtx.inc.c>
};

/* Vtx: Vtx_0x9628 @ 0x9628 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9628_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9628.vtx.inc.c>
};

/* Vtx: Vtx_0x9638 @ 0x9638 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9638_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9638.vtx.inc.c>
};

/* Vtx: Vtx_0x9648 @ 0x9648 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9648_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9648.vtx.inc.c>
};

/* Vtx: Vtx_0x9658 @ 0x9658 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9658_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9658.vtx.inc.c>
};

/* Vtx: Vtx_0x9668 @ 0x9668 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9668_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9668.vtx.inc.c>
};

/* Vtx: Vtx_0x9678 @ 0x9678 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9678_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9678.vtx.inc.c>
};

/* Vtx: Vtx_0x9688 @ 0x9688 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9688_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9688.vtx.inc.c>
};

/* Vtx: Vtx_0x9698 @ 0x9698 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9698_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9698.vtx.inc.c>
};

/* Vtx: Vtx_0x96A8 @ 0x96A8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96A8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96A8.vtx.inc.c>
};

/* Vtx: Vtx_0x96B8 @ 0x96B8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96B8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96B8.vtx.inc.c>
};

/* Vtx: Vtx_0x96C8 @ 0x96C8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96C8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96C8.vtx.inc.c>
};

/* Vtx: Vtx_0x96D8 @ 0x96D8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96D8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96D8.vtx.inc.c>
};

/* Vtx: Vtx_0x96E8 @ 0x96E8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96E8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96E8.vtx.inc.c>
};

/* Vtx: Vtx_0x96F8 @ 0x96F8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x96F8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x96F8.vtx.inc.c>
};

/* Vtx: Vtx_0x9708 @ 0x9708 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9708_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9708.vtx.inc.c>
};

/* Vtx: Vtx_0x9718 @ 0x9718 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9718_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9718.vtx.inc.c>
};

/* Vtx: Vtx_0x9728 @ 0x9728 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9728_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9728.vtx.inc.c>
};

/* Vtx: Vtx_0x9738 @ 0x9738 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9738_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9738.vtx.inc.c>
};

/* Vtx: Vtx_0x9748 @ 0x9748 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9748_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9748.vtx.inc.c>
};

/* Vtx: Vtx_0x9758 @ 0x9758 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9758_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9758.vtx.inc.c>
};

/* Vtx: Vtx_0x9768 @ 0x9768 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9768_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9768.vtx.inc.c>
};

/* Vtx: Vtx_0x9778 @ 0x9778 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9778_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9778.vtx.inc.c>
};

/* Vtx: Vtx_0x9788 @ 0x9788 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9788_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9788.vtx.inc.c>
};

/* Vtx: Vtx_0x9798 @ 0x9798 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x9798_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x9798.vtx.inc.c>
};

/* Vtx: Vtx_0x97A8 @ 0x97A8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97A8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97A8.vtx.inc.c>
};

/* Vtx: Vtx_0x97B8 @ 0x97B8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97B8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97B8.vtx.inc.c>
};

/* Vtx: Vtx_0x97C8 @ 0x97C8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97C8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97C8.vtx.inc.c>
};

/* Vtx: Vtx_0x97D8 @ 0x97D8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97D8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97D8.vtx.inc.c>
};

/* Vtx: Vtx_0x97E8 @ 0x97E8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97E8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97E8.vtx.inc.c>
};

/* Vtx: Vtx_0x97F8 @ 0x97F8 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0x97F8_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0x97F8.vtx.inc.c>
};

/* DObjDesc: Nest @ 0x9808 (74 entries) */
DObjDesc dMVOpeningYoster_Nest[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1500), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1510), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 94.20000457763672f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.583920955657959f, 1.0f, 1.583920955657959f } },
	{ 2, (void*)0x00000000, { 0.0f, 26.160005569458008f, 0.0f }, { 0.0f, -0.43633198738098145f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -95.42998504638672f, -24.599990844726562f, 87.05723571777344f }, { 0.0f, -0.6100000143051147f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1520), { 1.9999999949504854e-06f, 0.0f, 7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 1.9999999949504854e-06f, 0.0f, 60.00000762939453f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1530), { 3.999999989900971e-06f, 1.4000000192027073e-05f, -9.999999747378752e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { -1.8000000636675395e-05f, 0.0f, 59.99995803833008f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1540), { 1.8000000636675395e-05f, 1.4000000192027073e-05f, -2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { 7.500000356230885e-05f, 0.0f, 59.999969482421875f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1550), { 3.899999865097925e-05f, -1.4000000192027073e-05f, -1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 95.43000030517578f, -24.599990844726562f, -87.05699157714844f }, { 0.0f, 2.531593084335327f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1560), { -7.000000096013537e-06f, 7.000000096013537e-06f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -7.000000096013537e-06f, 7.000000096013537e-06f, 60.000030517578125f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1570), { 7.000000096013537e-06f, -1.4000000192027073e-05f, -4.3000000005122274e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 3.999999989900971e-06f, 0.0f, 59.99998474121094f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1580), { -3.600000127335079e-05f, 0.0f, -4.3000000005122274e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -6.399999983841553e-05f, 2.9000000722589903e-05f, 59.99995803833008f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1590), { 1.8000000636675395e-05f, 1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -95.43000793457031f, -24.599990844726562f, -87.0570068359375f }, { 0.0f, -2.531593084335327f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15A0), { -1.9999999949504854e-06f, 0.0f, -5.700000110664405e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -9.000000318337698e-06f, 0.0f, 60.0f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 0.9999989867210388f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15B0), { 1.5999999959603883e-05f, 0.0f, -9.999999747378752e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 4.999999873689376e-06f, 0.0f, 59.99995803833008f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15C0), { -1.9999999949504854e-06f, 2.9000000722589903e-05f, -2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -1.9999999949504854e-06f, -2.9000000722589903e-05f, 59.99992752075195f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15D0), { 2.099999983329326e-05f, -1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 95.42902374267578f, -24.599990844726562f, 87.0572280883789f }, { 0.0f, 0.6100000143051147f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15E0), { -3.999999989900971e-06f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -1.1000000085914508e-05f, 0.0f, 59.99998474121094f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x15F0), { 2.9000000722589903e-05f, -2.9000000722589903e-05f, -0.0001289999927394092f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { 3.999999989900971e-06f, 0.0f, 59.999916076660156f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1600), { -1.8000000636675395e-05f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -1.8000000636675395e-05f, 0.0f, 60.000030517578125f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1610), { 1.4000000192027073e-05f, -1.4000000192027073e-05f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1620), { 9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.43633198738098145f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 95.43001556396484f, -24.599998474121094f, -87.0570068359375f }, { 0.0f, 2.531593084335327f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1630), { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -7.000000096013537e-06f, 0.0f, 60.00001525878906f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1640), { 1.8000000636675395e-05f, 0.0f, -8.600000001024455e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { -3.999999989900971e-06f, 0.0f, 59.99995803833008f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1650), { -1.1000000085914508e-05f, -1.4000000192027073e-05f, -2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -2.499999936844688e-05f, -1.4000000192027073e-05f, 59.99998474121094f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1660), { 1.1000000085914508e-05f, -1.4000000192027073e-05f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -95.43000793457031f, -24.599998474121094f, -87.0570068359375f }, { 0.0f, -2.531593084335327f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1670), { -4.999999873689376e-06f, 0.0f, 7.000000096013537e-06f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -1.2999999853491317e-05f, 0.0f, 60.00000762939453f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1680), { 7.000000096013537e-06f, 0.0f, -8.600000001024455e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { -7.000000096013537e-06f, -1.4000000192027073e-05f, 59.999969482421875f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1690), { 9.000000318337698e-06f, 1.4000000192027073e-05f, -2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -1.9999999494757503e-05f, -1.4000000192027073e-05f, 59.999969482421875f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16A0), { 2.300000051036477e-05f, -1.4000000192027073e-05f, 2.9000000722589903e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { 95.42901611328125f, -24.599998474121094f, 87.0572280883789f }, { 0.0f, 0.6100000143051147f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16B0), { 3.999999989900971e-06f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { 7.000000096013537e-06f, 0.0f, 60.00004196166992f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16C0), { 3.999999989900971e-06f, 1.4000000192027073e-05f, -8.600000001024455e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { -2.499999936844688e-05f, 0.0f, 59.99998474121094f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16D0), { -1.8000000636675395e-05f, 1.4000000192027073e-05f, -4.3000000005122274e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -2.499999936844688e-05f, -1.4000000192027073e-05f, 59.99998474121094f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16E0), { 4.3000000005122274e-05f, 0.0f, 7.200000254670158e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)0x00000000, { -95.43001556396484f, -24.599998474121094f, 87.0572509765625f }, { 0.0f, -0.6100000143051147f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x16F0), { -1.9999999949504854e-06f, 0.0f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)0x00000000, { -4.999999873689376e-06f, 0.0f, 60.00001525878906f }, { 0.34906598925590515f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1700), { 1.9999999494757503e-05f, 0.0f, -7.200000254670158e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)0x00000000, { -9.000000318337698e-06f, -2.9000000722589903e-05f, 59.999969482421875f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1710), { -1.9999999494757503e-05f, 0.0f, -4.3000000005122274e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, (void*)0x00000000, { -3.400000059627928e-05f, -1.4000000192027073e-05f, 59.99998474121094f }, { 0.17453299462795258f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1720), { 1.2999999853491317e-05f, 1.4000000192027073e-05f, 1.4000000192027073e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, (void*)((u8*)dMVOpeningYoster_DL_0x80C8 + 0x1730), { 9.999999974752427e-07f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0xA4C0 to 0xB990 (5328 bytes) */
/* gap sub-block @ 0xA4C0 (was gap+0x0, 8 bytes) */
u8 dMVOpeningYoster_gap_0xA4C0[8] = {
	#include <MVOpeningYoster/gap_0xA4C0.data.inc.c>
};

/* gap sub-block @ 0xA4C8 (was gap+0x8, 40 bytes) */
u16 dMVOpeningYoster_gap_0xA4C0_sub_0x8[20] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x8.palette.inc.c>
};

/* gap sub-block @ 0xA4F0 (was gap+0x30, 40 bytes) */
u16 dMVOpeningYoster_gap_0xA4C0_sub_0x30[20] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x30.palette.inc.c>
};

/* gap sub-block @ 0xA518 (was gap+0x58, 40 bytes) */
u16 dMVOpeningYoster_gap_0xA4C0_sub_0x58[20] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x58.palette.inc.c>
};

/* gap sub-block @ 0xA540 (was gap+0x80, 40 bytes) */
/* @tex fmt=CI4 dim=16x8 lut=dMVOpeningYoster_gap_0xA4C0_sub_0x8 */
u8 dMVOpeningYoster_Tex_0xA540[40] = {
	#include <MVOpeningYoster/Tex_0xA540.tex.inc.c>
};

/* gap sub-block @ 0xA568 (was gap+0xA8, 392 bytes) */
/* @tex fmt=CI4 dim=32x48 lut=dMVOpeningYoster_gap_0xA4C0_sub_0x30 */
u8 dMVOpeningYoster_Tex_0xA568[392] = {
	#include <MVOpeningYoster/Tex_0xA568.tex.inc.c>
};

/* gap sub-block @ 0xA6F0 (was gap+0x230, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dMVOpeningYoster_gap_0xA4C0_sub_0x58 */
u8 dMVOpeningYoster_Tex_0xA6F0[520] = {
	#include <MVOpeningYoster/Tex_0xA6F0.tex.inc.c>
};

/* gap sub-block @ 0xA8F8 (was gap+0x438, 520 bytes) */
/* @tex fmt=I4 dim=64x64 */
u8 dMVOpeningYoster_Tex_0xA8F8[520] = {
	#include <MVOpeningYoster/Tex_0xA8F8.tex.inc.c>
};

/* gap sub-block @ 0xAB00 (was gap+0x640, 768 bytes) */
/* @tex fmt=I4 dim=64x48 */
u8 dMVOpeningYoster_Tex_0xAB00[768] = {
	#include <MVOpeningYoster/Tex_0xAB00.tex.inc.c>
};

/* gap sub-block @ 0xAE00 (was gap+0x940, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0x940[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x940.vtx.inc.c>
};

/* gap sub-block @ 0xAE40 (was gap+0x980, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0x980[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x980.vtx.inc.c>
};

/* gap sub-block @ 0xAE80 (was gap+0x9C0, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0x9C0[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0x9C0.vtx.inc.c>
};

/* gap sub-block @ 0xAEC0 (was gap+0xA00, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xA00[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xA00.vtx.inc.c>
};

/* gap sub-block @ 0xAF00 (was gap+0xA40, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xA40[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xA40.vtx.inc.c>
};

/* gap sub-block @ 0xAF40 (was gap+0xA80, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xA80[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xA80.vtx.inc.c>
};

/* gap sub-block @ 0xAF80 (was gap+0xAC0, 48 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xAC0[3] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xAC0.vtx.inc.c>
};

/* gap sub-block @ 0xAFB0 (was gap+0xAF0, 48 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xAF0[3] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xAF0.vtx.inc.c>
};

/* Vtx: Vtx_0xAFE0 @ 0xAFE0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xAFE0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xAFE0.vtx.inc.c>
};

/* gap sub-block @ 0xAFF0 (was gap+0xB30, 96 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xB30[6] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xB30.vtx.inc.c>
};

/* gap sub-block @ 0xB050 (was gap+0xB90, 96 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xB90[6] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xB90.vtx.inc.c>
};

/* gap sub-block @ 0xB0B0 (was gap+0xBF0, 96 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xBF0[6] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xBF0.vtx.inc.c>
};

/* gap sub-block @ 0xB110 (was gap+0xC50, 64 bytes) */
Vtx dMVOpeningYoster_gap_0xA4C0_sub_0xC50[4] = {
	#include <MVOpeningYoster/gap_0xA4C0_sub_0xC50.vtx.inc.c>
};

/* gap sub-block @ 0xB150 (was gap+0xC90, 88 bytes) */
Gfx dMVOpeningYoster_DL_0xB150[11] = {
	#include <MVOpeningYoster/DL_0xB150.dl.inc.c>
};

/* gap sub-block @ 0xB1A8 (was gap+0xCE8, 128 bytes) */
Gfx dMVOpeningYoster_DL_0xB1A8[16] = {
	#include <MVOpeningYoster/DL_0xB1A8.dl.inc.c>
};

/* gap sub-block @ 0xB228 (was gap+0xD68, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB228[4] = {
	#include <MVOpeningYoster/DL_0xB228.dl.inc.c>
};

/* gap sub-block @ 0xB248 (was gap+0xD88, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB248[4] = {
	#include <MVOpeningYoster/DL_0xB248.dl.inc.c>
};

/* gap sub-block @ 0xB268 (was gap+0xDA8, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB268[4] = {
	#include <MVOpeningYoster/DL_0xB268.dl.inc.c>
};

/* gap sub-block @ 0xB288 (was gap+0xDC8, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB288[4] = {
	#include <MVOpeningYoster/DL_0xB288.dl.inc.c>
};

/* gap sub-block @ 0xB2A8 (was gap+0xDE8, 136 bytes) */
Gfx dMVOpeningYoster_DL_0xB2A8[17] = {
	#include <MVOpeningYoster/DL_0xB2A8.dl.inc.c>
};

/* gap sub-block @ 0xB330 (was gap+0xE70, 136 bytes) */
Gfx dMVOpeningYoster_DL_0xB330[17] = {
	#include <MVOpeningYoster/DL_0xB330.dl.inc.c>
};

/* gap sub-block @ 0xB3B8 (was gap+0xEF8, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB3B8[4] = {
	#include <MVOpeningYoster/DL_0xB3B8.dl.inc.c>
};

/* gap sub-block @ 0xB3D8 (was gap+0xF18, 40 bytes) */
Gfx dMVOpeningYoster_DL_0xB3D8[5] = {
	#include <MVOpeningYoster/DL_0xB3D8.dl.inc.c>
};

/* gap sub-block @ 0xB400 (was gap+0xF40, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB400[4] = {
	#include <MVOpeningYoster/DL_0xB400.dl.inc.c>
};

/* gap sub-block @ 0xB420 (was gap+0xF60, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB420[4] = {
	#include <MVOpeningYoster/DL_0xB420.dl.inc.c>
};

/* gap sub-block @ 0xB440 (was gap+0xF80, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB440[4] = {
	#include <MVOpeningYoster/DL_0xB440.dl.inc.c>
};

/* gap sub-block @ 0xB460 (was gap+0xFA0, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB460[4] = {
	#include <MVOpeningYoster/DL_0xB460.dl.inc.c>
};

/* gap sub-block @ 0xB480 (was gap+0xFC0, 80 bytes) */
Gfx dMVOpeningYoster_DL_0xB480[10] = {
	#include <MVOpeningYoster/DL_0xB480.dl.inc.c>
};

/* gap sub-block @ 0xB4D0 (was gap+0x1010, 72 bytes) */
Gfx dMVOpeningYoster_DL_0xB4D0[9] = {
	#include <MVOpeningYoster/DL_0xB4D0.dl.inc.c>
};

/* gap sub-block @ 0xB518 (was gap+0x1058, 128 bytes) */
Gfx dMVOpeningYoster_DL_0xB518[16] = {
	#include <MVOpeningYoster/DL_0xB518.dl.inc.c>
};

/* gap sub-block @ 0xB598 (was gap+0x10D8, 56 bytes) */
Gfx dMVOpeningYoster_DL_0xB598[7] = {
	#include <MVOpeningYoster/DL_0xB598.dl.inc.c>
};

/* gap sub-block @ 0xB5D0 (was gap+0x1110, 56 bytes) */
Gfx dMVOpeningYoster_DL_0xB5D0[7] = {
	#include <MVOpeningYoster/DL_0xB5D0.dl.inc.c>
};

/* gap sub-block @ 0xB608 (was gap+0x1148, 136 bytes) */
Gfx dMVOpeningYoster_DL_0xB608[17] = {
	#include <MVOpeningYoster/DL_0xB608.dl.inc.c>
};

/* gap sub-block @ 0xB690 (was gap+0x11D0, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB690[4] = {
	#include <MVOpeningYoster/DL_0xB690.dl.inc.c>
};

/* gap sub-block @ 0xB6B0 (was gap+0x11F0, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB6B0[4] = {
	#include <MVOpeningYoster/DL_0xB6B0.dl.inc.c>
};

/* gap sub-block @ 0xB6D0 (was gap+0x1210, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB6D0[4] = {
	#include <MVOpeningYoster/DL_0xB6D0.dl.inc.c>
};

/* gap sub-block @ 0xB6F0 (was gap+0x1230, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB6F0[4] = {
	#include <MVOpeningYoster/DL_0xB6F0.dl.inc.c>
};

/* gap sub-block @ 0xB710 (was gap+0x1250, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB710[4] = {
	#include <MVOpeningYoster/DL_0xB710.dl.inc.c>
};

/* gap sub-block @ 0xB730 (was gap+0x1270, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB730[4] = {
	#include <MVOpeningYoster/DL_0xB730.dl.inc.c>
};

/* gap sub-block @ 0xB750 (was gap+0x1290, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB750[4] = {
	#include <MVOpeningYoster/DL_0xB750.dl.inc.c>
};

/* gap sub-block @ 0xB770 (was gap+0x12B0, 32 bytes) */
Gfx dMVOpeningYoster_DL_0xB770[4] = {
	#include <MVOpeningYoster/DL_0xB770.dl.inc.c>
};

/* gap sub-block @ 0xB790 (was gap+0x12D0, 80 bytes) */
Gfx dMVOpeningYoster_DL_0xB790[10] = {
	#include <MVOpeningYoster/DL_0xB790.dl.inc.c>
};

/* Vtx: Vtx_0xB7E0 @ 0xB7E0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB7E0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB7E0.vtx.inc.c>
};

/* Vtx: Vtx_0xB7F0 @ 0xB7F0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB7F0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB7F0.vtx.inc.c>
};

/* Vtx: Vtx_0xB800 @ 0xB800 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB800_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB800.vtx.inc.c>
};

/* Vtx: Vtx_0xB810 @ 0xB810 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB810_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB810.vtx.inc.c>
};

/* Vtx: Vtx_0xB820 @ 0xB820 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB820_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB820.vtx.inc.c>
};

/* Vtx: Vtx_0xB830 @ 0xB830 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB830_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB830.vtx.inc.c>
};

/* Vtx: Vtx_0xB840 @ 0xB840 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB840_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB840.vtx.inc.c>
};

/* Vtx: Vtx_0xB850 @ 0xB850 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB850_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB850.vtx.inc.c>
};

/* Vtx: Vtx_0xB860 @ 0xB860 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB860_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB860.vtx.inc.c>
};

/* Vtx: Vtx_0xB870 @ 0xB870 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB870_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB870.vtx.inc.c>
};

/* Vtx: Vtx_0xB880 @ 0xB880 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB880_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB880.vtx.inc.c>
};

/* Vtx: Vtx_0xB890 @ 0xB890 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB890_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB890.vtx.inc.c>
};

/* Vtx: Vtx_0xB8A0 @ 0xB8A0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8A0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8A0.vtx.inc.c>
};

/* Vtx: Vtx_0xB8B0 @ 0xB8B0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8B0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8B0.vtx.inc.c>
};

/* Vtx: Vtx_0xB8C0 @ 0xB8C0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8C0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8C0.vtx.inc.c>
};

/* Vtx: Vtx_0xB8D0 @ 0xB8D0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8D0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8D0.vtx.inc.c>
};

/* Vtx: Vtx_0xB8E0 @ 0xB8E0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8E0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8E0.vtx.inc.c>
};

/* Vtx: Vtx_0xB8F0 @ 0xB8F0 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB8F0_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB8F0.vtx.inc.c>
};

/* Vtx: Vtx_0xB900 @ 0xB900 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB900_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB900.vtx.inc.c>
};

/* Vtx: Vtx_0xB910 @ 0xB910 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB910_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB910.vtx.inc.c>
};

/* Vtx: Vtx_0xB920 @ 0xB920 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB920_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB920.vtx.inc.c>
};

/* Vtx: Vtx_0xB930 @ 0xB930 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB930_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB930.vtx.inc.c>
};

/* Vtx: Vtx_0xB940 @ 0xB940 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB940_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB940.vtx.inc.c>
};

/* Vtx: Vtx_0xB950 @ 0xB950 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB950_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB950.vtx.inc.c>
};

/* Vtx: Vtx_0xB960 @ 0xB960 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB960_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB960.vtx.inc.c>
};

/* Vtx: Vtx_0xB970 @ 0xB970 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB970_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB970.vtx.inc.c>
};

/* Vtx: Vtx_0xB980 @ 0xB980 (1 vertices) */
Vtx dMVOpeningYoster_Vtx_0xB980_Vtx[1] = {
	#include <MVOpeningYoster/Vtx_0xB980.vtx.inc.c>
};

/* DObjDesc: GroundDObjDesc @ 0xB990 (6 entries) */
DObjDesc dMVOpeningYoster_GroundDObjDesc[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 160.8000030517578f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYoster_gap_0xA4C0 + 0x1320), { 699.8402709960938f, 707.1599731445312f, -639.0f }, { 0.0f, 0.0f, 6.350001811981201f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYoster_gap_0xA4C0 + 0x1330), { -542.4000244140625f, 707.1599731445312f, -639.0f }, { 0.0f, 0.0f, -3.1415929794311523f }, { 0.9094399809837341f, 0.9094399809837341f, 0.9094399809837341f } },
	{ 2, (void*)((u8*)dMVOpeningYoster_gap_0xA4C0 + 0x1340), { -379.8000183105469f, 839.7599487304688f, -753.5999145507812f }, { 0.0f, 0.0f, 1.3962630033493042f }, { 0.6299999952316284f, 0.6299999952316284f, 0.6299999952316284f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
};

/* Raw data from file offset 0xBA98 to 0xBF70 (1240 bytes) */
u8 dMVOpeningYoster_gap_0xBA98[1240] = {
	#include <MVOpeningYoster/gap_0xBA98.data.inc.c>
};

/* Raw data from file offset 0xBF70 to 0xC940 (2512 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xBFF4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC070[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC0EC[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC124[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC174[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC1C4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC214[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC264[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC2B4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC304[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC354[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3A4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3F4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC444[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4D0[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4F4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC520[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC5B4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC644[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC6D4[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC740[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC7AC[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC83C[];
extern u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC8CC[];

AObjEvent32 *dMVOpeningYoster_GroundAnimJoint_AnimJoint[33] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xBFF4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC070,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC0EC,
	NULL,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC124,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC174,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC1C4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC214,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC264,
	NULL,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC2B4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC304,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC354,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3A4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3F4,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC444,
	NULL,
	NULL,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4D0,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4F4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC520,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC5B4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC644,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC6D4,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC740,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC7AC,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC83C,
	(AObjEvent32 *)dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC8CC,
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xBFF4[] = {
	aobjEvent32SetValBlock(0x014, 0),
	    0x00000000,  /* 0.0f */
	    0x44976CCC,  /* 1211.39990234375f */
	aobjEvent32SetValAfterBlock(0x263, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x4430CA3D,  /* 707.1599731445312f */
	    0xC41FC000,  /* -639.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F2E147A,  /* 0.6799999475479126f */
	    0x3F2E147A,  /* 0.6799999475479126f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32SetVal(0x014, 160),
	    0x40CB3338,  /* 6.350002288818359f */
	    0x442EF5C7,  /* 699.8402709960938f */
	aobjEvent32Cmd12(0x014, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F2E147A,  /* 0.6799999475479126f */
	    0x3F2E147A,  /* 0.6799999475479126f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC070[] = {
	aobjEvent32SetValBlock(0x014, 0),
	    0x00000000,  /* 0.0f */
	    0xC4976CCD,  /* -1211.4000244140625f */
	aobjEvent32SetValAfterBlock(0x063, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x4430CA3D,  /* 707.1599731445312f */
	    0xC41FC000,  /* -639.0f */
	aobjEvent32SetVal(0x014, 160),
	    0xC0490FDA,  /* -3.141592502593994f */
	    0xC407999A,  /* -542.4000244140625f */
	aobjEvent32Cmd12(0x014, 1),
	aobjEvent32SetValRate(0x180, 0),
	    0x3FA662D1,  /* 1.2998906373977661f */
	    0xBB75C28D,  /* -0.003749999450519681f */
	    0x3FA662D1,  /* 1.2998906373977661f */
	    0xBB75C28D,  /* -0.003749999450519681f */
	aobjEvent32SetVal0RateBlock(0x200, 0),
	    0x3F80003B,  /* 1.0000070333480835f */
	aobjEvent32SetValRateBlock(0x380, 79),
	    0x3F800000,  /* 1.0f */
	    0xBB20EF37,  /* -0.0024556645657867193f */
	    0x3F800000,  /* 1.0f */
	    0xBB20EF37,  /* -0.0024556645657867193f */
	    0x3F800000,  /* 1.0f */
	    0xBA155182,  /* -0.0005696044536307454f */
	aobjEvent32SetVal0RateBlock(0x380, 80),
	    0x3F68D10E,  /* 0.9094399213790894f */
	    0x3F68D10E,  /* 0.9094399213790894f */
	    0x3F68D10E,  /* 0.9094399213790894f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC0EC[] = {
	aobjEvent32SetValBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x004, 160),
	    0x3FB2B8C2,  /* 1.3962633609771729f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32SetValAfter(0x380, 0),
	    0x3F2147AE,  /* 0.6299999952316284f */
	    0x3F2147AE,  /* 0.6299999952316284f */
	    0x3F2147AE,  /* 0.6299999952316284f */
	aobjEvent32Wait(159),
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC124[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC174[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC1C4[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC214[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC264[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC2B4[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC304[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC354[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3A4[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC3F4[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0Rate(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(39),
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetVal0RateBlock(0x180, 40),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC444[] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x180, 0),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValRate(0x180, 15),
	    0x3F800000,  /* 1.0f */
	    0xB8836CC2,  /* -6.266824493650347e-05f */
	    0x3F800000,  /* 1.0f */
	    0x38398733,  /* 4.4233351218281314e-05f */
	aobjEvent32Cmd12(0x180, 1),
	aobjEvent32Wait(14),
	aobjEvent32SetVal0RateBlock(0x180, 9),
	    0x3F866666,  /* 1.0499999523162842f */
	    0x3F866666,  /* 1.0499999523162842f */
	aobjEvent32SetValRateBlock(0x180, 6),
	    0x3F800000,  /* 1.0f */
	    0x3BEA0EAB,  /* 0.0071428618393838406f */
	    0x3F800000,  /* 1.0f */
	    0x3BEA0EAB,  /* 0.0071428618393838406f */
	aobjEvent32SetVal0RateBlock(0x180, 15),
	    0x3F99999A,  /* 1.2000000476837158f */
	    0x3F99999A,  /* 1.2000000476837158f */
	aobjEvent32SetValRateBlock(0x180, 15),
	    0x3F800000,  /* 1.0f */
	    0xBBDA7411,  /* -0.006666668225079775f */
	    0x3F800000,  /* 1.0f */
	    0xBBDA7411,  /* -0.006666668225079775f */
	aobjEvent32SetVal0RateBlock(0x180, 15),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValBlock(0x180, 85),
	    0x3F800000,  /* 1.0f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4D0[] = {
	aobjEvent32SetValAfter(0x3F0, 0),
	    0xC1CC0836,  /* -25.504009246826172f */
	    0x437DD591,  /* 253.83424377441406f */
	    0x434046AC,  /* 192.27606201171875f */
	    0x3F26CB80,  /* 0.6515426635742188f */
	    0x3F26CB80,  /* 0.6515426635742188f */
	    0x3F28CAFF,  /* 0.6593474745750427f */
	aobjEvent32Wait(159),
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC4F4[] = {
	aobjEvent32SetValRateBlock(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0x3C3C0AEB,  /* 0.01147721242159605f */
	aobjEvent32SetVal0Rate(0x004, 64),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32Cmd12(0x004, 1),
	aobjEvent32Wait(63),
	aobjEvent32SetVal0Rate(0x004, 128),
	    0xBF060A92,  /* -0.5235987901687622f */
	aobjEvent32Wait(96),
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC520[] = {
	aobjEvent32SetValBlock(0x020, 0),
	    0x4313B24C,  /* 147.69647216796875f */
	aobjEvent32SetVal(0x020, 16),
	    0x4278404A,  /* 62.062782287597656f */
	aobjEvent32Cmd12(0x020, 1),
	aobjEvent32SetValBlock(0x010, 0),
	    0xC25274A6,  /* -52.613914489746094f */
	aobjEvent32SetValBlock(0x010, 15),
	    0xC25274A6,  /* -52.613914489746094f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC21613A1,  /* -37.519168853759766f */
	    0x4313B248,  /* 147.6964111328125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC25274A6,  /* -52.613914489746094f */
	    0x4278404A,  /* 62.062782287597656f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC21613A1,  /* -37.519168853759766f */
	    0x4313B248,  /* 147.6964111328125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC25274A6,  /* -52.613914489746094f */
	    0x4278404A,  /* 62.062782287597656f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC21613A1,  /* -37.519168853759766f */
	    0x4313B248,  /* 147.6964111328125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC25274A6,  /* -52.613914489746094f */
	    0x4278404A,  /* 62.062782287597656f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC21613A1,  /* -37.519168853759766f */
	    0x4313B248,  /* 147.6964111328125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC25274A6,  /* -52.613914489746094f */
	    0x4278404A,  /* 62.062782287597656f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC21613A1,  /* -37.519168853759766f */
	    0x4313B248,  /* 147.6964111328125f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC5B4[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44095728,  /* 549.36181640625f */
	    0x43888469,  /* 273.0344543457031f */
	aobjEvent32SetVal(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x435374BC,  /* 211.45599365234375f */
	aobjEvent32Cmd12(0x030, 1),
	aobjEvent32Wait(15),
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x43888466,  /* 273.03436279296875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x435374BC,  /* 211.45599365234375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x43888466,  /* 273.03436279296875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x435374BC,  /* 211.45599365234375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x43888466,  /* 273.03436279296875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x435374BC,  /* 211.45599365234375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x43888466,  /* 273.03436279296875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x435374BC,  /* 211.45599365234375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x43888466,  /* 273.03436279296875f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC644[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3A96190,  /* -338.76220703125f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32SetVal(0x030, 16),
	    0xC3C83944,  /* -400.4473876953125f */
	    0x439CA6C0,  /* 313.302734375f */
	aobjEvent32Cmd12(0x030, 1),
	aobjEvent32Wait(15),
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3A9618F,  /* -338.7621765136719f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3C83944,  /* -400.4473876953125f */
	    0x439CA6C0,  /* 313.302734375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3A9618F,  /* -338.7621765136719f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3C83944,  /* -400.4473876953125f */
	    0x439CA6C0,  /* 313.302734375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3A9618F,  /* -338.7621765136719f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3C83944,  /* -400.4473876953125f */
	    0x439CA6C0,  /* 313.302734375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3A9618F,  /* -338.7621765136719f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3C83944,  /* -400.4473876953125f */
	    0x439CA6C0,  /* 313.302734375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3A9618F,  /* -338.7621765136719f */
	    0x43BB7E7B,  /* 374.9881286621094f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC6D4[] = {
	aobjEvent32SetValBlock(0x010, 0),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32SetVal(0x010, 16),
	    0x4438A4A0,  /* 738.572265625f */
	aobjEvent32Cmd12(0x010, 1),
	aobjEvent32SetValAfter(0x020, 0),
	    0x442D5B85,  /* 693.4299926757812f */
	aobjEvent32Wait(15),
	aobjEvent32SetValBlock(0x010, 16),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4438A4A0,  /* 738.572265625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4438A4A0,  /* 738.572265625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4438A4A0,  /* 738.572265625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4438A4A0,  /* 738.572265625f */
	aobjEvent32SetValBlock(0x010, 16),
	    0x4422DF2A,  /* 651.4869384765625f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC740[] = {
	aobjEvent32SetVal(0x010, 0),
	    0xC3B56D65,  /* -362.8546447753906f */
	aobjEvent32SetValAfter(0x020, 0),
	    0x442D5B85,  /* 693.4299926757812f */
	aobjEvent32SetValBlock(0x010, 5),
	    0xC3B56D65,  /* -362.8546447753906f */
	aobjEvent32SetValBlock(0x010, 10),
	    0xC3E0F847,  /* -449.9396667480469f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3B56D64,  /* -362.8546142578125f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3E0F847,  /* -449.9396667480469f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3B56D64,  /* -362.8546142578125f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3E0F847,  /* -449.9396667480469f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3B56D64,  /* -362.8546142578125f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3E0F847,  /* -449.9396667480469f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3B56D64,  /* -362.8546142578125f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3E0F847,  /* -449.9396667480469f */
	aobjEvent32SetValBlock(0x010, 16),
	    0xC3B56D64,  /* -362.8546142578125f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC7AC[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32SetVal(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x448DDC55,  /* 1134.8853759765625f */
	aobjEvent32Cmd12(0x030, 1),
	aobjEvent32Wait(15),
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x448DDC53,  /* 1134.8851318359375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x448DDC53,  /* 1134.8851318359375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x448DDC53,  /* 1134.8851318359375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x4418C305,  /* 611.0471801757812f */
	    0x448DDC53,  /* 1134.8851318359375f */
	aobjEvent32SetValBlock(0x030, 16),
	    0x44095728,  /* 549.36181640625f */
	    0x448629CF,  /* 1073.3065185546875f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC83C[] = {
	aobjEvent32SetValBlock(0x030, 0),
	    0xC3B800E7,  /* -368.0070495605469f */
	    0x4486B140,  /* 1077.5390625f */
	aobjEvent32SetVal(0x030, 16),
	    0xC3D6CF58,  /* -429.619873046875f */
	    0x448E63C7,  /* 1139.1180419921875f */
	aobjEvent32Cmd12(0x030, 1),
	aobjEvent32Wait(15),
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3B800E9,  /* -368.0071105957031f */
	    0x4486B141,  /* 1077.5391845703125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3D6CF58,  /* -429.619873046875f */
	    0x448E63C7,  /* 1139.1180419921875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3B800E9,  /* -368.0071105957031f */
	    0x4486B141,  /* 1077.5391845703125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3D6CF58,  /* -429.619873046875f */
	    0x448E63C7,  /* 1139.1180419921875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3B800E9,  /* -368.0071105957031f */
	    0x4486B141,  /* 1077.5391845703125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3D6CF58,  /* -429.619873046875f */
	    0x448E63C7,  /* 1139.1180419921875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3B800E9,  /* -368.0071105957031f */
	    0x4486B141,  /* 1077.5391845703125f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3D6CF58,  /* -429.619873046875f */
	    0x448E63C7,  /* 1139.1180419921875f */
	aobjEvent32SetValBlock(0x030, 16),
	    0xC3B800E9,  /* -368.0071105957031f */
	    0x4486B141,  /* 1077.5391845703125f */
	aobjEvent32End(),
};

u32 dMVOpeningYoster_GroundAnimJoint_AnimJoint_0xC8CC[] = {
	aobjEvent32SetVal(0x020, 0),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValAfter(0x010, 0),
	    0x4291244F,  /* 72.57091522216797f */
	aobjEvent32SetValBlock(0x020, 1),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValBlock(0x020, 14),
	    0x44A11056,  /* 1288.510498046875f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44A11056,  /* 1288.510498046875f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44A11056,  /* 1288.510498046875f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44A11056,  /* 1288.510498046875f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44A11056,  /* 1288.510498046875f */
	aobjEvent32SetValBlock(0x020, 16),
	    0x44962D9D,  /* 1201.4254150390625f */
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0xC940 to 0xC9A0 (96 bytes) */
u32 dMVOpeningYoster_Cam_AnimJoint[21] = {
	aobjEvent32SetValAfterBlock(0x062, 0),
	    0x43BBABF2,  /* 375.34332275390625f */
	    0x438922E8,  /* 274.272705078125f */
	    0xC2875278,  /* -67.66107177734375f */
	aobjEvent32SetVal0RateBlock(0x015, 0),
	    0xC202C30E,  /* -32.69048309326172f */
	    0x447DE941,  /* 1015.6445922851562f */
	    0xC202C30E,  /* -32.69048309326172f */
	aobjEvent32SetVal0Rate(0x015, 90),
	    0x00000000,  /* 0.0f */
	    0x44D4D49D,  /* 1702.6441650390625f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0x015, 1),
	aobjEvent32SetValAfter(0x200, 0),
	    0x42262863,  /* 41.5394401550293f */
	aobjEvent32Wait(89),
	aobjEvent32SetVal0RateBlock(0x015, 70),
	    0x00000000,  /* 0.0f */
	    0x44D4D49D,  /* 1702.6441650390625f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

u8 dMVOpeningYoster_Cam_AnimJoint_post[12] = {
	#include <MVOpeningYoster/Cam_AnimJoint_post.data.inc.c>
};

