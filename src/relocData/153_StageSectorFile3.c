/* relocData file 153: StageSectorFile3 — Sector Z stage Arwing flight-path
 * and laser data. Fully split into named sub-blocks for each chain-pointer
 * target; the intern chain (94 slots + 2 externs to file 161 FoxSpecial3)
 * is described in 153_StageSectorFile3.reloc.
 *
 *   - 0x0000..0x1C50 (7248 bytes): 8 GRSectorDesc structs interleaved with
 *     AObjEvent32 scripts, SYInterpDesc descriptors, Vec3f path waypoints,
 *     f32 keyframe tables, and quartic coefficient arrays. Each
 *     `GRSectorDesc.anim_joint_0xN` field points at a named Sub_0xNNNN
 *     sub-block; each script's `aobjEvent32SetInterp` arg points at a
 *     `SYInterpDesc[1]` sub-block whose `points` / `keyframes` / `quartics`
 *     fields then reference the typed data sub-blocks. fixRelocChain.py
 *     rebuilds the (next<<16)|target encoding at link time from the .reloc.
 *   - 0x1C50..0x1E00 (432 bytes): the ArwingLaser2D/3D weapon visual DL
 *     (Gfx[27]) followed by AObjEvent32 *[3] joint-table stubs and
 *     5 Arwing pilot anim scripts (llGRSectorMapArwing{1..5}AnimJoint).
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros
#include <sys/interp.h>  // SYInterpDesc
#include <gr/grvars.h>   // GRSectorDesc

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u8 dFoxSpecial3_Tex_0x1080[];
extern u8 dFoxSpecial3_Tex_0x1080[];
extern u8 dFoxSpecial3_Tex_0x1080[];
extern u8 dFoxSpecial3_Tex_0x1080[];
extern u8 dFoxSpecial3_Tex_0x1080[];
extern Vtx dStageSectorFile3_Sub_0x1BF0[6];

/* Forward declarations — required for chain pointers that reference
 * sub-blocks defined later in the file. */
