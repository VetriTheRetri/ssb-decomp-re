/* relocData file 71: MVOpeningYamabuki — opening scene where the Pikachu
 * figure topples onto the carpet in the yellow room.
 *
 * Third-pass typing: the three `DObjDesc` arrays, the 53-entry wallpaper
 * `Bitmap` array, and the final `Sprite` struct are all real typed
 * declarations now. Every pointer field (`.dl`, `.buf`, `.bitmap`) with
 * a chain entry is written as a real C reference to its target symbol;
 * the companion 71_MVOpeningYamabuki.reloc file feeds `fixRelocChain` a
 * symbolic ptr/target list that overwrites those positions with the
 * chain-encoded form at link time.
 *
 * The remaining `u8`-wrapped blocks (the shared Tex pool, 7 DLs, 4 AnimJoint
 * scripts, and the 203 KB wallpaper texture tile pool) stay as raw byte
 * wrappers — their bytes are already regenerable from the ROM and their
 * internal structure (F3DEX2 streams, AObjEvent32 tracks, raw RGBA16
 * pixels) is best left as-is for now.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* ──────────────── Pre-region: texture pool + 7 display lists ──────────── */

/* Shared texture / palette / Vtx pool referenced by the 7 DLs below
 * (35,472 B). Each DL at 0x08A90.. pulls data out of this region via
 * SETTIMG / LOADTLUT / VTX commands. */
u8 dMVOpeningYamabuki_Tex_pool[0x8A90] = {
	#include <MVOpeningYamabuki/Tex_pool.tex.inc.c>
};

/* Gfx DL: DL_0x08A90 @ 0x8A90 (5 cmds) */
Gfx dMVOpeningYamabuki_DL_0x08A90[5] = {
	#include <MVOpeningYamabuki/DL_0x08A90.dl.inc.c>
};

/* Gfx DL: DL_0x08AB8 @ 0x8AB8 (30 cmds) */
Gfx dMVOpeningYamabuki_DL_0x08AB8[30] = {
	#include <MVOpeningYamabuki/DL_0x08AB8.dl.inc.c>
};

/* Gfx DL: DL_0x08BA8 @ 0x8BA8 (40 cmds) */
Gfx dMVOpeningYamabuki_DL_0x08BA8[40] = {
	#include <MVOpeningYamabuki/DL_0x08BA8.dl.inc.c>
};

/* Gfx DL: DL_0x08CE8 @ 0x8CE8 (98 cmds) */
Gfx dMVOpeningYamabuki_DL_0x08CE8[98] = {
	#include <MVOpeningYamabuki/DL_0x08CE8.dl.inc.c>
};

/* Gfx DL: DL_0x08FF8 @ 0x8FF8 (34 cmds) */
Gfx dMVOpeningYamabuki_DL_0x08FF8[34] = {
	#include <MVOpeningYamabuki/DL_0x08FF8.dl.inc.c>
};

/* Gfx DL: DL_0x09108 @ 0x9108 (40 cmds) */
Gfx dMVOpeningYamabuki_DL_0x09108[40] = {
	#include <MVOpeningYamabuki/DL_0x09108.dl.inc.c>
};

/* Gfx DL: DL_0x09248 @ 0x9248 (96 cmds) */
Gfx dMVOpeningYamabuki_DL_0x09248[96] = {
	#include <MVOpeningYamabuki/DL_0x09248.dl.inc.c>
};

/* ──────────────── Pikachu legs joint hierarchy ─────────────────────────── */

/* `llMVOpeningYamabukiLegsDObjDesc` — 19-joint DObjDesc tree. Entries 4,
 * 5, 7, 10, 11, 13 have their `.dl` fields pointing at the 7 DLs above;
 * the rest are null-dl hierarchy nodes. */

