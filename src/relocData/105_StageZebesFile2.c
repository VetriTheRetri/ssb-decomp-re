/* relocData file 105: StageZebesFile2 */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
extern u16 *dStageZebesFile2_gap_0x2BC0[];

extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x948[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x958[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x968[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x970[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x978[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x980[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x988[];
extern MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x990[];

extern u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x61F0[];
extern u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x6224[];
extern u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x62CC[];
extern u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x6374[];

extern u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data[];
extern Gfx dStageZebesFile2_Layer1MatAnim_DL_0xCDA0[];
extern DObjDesc dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68[];
extern Gfx dStageZebesFile2_Layer1MatAnim_DL_0xDC60[];
extern Gfx dStageZebesFile2_Layer1MatAnim_DL_0xDD98[];
extern Gfx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928[];
extern u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x110[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x1AC[];

/* Matlinks sub-arrays — defined ~6000 lines below, but referenced by
 * the MatAnimJoint[28] outer array near the top of the file. */
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B38[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B44[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B50[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B54[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B58[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B5C[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B60[];
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B64[];

/* MObjSub chain targets (forward decl + cross-file) resolved by fixRelocChain.py */
/* Raw data from file offset 0x0000 to 0x2B48 (11080 bytes) */
PAD(8);

/* palette @ 0x0008 — referenced via MObjSub.palettes (sub_0x74). */
u16 dStageZebesFile2_gap_0x0000_sub_0x8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x8.palette.inc.c>
};
PAD(8);

/* palette @ 0x0030 — referenced via MObjSub.palettes (sub_0x74). */
u16 dStageZebesFile2_gap_0x0000_sub_0x30[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x30.palette.inc.c>
};
PAD(8);

/* palette @ 0x0058 — referenced via MObjSub.palettes (sub_0x74). */
u16 dStageZebesFile2_gap_0x0000_sub_0x58[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x58.palette.inc.c>
};
PAD(8);

/* palette @ 0x0080 — referenced via MObjSub.palettes (sub_0x68/0xC8). */
u16 dStageZebesFile2_gap_0x0000_sub_0x80[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x80.palette.inc.c>
};
PAD(8);

/* palette @ 0x00A8 — referenced via MObjSub.palettes (sub_0x68). */
u16 dStageZebesFile2_gap_0x0000_sub_0xA8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0xA8.palette.inc.c>
};
PAD(8);

/* palette @ 0x00D0 — referenced via MObjSub.palettes (sub_0x68). */
u16 dStageZebesFile2_gap_0x0000_sub_0xD0[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0xD0.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x00F8 (was gap+0xF8, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0xF8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0xF8.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0120 (was gap+0x120, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x120[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x120.palette.inc.c>
};
PAD(8);

/* palette @ 0x0148 — referenced via MObjSub.palettes (sub_0x5C). */
u16 dStageZebesFile2_gap_0x0000_sub_0x148[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x148.palette.inc.c>
};
PAD(8);

/* palette @ 0x0170 — referenced via MObjSub.palettes (sub_0x5C). */
u16 dStageZebesFile2_gap_0x0000_sub_0x170[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x170.palette.inc.c>
};
PAD(8);

/* palette @ 0x0198 — referenced via MObjSub.palettes (sub_0x5C). */
u16 dStageZebesFile2_gap_0x0000_sub_0x198[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x198.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x01C0 (was gap+0x1C0, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x1C0[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x1C0.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x01E8 (was gap+0x1E8, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x1E8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x1E8.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0210 (was gap+0x210, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x210[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x210.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0238 (was gap+0x238, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x238[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x238.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0260 (was gap+0x260, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x260[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x260.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0288 (was gap+0x288, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x288[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x288.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x02B0 (was gap+0x2B0, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x2B0[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x2B0.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x02D8 (was gap+0x2D8, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x2D8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x2D8.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0300 (was gap+0x300, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x300[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x300.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0328 (was gap+0x328, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x328[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x328.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x0350 (was gap+0x350, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x350[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x350.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0378 (was gap+0x378, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x378[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x378.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x03A0 (was gap+0x3A0, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x3A0[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x3A0.palette.inc.c>
};
PAD(8);

/* gap sub-block @ 0x03C8 (was gap+0x3C8, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x3C8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x3C8.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x03F0 (was gap+0x3F0, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x3F0[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x3F0.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0418 (was gap+0x418, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x418[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x418.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0440 (was gap+0x440, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x440[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x440.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0468 (was gap+0x468, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x468[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x468.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x0490 (was gap+0x490, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x490[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x490.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x04B8 (was gap+0x4B8, 40 bytes) */
u16 dStageZebesFile2_gap_0x0000_sub_0x4B8[16] = {
	#include <StageZebesFile2/gap_0x0000_sub_0x4B8.palette.inc.c>
};

PAD(8);

/* gap sub-block @ 0x04E0 (was gap+0x4E0, 264 bytes) */
/* @tex fmt=CI4 dim=32x16 */
u8 dStageZebesFile2_Tex_0x04E0[264] = {
	#include <StageZebesFile2/Tex_0x04E0.tex.inc.c>
};

/* gap sub-block @ 0x05E8 (was gap+0x5E8, 264 bytes) */
/* @tex fmt=CI4 dim=32x16 */
u8 dStageZebesFile2_Tex_0x05E8[264] = {
	#include <StageZebesFile2/Tex_0x05E8.tex.inc.c>
};

/* gap sub-block @ 0x06F0 (was gap+0x6F0, 520 bytes) */
/* @tex fmt=CI4 dim=16x64 lut=dStageZebesFile2_gap_0x0000_sub_0xF8 */
u8 dStageZebesFile2_Tex_0x06F0[520] = {
	#include <StageZebesFile2/Tex_0x06F0.tex.inc.c>
};

/* gap sub-block @ 0x08F8 (was gap+0x8F8, 1032 bytes) */
/* @tex fmt=CI4 dim=32x64 lut=dStageZebesFile2_gap_0x0000_sub_0x120 */
u8 dStageZebesFile2_Tex_0x08F8[1032] = {
	#include <StageZebesFile2/Tex_0x08F8.tex.inc.c>
};

/* gap sub-block @ 0x0D00 (was gap+0xD00, 264 bytes) */
/* @tex fmt=CI4 dim=32x16 */
u8 dStageZebesFile2_Tex_0x0D00[264] = {
	#include <StageZebesFile2/Tex_0x0D00.tex.inc.c>
};

/* gap sub-block @ 0x0E08 (was gap+0xE08, 264 bytes) */
/* @tex fmt=CI4 dim=16x32 lut=dStageZebesFile2_gap_0x0000_sub_0x1C0 */
u8 dStageZebesFile2_Tex_0x0E08[264] = {
	#include <StageZebesFile2/Tex_0x0E08.tex.inc.c>
};

/* gap sub-block @ 0x0F10 (was gap+0xF10, 2056 bytes) */
/* @tex fmt=CI4 dim=64x64 */
u8 dStageZebesFile2_Tex_0x0F10[2056] = {
	#include <StageZebesFile2/Tex_0x0F10.tex.inc.c>
};

/* gap sub-block @ 0x1718 (was gap+0x1718, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile2_gap_0x0000_sub_0x238 */
u8 dStageZebesFile2_Tex_0x1718[520] = {
	#include <StageZebesFile2/Tex_0x1718.tex.inc.c>
};

/* gap sub-block @ 0x1920 (was gap+0x1920, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dStageZebesFile2_Tex_0x1920[520] = {
	#include <StageZebesFile2/Tex_0x1920.tex.inc.c>
};

/* gap sub-block @ 0x1B28 (was gap+0x1B28, 1032 bytes) */
/* @tex fmt=CI4 dim=64x32 lut=dStageZebesFile2_gap_0x0000_sub_0x300 */
u8 dStageZebesFile2_Tex_0x1B28[1032] = {
	#include <StageZebesFile2/Tex_0x1B28.tex.inc.c>
};

/* gap sub-block @ 0x1F30 (was gap+0x1F30, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 lut=dStageZebesFile2_gap_0x0000_sub_0x328 */
u8 dStageZebesFile2_Tex_0x1F30[520] = {
	#include <StageZebesFile2/Tex_0x1F30.tex.inc.c>
};

/* gap sub-block @ 0x2138 (was gap+0x2138, 1032 bytes) */
/* @tex fmt=CI4 dim=64x32 lut=dStageZebesFile2_gap_0x0000_sub_0x3A0 */
u8 dStageZebesFile2_Tex_0x2138[1032] = {
	#include <StageZebesFile2/Tex_0x2138.tex.inc.c>
};

/* gap sub-block @ 0x2540 (was gap+0x2540, 520 bytes) */
/* @tex fmt=CI4 dim=32x32 */
u8 dStageZebesFile2_Tex_0x2540[520] = {
	#include <StageZebesFile2/Tex_0x2540.tex.inc.c>
};

/* gap sub-block @ 0x2748 (was gap+0x2748, 1024 bytes) */
/* @tex fmt=CI4 dim=64x32 */
u8 dStageZebesFile2_Tex_0x2748[1024] = {
	#include <StageZebesFile2/Tex_0x2748.tex.inc.c>
};

/* @ 0x2B48 — MObjSub **[28] (the p_mobjsubs field of MPGroundDesc; ref'd
 * by dGRZebesMap_MapHeader_0x0014 in fid 257). Each non-NULL slot is a
 * NULL-terminated MObjSub *[] table. Sparse: only slots 1/2/5/6/10/19/24/27
 * are populated, one per stage's MObj rendering layer. */
MObjSub **dStageZebesFile2_Layer1MObj_MObjSub[28] = {
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x948,
	dStageZebesFile2_gap_0x2BC0_sub_0x958,
	NULL,
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x968,
	dStageZebesFile2_gap_0x2BC0_sub_0x970,
	NULL,
	NULL,
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x978,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x980,
	NULL,
	NULL,
	NULL,
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x988,
	NULL,
	NULL,
	dStageZebesFile2_gap_0x2BC0_sub_0x990,
};

/* palette-pointer array @ Layer1MObj_MObjSub+0x70 — MObjSub.palettes target (sub_0xD8). */
u16 *dStageZebesFile2_Layer1MObj_MObjSub_at_0x70[2] = {
	dStageZebesFile2_gap_0x0000_sub_0x4B8,
	dStageZebesFile2_gap_0x0000_sub_0x490,
};

/* Raw data from file offset 0x2BC0 to 0x5AC0 (12032 bytes) */
/* palette-pointer slot @ 0x2BC0 (1 entry → sub_0x468). */
u16 *dStageZebesFile2_gap_0x2BC0[1] = {
	dStageZebesFile2_gap_0x0000_sub_0x468,
};

/* palette-pointer array @ 0x2BC4 — MObjSub.palettes target (sub_0xD8 stride 0x78). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x4[4] = {
	dStageZebesFile2_gap_0x0000_sub_0x440,
	dStageZebesFile2_gap_0x0000_sub_0x418,
	dStageZebesFile2_gap_0x0000_sub_0x3F0,
	dStageZebesFile2_gap_0x0000_sub_0x3C8,
};

/* palette-pointer array @ 0x2BD4 — MObjSub.palettes target (sub_0x150 stride 0x78). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x14[4] = {
	dStageZebesFile2_gap_0x0000_sub_0x440,
	dStageZebesFile2_gap_0x0000_sub_0x418,
	dStageZebesFile2_gap_0x0000_sub_0x3F0,
	dStageZebesFile2_gap_0x0000_sub_0x3C8,
};

/* palette-pointer array @ 0x2BE4 — MObjSub.palettes target (sub_0x240). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x24[2] = {
	dStageZebesFile2_gap_0x0000_sub_0x440,
	dStageZebesFile2_gap_0x0000_sub_0x418,
};

/* palette-pointer array @ 0x2BEC — MObjSub.palettes target (sub_0x2B8). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x2C[4] = {
	dStageZebesFile2_gap_0x0000_sub_0x2D8,
	dStageZebesFile2_gap_0x0000_sub_0x2B0,
	dStageZebesFile2_gap_0x0000_sub_0x288,
	dStageZebesFile2_gap_0x0000_sub_0x260,
};

/* palette-pointer array @ 0x2BFC — MObjSub.palettes target (sub_0x330). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x3C[4] = {
	dStageZebesFile2_gap_0x0000_sub_0x2D8,
	dStageZebesFile2_gap_0x0000_sub_0x2B0,
	dStageZebesFile2_gap_0x0000_sub_0x288,
	dStageZebesFile2_gap_0x0000_sub_0x260,
};

/* palette-pointer array @ 0x2C0C — MObjSub.palettes target (sub_0x3A8). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x4C[2] = {
	dStageZebesFile2_gap_0x0000_sub_0x210,
	dStageZebesFile2_gap_0x0000_sub_0x1E8,
};

/* palette-pointer array @ 0x2C14 — MObjSub.palettes target (sub_0x420). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x54[2] = {
	dStageZebesFile2_gap_0x0000_sub_0x210,
	dStageZebesFile2_gap_0x0000_sub_0x1E8,
};

/* palette-pointer array @ 0x2C1C — MObjSub.palettes target (sub_0x498). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x5C[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x198,
	dStageZebesFile2_gap_0x0000_sub_0x170,
	dStageZebesFile2_gap_0x0000_sub_0x148,
};

/* palette-pointer array @ 0x2C28 — MObjSub.palettes target (sub_0x510). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x68[3] = {
	dStageZebesFile2_gap_0x0000_sub_0xD0,
	dStageZebesFile2_gap_0x0000_sub_0xA8,
	dStageZebesFile2_gap_0x0000_sub_0x80,
};

/* palette-pointer array @ 0x2C34 — MObjSub.palettes target (sub_0x588). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x74[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x58,
	dStageZebesFile2_gap_0x0000_sub_0x30,
	dStageZebesFile2_gap_0x0000_sub_0x8,
};

/* palette-pointer array @ 0x2C40 — MObjSub.palettes target (sub_0x600). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x80[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x3A0,
	dStageZebesFile2_gap_0x0000_sub_0x378,
	dStageZebesFile2_gap_0x0000_sub_0x350,
};

/* palette-pointer array @ 0x2C4C — MObjSub.palettes target (sub_0x678). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x8C[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x3A0,
	dStageZebesFile2_gap_0x0000_sub_0x378,
	dStageZebesFile2_gap_0x0000_sub_0x350,
};

/* palette-pointer array @ 0x2C58 — MObjSub.palettes target (sub_0x6F0). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0x98[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x4B8,
	dStageZebesFile2_gap_0x0000_sub_0x490,
	dStageZebesFile2_gap_0x0000_sub_0x468,
};

/* palette-pointer array @ 0x2C64 — MObjSub.palettes target (sub_0x768). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0xA4[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x4B8,
	dStageZebesFile2_gap_0x0000_sub_0x490,
	dStageZebesFile2_gap_0x0000_sub_0x468,
};

/* palette-pointer array @ 0x2C70 — MObjSub.palettes target (sub_0x7E0). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0xB0[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x4B8,
	dStageZebesFile2_gap_0x0000_sub_0x490,
	dStageZebesFile2_gap_0x0000_sub_0x468,
};

/* palette-pointer array @ 0x2C7C — MObjSub.palettes target (sub_0x858). */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0xBC[3] = {
	dStageZebesFile2_gap_0x0000_sub_0x4B8,
	dStageZebesFile2_gap_0x0000_sub_0x490,
	dStageZebesFile2_gap_0x0000_sub_0x468,
};

/* palette-pointer array @ 0x2C88 — MObjSub.palettes target (sub_0x8D0); NULL-terminated. */
u16 *dStageZebesFile2_gap_0x2BC0_sub_0xC8[4] = {
	dStageZebesFile2_gap_0x0000_sub_0x3A0,
	dStageZebesFile2_gap_0x0000_sub_0x378,
	dStageZebesFile2_gap_0x0000_sub_0x350,
	NULL,
};

/* MObjSub @ 0x2C98 — palette set = Layer1MObj_MObjSub_at_0x70 (2 palettes). */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0xD8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_Layer1MObj_MObjSub_at_0x70,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2D10 — palette set = sub_0x4 (4 palettes). */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x150[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0100, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x4,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0100, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2D88 — palette set = sub_0x14 (4 palettes). */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x1C8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0080, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x14,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0080, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2E00 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x240[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0060, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x24,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0060, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0x80, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0x80, 0x80, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2E78 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x2B8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0060, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x2C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0060, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0x80, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0x80, 0x80, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2EF0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x330[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0020, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x3C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0020, 0x0020, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0x80, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x08 } },
		{ { 0xFF, 0xFF, 0x00, 0x00 } },
		{ { 0x80, 0x80, 0x4C, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2F68 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x3A8[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x4C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0040, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x2FE0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x420[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x54,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0040, 0x0040, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3058 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x498[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x5C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0040, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x30D0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x510[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x68,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0040, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3148 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x588[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0010,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x74,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0010, 0x0040, 0x0010,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x31C0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x600[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x80,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3238 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x678[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x8C,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x32B0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x6F0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0x98,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3328 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x768[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0xA4,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x33A0 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x7E0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0xB0,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3418 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x858[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0xBC,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x80, 0x80, 0x80, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* MObjSub @ 0x3490 */
MObjSub dStageZebesFile2_gap_0x2BC0_sub_0x8D0[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)0x00000000,
		0x0020, 0x0000, 0x0040, 0x0020,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)dStageZebesFile2_gap_0x2BC0_sub_0xC8,
		0x0004,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0040,
		0x0020, 0x0040, 0x0020,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002205,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xFF, 0xFF, 0xFF, 0x00 } },
		{ { 0x4C, 0x4C, 0x19, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* @ 0x3508 — MObjSub *[4] table (Layer1MObj_MObjSub[1] target), NULL-terminated. */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x948[4] = {
	dStageZebesFile2_gap_0x2BC0_sub_0xD8,
	dStageZebesFile2_gap_0x2BC0_sub_0x150,
	dStageZebesFile2_gap_0x2BC0_sub_0x1C8,
	NULL,
};

/* gap sub-block @ 0x3518 (was gap+0x958, 16 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x958[4] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x240,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x2B8,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x330,
	NULL,
};

/* gap sub-block @ 0x3528 (was gap+0x968, 8 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x968[2] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x3A8,
	NULL,
};

/* gap sub-block @ 0x3530 (was gap+0x970, 8 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x970[2] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x420,
	NULL,
};

/* gap sub-block @ 0x3538 (was gap+0x978, 8 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x978[2] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x498,
	NULL,
};

/* gap sub-block @ 0x3540 (was gap+0x980, 8 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x980[2] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x510,
	NULL,
};

/* gap sub-block @ 0x3548 (was gap+0x988, 8 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x988[2] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x588,
	NULL,
};

/* gap sub-block @ 0x3550 (was gap+0x990, 32 bytes) */
MObjSub *dStageZebesFile2_gap_0x2BC0_sub_0x990[8] = {
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x600,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x678,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x6F0,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x768,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x7E0,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x858,
	(MObjSub *)dStageZebesFile2_gap_0x2BC0_sub_0x8D0,
	NULL,
};

/* gap sub-block @ 0x3570 (was gap+0x9B0, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x9B0[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x9B0.vtx.inc.c>
};

/* gap sub-block @ 0x35F0 (was gap+0xA30, 288 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xA30[18] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xA30.vtx.inc.c>
};

/* gap sub-block @ 0x3710 (was gap+0xB50, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xB50[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xB50.vtx.inc.c>
};

/* gap sub-block @ 0x3750 (was gap+0xB90, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xB90[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xB90.vtx.inc.c>
};

/* gap sub-block @ 0x37D0 (was gap+0xC10, 384 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xC10[24] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xC10.vtx.inc.c>
};

/* gap sub-block @ 0x3950 (was gap+0xD90, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xD90[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xD90.vtx.inc.c>
};

/* gap sub-block @ 0x3990 (was gap+0xDD0, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xDD0[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xDD0.vtx.inc.c>
};

/* gap sub-block @ 0x39D0 (was gap+0xE10, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xE10[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xE10.vtx.inc.c>
};

/* gap sub-block @ 0x3A50 (was gap+0xE90, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xE90[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xE90.vtx.inc.c>
};

/* gap sub-block @ 0x3A90 (was gap+0xED0, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xED0[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xED0.vtx.inc.c>
};

/* gap sub-block @ 0x3B10 (was gap+0xF50, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xF50[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xF50.vtx.inc.c>
};

/* gap sub-block @ 0x3B50 (was gap+0xF90, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0xF90[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0xF90.vtx.inc.c>
};

/* gap sub-block @ 0x3BD0 (was gap+0x1010, 480 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1010[30] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1010.vtx.inc.c>
};

/* gap sub-block @ 0x3DB0 (was gap+0x11F0, 256 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x11F0[16] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x11F0.vtx.inc.c>
};

/* gap sub-block @ 0x3EB0 (was gap+0x12F0, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x12F0[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x12F0.vtx.inc.c>
};

/* gap sub-block @ 0x3EF0 (was gap+0x1330, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1330[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1330.vtx.inc.c>
};

/* gap sub-block @ 0x3F30 (was gap+0x1370, 80 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1370[5] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1370.vtx.inc.c>
};

/* gap sub-block @ 0x3F80 (was gap+0x13C0, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x13C0[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x13C0.vtx.inc.c>
};

/* gap sub-block @ 0x3FC0 (was gap+0x1400, 80 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1400[5] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1400.vtx.inc.c>
};

/* gap sub-block @ 0x4010 (was gap+0x1450, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1450[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1450.vtx.inc.c>
};

/* gap sub-block @ 0x4050 (was gap+0x1490, 496 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1490[31] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1490.vtx.inc.c>
};

/* gap sub-block @ 0x4240 (was gap+0x1680, 80 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1680[5] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1680.vtx.inc.c>
};

/* gap sub-block @ 0x4290 (was gap+0x16D0, 160 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x16D0[10] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x16D0.vtx.inc.c>
};

/* gap sub-block @ 0x4330 (was gap+0x1770, 48 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1770[3] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1770.vtx.inc.c>
};

/* Vtx: dStageZebesFile2_gap_0x2BC0_sub_0x17A0 (2 Vtx) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x17A0[2] = {
	#include <StageZebesFile2/dStageZebesFile2_gap_0x2BC0_sub_0x17A0.vtx.inc.c>
};

/* Vtx: dStageZebesFile2_gap_0x2BC0_sub_0x17C0 (3 Vtx) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x17C0[3] = {
	#include <StageZebesFile2/dStageZebesFile2_gap_0x2BC0_sub_0x17C0.vtx.inc.c>
};

/* gap sub-block @ 0x43B0 (was gap+0x17F0, 80 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x17F0[5] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x17F0.vtx.inc.c>
};

/* gap sub-block @ 0x4400 (was gap+0x1840, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1840[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1840.vtx.inc.c>
};

/* gap sub-block @ 0x4440 (was gap+0x1880, 128 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1880[8] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1880.vtx.inc.c>
};

/* gap sub-block @ 0x44C0 (was gap+0x1900, 48 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1900[3] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1900.vtx.inc.c>
};

/* gap sub-block @ 0x44F0 (was gap+0x1930, 48 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1930[3] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1930.vtx.inc.c>
};

/* gap sub-block @ 0x4520 (was gap+0x1960, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1960[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1960.vtx.inc.c>
};

/* gap sub-block @ 0x4560 (was gap+0x19A0, 112 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x19A0[7] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x19A0.vtx.inc.c>
};

/* gap sub-block @ 0x45D0 (was gap+0x1A10, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1A10[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1A10.vtx.inc.c>
};

/* gap sub-block @ 0x4610 (was gap+0x1A50, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1A50[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1A50.vtx.inc.c>
};

/* gap sub-block @ 0x4650 (was gap+0x1A90, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1A90[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1A90.vtx.inc.c>
};

/* gap sub-block @ 0x4690 (was gap+0x1AD0, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1AD0[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1AD0.vtx.inc.c>
};

/* gap sub-block @ 0x46D0 (was gap+0x1B10, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1B10[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1B10.vtx.inc.c>
};

/* gap sub-block @ 0x4710 (was gap+0x1B50, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1B50[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1B50.vtx.inc.c>
};

/* gap sub-block @ 0x4750 (was gap+0x1B90, 64 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1B90[4] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1B90.vtx.inc.c>
};

/* gap sub-block @ 0x4790 (was gap+0x1BD0, 48 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1BD0[3] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1BD0.vtx.inc.c>
};

/* gap sub-block @ 0x47C0 (was gap+0x1C00, 144 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1C00[9] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1C00.vtx.inc.c>
};

/* gap sub-block @ 0x4850 (was gap+0x1C90, 48 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1C90[3] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1C90.vtx.inc.c>
};

/* gap sub-block @ 0x4880 (was gap+0x1CC0, 16 bytes) */
Vtx dStageZebesFile2_gap_0x2BC0_sub_0x1CC0[1] = {
	#include <StageZebesFile2/gap_0x2BC0_sub_0x1CC0.vtx.inc.c>
};

/* gap sub-block @ 0x4890 (was gap+0x1CD0, 64 bytes) */
Gfx dStageZebesFile2_DL_0x4890[8] = {
	#include <StageZebesFile2/DL_0x4890.dl.inc.c>
};

/* gap sub-block @ 0x48D0 (was gap+0x1D10, 896 bytes) */
Gfx dStageZebesFile2_DL_0x48D0[112] = {
	#include <StageZebesFile2/DL_0x48D0.dl.inc.c>
};

/* gap sub-block @ 0x4C50 (was gap+0x2090, 336 bytes) */
Gfx dStageZebesFile2_DL_0x4C50[42] = {
	#include <StageZebesFile2/DL_0x4C50.dl.inc.c>
};

/* gap sub-block @ 0x4DA0 (was gap+0x21E0, 176 bytes) */
Gfx dStageZebesFile2_DL_0x4DA0[22] = {
	#include <StageZebesFile2/DL_0x4DA0.dl.inc.c>
};

/* gap sub-block @ 0x4E50 (was gap+0x2290, 136 bytes) */
Gfx dStageZebesFile2_DL_0x4E50[17] = {
	#include <StageZebesFile2/DL_0x4E50.dl.inc.c>
};

/* gap sub-block @ 0x4ED8 (was gap+0x2318, 80 bytes) */
Gfx dStageZebesFile2_DL_0x4ED8[10] = {
	#include <StageZebesFile2/DL_0x4ED8.dl.inc.c>
};

/* gap sub-block @ 0x4F28 (was gap+0x2368, 120 bytes) */
Gfx dStageZebesFile2_DL_0x4F28[15] = {
	#include <StageZebesFile2/DL_0x4F28.dl.inc.c>
};

/* gap sub-block @ 0x4FA0 (was gap+0x23E0, 32 bytes) */
Gfx dStageZebesFile2_DL_0x4FA0[4] = {
	#include <StageZebesFile2/DL_0x4FA0.dl.inc.c>
};

/* gap sub-block @ 0x4FC0 (was gap+0x2400, 32 bytes) */
Gfx dStageZebesFile2_DL_0x4FC0[4] = {
	#include <StageZebesFile2/DL_0x4FC0.dl.inc.c>
};

/* gap sub-block @ 0x4FE0 (was gap+0x2420, 120 bytes) */
Gfx dStageZebesFile2_DL_0x4FE0[15] = {
	#include <StageZebesFile2/DL_0x4FE0.dl.inc.c>
};

/* gap sub-block @ 0x5058 (was gap+0x2498, 224 bytes) */
Gfx dStageZebesFile2_DL_0x5058[28] = {
	#include <StageZebesFile2/DL_0x5058.dl.inc.c>
};

/* gap sub-block @ 0x5138 (was gap+0x2578, 136 bytes) */
Gfx dStageZebesFile2_DL_0x5138[17] = {
	#include <StageZebesFile2/DL_0x5138.dl.inc.c>
};

/* gap sub-block @ 0x51C0 (was gap+0x2600, 32 bytes) */
Gfx dStageZebesFile2_DL_0x51C0[4] = {
	#include <StageZebesFile2/DL_0x51C0.dl.inc.c>
};

/* gap sub-block @ 0x51E0 (was gap+0x2620, 32 bytes) */
Gfx dStageZebesFile2_DL_0x51E0[4] = {
	#include <StageZebesFile2/DL_0x51E0.dl.inc.c>
};

/* gap sub-block @ 0x5200 (was gap+0x2640, 120 bytes) */
Gfx dStageZebesFile2_DL_0x5200[15] = {
	#include <StageZebesFile2/DL_0x5200.dl.inc.c>
};

/* gap sub-block @ 0x5278 (was gap+0x26B8, 120 bytes) */
Gfx dStageZebesFile2_DL_0x5278[15] = {
	#include <StageZebesFile2/DL_0x5278.dl.inc.c>
};

/* gap sub-block @ 0x52F0 (was gap+0x2730, 136 bytes) */
Gfx dStageZebesFile2_DL_0x52F0[17] = {
	#include <StageZebesFile2/DL_0x52F0.dl.inc.c>
};

/* gap sub-block @ 0x5378 (was gap+0x27B8, 120 bytes) */
Gfx dStageZebesFile2_DL_0x5378[15] = {
	#include <StageZebesFile2/DL_0x5378.dl.inc.c>
};

/* gap sub-block @ 0x53F0 (was gap+0x2830, 32 bytes) */
Gfx dStageZebesFile2_DL_0x53F0[4] = {
	#include <StageZebesFile2/DL_0x53F0.dl.inc.c>
};

/* gap sub-block @ 0x5410 (was gap+0x2850, 120 bytes) */
Gfx dStageZebesFile2_DL_0x5410[15] = {
	#include <StageZebesFile2/DL_0x5410.dl.inc.c>
};

/* gap sub-block @ 0x5488 (was gap+0x28C8, 136 bytes) */
Gfx dStageZebesFile2_DL_0x5488[17] = {
	#include <StageZebesFile2/DL_0x5488.dl.inc.c>
};

/* gap sub-block @ 0x5510 (was gap+0x2950, 664 bytes) */
Gfx dStageZebesFile2_DL_0x5510[83] = {
	#include <StageZebesFile2/DL_0x5510.dl.inc.c>
};

/* gap sub-block @ 0x57A8 (was gap+0x2BE8, 152 bytes) */
Gfx dStageZebesFile2_DL_0x57A8[19] = {
	#include <StageZebesFile2/DL_0x57A8.dl.inc.c>
};

/* gap sub-block @ 0x5840 (was gap+0x2C80, 48 bytes) */
Gfx dStageZebesFile2_DL_0x5840[6] = {
	#include <StageZebesFile2/DL_0x5840.dl.inc.c>
};

/* gap sub-block @ 0x5870 (was gap+0x2CB0, 72 bytes) */
Gfx dStageZebesFile2_DL_0x5870[9] = {
	#include <StageZebesFile2/DL_0x5870.dl.inc.c>
};

/* gap sub-block @ 0x58B8 (was gap+0x2CF8, 56 bytes) */
Gfx dStageZebesFile2_DL_0x58B8[7] = {
	#include <StageZebesFile2/DL_0x58B8.dl.inc.c>
};

/* gap sub-block @ 0x58F0 (was gap+0x2D30, 64 bytes) */
Gfx dStageZebesFile2_DL_0x58F0[8] = {
	#include <StageZebesFile2/DL_0x58F0.dl.inc.c>
};

/* DObjDLLink @ 0x2D70 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5930[] = {
	{ 0, dStageZebesFile2_DL_0x4890 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2D80 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5940[] = {
	{ 0, dStageZebesFile2_DL_0x4C50 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2D90 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5950[] = {
	{ 0, dStageZebesFile2_DL_0x4DA0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2DA0 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5960[] = {
	{ 0, dStageZebesFile2_DL_0x4E50 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2DB0 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5970[] = {
	{ 0, dStageZebesFile2_DL_0x4ED8 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2DC0 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5980[] = {
	{ 0, dStageZebesFile2_DL_0x4F28 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2DD0 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x5990[] = {
	{ 0, dStageZebesFile2_DL_0x4FA0 },
	{ 4, NULL },
};

/* DObjDLLink @ 0x2DE0 (2 entries) */
DObjDLLink dStageZebesFile2_DLLink_0x59A0[] = {
	{ 0, dStageZebesFile2_DL_0x4FC0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x59B0 — { 0, DL_0x4FE0 }, { 4, NULL } terminator. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2DF0[2] = {
	{ 0, dStageZebesFile2_DL_0x4FE0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x59C0 — { 1, DL_0x57A8 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E00[2] = {
	{ 1, dStageZebesFile2_DL_0x57A8 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x59D0 — { 1, DL_0x5870 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E10[2] = {
	{ 1, dStageZebesFile2_DL_0x5870 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x59E0 — { 0, DL_0x5058 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E20[2] = {
	{ 0, dStageZebesFile2_DL_0x5058 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x59F0 — { 0, DL_0x5138 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E30[2] = {
	{ 0, dStageZebesFile2_DL_0x5138 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A00 — { 0, DL_0x51C0 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E40[2] = {
	{ 0, dStageZebesFile2_DL_0x51C0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A10 — { 0, DL_0x51E0 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E50[2] = {
	{ 0, dStageZebesFile2_DL_0x51E0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A20 — { 0, DL_0x5200 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E60[2] = {
	{ 0, dStageZebesFile2_DL_0x5200 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A30 — { 0, DL_0x5278 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E70[2] = {
	{ 0, dStageZebesFile2_DL_0x5278 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A40 — { 1, DL_0x58B8 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E80[2] = {
	{ 1, dStageZebesFile2_DL_0x58B8 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A50 — { 0, DL_0x52F0 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2E90[2] = {
	{ 0, dStageZebesFile2_DL_0x52F0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A60 — { 0, DL_0x5378 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2EA0[2] = {
	{ 0, dStageZebesFile2_DL_0x5378 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A70 — { 0, DL_0x53F0 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2EB0[2] = {
	{ 0, dStageZebesFile2_DL_0x53F0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A80 — { 0, DL_0x5410 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2EC0[2] = {
	{ 0, dStageZebesFile2_DL_0x5410 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5A90 — { 1, DL_0x58F0 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2ED0[2] = {
	{ 1, dStageZebesFile2_DL_0x58F0 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5AA0 — { 0, DL_0x5488 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2EE0[2] = {
	{ 0, dStageZebesFile2_DL_0x5488 },
	{ 4, NULL },
};

/* DObjDLLink[2] @ 0x5AB0 — { 0, DL_0x5510 }, { 4, NULL }. */
DObjDLLink dStageZebesFile2_gap_0x2BC0_sub_0x2EF0[2] = {
	{ 0, dStageZebesFile2_DL_0x5510 },
	{ 4, NULL },
};

/* DObjDesc: Layer1DObj @ 0x5AC0 (29 entries, terminated by { 18, ... } sentinel
 * at +0x4D0 = 0x5FB8; the 19 trailing entries were previously split off as
 * `gap_0x5C78` but they form one continuous scene-graph walk). */
DObjDesc dStageZebesFile2_Layer1DObj[] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageZebesFile2_DLLink_0x5930, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageZebesFile2_DLLink_0x5940, { 2988.0009765625f, 363.28582763671875f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x5950, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x5960, { 1140.0f, -56.71417236328125f, -570.0f }, { 0.0f, -0.4193980097770691f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x5970, { -2100.0f, 705.2859497070312f, -465.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x5980, { -1692.0f, 576.2859497070312f, -462.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x5990, { -2502.0f, 666.2859497070312f, -462.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_DLLink_0x59A0, { 1488.0f, -20.714149475097656f, -417.0000915527344f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	/* +0x1B8 (file 0x5C78): continuation — scene graph for stage props. */
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2DF0, { -3.002701997756958f, 546.2862548828125f, -405.0009460449219f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.064810037612915f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E00, { -3.0000269412994385f, 570.000244140625f, -398.9993896484375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E10, { -3.002701997756958f, 312.2861328125f, -393.0008850097656f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E20, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E30, { 1728.0f, -500.7141418457031f, 257.9999084472656f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E40, { -1887.0f, 6.285841941833496f, 362.9999084472656f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E50, { -2757.0f, 306.285888671875f, 422.9999084472656f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E60, { -372.00006103515625f, 129.28585815429688f, 422.9999084472656f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E70, { -2184.00048828125f, 513.28564453125f, 482.99951171875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.1001499891281128f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E80, { -2183.99951171875f, 537.000244140625f, 489.00067138671875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2E90, { -2184.00048828125f, 372.2852783203125f, 491.9995422363281f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2EA0, { -2157.0f, 6.285841941833496f, 572.9998779296875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2EB0, { 587.9999389648438f, -545.7141723632812f, 632.9998779296875f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2EC0, { 467.9970397949219f, 135.28616333007812f, 782.999755859375f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2ED0, { 467.99993896484375f, 167.99986267089844f, 789.0006713867188f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 8194, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2EE0, { 467.9970397949219f, 33.28618621826172f, 791.9998168945312f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)dStageZebesFile2_gap_0x2BC0_sub_0x2EF0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* Raw data from file offset 0x5C78 to 0x6160 (1256 bytes) */

/* MPVertexData[26] @ 0x5FBC — vertex positions (MPGeometryData.vertex_data) */
MPVertexData dStageZebesFile2_gap_0x5C78_sub_0x344[26] = {
	{ {    130,   1640 }, 0x4000 },
	{ {   1148,   1819 }, 0x4000 },
	{ {   2166,   1999 }, 0x0000 },
	{ {  -2507,   2341 }, 0x4000 },
	{ {  -1537,   2341 }, 0x4000 },
	{ {   -566,   2341 }, 0x0000 },
	{ {   -268,   3106 }, 0x4000 },
	{ {    367,   3106 }, 0x4000 },
	{ {   1003,   3106 }, 0x0000 },
	{ {  -3210,    557 }, 0x8000 },
	{ {  -2400,    557 }, 0x8000 },
	{ {  -2204,    509 }, 0x8000 },
	{ {  -1438,     51 }, 0x8000 },
	{ {  -1246,      2 }, 0x8000 },
	{ {  -1021,      2 }, 0x8000 },
	{ {   -830,     55 }, 0x8000 },
	{ {   -533,    251 }, 0x8000 },
	{ {   -352,    304 }, 0x8000 },
	{ {    347,    303 }, 0x8000 },
	{ {    518,    254 }, 0x8000 },
	{ {   1202,   -177 }, 0x8000 },
	{ {   1478,   -269 }, 0x8000 },
	{ {   2242,   -269 }, 0x0000 },
	{ {   -359,    130 }, 0x4000 },
	{ {     -2,    130 }, 0x4000 },
	{ {    355,    130 }, 0x0000 },
};

/* MPVertexArray (26 IDs) @ 0x6058 — vertex_id table (MPGeometryData.vertex_id) */
u16 dStageZebesFile2_gap_0x5C78_sub_0x3E0[26] = {
	  6,   7,   8,   3,   4,   5,   0,   1,   2,   9,  10,  11,  12,  13,  14,  15,
	 16,  17,  18,  19,  20,  21,  22,  23,  24,  25,
};

/* MPVertexLinks[5] @ 0x608C — line vertex pairs (MPGeometryData.vertex_links) */
MPVertexLinks dStageZebesFile2_gap_0x5C78_sub_0x414[5] = {
	{   0, 3 }, {   3, 3 }, {   6, 3 }, {   9, 14 }, {  23, 3 },
};

/* MPLineInfo[2] @ 0x60A0 — yakumono line groups (MPGeometryData.line_info) */
MPLineInfo dStageZebesFile2_gap_0x5C78_sub_0x428[2] = {
	{ 1, { {  0,   4}, {  4,   0}, {  4,   0}, {  4,   0} } },
	{ 2, { {  4,   1}, {  5,   0}, {  5,   0}, {  5,   0} } },
};

/* MPMapObjData[26] @ 0x60C4 — map objects (MPGeometryData.mapobjs) */
MPMapObjData dStageZebesFile2_gap_0x5C78_sub_0x44C[26] = {
	{  37, {     0,   314 } },
	{  33, { -2556,   572 } },
	{  45, {     0,   314 } },
	{  44, { -2556,   572 } },
	{  24, { -2556,   572 } },
	{  25, { -1137,    11 } },
	{  26, {     0,   314 } },
	{  27, {  1745,  -261 } },
	{  28, { -1566,  2351 } },
	{  29, {   974,  1799 } },
	{  30, {   341,  3113 } },
	{  31, {  2987,   503 } },
	{   4, { -1338,  5100 } },
	{   4, {   191,  5100 } },
	{   4, {  1391,  5100 } },
	{   4, {  2981,  5100 } },
	{   4, {  1961,  1170 } },
	{   4, {  -168,  2430 } },
	{   4, { -2868,  3000 } },
	{  21, {     0,   314 } },
	{   0, { -2556,   572 } },
	{   1, { -1137,    11 } },
	{   2, {     0,   314 } },
	{   3, {  1745,  -262 } },
	{  32, {     0,  4200 } },
	{  12, {     0, -9000 } },
};

/* MPGeometryData @ 0x6160 (28 bytes + 4 bytes pad) */
MPGeometryData dStageZebesFile2_MPGeometryData_0x6160 = {
	2,
	(MPVertexPosContainer*)dStageZebesFile2_gap_0x5C78_sub_0x344,
	(MPVertexArray*)dStageZebesFile2_gap_0x5C78_sub_0x3E0,
	dStageZebesFile2_gap_0x5C78_sub_0x414,
	dStageZebesFile2_gap_0x5C78_sub_0x428,
	26,
	(MPMapObjContainer*)dStageZebesFile2_gap_0x5C78_sub_0x44C,
};
PAD(4);

/* Raw data from file offset 0x6180 to 0x6410 (656 bytes) */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
AObjEvent32 *dStageZebesFile2_Layer1Anim_AnimJoint[28] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1Anim_AnimJoint_0x61F0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1Anim_AnimJoint_0x6224,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1Anim_AnimJoint_0x62CC,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1Anim_AnimJoint_0x6374,
	NULL,
	NULL,
	NULL,
};

u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x61F0[] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x43B5A496,  /* 363.28582763671875f */
	aobjEvent32SetValRateBlock(0x020, 159),
	    0x450BE493,  /* 2238.285888671875f */
	    0x3FD33333,  /* 1.649999976158142f */
	aobjEvent32SetValBlock(0x020, 160),
	    0x450BE493,  /* 2238.285888671875f */
	aobjEvent32SetTargetRate(0x020, 0),
	    0xBFD33333,  /* -1.649999976158142f */
	aobjEvent32SetVal0RateBlock(0x020, 161),
	    0x43B5A496,  /* 363.28582763671875f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageZebesFile2_Layer1Anim_AnimJoint_0x61F0),
};

u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x6224[] = {
	aobjEvent32SetValRateBlock(0x100, 0),
	    0x3F884BB2,  /* 1.064810037612915f */
	    0xBC088889,  /* -0.008333333767950535f */
	aobjEvent32SetVal0RateBlock(0x100, 11),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 29),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetValRateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	    0x31088889,  /* 1.9868215961338365e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetVal0RateBlock(0x100, 31),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 29),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetValRateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	    0x31088889,  /* 1.9868215961338365e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetValRateBlock(0x100, 20),
	    0x3F884BB2,  /* 1.064810037612915f */
	    0xBC088889,  /* -0.008333333767950535f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageZebesFile2_Layer1Anim_AnimJoint_0x6224),
};

u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x62CC[] = {
	aobjEvent32SetValRateBlock(0x100, 0),
	    0x3F8CD1B7,  /* 1.1001499891281128f */
	    0xBC088889,  /* -0.008333333767950535f */
	aobjEvent32SetVal0RateBlock(0x100, 14),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 29),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetValRateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	    0x31088889,  /* 1.9868215961338365e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetVal0RateBlock(0x100, 31),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 29),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetValRateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	    0x31088889,  /* 1.9868215961338365e-09f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3FA00000,  /* 1.25f */
	aobjEvent32SetValRateBlock(0x100, 17),
	    0x3F8CD1B7,  /* 1.1001499891281128f */
	    0xBC088889,  /* -0.008333333767950535f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageZebesFile2_Layer1Anim_AnimJoint_0x62CC),
};

u32 dStageZebesFile2_Layer1Anim_AnimJoint_0x6374[] = {
	aobjEvent32SetVal0RateBlock(0x100, 0),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F9FFFFF,  /* 1.2499998807907104f */
	aobjEvent32SetVal0RateBlock(0x100, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)(dStageZebesFile2_Layer1Anim_AnimJoint_0x6374),
	aobjEvent32End(),
};

PAD(8);

/* Raw data from file offset 0x6410 to 0xDF60 (31568 bytes) */
/* Each non-NULL entry points to one of the AObjEvent32 *[] sub-arrays
 * inside the matlinks table at MatAnimJoint_data + 0x5B38 (= 0xBFB8).
 * Semantically these targets are AObjEvent32 ** (arrays of script
 * pointers); the (AObjEvent32 *) cast just gives the slot the right
 * pointer size for the chain rewriter. */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint[28] = {
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B38,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B44,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B50,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B54,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B58,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B5C,
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B60,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B64,
};

/* @ 0x6480: MatAnim scripts (0x6480-0xBFB8) + matlinks (0xBFB8-0xC000) +
 * embedded MObj sprite-set pool prefix (0xC000-0xCDA0). Pending further
 * decomposition. */
/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x790 (100 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x790[100] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x790,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x920 (100 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x920[100] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x920,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0xAB0 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0xAB0[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0xAB0,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1240 (100 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1240[100] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1240,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x13D0 (100 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x13D0[100] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x13D0,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1560 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1560[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1560,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1CF0 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1CF0[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1CF0,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2480 (38 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2480[38] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 30),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2480,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2518 (38 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2518[38] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 48),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 12),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2518,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x25B0 (38 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x25B0[38] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 43),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 60),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 50),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 5),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 17),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x25B0,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2648 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2648[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2648,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2DD8 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2DD8[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2DD8,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3568 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3568[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3568,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3CF8 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3CF8[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3CF8,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4488 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4488[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4488,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4C18 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4C18[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4C18,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x53A8 (484 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x53A8[484] = {
	aobjEvent32SetValAfterBlock(0x200, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x200, 2),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x53A8,
};

/* @ 0xBFB8 (= MatAnimJoint_data + 0x5B38): matlinks table — 18 chain-pointer
 * slots split into 8 AObjEvent32 *[] sub-arrays. Each entry is a
 * material-animation script that the MatAnimJoint outer array
 * dispatches through. fixRelocChain.py rewrites each slot at link
 * time; the typed pointer expressions below only provide the right
 * slot size + symbolic targets for the .reloc to anchor on. */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B38[3] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x790,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x920,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B44[3] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0xAB0,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1240,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x13D0,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B50[1] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1560,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B54[1] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x1CF0,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B58[1] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2480,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B5C[1] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2518,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B60[1] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x25B0,
};

AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B64[7] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2648,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x2DD8,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3568,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x3CF8,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4488,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x4C18,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x53A8,
};

/* @ 0xC000 — 4 u16 leading zero padding + 16 u16 RGBA16 TLUT (palette body
 * is identical to the _at_0x5BB0 palette) + 4 u16 trailing zero padding.
 * Likely a duplicate palette slot loaded by a runtime path. The previous
 * inline literal here had a transcription error (0x0842A849 vs the actual
 * 0x08420849 in the binary). */
u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B80[24] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5B80.palette.inc.c>
};

/* u16 palette @ 0xC030 — RGBA16 TLUT (16 entries + 4 u16 zero pad). */
u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BB0[20] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BB0.palette.inc.c>
};

/* u16 palette @ 0xC058 — RGBA16 TLUT (16 entries + 4 u16 zero pad). */
u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BD8[20] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BD8.palette.inc.c>
};

/* @ 0xC080 — CI4 texture (32x64) + 8 byte pad. */
/* @tex fmt=CI4 dim=32x64 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BB0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5C00[1032] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5C00.tex.inc.c>
};

/* @ 0xC488 — CI4 texture (32x64) + 8 byte pad. */
/* @tex fmt=CI4 dim=32x64 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BD8 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6008[1032] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6008.tex.inc.c>
};

/* @ 0xC890 — CI4 texture (32x64) + 8 byte pad — loaded by DL_0xCDA0. */
/* @tex fmt=CI4 dim=32x64 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5BD8 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6410[1032] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6410.tex.inc.c>
};

/* @ 0xCC98 — 2 texture pointers (CI4 textures _at_0x6008 / _at_0x5C00). */
void *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6818[2] = {
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6008,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x5C00,
};

/* @ 0xCCA0 — MObjSub for the CI4 32x64 sprite-set at _at_0x6818
 * (textures _at_0x5C00 / _at_0x6008 / _at_0x6410). palettes=NULL; the
 * RDP DL _at_0xCDA0 loads the TLUTs directly via gsDPSetTextureImage. */
MObjSub dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6820[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6818,
		0x0020, 0x0000, 0x0020, 0x0040,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0040, 0x0020, 0x0040,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* @ 0xCD18 — MObjSub *[2] sprite-set MObjSub table, NULL-terminated. */
MObjSub *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6898[2] = {
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x6820,
	NULL,
};

/* Vtx[4] @ 0xCD20 — vertices for gsSPVertex(.., 4, 0) in DL_0xCDA0. */
Vtx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x68A0[4] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x68A0.vtx.inc.c>
};

/* Vtx[4] @ 0xCD60 — vertices for gsSPVertex(.., 4, 0) in DL_0xCDA0. */
Vtx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x68E0[4] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_at_0x68E0.vtx.inc.c>
};

/* @ 0xCDA0: Gfx DL (41 commands). */
Gfx dStageZebesFile2_Layer1MatAnim_DL_0xCDA0[41] = {
	#include <StageZebesFile2/Layer1MatAnim_DL_0xCDA0.dl.inc.c>
};

extern u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x90[];
extern u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xD4[];

/* @ 0xCEE8 — DObjDesc[3] scene-graph (same shape as _0x7928_DObjDesc; entry 1
 * dispatches DL_0xCDA0 via list_id 0x4001, entry 2 is the {18, NULL, …,
 * scale=0} sentinel). */
DObjDesc dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageZebesFile2_Layer1MatAnim_DL_0xCDA0, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xCF6C — AObjEvent32 *[3] joint table (slots 1/2 are scripts). */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_joint[3] = {
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x90,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xD4,
};

/* Forward decls — referenced by chain-pointer slots inside scripts that
 * appear earlier in the file. */
extern AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1CC[];
extern MObjSub *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC90[];

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x90 (17 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x90[17] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 200),
	    0xC4960000,  /* -1200.0f */
	aobjEvent32SetValRateBlock(0x020, 128),
	    0x42CCFBA2,  /* 102.49147033691406f */
	    0xC184AE8A,  /* -16.585224151611328f */
	aobjEvent32SetValRateBlock(0x020, 32),
	    0xC33BAFB7,  /* -187.68638610839844f */
	    0xBED54E8B,  /* -0.4166148602962494f */
	aobjEvent32SetVal0RateBlock(0x020, 40),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ 0xCFBC — AObjEvent32 script (27 u32, ends at first aobjEvent32End()). */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xD4[27] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x020, 20),
	    0x43160000,  /* 150.0f */
	    0x40000000,  /* 2.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x43160000,  /* 150.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x43160000,  /* 150.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x43160000,  /* 150.0f */
	aobjEvent32SetVal0RateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	aobjEvent32SetVal0RateBlock(0x020, 50),
	    0x43160000,  /* 150.0f */
	aobjEvent32SetValRateBlock(0x020, 10),
	    0x42700000,  /* 60.0f */
	    0xC0A00000,  /* -5.0f */
	aobjEvent32SetVal0RateBlock(0x020, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* @ 0xD028 — AObjEvent32 *[4] joint table (slot 3 is _at_0x1CC). */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x140[4] = {
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1CC,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x150 (31 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x150[31] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x3D20F909,  /* 0.03929999843239784f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 20),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfter(0x001, 10),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(20),
	aobjEvent32SetAnim(0x000, 0),
	(u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x150,
};

/* @ 0xD0B4 — AObjEvent32 *[5] joint table (slot 0 is script _at_0x150). */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1CC[5] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x150,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* @ 0xD0C8 — 5 CI4 palettes (u16[16] + PAD(8) each = 40 bytes) for the
 * sprite-set at _at_0xC00. Accessed via runtime offset arithmetic from
 * _at_0x1CC (no .reloc chain pointer lands here). */
u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0.palette.inc.c>
};
PAD(8);

u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x208[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x208.palette.inc.c>
};
PAD(8);

u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x230[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x230.palette.inc.c>
};
PAD(8);

u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x258[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x258.palette.inc.c>
};
PAD(8);

u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x280[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x280.palette.inc.c>
};
PAD(8);

/* u16 palette @ 0xD190 — RGBA16 TLUT (16 entries + 4 u16 zero pad). */
u16 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x2A8[20] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x2A8.palette.inc.c>
};

/* @ 0xD1B8 — CI4 32x24 sprite frame 5 (384 bytes texel + 8 byte pad). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x2D0[392] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x2D0.tex.inc.c>
};

/* @ 0xD340 — CI4 32x24 sprite frame 4 (384 bytes texel + 8 byte pad). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x458[392] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x458.tex.inc.c>
};

/* @ 0xD4C8 — CI4 32x24 sprite frame 3 (384 bytes texel + 8 byte pad). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x5E0[392] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x5E0.tex.inc.c>
};

/* @ 0xD650 — CI4 32x24 sprite frame 2 (384 bytes texel + 8 byte pad). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x768[392] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x768.tex.inc.c>
};

/* @ 0xD7D8 — CI4 32x24 sprite frame 1 (384 bytes texel + 8 byte pad). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x8F0[392] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x8F0.tex.inc.c>
};

/* @ 0xD960 — CI4 32x24 sprite frame 0 (384 bytes texel + 4 byte pad;
 * the last 4 pad bytes were split off as _at_0xBFC[1]). */
/* @tex fmt=CI4 dim=32x24 lut=dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x1E0 */
u8 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xA78[388] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xA78.tex.inc.c>
};

/* @ 0xDAE4 — MObjSub **[1] holder pointing to the MObjSub *[2] at _at_0xC90. */
MObjSub **dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xBFC[1] = {
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC90,
};

/* @ 0xDAE8 — sprite-set pointer table (6 entries → frame data blocks). */
void *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC00[6] = {
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xA78,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x8F0,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x768,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x5E0,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x458,
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0x2D0,
};

/* @ 0xDB00 — MObjSub for the 6-frame CI4 32x24 sprite-set at _at_0xC00.
 * palettes=NULL: palette dispatch is via the script _at_0x150 (which the
 * joint table _at_0x1CC[0] points to) — it sets the runtime palette index
 * from the 5-frame palette set at _at_0x1E0.._at_0x280. */
MObjSub dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC18[1] = {
	{
		0x0000,
		G_IM_FMT_CI, G_IM_SIZ_16b,
		(void**)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC00,
		0x0020, 0x0000, 0x0020, 0x0018,
		0,
		0.0f, 0.0f,
		1.0f, 1.0f,
		0.0f, 1.0f,
		(void**)0x00000000,
		0x0001,
		G_IM_FMT_CI, G_IM_SIZ_4b,
		0x0020,
		0x0018, 0x0020, 0x0018,
		0.0f, 0.0f,
		0.0f, 0.0f,
		0x00002005,
		{ { 0xFF, 0xFF, 0xFF, 0xFF } },
		0x00, 0x00, { 0x00, 0x00 },
		{ { 0x00, 0x00, 0x00, 0xFF } },
		{ { 0x00, 0x00, 0x00, 0x00 } },
		{ { 0xB3, 0xB3, 0xB3, 0x00 } },
		{ { 0x26, 0x26, 0x26, 0x00 } },
		0, 0,
		0, 0,
	}
};

/* @ 0xDB78 — MObjSub *[2] sprite-set MObjSub table, NULL-terminated. */
MObjSub *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC90[2] = {
	dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC18,
	NULL,
};

/* Vtx[3] @ 0xDB80 — vertices for gsSPVertex(.., 3, 0) in DL_0xDC60. */
Vtx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC98[3] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xC98.vtx.inc.c>
};

/* Vtx[3] @ 0xDBB0 — vertices for gsSPVertex(.., 3, 0) in DL_0xDC60. */
Vtx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xCC8[3] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xCC8.vtx.inc.c>
};

/* @ 0xDBE0 — unterminated Gfx fragment (16 commands of SetOtherMode_L/H +
 * SetCombineMode setup; same shape as _0x7928 prefix). Dispatched via a
 * DObjDesc entry with list_id 0x4001. No PipeSync header / EndDL terminator. */
Gfx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xCF8[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x6A68_at_0xCF8.dl.inc.c>
};

/* @ 0xDC60: Gfx DL (39 commands). */
Gfx dStageZebesFile2_Layer1MatAnim_DL_0xDC60[39] = {
	#include <StageZebesFile2/Layer1MatAnim_DL_0xDC60.dl.inc.c>
};

/* @ 0xDD98: Gfx DL (2 commands — DE call + DF end). */
Gfx dStageZebesFile2_Layer1MatAnim_DL_0xDD98[2] = {
	#include <StageZebesFile2/Layer1MatAnim_DL_0xDD98.dl.inc.c>
};

/* @ 0xDDA8 — unterminated Gfx fragment (16 commands of SetOtherMode_L/H +
 * SetCombineMode setup). Called via the DObjDesc[1] below (list_id=0x4001
 * encodes "execute this prefix DL"). No PipeSync header / EndDL terminator. */
Gfx dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928[16] = {
	#include <StageZebesFile2/dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928.dl.inc.c>
};

/* @ 0xDE28 — DObjDesc[3] scene-graph (entry 1 dispatches the Gfx prefix +
 * DL_0xDD98 via list_id 0x4001; entry 2 is the {18, NULL, …, scale=0}
 * sentinel). */
DObjDesc dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_DObjDesc[3] = {
	{ 0, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 0x4001, (void*)dStageZebesFile2_Layer1MatAnim_DL_0xDD98, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void*)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },
};

/* @ 0xDEAC — AObjEvent32 *[3] joint table (slot 1 is the script _at_0x110). */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_joint[3] = {
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x110,
	NULL,
};

/* @ 0xDEB8 — AObjEvent32 script (19 u32, ends at first aobjEvent32End()). */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x110[19] = {
	aobjEvent32SetValAfter(0x040, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 0),
	    0x00000000,  /* 0.0f */
	    0x41700000,  /* 15.0f */
	aobjEvent32SetValBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x010, 120),
	    0xC4E10000,  /* -1800.0f */
	aobjEvent32SetValRateBlock(0x020, 30),
	    0x43E10000,  /* 450.0f */
	    0xBF070260,  /* -0.5273799896240234f */
	aobjEvent32SetValRateBlock(0x020, 60),
	    0xC3E10000,  /* -450.0f */
	    0x3F2FDBF5,  /* 0.6869500279426575f */
	aobjEvent32SetValRateBlock(0x020, 30),
	    0x00000000,  /* 0.0f */
	    0x41700000,  /* 15.0f */
	aobjEvent32End(),
};

/* @ 0xDF04 — AObjEvent32 *[5] joint table (slot 4 is _at_0x1AC). */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x15C[5] = {
	NULL,
	NULL,
	NULL,
	NULL,
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x1AC,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x170 (15 u32) */
u32 dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x170[15] = {
	aobjEvent32SetValAfterBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x3F800000,  /* 1.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x40000000,  /* 2.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x40400000,  /* 3.0f */
	aobjEvent32SetValAfterBlock(0x001, 10),
	    0x40800000,  /* 4.0f */
	aobjEvent32SetValAfter(0x001, 10),
	    0x40A00000,  /* 5.0f */
	aobjEvent32Wait(20),
	aobjEvent32SetAnim(0x000, 0),
	    (u32)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x170,
};

/* u32: dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x1AC (3 u32) */
AObjEvent32 *dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x1AC[3] = {
	(AObjEvent32 *)dStageZebesFile2_Layer1MatAnim_MatAnimJoint_data_0x7928_at_0x170,
};
