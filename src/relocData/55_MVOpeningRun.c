/* relocData file 55: MVOpeningRun */
/* Inlined block layout - edit this file directly. The .inc.c
 * files referenced below live under build/src/relocData/ and
 * are regenerated from the baserom by tools/extractRelocInc.py
 * at extract time. */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* Forward decls auto-added/hoisted by hoistExterns.py */
extern u32 dMVOpeningRun_Donkey_AnimJoint[22];
extern u32 dMVOpeningRun_Fox_AnimJoint[];
extern u32 dMVOpeningRun_Samus_AnimJoint[];

extern u32 dMVOpeningRun_Mario_AnimJoint[];
extern u32 dMVOpeningRun_Link_AnimJoint[];
extern u32 dMVOpeningRun_Yoshi_AnimJoint[];
extern u32 dMVOpeningRun_Kirby_AnimJoint[];
extern u32 dMVOpeningRun_Pikachu_AnimJoint[];

/* Intern reloc chain head — fixRelocChain rewrites this 4-byte slot at
 * link time with the chain-encoded pointer to Mario_AnimJoint (and the
 * forward chain link to the next entry). The intern chain threads
 * through every chain pointer in this file. */
AObjEvent32 *dMVOpeningRun_chain_head[1] = { (AObjEvent32 *)dMVOpeningRun_Mario_AnimJoint };

u32 dMVOpeningRun_Mario_AnimJoint[43] = {
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 0),
	    0xC48711A8,  /* -1080.5517578125f */
	    0x428D3F9B,  /* 70.62422943115234f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 30),
	    0x428AE259,  /* 69.44208526611328f */
	    0xBFA38C2A,  /* -1.2777149677276611f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 25),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX, 0),
	    0xC4320682,  /* -712.1016845703125f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX, 40),
	    0xC4320682,  /* -712.1016845703125f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 35),
	    0xC34F44CF,  /* -207.26878356933594f */
	    0x400469F8,  /* 2.068967819213867f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 25),
	    0xC4320682,  /* -712.1016845703125f */
	    0xBE4311A0,  /* -0.19049692153930664f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 15),
	    0x432CE3F6,  /* 172.89047241210938f */
	    0x4202B7E1,  /* 32.679569244384766f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 30),
	    0x449DE9F8,  /* 1263.3115234375f */
	    0x412241E6,  /* 10.141088485717773f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX, 15),
	    0xC433EE2E,  /* -719.7215576171875f */
	    0xBEA70C17,  /* -0.3262641131877899f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 10),
	    0xC4341088,  /* -720.25830078125f */
	    0xBD07B404,  /* -0.03313066065311432f */
	aobjEvent32Wait(5),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ, 95),
	    0x44B410DA,  /* 1440.526611328125f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX, 5),
	    0xC4340DFC,  /* -720.218505859375f */
	    0xC0E6F653,  /* -7.217568874359131f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX, 85),
	    0xC4AB3ADD,  /* -1369.8394775390625f */
	aobjEvent32End(),
};

/* Chain-pointer slot @ 0x00B0 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Mario_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Fox_AnimJoint,
};


u32 dMVOpeningRun_Fox_AnimJoint[27] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAXYZ, 0),
	    0x44751C80,  /* 980.4453125f */
	    0x42B73E9A,  /* 91.62226867675781f */
	    0xC479C117,  /* -999.0170288085938f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAXYZ, 122),
	    0x44751C80,  /* 980.4453125f */
	    0x42B73E9A,  /* 91.62226867675781f */
	    0xC479C117,  /* -999.0170288085938f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAX, 0),
	    0xC0917851,  /* -4.5459370613098145f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 36),
	    0x44B054C1,  /* 1410.6485595703125f */
	    0xC07FA10E,  /* -3.9942049980163574f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x421608A0,  /* 37.5084228515625f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 39),
	    0xC264E819,  /* -57.22665786743164f */
	    0x3FFA8422,  /* 1.9571573734283447f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 36),
	    0x434B36BA,  /* 203.21377563476562f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 22),
	    0x443B3204,  /* 748.781494140625f */
	    0x42B73E9A,  /* 91.62226867675781f */
	aobjEvent32Wait(3),
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAZ, 19),
	    0xC2869203,  /* -67.2851791381836f */
	aobjEvent32End(),
};