DObjDesc dMVOpeningYamabuki_LegsDObjDesc[20] = {
	{ 0, NULL, { 56.15043f, -29.66133f, -607.43524f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, NULL, { 522.5648f, 0.0f, -525.3599f }, { 0.0f, 0.41469f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, NULL, { -168.31274f, 138.55083f, 496.86102f }, { 0.0f, -0.020944f, 0.0f }, { 0.999999f, 1.0f, 0.999999f } },
	{ 3, NULL, { -0.099907f, 1149.8403f, -366.29163f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMVOpeningYamabuki_DL_0x08A90, { -0.000114f, 0.0f, 0.0f }, { 0.241375f, -0.027391f, -1.694158f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMVOpeningYamabuki_DL_0x08BA8, { 640.3021f, 0.0f, 0.0f }, { 0.0f, 0.0f, 1.322579f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, NULL, { 562.4227f, 12.692986f, 0.183249f }, { -8e-06f, -5e-06f, 1.003806f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)dMVOpeningYamabuki_DL_0x08CE8, { -0.000114f, -7e-06f, 0.0f }, { 0.045205f, 0.024147f, -2.374348f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, NULL, { -475.98587f, -459.01047f, -15.970173f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { -0.099907f, 1149.8403f, -673.55566f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 4, (void*)dMVOpeningYamabuki_DL_0x08FF8, { -0.000114f, 0.0f, -0.000114f }, { 0.407719f, 0.143131f, -1.803483f }, { 1.0f, 1.0f, 1.0f } },
	{ 5, (void*)dMVOpeningYamabuki_DL_0x09108, { 640.3021f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.231169f }, { 1.0f, 1.0f, 1.0f } },
	{ 6, NULL, { 562.35223f, 18.216934f, -1.564922f }, { 0.0f, 0.0f, 1.008399f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, (void*)dMVOpeningYamabuki_DL_0x09248, { -0.000114f, 2.9e-05f, 0.0f }, { -3.131045f, 3.144606f, 0.626922f }, { 1.0f, 1.0f, 1.0f } },
	{ 7, NULL, { -564.25714f, -408.75436f, 2.099419f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { 919.2105f, 514.5704f, -108.19203f }, { 0.0f, 0.0f, 0.0f }, { 5.000003f, 5.0f, 5.000003f } },
	{ 4, NULL, { -7.866493f, -415.9666f, 20.406769f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 3, NULL, { 553.44696f, 511.78116f, -445.38196f }, { 0.0f, 0.0f, 0.0f }, { 5.000003f, 5.0f, 5.000003f } },
	{ 4, NULL, { -114.84872f, -227.21042f, -60.610836f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(8);  /* tail pad after the DObjDesc array */

/* `llMVOpeningYamabukiLegsAnimJoint` — AObjEvent32 tracks driving the
 * leg joints (6,640 B). Fed to `gcAddAnimJointAll` in
 * `mvOpeningYamabukiMakeLegs()`. */
u32 dMVOpeningYamabuki_LegsAnimJoint[1660] = {
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x4C),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x64),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0xF0),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1F8),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x558),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x6DC),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0xAA8),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0xDF8),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0xF1C),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x125C),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x12E4),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x136C),
	aobjEvent32SetValAfter(0x070, 0),
	    0x42609A0A,  /* 56.150428771972656f */
	    0xC1ED4A67,  /* -29.66132926940918f */
	    0xC417DBDB,  /* -607.4352416992188f */
	aobjEvent32Wait(160),
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x052, 0),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x4493C90A,  /* 1182.282470703125f */
	    0xC4035707,  /* -525.3598022460938f */
	aobjEvent32SetValAfterBlock(0x025, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x050, 30),
	    0x44205C54,  /* 641.442626953125f */
	    0xC19AE977,  /* -19.363996505737305f */
	    0xC4035709,  /* -525.3599243164062f */
	    0xB6000000,  /* -1.9073486328125e-06f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetValRate(0x010, 30),
	    0x41A38A80,  /* 20.442626953125f */
	    0xC1A73333,  /* -20.899999618530273f */
	aobjEvent32SetVal0RateBlock(0x042, 30),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xC4035709,  /* -525.3599243164062f */
	aobjEvent32SetValRate(0x010, 30),
	    0xC41923AC,  /* -612.557373046875f */
	    0xC1A39997,  /* -20.449995040893555f */
	aobjEvent32SetVal0Rate(0x040, 100),
	    0xC4035709,  /* -525.3599243164062f */
	aobjEvent32SetVal0RateBlock(0x002, 30),
	    0x3F060A92,  /* 0.5235987901687622f */
	aobjEvent32SetVal0RateBlock(0x012, 30),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xC496D1D4,  /* -1206.55712890625f */
	aobjEvent32SetValBlock(0x012, 40),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xC496D1D4,  /* -1206.55712890625f */
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x070, 0),
	    0x41881F76,  /* 17.015361785888672f */
	    0x430A80A5,  /* 138.5025177001953f */
	    0x4403570D,  /* 525.3601684570312f */
	aobjEvent32SetValBlock(0x002, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x070, 30),
	    0xC2A4F5BF,  /* -82.47997283935547f */
	    0xC0F9CA8F,  /* -7.805976390838623f */
	    0x42EA7F12,  /* 117.24818420410156f */
	    0x3F3F5430,  /* 0.7473783493041992f */
	    0x43FAB7EE,  /* 501.43695068359375f */
	    0x3DB27E00,  /* 0.08715438842773438f */
	aobjEvent32SetValBlock(0x002, 15),
	    0x3D567750,  /* 0.05235987901687622f */
	aobjEvent32SetVal(0x002, 30),
	    0xBD567750,  /* -0.05235987901687622f */
	aobjEvent32Wait(15),
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC3A72075,  /* -334.2535705566406f */
	    0xC15A5C57,  /* -13.647543907165527f */
	    0x432C2272,  /* 172.13455200195312f */
	    0xBE82F340,  /* -0.25576210021972656f */
	    0x4404520E,  /* 529.2821044921875f */
	    0x4121D740,  /* 10.11505126953125f */
	aobjEvent32SetVal(0x002, 30),
	    0x3D567750,  /* 0.05235987901687622f */
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC3F5F402,  /* -491.90631103515625f */
	    0xC17D8129,  /* -15.844033241271973f */
	    0x42DB2690,  /* 109.5753173828125f */
	    0xBF3A6630,  /* -0.7281217575073242f */
	    0x444938DD,  /* 804.8884887695312f */
	    0xBEEB05C0,  /* -0.4590282440185547f */
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC44A64C6,  /* -809.5745849609375f */
	    0xC1301CCA,  /* -11.007028579711914f */
	    0x43164A78,  /* 150.2908935546875f */
	    0xBF1D55A0,  /* -0.6145877838134766f */
	    0x4400E0B8,  /* 515.51123046875f */
	    0xC1D3FC70,  /* -26.498260498046875f */
	aobjEvent32SetVal(0x002, 30),
	    0xBD567750,  /* -0.05235987901687622f */
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC44D8780,  /* -822.1171875f */
	    0xC12E282F,  /* -10.884810447692871f */
	    0x42B6467F,  /* 91.13768768310547f */
	    0xC0057554,  /* -2.0852861404418945f */
	    0x411F0D08,  /* 9.940681457519531f */
	    0x41844F48,  /* 16.538711547851562f */
	aobjEvent32SetValRate(0x070, 30),
	    0xC4A26C83,  /* -1299.3909912109375f */
	    0xC0D8205C,  /* -6.753950119018555f */
	    0x4261CFE4,  /* 56.45301818847656f */
	    0xBEFDB18D,  /* -0.4954952299594879f */
	    0x449D781B,  /* 1259.7532958984375f */
	    0x418FB9D6,  /* 17.965740203857422f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal(0x002, 55),
	    0xBD567750,  /* -0.05235987901687622f */
	aobjEvent32Wait(15),
	aobjEvent32SetVal0RateBlock(0x070, 40),
	    0xC4A1DC99,  /* -1294.8936767578125f */
	    0x4261CFE4,  /* 56.45301818847656f */
	    0x449E715D,  /* 1267.5426025390625f */
	aobjEvent32End(),
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF432E50,  /* -0.762425422668457f */
	    0x3B27B68B,  /* 0.002559098182246089f */
	    0xBDA962EE,  /* -0.08270822465419769f */
	    0x3960F023,  /* 0.00021451762586366385f */
	    0xBFCBDECE,  /* -1.5927369594573975f */
	    0x3B00FAD6,  /* 0.0019680759869515896f */
	aobjEvent32SetValRate(0x001, 16),
	    0xBE0801DB,  /* -0.13281957805156708f */
	    0x3D532A7F,  /* 0.05155419930815697f */
	aobjEvent32SetValRate(0x002, 20),
	    0xBDCBF238,  /* -0.09958308935165405f */
	    0xBC520B73,  /* -0.012820112518966198f */
	aobjEvent32SetValRateBlock(0x004, 14),
	    0xBFBA7D0A,  /* -1.4569408893585205f */
	    0x3CE20C8E,  /* 0.02759387716650963f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFB6A4D5,  /* -1.4269052743911743f */
	    0x3C783E17,  /* 0.015151522122323513f */
	aobjEvent32SetValRate(0x004, 7),
	    0xBFB11693,  /* -1.383501410484314f */
	    0x3C189B2C,  /* 0.009314339607954025f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBDAA7EBB,  /* -0.083249531686306f */
	    0x3D41DAF1,  /* 0.04732793942093849f */
	aobjEvent32SetValRate(0x001, 12),
	    0x3E274EF5,  /* 0.16338713467121124f */
	    0xBA9B7A2A,  /* -0.0011861969251185656f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBDE73896,  /* -0.11290089786052704f */
	    0xBC60425F,  /* -0.013687699101865292f */
	aobjEvent32SetValRate(0x002, 9),
	    0xBE623FA5,  /* -0.22094590961933136f */
	    0x3B912580,  /* 0.004429519176483154f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFAFE685,  /* -1.3742223978042603f */
	    0x3C156006,  /* 0.009117132052779198f */
	aobjEvent32SetValRateBlock(0x004, 6),
	    0xBFA9C6CB,  /* -1.3263791799545288f */
	    0x3C01EAB7,  /* 0.00792949553579092f */
	aobjEvent32SetValRateBlock(0x005, 1),
	    0x3E24B089,  /* 0.16082967817783356f */
	    0x3BFD9602,  /* 0.007738829590380192f */
	    0xBFA8B76C,  /* -1.3180975914001465f */
	    0xBCC0F73E,  /* -0.023555394262075424f */
	aobjEvent32SetValRate(0x004, 4),
	    0xBFC9FB35,  /* -1.5779787302017212f */
	    0xBD817DD7,  /* -0.0632283017039299f */
	aobjEvent32SetValRate(0x001, 8),
	    0x3E6635EA,  /* 0.22481504082679749f */
	    0xBC79CBBF,  /* -0.015246330760419369f */
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBE52A335,  /* -0.20570071041584015f */
	    0x3CA44A7A,  /* 0.020055044442415237f */
	aobjEvent32SetValRate(0x002, 12),
	    0x3D9114DE,  /* 0.07084058225154877f */
	    0xBCB41983,  /* -0.021984821185469627f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFD1BF88,  /* -1.638657569885254f */
	    0xBD6DEF81,  /* -0.058089736849069595f */
	aobjEvent32SetValRate(0x004, 7),
	    0xC000AA75,  /* -2.010403871536255f */
	    0xBD7DA2FF,  /* -0.06192302331328392f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3E530D55,  /* 0.2061055451631546f */
	    0xBCB6B82F,  /* -0.02230462245643139f */
	aobjEvent32SetValRate(0x001, 10),
	    0xBE131553,  /* -0.14363603293895721f */
	    0xBD18B353,  /* -0.03728039190173149f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0049AE0,  /* -2.0719528198242188f */
	    0xBD73ECF3,  /* -0.0595521442592144f */
	aobjEvent32SetValRate(0x004, 8),
	    0xC00DB58D,  /* -2.2142059803009033f */
	    0x3D01169F,  /* 0.03151571378111839f */
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3D34C50B,  /* 0.044133227318525314f */
	    0xBCF78F12,  /* -0.030219588428735733f */
	aobjEvent32SetValRate(0x002, 10),
	    0xBE51A511,  /* -0.20473124086856842f */
	    0xBB3EE4F1,  /* -0.0029128158930689096f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE3A4BE6,  /* -0.18193015456199646f */
	    0xBD20ADDE,  /* -0.03922831267118454f */
	aobjEvent32SetValRate(0x001, 13),
	    0xBEEB4A30,  /* -0.4595503807067871f */
	    0x3C50A8EC,  /* 0.012735586613416672f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC00B8A02,  /* -2.180298328399658f */
	    0x3D0EC01F,  /* 0.03485118970274925f */
	aobjEvent32SetValRate(0x004, 10),
	    0xBFF9CD5A,  /* -1.9515793323516846f */
	    0xBB755093,  /* -0.0037432059179991484f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBE525C3C,  /* -0.20542997121810913f */
	    0xBA4B72DC,  /* -0.0007760950829833746f */
	aobjEvent32SetValRate(0x002, 8),
	    0xBE559A92,  /* -0.20859745144844055f */
	    0x3BA81BA1,  /* 0.005130246747285128f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFF99D2A,  /* -1.9501087665557861f */
	    0x3C0AA6F9,  /* 0.008462660945951939f */
	aobjEvent32SetValRate(0x004, 11),
	    0xBFCAAD0D,  /* -1.5834060907363892f */
	    0x3D0AD577,  /* 0.03389498218894005f */
	aobjEvent32SetValRateBlock(0x003, 1),
	    0xBEE422C9,  /* -0.4455778896808624f */
	    0x3C842022,  /* 0.016128603368997574f */
	    0xBE4B9DA3,  /* -0.19884352385997772f */
	    0x3C47FA6B,  /* 0.012205700390040874f */
	aobjEvent32SetValRate(0x001, 11),
	    0xBB204951,  /* -0.0024457762483507395f */
	    0x3D5D5D57,  /* 0.05404409393668175f */
	aobjEvent32SetValRate(0x002, 16),
	    0x3B1BAACA,  /* 0.0023752921260893345f */
	    0xBC918AFE,  /* -0.017766471952199936f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFC6F6D7,  /* -1.5544079542160034f */
	    0x3CAFD646,  /* 0.021464478224515915f */
	aobjEvent32SetValRate(0x004, 10),
	    0xBFC10333,  /* -1.507910132408142f */
	    0x3C02536F,  /* 0.007954462431371212f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3D4B5E46,  /* 0.04965045303106308f */
	    0x3D436247,  /* 0.047701146453619f */
	aobjEvent32SetValRate(0x001, 16),
	    0x3E3EB7F4,  /* 0.18624860048294067f */
	    0x3B6FAC24,  /* 0.0036571109667420387f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBC90422A,  /* -0.017609674483537674f */
	    0xBCB255D6,  /* -0.0217694453895092f */
	aobjEvent32SetValRate(0x002, 11),
	    0xBE15E987,  /* -0.1463986486196518f */
	    0x3CBF0269,  /* 0.023316578939557076f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFBFF520,  /* -1.4996681213378906f */
	    0x3C04BC95,  /* 0.008101602084934711f */
	aobjEvent32SetValRateBlock(0x004, 6),
	    0xBFC3636A,  /* -1.5264713764190674f */
	    0xBD2D6C14,  /* -0.042339399456977844f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E410DC1,  /* 0.18852902948856354f */
	    0x39FD8016,  /* 0.0004835135187022388f */
	    0xBDF75C56,  /* -0.12078158557415009f */
	    0x3CE0E674,  /* 0.02745363861322403f */
	    0xBFC94A8E,  /* -1.5725877285003662f */
	    0xBD3BDC9E,  /* -0.04586469382047653f */
	aobjEvent32SetValRate(0x004, 10),
	    0xBFE6FD39,  /* -1.8046027421951294f */
	    0x3B74BC03,  /* 0.0037343509029597044f */
	aobjEvent32SetValRate(0x001, 13),
	    0xBE2E22D1,  /* -0.17005468904972076f */
	    0xBD4ADD13,  /* -0.04952723905444145f */
	aobjEvent32SetValRateBlock(0x002, 9),
	    0x3DC0C00B,  /* 0.09411629289388657f */
	    0xBBA0ACFB,  /* -0.004903433378785849f */
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3DB1C00A,  /* 0.08679206669330597f */
	    0xBC0BE1BD,  /* -0.008537706919014454f */
	aobjEvent32SetValRate(0x002, 17),
	    0xBE4BD6A7,  /* -0.19906102120876312f */
	    0x3C84DA34,  /* 0.01621732860803604f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFE68047,  /* -1.800789713859558f */
	    0xBAF107AC,  /* -0.001838912721723318f */
	aobjEvent32SetValRate(0x004, 9),
	    0xBFECB2C6,  /* -1.849205732345581f */
	    0x3BCEFDDF,  /* 0.006316884886473417f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE610DAE,  /* -0.21977874636650085f */
	    0xBD4AE22E,  /* -0.04953210800886154f */
	aobjEvent32SetValRate(0x001, 14),
	    0xBF1ED069,  /* -0.6203675866127014f */
	    0x3B574E56,  /* 0.0032853088341653347f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFEBBF61,  /* -1.8417779207229614f */
	    0x3C067C3A,  /* 0.008208328858017921f */
	aobjEvent32SetValRate(0x004, 45),
	    0xBFE5F746,  /* -1.7966086864471436f */
	    0xB98EE855,  /* -0.00027257451438345015f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBE38F77B,  /* -0.18063156306743622f */
	    0x3C91005D,  /* 0.01770036853849888f */
	aobjEvent32SetValRate(0x002, 38),
	    0xBE42B253,  /* -0.19013337790966034f */
	    0xBA685DD9,  /* -0.0008864082046784461f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBF1DFA9F,  /* -0.6171054244041443f */
	    0x3B528CCC,  /* 0.00321273785084486f */
	aobjEvent32SetValRateBlock(0x001, 37),
	    0xBF1E7309,  /* -0.6189427971839905f */
	    0xB917BD2B,  /* -0.00014470952737610787f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBF1E77E3,  /* -0.6190168261528015f */
	    0xB89B43B5,  /* -7.403587369481102e-05f */
	    0xBE43297B,  /* -0.19058792293071747f */
	    0xB9EE50E4,  /* -0.00045455165673047304f */
	    0xBFE5FBD7,  /* -1.7967480421066284f */
	    0xB9123054,  /* -0.00013941648649051785f */
	aobjEvent32End(),
	aobjEvent32SetValRate(0x004, 0),
	    0x3EE5782B,  /* 0.44818243384361267f */
	    0xBA9044D7,  /* -0.001100684399716556f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 14),
	    0x3EA311E2,  /* 0.31849581003189087f */
	    0xBD0CDBC7,  /* -0.03438928350806236f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E8F2392,  /* 0.27956825494766235f */
	    0xBC2ED56F,  /* -0.010671003721654415f */
	aobjEvent32SetValRateBlock(0x004, 3),
	    0x3EA1CC0A,  /* 0.3160098195075989f */
	    0x3BBA22B3,  /* 0.005680406000465155f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EA3E786,  /* 0.3201257586479187f */
	    0x3B4A6131,  /* 0.003088068449869752f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x3ECCAF3B,  /* 0.3997744023799896f */
	    0x3CC247A3,  /* 0.023715799674391747f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ED9C598,  /* 0.4253356456756592f */
	    0x3DA70D37,  /* 0.0815681740641594f */
	aobjEvent32SetValRateBlock(0x004, 3),
	    0x3F663141,  /* 0.8991890549659729f */
	    0x3E27B567,  /* 0.1637779325246811f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F876A77,  /* 1.0579365491867065f */
	    0x3E1A4E74,  /* 0.15068989992141724f */
	aobjEvent32SetValRateBlock(0x004, 11),
	    0x3FC30186,  /* 1.5234839916229248f */
	    0xBD2CAB65,  /* -0.04215564206242561f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FBC5572,  /* 1.4713575839996338f */
	    0xBD86E879,  /* -0.06587309390306473f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x3EACAF25,  /* 0.3372737467288971f */
	    0xBD0A5BDF,  /* -0.033779021352529526f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EA27370,  /* 0.31728696823120117f */
	    0xBCC115C0,  /* -0.023569941520690918f */
	aobjEvent32SetValRateBlock(0x004, 4),
	    0x3EA619FE,  /* 0.3244170546531677f */
	    0x3D8362D3,  /* 0.06415333598852158f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECD2998,  /* 0.4007079601287842f */
	    0x3D84C578,  /* 0.0648297667503357f */
	aobjEvent32SetValRateBlock(0x004, 12),
	    0x3E63F880,  /* 0.2226276397705078f */
	    0xBCBD5332,  /* -0.02311095967888832f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E5689B3,  /* 0.20950965583324432f */
	    0xBA46F3C7,  /* -0.0007589426240883768f */
	aobjEvent32SetValRateBlock(0x004, 8),
	    0x3ED449B9,  /* 0.414624959230423f */
	    0x3C98F9CD,  /* 0.01867380179464817f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EDCEA46,  /* 0.43147486448287964f */
	    0x3C825F3C,  /* 0.01591455191373825f */
	aobjEvent32SetValRateBlock(0x004, 6),
	    0x3F14DA7D,  /* 0.5814588665962219f */
	    0x3D8388E1,  /* 0.06422591954469681f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F2B216F,  /* 0.6684789061546326f */
	    0x3DE5F1D1,  /* 0.11227763444185257f */
	aobjEvent32SetValRateBlock(0x004, 5),
	    0x3FAC8DC5,  /* 1.3480764627456665f */
	    0x3DC27B29,  /* 0.09496147185564041f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FB6D159,  /* 1.428263783454895f */
	    0x3D7CB8D7,  /* 0.06169971451163292f */
	aobjEvent32SetValRateBlock(0x004, 5),
	    0x3F9F5025,  /* 1.2446333169937134f */
	    0xBDD53E72,  /* -0.10412301123142242f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F917916,  /* 1.1365077495574951f */
	    0xBDD16A5B,  /* -0.10225363820791245f */
	aobjEvent32SetValRateBlock(0x004, 7),
	    0x3F612ABC,  /* 0.8795583248138428f */
	    0xBC643AC9,  /* -0.013930031098425388f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F5DE421,  /* 0.8667622208595276f */
	    0xBC41DBAC,  /* -0.011832159012556076f */
	aobjEvent32SetValRateBlock(0x004, 19),
	    0x3F48A9FA,  /* 0.7838436365127563f */
	    0xBB03901B,  /* -0.002007490722462535f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F4839B8,  /* 0.7821307182312012f */
	    0xBAB95743,  /* -0.001414038590155542f */
	aobjEvent32SetValRateBlock(0x004, 28),
	    0x3F51B849,  /* 0.8192182183265686f */
	    0x38FB1E33,  /* 0.00011974237713729963f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F51BC39,  /* 0.8192782998085022f */
	    0x387BE2CC,  /* 6.005428440403193e-05f */
	aobjEvent32End(),
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBDA25F8B,  /* -0.07928379625082016f */
	    0xBB21A220,  /* -0.00246632844209671f */
	    0x3E55DFFE,  /* 0.2088622748851776f */
	    0x3B8D142B,  /* 0.00430538272485137f */
	    0xC039FA58,  /* -2.905904769897461f */
	    0xBA87DB3F,  /* -0.0010365023044869304f */
	aobjEvent32SetValRate(0x003, 23),
	    0xBDC568D6,  /* -0.09639136493206024f */
	    0xBB825F95,  /* -0.003978679422289133f */
	    0x3E809C92,  /* 0.2511945366859436f */
	    0x3C4F7C21,  /* 0.012663871981203556f */
	aobjEvent32SetValRateBlock(0x004, 14),
	    0xC03C2425,  /* -2.9397060871124268f */
	    0x3BEBDE40,  /* 0.007198125123977661f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC03B87FA,  /* -2.9301743507385254f */
	    0xB8B84E89,  /* -8.788432023720816e-05f */
	aobjEvent32SetValRate(0x004, 12),
	    0xC033F9ED,  /* -2.812129259109497f */
	    0x3D39609F,  /* 0.045258160680532455f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRateBlock(0x003, 1),
	    0xBDCC01A9,  /* -0.09961254149675369f */
	    0xBB0C6290,  /* -0.0021421052515506744f */
	    0x3E870C2C,  /* 0.26376473903656006f */
	    0x3C448411,  /* 0.011994377709925175f */
	aobjEvent32SetValRate(0x002, 6),
	    0x3E86F0D3,  /* 0.2635560929775238f */
	    0xBBE7106C,  /* -0.007051518186926842f */
	aobjEvent32SetValRate(0x001, 8),
	    0xBACF253D,  /* -0.0015803944552317262f */
	    0x3D090F02,  /* 0.03346157819032669f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0312E0A,  /* -2.768435001373291f */
	    0x3CE6A606,  /* 0.028155338019132614f */
	aobjEvent32SetValRate(0x004, 4),
	    0xC02C9118,  /* -2.6963558197021484f */
	    0x3D6D3626,  /* 0.05791296809911728f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3E7E1F8A,  /* 0.24816718697547913f */
	    0xBCB647FB,  /* -0.02225111983716488f */
	aobjEvent32SetValRate(0x002, 7),
	    0xBD10FFC1,  /* -0.0354001559317112f */
	    0xBCA213B4,  /* -0.01978478580713272f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x005, 1),
	    0x3CF65D13,  /* 0.030073678120970726f */
	    0x3CCD3740,  /* 0.025050759315490723f */
	    0xC027E679,  /* -2.6234419345855713f */
	    0x3DA5A8C7,  /* 0.08088832348585129f */
	aobjEvent32SetValRate(0x001, 6),
	    0x3D9570AE,  /* 0.07296882569789886f */
	    0x3C781A3F,  /* 0.015142976306378841f */
	aobjEvent32SetValRateBlock(0x004, 5),
	    0xC0122FCE,  /* -2.284167766571045f */
	    0x3CDDCB54,  /* 0.02707449346780777f */
	aobjEvent32SetValRateBlock(0x006, 1),
	    0xBD4FC450,  /* -0.0507243275642395f */
	    0xBC42A97B,  /* -0.011881227605044842f */
	    0xC010FE85,  /* -2.2655346393585205f */
	    0x3C5C25A9,  /* 0.013436713255941868f */
	aobjEvent32SetValRate(0x004, 5),
	    0xC011C501,  /* -2.277649164199829f */
	    0xBC396805,  /* -0.011316304095089436f */
	aobjEvent32SetValRate(0x002, 9),
	    0xBD8763EB,  /* -0.06610854715108871f */
	    0xBBE3A684,  /* -0.006947340443730354f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3DAD8B3B,  /* 0.08473821729421616f */
	    0x3BB44ED4,  /* 0.00550256110727787f */
	aobjEvent32SetValRate(0x001, 9),
	    0x3D59BBBA,  /* 0.05315754562616348f */
	    0x3C99D7FD,  /* 0.018779749050736427f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0128C9D,  /* -2.289832353591919f */
	    0xBD003780,  /* -0.03130292892456055f */
	aobjEvent32SetValRateBlock(0x004, 3),
	    0xC026F49C,  /* -2.60867977142334f */
	    0xBE0E638D,  /* -0.1390516310930252f */
	aobjEvent32SetValRateBlock(0x006, 1),
	    0xBD926793,  /* -0.07148661464452744f */
	    0xBB6A6A49,  /* -0.003576891729608178f */
	    0xC02F094D,  /* -2.734942674636841f */
	    0xBDBAD5E9,  /* -0.09122831374406815f */
	aobjEvent32SetValRate(0x004, 5),
	    0xC02B718A,  /* -2.678804874420166f */
	    0x3CBF59AB,  /* 0.023358186706900597f */
	aobjEvent32SetValRate(0x002, 13),
	    0xBB9F03FE,  /* -0.0048527708277106285f */
	    0x3C3A7CFC,  /* 0.011382337659597397f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3D94661C,  /* 0.07246038317680359f */
	    0x3C946BB4,  /* 0.018117763102054596f */
	aobjEvent32SetValRate(0x001, 8),
	    0x3DF059CF,  /* 0.11735879629850388f */
	    0xBC8004C1,  /* -0.015627266839146614f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC02A7040,  /* -2.6631011962890625f */
	    0x3C2CA81D,  /* 0.010538128204643726f */
	aobjEvent32SetValRate(0x004, 7),
	    0xC0229FCA,  /* -2.5410027503967285f */
	    0x3C7C02A1,  /* 0.015381486155092716f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3DCED983,  /* 0.10100080817937851f */
	    0xBC8D6B3C,  /* -0.017263047397136688f */
	aobjEvent32SetValRate(0x001, 15),
	    0x3D90B3AA,  /* 0.07065518200397491f */
	    0x3C936B65,  /* 0.017995545640587807f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x006, 1),
	    0x3BB74B24,  /* 0.005593674257397652f */
	    0x3C160765,  /* 0.009157036431133747f */
	    0xC022ACA2,  /* -2.5417866706848145f */
	    0xBC7D65D6,  /* -0.015466174110770226f */
	aobjEvent32SetValRate(0x002, 13),
	    0x3C6FC3BA,  /* 0.014634067192673683f */
	    0xB884BF6A,  /* -6.329904135782272e-05f */
	aobjEvent32SetValRateBlock(0x004, 8),
	    0xC02D8F8B,  /* -2.711886167526245f */
	    0xBC0A0EC7,  /* -0.00842637475579977f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC02DF7FE,  /* -2.718261241912842f */
	    0xBB986A4D,  /* -0.0046513439156115055f */
	aobjEvent32SetValRate(0x004, 9),
	    0xC0361BA3,  /* -2.8454368114471436f */
	    0xBCB242A2,  /* -0.02176028862595558f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3DB70280,  /* 0.08936023712158203f */
	    0x3C8E36C4,  /* 0.017360098659992218f */
	aobjEvent32SetValRate(0x001, 12),
	    0xBE0D1C61,  /* -0.1378035694360733f */
	    0xBC26CD86,  /* -0.010180836543440819f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3C9A49BE,  /* 0.018833991140127182f */
	    0x3C052EB2,  /* 0.008128808811306953f */
	aobjEvent32SetValRate(0x002, 17),
	    0x3E755914,  /* 0.2395976185798645f */
	    0xBD3F256E,  /* -0.04666655510663986f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0377476,  /* -2.866483211517334f */
	    0xBCA4734C,  /* -0.0200745090842247f */
	aobjEvent32SetValRate(0x004, 9),
	    0xC03DA81E,  /* -2.963386058807373f */
	    0x3C4DE2B5,  /* 0.012566258199512959f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE11FD2C,  /* -0.14256733655929565f */
	    0x3AF27920,  /* 0.0018499232828617096f */
	aobjEvent32SetValRate(0x001, 9),
	    0x3E3FF016,  /* 0.18743929266929626f */
	    0x3C3E621C,  /* 0.011620070785284042f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC03C2716,  /* -2.9398856163024902f */
	    0x3D1A68A3,  /* 0.0376974456012249f */
	aobjEvent32SetValRate(0x004, 5),
	    0xC0291B60,  /* -2.6422958374023438f */
	    0x3CEE0F44,  /* 0.029060013592243195f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3E3FFFB3,  /* 0.18749885261058807f */
	    0xBD5C4534,  /* -0.05377693474292755f */
	aobjEvent32SetValRate(0x002, 7),
	    0xBC4FF791,  /* -0.012693301774561405f */
	    0x3BBB1E53,  /* 0.00571040203794837f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x005, 1),
	    0x3E475E03,  /* 0.19469456374645233f */
	    0x3BA860F4,  /* 0.005138510838150978f */
	    0xC027FAFD,  /* -2.6246941089630127f */
	    0x3C8F93CC,  /* 0.017526529729366302f */
	aobjEvent32SetValRate(0x004, 7),
	    0xC0216EFD,  /* -2.5223991870880127f */
	    0xBD22FBFB,  /* -0.03979108855128288f */
	aobjEvent32SetValRate(0x001, 15),
	    0x3CC1A2C6,  /* 0.023637186735868454f */
	    0xBCD8D4A1,  /* -0.02646857686340809f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBB78D5FD,  /* -0.0037969343829900026f */
	    0x3C27C26A,  /* 0.010239223018288612f */
	aobjEvent32SetValRate(0x002, 17),
	    0x3DE50BA4,  /* 0.11183860898017883f */
	    0xBBE9805F,  /* -0.007125898730009794f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC02479A6,  /* -2.569924831390381f */
	    0xBD4EB520,  /* -0.05046570301055908f */
	aobjEvent32SetValRate(0x004, 10),
	    0xC040718C,  /* -3.006930351257324f */
	    0xBCBB7A52,  /* -0.022885475307703018f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBB123BAF,  /* -0.0022313406225293875f */
	    0xBCC91531,  /* -0.024546237662434578f */
	aobjEvent32SetValRate(0x001, 8),
	    0xBC812D49,  /* -0.015768663957715034f */
	    0x3C76D8E5,  /* 0.015066360123455524f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC041CD95,  /* -3.028172731399536f */
	    0xBCA2F812,  /* -0.01989367976784706f */
	aobjEvent32SetValRate(0x004, 26),
	    0xC047807F,  /* -3.117217779159546f */
	    0x3B25D994,  /* 0.0025306688621640205f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3DD56DC1,  /* 0.10421324521303177f */
	    0xBBF026F1,  /* -0.007328860927373171f */
	aobjEvent32SetValRate(0x002, 38),
	    0x3DD77FCB,  /* 0.10522421449422836f */
	    0x39BB5027,  /* 0.0003572713758330792f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBABFA336,  /* -0.001462078420445323f */
	    0x3C5E254A,  /* 0.01355869509279728f */
	aobjEvent32SetValRate(0x001, 36),
	    0xBD0DECA6,  /* -0.03464951366186142f */
	    0xBA55CF9F,  /* -0.0008156243129633367f */
	aobjEvent32Wait(20),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC047557D,  /* -3.1145927906036377f */
	    0x3B31794C,  /* 0.00270803552120924f */
	aobjEvent32SetValRateBlock(0x004, 15),
	    0xC044E544,  /* -3.076493263244629f */
	    0x3A0EA0D9,  /* 0.0005440838285721838f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBD0FA3AE,  /* -0.03506820648908615f */
	    0xB9DB83F9,  /* -0.00041869262349791825f */
	    0x3DD7DFFD,  /* 0.10540769249200821f */
	    0x3940633D,  /* 0.00018347516015637666f */
	    0xC044E0AF,  /* -3.0762135982513428f */
	    0x39929B8F,  /* 0.0002796319022309035f */
	aobjEvent32End(),
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE8BE85C,  /* -0.27325713634490967f */
	    0x3A645885,  /* 0.0008710700203664601f */
	    0x3C8640F2,  /* 0.016388390213251114f */
	    0xBB6E9043,  /* -0.003640190465375781f */
	    0xC001A31B,  /* -2.0255801677703857f */
	    0x3B845FDF,  /* 0.004039749037474394f */
	aobjEvent32SetValRate(0x002, 17),
	    0x3C5333DB,  /* 0.01289078127592802f */
	    0x3D056068,  /* 0.03256264328956604f */
	aobjEvent32SetValRate(0x001, 18),
	    0x3DC585EB,  /* 0.09644683450460434f */
	    0x3D25D502,  /* 0.04048634320497513f */
	aobjEvent32SetValRateBlock(0x004, 15),
	    0xC004AAB8,  /* -2.0729198455810547f */
	    0xBC24E464,  /* -0.010064218193292618f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0059E1D,  /* -2.087775468826294f */
	    0xBC954E6F,  /* -0.01822587661445141f */
	aobjEvent32SetValRate(0x004, 9),
	    0xC0099FB9,  /* -2.150373697280884f */
	    0x3CF63B26,  /* 0.030057501047849655f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3D4496EF,  /* 0.04799550399184227f */
	    0x3D175CFC,  /* 0.03695391118526459f */
	aobjEvent32SetValRate(0x002, 10),
	    0x3E8EE3D2,  /* 0.27908188104629517f */
	    0xBC53CFA5,  /* -0.012927924282848835f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3E0C1816,  /* 0.13681063055992126f */
	    0x3D23B09F,  /* 0.039963360875844955f */
	aobjEvent32SetValRate(0x001, 11),
	    0x3F015153,  /* 0.5051471590995789f */
	    0x3C0B00D2,  /* 0.00848408229649067f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC00765C1,  /* -2.1155855655670166f */
	    0x3D1EB81B,  /* 0.03874979540705681f */
	aobjEvent32SetValRate(0x004, 6),
	    0xBFF191C4,  /* -1.887260913848877f */
	    0x3CBDDD9B,  /* 0.02317695878446102f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3E86A961,  /* 0.26301100850105286f */
	    0xBC8425F6,  /* -0.016131382435560226f */
	aobjEvent32SetValRate(0x002, 23),
	    0x3D727260,  /* 0.059191107749938965f */
	    0x3C984A2E,  /* 0.018590059131383896f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3F021EE6,  /* 0.5082839727401733f */
	    0xBA907EED,  /* -0.0011024154955521226f */
	aobjEvent32SetValRate(0x001, 19),
	    0xBE463D9B,  /* -0.19359438121318817f */
	    0xBC97AFA3,  /* -0.01851636730134487f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFEEBE41,  /* -1.8651810884475708f */
	    0x3CAF722A,  /* 0.021416742354631424f */
	aobjEvent32SetValRateBlock(0x004, 16),
	    0xBFC8B0C3,  /* -1.5678943395614624f */
	    0x3C17AA2D,  /* 0.009256881661713123f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFC7767A,  /* -1.5583031177520752f */
	    0x3C27ECB7,  /* 0.010249308310449123f */
	aobjEvent32SetValRate(0x004, 9),
	    0xBFB048F2,  /* -1.3772261142730713f */
	    0x3D024867,  /* 0.03180732950568199f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE56B426,  /* -0.20967158675193787f */
	    0xBC61A1A3,  /* -0.013771447353065014f */
	aobjEvent32SetValRate(0x001, 9),
	    0xBE39B9BA,  /* -0.18137255311012268f */
	    0x3BF3ED04,  /* 0.007444025948643684f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3DA17A61,  /* 0.07884670048952103f */
	    0x3CA71CA7,  /* 0.02039940468966961f */
	aobjEvent32SetValRate(0x002, 10),
	    0x3E104316,  /* 0.14088091254234314f */
	    0xBD2C1683,  /* -0.042013656347990036f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFAC0877,  /* -1.3440083265304565f */
	    0x3C3294BD,  /* 0.010899719782173634f */
	aobjEvent32SetValRate(0x004, 5),
	    0xBFD379A0,  /* -1.6521492004394531f */
	    0xBD90B02E,  /* -0.07064853608608246f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE385271,  /* -0.18000198900699615f */
	    0xBBC1BA05,  /* -0.005912067834287882f */
	aobjEvent32SetValRate(0x001, 7),
	    0xBE3D4DDE,  /* -0.18486735224723816f */
	    0x3CC82733,  /* 0.024432754144072533f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3DC1AE31,  /* 0.09457052499055862f */
	    0xBD454E4E,  /* -0.04817038029432297f */
	aobjEvent32SetValRate(0x002, 8),
	    0xBD7C7883,  /* -0.06163836643099785f */
	    0x3CB88C52,  /* 0.022527847439050674f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFDC03F2,  /* -1.7188704013824463f */
	    0xBD799786,  /* -0.06093551963567734f */
	aobjEvent32SetValRate(0x004, 11),
	    0xBFFB7B0C,  /* -1.9646925926208496f */
	    0xBC2EAEF7,  /* -0.010661832056939602f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBE2157A7,  /* -0.15756092965602875f */
	    0x3CF5E275,  /* 0.030015209689736366f */
	aobjEvent32SetValRate(0x001, 13),
	    0x3EBEE671,  /* 0.3728518784046173f */
	    0x3CFCF3C3,  /* 0.03087795339524746f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBD0D9219,  /* -0.034563157707452774f */
	    0x3CFB8E37,  /* 0.03070746175944805f */
	aobjEvent32SetValRate(0x002, 7),
	    0x3E1E66D5,  /* 0.15468914806842804f */
	    0x3C0F2F67,  /* 0.008739328943192959f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFFCD0E2,  /* -1.9751245975494385f */
	    0xBC2010B3,  /* -0.009769606404006481f */
	aobjEvent32SetValRate(0x004, 21),
	    0xC00230B6,  /* -2.0342230796813965f */
	    0xBC8D187F,  /* -0.017223594710230827f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3E2594E1,  /* 0.16170074045658112f */
	    0x3BBEA5E6,  /* 0.00581811647862196f */
	aobjEvent32SetValRate(0x002, 10),
	    0x3E70616A,  /* 0.23474660515785217f */
	    0x3C3E09A9,  /* 0.011598982848227024f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3ECE111C,  /* 0.4024742841720581f */
	    0x3CE77229,  /* 0.028252677991986275f */
	aobjEvent32SetValRate(0x001, 15),
	    0x3EACC326,  /* 0.3374263644218445f */
	    0xBD2C28E5,  /* -0.0420311875641346f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x3E799678,  /* 0.243738055229187f */
	    0x3BDBBA25,  /* 0.006705539766699076f */
	aobjEvent32SetValRate(0x002, 19),
	    0xBDC6730C,  /* -0.0968991219997406f */
	    0xBCE3E6CF,  /* -0.02782001905143261f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0x3E965E76,  /* 0.29368942975997925f */
	    0xBD387FE2,  /* -0.045043833553791046f */
	aobjEvent32SetValRate(0x001, 16),
	    0xBE9F87C8,  /* -0.3115828037261963f */
	    0xBC9B65F4,  /* -0.018969513475894928f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0035832,  /* -2.052258014678955f */
	    0xBC97AE3A,  /* -0.018515694886446f */
	aobjEvent32SetValRate(0x004, 15),
	    0xC006F9DD,  /* -2.1090004444122314f */
	    0x3C845FBB,  /* 0.016158929094672203f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBDFD1D0E,  /* -0.12359057366847992f */
	    0xBCCE1209,  /* -0.025155084207654f */
	aobjEvent32SetValRate(0x002, 10),
	    0xBE0AF17F,  /* -0.13568685948848724f */
	    0x3C846526,  /* 0.016161512583494186f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x005, 1),
	    0xBEA89105,  /* -0.3292314112186432f */
	    0xBC8465AB,  /* -0.016161760315299034f */
	    0xC005ED02,  /* -2.092590808868408f */
	    0x3C83A6BA,  /* 0.016070712357759476f */
	aobjEvent32SetValRate(0x001, 17),
	    0xBEBA2B06,  /* -0.3636094927787781f */
	    0x387AFA75,  /* 5.9837901062564924e-05f */
	aobjEvent32SetValRate(0x004, 26),
	    0xC0016120,  /* -2.0215530395507812f */
	    0xBB067A45,  /* -0.0020519655663520098f */
	aobjEvent32Wait(6),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0xBDF66971,  /* -0.12031830102205276f */
	    0x3C6EC7FA,  /* 0.014574045315384865f */
	aobjEvent32SetValRate(0x002, 36),
	    0xBE25D0DF,  /* -0.16192959249019623f */
	    0xBA68FEB2,  /* -0.0008888050215318799f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xBEBA2762,  /* -0.36358171701431274f */
	    0xB603CEA9,  /* -1.964081320693367e-06f */
	aobjEvent32SetValRate(0x001, 25),
	    0xBEBAA7AF,  /* -0.3645605742931366f */
	    0x37FC9584,  /* 3.0110364605206996e-05f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xC0018377,  /* -2.023648977279663f */
	    0xBB0B4ECD,  /* -0.0021256685722619295f */
	aobjEvent32SetValRateBlock(0x004, 16),
	    0xC003288C,  /* -2.049349784851074f */
	    0xB98A9D32,  /* -0.0002643853076733649f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBEBAA5A6,  /* -0.3645450472831726f */
	    0x37826937,  /* 1.554620212118607e-05f */
	    0xBE264863,  /* -0.1623855084180832f */
	    0xB9EF0815,  /* -0.0004559165390674025f */
	    0xC0032AC4,  /* -2.049485206604004f */
	    0xB90DFFFF,  /* -0.00013542173837777227f */
	aobjEvent32End(),
	aobjEvent32SetValRate(0x004, 0),
	    0x3FD52BC6,  /* 1.665398359298706f */
	    0xBB2983DE,  /* -0.0025865952484309673f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 17),
	    0x3FAEE2C7,  /* 1.3662956953048706f */
	    0xBD024CF1,  /* -0.031811658293008804f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FAA6E61,  /* 1.3314934968948364f */
	    0xBD1F4B7B,  /* -0.03889034315943718f */
	aobjEvent32SetValRateBlock(0x004, 9),
	    0x3F108094,  /* 0.5644619464874268f */
	    0xBDF300D0,  /* -0.11865389347076416f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EE4E2A9,  /* 0.447041779756546f */
	    0xBDE08F9E,  /* -0.1096489280462265f */
	aobjEvent32SetValRateBlock(0x004, 8),
	    0x3E6CB772,  /* 0.23116853833198547f */
	    0xBB161AB4,  /* -0.002290409989655018f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E69E1CA,  /* 0.22840037941932678f */
	    0xBB6FD50E,  /* -0.0036595496349036694f */
	aobjEvent32SetValRateBlock(0x004, 10),
	    0x3E805A2A,  /* 0.2506878972053528f */
	    0x3CC2A905,  /* 0.023762235417962074f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E8D0988,  /* 0.275463342666626f */
	    0x3CCB527C,  /* 0.02481960505247116f */
	aobjEvent32SetValRateBlock(0x004, 11),
	    0x3EC07166,  /* 0.3758651614189148f */
	    0xBBC5A0A0,  /* -0.006031110882759094f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EBD21D6,  /* 0.3693987727165222f */
	    0x3D185241,  /* 0.03718781843781471f */
	aobjEvent32SetValRateBlock(0x004, 4),
	    0x3F8096F9,  /* 1.0046073198318481f */
	    0x3E31A787,  /* 0.17349062860012054f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F956C0F,  /* 1.1673601865768433f */
	    0x3E17EF8A,  /* 0.14837470650672913f */
	aobjEvent32SetValRateBlock(0x004, 11),
	    0x3FA94B54,  /* 1.3226113319396973f */
	    0xBCDD50E1,  /* -0.027016105130314827f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FA5B267,  /* 1.2945069074630737f */
	    0xBCF1A9C7,  /* -0.029499901458621025f */
	aobjEvent32SetValRateBlock(0x004, 17),
	    0x3F0C0DE9,  /* 0.5470872521400452f */
	    0xBD0EB7DA,  /* -0.03484330326318741f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F0406BF,  /* 0.5157279372215271f */
	    0xBCE43650,  /* -0.027857929468154907f */
	aobjEvent32SetValRateBlock(0x004, 14),
	    0x3F4270D1,  /* 0.7595339417457581f */
	    0x3D45FD69,  /* 0.04833737388253212f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F4EAE8A,  /* 0.807350754737854f */
	    0x3D3EE632,  /* 0.04660625010728836f */
	aobjEvent32SetValRateBlock(0x004, 13),
	    0x3F87E1F6,  /* 1.0615832805633545f */
	    0xBAABB25F,  /* -0.0013099423376843333f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F87AF68,  /* 1.0600404739379883f */
	    0xBADBBDC6,  /* -0.0016764930915087461f */
	aobjEvent32SetValRateBlock(0x004, 35),
	    0x3F87E1A6,  /* 1.0615737438201904f */
	    0xB833B2F9,  /* -4.284360693418421e-05f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F87E0E8,  /* 1.0615510940551758f */
	    0xB7BDE44F,  /* -2.26368701987667e-05f */
	aobjEvent32End(),
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC04EA830,  /* -3.229015350341797f */
	    0xBB368253,  /* -0.002784867538139224f */
	    0x4054735F,  /* 3.3195416927337646f */
	    0xBBD11DDB,  /* -0.006381732877343893f */
	    0x3F110FAB,  /* 0.5666453242301941f */
	    0xBB16E359,  /* -0.002302369335666299f */
	aobjEvent32SetValRate(0x002, 19),
	    0x4041F30A,  /* 3.030458927154541f */
	    0x3C0BA294,  /* 0.008522648364305496f */
	aobjEvent32SetValRate(0x001, 20),
	    0xC0586221,  /* -3.3809893131256104f */
	    0x3CB39C12,  /* 0.021925006061792374f */
	aobjEvent32SetValRateBlock(0x004, 15),
	    0x3ED8BDC9,  /* 0.4233229458332062f */
	    0xBCDEF203,  /* -0.027215009555220604f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECD51BD,  /* 0.4010142385959625f */
	    0xBC713C61,  /* -0.014723868109285831f */
	aobjEvent32SetValRate(0x004, 10),
	    0x3F0C2E91,  /* 0.5475855469703674f */
	    0x3C6E2554,  /* 0.014535266906023026f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x40428D0F,  /* 3.0398595333099365f */
	    0x3C20F180,  /* 0.009823203086853027f */
	aobjEvent32SetValRate(0x002, 19),
	    0x40484B37,  /* 3.1295907497406006f */
	    0xBBB615FA,  /* -0.005556819029152393f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC056E7B1,  /* -3.357891321182251f */
	    0x3CC2176E,  /* 0.023692812770605087f */
	aobjEvent32SetValRate(0x001, 15),
	    0xC048630A,  /* -3.131044864654541f */
	    0xBB246B33,  /* -0.002508830977603793f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F0FE498,  /* 0.5620818138122559f */
	    0x3C6A89B3,  /* 0.01431505661457777f */
	aobjEvent32SetValRateBlock(0x004, 3),
	    0x3F132ADD,  /* 0.5748727917671204f */
	    0x3C04E4EF,  /* 0.00811122264713049f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F19EEDB,  /* 0.6013008952140808f */
	    0x3D49D36F,  /* 0.04927390441298485f */
	aobjEvent32SetValRateBlock(0x004, 2),
	    0x3F351CD6,  /* 0.7074712514877319f */
	    0x3B725B3E,  /* 0.003698065411299467f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F2E4A02,  /* 0.6808167695999146f */
	    0xBCDC9450,  /* -0.026926189661026f */
	aobjEvent32SetValRate(0x004, 18),
	    0x3E91A1D6,  /* 0.2844378352165222f */
	    0xBCCAA2BB,  /* -0.024735799059271812f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC0489BED,  /* -3.134516954421997f */
	    0xBB8F668F,  /* -0.004376239608973265f */
	aobjEvent32SetValRate(0x001, 10),
	    0xC04ED279,  /* -3.2315962314605713f */
	    0x3B458B8B,  /* 0.003014298854395747f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x4047F16F,  /* 3.1241109371185303f */
	    0xBBA4AE37,  /* -0.005025650840252638f */
	aobjEvent32SetValRate(0x002, 14),
	    0x405303BA,  /* 3.297102451324463f */
	    0x3CD9BF4E,  /* 0.026580478996038437f */
	aobjEvent32Wait(7),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC04E5478,  /* -3.223905563354492f */
	    0x3C3D9BB3,  /* 0.011572766117751598f */
	aobjEvent32SetValRate(0x001, 12),
	    0xC0414E6F,  /* -3.0204122066497803f */
	    0xBCD9FEB1,  /* -0.026610704138875008f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E87BCD7,  /* 0.26511260867118835f */
	    0xBC970DF3,  /* -0.018439268693327904f */
	aobjEvent32SetValRate(0x004, 8),
	    0x3E97E02F,  /* 0.2966322600841522f */
	    0x3D35B1E5,  /* 0.044359106570482254f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x4054B069,  /* 3.3232672214508057f */
	    0x3CD004EE,  /* 0.02539297565817833f */
	aobjEvent32SetValRate(0x002, 9),
	    0x4051B6BA,  /* 3.276777744293213f */
	    0xBD8EAE0B,  /* -0.06966789811849594f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC043BB93,  /* -3.058323621749878f */
	    0xBD4DA233,  /* -0.050203513354063034f */
	aobjEvent32SetValRate(0x001, 4),
	    0xC051C08E,  /* -3.2773776054382324f */
	    0xBCF0EAE9,  /* -0.029408888891339302f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EB68B5A,  /* 0.35653191804885864f */
	    0x3DB064ED,  /* 0.08613000065088272f */
	aobjEvent32SetValRate(0x004, 4),
	    0x3F5368F4,  /* 0.8258202075958252f */
	    0x3D8A31EA,  /* 0.06747801601886749f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x404D2517,  /* 3.2053887844085693f */
	    0xBD84F098,  /* -0.06491202116012573f */
	aobjEvent32SetValRate(0x002, 11),
	    0x4049F361,  /* 3.155479669570923f */
	    0x3C9DCC6A,  /* 0.019262511283159256f */
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC0536005,  /* -3.3027355670928955f */
	    0xBCD922A4,  /* -0.02650577574968338f */
	aobjEvent32SetValRate(0x001, 10),
	    0xC050C1D9,  /* -3.261831521987915f */
	    0x3C7BEA9D,  /* 0.01537576038390398f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F5F030E,  /* 0.8711403608322144f */
	    0x3CB094CC,  /* 0.021555326879024506f */
	aobjEvent32SetValRateBlock(0x004, 4),
	    0x3F4C96C3,  /* 0.7991754412651062f */
	    0xBCEF6630,  /* -0.029223531484603882f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F43D64F,  /* 0.7649888396263123f */
	    0xBD2AEC11,  /* -0.04172903671860695f */
	aobjEvent32SetValRate(0x004, 7),
	    0x3E992AC5,  /* 0.2991544306278229f */
	    0xBD315163,  /* -0.043290507048368454f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x003, 1),
	    0xC05004AF,  /* -3.2502858638763428f */
	    0x3BEC968E,  /* 0.007220095954835415f */
	    0x404ACF17,  /* 3.1688897609710693f */
	    0x3C0F6D42,  /* 0.008754076436161995f */
	aobjEvent32SetValRate(0x001, 11),
	    0xC05C6CD6,  /* -3.4441428184509277f */
	    0x3BB60D0A,  /* 0.005555753596127033f */
	aobjEvent32SetValRate(0x002, 12),
	    0x4049354E,  /* 3.14387845993042f */
	    0x3C1B7B8F,  /* 0.009489907883107662f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E861CF9,  /* 0.26193979382514954f */
	    0xBD015B3D,  /* -0.031581152230501175f */
	aobjEvent32SetValRate(0x004, 13),
	    0x3EFBC96E,  /* 0.4917711615562439f */
	    0x3D278DB3,  /* 0.040906619280576706f */
	aobjEvent32Wait(8),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC05B919B,  /* -3.4307620525360107f */
	    0x3CBDC9C7,  /* 0.023167503997683525f */
	aobjEvent32SetValRate(0x001, 6),
	    0xC051ABCB,  /* -3.2761104106903076f */
	    0x3BD3BF6A,  /* 0.006462027318775654f */
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x4049EE21,  /* 3.1551592350006104f */
	    0x3C3F2219,  /* 0.011665844358503819f */
	aobjEvent32SetValRate(0x002, 32),
	    0x4052C7BB,  /* 3.293440580368042f */
	    0x3C0E2B8F,  /* 0.008677377365529537f */
	aobjEvent32Wait(3),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F07EED1,  /* 0.5309877991676331f */
	    0x3D163DC4,  /* 0.03667999804019928f */
	aobjEvent32SetValRate(0x004, 14),
	    0x3F09E630,  /* 0.5386686325073242f */
	    0xBD0C4749,  /* -0.03424767032265663f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC0517289,  /* -3.272615671157837f */
	    0x3A8D4456,  /* 0.0010777811985462904f */
	aobjEvent32SetValRate(0x001, 25),
	    0xC05632EE,  /* -3.346858501434326f */
	    0x3CD3D2F6,  /* 0.025857429951429367f */
	aobjEvent32Wait(12),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F00F286,  /* 0.5037006139755249f */
	    0xBD1005DF,  /* -0.03516184911131859f */
	aobjEvent32SetValRate(0x004, 18),
	    0x3E1567AC,  /* 0.14590328931808472f */
	    0xBB8DED02,  /* -0.00433123204857111f */
	aobjEvent32Wait(12),
	aobjEvent32SetValRateBlock(0x001, 1),
	    0xC0549EDA,  /* -3.322195529937744f */
	    0x3CC057CA,  /* 0.023479361087083817f */
	aobjEvent32SetValRate(0x001, 37),
	    0xC056A926,  /* -3.354074001312256f */
	    0xBAA7D4B3,  /* -0.0012804478174075484f */
	aobjEvent32SetValRateBlock(0x002, 1),
	    0x40534E9F,  /* 3.301673650741577f */
	    0x3BFF6A75,  /* 0.007794673088937998f */
	aobjEvent32SetValRate(0x002, 36),
	    0x4051FA53,  /* 3.2809035778045654f */
	    0xB9F929C7,  /* -0.00047524107503704727f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E11713C,  /* 0.14203351736068726f */
	    0xBB624167,  /* -0.0034523846115916967f */
	aobjEvent32SetValRateBlock(0x004, 31),
	    0x3E533F6F,  /* 0.2062966674566269f */
	    0x3A2CDED9,  /* 0.0006594486185349524f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC056B3EA,  /* -3.3547310829162598f */
	    0xBA2C3AA5,  /* -0.0006570018013007939f */
	    0x4051F653,  /* 3.2806594371795654f */
	    0xB9800990,  /* -0.0002442118711769581f */
	    0x3E539835,  /* 0.20663531124591827f */
	    0x39B18D66,  /* 0.00033865420846268535f */
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x070, 0),
	    0x44055E09,  /* 533.4692993164062f */
	    0x440659D5,  /* 537.4036254882812f */
	    0xC45226D9,  /* -840.6069946289062f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x446DC8AA,  /* 951.1353759765625f */
	    0x3F8BA430,  /* 1.0909481048583984f */
	    0x4400F5D2,  /* 515.8409423828125f */
	    0xBEB80060,  /* -0.3593778610229492f */
	    0xC240D2A0,  /* -48.2056884765625f */
	    0x400B4BA0,  /* 2.1764907836914062f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x4415BB47,  /* 598.9262084960938f */
	    0xBF097FC0,  /* -0.5371055603027344f */
	    0x4400F5D2,  /* 515.8409423828125f */
	    0xBDE97F00,  /* -0.11401176452636719f */
	    0xC4318120,  /* -710.017578125f */
	    0xBF012C6C,  /* -0.5045840740203857f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x4465BA2E,  /* 918.9090576171875f */
	    0x4034FBA0,  /* 2.8278579711914062f */
	    0x43FE8008,  /* 509.000244140625f */
	    0xBF63C830,  /* -0.8897733688354492f */
	    0xC29CF623,  /* -78.4807357788086f */
	    0xC065EBA4,  /* -3.5925073623657227f */
	aobjEvent32SetVal0RateBlock(0x070, 30),
	    0x44402640,  /* 768.59765625f */
	    0x43E73A2F,  /* 462.4545593261719f */
	    0xC467645A,  /* -925.5679931640625f */
	aobjEvent32SetValBlock(0x070, 40),
	    0x44402640,  /* 768.59765625f */
	    0x43E73A2F,  /* 462.4545593261719f */
	    0xC467645A,  /* -925.5679931640625f */
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x070, 0),
	    0x4472E9F5,  /* 971.6555786132812f */
	    0x44047F11,  /* 529.9854125976562f */
	    0xC4792D7A,  /* -996.7105712890625f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x43FD7782,  /* 506.93365478515625f */
	    0x3E329980,  /* 0.17441368103027344f */
	    0x44002F0E,  /* 512.7352294921875f */
	    0xBE933380,  /* -0.2875022888183594f */
	    0xC3BC7347,  /* -376.9006042480469f */
	    0xBDFE5E00,  /* -0.12420272827148438f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x447587B5,  /* 982.1204223632812f */
	    0x406E6417,  /* 3.7248589992523193f */
	    0x44002F0E,  /* 512.7352294921875f */
	    0xBE1FE540,  /* -0.15614795684814453f */
	    0xC47B0A6A,  /* -1004.1627197265625f */
	    0x40389BA5,  /* 2.8844997882843018f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0x44369B37,  /* 730.4252319335938f */
	    0x3F2FF7E0,  /* 0.6873760223388672f */
	    0x43FBAEE5,  /* 503.3663635253906f */
	    0xBC4B1C00,  /* -0.012396812438964844f */
	    0xC34BD4A3,  /* -203.8306121826172f */
	    0xBFFD5B00,  /* -1.979339599609375f */
	aobjEvent32SetVal0RateBlock(0x070, 30),
	    0x447FD73B,  /* 1023.3629760742188f */
	    0x43FFFEE8,  /* 511.991455078125f */
	    0xC48C5D8A,  /* -1122.923095703125f */
	aobjEvent32SetValBlock(0x070, 40),
	    0x447FD73B,  /* 1023.3629760742188f */
	    0x43FFFEE8,  /* 511.991455078125f */
	    0xC48C5D8A,  /* -1122.923095703125f */
	aobjEvent32End(),
	aobjEvent32SetVal0RateBlock(0x070, 0),
	    0xC24EB44F,  /* -51.676082611083984f */
	    0xC3480FD6,  /* -200.06185913085938f */
	    0xC09EB0B0,  /* -4.959068298339844f */
	aobjEvent32SetValRateBlock(0x070, 30),
	    0xC2EEB57B,  /* -119.35445404052734f */
	    0xBF70E005,  /* -0.9409182667732239f */
	    0xC35DD7ED,  /* -221.8434600830078f */
	    0xBF494575,  /* -0.7862160801887512f */
	    0xC2A5BFE4,  /* -82.87478637695312f */
	    0xBD6C7AAB,  /* -0.0577341727912426f */
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC2BC08E9,  /* -94.01740264892578f */
	    0x3FD39A09,  /* 1.653138279914856f */
	    0xC36B710C,  /* -235.44158935546875f */
	    0xBF46B8A0,  /* -0.7762546539306641f */
	    0xC0F1D3D0,  /* -7.557106018066406f */
	    0x4037408B,  /* 2.863314390182495f */
	aobjEvent32SetValRateBlock(0x070, 15),
	    0xC28B8547,  /* -69.76030731201172f */
	    0x3F9E8B99,  /* 1.2386351823806763f */
	    0xC3752190,  /* -245.131103515625f */
	    0x3FA158CB,  /* 1.2605222463607788f */
	    0x404193C8,  /* 3.0246448516845703f */
	    0xBF7A00DB,  /* -0.9765755534172058f */
	aobjEvent32SetVal0RateBlock(0x070, 30),
	    0xC2191D83,  /* -38.2788200378418f */
	    0xC332B7D5,  /* -178.7180938720703f */
	    0xC24E0314,  /* -51.50300598144531f */
	aobjEvent32SetValBlock(0x070, 70),
	    0xC2191D83,  /* -38.2788200378418f */
	    0xC332B7D5,  /* -178.7180938720703f */
	    0xC24E0314,  /* -51.50300598144531f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0x77779400,
	    0x77779400,
	    0x6B6B8900,
	    0x6D6D8B00,
	    0x67678500,
	    0x65658402,
	    0x5C5C7B08,
	    0x5E5E7D0B,
	    0x6E6E8C0B,
	    0x6E6E8C0B,
	    0x63638209,
	    0x6A6A8803,
	    0x79799600,
	    0x76769300,
	    0x6F6F8D00,
	    0x7C7C9800,
	    0x74749100,
	    0x72728F00,
	    0x73739000,
	    0x57577609,
	    0x52527128,
	    0x5252713F,
	    0x4C4C6B4C,
	    0x4F4F6E4C,
	    0x50506F49,
	    0x59597846,
	    0x6B6B893C,
	    0x5D5D7C3B,
	    0x67678517,
	    0x6E6E8C01,
	    0x73739000,
	    0x76769300,
	    0x73739000,
	    0x5E5E7D00,
	    0x6363820A,
	    0x5A5A7940,
	    0x57577654,
	    0x5A5A794D,
	    0x44446356,
	    0x49496850,
	    0x43436252,
	    0x46466552,
	    0x49496853,
	    0x5A5A7948,
	    0x6262813A,
	    0x69698713,
	    0x72728F00,
	    0x6E6E8C00,
	    0x64648300,
	    0x60607F02,
	    0x58587730,
	    0x45456463,
	    0x55557452,
	    0x3E3E5D5C,
	    0x35355359,
	    0x4646654A,
	    0x4444634A,
	    0x4D4D6D47,
	    0x4343624E,
	    0x4949684B,
	    0x51517048,
	    0x5F5F7E36,
	    0x6B6B8909,
	    0x70708E00,
	    0x70708E00,
	    0x6464830F,
	    0x5555744A,
	    0x51517053,
	    0x4A4A6952,
	    0x3A3A5956,
	    0x31314F53,
	aobjEvent32SetValAfter(0x22E, 11875),
	    0x2A2A4651,  /* 1.5123429039035768e-13f */
	    0x45456443,  /* 3158.266357421875f */
	    0x3D3D5C47,  /* 0.046230580657720566f */
	    0x43436246,  /* 195.38388061523438f */
	    0x3D3D5C4F,  /* 0.046230610460042953f */
	    0x59597841,
	    0x6E6E8C1B,
	    0x64648300,
	    0x6F6F8D02,
	    0x5C5C7B28,
	    0x50506F53,
	aobjEvent32Cmd23(0x25E, 19558),
	    0x4141604F,
	aobjEvent32Cmd16(0x040, 14941),
	aobjEvent32SetExtValAfterBlock(0x24A, 16725),
	    0x2C2C494D,  /* 2.4483360217680827e-12f */
	    0x21213C52,  /* 5.462875507204597e-19f */
	    0x30304D4A,  /* 6.413826136864031e-10f */
	    0x2E2E4B4B,  /* 3.9629893117121284e-11f */
	    0x36365449,
	    0x49496845,
	    0x5A5A7943,
	    0x5858772D,
	    0x67678500,
	    0x60607F08,
	    0x5757763F,
	    0x31314F63,
	    0x3E3E5D51,
	aobjEvent32Cmd23(0x05C, 19282),
	aobjEvent32SetInterp(13402, 0x236),
	    0x1F1F3951,
	aobjEvent32SetExtValAfterBlock(0x24A, 16715),
	    0x1E1E384E,  /* 8.37609389061018e-21f */
	    0x21213B4E,  /* 5.462741090355057e-19f */
	    0x14142959,  /* 7.48024488163796e-27f */
	    0x30304D4C,  /* 6.413827247087056e-10f */
	    0x49496844,
	    0x60607F3F,
	    0x5C5C7B30,
	    0x67678500,
	    0x58587711,
	    0x3E3E5D53,
	    0x3C3C5B57,
	    0x4141604A,
	aobjEvent32Cmd16(0x040, 14932),
	aobjEvent32Cmd16(0x242, 15438),
	aobjEvent32Cmd12(0x232, 12622),
	aobjEvent32Cmd12(0x232, 12621),
	aobjEvent32SetInterp(12878, 0x034),
	    0x1E1E384C,
	aobjEvent32Cmd16(0x040, 14928),
	    0x3232504D,
	    0x4141604D,
	    0x48486755,
	    0x65658431,
	    0x62628101,
	    0x46466513,
	    0x57577644,
	    0x4646654D,
	    0x3838574B,
	aobjEvent32SetInterp(12883, 0x034),
	    0x2E2E4B42,
	aobjEvent32SetExtValBlock(0x252, 17730),
	    0x1E1E374A,  /* 8.375883864282774e-21f */
	    0x17172E50,  /* 4.884918603663437e-25f */
	    0x2A2A4748,  /* 1.5123763786456523e-13f */
	    0x22223D53,  /* 2.198755876392264e-18f */
	    0x40405F4A,
	aobjEvent32Cmd22(0x058, 18786),
	    0x4242615F,
	    0x5D5D7C39,
	    0x5D5D7C01,
	    0x4D4D6D0A,
	    0x60607F39,
	    0x3434525E,
	    0x30304E53,
	    0x30304E48,
	aobjEvent32Cmd16(0x040, 14924),
	aobjEvent32SetExtVal(0x054, 18243),
	    0x21213B4B,  /* 5.462739539391408e-19f */
	    0x1F1F3950,  /* 3.3716967442215384e-20f */
	    0x30304E4B,  /* 6.413968800522696e-10f */
	aobjEvent32Cmd16(0x040, 14941),
	    0x42426151,
	    0x3E3E5D5D,
	    0x4D4D6C5E,
	    0x5A5A793D,
	    0x63638201,
	    0x6E6E8C03,
	    0x5C5C7B31,
	    0x5252714D,
	    0x3333515A,
	aobjEvent32SetExtValAfterBlock(0x24A, 16472),
	    0x25254050,  /* 1.4333258599376775e-16f */
	    0x1E1E3854,  /* 8.376098737371582e-21f */
	    0x17172E5C,  /* 4.884924520120226e-25f */
	    0x25254156,  /* 1.4333605353489558e-16f */
	aobjEvent32SetExtValAfter(0x24E, 17244),
	    0x2B2B4863,  /* 6.085186065978021e-13f */
	    0x52527150,  /* 225961050112.0f */
	    0x54547359,  /* 3649873117184.0f */
	    0x57577660,  /* 236903416725504.0f */
	    0x62628137,  /* 1.0445687678532426e+21f */
	    0x62628100,
	    0x67678500,
	    0x5A5A7912,
	    0x5C5C7B3F,
	    0x3D3D5C5B,
	    0x3C3C5B55,
	aobjEvent32SetExtValAfter(0x04C, 16989),
	    0x30304D56,  /* 6.413832798202179e-10f */
	    0x2C2C495D,  /* 2.4483394912150347e-12f */
	    0x24243F66,  /* 3.561553182289149e-17f */
	    0x3B3B5A5B,
	    0x38385767,
	    0x4A4A6963,
	    0x54547363,
	    0x5A5A7963,
	    0x5D5D7C32,
	    0x58587700,
	    0x64648300,
	    0x69698702,
	    0x58587721,
	    0x5151704F,
	    0x4B4B6A58,
	    0x3A3A5960,
	    0x38385760,
	    0x3A3A5961,
	    0x4A4A695C,
	    0x43436268,
	    0x4141606F,
	    0x6161805C,
	    0x4F4F6E73,
	    0x5151706A,
	    0x6262811C,
	    0x63638200,
	    0x69698700,
	    0x65658400,
	    0x65658402,
	    0x60607F25,
	    0x5B5B7A4E,
	    0x5A5A7955,
	    0x5151705F,
	    0x4B4B6A66,
	    0x4C4C6B69,
	    0x45456474,
	    0x5252716F,
	    0x5A5A796B,
	    0x57577669,
	    0x6868862D,
	    0x73739002,
	    0x74749100,
	    0x76769300,
	    0x6C6C8A00,
	    0x5F5F7E00,
	    0x5D5D7C02,
	    0x67678519,
	    0x5757763B,
	    0x5454734C,
	    0x5A5A794D,
	    0x4D4D6D56,
	    0x5A5A794B,
	    0x5757764A,
	    0x5D5D7C35,
	    0x62628116,
	    0x6F6F8D01,
	    0x79799600,
	    0x70708E00,
	    0x76769300,
	    0x7B7B9700,
	    0x74749100,
	    0x67678500,
	    0x6F6F8D00,
	    0x6C6C8A01,
	    0x62628103,
	    0x5B5B7A05,
	    0x55557405,
	    0x65658403,
	    0x60607F01,
	    0x73739000,
	    0x6F6F8D00,
	    0x6A6A8800,
	    0x6F6F8D00,
	    0x7B7B9700,
	aobjEvent32EndRaw(0x12E, 0),
	aobjEvent32EndRaw(0x21C, 0),
	aobjEvent32JumpCmd(0x000, 511),
	    (u32)0xB3B3B300,
	    0xFE6E0000,
	aobjEvent32EndRaw(0x218, 0),
	aobjEvent32EndRaw(0x000, 512),
	    0xB3B3B300,
	    0xFE6F0000,
	    0xFF890000,
	aobjEvent32End(),
	    0xB3B3B300,
	aobjEvent32EndRaw(0x130, 0),
	    0xFF8B0000,
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0xB3B3B300,
	    0xFFFB0000,
	aobjEvent32EndRaw(0x1C8, 0),
	aobjEvent32JumpCmd(0x000, 512),
	    (u32)0xB3B3B300,
	    0xFE270000,
	aobjEvent32EndRaw(0x1C4, 0),
	aobjEvent32EndRaw(0x000, 512),
	    0xB3B3B300,
	    0xFE280000,
	    0xFF9B0000,
	aobjEvent32End(),
	    0xB3B3B300,
	    0xFFFC0000,
	    0xFF9D0000,
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0xB3B3B300,
	aobjEvent32EndRaw(0x0A0, 0),
	aobjEvent32EndRaw(0x37E, 0),
	aobjEvent32JumpCmd(0x000, 512),
	    (u32)0xB3B3B300,
	    0xFE270000,
	aobjEvent32EndRaw(0x37A, 0),
	aobjEvent32EndRaw(0x000, 511),
	    0xB3B3B300,
	    0xFE290000,
	    0xFEBA0000,
	aobjEvent32End(),
	    0xB3B3B300,
	aobjEvent32EndRaw(0x0A6, 0),
	    0xFEBC0000,
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0xB3B3B300,
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5180000,
	aobjEvent32SetValBlock(0x202, 64),
	    0xF5180800,  /* -1.92722505315948e+32f */
	    0x00090240,  /* 8.27326613337372e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x007, 16444),
	    0xFD180000,
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1408),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF100,
	    0xE7000000,
	aobjEvent32End(),
	    0xDE000000,
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1940),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1808),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1848),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xDF000000,  /* -9.223372036854776e+18f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1888),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 0),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x18C8),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1960),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1980),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
};

/* ──────────────── Projected leg shadow ─────────────────────────────────── */