extern GRSectorDesc dStageSectorFile3_Arwing0SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0030[7];
extern f32 dStageSectorFile3_Sub_0x0084[5];
extern f32 dStageSectorFile3_Sub_0x0098[20];
extern SYInterpDesc dStageSectorFile3_Sub_0x00E8[1];
extern u32 dStageSectorFile3_Sub_0x0100[16];
extern u32 dStageSectorFile3_Sub_0x0140[3];
extern u32 dStageSectorFile3_Sub_0x014C[3];
extern Vec3f dStageSectorFile3_Sub_0x0158[7];
extern f32 dStageSectorFile3_Sub_0x01AC[5];
extern f32 dStageSectorFile3_Sub_0x01C0[20];
extern SYInterpDesc dStageSectorFile3_Sub_0x0210[1];
extern u32 dStageSectorFile3_Sub_0x0228[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x0244[3];
extern GRSectorDesc dStageSectorFile3_Arwing1SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0280[7];
extern f32 dStageSectorFile3_Sub_0x02D4[5];
extern f32 dStageSectorFile3_Sub_0x02E8[20];
extern SYInterpDesc dStageSectorFile3_Sub_0x0338[1];
extern u32 dStageSectorFile3_Sub_0x0350[26];
extern u32 dStageSectorFile3_Sub_0x03B8[4];
extern u32 dStageSectorFile3_Sub_0x03C8[4];
extern AObjEvent32 *dStageSectorFile3_Sub_0x03D8[2];
extern GRSectorDesc dStageSectorFile3_Arwing3SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0410[9];
extern f32 dStageSectorFile3_Sub_0x047C[7];
extern f32 dStageSectorFile3_Sub_0x0498[30];
extern SYInterpDesc dStageSectorFile3_Sub_0x0510[1];
extern u32 dStageSectorFile3_Sub_0x0528[16];
extern u32 dStageSectorFile3_Sub_0x0568[6];
extern u32 dStageSectorFile3_Sub_0x0580[6];
extern Vec3f dStageSectorFile3_Sub_0x0598[9];
extern f32 dStageSectorFile3_Sub_0x0604[7];
extern f32 dStageSectorFile3_Sub_0x0620[30];
extern SYInterpDesc dStageSectorFile3_Sub_0x0698[1];
extern u32 dStageSectorFile3_Sub_0x06B0[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x06CC[1];
extern GRSectorDesc dStageSectorFile3_Arwing2SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0700[21];
extern f32 dStageSectorFile3_Sub_0x07FC[19];
extern f32 dStageSectorFile3_Sub_0x0848[90];
extern SYInterpDesc dStageSectorFile3_Sub_0x09B0[1];
extern u32 dStageSectorFile3_Sub_0x09C8[16];
extern u32 dStageSectorFile3_Sub_0x0A08[4];
extern u32 dStageSectorFile3_Sub_0x0A18[4];
extern Vec3f dStageSectorFile3_Sub_0x0A28[21];
extern f32 dStageSectorFile3_Sub_0x0B24[19];
extern f32 dStageSectorFile3_Sub_0x0B70[90];
extern SYInterpDesc dStageSectorFile3_Sub_0x0CD8[1];
extern u32 dStageSectorFile3_Sub_0x0CF0[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x0D0C[1];
extern GRSectorDesc dStageSectorFile3_Arwing4SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0D40[7];
extern f32 dStageSectorFile3_Sub_0x0D94[5];
extern f32 dStageSectorFile3_Sub_0x0DA8[20];
extern SYInterpDesc dStageSectorFile3_Sub_0x0DF8[1];
extern u32 dStageSectorFile3_Sub_0x0E10[34];
extern u32 dStageSectorFile3_Sub_0x0E98[2];
extern u32 dStageSectorFile3_Sub_0x0EA0[2];
extern AObjEvent32 *dStageSectorFile3_Sub_0x0EA8[2];
extern GRSectorDesc dStageSectorFile3_Arwing5SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x0EE0[10];
extern f32 dStageSectorFile3_Sub_0x0F58[8];
extern f32 dStageSectorFile3_Sub_0x0F78[35];
extern SYInterpDesc dStageSectorFile3_Sub_0x1004[1];
extern u32 dStageSectorFile3_Sub_0x101C[10];
extern u32 dStageSectorFile3_Sub_0x1044[4];
extern u32 dStageSectorFile3_Sub_0x1054[4];
extern Vec3f dStageSectorFile3_Sub_0x1064[10];
extern f32 dStageSectorFile3_Sub_0x10DC[8];
extern f32 dStageSectorFile3_Sub_0x10FC[35];
extern SYInterpDesc dStageSectorFile3_Sub_0x1188[1];
extern u32 dStageSectorFile3_Sub_0x11A0[9];
extern AObjEvent32 *dStageSectorFile3_Sub_0x11C4[3];
extern GRSectorDesc dStageSectorFile3_Arwing7SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x1200[10];
extern f32 dStageSectorFile3_Sub_0x1278[8];
extern f32 dStageSectorFile3_Sub_0x1298[35];
extern SYInterpDesc dStageSectorFile3_Sub_0x1324[1];
extern u32 dStageSectorFile3_Sub_0x133C[9];
extern u32 dStageSectorFile3_Sub_0x1360[4];
extern u32 dStageSectorFile3_Sub_0x1370[4];
extern Vec3f dStageSectorFile3_Sub_0x1380[11];
extern f32 dStageSectorFile3_Sub_0x1404[9];
extern f32 dStageSectorFile3_Sub_0x1428[40];
extern SYInterpDesc dStageSectorFile3_Sub_0x14C8[1];
extern u32 dStageSectorFile3_Sub_0x14E0[9];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1504[3];
extern GRSectorDesc dStageSectorFile3_Arwing6SectorDesc;
extern Vec3f dStageSectorFile3_Sub_0x1540[21];
extern f32 dStageSectorFile3_Sub_0x163C[19];
extern f32 dStageSectorFile3_Sub_0x1688[90];
extern SYInterpDesc dStageSectorFile3_Sub_0x17F0[1];
extern u32 dStageSectorFile3_Sub_0x1808[7];
extern u32 dStageSectorFile3_Sub_0x1824[4];
extern u32 dStageSectorFile3_Sub_0x1834[4];
extern Vec3f dStageSectorFile3_Sub_0x1844[21];
extern f32 dStageSectorFile3_Sub_0x1940[19];
extern f32 dStageSectorFile3_Sub_0x198C[90];
extern SYInterpDesc dStageSectorFile3_Sub_0x1AF4[1];
extern u32 dStageSectorFile3_Sub_0x1B0C[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1B28[3];
extern u32 dStageSectorFile3_Sub_0x1B34[17];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1B78[3];
extern u32 dStageSectorFile3_Sub_0x1B84[24];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1BE4[3];
extern Gfx dStageSectorFile3_AnimJoint_0x1C50[27];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1D28[3];
extern u32 dStageSectorFile3_Sub_0x1D34[5];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1D48[3];
extern u32 dStageSectorFile3_Sub_0x1D54[18];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1D9C[2];
extern u32 dStageSectorFile3_Sub_0x1DA4[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1DC0[1];
extern u32 dStageSectorFile3_Sub_0x1DC4[7];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1DE0[1];
extern u32 dStageSectorFile3_Sub_0x1DE4[6];
extern AObjEvent32 *dStageSectorFile3_Sub_0x1DFC[1];


/* --- Arwing 0 @ 0x0000 --- */
GRSectorDesc dStageSectorFile3_Arwing0SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0100,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0140,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x014C,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0228,
};

Vec3f dStageSectorFile3_Sub_0x0030[7] = {
	{ 15000.0f, 4500.0f, -0.0011320000048726797f },
	{ 16500.0f, 4500.0f, -0.001246000058017671f },
	{ 9000.0f, 4500.0f, -0.000678999989759177f },
	{ 3.999999989900971e-06f, 4500.0f, 0.0f },
	{ -9000.0f, 4500.0f, 0.000678999989759177f },
	{ -16500.0f, 4500.0f, 0.001246000058017671f },
	{ -15000.0f, 4500.0f, 0.0011320000048726797f },
};

f32 dStageSectorFile3_Sub_0x0084[5] = {
	0.0f, 0.22727300226688385f, 0.5f, 0.7727270126342773f,
	1.0f,
};

f32 dStageSectorFile3_Sub_0x0098[20] = {
	140625.0f, -412500.0f, 227500.0f, 110000.0f,
	10000.0f, 5625.0f, -15000.0f, -31250.0f,
	55000.0f, 75625.0f, 5625.0f, -7500.0f,
	-42500.0f, 30000.0f, 90000.0f, 140625.0f,
	-150000.0f, -166250.0f, 110000.0f, 75625.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x00E8[1] = {
	{ nSYInterpKindCatrom, 5, 0.5f,
	  dStageSectorFile3_Sub_0x0030,
	  1100.0f,
	  dStageSectorFile3_Sub_0x0084,
	  dStageSectorFile3_Sub_0x0098 },
};

u32 dStageSectorFile3_Sub_0x0100[16] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x00E8,
	aobjEvent32SetValRateBlock(0x008, 0),
	    0x00000000,
	    0x3BF7B684,
	aobjEvent32SetValRateBlock(0x008, 69),
	    0x3E800000,
	    0x3A619E06,
	aobjEvent32SetValBlock(0x008, 500),
	    0x3F28F5C3,
	aobjEvent32SetTargetRate(0x008, 0),
	    0x3A6709D7,
	aobjEvent32SetValRateBlock(0x008, 30),
	    0x3F800000,
	    0x3CC8A4A2,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0140[3] = {
	aobjEvent32SetFlags(0x002, 567),
	aobjEvent32SetFlags(0x000, 32),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x014C[3] = {
	aobjEvent32SetFlags(0x000, 567),
	aobjEvent32SetFlags(0x002, 32),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x0158[7] = {
	{ 15000.0f, 5100.0f, 804.2353515625f },
	{ 16500.0f, 5100.0f, 401.4353942871094f },
	{ 9000.0f, 5100.0f, -0.6822729706764221f },
	{ 3.999999989900971e-06f, 5100.0f, 0.0f },
	{ -9000.0f, 5100.0f, -1.4000000192027073e-05f },
	{ -16500.0f, 5100.0f, -600.0f },
	{ -15000.0f, 5100.0f, -1200.0f },
};

f32 dStageSectorFile3_Sub_0x01AC[5] = {
	0.0f, 0.22736699879169464f, 0.499765008687973f, 0.7721740007400513f,
	1.0f,
};

f32 dStageSectorFile3_Sub_0x01C0[20] = {
	141029.25f, -413038.0625f, 227139.609375f, 110359.0234375f,
	10179.9697265625f, 6031.99462890625f, -16084.40234375f, -30257.72265625f,
	54640.3671875f, 75669.765625f, 6522.9541015625f, -8695.9091796875f,
	-42102.5f, 30000.453125f, 90000.0f, 141525.0f,
	-152400.0f, -165250.0f, 110800.0f, 75725.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0210[1] = {
	{ nSYInterpKindCatrom, 5, 0.5f,
	  dStageSectorFile3_Sub_0x0158,
	  1101.367431640625f,
	  dStageSectorFile3_Sub_0x01AC,
	  dStageSectorFile3_Sub_0x01C0 },
};

u32 dStageSectorFile3_Sub_0x0228[7] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0210,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 599),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x0244[3] = {
	NULL,
	NULL,
	NULL,
};

/* --- Arwing 1 @ 0x0250 --- */
GRSectorDesc dStageSectorFile3_Arwing1SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0350,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x03B8,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x03C8,
	NULL,
	NULL,
};

Vec3f dStageSectorFile3_Sub_0x0280[7] = {
	{ 22200.0f, 2400.0f, -0.001699000014923513f },
	{ 17100.0f, 900.0f, -0.0012910000514239073f },
	{ 8100.0f, 2100.0f, -0.0006120000034570694f },
	{ 4200.0f, 4800.0f, -0.00033999999868683517f },
	{ -1800.0f, 2400.0f, 0.00013600000238511711f },
	{ -16500.0f, 3600.0f, 0.001246000058017671f },
	{ -25200.0f, 7200.0f, 0.001879999996162951f },
};

f32 dStageSectorFile3_Sub_0x02D4[5] = {
	0.0f, 0.2577759921550751f, 0.3955659866333008f, 0.5816310048103333f,
	1.0f,
};

f32 dStageSectorFile3_Sub_0x02E8[20] = {
	206100.0f, -402600.0f, -9100.0f, 200800.0f,
	55250.0f, 238500.0f, -473400.0f, 352900.0f,
	-141200.0f, 50450.0f, 298125.0f, -499200.0f,
	347350.0f, -54100.0f, 27250.0f, 543825.0f,
	-1165800.0f, 129250.0f, 531800.0f, 119425.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0338[1] = {
	{ nSYInterpKindCatrom, 5, 0.5f,
	  dStageSectorFile3_Sub_0x0280,
	  1177.21533203125f,
	  dStageSectorFile3_Sub_0x02D4,
	  dStageSectorFile3_Sub_0x02E8 },
};

u32 dStageSectorFile3_Sub_0x0350[26] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0338,
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,
	aobjEvent32SetValRate(0x008, 0),
	    0x00000000,
	    0x3B2E0534,
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,
	    0xC0490FDB,
	aobjEvent32SetValRate(0x008, 99),
	    0x3E4CCCCD,
	    0x3A4A35A7,
	aobjEvent32SetVal0RateBlock(0x004, 79),
	    0xBDA3D709,
	aobjEvent32SetVal(0x004, 870),
	    0xBDA3D709,
	aobjEvent32Wait(20),
	aobjEvent32SetValBlock(0x008, 770),
	    0x3F333333,
	aobjEvent32SetTargetRate(0x008, 0),
	    0x3A8E3765,
	aobjEvent32SetValRateBlock(0x008, 80),
	    0x3F800000,
	    0x3C15964F,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x03B8[4] = {
	aobjEvent32SetFlags(0x002, 879),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 9),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x03C8[4] = {
	aobjEvent32SetFlags(0x000, 879),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 9),
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x03D8[2] = {
	NULL,
	NULL,
};

/* --- Arwing 3 @ 0x03E0 --- */
GRSectorDesc dStageSectorFile3_Arwing3SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0528,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0568,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0580,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x06B0,
};

Vec3f dStageSectorFile3_Sub_0x0410[9] = {
	{ 11700.0f, 7776.9169921875f, -13056.13671875f },
	{ 16200.0f, 6748.6416015625f, -13756.841796875f },
	{ 5699.9990234375f, 6753.75048828125f, -14228.0283203125f },
	{ -9300.001953125f, 7787.13427734375f, -13998.5087890625f },
	{ -18300.0f, 9278.7099609375f, -10144.7294921875f },
	{ -14100.0f, 5494.83740234375f, -1499.9990234375f },
	{ 300.0f, 3300.0f, -2.300000051036477e-05f },
	{ 16500.0f, 17700.0f, -0.0012529999949038029f },
	{ 18300.0f, 34294.8359375f, -1500.00146484375f },
};

f32 dStageSectorFile3_Sub_0x047C[7] = {
	0.0f, 0.1256289929151535f, 0.30542701482772827f, 0.4277699887752533f,
	0.5577639937400818f, 0.7379299998283386f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x0498[30] = {
	276180.21875f, -892897.5f, 617851.6875f, 169134.09375f,
	10672.2802734375f, 297805.59375f, -549699.6875f, -190085.65625f,
	427441.3125f, 180940.828125f, 215189.34375f, -137581.546875f,
	-253279.203125f, 60521.0703125f, 166402.4375f, 496454.125f,
	-1105260.5f, 515364.09375f, 176807.078125f, 51252.046875f,
	818992.625f, -1432541.5f, 451670.5f, 329365.875f,
	134616.8125f, 1174500.0f, -2459752.0f, 310798.125f,
	1029830.0f, 302104.4375f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0510[1] = {
	{ nSYInterpKindCatrom, 7, 0.5f,
	  dStageSectorFile3_Sub_0x0410,
	  2791.611328125f,
	  dStageSectorFile3_Sub_0x047C,
	  dStageSectorFile3_Sub_0x0498 },
};

u32 dStageSectorFile3_Sub_0x0528[16] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0510,
	aobjEvent32SetValRateBlock(0x008, 0),
	    0x00000000,
	    0x3A95BABF,
	aobjEvent32SetValRateBlock(0x008, 669),
	    0x3F23D70A,
	    0x393B5234,
	aobjEvent32SetValBlock(0x008, 740),
	    0x3F400000,
	aobjEvent32SetTargetRate(0x008, 0),
	    0x3954DE95,
	aobjEvent32SetValRateBlock(0x008, 190),
	    0x3F800000,
	    0x3B427710,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0568[6] = {
	aobjEvent32SetFlags(0x002, 89),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 619),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 769),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0580[6] = {
	aobjEvent32SetFlags(0x000, 89),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 619),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 769),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x0598[9] = {
	{ 11700.0f, 8376.916015625f, -12964.3046875f },
	{ 16200.0f, 7348.642578125f, -13756.841796875f },
	{ 5699.9990234375f, 7353.751953125f, -14119.486328125f },
	{ -9300.0009765625f, 8387.1337890625f, -13689.5927734375f },
	{ -16800.0f, 9542.3017578125f, -10144.73046875f },
	{ -14100.0f, 6094.83740234375f, -1499.9990234375f },
	{ 300.0f, 3900.0f, -2.300000051036477e-05f },
	{ 16500.0f, 18300.0f, 899.9987182617188f },
	{ 18300.0f, 34894.8359375f, 299.9985046386719f },
};

f32 dStageSectorFile3_Sub_0x0604[7] = {
	0.0f, 0.1288830041885376f, 0.313416987657547f, 0.4203740060329437f,
	0.5459579825401306f, 0.7308440208435059f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x0620[30] = {
	275954.03125f, -892436.875f, 618013.9375f, 168733.109375f,
	10661.4775390625f, 375538.5f, -677689.75f, -202048.75f,
	469618.15625f, 180925.828125f, 83874.8125f, -25641.392578125f,
	-52219.26171875f, -103224.546875f, 146344.0f, 466160.84375f,
	-868532.625f, 256744.4375f, 215149.625f, 49133.5625f,
	940567.375f, -1731997.25f, 631429.5625f, 344424.15625f,
	118655.8671875f, 1176525.0f, -2460652.0f, 304798.125f,
	1033130.0f, 303079.4375f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0698[1] = {
	{ nSYInterpKindCatrom, 7, 0.5f,
	  dStageSectorFile3_Sub_0x0598,
	  2720.135498046875f,
	  dStageSectorFile3_Sub_0x0604,
	  dStageSectorFile3_Sub_0x0620 },
};

u32 dStageSectorFile3_Sub_0x06B0[7] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0698,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 1599),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x06CC[1] = {
	NULL,
};

/* --- Arwing 2 @ 0x06D0 --- */
GRSectorDesc dStageSectorFile3_Arwing2SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x09C8,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0A08,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0A18,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0CF0,
};

Vec3f dStageSectorFile3_Sub_0x0700[21] = {
	{ 26400.0f, 5400.0f, 0.0f },
	{ 16500.0f, 5400.0f, 0.0f },
	{ 1500.0f, 5400.0f, 0.0f },
	{ -3600.0f, 5400.0f, 0.0f },
	{ -4500.0f, 4500.0f, 0.0f },
	{ -3600.0f, 3900.0f, 0.0f },
	{ -1500.0f, 3900.0f, 0.0f },
	{ -600.0f, 3300.0f, 0.0f },
	{ -1500.0f, 2400.0f, 0.0f },
	{ -6000.0f, 2400.0f, 0.0f },
	{ -10800.0f, 2700.0f, 0.0f },
	{ -14100.0f, 3000.0f, 900.0f },
	{ -15600.0f, 3000.0f, 3300.0f },
	{ -15000.0f, 1500.0f, 5700.0f },
	{ -13200.0f, 300.0f, 7500.0f },
	{ -9600.0f, -300.0f, 8400.0f },
	{ 1500.0f, -900.0f, 8400.0f },
	{ 8700.0f, -900.0f, 8400.0f },
	{ 13800.0f, -600.0f, 8400.0f },
	{ 17100.0f, -300.0f, 8400.0f },
	{ 15300.0f, -300.0f, 8400.0f },
};

f32 dStageSectorFile3_Sub_0x07FC[19] = {
	0.0f, 0.18884600698947906f, 0.25310298800468445f, 0.2714020013809204f,
	0.2858380079269409f, 0.3123379945755005f, 0.3267729878425598f, 0.3446890115737915f,
	0.40140300989151f, 0.4619939923286438f, 0.505640983581543f, 0.5422800183296204f,
	0.579334020614624f, 0.6153129935264587f, 0.6633110046386719f, 0.8032879829406738f,
	0.8939489722251892f, 0.9582759737968445f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x0848[90] = {
	562500.0f, -1005000.0f, -173600.0f, 556100.0f,
	172225.0f, 83250.0f, -299100.0f, 462250.0f,
	-348400.0f, 112225.0f, 18000.0f, -61200.0f,
	75500.0f, -41900.0f, 10225.0f, 1125.0f,
	-4800.0f, 5650.0f, 0.0f, 625.0f,
	18000.0f, -36000.0f, 7200.0f, 10800.0f,
	2600.0f, 1125.0f, 300.0f, -2000.0f,
	-1400.0f, 2600.0f, 11700.0f, -6000.0f,
	-500.0f, 2500.0f, 625.0f, 28125.0f,
	-78900.0f, 26600.0f, 39900.0f, 8325.0f,
	10350.0f, -15900.0f, -21850.0f, 21900.0f,
	24050.0f, 1350.0f, 1500.0f, -1650.0f,
	-10300.0f, 18550.0f, 9450.0f, -17100.0f,
	2150.0f, 3300.0f, 9450.0f, 11025.0f,
	-30000.0f, 14550.0f, 5700.0f, 7250.0f,
	1350.0f, 1500.0f, -550.0f, 200.0f,
	8525.0f, 82125.0f, -76500.0f, 72500.0f,
	-28500.0f, 11025.0f, 327825.0f, -724800.0f,
	121750.0f, 307700.0f, 60650.0f, 8325.0f,
	-35100.0f, 92200.0f, -116500.0f, 93125.0f,
	450.0f, -3000.0f, 12800.0f, -32600.0f,
	42050.0f, 27450.0f, -16800.0f, -43900.0f,
	14200.0f, 19700.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x09B0[1] = {
	{ nSYInterpKindCatrom, 19, 0.5f,
	  dStageSectorFile3_Sub_0x0700,
	  2647.659912109375f,
	  dStageSectorFile3_Sub_0x07FC,
	  dStageSectorFile3_Sub_0x0848 },
};

u32 dStageSectorFile3_Sub_0x09C8[16] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x09B0,
	aobjEvent32SetValRateBlock(0x008, 0),
	    0x00000000,
	    0x3B3ED022,
	aobjEvent32SetValRateBlock(0x008, 99),
	    0x3DF5C28F,
	    0x39B9E22F,
	aobjEvent32SetValBlock(0x008, 1100),
	    0x3EB33333,
	aobjEvent32SetTargetRate(0x008, 0),
	    0x39793B37,
	aobjEvent32SetValRateBlock(0x008, 1300),
	    0x3F800000,
	    0xB886161B,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0A08[4] = {
	aobjEvent32SetFlags(0x002, 969),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 1469),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0A18[4] = {
	aobjEvent32SetFlags(0x000, 969),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 1469),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x0A28[21] = {
	{ 26400.0f, 5400.0f, 0.0f },
	{ 16500.0f, 5400.0f, 0.0f },
	{ 1500.0f, 5400.0f, 0.0f },
	{ -3600.0f, 5400.0f, 0.0f },
	{ -4500.0f, 4500.0f, 0.0f },
	{ -3600.0f, 3900.0f, 0.0f },
	{ -1500.0f, 3900.0f, 0.0f },
	{ -600.0f, 3300.0f, 0.0f },
	{ -1500.0f, 2400.0f, 0.0f },
	{ -6000.0f, 2400.0f, 0.0f },
	{ -10500.0f, 2700.0f, 300.0f },
	{ -13200.0f, 3000.0f, 1500.0f },
	{ -14400.0f, 3000.0f, 3600.0f },
	{ -14400.0f, 1800.0f, 5700.0f },
	{ -13200.0f, 600.0f, 7500.0f },
	{ -9600.0f, -300.0f, 8400.0f },
	{ 1500.0f, -900.0f, 8400.0f },
	{ 8700.0f, -900.0f, 8400.0f },
	{ 13800.0f, -600.0f, 8400.0f },
	{ 17100.0f, -300.0f, 8400.0f },
	{ 15300.0f, -300.0f, 8400.0f },
};

f32 dStageSectorFile3_Sub_0x0B24[19] = {
	0.0f, 0.19356699287891388f, 0.2594299912452698f, 0.27818700671195984f,
	0.2929829955101013f, 0.32014599442481995f, 0.3349420130252838f, 0.35330599546432495f,
	0.41144099831581116f, 0.46984100341796875f, 0.5085710287094116f, 0.5403900146484375f,
	0.572039008140564f, 0.6047499775886536f, 0.6548849940299988f, 0.7983710169792175f,
	0.8912979960441589f, 0.9572330117225647f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x0B70[90] = {
	562500.0f, -1005000.0f, -173600.0f, 556100.0f,
	172225.0f, 83250.0f, -299100.0f, 462250.0f,
	-348400.0f, 112225.0f, 18000.0f, -61200.0f,
	75500.0f, -41900.0f, 10225.0f, 1125.0f,
	-4800.0f, 5650.0f, 0.0f, 625.0f,
	18000.0f, -36000.0f, 7200.0f, 10800.0f,
	2600.0f, 1125.0f, 300.0f, -2000.0f,
	-1400.0f, 2600.0f, 11700.0f, -6000.0f,
	-500.0f, 2500.0f, 625.0f, 33525.0f,
	-89700.0f, 28700.0f, 41700.0f, 8325.0f,
	9225.0f, -12000.0f, -22750.0f, 18100.0f,
	22550.0f, 450.0f, -2400.0f, 9200.0f,
	-15100.0f, 15125.0f, 4275.0f, -9000.0f,
	4150.0f, -1000.0f, 7275.0f, 3825.0f,
	-9900.0f, 3600.0f, 3000.0f, 5700.0f,
	4725.0f, -900.0f, -2500.0f, 2100.0f,
	6225.0f, 65025.0f, -45900.0f, 49900.0f,
	-17800.0f, 9650.0f, 327150.0f, -723600.0f,
	121800.0f, 306900.0f, 60875.0f, 8325.0f,
	-35100.0f, 92200.0f, -116500.0f, 93125.0f,
	450.0f, -3000.0f, 12800.0f, -32600.0f,
	42050.0f, 27450.0f, -16800.0f, -43900.0f,
	14200.0f, 19700.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0CD8[1] = {
	{ nSYInterpKindCatrom, 19, 0.5f,
	  dStageSectorFile3_Sub_0x0A28,
	  2583.08740234375f,
	  dStageSectorFile3_Sub_0x0B24,
	  dStageSectorFile3_Sub_0x0B70 },
};

u32 dStageSectorFile3_Sub_0x0CF0[7] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0CD8,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 2499),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x0D0C[1] = {
	NULL,
};

/* --- Arwing 4 @ 0x0D10 --- */
GRSectorDesc dStageSectorFile3_Arwing4SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0E10,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0E98,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x0EA0,
	NULL,
	NULL,
};

Vec3f dStageSectorFile3_Sub_0x0D40[7] = {
	{ 2100.0f, 21000.0f, 0.0f },
	{ 1500.0f, 12600.0f, 0.0f },
	{ 900.0f, 4200.0f, 0.0f },
	{ -1500.0f, 1200.0f, 0.0f },
	{ -3900.0f, 4200.0f, 0.0f },
	{ -4500.0f, 12600.0f, 0.0f },
	{ -5100.0f, 21000.0f, 0.0f },
};

f32 dStageSectorFile3_Sub_0x0D94[5] = {
	0.0f, 0.3328480124473572f, 0.5f, 0.6671519875526428f,
	1.0f,
};

f32 dStageSectorFile3_Sub_0x0DA8[20] = {
	9000.0f, 0.0f, -49200.0f, 0.0f,
	78800.0f, 1000.0f, 0.0f, 29200.0f,
	-62400.0f, 38600.0f, 1000.0f, -4000.0f,
	35200.0f, 0.0f, 6400.0f, 9000.0f,
	-36000.0f, 4800.0f, 62400.0f, 38600.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x0DF8[1] = {
	{ nSYInterpKindBezier, 5, 0.0f,
	  dStageSectorFile3_Sub_0x0D40,
	  757.4298095703125f,
	  dStageSectorFile3_Sub_0x0D94,
	  dStageSectorFile3_Sub_0x0DA8 },
};

u32 dStageSectorFile3_Sub_0x0E10[34] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x0DF8,
	aobjEvent32SetVal0Rate(0x001, 0),
	    0x3F490FDB,
	aobjEvent32SetValRate(0x008, 0),
	    0x00000000,
	    0x3BC68E56,
	aobjEvent32SetValAfterBlock(0x006, 0),
	    0xBFC90FDB,
	    0x00000000,
	aobjEvent32SetValRate(0x008, 199),
	    0x3EE66666,
	    0x39A0781A,
	aobjEvent32SetValRateBlock(0x001, 149),
	    0x00000000,
	    0xBAABDBFA,
	aobjEvent32SetVal(0x001, 450),
	    0x00000000,
	aobjEvent32Wait(50),
	aobjEvent32SetValBlock(0x008, 350),
	    0x3F0CCCCD,
	aobjEvent32SetTargetRate(0x008, 0),
	    0x3A1206C4,
	aobjEvent32SetValRate(0x008, 200),
	    0x3F800000,
	    0x3B461029,
	aobjEvent32Wait(50),
	aobjEvent32SetTargetRate(0x001, 0),
	    0x3B56A842,
	aobjEvent32SetVal0RateBlock(0x001, 100),
	    0x3F490FDB,
	aobjEvent32SetValBlock(0x001, 50),
	    0x3F490FDB,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0E98[2] = {
	aobjEvent32SetFlags(0x002, 749),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x0EA0[2] = {
	aobjEvent32SetFlags(0x000, 749),
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x0EA8[2] = {
	NULL,
	NULL,
};

/* --- Arwing 5 @ 0x0EB0 --- */
GRSectorDesc dStageSectorFile3_Arwing5SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x101C,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1044,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1054,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x11A0,
};

Vec3f dStageSectorFile3_Sub_0x0EE0[10] = {
	{ 20400.0f, -1961.7210693359375f, -13800.0f },
	{ 17700.0f, -1170.0f, -16800.0f },
	{ 8100.0f, 1925.825927734375f, -13500.0f },
	{ 1200.0f, 4229.9306640625f, -7200.0f },
	{ -1800.0f, 4350.0f, 1800.0f },
	{ -2400.0f, 687.4320068359375f, 11609.7177734375f },
	{ -6000.0f, 3450.0f, 16500.0f },
	{ -9300.0f, 10350.0f, 18522.0f },
	{ -12300.0f, 13141.6142578125f, 19200.0f },
	{ -12000.0f, 9033.228515625f, 17855.998046875f },
};

f32 dStageSectorFile3_Sub_0x0F58[8] = {
	0.0f, 0.17871299386024475f, 0.34133198857307434f, 0.5018240213394165f,
	0.6784700155258179f, 0.7950199842453003f, 0.9281859993934631f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x0F78[35] = {
	281585.34375f, -689324.125f, 218790.546875f, 252024.984375f,
	46248.0625f, 8671.3515625f, -87.383056640625f, -35329.8828125f,
	11303.513671875f, 109324.7890625f, 20946.73046875f, -52803.50390625f,
	26281.693359375f, 17057.9140625f, 93882.390625f, 415454.59375f,
	-741310.4375f, 125112.46875f, 160528.171875f, 105365.21875f,
	50827.0703125f, -183400.53125f, 213021.1875f, -93165.828125f,
	65150.0f, 175792.34375f, -362685.0625f, 76689.09375f,
	96912.625f, 52431.90625f, 43131.98046875f, -13241.78125f,
	-69123.6875f, 2722.39892578125f, 39140.9375f,
};

SYInterpDesc dStageSectorFile3_Sub_0x1004[1] = {
	{ nSYInterpKindCatrom, 8, 0.5f,
	  dStageSectorFile3_Sub_0x0EE0,
	  1991.1732177734375f,
	  dStageSectorFile3_Sub_0x0F58,
	  dStageSectorFile3_Sub_0x0F78 },
};

u32 dStageSectorFile3_Sub_0x101C[10] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x1004,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 379),
	    0x3F800000,
	aobjEvent32SetVal(0x008, 920),
	    0x3F800000,
	aobjEvent32Wait(20),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1044[4] = {
	aobjEvent32SetFlags(0x002, 39),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 299),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1054[4] = {
	aobjEvent32SetFlags(0x000, 39),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 299),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x1064[10] = {
	{ 20718.0f, -1544.6727294921875f, -14358.2958984375f },
	{ 17700.0f, -570.0f, -16800.0f },
	{ 8091.00048828125f, 2525.825927734375f, -13230.0f },
	{ 1500.0f, 4646.97900390625f, -7218.296875f },
	{ -1575.0f, 4758.0f, 1788.0f },
	{ -2868.0f, 1278.0f, 11388.0f },
	{ -6162.0f, 3855.0f, 16116.0f },
	{ -9800.3671875f, 10412.3251953125f, 18274.12890625f },
	{ -12342.0f, 13242.94140625f, 18764.361328125f },
	{ -11245.265625f, 9516.232421875f, 17096.46484375f },
};

f32 dStageSectorFile3_Sub_0x10DC[8] = {
	0.0f, 0.18448899686336517f, 0.3432689905166626f, 0.5079020261764526f,
	0.6853119730949402f, 0.7981439828872681f, 0.9325929880142212f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x10FC[35] = {
	286654.8125f, -686744.5f, 193913.75f, 262893.4375f,
	49245.30859375f, 4064.673828125f, 7454.42578125f, -2595.8046875f,
	-24898.70703125f, 105962.75f, 28175.62109375f, -71262.96875f,
	25134.625f, 32583.01953125f, 89987.359375f, 343173.25f,
	-606339.5625f, 73826.0f, 147819.171875f, 104617.703125f,
	30892.029296875f, -131553.75f, 190994.25f, -103731.1875f,
	63096.546875f, 155721.78125f, -319264.8125f, 45077.1875f,
	105806.7734375f, 49697.8828125f, 36781.5390625f, -1861.929931640625f,
	-67879.203125f, -2890.9716796875f, 37038.796875f,
};

SYInterpDesc dStageSectorFile3_Sub_0x1188[1] = {
	{ nSYInterpKindCatrom, 8, 0.5f,
	  dStageSectorFile3_Sub_0x1064,
	  1943.7869873046875f,
	  dStageSectorFile3_Sub_0x10DC,
	  dStageSectorFile3_Sub_0x10FC },
};

u32 dStageSectorFile3_Sub_0x11A0[9] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x1188,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 379),
	    0x3F800000,
	aobjEvent32SetValBlock(0x008, 20),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x11C4[3] = {
	NULL,
	NULL,
	NULL,
};

/* --- Arwing 7 @ 0x11D0 --- */
GRSectorDesc dStageSectorFile3_Arwing7SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x133C,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1360,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1370,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x14E0,
};

Vec3f dStageSectorFile3_Sub_0x1200[10] = {
	{ 7500.0f, 5700.0f, 11100.0f },
	{ 8100.0f, 5100.0f, 13500.0f },
	{ 4200.0f, 3300.0f, 8100.0f },
	{ -300.0f, 2100.0f, 300.0f },
	{ -3600.0f, 2400.0f, -6300.0f },
	{ -5700.0f, 3600.0f, -10200.0f },
	{ -8100.0f, 6000.0f, -13800.0f },
	{ -10200.0f, 10200.0f, -16200.0f },
	{ -12000.0f, 15600.0f, -18000.0f },
	{ -11700.0f, 16800.0f, -17400.0f },
};

f32 dStageSectorFile3_Sub_0x1278[8] = {
	0.0f, 0.1562969982624054f, 0.3617140054702759f, 0.5288000106811523f,
	0.632893979549408f, 0.7452419996261597f, 0.8648959994316101f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x1298[35] = {
	119025.0f, -364800.0f, 226350.0f, 82800.0f,
	7125.0f, 42525.0f, -87300.0f, -62400.0f,
	111400.0f, 70500.0f, 6525.0f, -5700.0f,
	-28500.0f, -7700.0f, 74725.0f, 20250.0f,
	-53700.0f, 93650.0f, -74700.0f, 39350.0f,
	3825.0f, -2400.0f, -10450.0f, 11900.0f,
	24850.0f, 1800.0f, -8400.0f, 9500.0f,
	4100.0f, 27725.0f, 89100.0f, -135000.0f,
	-58200.0f, 82500.0f, 34725.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x1324[1] = {
	{ nSYInterpKindCatrom, 8, 0.5f,
	  dStageSectorFile3_Sub_0x1200,
	  1475.3702392578125f,
	  dStageSectorFile3_Sub_0x1278,
	  dStageSectorFile3_Sub_0x1298 },
};

u32 dStageSectorFile3_Sub_0x133C[9] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x1324,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 379),
	    0x3F800000,
	aobjEvent32SetValBlock(0x008, 20),
	    0x3F800000,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1360[4] = {
	aobjEvent32SetFlags(0x002, 79),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 259),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1370[4] = {
	aobjEvent32SetFlags(0x000, 79),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 259),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x1380[11] = {
	{ 12900.0f, 10500.0f, 18900.0f },
	{ 11400.0f, 9000.0f, 19200.0f },
	{ 6900.0f, 5700.0f, 13800.0f },
	{ 3900.0f, 3900.0f, 8100.0f },
	{ -300.0f, 2700.0f, 300.0f },
	{ -3300.0f, 2400.0f, -6900.0f },
	{ -6300.0f, 3300.0f, -9900.0f },
	{ -8100.0f, 8100.0f, -14100.0f },
	{ -9600.0f, 9900.0f, -16500.0f },
	{ -12900.0f, 15900.0f, -18300.0f },
	{ -14700.0f, 20100.0f, -17700.0f },
};

f32 dStageSectorFile3_Sub_0x1404[9] = {
	0.0f, 0.1472260057926178f, 0.27401798963546753f, 0.4432060122489929f,
	0.591077983379364f, 0.6751769781112671f, 0.8009099960327148f, 0.8656690120697021f,
	1.0f,
};

f32 dStageSectorFile3_Sub_0x1428[40] = {
	150750.0f, -368400.0f, 111000.0f, 140100.0f,
	23625.0f, 28350.0f, -54000.0f, 103200.0f,
	-67100.0f, 57075.0f, 32850.0f, -71700.0f,
	-50950.0f, 99800.0f, 67525.0f, 36225.0f,
	-45000.0f, -59550.0f, 29800.0f, 77525.0f,
	94725.0f, -191100.0f, 189000.0f, -101800.0f,
	39000.0f, 143550.0f, -296700.0f, 59750.0f,
	90800.0f, 29825.0f, 144225.0f, -273600.0f,
	235950.0f, -105600.0f, 27225.0f, 125325.0f,
	-267300.0f, 29100.0f, 121200.0f, 28200.0f,
};

SYInterpDesc dStageSectorFile3_Sub_0x14C8[1] = {
	{ nSYInterpKindCatrom, 9, 0.5f,
	  dStageSectorFile3_Sub_0x1380,
	  1762.201416015625f,
	  dStageSectorFile3_Sub_0x1404,
	  dStageSectorFile3_Sub_0x1428 },
};

u32 dStageSectorFile3_Sub_0x14E0[9] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x14C8,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 379),
	    0x3F800000,
	aobjEvent32SetValBlock(0x008, 20),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1504[3] = {
	NULL,
	NULL,
	NULL,
};

/* --- Arwing 6 @ 0x1510 --- */
GRSectorDesc dStageSectorFile3_Arwing6SectorDesc = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1808,
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1824,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1834,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1B0C,
};

Vec3f dStageSectorFile3_Sub_0x1540[21] = {
	{ -7896.00048828125f, 19815.0f, -18704.99609375f },
	{ -7833.0f, 19755.0f, -18810.0f },
	{ -6870.0f, 17805.0f, -18486.0f },
	{ -5970.0f, 15915.0f, -18056.99609375f },
	{ -5025.0f, 13920.0f, -17505.0f },
	{ -4260.0f, 12180.0f, -16965.0f },
	{ -3405.0f, 10275.0f, -16305.0f },
	{ -2640.0f, 8445.0f, -15540.0f },
	{ -1965.0f, 6615.0f, -14580.0f },
	{ -1440.0f, 4800.0f, -13305.0f },
	{ -1140.0f, 3234.143310546875f, -11565.0f },
	{ -1020.0f, 2508.525390625f, -9870.0f },
	{ -975.0f, 2380.7216796875f, -8655.0f },
	{ -960.0f, 2366.97705078125f, -6885.0f },
	{ -1035.0f, 2370.0f, 855.0f },
	{ -1575.0f, 2715.0f, 4080.0f },
	{ -3075.0f, 4425.0f, 7410.0f },
	{ -5445.0f, 7095.0f, 10650.0f },
	{ -8325.0f, 10470.0f, 13650.0f },
	{ -10980.0f, 13740.0f, 15915.0f },
	{ -10755.0f, 13635.0f, 15180.0f },
};

f32 dStageSectorFile3_Sub_0x163C[19] = {
	0.0f, 0.040233999490737915f, 0.07933200150728226f, 0.12096399813890457f,
	0.15711699426174164f, 0.1971849948167801f, 0.23608900606632233f, 0.27588900923728943f,
	0.31766000390052795f, 0.36094799637794495f, 0.39489099383354187f, 0.41734498739242554f,
	0.4497379958629608f, 0.5913659930229187f, 0.6520199775695801f, 0.7260869741439819f,
	0.8144069910049438f, 0.912443995475769f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x1688[90] = {
	12087.1123046875f, -31753.470703125f, 12572.93359375f, 10883.0478515625f,
	1427.982177734375f, 98.03170776367188f, -180.0924072265625f, 1511.070556640625f,
	-1241.1707763671875f, 5217.6064453125f, 496.11883544921875f, -876.585205078125f,
	-2848.384033203125f, 2841.953369140625f, 5405.44775390625f, 666.8080444335938f,
	-1413.3560791015625f, 4378.52197265625f, -3830.96240234375f, 5018.55078125f,
	225.5625f, -492.75f, -1690.5f, 2306.25f,
	4819.5625f, 34.3125f, -33.0f, 714.875f,
	-760.75f, 5168.125f, 45.5625f, 35.25f,
	117.0f, 156.75f, 5123.5625f, 207.37030029296875f,
	-69.78656005859375f, -923.8111572265625f, 1197.2806396484375f, 5478.125f,
	1528.797607421875f, -2371.75439453125f, -4564.3837890625f, 4303.294921875f,
	5889.17822265625f, 647.5491333007812f, -1540.1297607421875f, 70.6220703125f,
	-1401.048095703125f, 4785.13330078125f, 3268.17236328125f, -6988.7978515625f,
	9586.2216796875f, -5946.09375f, 2562.1259765625f, 73338.2265625f,
	-87797.546875f, 53251.2109375f, -16150.240234375f, 2481.6279296875f,
	275454.03125f, -575792.875f, 134892.65625f, 173859.171875f,
	25123.28125f, 56590.0f, -143050.921875f, 178767.875f,
	-111578.6015625f, 33536.26953125f, 525.375f, -2899.5f,
	982.5f, 8606.5f, 14264.625f, 542.8125f,
	-2538.75f, -2500.75f, 11640.0f, 21479.5f,
	3603.375f, -7561.5f, -15395.25f, 19206.25f,
	28622.8125f, 57180.375f, -67555.5f, -60290.75f,
	47263.25f, 28475.6875f,
};

SYInterpDesc dStageSectorFile3_Sub_0x17F0[1] = {
	{ nSYInterpKindCatrom, 19, 0.5f,
	  dStageSectorFile3_Sub_0x1540,
	  1821.986572265625f,
	  dStageSectorFile3_Sub_0x163C,
	  dStageSectorFile3_Sub_0x1688 },
};

u32 dStageSectorFile3_Sub_0x1808[7] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x17F0,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 399),
	    0x3F800000,
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1824[4] = {
	aobjEvent32SetFlags(0x002, 79),
	aobjEvent32SetFlags(0x000, 61),
	aobjEvent32SetFlags(0x002, 259),
	aobjEvent32End(),
};

u32 dStageSectorFile3_Sub_0x1834[4] = {
	aobjEvent32SetFlags(0x000, 79),
	aobjEvent32SetFlags(0x002, 61),
	aobjEvent32SetFlags(0x000, 259),
	aobjEvent32End(),
};

Vec3f dStageSectorFile3_Sub_0x1844[21] = {
	{ -7971.00048828125f, 20415.0f, -18099.00390625f },
	{ -7950.0f, 20355.0f, -18201.0f },
	{ -7071.0f, 18405.0f, -17987.998046875f },
	{ -6213.0f, 16515.0f, -17672.998046875f },
	{ -5253.0f, 14415.0f, -17196.0f },
	{ -4410.0f, 12525.0f, -16662.0f },
	{ -3615.0f, 10830.0f, -16035.0f },
	{ -2832.0f, 9045.0f, -15348.0f },
	{ -2133.0f, 7200.0f, -14490.0f },
	{ -1584.0240478515625f, 5390.7568359375f, -13255.2607421875f },
	{ -1233.0f, 3840.0f, -11555.9970703125f },
	{ -1061.9520263671875f, 3080.72412109375f, -9837.302734375f },
	{ -986.9519653320312f, 2957.52001953125f, -8759.7060546875f },
	{ -960.0f, 2940.0f, -6885.0f },
	{ -1035.0f, 2970.0f, 855.0f },
	{ -1575.0f, 3315.0f, 4080.0f },
	{ -3180.0f, 5025.0f, 7410.0f },
	{ -5858.9970703125f, 7695.0f, 10650.0f },
	{ -8997.0f, 11070.0f, 13650.0f },
	{ -12015.0029296875f, 14340.0f, 15915.0f },
	{ -11895.0029296875f, 14235.0f, 15180.0f },
};

f32 dStageSectorFile3_Sub_0x1940[19] = {
	0.0f, 0.03906499966979027f, 0.07722000032663345f, 0.12006799876689911f,
	0.15891100466251373f, 0.1947930008172989f, 0.232354998588562f, 0.271481990814209f,
	0.3125939965248108f, 0.35499298572540283f, 0.38940200209617615f, 0.409263014793396f,
	0.4433470070362091f, 0.5840200185775757f, 0.6442819833755493f, 0.7186099886894226f,
	0.8092290163040161f, 0.9092029929161072f, 1.0f,
};

f32 dStageSectorFile3_Sub_0x198C[90] = {
	11551.279296875f, -30424.294921875f, 12155.763671875f, 10378.125f,
	1350.673095703125f, 229.07289123535156f, -347.6414794921875f, 2282.886962890625f,
	-1661.28369140625f, 5011.54345703125f, 588.4622192382812f, -1209.7706298828125f,
	-2960.469482421875f, 3676.3671875f, 5514.57861328125f, 15.704609870910645f,
	-51.50969696044922f, 462.9315185546875f, -1346.5283203125f, 5609.173828125f,
	209.0253448486328f, -479.94085693359375f, 2018.7763671875f, -1902.34130859375f,
	4689.775390625f, 46.013145446777344f, -45.270938873291016f, -97.37640380859375f,
	494.736328125f, 4535.30029296875f, 139.64288330078125f, -69.58418273925781f,
	-183.97451782226562f, 538.9826049804688f, 4933.40234375f, 149.0290069580078f,
	-37.95056915283203f, -1006.8189697265625f, 1289.49072265625f, 5358.4716796875f,
	1206.286376953125f, -1850.1888427734375f, -4079.4501953125f, 3774.2509765625f,
	5752.21533203125f, 1168.7308349609375f, -2061.44970703125f, -1504.075439453125f,
	-1.1755369901657104f, 4803.123046875f, 5880.1328125f, -12053.5166015625f,
	13841.263671875f, -7643.5009765625f, 2405.1533203125f, 64231.95703125f,
	-72188.125f, 45241.3515625f, -14035.5166015625f, 2429.52490234375f,
	269884.625f, -562625.3125f, 127068.484375f, 173534.734375f,
	25679.17578125f, 57017.25f, -143521.5f, 179042.5f,
	-111693.25f, 33541.6875f, 505.3273620605469f, -2552.830810546875f,
	1334.71142578125f, 8743.3076171875f, 14386.6875f, 1164.3468017578125f,
	-4525.123046875f, -3081.1376953125f, 14390.576171875f, 22417.203125f,
	3090.9326171875f, -6514.6328125f, -15102.52734375f, 18652.76171875f,
	30365.86328125f, 62328.6640625f, -75203.9453125f, -63992.53125f,
	52141.1171875f, 30492.40625f,
};

SYInterpDesc dStageSectorFile3_Sub_0x1AF4[1] = {
	{ nSYInterpKindCatrom, 19, 0.5f,
	  dStageSectorFile3_Sub_0x1844,
	  1834.3690185546875f,
	  dStageSectorFile3_Sub_0x1940,
	  dStageSectorFile3_Sub_0x198C },
};

u32 dStageSectorFile3_Sub_0x1B0C[7] = {
	aobjEvent32SetInterp(0, 0x008),
	(u32)dStageSectorFile3_Sub_0x1AF4,
	aobjEvent32SetValBlock(0x008, 0),
	    0x00000000,
	aobjEvent32SetValBlock(0x008, 399),
	    0x3F800000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1B28[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1B34,
};

u32 dStageSectorFile3_Sub_0x1B34[17] = {
	aobjEvent32SetValAfterBlock(0x380, 0),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x40200000,
	    0x40200000,
	    0x40200000,
	aobjEvent32SetValAfterBlock(0x380, 2),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1B78[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1B84,
};

u32 dStageSectorFile3_Sub_0x1B84[24] = {
	aobjEvent32SetVal0RateBlock(0x380, 0),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32SetVal0RateBlock(0x380, 5),
	    0x40200000,
	    0x40200000,
	    0x40200000,
	aobjEvent32SetValRateBlock(0x380, 3),
	    0x3727C5AC,
	    0xBE99999B,
	    0x3727C5AC,
	    0xBE99999B,
	    0x3727C5AC,
	    0xBE99999B,
	aobjEvent32SetVal0RateBlock(0x380, 2),
	    0x3F800000,
	    0x3F800000,
	    0x3F800000,
	aobjEvent32SetVal0RateBlock(0x380, 2),
	    0x3727C5AC,
	    0x3727C5AC,
	    0x3727C5AC,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1BE4[3] = {
	NULL,
	NULL,
	NULL,
};

/* Vtx[6] @ 0x1BF0 (96 bytes) — referenced by gsSPVertex at
 * AnimJoint_0x1C50+0x90 (chain pointer at +0x94 → Sub_0x1BF0). Was
 * previously split as `Sub_0x1BF0` (NULL ptr) + `Sub_0x1BF4` (raw u32[23]). */
Vtx dStageSectorFile3_Sub_0x1BF0[6] = {
	#include <StageSectorFile3/Sub_0x1BF0.vtx.inc.c>
};

/* Gfx[27] @ 0x1C50 — ArwingLaser weapon DL referenced as WPAttributes.data
 * from dGRSectorMap_ArwingLaser{2D,3D}_WeaponAttributes (file 262). */
Gfx dStageSectorFile3_AnimJoint_0x1C50[27] = {
	#include <StageSectorFile3/AnimJoint_0x1C50.dl.inc.c>
};

AObjEvent32 *dStageSectorFile3_Sub_0x1D28[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1D34,
};

u32 dStageSectorFile3_Sub_0x1D34[5] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x00000000,
	aobjEvent32SetVal0RateBlock(0x004, 89),
	    0xC0C90FDB,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1D48[3] = {
	NULL,
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1D54,
};

u32 dStageSectorFile3_Sub_0x1D54[18] = {
	aobjEvent32SetVal0RateBlock(0x004, 0),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x004, 29),
	    0xC0490FDB,
	    0xBDA4F950,
	aobjEvent32SetVal0RateBlock(0x004, 10),
	    0xC0490FDB,
	aobjEvent32SetValBlock(0x004, 80),
	    0xC0490FDB,
	aobjEvent32SetTargetRate(0x004, 0),
	    0xBCC5F7FC,
	aobjEvent32SetValRateBlock(0x004, 50),
	    0xC0C90FDB,
	    0xBD3DA72E,
	aobjEvent32SetValRateBlock(0x004, 10),
	    0xC0C90FDB,
	    0xBC050481,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1D9C[2] = {
	NULL,
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1DA4,
};

u32 dStageSectorFile3_Sub_0x1DA4[7] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,
	aobjEvent32SetVal0RateBlock(0x020, 29),
	    0xC1F00000,
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1DC0[1] = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1DC4,
};

u32 dStageSectorFile3_Sub_0x1DC4[7] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,
	aobjEvent32SetVal0RateBlock(0x020, 29),
	    0x41F00000,
	aobjEvent32SetVal0RateBlock(0x020, 30),
	    0x00000000,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1DE0[1] = {
	(AObjEvent32 *)dStageSectorFile3_Sub_0x1DE4,
};

u32 dStageSectorFile3_Sub_0x1DE4[6] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,
	aobjEvent32SetValRateBlock(0x020, 119),
	    0x468ECCEB,
	    0x43952514,
	aobjEvent32End(),
};

AObjEvent32 *dStageSectorFile3_Sub_0x1DFC[1] = {
	NULL,
};