/* Chain-pointer slot @ 0x0120 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Fox_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Donkey_AnimJoint,
};


u32 dMVOpeningRun_Donkey_AnimJoint[22] = {
	aobjEvent32SetVal(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 0),
	    0xC4231C23,  /* -652.4396362304688f */
	    0xC4DC5A37,  /* -1762.8192138671875f */
	aobjEvent32SetValAfter(AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAX, 135),
	    0xC4231C23,  /* -652.4396362304688f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 115),
	    0xC4DC5A37,  /* -1762.8192138671875f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x4286A12D,  /* 67.3147964477539f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 30),
	    0x42C5B9EB,  /* 98.86312103271484f */
	    0x419F6247,  /* 19.92298698425293f */
	aobjEvent32Wait(20),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX, 10),
	    0xC4231C23,  /* -652.4396362304688f */
	    0xC07FBE6B,  /* -3.995997190475464f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 35),
	    0xC450109D,  /* -832.2595825195312f */
	    0x43F2F0A9,  /* 485.8801574707031f */
	aobjEvent32End(),
};
PAD(4);

/* Chain-pointer slot @ 0x0180 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Donkey_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Samus_AnimJoint,
};


/* Raw data from file offset 0x0184 to 0x0220 (156 bytes) */
u32 dMVOpeningRun_Samus_AnimJoint[39] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAXYZ, 0),
	    0x4457C5A6,
	    0xC2E36497,
	    0xC481D6C6,
	aobjEvent32SetVal(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 62),
	    0x4457C5A6,
	    0xC2E36497,
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 45),
	    0xC481D6C6,
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x43169029,
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 11),
	    0xC33250F3,
	    0x421E6BD6,
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 20),
	    0x4325B98C,
	    0x3FBA6870,
	aobjEvent32Wait(6),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAX, 0),
	    0xBF3DC5E4,
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 14),
	    0x44468D97,
	    0xC1B629A1,
	    0xC2F4119B,
	    0x3F8D3293,
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAXYZ, 22),
	    0x422D6D7E,
	    0xC1125509,
	    0xC293F827,
	    0x3FBCB040,
	    0xC2EA4D5F,
	    0xC182DE10,
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 82),
	    0xC3C8FD00,
	    0x40A70EC2,
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 82),
	    0xC1C875B8,
	    0x00000000,
	aobjEvent32End(),
};