/* `llMVOpeningYamabukiLegsShadowDObjDesc` — 4-joint DObjDesc tree.
 * Entries 1, 2, 3 each point into the tail of LegsAnimJoint where three
 * small shadow-render DLs are packed. */

DObjDesc dMVOpeningYamabuki_LegsShadowDObjDesc[5] = {
	{ 0, NULL, { 26.818335f, -29.66133f, -670.0845f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19C0), { 1285.9763f, 0.989575f, -366.32028f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19D0), { 1645.5571f, 0.989575f, -673.21893f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x19E0), { 1523.6108f, 0.989575f, -519.7696f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(4);

/* `llMVOpeningYamabukiLegsShadowAnimJoint` (5,712 B). */
u32 dMVOpeningYamabuki_LegsShadowAnimJoint[1428] = {
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x10),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x28),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x80),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xC8),
	aobjEvent32SetValAfter(0x070, 0),
	    0x41D68BF3,  /* 26.818334579467773f */
	    0xC1ED4A67,  /* -29.66132926940918f */
	    0xC4278568,  /* -670.08447265625f */
	aobjEvent32Wait(160),
	aobjEvent32End(),
	aobjEvent32SetVal(0x010, 0),
	    0x44A0BF3E,  /* 1285.976318359375f */
	aobjEvent32SetValAfter(0x060, 0),
	    0x3F7D54C9,  /* 0.9895749688148499f */
	    0xC3B728FF,  /* -366.3202819824219f */
	aobjEvent32SetValBlock(0x010, 30),
	    0x44A0BF3E,  /* 1285.976318359375f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC21775CA,  /* -37.865028381347656f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0xC4767B39,  /* -985.9253540039062f */
	    0xC21775CA,  /* -37.865028381347656f */
	aobjEvent32SetValBlock(0x010, 30),
	    0xC4767B39,  /* -985.9253540039062f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC1FDD0B5,  /* -31.72690773010254f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0xC53498A3,  /* -2889.539794921875f */
	    0xC1D98E51,  /* -27.194490432739258f */
	aobjEvent32SetValBlock(0x010, 40),
	    0xC53498A3,  /* -2889.539794921875f */
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x010, 0),
	    0x44CDB1D4,  /* 1645.55712890625f */
	aobjEvent32SetValAfterBlock(0x060, 0),
	    0x3F7D54C9,  /* 0.9895749688148499f */
	    0xC4284E03,  /* -673.2189331054688f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0x436CA663,  /* 236.6499481201172f */
	    0xC1BBDAB3,  /* -23.481786727905273f */
	aobjEvent32SetValBlock(0x010, 30),
	    0x436CA663,  /* 236.6499481201172f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC20D0749,  /* -35.25711441040039f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0xC4EAD8DB,  /* -1878.7767333984375f */
	    0xC1A93BEF,  /* -21.154264450073242f */
	aobjEvent32SetValBlock(0x010, 70),
	    0xC4EAD8DB,  /* -1878.7767333984375f */
	aobjEvent32End(),
	aobjEvent32SetVal0Rate(0x010, 0),
	    0x44BE738C,  /* 1523.61083984375f */
	aobjEvent32SetValAfterBlock(0x060, 0),
	    0x3F7D54C9,  /* 0.9895749688148499f */
	    0xC401F141,  /* -519.7695922851562f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0x442C408E,  /* 689.0086669921875f */
	    0xC204C3DC,  /* -33.19126892089844f */
	aobjEvent32SetValRateBlock(0x010, 30),
	    0xC3E9EEC2,  /* -467.86529541015625f */
	    0xC213EA24,  /* -36.97865295410156f */
	aobjEvent32SetVal0RateBlock(0x010, 30),
	    0xC4BF36BD,  /* -1529.7105712890625f */
	aobjEvent32SetValBlock(0x010, 70),
	    0xC4BF36BD,  /* -1529.7105712890625f */
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	aobjEvent32End(),
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBCEFB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xCEFBCEFB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xCEFBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xCEFBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBAE33,
	    0x639F298D,
	aobjEvent32EndRaw(0x002, 10637),
	    0x639FAE33,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xAE334255,
	aobjEvent32EndRaw(0x002, 1),
	aobjEvent32EndRaw(0x002, 1),
	aobjEvent32EndRaw(0x002, 16981),
	    0xAE33C6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0x639F0001,
	    0x31899CD9,
	    0xEF659CD9,
	    0x31890001,
	    0x639FC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBCEFB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	    0xC6FBC6FB,
	aobjEvent32SetVal0RateBlock(0x10A, 1),
	    0x9CD9FFE7,  /* -1.4426004639375836e-21f */
	    0xFFE7FFE7,  /* nanf */
	    0x9CD90001,  /* -1.435985644366252e-21f */
	aobjEvent32SetVal0RateBlock(0x10B, 18171),
	    0xC6FBC6FB,  /* -32227.490234375f */
	    0xC6FBC6FB,  /* -32227.490234375f */
	    0xC6FBC6FB,  /* -32227.490234375f */
	    0xC6FBC6FB,  /* -32227.490234375f */
	    0xC6FBC6FB,
	aobjEvent32SetExtValBlock(0x31A, 10637),
	    0x298D298D,  /* 6.268865770453838e-14f */
	    0x298D298D,  /* 6.268865770453838e-14f */
	    0x298D298D,  /* 6.268865770453838e-14f */
	    0x298D298D,  /* 6.268865770453838e-14f */
	    0x318F10C7,  /* 4.163755118469226e-09f */
	aobjEvent32EndRaw(0x002, 1),
	    0xEF65FFE7,
	    0xFFE7FFE7,
	    0xEF650001,
	aobjEvent32EndRaw(0x002, 4229),
	aobjEvent32Cmd16(0x212, 8457),
	aobjEvent32Cmd16(0x212, 8457),
	aobjEvent32Cmd16(0x212, 8457),
	aobjEvent32Cmd16(0x212, 8457),
	aobjEvent32Cmd16(0x212, 8457),
	aobjEvent32SetExtValBlock(0x18E, 10439),
	    0x28C728C7,  /* 2.211112254391339e-14f */
	    0x28C728C7,  /* 2.211112254391339e-14f */
	    0x28C728C7,  /* 2.211112254391339e-14f */
	    0x28C728C7,  /* 2.211112254391339e-14f */
	    0x30850801,  /* 9.679298473841413e-10f */
	aobjEvent32EndRaw(0x002, 1),
	    0x9CD9FFE7,
	    0xFFE7FFE7,
	    0x9CD90001,
	aobjEvent32EndRaw(0x002, 10373),
	aobjEvent32Cmd16(0x18E, 8391),
	aobjEvent32Cmd16(0x18E, 8391),
	aobjEvent32Cmd16(0x18E, 8391),
	aobjEvent32Cmd16(0x18E, 8391),
	aobjEvent32Cmd16(0x18E, 8391),
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xB8010001,
	    0x31899CD9,
	    0xEF659CD9,
	    0x31890001,
	    0xB801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF8019001,
	aobjEvent32EndRaw(0x002, 1),
	aobjEvent32EndRaw(0x002, 1),
	aobjEvent32EndRaw(0x003, 4097),
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xD8013801,
	aobjEvent32EndRaw(0x002, 14337),
	    0xD801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	    0xF801F801,
	aobjEvent32End(),
	aobjEvent32End(),
	    0x77779400,
	    0x77779400,
	    0x6B6B8900,
	    0x6D6D8B00,
	    0x67678500,
	    0x65658402,
	    0x5C5C7B08,
	    0x5E5E7D0B,
	    0x6E6E8C0B,
	    0x6E6E8C0B,
	    0x63638209,
	    0x6A6A8803,
	    0x79799600,
	    0x76769300,
	    0x6F6F8D00,
	    0x7C7C9800,
	    0x74749100,
	    0x72728F00,
	    0x73739000,
	    0x57577609,
	    0x52527128,
	    0x5252713F,
	    0x4C4C6B4C,
	    0x4F4F6E4C,
	    0x50506F49,
	    0x59597846,
	    0x6B6B893C,
	    0x5D5D7C3B,
	    0x67678517,
	    0x6E6E8C01,
	    0x73739000,
	    0x76769300,
	    0x73739000,
	    0x5E5E7D00,
	    0x6363820A,
	    0x5A5A7940,
	    0x57577654,
	    0x5A5A794D,
	    0x44446356,
	    0x49496850,
	    0x43436252,
	    0x46466552,
	    0x49496853,
	    0x5A5A7948,
	    0x6262813A,
	    0x69698713,
	    0x72728F00,
	    0x6E6E8C00,
	    0x64648300,
	    0x60607F02,
	    0x58587730,
	    0x45456463,
	    0x55557452,
	    0x3E3E5D5C,
	    0x35355359,
	    0x4646654A,
	    0x4444634A,
	    0x4D4D6D47,
	    0x4343624E,
	    0x4949684B,
	    0x51517048,
	    0x5F5F7E36,
	    0x6B6B8909,
	    0x70708E00,
	    0x70708E00,
	    0x6464830F,
	    0x5555744A,
	    0x51517053,
	    0x4A4A6952,
	    0x3A3A5956,
	    0x31314F53,
	aobjEvent32SetValAfter(0x22E, 11875),
	    0x2A2A4651,  /* 1.5123429039035768e-13f */
	    0x45456443,  /* 3158.266357421875f */
	    0x3D3D5C47,  /* 0.046230580657720566f */
	    0x43436246,  /* 195.38388061523438f */
	    0x3D3D5C4F,  /* 0.046230610460042953f */
	    0x59597841,
	    0x6E6E8C1B,
	    0x64648300,
	    0x6F6F8D02,
	    0x5C5C7B28,
	    0x50506F53,
	aobjEvent32Cmd23(0x25E, 19558),
	    0x4141604F,
	aobjEvent32Cmd16(0x040, 14941),
	aobjEvent32SetExtValAfterBlock(0x24A, 16725),
	    0x2C2C494D,  /* 2.4483360217680827e-12f */
	    0x21213C52,  /* 5.462875507204597e-19f */
	    0x30304D4A,  /* 6.413826136864031e-10f */
	    0x2E2E4B4B,  /* 3.9629893117121284e-11f */
	    0x36365449,
	    0x49496845,
	    0x5A5A7943,
	    0x5858772D,
	    0x67678500,
	    0x60607F08,
	    0x5757763F,
	    0x31314F63,
	    0x3E3E5D51,
	aobjEvent32Cmd23(0x05C, 19282),
	aobjEvent32SetInterp(13402, 0x236),
	    0x1F1F3951,
	aobjEvent32SetExtValAfterBlock(0x24A, 16715),
	    0x1E1E384E,  /* 8.37609389061018e-21f */
	    0x21213B4E,  /* 5.462741090355057e-19f */
	    0x14142959,  /* 7.48024488163796e-27f */
	    0x30304D4C,  /* 6.413827247087056e-10f */
	    0x49496844,
	    0x60607F3F,
	    0x5C5C7B30,
	    0x67678500,
	    0x58587711,
	    0x3E3E5D53,
	    0x3C3C5B57,
	    0x4141604A,
	aobjEvent32Cmd16(0x040, 14932),
	aobjEvent32Cmd16(0x242, 15438),
	aobjEvent32Cmd12(0x232, 12622),
	aobjEvent32Cmd12(0x232, 12621),
	aobjEvent32SetInterp(12878, 0x034),
	    0x1E1E384C,
	aobjEvent32Cmd16(0x040, 14928),
	    0x3232504D,
	    0x4141604D,
	    0x48486755,
	    0x65658431,
	    0x62628101,
	    0x46466513,
	    0x57577644,
	    0x4646654D,
	    0x3838574B,
	aobjEvent32SetInterp(12883, 0x034),
	    0x2E2E4B42,
	aobjEvent32SetExtValBlock(0x252, 17730),
	    0x1E1E374A,  /* 8.375883864282774e-21f */
	    0x17172E50,  /* 4.884918603663437e-25f */
	    0x2A2A4748,  /* 1.5123763786456523e-13f */
	    0x22223D53,  /* 2.198755876392264e-18f */
	    0x40405F4A,
	aobjEvent32Cmd22(0x058, 18786),
	    0x4242615F,
	    0x5D5D7C39,
	    0x5D5D7C01,
	    0x4D4D6D0A,
	    0x60607F39,
	    0x3434525E,
	    0x30304E53,
	    0x30304E48,
	aobjEvent32Cmd16(0x040, 14924),
	aobjEvent32SetExtVal(0x054, 18243),
	    0x21213B4B,  /* 5.462739539391408e-19f */
	    0x1F1F3950,  /* 3.3716967442215384e-20f */
	    0x30304E4B,  /* 6.413968800522696e-10f */
	aobjEvent32Cmd16(0x040, 14941),
	    0x42426151,
	    0x3E3E5D5D,
	    0x4D4D6C5E,
	    0x5A5A793D,
	    0x63638201,
	    0x6E6E8C03,
	    0x5C5C7B31,
	    0x5252714D,
	    0x3333515A,
	aobjEvent32SetExtValAfterBlock(0x24A, 16472),
	    0x25254050,  /* 1.4333258599376775e-16f */
	    0x1E1E3854,  /* 8.376098737371582e-21f */
	    0x17172E5C,  /* 4.884924520120226e-25f */
	    0x25254156,  /* 1.4333605353489558e-16f */
	aobjEvent32SetExtValAfter(0x24E, 17244),
	    0x2B2B4863,  /* 6.085186065978021e-13f */
	    0x52527150,  /* 225961050112.0f */
	    0x54547359,  /* 3649873117184.0f */
	    0x57577660,  /* 236903416725504.0f */
	    0x62628137,  /* 1.0445687678532426e+21f */
	    0x62628100,
	    0x67678500,
	    0x5A5A7912,
	    0x5C5C7B3F,
	    0x3D3D5C5B,
	    0x3C3C5B55,
	aobjEvent32SetExtValAfter(0x04C, 16989),
	    0x30304D56,  /* 6.413832798202179e-10f */
	    0x2C2C495D,  /* 2.4483394912150347e-12f */
	    0x24243F66,  /* 3.561553182289149e-17f */
	    0x3B3B5A5B,
	    0x38385767,
	    0x4A4A6963,
	    0x54547363,
	    0x5A5A7963,
	    0x5D5D7C32,
	    0x58587700,
	    0x64648300,
	    0x69698702,
	    0x58587721,
	    0x5151704F,
	    0x4B4B6A58,
	    0x3A3A5960,
	    0x38385760,
	    0x3A3A5961,
	    0x4A4A695C,
	    0x43436268,
	    0x4141606F,
	    0x6161805C,
	    0x4F4F6E73,
	    0x5151706A,
	    0x6262811C,
	    0x63638200,
	    0x69698700,
	    0x65658400,
	    0x65658402,
	    0x60607F25,
	    0x5B5B7A4E,
	    0x5A5A7955,
	    0x5151705F,
	    0x4B4B6A66,
	    0x4C4C6B69,
	    0x45456474,
	    0x5252716F,
	    0x5A5A796B,
	    0x57577669,
	    0x6868862D,
	    0x73739002,
	    0x74749100,
	    0x76769300,
	    0x6C6C8A00,
	    0x5F5F7E00,
	    0x5D5D7C02,
	    0x67678519,
	    0x5757763B,
	    0x5454734C,
	    0x5A5A794D,
	    0x4D4D6D56,
	    0x5A5A794B,
	    0x5757764A,
	    0x5D5D7C35,
	    0x62628116,
	    0x6F6F8D01,
	    0x79799600,
	    0x70708E00,
	    0x76769300,
	    0x7B7B9700,
	    0x74749100,
	    0x67678500,
	    0x6F6F8D00,
	    0x6C6C8A01,
	    0x62628103,
	    0x5B5B7A05,
	    0x55557405,
	    0x65658403,
	    0x60607F01,
	    0x73739000,
	    0x6F6F8D00,
	    0x6A6A8800,
	    0x6F6F8D00,
	    0x7B7B9700,
	aobjEvent32EndRaw(0x02D, 32714),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x078, 330),
	    (u32)0x12D37600,
	aobjEvent32EndRaw(0x0C9, 32668),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x2A8, 177),
	    (u32)0x53ADCF00,
	aobjEvent32EndRaw(0x02C, 54),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x078, 693),
	    (u32)0x122D7600,
	aobjEvent32EndRaw(0x052, 100),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x0FE, 846),
	    (u32)0x22535A00,
	aobjEvent32EndRaw(0x06C, 131),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x15E, 949),
	    (u32)0x2D6D3100,
	aobjEvent32EndRaw(0x076, 142),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x186, 985),
	    (u32)0x30760000,
	aobjEvent32EndRaw(0x06C, 131),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x174, 949),
	    (u32)0x2D6DCF00,
	aobjEvent32EndRaw(0x0D9, 32660),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x2D4, 149),
	    (u32)0x5AA60000,
	aobjEvent32EndRaw(0x0C9, 32668),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x290, 177),
	    (u32)0x53AD3100,
	aobjEvent32EndRaw(0x09B, 32691),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x1EA, 256),
	    (u32)0x3FC15A00,
	aobjEvent32EndRaw(0x052, 41),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x0F8, 650),
	    (u32)0x22227600,
	aobjEvent32EndRaw(0x09A, 77),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x1EA, 767),
	    (u32)0x3F3F5A00,
	aobjEvent32EndRaw(0x0C8, 100),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x290, 846),
	    (u32)0x53533100,
	aobjEvent32EndRaw(0x0D8, 108),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x2D4, 874),
	    (u32)0x5A5A0000,
	aobjEvent32EndRaw(0x0C8, 100),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x2A8, 846),
	    (u32)0x5353CF00,
	aobjEvent32EndRaw(0x053, 32727),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x0F8, 373),
	    (u32)0x22DE7600,
	aobjEvent32EndRaw(0x107, 32714),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x374, 330),
	    (u32)0x6DD3CF00,
	aobjEvent32EndRaw(0x11D, 32709),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x3B2, 316),
	    (u32)0x76D00000,
	aobjEvent32EndRaw(0x06C, 22),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x14C, 586),
	    (u32)0x2D127600,
	aobjEvent32EndRaw(0x106, 54),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x374, 693),
	    (u32)0x6D2DCF00,
	aobjEvent32EndRaw(0x11C, 0),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x3BC, 512),
	    (u32)0x7600CF00,
	aobjEvent32EndRaw(0x11C, 59),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x3B2, 707),
	    (u32)0x76300000,
	aobjEvent32EndRaw(0x132, 0),
	aobjEvent32End(),
	aobjEvent32Wait(512),
	    0x7F000000,
	aobjEvent32EndRaw(0x106, 54),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x35E, 693),
	    (u32)0x6D2D3100,
	aobjEvent32EndRaw(0x0C8, 41),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x286, 650),
	    (u32)0x53225A00,
	aobjEvent32EndRaw(0x107, 32714),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x35E, 330),
	    (u32)0x6DD33100,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x3A6, 512),
	    (u32)0x76003100,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x2BE, 512),
	    (u32)0x5A005A00,
	aobjEvent32EndRaw(0x0C9, 32727),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x286, 373),
	    (u32)0x53DE5A00,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x132, 0),
	aobjEvent32EndRaw(0x3E0, 512),
	aobjEvent32EndRaw(0x000, 32512),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x16A, 512),
	    (u32)0x30007600,
	aobjEvent32EndRaw(0x06D, 32746),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32JumpCmd(0x14C, 437),
	    (u32)0x2DEE7600,
	    0xFF7D0036,
	    0xFFC50000,
	aobjEvent32EndRaw(0x0A0, 693),
	    0x932DCF00,
	    0xFF72003B,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x04C, 707),
	    0x8A300000,
	    0xFF720000,
	    0xFFC50000,
	aobjEvent32EndRaw(0x058, 511),
	    0x8A00CF00,
	    0xFF670000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 511),
	    0x80000000,
	    0xFF7DFFCA,
	    0xFFC50000,
	aobjEvent32EndRaw(0x0A0, 330),
	    0x93D3CF00,
	    0xFF72FFC5,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x04C, 316),
	    0x8AD00000,
	    0xFF9CFF9C,
	    0xFFC50000,
	aobjEvent32EndRaw(0x16E, 177),
	    0xADADCF00,
	    0xFF94FF94,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x12A, 149),
	    0xA6A60000,
	    0xFF9CFF9C,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x156, 177),
	    0xADAD3100,
	    0xFFB3FFB3,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x1EA, 255),
	    0xC1C15A00,
	    0xFFD7FFD7,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x2CE, 373),
	    0xDEDE7600,
	    0xFFCAFF7D,
	    0xFFC50000,
	aobjEvent32EndRaw(0x2A0, 74),
	    0xD393CF00,
	    0xFFC5FF72,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x278, 38),
	    0xD08A0000,
	    0xFFCAFF7D,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x28A, 74),
	    0xD3933100,
	    0xFFD7FF9C,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x2D4, 177),
	    0xDEAD5A00,
	    0xFFEAFFCA,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x34C, 330),
	    0xEED37600,
	aobjEvent32EndRaw(0x001, 32626),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x00A, 38),
	    (u32)0x008ACF00,
	aobjEvent32EndRaw(0x001, 32615),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 0),
	    (u32)0x00800000,
	aobjEvent32EndRaw(0x001, 32626),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x3F4, 38),
	aobjEvent32EndRaw(0x114, 12544),
	aobjEvent32EndRaw(0x001, 32709),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x3E2, 316),
	aobjEvent32EndRaw(0x1A0, 30208),
	aobjEvent32EndRaw(0x001, 32660),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x3EA, 149),
	aobjEvent32EndRaw(0x14C, 23040),
	aobjEvent32EndRaw(0x06D, 32637),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x174, 74),
	    (u32)0x2D93CF00,
	aobjEvent32EndRaw(0x077, 32626),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x186, 38),
	    (u32)0x308A0000,
	aobjEvent32EndRaw(0x06D, 32637),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32JumpCmd(0x15E, 74),
	    (u32)0x2D933100,
	aobjEvent32EndRaw(0x053, 32668),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32JumpCmd(0x0FE, 177),
	    (u32)0x22AD5A00,
	    0xFF7DFFCA,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x08A, 330),
	    0x93D33100,
	    0xFFC50000,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x25A, 511),
	    0xD0007600,
	    0xFF940000,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x116, 511),
	    0xA6005A00,
	    0xFF720000,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x042, 511),
	    0x8A003100,
	    0xFFCA0016,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x278, 586),
	    0xD3127600,
	    0xFF9C0029,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x14C, 650),
	    0xAD225A00,
	    0xFF7D0036,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x08A, 693),
	    0x932D3100,
	    0xFFD70029,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x2CE, 650),
	    0xDE227600,
	    0xFFB3004D,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x1EA, 767),
	    0xC13F5A00,
	    0xFF9C0064,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x156, 846),
	    0xAD533100,
	    0xFFEA0036,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x34C, 693),
	    0xEE2D7600,
	    0xFFD70064,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x2D4, 846),
	    0xDE535A00,
	    0xFFCA0083,
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x28A, 949),
	    0xD36D3100,
	aobjEvent32EndRaw(0x000, 59),
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x3E2, 707),
	aobjEvent32EndRaw(0x060, 30208),
	aobjEvent32EndRaw(0x000, 108),
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x3EA, 874),
	aobjEvent32EndRaw(0x0B4, 23040),
	aobjEvent32EndRaw(0x000, 142),
	aobjEvent32EndRaw(0x076, 0),
	aobjEvent32EndRaw(0x3F4, 985),
	aobjEvent32EndRaw(0x0EC, 12544),
	aobjEvent32EndRaw(0x000, 142),
	    0xFFC50000,
	aobjEvent32JumpCmd(0x00A, 985),
	    (u32)0x0076CF00,
	aobjEvent32EndRaw(0x000, 153),
	aobjEvent32End(),
	aobjEvent32JumpCmd(0x000, 1024),
	    (u32)0x007F0000,
	    0xFFC5008E,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x278, 985),
	    0xD0760000,
	    0xFFCA0083,
	    0xFFC50000,
	aobjEvent32EndRaw(0x2A0, 949),
	    0xD36DCF00,
	    0xFF94006C,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x12A, 874),
	    0xA65A0000,
	    0xFF9C0064,
	    0xFFC50000,
	aobjEvent32EndRaw(0x16E, 846),
	    0xAD53CF00,
	    0xFFCAFFEA,
	aobjEvent32EndRaw(0x11C, 0),
	aobjEvent32EndRaw(0x278, 437),
	    0xD3EE7600,
	    0xFF9CFFD7,
	aobjEvent32EndRaw(0x0D8, 0),
	aobjEvent32EndRaw(0x14C, 373),
	    0xADDE5A00,
	aobjEvent32EndRaw(0x09D, 32754),
	aobjEvent32EndRaw(0x200, 0),
	aobjEvent32EndRaw(0x3EA, 512),
	    0xB3B3B300,
	    0xFE49FFF2,
	aobjEvent32EndRaw(0x0BC, 0),
	aobjEvent32EndRaw(0x000, 490),
	    0xB3B3B300,
	    0xFEBAFFF2,
	    0xFEF50000,
	aobjEvent32EndRaw(0x014, 0),
	    0xB3B3B300,
	aobjEvent32EndRaw(0x17F, 32754),
	    0xFF960000,
	aobjEvent32JumpCmd(0x000, 21),
	    (u32)0xB3B3B300,
	    0xE7000000,
	aobjEvent32End(),
	    0xDB0A0000,
	    0xFFFFFF00,
	    0xDB0A0004,
	    0xFFFFFF00,
	    0xDB0A0018,
	    0x4C4C4C00,
	    0xDB0A001C,
	    0x4C4C4C00,
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF5100000,
	aobjEvent32SetValBlock(0x202, 16464),
	    0xF5101000,  /* -1.826209145953793e+32f */
	    0x00094250,  /* 8.50307908152299e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x00F, 16508),
	    0xFD100000,
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x118),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x073FF100,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x204, 64),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xD20),
	aobjEvent32SetValBlock(0x07C, 15418),
	    0x003C3E38,  /* 5.5324496514192384e-39f */
	    0x06363C38,  /* 3.4274637246219124e-35f */
	    0x00363834,  /* 4.979278674836231e-39f */
	    0x06383234,  /* 3.46434371193526e-35f */
	    0x00303634,  /* 4.427548233074549e-39f */
	aobjEvent32SetValBlock(0x05C, 12340),
	    0x002E342C,  /* 4.243148565557118e-39f */
	    0x062A2E2C,  /* 3.200736807875958e-35f */
	    0x002A2C28,  /* 3.8729311164763586e-39f */
	    0x06262A28,  /* 3.125210147891924e-35f */
	aobjEvent32EndRaw(0x060, 9276),
	aobjEvent32SetValBlock(0x06C, 12348),
	    0x003C243A,  /* 5.523125411437621e-39f */
	    0x0632222C,  /* 3.350318464018094e-35f */
	    0x0034322C,  /* 4.793444077691331e-39f */
	    0x062C2220,  /* 3.2374675625080484e-35f */
	aobjEvent32EndRaw(0x050, 11296),
	aobjEvent32SetValBlock(0x03C, 15930),
	    0x002A261C,  /* 3.870761906453584e-39f */
	    0x061A2A1C,  /* 2.899511788702939e-35f */
	    0x00182E2A,  /* 2.2206124530431798e-39f */
	    0x061A182A,  /* 2.8981933753612206e-35f */
	aobjEvent32EndRaw(0x02C, 12334),
	aobjEvent32SetValBlock(0x030, 5678),
	    0x00161424,  /* 2.0276060103578654e-39f */
	    0x06301624,  /* 3.31181872814126e-35f */
	aobjEvent32EndRaw(0x048, 5178),
	aobjEvent32SetValBlock(0x07C, 7698),
	    0x00383E12,  /* 5.165054417445629e-39f */
	    0x06121032,  /* 2.7471446471679606e-35f */
	    0x00381232,  /* 5.149315033094333e-39f */
	    0x06100E22,  /* 2.7093772993729867e-35f */
	    0x00321022,  /* 4.597562170557222e-39f */
	aobjEvent32SetValBlock(0x034, 7180),
	    0x000A1A0C,  /* 9.2769881974003e-40f */
	    0x06181A0A,  /* 2.8607153093791444e-35f */
	    0x0008180A,  /* 7.433075600133846e-40f */
	aobjEvent32SetValBlock(0x02C, 6152),
	    0x00061608,  /* 5.589163002867392e-40f */
	    0x06060414,  /* 2.5205595014692e-35f */
	    0x00160614,  /* 2.022561335886296e-39f */
	aobjEvent32SetValBlock(0x028, 1082),
	    0x00220E02,  /* 3.12743192566477e-39f */
	    0x06202202,  /* 3.0117640375724044e-35f */
	aobjEvent32EndRaw(0x000, 7738),
	aobjEvent32EndRaw(0x200, 20494),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xF20),
	aobjEvent32EndRaw(0x200, 20510),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xF70),
	aobjEvent32EndRaw(0x201, 20538),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xFC0),
	aobjEvent32EndRaw(0x200, 8256),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1090),
	aobjEvent32SetValBlock(0x03C, 62),
	    0x00121E3E,  /* 1.6638877835546445e-39f */
	    0x06123E10,  /* 2.750514435905108e-35f */
	    0x003E3C10,  /* 5.7153471269829135e-39f */
	    0x06103C0E,  /* 2.712751105913091e-35f */
	aobjEvent32EndRaw(0x078, 14350),
	aobjEvent32SetValBlock(0x01C, 14338),
	    0x00383602,  /* 5.162162137415263e-39f */
	    0x063E0034,  /* 3.5735177497678797e-35f */
	    0x00003234,  /* 1.800948786350255e-41f */
	aobjEvent32SetValBlock(0x064, 58),
	    0x0034303C,  /* 4.792749033653026e-39f */
	    0x063E343C,  /* 3.577340402295456e-35f */
	    0x00302E38,  /* 4.4246839790134694e-39f */
	aobjEvent32SetValBlock(0x078, 12344),
	    0x002E2C36,  /* 4.240292719286824e-39f */
	    0x06382E36,  /* 3.464050412319405e-35f */
	    0x002A323A,  /* 3.8751087342899194e-39f */
	    0x062A2834,  /* 3.2002982933818034e-35f */
	aobjEvent32EndRaw(0x064, 10804),
	aobjEvent32SetValBlock(0x050, 9776),
	    0x00342830,  /* 4.789862358816517e-39f */
	    0x06242E30,  /* 3.08789049814072e-35f */
	aobjEvent32EndRaw(0x04C, 9264),
	aobjEvent32SetValBlock(0x048, 8748),
	    0x002E242C,  /* 4.2374088470472435e-39f */
	    0x06202A3A,  /* 3.012367855959643e-35f */
	aobjEvent32EndRaw(0x040, 7208),
	aobjEvent32SetValBlock(0x054, 8232),
	    0x001A2628,  /* 2.4014107835072963e-39f */
	    0x061C1A28,  /* 2.9359555574095356e-35f */
	    0x00182426,  /* 2.217019523780651e-39f */
	aobjEvent32SetValBlock(0x034, 6182),
	    0x00162224,  /* 2.0326282640540056e-39f */
	    0x06181624,  /* 2.8604288974255016e-35f */
	    0x00161814,  /* 2.0290185192099048e-39f */
	aobjEvent32SetValBlock(0x018, 5652),
	    0x000C140A,  /* 1.1092146150178809e-39f */
	    0x06080C0A,  /* 2.5587601980116693e-35f */
	aobjEvent32EndRaw(0x010, 2566),
	aobjEvent32WaitRaw(0x208, 2054),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 8196),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xD40),
	aobjEvent32EndRaw(0x200, 4106),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xD60),
	aobjEvent32EndRaw(0x200, 8208),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xD70),
	aobjEvent32EndRaw(0x200, 8212),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x10B0),
	aobjEvent32EndRaw(0x202, 8250),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x10D0),
	aobjEvent32EndRaw(0x200, 8256),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x11F0),
	aobjEvent32SetValBlock(0x07C, 1030),
	    0x003C3E06,  /* 5.532379586496022e-39f */
	    0x06383E3C,  /* 3.4652276285857804e-35f */
	    0x0036383C,  /* 4.9792898852239455e-39f */
	    0x06363438,  /* 3.4268759774465013e-35f */
	    0x00343238,  /* 4.793460893272903e-39f */
	aobjEvent32SetValBlock(0x068, 3122),
	    0x000C0E32,  /* 1.107118272515251e-39f */
	    0x06080C34,  /* 2.55877225142054e-35f */
	    0x00300834,  /* 4.41104654235866e-39f */
	aobjEvent32SetValBlock(0x004, 2096),
	    0x002E0230,  /* 4.2252175504076176e-39f */
	aobjEvent32SetValBlock(0x004, 11820),
	    0x0000022C,  /* 7.791219461645983e-43f */
	aobjEvent32SetValBlock(0x000, 11322),
	aobjEvent32EndRaw(0x068, 13866),
	aobjEvent32SetValBlock(0x060, 13354),
	    0x002E302A,  /* 4.241710833332721e-39f */
	    0x06282E2A,  /* 3.1631204146777936e-35f */
	aobjEvent32EndRaw(0x05C, 10278),
	aobjEvent32SetValBlock(0x058, 11814),
	    0x002C263A,  /* 4.054474937723496e-39f */
	    0x06363C24,  /* 3.4274579849034026e-35f */
	    0x002A3624,  /* 3.876512835351173e-39f */
	aobjEvent32SetValBlock(0x054, 9250),
	    0x00282A22,  /* 3.688534251555856e-39f */
	    0x06282220,  /* 3.162235924055422e-35f */
	    0x00262820,  /* 3.5041429918292106e-39f */
	aobjEvent32SetValBlock(0x04C, 8250),
	    0x00061E24,  /* 5.6182539589867756e-40f */
	    0x063C0624,  /* 3.536338149148317e-35f */
	    0x001E1C22,  /* 2.7651570362798037e-39f */
	aobjEvent32SetValBlock(0x048, 7714),
	    0x00221C1A,  /* 3.132487810524054e-39f */
	    0x0620221A,  /* 3.011770925234616e-35f */
	aobjEvent32EndRaw(0x040, 6714),
	aobjEvent32SetValBlock(0x00C, 2590),
	    0x000A181E,  /* 9.270065782986535e-40f */
	    0x0618161C,  /* 2.8604266015380977e-35f */
	aobjEvent32EndRaw(0x03C, 6172),
	aobjEvent32SetValBlock(0x038, 5650),
	    0x001A1C12,  /* 2.3977926308724096e-39f */
	    0x061A123A,  /* 2.89775715675447e-35f */
	    0x00180A10,  /* 2.2076616526358898e-39f */
	aobjEvent32WaitRaw(0x214, 5136),
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0xF90),
	aobjEvent32EndRaw(0x200, 8204),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1210),
	aobjEvent32SetValBlock(0x030, 4106),
	    0x0016180A,  /* 2.0290045062252616e-39f */
	    0x0612160A,  /* 2.747573978112499e-35f */
	aobjEvent32EndRaw(0x010, 4618),
	aobjEvent32SetValBlock(0x024, 2106),
	    0x000A1004,  /* 9.241002852836439e-40f */
	    0x06100204,  /* 2.708487069032105e-35f */
	aobjEvent32EndRaw(0x020, 5122),
	aobjEvent32SetValBlock(0x028, 2),
	    0x00080A04,  /* 7.382768985264585e-40f */
	    0x06060804,  /* 2.5208487832820975e-35f */
	aobjEvent32EndRaw(0x010, 1594),
	    0xDF000000,
	aobjEvent32End(),
	    0xE7000000,
	aobjEvent32End(),
	    0xD9DDFFFF,
	aobjEvent32End(),
	    0xE2001E01,
	aobjEvent32EndRaw(0x000, 1),
	    0xFC127E24,
	    0xFFFFF3F9,
	    0xF9000000,
	aobjEvent32EndRaw(0x000, 8),
	    0xF5180000,
	aobjEvent32SetValBlock(0x202, 64),
	    0xF5180800,  /* -1.92722505315948e+32f */
	    0x00090240,  /* 8.27326613337372e-40f */
	    0xD7000002,
	    0xFFFFFFFF,
	    0xF2000000,
	aobjEvent32EndRaw(0x007, 16444),
	    0xFD180000,
	(u32)((u8*)dMVOpeningYamabuki_LegsAnimJoint + 0x1408),
	    0xE6000000,
	aobjEvent32End(),
	    0xF3000000,
	    0x070FF100,
	    0xE7000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x200, 16392),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1230),
	aobjEvent32SetValBlock(0x00C, 1026),
	    0x00000602,  /* 2.1551970381315687e-42f */
	    0xE7000000,  /* -6.044629098073146e+23f */
	aobjEvent32End(),
	    0xD9FFFFFF,
	aobjEvent32EndRaw(0x044, 0),
	    0xE2001E01,
	aobjEvent32End(),
	    0xDF000000,
	aobjEvent32End(),
	aobjEvent32EndRaw(0x000, 1),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1598),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
	aobjEvent32End(),
	(u32)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1270),
	aobjEvent32EndRaw(0x000, 4),
	aobjEvent32End(),
};