/* Chain-pointer slot @ 0x0220 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Samus_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Link_AnimJoint,
};

/* Raw data from file offset 0x0224 to 0x0328 (260 bytes) */
u32 dMVOpeningRun_Link_AnimJoint[65] = {
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAXYZ, 0),
	    0xC485242E,  /* -1065.130615234375f */
	    0x00000000,  /* 0.0f */
	    0xC4A2D1C9,  /* -1302.5557861328125f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 15),
	    0xC485242E,  /* -1065.130615234375f */
	    0x41764053,  /* 15.390704154968262f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAX, 10),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 18),
	    0xC4A2D1C9,  /* -1302.5557861328125f */
	    0xBEB23410,  /* -0.3480534553527832f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAZ, 10),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY, 50),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(AOBJ_FLAG_TRAY, 10),
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 30),
	    0xC3BA4642,  /* -372.54888916015625f */
	    0x4186A10D,  /* 16.828638076782227f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x42947AAC,  /* 74.23959350585938f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 34),
	    0x433ADC5F,  /* 186.86082458496094f */
	    0x4209BDA1,  /* 34.435184478759766f */
	aobjEvent32Wait(27),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX, 15),
	    0xC399EBC0,  /* -307.841796875f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAY, 5),
	    0x00000000,  /* 0.0f */
	    0xBE978E9F,  /* -0.29600998759269714f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 8),
	    0x430FB8D2,  /* 143.72195434570312f */
	    0xC1B3A4CD,  /* -22.455469131469727f */
	aobjEvent32Wait(3),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAY, 0),
	    0x422CB0B0,  /* 43.17254638671875f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAY, 38),
	    0x443501CA,  /* 724.0279541015625f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 50),
	    0xC3BA4642,  /* -372.54888916015625f */
	    0xBF25A671,  /* -0.6470709443092346f */
	    0xC48B71CD,  /* -1115.5562744140625f */
	    0xC1497020,  /* -12.589874267578125f */
	aobjEvent32Wait(33),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAY, 38),
	    0x00000000,  /* 0.0f */
	    0xC231727A,  /* -44.361793518066406f */
	aobjEvent32Wait(17),
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX, 50),
	    0xC3BA4642,  /* -372.54888916015625f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ, 80),
	    0xC4BA9EC6,  /* -1492.961669921875f */
	aobjEvent32Wait(21),
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAY, 0),
	    0xBD624CD7,  /* -0.055249061435461044f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 29),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 30),
	    0xC3BA4642,  /* -372.54888916015625f */
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};
PAD(8);
/* Chain-pointer slot @ 0x0330 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Link_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Yoshi_AnimJoint,
};

/* Raw data from file offset 0x0334 to 0x0394 (96 bytes) */
u32 dMVOpeningRun_Yoshi_AnimJoint[24] = {
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 0),
	    0xC4A5BB0F,  /* -1325.8455810546875f */
	    0xC49D9B0A,  /* -1260.844970703125f */
	aobjEvent32SetValAfterBlock(AOBJ_FLAG_TRAY, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 25),
	    0xC4A5BB0F,  /* -1325.8455810546875f */
	    0x408D9831,  /* 4.424828052520752f */
	    0xC49D9B0A,  /* -1260.844970703125f */
	    0x41AD5592,  /* 21.66678237915039f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 35),
	    0xC4848B63,  /* -1060.3558349609375f */
	    0x4052494B,  /* 3.2857234477996826f */
	    0x421CA5AE,  /* 39.16179656982422f */
	    0x41E0478B,  /* 28.03493309020996f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 55),
	    0x449DC991,  /* 1262.2989501953125f */
	    0x41201890,  /* 10.005996704101562f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX, 55),
	    0xC480C42C,  /* -1030.13037109375f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 65),
	    0xC4848B63,  /* -1060.3558349609375f */
	    0x44D57D4A,  /* 1707.915283203125f */
	aobjEvent32End(),
};
PAD(12);
/* Chain-pointer slot @ 0x03A0 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Yoshi_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Kirby_AnimJoint,
};

/* Raw data from file offset 0x03A4 to 0x0478 (212 bytes) */
u32 dMVOpeningRun_Kirby_AnimJoint[53] = {
	aobjEvent32SetVal(AOBJ_FLAG_TRAXYZ, 0),
	    0xC4B933F4,  /* -1481.62353515625f */
	    0x429A035A,  /* 77.00654602050781f */
	    0xC4CBFF8A,  /* -1631.985595703125f */
	aobjEvent32SetValAfter(AOBJ_FLAG_ROTXYZ | AOBJ_FLAG_SCAXYZ, 0),
	    0x00000000,  /* 0.0f */
	    0x3F9C61AA,  /* 1.2217304706573486f */
	    0x00000000,  /* 0.0f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	    0x3FC00000,  /* 1.5f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAY, 93),
	    0x429A035A,  /* 77.00654602050781f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAZ, 84),
	    0xC4B933F4,  /* -1481.62353515625f */
	    0xC4CBFF8A,  /* -1631.985595703125f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 21),
	    0xC4B933F4,  /* -1481.62353515625f */
	    0x3FD0D7DC,  /* 1.6315875053405762f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 43),
	    0x444F79B3,  /* 829.9015502929688f */
	    0x40F6CEBB,  /* 7.712735652923584f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAY, 53),
	    0x438FAF03,  /* 287.3672790527344f */
	    0x409F9333,  /* 4.986718654632568f */
	aobjEvent32Wait(12),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAX, 16),
	    0xC4B1A827,  /* -1421.2547607421875f */
	    0x3FC467D2,  /* 1.5344183444976807f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 25),
	    0xC4B156CC,  /* -1418.71240234375f */
	    0x3EB2D29F,  /* 0.34926316142082214f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAZ, 19),
	    0x4467B5FE,  /* 926.8436279296875f */
	    0x419E258C,  /* 19.768333435058594f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAXYZ, 19),
	    0xC4AFBC64,  /* -1405.88720703125f */
	    0xBDED7606,  /* -0.11594776809215546f */
	    0x43DA0672,  /* 436.05035400390625f */
	    0x4149F32B,  /* 12.621867179870605f */
	    0x44C5A328,  /* 1581.0986328125f */
	    0x425643A9,  /* 53.56607437133789f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAXYZ, 5),
	    0xC4B1AFD8,  /* -1421.4951171875f */
	    0x441392B0,  /* 590.2919921875f */
	    0x450A46DC,  /* 2212.4287109375f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAXYZ, 10),
	    0xC4B1AFD8,  /* -1421.4951171875f */
	    0x441392B0,  /* 590.2919921875f */
	    0x450A46DC,  /* 2212.4287109375f */
	aobjEvent32End(),
};
PAD(8);
/* Chain-pointer slot @ 0x0480 — points to the next AnimJoint in the chain. */
AObjEvent32 *dMVOpeningRun_Kirby_AnimJoint_chain[1] = {
	(AObjEvent32 *)dMVOpeningRun_Pikachu_AnimJoint,
};