/* ──────────────── Master Ball on the carpet ────────────────────────────── */

/* `llMVOpeningYamabukiMBallDObjDesc` — 4-joint DObjDesc tree. Entries 1
 * and 2 point into the tail of LegsShadowAnimJoint where two small
 * MBall-render DLs are packed. */

DObjDesc dMVOpeningYamabuki_MBallDObjDesc[5] = {
	{ 0, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, -0.27f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 1, (void*)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1630), { 0.0f, 15.111347f, 103.71317f }, { 0.0f, 0.3f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 2, (void*)((u8*)dMVOpeningYamabuki_LegsShadowAnimJoint + 0x1640), { -2.1e-05f, 125.51372f, 2.9e-05f }, { 0.0f, 0.0f, 0.0f }, { 1.022218f, 1.022218f, 1.022218f } },
	{ 3, NULL, { -76.396164f, 161.02469f, -26.60802f }, { 0.738324f, 0.491944f, 0.149688f }, { 0.978265f, 0.978265f, 0.978265f } },
	{ 18, NULL, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* DOBJ_ARRAY_MAX terminator */
};
PAD(4);

/* `llMVOpeningYamabukiMBallAnimJoint` (2,160 B). */
/* Script-table split: leading chain-pointer table at the
 * start of the AnimJoint, followed by per-joint AObjEvent32
 * scripts. Forward decls so the table can reference them. */
extern u32 dMVOpeningYamabuki_MBallAnimJoint_0xCAD0[];
extern u32 dMVOpeningYamabuki_MBallAnimJoint_0xCAE8[];
extern u32 dMVOpeningYamabuki_MBallAnimJoint_0xCB94[];

AObjEvent32 *dMVOpeningYamabuki_MBallAnimJoint[4] = {
	(AObjEvent32 *)dMVOpeningYamabuki_MBallAnimJoint_0xCAD0,
	(AObjEvent32 *)dMVOpeningYamabuki_MBallAnimJoint_0xCAE8,
	(AObjEvent32 *)dMVOpeningYamabuki_MBallAnimJoint_0xCB94,
	NULL,
};

u32 dMVOpeningYamabuki_MBallAnimJoint_0xCAD0[] = {
	aobjEvent32SetValAfter(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0xBE8A3D71,  /* -0.27000001072883606f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(160),
	aobjEvent32End(),
};

u32 dMVOpeningYamabuki_MBallAnimJoint_0xCAE8[] = {
	aobjEvent32SetValRate(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0x40AC1B54,  /* 5.378335952758789f */
	aobjEvent32SetValAfterBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x3E9999A0,  /* 0.3000001907348633f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x010, 13),
	    0x425C4491,  /* 55.066959381103516f */
	    0x3F93C6A9,  /* 1.154500126838684f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F962BA5,  /* 1.1732069253921509f */
	aobjEvent32SetValRateBlock(0x010, 13),
	    0x425A8D60,  /* 54.6380615234375f */
	    0xC0090760,  /* -2.1410751342773438f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC08799EC,  /* -4.237539291381836f */
	aobjEvent32SetValRateBlock(0x010, 24),
	    0xC25AED2C,  /* -54.73161315917969f */
	    0xBF872749,  /* -1.0558863878250122f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xBF2830E6,  /* -0.6569961309432983f */
	aobjEvent32SetValRateBlock(0x010, 17),
	    0xC255232B,  /* -53.28434371948242f */
	    0x40070C01,  /* 2.110107660293579f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x40B13D07,  /* 5.538699626922607f */
	aobjEvent32SetValRateBlock(0x010, 29),
	    0x427550CE,  /* 61.32891082763672f */
	    0x3FD4015A,  /* 1.6562912464141846f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F7CEB19,  /* 0.9879623055458069f */
	aobjEvent32SetValRateBlock(0x010, 19),
	    0x427382BE,  /* 60.87767791748047f */
	    0xBFFF4A2A,  /* -1.9944508075714111f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0xC0857C24,  /* -4.171403884887695f */
	aobjEvent32SetValRateBlock(0x010, 39),
	    0xC28EC496,  /* -71.38395690917969f */
	    0xBFB90755,  /* -1.4455362558364868f */
	aobjEvent32SetVal0RateBlock(0x010, 6),
	    0xC293B89E,  /* -73.86058044433594f */
	aobjEvent32End(),
};

u32 dMVOpeningYamabuki_MBallAnimJoint_0xCB94[] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBD14BE12,  /* -0.03631407767534256f */
	    0xBD15D9F1,  /* -0.036584798246622086f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBD95D9F2,  /* -0.07316960394382477f */
	    0xBD1706F2,  /* -0.036871857941150665f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDE165FA,  /* -0.1100577861070633f */
	    0xBD161E74,  /* -0.03665013611316681f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE15FC33,  /* -0.1464698761701584f */
	    0xBD13207B,  /* -0.03591964766383171f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE3A433B,  /* -0.1818970888853073f */
	    0xBD0E0CFF,  /* -0.03468036279082298f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE5D02B2,  /* -0.21583059430122375f */
	    0xBD06E405,  /* -0.03293230012059212f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE7DB53D,  /* -0.24776168167591095f */
	    0xBCFB4B26,  /* -0.030675482004880905f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE8DEABE,  /* -0.27718156576156616f */
	    0xBCE4A33C,  /* -0.027909867465496063f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE9B6F06,  /* -0.3035814166069031f */
	    0xBCC9D055,  /* -0.024635473266243935f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEA724C9,  /* -0.3264525234699249f */
	    0xBCAAD284,  /* -0.020852334797382355f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEB0C957,  /* -0.345286101102829f */
	    0xBC87A9A5,  /* -0.01656038500368595f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEB819FD,  /* -0.35957327485084534f */
	    0xBC41D540,  /* -0.011830627918243408f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEBCE6AB,  /* -0.3689473569393158f */
	    0xBC0A8E77,  /* -0.008456817828118801f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC0C2E5,  /* -0.3764869272708893f */
	    0xBBEDADD0,  /* -0.007253386080265045f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC45419,  /* -0.3834541141986847f */
	    0xBBD769D1,  /* -0.006573893595486879f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC77E34,  /* -0.38963472843170166f */
	    0xBBBA214F,  /* -0.005680240225046873f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECA2524,  /* -0.3948146104812622f */
	    0xBB95D432,  /* -0.004572414793074131f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECC2CD5,  /* -0.3987795412540436f */
	    0xBB550477,  /* -0.0032503881957381964f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECD7935,  /* -0.4013153612613678f */
	    0xBAE0AF5B,  /* -0.001714210375212133f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECDEE34,  /* -0.40220797061920166f */
	    0x3817C61B,  /* 3.6185705539537594e-05f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECD6FB9,  /* -0.4012430012226105f */
	    0x3B031F03,  /* 0.002000749809667468f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECBE1B8,  /* -0.3982064723968506f */
	    0x3B88F3E5,  /* 0.004179465118795633f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC9281A,  /* -0.3928840756416321f */
	    0x3BD75D6C,  /* 0.006572416052222252f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC526CC,  /* -0.3850616216659546f */
	    0x3C1665B0,  /* 0.00917951762676239f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEBFC1BF,  /* -0.3745250403881073f */
	    0x3C5EDF60,  /* 0.013603061437606812f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEB738D7,  /* -0.35785552859306335f */
	    0x3CBE8ECC,  /* 0.023261450231075287f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEA7EFE6,  /* -0.3280021548271179f */
	    0x3CFC9767,  /* 0.030833913013339043f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE97A5EA,  /* -0.29618769884109497f */
	    0x3D05C9CF,  /* 0.03266316279768944f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE867D72,  /* -0.26267582178115845f */
	    0x3D0C337D,  /* 0.034228790551424026f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE693215,  /* -0.22773011028766632f */
	    0x3D1188C1,  /* 0.03553080931305885f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE443684,  /* -0.19161421060562134f */
	    0x3D15C9A5,  /* 0.0365692563354969f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE1E4D3F,  /* -0.15459154546260834f */
	    0x3D18F61E,  /* 0.03734409064054489f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDEF76E1,  /* -0.11692596226930618f */
	    0x3D1B0E30,  /* 0.037855327129364014f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDA18C57,  /* -0.07888095825910568f */
	    0x3D1C11D5,  /* 0.03810294345021248f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBD26CA2A,  /* -0.0407201424241066f */
	    0x3D1C0114,  /* 0.038086965680122375f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBB316740,  /* -0.002706959843635559f */
	    0x3D1ADBEB,  /* 0.03780738636851311f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3D0EEDBE,  /* 0.03489469736814499f */
	    0x3D18A25B,  /* 0.03726420924067497f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3D931716,  /* 0.07182137668132782f */
	    0x3D155460,  /* 0.03645741939544678f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3DDCCB35,  /* 0.10780946165323257f */
	    0x3D10F1FC,  /* 0.03538702428340912f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E12048D,  /* 0.14259548485279083f */
	    0x3D0B7B32,  /* 0.03405303508043289f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E342337,  /* 0.17591558396816254f */
	    0x3D04EFFF,  /* 0.0324554406106472f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E547C88,  /* 0.20750629901885986f */
	    0x3CFAA0CA,  /* 0.030594248324632645f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E72CB66,  /* 0.23710402846336365f */
	    0x3CE938C0,  /* 0.028469443321228027f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E87655E,  /* 0.2644452452659607f */
	    0x3CD5A7E3,  /* 0.026081031188368797f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E941AB1,  /* 0.2892661392688751f */
	    0x3CBFEE3F,  /* 0.023429034277796745f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E9F6324,  /* 0.3113032579421997f */
	    0x3CA80BBF,  /* 0.020513413473963737f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EA91C2A,  /* 0.3302929997444153f */
	    0x3C8E007E,  /* 0.017334219068288803f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EB12335,  /* 0.3459717333316803f */
	    0x3C6398BC,  /* 0.013891395181417465f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EB755B5,  /* 0.3580757677555084f */
	    0x3C235BAB,  /* 0.009970585815608501f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EBB58EF,  /* 0.36591288447380066f */
	    0x3BCC349E,  /* 0.006231858395040035f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EBDB75A,  /* 0.37053948640823364f */
	    0x3B9B0E33,  /* 0.004731917288154364f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC03161,  /* 0.37537673115730286f */
	    0x3B9EFE3C,  /* 0.004852084442973137f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC2AF4B,  /* 0.3802436292171478f */
	    0x3B9CFF7B,  /* 0.004791197832673788f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC5195C,  /* 0.3849591016769409f */
	    0x3B951162,  /* 0.0045491913333535194f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC757D7,  /* 0.3893420398235321f */
	    0x3B873481,  /* 0.004126132000237703f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC95300,  /* 0.39321136474609375f */
	    0x3B66D15D,  /* 0.0035220005083829165f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECAF31C,  /* 0.3963860273361206f */
	    0x3B335BE2,  /* 0.0027367998845875263f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECC2070,  /* 0.3986849784851074f */
	    0x3AE810B9,  /* 0.001770517905242741f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECCC33E,  /* 0.3999270796775818f */
	    0x3A235BBC,  /* 0.0006231626030057669f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECCC3CB,  /* 0.39993128180503845f */
	    0xBA38DFCB,  /* -0.0007052390719763935f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECC0A5E,  /* 0.39851659536361694f */
	    0xBB11251E,  /* -0.002214736770838499f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECA7F37,  /* 0.3955018222332001f */
	    0xBB7FF047,  /* -0.003905312856659293f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC80A9D,  /* 0.39070597290992737f */
	    0xBBBD4C8C,  /* -0.0057769473642110825f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC494D2,  /* 0.3839479088783264f */
	    0xBC0047E4,  /* -0.007829640060663223f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC0061D,  /* 0.37504664063453674f */
	    0xBC24E127,  /* -0.010063446126878262f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EBA46C0,  /* 0.36382102966308594f */
	    0xBC87997B,  /* -0.016552677378058434f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EAF12EF,  /* 0.34194132685661316f */
	    0xBCEF4346,  /* -0.029206883162260056f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E9C5E59,  /* 0.30540731549263f */
	    0xBD149F50,  /* -0.03628474473953247f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E89EB1D,  /* 0.269371896982193f */
	    0xBD12855F,  /* -0.035771723836660385f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E6F7A08,  /* 0.2338639497756958f */
	    0xBD104D1B,  /* -0.03522978350520134f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E4BAFB1,  /* 0.19891239702701569f */
	    0xBD0DF683,  /* -0.034658920019865036f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E287EBA,  /* 0.1645459234714508f */
	    0xBD0B819A,  /* -0.03405914455652237f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E05EED8,  /* 0.13079392910003662f */
	    0xBD08EE65,  /* -0.03343047574162483f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3DC80F17,  /* 0.09768503159284592f */
	    0xBD063CE2,  /* -0.03277290612459183f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3D85A0D7,  /* 0.06524818390607834f */
	    0xBD036D0A,  /* -0.032086409628391266f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3D09442A,  /* 0.03351227194070816f */
	    0xBD007EE6,  /* -0.031371019780635834f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3B243F22,  /* 0.002506204415112734f */
	    0xBCFAE4E1,  /* -0.03062671609222889f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBCE3414F,  /* -0.027741102501749992f */
	    0xBCF48F53,  /* -0.029853498563170433f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBD6A4B8B,  /* -0.057200949639081955f */
	    0xBCEDFD2B,  /* -0.029051383957266808f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDAFCEFD,  /* -0.0858440175652504f */
	    0xBCE72E5F,  /* -0.02822035364806652f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDE8BCEE,  /* -0.11364160478115082f */
	    0xBCE022F6,  /* -0.027360420674085617f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE0FF038,  /* -0.14056479930877686f */
	    0xBCD8DAEF,  /* -0.026471583172678947f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE2A952F,  /* -0.16658471524715424f */
	    0xBCD15644,  /* -0.025553829967975616f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE4445C6,  /* -0.1916724145412445f */
	    0xBCC994FC,  /* -0.02460717409849167f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE5CFA6B,  /* -0.215799018740654f */
	    0xBCC19712,  /* -0.023631606251001358f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE74AB88,  /* -0.23893558979034424f */
	    0xBCB95C83,  /* -0.022627120837569237f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE85A8CA,  /* -0.2610533833503723f */
	    0xBCB0E559,  /* -0.021593736484646797f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE907273,  /* -0.2821231782436371f */
	    0xBCA8318B,  /* -0.020531436428427696f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE9AAEFA,  /* -0.3021162152290344f */
	    0xBC9F412F,  /* -0.019440261647105217f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEA45A97,  /* -0.32100364565849304f */
	    0xBC961425,  /* -0.018320152536034584f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEAD717E,  /* -0.3387565016746521f */
	    0xBC8CAA79,  /* -0.017171131446957588f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEB5EFE5,  /* -0.35534587502479553f */
	    0xBC83043C,  /* -0.015993230044841766f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEBDD204,  /* -0.37074291706085205f */
	    0xBC724293,  /* -0.014786380343139172f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC51411,  /* -0.3849187195301056f */
	    0xBC5E0373,  /* -0.013550627045333385f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBECBB23E,  /* -0.39784425497055054f */
	    0xBC47E5A9,  /* -0.012200751341879368f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBED1926B,  /* -0.409320205450058f */
	    0xBC13AF6D,  /* -0.009013992734253407f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBED4ED34,  /* -0.4158722162246704f */
	    0xBBD46675,  /* -0.006481940392404795f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBED8359E,  /* -0.4222840666770935f */
	    0xBBCE2539,  /* -0.0062910583801567554f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEDB5E5D,  /* -0.42845430970191956f */
	    0xBBC491F0,  /* -0.005998842418193817f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEDE5A2D,  /* -0.43428173661231995f */
	    0xBBB7AC9D,  /* -0.005605293903499842f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE11BC2,  /* -0.43966490030288696f */
	    0xBBA774CE,  /* -0.005110359750688076f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE395D5,  /* -0.44450250267982483f */
	    0xBB93EAFC,  /* -0.004514096304774284f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE5BB1A,  /* -0.44869309663772583f */
	    0xBB7A1DA1,  /* -0.0038164632860571146f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE77E4B,  /* -0.4521354138851166f */
	    0xBB45C0EE,  /* -0.0030174809508025646f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE8D21E,  /* -0.45472806692123413f */
	    0xBB0AC023,  /* -0.002117165131494403f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE9A94B,  /* -0.4563697278499603f */
	    0xBA923563,  /* -0.0011154826497659087f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE9F689,  /* -0.4569590389728546f */
	    0xB750E196,  /* -1.2450289432308637e-05f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE9AC8F,  /* -0.45639464259147644f */
	    0x3A9C39E7,  /* 0.0011919111711904407f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE8BE15,  /* -0.45457521080970764f */
	    0x3B23AF6E,  /* 0.0024976390413939953f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE71DD1,  /* -0.4513993561267853f */
	    0x3B7FE6C9,  /* 0.0039047470781952143f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE4BE7A,  /* -0.4467657208442688f */
	    0x3BB1612E,  /* 0.005413196049630642f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEE192C8,  /* -0.44057297706604004f */
	    0x3BE62127,  /* 0.007022995036095381f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEDD8D71,  /* -0.43271973729133606f */
	    0x3C0F1996,  /* 0.008734127506613731f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBED8A12F,  /* -0.42310473322868347f */
	    0x3C2CCB9F,  /* 0.010546593926846981f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBED2C0B8,  /* -0.41162657737731934f */
	    0x3C8698CF,  /* 0.016430286690592766f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEC7CE16,  /* -0.39024418592453003f */
	    0x3CCA4335,  /* 0.02469024993479252f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEB9784D,  /* -0.36224594712257385f */
	    0x3CE5E43E,  /* 0.028062935918569565f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEAB1189,  /* -0.33411815762519836f */
	    0x3CE6D086,  /* 0.028175603598356247f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE9C9E3E,  /* -0.30589479207992554f */
	    0x3CE77541,  /* 0.028254153206944466f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE8E22E3,  /* -0.2776099145412445f */
	    0x3CE7D26F,  /* 0.02829858474433422f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE7F47E3,  /* -0.24929766356945038f */
	    0x3CE7E814,  /* 0.02830890566110611f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE624BC4,  /* -0.22099214792251587f */
	    0x3CE7B636,  /* 0.028285127133131027f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE455A59,  /* -0.1927274614572525f */
	    0x3CE73CD9,  /* 0.02822725661098957f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE287C92,  /* -0.1645376980304718f */
	    0x3CE67BF1,  /* 0.02813527174293995f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBE0BBB60,  /* -0.13645696640014648f */
	    0x3CE57385,  /* 0.028009185567498207f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDDE3F68,  /* -0.10851937532424927f */
	    0x3CE42390,  /* 0.0278489887714386f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBDA56500,  /* -0.08075904846191406f */
	    0x3CE28C10,  /* 0.027654677629470825f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBD59F265,  /* -0.05320968106389046f */
	    0x3CE0AD0E,  /* 0.02742626890540123f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBCD4392C,  /* -0.025906167924404144f */
	    0x3CDE8685,  /* 0.027163753286004066f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3A928276,  /* 0.001117779640480876f */
	    0x3CDC1876,  /* 0.026867132633924484f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3CE3F7A7,  /* 0.027828050777316093f */
	    0x3CD962E2,  /* 0.026536408811807632f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3D5DF6E8,  /* 0.05419054627418518f */
	    0x3CD665C7,  /* 0.026171578094363213f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3DA430C7,  /* 0.08017116039991379f */
	    0x3CD3212A,  /* 0.02577264979481697f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3DD88C02,  /* 0.10573579370975494f */
	    0x3CCF9500,  /* 0.025339603424072266f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E05FDA0,  /* 0.13085031509399414f */
	    0x3CCBC14D,  /* 0.024872446432709694f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E1F3651,  /* 0.15548063814640045f */
	    0x3CC7A616,  /* 0.024371188133955002f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E37E723,  /* 0.17959265410900116f */
	    0x3CC34360,  /* 0.023835837841033936f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E500726,  /* 0.20315226912498474f */
	    0x3CBE9922,  /* 0.023266378790140152f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E678D68,  /* 0.22612535953521729f */
	    0x3CB9A75A,  /* 0.022662807255983353f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E7E70FA,  /* 0.24847784638404846f */
	    0x3CB46E0B,  /* 0.022025128826498985f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E8A5474,  /* 0.270175576210022f */
	    0x3CAEED31,  /* 0.021353336051106453f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E951622,  /* 0.2911844849586487f */
	    0x3CA924D9,  /* 0.020647453144192696f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3E9F7918,  /* 0.31147074699401855f */
	    0x3CA314EC,  /* 0.01990743726491928f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EA978C8,  /* 0.33099961280822754f */
	    0x3C9CBD81,  /* 0.01913333125412464f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EB310C7,  /* 0.34973737597465515f */
	    0x3C961EA6,  /* 0.018325161188840866f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EBC3C9B,  /* 0.3676498830318451f */
	    0x3C8F382B,  /* 0.017482837662100792f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EC4F7CB,  /* 0.38470301032066345f */
	    0x3C880A29,  /* 0.01660640724003315f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ECD3DDF,  /* 0.4008626639842987f */
	    0x3C8094C4,  /* 0.015695936977863312f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3ED50A62,  /* 0.4160948395729065f */
	    0x3C71AF5B,  /* 0.014751280657947063f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EDC58D4,  /* 0.4303652048110962f */
	    0x3C61A60E,  /* 0.013772500678896904f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EE324C2,  /* 0.4436398148536682f */
	    0x3C510E21,  /* 0.012759716250002384f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EE969B5,  /* 0.4558846056461334f */
	    0x3C3FE6E0,  /* 0.011712759733200073f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EEF2330,  /* 0.46706533432006836f */
	    0x3C2E132F,  /* 0.010624690912663937f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EF44AE7,  /* 0.47713395953178406f */
	    0x3C10924D,  /* 0.008823943324387074f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EF82C54,  /* 0.48471319675445557f */
	    0x3BC8C31D,  /* 0.006126774940639734f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EFA9100,  /* 0.48938751220703125f */
	    0x3B6975FE,  /* 0.003562330733984709f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EFBD22C,  /* 0.49183785915374756f */
	    0x3ADC0962,  /* 0.0016787464264780283f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EFC4913,  /* 0.4927450120449066f */
	    0x39F99916,  /* 0.0004760703886859119f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3EFC4EF8,  /* 0.49278998374938965f */
	    0xB83F9149,  /* -4.56732559541706e-05f */
	aobjEvent32SetVal0RateBlock(0x004, 1),
	    0x3EFC3D1A,  /* 0.49265366792678833f */
	aobjEvent32End(),
};

PAD(8);

/* ──────────────── Cam + wallpaper sprite resource pool ─────────────────── */

/* `llMVOpeningYamabukiCamAnimJoint` — 56 bytes, 14 u32 words driving the
 * scene camera via `gcAddCObjCamAnimJoint` in
 * `mvOpeningYamabukiMakeMainCamera()`. */
u32 dMVOpeningYamabuki_CamAnimJoint[10] = {
	aobjEvent32SetValAfter(0x277, 0),
	    0x43C93DD2,  /* 402.48297119140625f */
	    0x4342CC4C,  /* 194.79803466796875f */
	    0x44EE4FB1,  /* 1906.4903564453125f */
	    0xC22149B5,  /* -40.32197952270508f */
	    0x4391B578,  /* 291.417724609375f */
	    0xC2935CE2,  /* -73.68141174316406f */
	    0x41CC0350,  /* 25.501617431640625f */
	aobjEvent32Wait(160),
	aobjEvent32End(),
};

u8 dMVOpeningYamabuki_CamAnimJoint_post[16] = {
	#include <MVOpeningYamabuki/CamAnimJoint_post.data.inc.c>
};

/* Wallpaper texture tiles @ 0x0D368..0x3EB08 (203,680 B). 53 × 320×6
 * RGBA16 tiles packed at 0xF08 byte stride each (8 B of slack per tile
 * from the N64 LOADBLOCK 64-bit alignment). Each `Bitmap.buf` in the
 * array below gets chain-patched to point at `tex_tiles[i * 0xF08]`. */
u8 dMVOpeningYamabuki_Wallpaper_tex_tiles[0x317A0] = {
	#include <MVOpeningYamabuki/Wallpaper_tex_tiles.tex.inc.c>
};

/* 53-entry Bitmap array. Each `.buf` points at the matching tile inside
 * the tex pool above (0xF08-byte stride). fixRelocChain rewrites these
 * positions from the .reloc sidecar at link time. */

Bitmap dMVOpeningYamabuki_Wallpaper_bitmaps[53] = {
	{ 320, 320, 0, 0, (void*)dMVOpeningYamabuki_Wallpaper_tex_tiles, 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xF08), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1E10), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2D18), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x3C20), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x4B28), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x5A30), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x6938), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x7840), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x8748), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x9650), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xA558), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xB460), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xC368), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xD270), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xE178), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xF080), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0xFF88), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x10E90), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x11D98), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x12CA0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x13BA8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x14AB0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x159B8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x168C0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x177C8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x186D0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x195D8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1A4E0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1B3E8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1C2F0), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1D1F8), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1E100), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1F008), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x1FF10), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x20E18), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x21D20), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x22C28), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x23B30), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x24A38), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x25940), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x26848), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x27750), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x28658), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x29560), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2A468), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2B370), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2C278), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2D180), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2E088), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2EF90), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x2FE98), 6, 0 },
	{ 320, 320, 0, 0, (void*)((u8*)dMVOpeningYamabuki_Wallpaper_tex_tiles + 0x30DA0), 4, 0 },
};

/* `llMVOpeningYamabukiWallpaperSprite` — the 320×264 RGBA16 background
 * sprite drawn by `mvOpeningYamabukiMakeWallpaper()`. `.bitmap` points
 * at the array above; its on-disk value is written by fixRelocChain
 * from the .reloc sidecar. */
Sprite dMVOpeningYamabuki_WallpaperSprite = {
	0, 0,
	320, 264,
	1.0f, 1.0f,
	0, 0,
	0x0240,
	4660,
	255, 255, 255, 255,
	0, 0,
	(int*)NULL,
	0, 1,
	53, 660,
	5, 6,
	0, 2,
	dMVOpeningYamabuki_Wallpaper_bitmaps,
	(Gfx*)NULL,
	(Gfx*)NULL,
	0, 0,
};

/* Trailing 4-byte pad @ 0x3EE9C..0x3EEA0. */
PAD(4);