/* Raw data from file offset 0x0484 to 0x0528 (164 bytes) */
u32 dMVOpeningRun_Pikachu_AnimJoint[38] = {
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAXYZ, 0),
	    0x4483C29C,  /* 1054.08154296875f */
	    0x42003289,  /* 32.04935073852539f */
	    0xC4471E03,  /* -796.4689331054688f */
	aobjEvent32SetVal(AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY, 78),
	    0x4483C29C,  /* 1054.08154296875f */
	    0x42003289,  /* 32.04935073852539f */
	aobjEvent32SetValBlock(AOBJ_FLAG_TRAZ, 63),
	    0xC4471E03,  /* -796.4689331054688f */
	aobjEvent32SetTargetRate(AOBJ_FLAG_TRAZ, 0),
	    0x422422D6,  /* 41.034019470214844f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAZ, 62),
	    0x4316C5C6,  /* 150.77255249023438f */
	    0x41A1D5A6,  /* 20.229320526123047f */
	aobjEvent32Wait(15),
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 47),
	    0x44257E5B,  /* 661.9743041992188f */
	    0xC191B2D0,  /* -18.212310791015625f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAY, 10),
	    0x00000000,  /* 0.0f */
	    0xBF3B1B10,  /* -0.7308816909790039f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 37),
	    0xC0135558,  /* -2.302083969116211f */
	aobjEvent32SetValRateBlock(AOBJ_FLAG_TRAXYZ, 29),
	    0x432426D2,  /* 164.15164184570312f */
	    0xBDA7D8B9,  /* -0.08195633441209793f */
	    0x00000000,  /* 0.0f */
	    0x3D2B7144,  /* 0.0418560653924942f */
	    0x44828CC5,  /* 1044.3990478515625f */
	    0x41C332EA,  /* 24.399860382080078f */
	aobjEvent32SetValRate(AOBJ_FLAG_TRAX, 26),
	    0x44245DDE,  /* 657.4666748046875f */
	    0x416D5C44,  /* 14.835025787353516f */
	aobjEvent32SetVal0Rate(AOBJ_FLAG_TRAZ, 31),
	    0x44957FDD,  /* 1195.9957275390625f */
	aobjEvent32SetVal0RateBlock(AOBJ_FLAG_TRAY, 26),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

PAD(12);

/* Texture data for sprite Wallpaper — 11 vertical tiles,
 * each 160x12 CI8 (1928 bytes incl. 8-byte alignment pad)
 * except tile 10 which is 160x10 CI8 (1608 bytes). The
 * bitmap array below points at each tile via its symbol so
 * the pointers stay symbolic across symbol shuffles. */
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile00_Tex_0x0000[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile00_Tex_0x0000.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile01_Tex_0x0788[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile01_Tex_0x0788.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile02_Tex_0x0F10[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile02_Tex_0x0F10.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile03_Tex_0x1698[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile03_Tex_0x1698.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile04_Tex_0x1E20[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile04_Tex_0x1E20.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile05_Tex_0x25A8[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile05_Tex_0x25A8.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile06_Tex_0x2D30[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile06_Tex_0x2D30.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile07_Tex_0x34B8[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile07_Tex_0x34B8.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile08_Tex_0x3C40[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile08_Tex_0x3C40.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x12 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile09_Tex_0x43C8[0x788] = {
	#include <MVOpeningRun/Wallpaper_tile09_Tex_0x43C8.tex.inc.c>
};
/* @tex fmt=CI8 dim=160x10 lut=dMVOpeningRun_palette_0x56C0 */
u8 dMVOpeningRun_Wallpaper_tile10_Tex_0x4B50[0x648] = {
	#include <MVOpeningRun/Wallpaper_tile10_Tex_0x4B50.tex.inc.c>
};

/* Palette: @ 0x56C0 (152 colors RGBA5551, used by the CI8 wallpaper).
 * The Sprite's `nTLUT=256` is a max-index hint, not the entry count. */
u16 dMVOpeningRun_palette_0x56C0[152] = {
	#include <MVOpeningRun/palette_0x56C0.palette.inc.c>
};

/* Sprite: Wallpaper */

/* Sprite: Wallpaper (160x120 ci8) */

Bitmap dMVOpeningRun_Wallpaper_bitmaps[] = {
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile00_Tex_0x0000, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile01_Tex_0x0788, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile02_Tex_0x0F10, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile03_Tex_0x1698, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile04_Tex_0x1E20, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile05_Tex_0x25A8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile06_Tex_0x2D30, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile07_Tex_0x34B8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile08_Tex_0x3C40, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile09_Tex_0x43C8, 12, 0 },
	{ 160, 160, 0, 0, dMVOpeningRun_Wallpaper_tile10_Tex_0x4B50, 10, 0 },
};

Sprite dMVOpeningRun_Wallpaper = {
	0, 0,
	160, 120,
	1.0f, 1.0f,
	0, 0,
	SP_OVERLAP | SP_TEXSHUF,
	4660,
	255, 255, 255, 255,
	0, 256,
	(int*)dMVOpeningRun_palette_0x56C0,
	0, 1,
	11, 156,
	11, 12,
	2, 1,
	(Bitmap*)dMVOpeningRun_Wallpaper_bitmaps,
	(Gfx*)0x00000000,
	(Gfx*)0x00000000,
	0, 0,
};
