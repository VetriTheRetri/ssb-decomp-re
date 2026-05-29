/* relocData file 298 (MarioShieldPose) — DObjDLLink[] + DObjDesc[] + per-direction (AObjEvent32 *[26] + scripts) */
/* File size: 10752 bytes (0x2A00) */

#include "relocdata_types.h"
#include <sys/objdef.h>

/* Forward decls for scripts referenced by dispatch tables. */
extern u32 dMarioShieldPose_script2_0[];
extern u32 dMarioShieldPose_script2_1[];
extern u32 dMarioShieldPose_script2_2[];
extern u32 dMarioShieldPose_script2_3[];
extern u32 dMarioShieldPose_script2_4[];
extern u32 dMarioShieldPose_script2_5[];
extern u32 dMarioShieldPose_script2_6[];
extern u32 dMarioShieldPose_script2_7[];
extern u32 dMarioShieldPose_script2_8[];
extern u32 dMarioShieldPose_script2_9[];
extern u32 dMarioShieldPose_script2_10[];
extern u32 dMarioShieldPose_script2_11[];
extern u32 dMarioShieldPose_script2_12[];
extern u32 dMarioShieldPose_script2_13[];
extern u32 dMarioShieldPose_script2_14[];
extern u32 dMarioShieldPose_script2_15[];
extern u32 dMarioShieldPose_script3_0[];
extern u32 dMarioShieldPose_script3_1[];
extern u32 dMarioShieldPose_script3_2[];
extern u32 dMarioShieldPose_script3_3[];
extern u32 dMarioShieldPose_script3_4[];
extern u32 dMarioShieldPose_script3_5[];
extern u32 dMarioShieldPose_script3_6[];
extern u32 dMarioShieldPose_script3_7[];
extern u32 dMarioShieldPose_script3_8[];
extern u32 dMarioShieldPose_script3_9[];
extern u32 dMarioShieldPose_script3_10[];
extern u32 dMarioShieldPose_script3_11[];
extern u32 dMarioShieldPose_script3_12[];
extern u32 dMarioShieldPose_script3_13[];
extern u32 dMarioShieldPose_script3_14[];
extern u32 dMarioShieldPose_script3_15[];
extern u32 dMarioShieldPose_script4_0[];
extern u32 dMarioShieldPose_script4_1[];
extern u32 dMarioShieldPose_script4_2[];
extern u32 dMarioShieldPose_script4_3[];
extern u32 dMarioShieldPose_script4_4[];
extern u32 dMarioShieldPose_script4_5[];
extern u32 dMarioShieldPose_script4_6[];
extern u32 dMarioShieldPose_script4_7[];
extern u32 dMarioShieldPose_script4_8[];
extern u32 dMarioShieldPose_script4_9[];
extern u32 dMarioShieldPose_script4_10[];
extern u32 dMarioShieldPose_script4_11[];
extern u32 dMarioShieldPose_script4_12[];
extern u32 dMarioShieldPose_script4_13[];
extern u32 dMarioShieldPose_script4_14[];
extern u32 dMarioShieldPose_script4_15[];
extern u32 dMarioShieldPose_script5_0[];
extern u32 dMarioShieldPose_script5_1[];
extern u32 dMarioShieldPose_script5_2[];
extern u32 dMarioShieldPose_script5_3[];
extern u32 dMarioShieldPose_script5_4[];
extern u32 dMarioShieldPose_script5_5[];
extern u32 dMarioShieldPose_script5_6[];
extern u32 dMarioShieldPose_script5_7[];
extern u32 dMarioShieldPose_script5_8[];
extern u32 dMarioShieldPose_script5_9[];
extern u32 dMarioShieldPose_script5_10[];
extern u32 dMarioShieldPose_script5_11[];
extern u32 dMarioShieldPose_script5_12[];
extern u32 dMarioShieldPose_script5_13[];
extern u32 dMarioShieldPose_script5_14[];
extern u32 dMarioShieldPose_script5_15[];
extern u32 dMarioShieldPose_script6_0[];
extern u32 dMarioShieldPose_script6_1[];
extern u32 dMarioShieldPose_script6_2[];
extern u32 dMarioShieldPose_script6_3[];
extern u32 dMarioShieldPose_script6_4[];
extern u32 dMarioShieldPose_script6_5[];
extern u32 dMarioShieldPose_script6_6[];
extern u32 dMarioShieldPose_script6_7[];
extern u32 dMarioShieldPose_script6_8[];
extern u32 dMarioShieldPose_script6_9[];
extern u32 dMarioShieldPose_script6_10[];
extern u32 dMarioShieldPose_script6_11[];
extern u32 dMarioShieldPose_script6_12[];
extern u32 dMarioShieldPose_script6_13[];
extern u32 dMarioShieldPose_script6_14[];
extern u32 dMarioShieldPose_script6_15[];
extern u32 dMarioShieldPose_script7_0[];
extern u32 dMarioShieldPose_script7_1[];
extern u32 dMarioShieldPose_script7_2[];
extern u32 dMarioShieldPose_script7_3[];
extern u32 dMarioShieldPose_script7_4[];
extern u32 dMarioShieldPose_script7_5[];
extern u32 dMarioShieldPose_script7_6[];
extern u32 dMarioShieldPose_script7_7[];
extern u32 dMarioShieldPose_script7_8[];
extern u32 dMarioShieldPose_script7_9[];
extern u32 dMarioShieldPose_script7_10[];
extern u32 dMarioShieldPose_script7_11[];
extern u32 dMarioShieldPose_script7_12[];
extern u32 dMarioShieldPose_script7_13[];
extern u32 dMarioShieldPose_script7_14[];
extern u32 dMarioShieldPose_script7_15[];
extern u32 dMarioShieldPose_script8_0[];
extern u32 dMarioShieldPose_script8_1[];
extern u32 dMarioShieldPose_script8_2[];
extern u32 dMarioShieldPose_script8_3[];
extern u32 dMarioShieldPose_script8_4[];
extern u32 dMarioShieldPose_script8_5[];
extern u32 dMarioShieldPose_script8_6[];
extern u32 dMarioShieldPose_script8_7[];
extern u32 dMarioShieldPose_script8_8[];
extern u32 dMarioShieldPose_script8_9[];
extern u32 dMarioShieldPose_script8_10[];
extern u32 dMarioShieldPose_script8_11[];
extern u32 dMarioShieldPose_script8_12[];
extern u32 dMarioShieldPose_script8_13[];
extern u32 dMarioShieldPose_script8_14[];
extern u32 dMarioShieldPose_script8_15[];
extern u32 dMarioShieldPose_script9_0[];
extern u32 dMarioShieldPose_script9_1[];
extern u32 dMarioShieldPose_script9_2[];
extern u32 dMarioShieldPose_script9_3[];
extern u32 dMarioShieldPose_script9_4[];
extern u32 dMarioShieldPose_script9_5[];
extern u32 dMarioShieldPose_script9_6[];
extern u32 dMarioShieldPose_script9_7[];
extern u32 dMarioShieldPose_script9_8[];
extern u32 dMarioShieldPose_script9_9[];
extern u32 dMarioShieldPose_script9_10[];
extern u32 dMarioShieldPose_script9_11[];
extern u32 dMarioShieldPose_script9_12[];
extern u32 dMarioShieldPose_script9_13[];
extern u32 dMarioShieldPose_script9_14[];
extern u32 dMarioShieldPose_script9_15[];

/* 14 empty DObjDLLink[2] arrays for joints listed in data0 below. */
DObjDLLink dMarioShieldPose_script0_0[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_1[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_2[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_3[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_4[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_5[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_6[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_7[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_8[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_9[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_10[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_11[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_12[2] = { { 0, NULL }, { 4, NULL } };
DObjDLLink dMarioShieldPose_script0_13[2] = { { 0, NULL }, { 4, NULL } };

/* 15th DObjDLLink[2] — list_id=1 for the root subtree. */
DObjDLLink dMarioShieldPose_script0_14[2] = { { 1, NULL }, { 4, NULL } };

/* DObjDesc[27] skeleton tree. Bound to FTAttributes.dobj_lookup at attr+0x2D8. */
DObjDesc dMarioShieldPose_data0[27] = {
	{   0, (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   1, (void *)0x00000000, { 0.0f, 135.173843f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   2, (void *)0x00000000, { 15.0f, 0.0f, 0.0f }, { 0.0f, -0.890118f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   3, (void *)dMarioShieldPose_script0_0, { 0.0f, -7e-06f, 0.0f }, { 0.20944f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   4, (void *)0x00000000, { 51.0629158f, 53.745903f, 4e-06f }, { -1.570796e+00f, 0.0f, -1.570796e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   5, (void *)dMarioShieldPose_script0_1, { 0.0f, 0.0f, 0.0f }, { -2.296419e+00f, -2.214818e+00f, 1.496779e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   6, (void *)dMarioShieldPose_script0_2, { 4.034217e+01f, 4e-06f, 1.4e-05f }, { 0.0f, 0.0f, -0.017788f }, { 1.0f, 1.0f, 1.0f } },
	{   7, (void *)dMarioShieldPose_script0_3, { 35.9653969f, 0.001015f, 2.9e-05f }, { -0.785398f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   4, (void *)0x00000000, { -4e-06f, 7.207206e+01f, 2e-06f }, { -0.20944f, 0.785398f, -0.20944f }, { 1.0f, 1.0f, 1.0f } },
	{   5, (void *)dMarioShieldPose_script0_4, { 0.0f, 1.351347e+01f, -4.499996e+00f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   4, (void *)0x00000000, { -51.0629234f, 53.7459755f, 7e-06f }, { -1.570796e+00f, 0.0f, -1.570796e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   5, (void *)dMarioShieldPose_script0_5, { 1.4e-05f, 1.4e-05f, 0.0f }, { -0.666635f, -0.342054f, -1.016149e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   6, (void *)dMarioShieldPose_script0_6, { 40.325016f, -1e-06f, -2.3e-05f }, { 0.0f, 0.0f, -0.681884f }, { 1.0f, 1.0f, 1.0f } },
	{   7, (void *)dMarioShieldPose_script0_7, { 35.994f, 0.0f, 0.0f }, { 1.047198e+00f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   8, (void *)0x00000000, { 1.799997e+01f, -0.000243f, 8.999963e+00f }, { 3.141593e+00f, -1.570796e+00f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{   3, (void *)0x00000000, { 31.6803074f, -20.6532879f, -2.999997e+00f }, { -1.570796e+00f, 0.0f, -1.570796e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   4, (void *)dMarioShieldPose_script0_8, { 0.0f, -4e-06f, -7e-06f }, { 2.454896e+00f, -2.578052e+00f, -3.651588e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   5, (void *)dMarioShieldPose_script0_9, { 55.5793266f, 4e-06f, 0.0f }, { 0.0f, 0.0f, 0.896391f }, { 1.0f, 1.0f, 1.0f } },
	{   6, (void *)0x00000000, { 6.610771e+01f, 1.364423e+00f, 2.316188e+00f }, { 0.0f, -9e-06f, -1.641811e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   7, (void *)dMarioShieldPose_script0_10, { 1e-06f, -2e-05f, -7e-06f }, { -0.133691f, -0.042318f, -0.034228f }, { 1.0f, 1.0f, 1.0f } },
	{   3, (void *)0x00000000, { -31.6805363f, -20.6532955f, -3.000001e+00f }, { -1.570796e+00f, 0.0f, -1.570796e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   4, (void *)dMarioShieldPose_script0_11, { 0.0f, 0.0f, -3e-06f }, { -2.99086f, 2.817203e+00f, -3.51332f }, { 1.0f, 1.0f, 1.0f } },
	{   5, (void *)dMarioShieldPose_script0_12, { 55.5797768f, 4e-06f, -7e-06f }, { 0.0f, 0.0f, 0.862877f }, { 1.0f, 1.0f, 1.0f } },
	{   6, (void *)0x00000000, { 6.580603e+01f, 1.308336e+00f, 2.316216e+00f }, { 0.0f, 9e-06f, -1.641824e+00f }, { 1.0f, 1.0f, 1.0f } },
	{   7, (void *)dMarioShieldPose_script0_13, { 2e-06f, 0.0f, -4e-06f }, { 0.236113f, 0.225442f, -0.28203f }, { 1.0f, 1.0f, 1.0f } },
	{   1, (void *)dMarioShieldPose_script0_14, { 0.0f, 195.0f, 30.0f }, { 0.0f, 0.0f, 0.0f }, { 1.0f, 1.0f, 1.0f } },
	{ 18, (void *)0x00000000, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } },  /* sentinel */
};

PAD(12);

/* AObjEvent32 *data0_end[26] — direction 0+1 combined dispatch. attr+0x2DC. */
AObjEvent32 *dMarioShieldPose_data0_end[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_0,
	(AObjEvent32 *)dMarioShieldPose_script2_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_2,
	(AObjEvent32 *)dMarioShieldPose_script2_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_5,
	(AObjEvent32 *)dMarioShieldPose_script2_6,
	(AObjEvent32 *)dMarioShieldPose_script2_7,
	(AObjEvent32 *)dMarioShieldPose_script2_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_9,
	(AObjEvent32 *)dMarioShieldPose_script2_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_12,
	(AObjEvent32 *)dMarioShieldPose_script2_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script2_14,
	(AObjEvent32 *)dMarioShieldPose_script2_15,
};

/* script2_0 @ 0x0608 (32 bytes) */
u32 dMarioShieldPose_script2_0[8] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 190),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32Cmd12(0x020, 10),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script2_1 @ 0x0628 (76 bytes) */
u32 dMarioShieldPose_script2_1[19] = {
	aobjEvent32SetValRate(0x003, 0),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0xBB89421F,  /* -0.004188790451735258f */
	    0x00000000,  /* 0.0f */
	    0xBBAB92A6,  /* -0.005235987715423107f */
	aobjEvent32SetVal0RateBlock(0x014, 0),
	    0xBE860A92,  /* -0.2617993950843811f */
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValRate(0x017, 90),
	    0xBE567750,  /* -0.20943951606750488f */
	    0xBB05720F,  /* -0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xBB8EFA35,  /* -0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0x3ABEA2F1,  /* 0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script2_2 @ 0x0674 (88 bytes) */
u32 dMarioShieldPose_script2_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBFE40AE0,  /* -1.7815818786621094f */
	    0x3C330429,  /* 0.010926284827291965f */
	    0xC016A30B,  /* -2.35370135307312f */
	    0xBBF29554,  /* -0.0074030552059412f */
	    0x3F59861B,  /* 0.8497025370597839f */
	    0xBBFB8B1C,  /* -0.007676495239138603f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBFB9623D,  /* -1.4483104944229126f */
	    0x3BAA3B9E,  /* 0.005195095203816891f */
	    0xC00C549C,  /* -2.19266414642334f */
	    0x3BB45B14,  /* 0.005504021421074867f */
	    0x3F225F35,  /* 0.6342652440071106f */
	    0xBB89AD0A,  /* -0.004201536066830158f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBFB8BA14,  /* -1.443178653717041f */
	    0x3BA8287A,  /* 0.005131778307259083f */
	    0xC00BFA5F,  /* -2.1871564388275146f */
	    0x3BB479CC,  /* 0.005507683381438255f */
	    0x3F214E2F,  /* 0.6300992369651794f */
	    0xBB8882CC,  /* -0.004165982827544212f */
	aobjEvent32End(),
};

/* script2_3 @ 0x06CC (64 bytes) */
u32 dMarioShieldPose_script2_3[16] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91E96B,  /* -0.017811497673392296f */
	    0x3C91E96B,  /* 0.017811497673392296f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x004, 28),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0xBC11D45C,  /* -0.008900728076696396f */
	aobjEvent32SetVal0RateBlock(0x004, 15),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* script2_4 @ 0x070C (64 bytes) */
u32 dMarioShieldPose_script2_4[16] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBB6AC8AD,  /* -0.0035825178492814302f */
	    0xBE567750,  /* -0.20943951606750488f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	aobjEvent32SetValRate(0x007, 180),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script2_5 @ 0x074C (88 bytes) */
u32 dMarioShieldPose_script2_5[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBEC8C403,  /* -0.39212045073509216f */
	    0x3C827C7C,  /* 0.015928499400615692f */
	    0xBF1CFB95,  /* -0.613213837146759f */
	    0x3C7457C3,  /* 0.014913502149283886f */
	    0xBFCDA0BA,  /* -1.6064674854278564f */
	    0xBCC96C91,  /* -0.024587901309132576f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE984DEC,  /* -0.29746949672698975f */
	    0xBB108677,  /* -0.002205280354246497f */
	    0x3E83D063,  /* 0.2574492394924164f */
	    0x3C2A6A7E,  /* 0.010401366278529167f */
	    0xC015B04C,  /* -2.3388853073120117f */
	    0xBAE86CEE,  /* -0.001773265888914466f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE995485,  /* -0.29947295784950256f */
	    0xBB034C87,  /* -0.002003462752327323f */
	    0x3E89018E,  /* 0.2675899863243103f */
	    0x3C262553,  /* 0.010140734724700451f */
	    0xC015C6C4,  /* -2.340256690979004f */
	    0xBAB3C4D7,  /* -0.001371527905575931f */
	aobjEvent32End(),
};

/* script2_6 @ 0x07A4 (52 bytes) */
u32 dMarioShieldPose_script2_6[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0x37C4CDA6,  /* 2.34607832680922e-05f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBC919C20,  /* -0.017774641513824463f */
	    0xB81A56E7,  /* -3.6797395296161994e-05f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC924B8F,  /* -0.017858294770121574f */
	    0xB8AF6E89,  /* -8.365239045815542e-05f */
	aobjEvent32End(),
};

/* script2_7 @ 0x07D8 (28 bytes) */
u32 dMarioShieldPose_script2_7[7] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script2_8 @ 0x07F4 (40 bytes) */
u32 dMarioShieldPose_script2_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 10),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script2_9 @ 0x081C (88 bytes) */
u32 dMarioShieldPose_script2_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x401D1806,  /* 2.4545912742614746f */
	    0xB88221BA,  /* -6.205165118444711e-05f */
	    0xC0250537,  /* -2.5784432888031006f */
	    0xB8A6FE3C,  /* -7.962851668708026e-05f */
	    0xC069AAA0,  /* -3.6510391235351562f */
	    0x38EA0385,  /* 0.00011158645065734163f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x401CAF15,  /* 2.448186159133911f */
	    0xB9500B12,  /* -0.0001984054979402572f */
	    0xC0258E03,  /* -2.5867927074432373f */
	    0xB989F36A,  /* -0.0002631203387863934f */
	    0xC068EC93,  /* -3.639439344406128f */
	    0x39BDE44F,  /* 0.0003621899231802672f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x401CABD4,  /* 2.4479875564575195f */
	    0xB950528F,  /* -0.00019867181254085153f */
	    0xC0259256,  /* -2.5870566368103027f */
	    0xB98A5EA5,  /* -0.0002639192680362612f */
	    0xC068E6A0,  /* -3.6390762329101562f */
	    0x39BE7349,  /* 0.0003632551815826446f */
	aobjEvent32End(),
};

/* script2_10 @ 0x0874 (52 bytes) */
u32 dMarioShieldPose_script2_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F6536E9,  /* 0.8953691124916077f */
	    0xB959BF4E,  /* -0.0002076599921565503f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F5FA525,  /* 0.8736136555671692f */
	    0xBA33628C,  /* -0.0006842992734164f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F5F782E,  /* 0.8729275465011597f */
	    0xBA33DB2F,  /* -0.0006860969006083906f */
	aobjEvent32End(),
};

/* script2_11 @ 0x08A8 (88 bytes) */
u32 dMarioShieldPose_script2_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE08E223,  /* -0.13367514312267303f */
	    0x3655E855,  /* 3.187470838383888e-06f */
	    0xBD2D5494,  /* -0.0423169881105423f */
	    0x320EFA35,  /* 8.322378342029424e-09f */
	    0xBD0A8AEA,  /* -0.0338238850235939f */
	    0x38ACE7C9,  /* 8.24477247078903e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE088D47,  /* -0.1333514302968979f */
	    0x372639A4,  /* 9.907791536534205e-06f */
	    0xBD2D4544,  /* -0.04230238497257233f */
	    0x3491361E,  /* 2.704773010009376e-07f */
	    0xBCCE409C,  /* -0.02517729252576828f */
	    0x398F0C80,  /* 0.00027284398674964905f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE088ABC,  /* -0.1333417296409607f */
	    0x3722CDE7,  /* 9.703892828838434e-06f */
	    0xBD2D4529,  /* -0.04230228438973427f */
	    0x33D67750,  /* 9.986854365706677e-08f */
	    0xBCCC02CF,  /* -0.024903682991862297f */
	    0x398F7320,  /* 0.00027360860258340836f */
	aobjEvent32End(),
};

/* script2_12 @ 0x0900 (88 bytes) */
u32 dMarioShieldPose_script2_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC03F6694,  /* -2.990635871887207f */
	    0x383DE44F,  /* 4.52737403975334e-05f */
	    0x40344F31,  /* 2.817333459854126f */
	    0x37DF66F3,  /* 2.663161103555467e-05f */
	    0xC060D0D4,  /* -3.5127458572387695f */
	    0x38F4A016,  /* 0.00011664644989650697f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC03F1934,  /* -2.9859132766723633f */
	    0x391A90FD,  /* 0.0001474059681640938f */
	    0x40347D09,  /* 2.820131540298462f */
	    0x38B9B3FA,  /* 8.855010673869401e-05f */
	    0xC0600891,  /* -3.5005228519439697f */
	    0x39C99ED5,  /* 0.00038456046604551375f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC03F16C8,  /* -2.9857654571533203f */
	    0x391AFC39,  /* 0.00014780544734094292f */
	    0x40347E7E,  /* 2.820220470428467f */
	    0x38BA8A71,  /* 8.894957863958552e-05f */
	    0xC0600240,  /* -3.5001373291015625f */
	    0x39CA2DCF,  /* 0.0003856257244478911f */
	aobjEvent32End(),
};

/* script2_13 @ 0x0958 (52 bytes) */
u32 dMarioShieldPose_script2_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F5C9F8D,  /* 0.8618095517158508f */
	    0xB963F0A4,  /* -0.00021738052600994706f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F56CC17,  /* 0.8390516638755798f */
	    0xBA3BDE03,  /* -0.0007166566210798919f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F569CFE,  /* 0.838333010673523f */
	    0xBA3C640E,  /* -0.0007186540169641376f */
	aobjEvent32End(),
};

/* script2_14 @ 0x098C (88 bytes) */
u32 dMarioShieldPose_script2_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E71B56E,  /* 0.23604366183280945f */
	    0xB766622B,  /* -1.37319248096901e-05f */
	    0x3E66D908,  /* 0.22543728351593018f */
	    0xB5A0D97C,  /* -1.1984225238848012e-06f */
	    0xBE902711,  /* -0.28154805302619934f */
	    0x38CE7003,  /* 9.843709267443046e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E7039F1,  /* 0.23459602892398834f */
	    0xB83C1C91,  /* -4.484929741011001e-05f */
	    0x3E66BFAA,  /* 0.22534051537513733f */
	    0xB64644F7,  /* -2.954444198621786e-06f */
	    0xBE8AE2F5,  /* -0.2712627947330475f */
	    0x39A9E1B2,  /* 0.00032402348006144166f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E702E1E,  /* 0.23455092310905457f */
	    0xB83D3195,  /* -4.510728831519373e-05f */
	    0x3E66BEF0,  /* 0.22533774375915527f */
	    0xB6396C7D,  /* -2.7630296699499013e-06f */
	    0xBE8AB85E,  /* -0.27093786001205444f */
	    0x39AA5C91,  /* 0.0003249389410484582f */
	aobjEvent32End(),
};

/* script2_15 @ 0x09E4 (44 bytes) */
u32 dMarioShieldPose_script2_15[11] = {
	aobjEvent32SetValRate(0x020, 0),
	    0x43430000,  /* 195.0f */
	    0x3FF15CFB,  /* 1.8856500387191772f */
	aobjEvent32SetVal0RateBlock(0x040, 0),
	    0x42F00000,  /* 120.0f */
	aobjEvent32SetValRateBlock(0x060, 45),
	    0x438BED70,  /* 279.85498046875f */
	    0x3FAAAAAB,  /* 1.3333333730697632f */
	    0x42BB48B5,  /* 93.64200592041016f */
	    0xBF800000,  /* -1.0f */
	aobjEvent32End(),
};

/* AObjEvent32 *shield_anim_joint_1[26] — direction 2 dispatch. attr+0x2E0. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_1[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_0,
	(AObjEvent32 *)dMarioShieldPose_script3_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_2,
	(AObjEvent32 *)dMarioShieldPose_script3_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_5,
	(AObjEvent32 *)dMarioShieldPose_script3_6,
	(AObjEvent32 *)dMarioShieldPose_script3_7,
	(AObjEvent32 *)dMarioShieldPose_script3_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_9,
	(AObjEvent32 *)dMarioShieldPose_script3_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_12,
	(AObjEvent32 *)dMarioShieldPose_script3_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script3_14,
	(AObjEvent32 *)dMarioShieldPose_script3_15,
};

/* script3_0 @ 0x0A78 (32 bytes) */
u32 dMarioShieldPose_script3_0[8] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 190),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32Cmd12(0x020, 55),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script3_1 @ 0x0A98 (80 bytes) */
u32 dMarioShieldPose_script3_1[20] = {
	aobjEvent32SetVal0RateBlock(0x014, 0),
	    0xBE860A92,  /* -0.2617993950843811f */
	    0x41100000,  /* 9.0f */
	aobjEvent32SetValRateBlock(0x003, 0),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0xBB89421F,  /* -0.004188790451735258f */
	    0x00000000,  /* 0.0f */
	    0xBBAB92A6,  /* -0.005235987715423107f */
	aobjEvent32SetValRate(0x017, 90),
	    0xBE567750,  /* -0.20943951606750488f */
	    0xBB05720F,  /* -0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xBB8EFA35,  /* -0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0x3ABEA2F1,  /* 0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32Cmd12(0x017, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script3_2 @ 0x0AE8 (88 bytes) */
u32 dMarioShieldPose_script3_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBFB88812,  /* -1.441652536392212f */
	    0x3BA68121,  /* 0.005081311333924532f */
	    0xC00B725A,  /* -2.178854465484619f */
	    0x3BB47E44,  /* 0.005508216097950935f */
	    0x3F20D3F9,  /* 0.6282344460487366f */
	    0xBB88EA1F,  /* -0.004178300034254789f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBFBAB387,  /* -1.4586037397384644f */
	    0xBC33CEE5,  /* -0.010974620468914509f */
	    0xC0006613,  /* -2.006230115890503f */
	    0xBB88BBC4,  /* -0.004172774031758308f */
	    0x3F2D6C7A,  /* 0.6774364709854126f */
	    0x3C4CF16F,  /* 0.012508734129369259f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBFBC42BE,  /* -1.4707868099212646f */
	    0xBC479B54,  /* -0.01218302920460701f */
	    0xC000F1BF,  /* -2.0147550106048584f */
	    0xBC0BAC12,  /* -0.008524911478161812f */
	    0x3F30F7CD,  /* 0.6912811398506165f */
	    0x3C62D4A4,  /* 0.013844642788171768f */
	aobjEvent32End(),
};

/* script3_3 @ 0x0B40 (52 bytes) */
u32 dMarioShieldPose_script3_3[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91AA31,  /* -0.017781348899006844f */
	    0xB6E0F023,  /* -6.703675808239495e-06f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0x3C11B137,  /* 0.00889234896749258f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0x3C91CD54,  /* 0.017798103392124176f */
	aobjEvent32End(),
};

/* script3_4 @ 0x0B74 (68 bytes) */
u32 dMarioShieldPose_script3_4[17] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBB6AC8AD,  /* -0.0035825178492814302f */
	    0xBE567750,  /* -0.20943951606750488f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	aobjEvent32SetValRate(0x007, 180),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32Cmd12(0x007, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script3_5 @ 0x0BB8 (88 bytes) */
u32 dMarioShieldPose_script3_5[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE995571,  /* -0.29947999119758606f */
	    0xBAD538F6,  /* -0.0016267586033791304f */
	    0x3E890085,  /* 0.26758208870887756f */
	    0x3C211CFE,  /* 0.009833572432398796f */
	    0xC015C733,  /* -2.340283155441284f */
	    0xBA0BA057,  /* -0.0005326321697793901f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBDE74782,  /* -0.11292935907840729f */
	    0x3A3AFD7F,  /* 0.0007133110775612295f */
	    0x3F1D3839,  /* 0.6141391396522522f */
	    0x3B549C95,  /* 0.0032441962976008654f */
	    0xBFFA9C47,  /* -1.957894206047058f */
	    0xB9CD63EE,  /* -0.00039175100391730666f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBDE07A91,  /* -0.10960877686738968f */
	    0x3B599E12,  /* 0.0033205789513885975f */
	    0x3F1E23A5,  /* 0.6177313923835754f */
	    0x3B6B6C50,  /* 0.0035922713577747345f */
	    0xBFFA13D8,  /* -1.953730583190918f */
	    0x3B886FCF,  /* 0.004163719248026609f */
	aobjEvent32End(),
};

/* script3_6 @ 0x0C10 (48 bytes) */
u32 dMarioShieldPose_script3_6[12] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91D45B,  /* -0.017801454290747643f */
	    0xB7E0924F,  /* -2.677101110748481e-05f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x00000000,  /* 0.0f */
	    0x3C11F070,  /* 0.008907422423362732f */
	aobjEvent32SetVal0RateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* script3_7 @ 0x0C40 (32 bytes) */
u32 dMarioShieldPose_script3_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script3_8 @ 0x0C60 (40 bytes) */
u32 dMarioShieldPose_script3_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 55),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script3_9 @ 0x0C88 (88 bytes) */
u32 dMarioShieldPose_script3_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x401CABD4,  /* 2.4479875564575195f */
	    0xB951B801,  /* -0.00020000340009573847f */
	    0xC0259256,  /* -2.5870566368103027f */
	    0xB98AC9E0,  /* -0.000264718197286129f */
	    0xC068E6A0,  /* -3.6390762329101562f */
	    0x39BF2601,  /* 0.00036458674003370106f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x401C2695,  /* 2.439854860305786f */
	    0xB9105FA6,  /* -0.0001376854197587818f */
	    0xC02646B2,  /* -2.59806489944458f */
	    0xB947AA6A,  /* -0.00019041603081859648f */
	    0xC067F139,  /* -3.624098062515259f */
	    0x3986520F,  /* 0.0002561961009632796f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x401C245C,  /* 2.4397192001342773f */
	    0xB90E23BE,  /* -0.00013555490295402706f */
	    0xC02649C7,  /* -2.598253011703491f */
	    0xB9452703,  /* -0.00018801917030941695f */
	    0xC067ED14,  /* -3.623845100402832f */
	    0x3984A520,  /* 0.00025300029665231705f */
	aobjEvent32End(),
};

/* script3_10 @ 0x0CE0 (52 bytes) */
u32 dMarioShieldPose_script3_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F5F782D,  /* 0.8729274868965149f */
	    0xBA34AD2E,  /* -0.0006892260862514377f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F582722,  /* 0.8443471193313599f */
	    0xBA015AE6,  /* -0.0004934504395350814f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F580735,  /* 0.8438599705696106f */
	    0xB9FF6956,  /* -0.0004871587152592838f */
	aobjEvent32End(),
};

/* script3_11 @ 0x0D14 (88 bytes) */
u32 dMarioShieldPose_script3_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE088ABB,  /* -0.1333417147397995f */
	    0x372CFF3E,  /* 1.0311427104170434e-05f */
	    0xBD2D4529,  /* -0.04230228438973427f */
	    0x3520D97C,  /* 5.992112619424006e-07f */
	    0xBCCC02CA,  /* -0.02490367367863655f */
	    0x39903387,  /* 0.0002750421117525548f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE081F9C,  /* -0.13293308019638062f */
	    0x36E738A2,  /* 6.890929398650769e-06f */
	    0xBD2D3342,  /* -0.04228521138429642f */
	    0x3489646F,  /* 2.5591313601580623e-07f */
	    0xBC5C7532,  /* -0.013455675914883614f */
	    0x39501CCE,  /* 0.00019847156363539398f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE081DED,  /* -0.13292665779590607f */
	    0x36D79544,  /* 6.424876119126566e-06f */
	    0xBD2D32E8,  /* -0.042284876108169556f */
	    0x34B2B8C2,  /* 3.328951265757496e-07f */
	    0xBC593F05,  /* -0.013259653933346272f */
	    0x394D8B06,  /* 0.00019602113752625883f */
	aobjEvent32End(),
};

/* script3_12 @ 0x0D6C (88 bytes) */
u32 dMarioShieldPose_script3_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC03F16C8,  /* -2.9857654571533203f */
	    0x391BD2B0,  /* 0.00014860439114272594f */
	    0x40347E7E,  /* 2.820220470428467f */
	    0x38BBA865,  /* 8.948220784077421e-05f */
	    0xC0600240,  /* -3.5001373291015625f */
	    0x39CB2805,  /* 0.00038748994120396674f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC03EB2F1,  /* -2.9796717166900635f */
	    0x38DAEF21,  /* 0.00010439591278554872f */
	    0x4034BB9D,  /* 2.823951005935669f */
	    0x3888467B,  /* 6.498113361885771e-05f */
	    0xC05EFB11,  /* -3.4840738773345947f */
	    0x39917D9B,  /* 0.00027750138542614877f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC03EB140,  /* -2.9795684814453125f */
	    0x38D8243E,  /* 0.0001030643325066194f */
	    0x4034BCAB,  /* 2.8240153789520264f */
	    0x38872886,  /* 6.444849714171141e-05f */
	    0xC05EF692,  /* -3.483799457550049f */
	    0x398FD0AD,  /* 0.00027430561021901667f */
	aobjEvent32End(),
};

/* script3_13 @ 0x0DC4 (52 bytes) */
u32 dMarioShieldPose_script3_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F569CFD,  /* 0.8383329510688782f */
	    0xBA3D59CC,  /* -0.0007223158609122038f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F4EF092,  /* 0.8083583116531372f */
	    0xBA07F60E,  /* -0.0005186506314203143f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F4ECEF6,  /* 0.8078454732894897f */
	    0xBA067155,  /* -0.0005128582124598324f */
	aobjEvent32End(),
};

/* script3_14 @ 0x0DF8 (88 bytes) */
u32 dMarioShieldPose_script3_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E702E1B,  /* 0.23455087840557098f */
	    0xB83DE44F,  /* -4.52737403975334e-05f */
	    0x3E66BEEF,  /* 0.22533772885799408f */
	    0xB645B5FE,  /* -2.9461220947268885e-06f */
	    0xBE8AB85A,  /* -0.2709377408027649f */
	    0x39AB44E7,  /* 0.0003266699786763638f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E6E4D75,  /* 0.2327173501253128f */
	    0xB802E652,  /* -3.1208917789626867e-05f */
	    0x3E66A09C,  /* 0.22522205114364624f */
	    0xB5FEADAF,  /* -1.8975023294842686e-06f */
	    0xBE83C581,  /* -0.25736621022224426f */
	    0x3976871B,  /* 0.00023510718892794102f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E6E455A,  /* 0.23268643021583557f */
	    0xB801B67E,  /* -3.092595579801127e-05f */
	    0x3E66A032,  /* 0.2252204716205597f */
	    0xB5D43B66,  /* -1.5812518086022465e-06f */
	    0xBE83A70D,  /* -0.2571338713169098f */
	    0x39739CF1,  /* 0.00023232751118484885f */
	aobjEvent32End(),
};

/* script3_15 @ 0x0E50 (48 bytes) */
u32 dMarioShieldPose_script3_15[11] = {
	aobjEvent32SetValRateBlock(0x060, 0),
		    0x438BED70,  /* 279.85498046875f */
		    0x3FAAAAAB,  /* 1.3333333730697632f */
		    0x42BB48B5,  /* 93.64200592041016f */
		    0xBF800000,  /* -1.0f */
		aobjEvent32SetValRate(0x040, 45),
		    0x41F00000,  /* 30.0f */
		    0xBFB506B1,  /* -1.4142667055130005f */
		aobjEvent32SetVal0RateBlock(0x020, 45),
		    0x439D8000,  /* 315.0f */
		aobjEvent32End(),
};
PAD(4);

/* AObjEvent32 *shield_anim_joint_2[26] — direction 3 dispatch. attr+0x2E4. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_2[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_0,
	(AObjEvent32 *)dMarioShieldPose_script4_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_2,
	(AObjEvent32 *)dMarioShieldPose_script4_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_5,
	(AObjEvent32 *)dMarioShieldPose_script4_6,
	(AObjEvent32 *)dMarioShieldPose_script4_7,
	(AObjEvent32 *)dMarioShieldPose_script4_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_9,
	(AObjEvent32 *)dMarioShieldPose_script4_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_12,
	(AObjEvent32 *)dMarioShieldPose_script4_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script4_14,
	(AObjEvent32 *)dMarioShieldPose_script4_15,
};

/* script4_0 @ 0x0EE8 (32 bytes) */
u32 dMarioShieldPose_script4_0[8] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 190),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32Cmd12(0x020, 100),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script4_1 @ 0x0F08 (80 bytes) */
u32 dMarioShieldPose_script4_1[20] = {
	aobjEvent32SetValRateBlock(0x017, 0),
	    0xBE567750,  /* -0.20943951606750488f */
	    0xBB05720F,  /* -0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xBB8EFA35,  /* -0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0x3ABEA2F1,  /* 0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32SetVal0Rate(0x006, 90),
	    0xBF490FDB,  /* -0.7853981852531433f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x001, 90),
	    0x00000000,  /* 0.0f */
	    0x3B51B33D,  /* 0.003199770348146558f */
	aobjEvent32SetValRate(0x010, 180),
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script4_2 @ 0x0F58 (88 bytes) */
u32 dMarioShieldPose_script4_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBFBC42BE,  /* -1.4707868099212646f */
	    0xBC3592BA,  /* -0.011082345619797707f */
	    0xC000F1BF,  /* -2.0147550106048584f */
	    0xBA1B31D6,  /* -0.000592020689509809f */
	    0x3F30F7CD,  /* 0.6912811398506165f */
	    0x3C4EA1FF,  /* 0.012611865065991879f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC0151CAE,  /* -2.3298754692077637f */
	    0xBC70BB29,  /* -0.014693059958517551f */
	    0xC02F497B,  /* -2.7388598918914795f */
	    0xBD03E87E,  /* -0.032204143702983856f */
	    0x3FCE676D,  /* 1.612531304359436f */
	    0x3C265473,  /* 0.010151970200240612f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC016206B,  /* -2.345728635787964f */
	    0xBC81DE26,  /* -0.015852998942136765f */
	    0xC03123A3,  /* -2.7678000926971436f */
	    0xBCED1439,  /* -0.02894030697643757f */
	    0x3FD011A7,  /* 1.62553870677948f */
	    0x3C551D0A,  /* 0.013007411733269691f */
	aobjEvent32End(),
};

/* script4_3 @ 0x0FB0 (44 bytes) */
u32 dMarioShieldPose_script4_3[11] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x00000000,  /* 0.0f */
	    0x3C119C21,  /* 0.008887321688234806f */
	aobjEvent32SetVal0RateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* script4_4 @ 0x0FDC (68 bytes) */
u32 dMarioShieldPose_script4_4[17] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBB6AC8AD,  /* -0.0035825178492814302f */
	    0xBE567750,  /* -0.20943951606750488f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	aobjEvent32SetValRate(0x007, 180),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32Cmd12(0x007, 90),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script4_5 @ 0x1020 (88 bytes) */
u32 dMarioShieldPose_script4_5[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBDE07A91,  /* -0.10960877686738968f */
	    0x3B40A6AD,  /* 0.002939622150734067f */
	    0x3F1E23A5,  /* 0.6177313923835754f */
	    0x3B623412,  /* 0.003451589960604906f */
	    0xBFFA13D8,  /* -1.953730583190918f */
	    0x3B663340,  /* 0.0035125762224197388f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBD785E43,  /* -0.060636769980192184f */
	    0x3B569A02,  /* 0.0032745604403316975f */
	    0x3F408A9A,  /* 0.7521148920059204f */
	    0x3B3937FD,  /* 0.002826213138177991f */
	    0xBFF5CE86,  /* -1.9203650951385498f */
	    0x3B8D9434,  /* 0.004320645704865456f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBD7B058D,  /* -0.061284590512514114f */
	    0xBA29D29E,  /* -0.0006478222785517573f */
	    0x3F41313F,  /* 0.7546576857566833f */
	    0x3B26A4E0,  /* 0.0025427863001823425f */
	    0xBFF5FD20,  /* -1.9217872619628906f */
	    0xBABA66B3,  /* -0.001422128058038652f */
	aobjEvent32End(),
};

/* script4_6 @ 0x1078 (48 bytes) */
u32 dMarioShieldPose_script4_6[12] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBC91F774,  /* -0.017818190157413483f */
	    0xBC11B137,  /* -0.00889234896749258f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91B138,  /* -0.01778469979763031f */
	    0x380C76CF,  /* 3.3489250199636444e-05f */
	aobjEvent32End(),
};

/* script4_7 @ 0x10A8 (32 bytes) */
u32 dMarioShieldPose_script4_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 90),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script4_8 @ 0x10C8 (40 bytes) */
u32 dMarioShieldPose_script4_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 100),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script4_9 @ 0x10F0 (88 bytes) */
u32 dMarioShieldPose_script4_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x401C245C,  /* 2.4397192001342773f */
	    0xB90B115E,  /* -0.00013262542779557407f */
	    0xC02649C7,  /* -2.598253011703491f */
	    0xB9402037,  /* -0.00018322547839488834f */
	    0xC067ED14,  /* -3.623845100402832f */
	    0x39812784,  /* 0.0002463423879817128f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x401C1591,  /* 2.4388163089752197f */
	    0x3903872C,  /* 0.00012543488992378116f */
	    0xC0265E47,  /* -2.599504232406616f */
	    0x3936C559,  /* 0.00017430390289518982f */
	    0xC067D18A,  /* -3.622164249420166f */
	    0xB97552D0,  /* -0.00023395870812237263f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x401C17AF,  /* 2.4389455318450928f */
	    0x39077003,  /* 0.00012916330888401717f */
	    0xC0265B56,  /* -2.5993247032165527f */
	    0x393C7EDD,  /* 0.00017976337403524667f */
	    0xC067D57E,  /* -3.622405529022217f */
	    0xB97D00C0,  /* -0.0002412823960185051f */
	aobjEvent32End(),
};

/* script4_10 @ 0x1148 (52 bytes) */
u32 dMarioShieldPose_script4_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F580735,  /* 0.8438599705696106f */
	    0xB9F8D06C,  /* -0.0004745753249153495f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F5732B9,  /* 0.8406177163124084f */
	    0x39ECC579,  /* 0.00045160556328482926f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F57513F,  /* 0.8410834670066833f */
	    0x39F42BEC,  /* 0.0004657203098759055f */
	aobjEvent32End(),
};

/* script4_11 @ 0x117C (88 bytes) */
u32 dMarioShieldPose_script4_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE081DED,  /* -0.13292665779590607f */
	    0x36E46DBF,  /* 6.8077056312176865e-06f */
	    0xBD2D32E8,  /* -0.042284876108169556f */
	    0x348192C0,  /* 2.413489710306749e-07f */
	    0xBC593F05,  /* -0.013259653933346272f */
	    0x3947FBF4,  /* 0.0001907197874970734f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE081208,  /* -0.1328812837600708f */
	    0xB6D2233D,  /* -6.262589977268362e-06f */
	    0xBD2D3126,  /* -0.04228319972753525f */
	    0xB44FC395,  /* -1.934952962301395e-07f */
	    0xBC43DDBF,  /* -0.011954723857343197f */
	    0xB93EBC07,  /* -0.00018189857655670494f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE0813B3,  /* -0.13288764655590057f */
	    0xB6D5595B,  /* -6.3582970142306294e-06f */
	    0xBD2D311A,  /* -0.042283155024051666f */
	    0x33449809,  /* 4.577308132525104e-08f */
	    0xBC46F09E,  /* -0.012142328545451164f */
	    0xB944B797,  /* -0.00018760409147944301f */
	aobjEvent32End(),
};

/* script4_12 @ 0x11D4 (88 bytes) */
u32 dMarioShieldPose_script4_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC03EB142,  /* -2.9795689582824707f */
	    0x38D1FF7E,  /* 0.0001001348573481664f */
	    0x4034BCAB,  /* 2.8240153789520264f */
	    0x388221BA,  /* 6.205165118444711e-05f */
	    0xC05EF692,  /* -3.483799457550049f */
	    0x398BA057,  /* 0.00026631608488969505f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC03EA60F,  /* -2.9788854122161865f */
	    0xB8C7AA6A,  /* -9.520801540929824e-05f */
	    0x4034C3AA,  /* 2.8244423866271973f */
	    0xB87A35DD,  /* -5.965480886516161e-05f */
	    0xC05ED8B5,  /* -3.4819767475128174f */
	    0xB985223B,  /* -0.00025393240503035486f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC03EA7AC,  /* -2.9789838790893555f */
	    0xB8CE16A6,  /* -9.827064059209079e-05f */
	    0x4034C2A8,  /* 2.824380874633789f */
	    0xB88103C6,  /* -6.151902198325843e-05f */
	    0xC05EDD00,  /* -3.48223876953125f */
	    0xB98940B0,  /* -0.000261788722127676f */
	aobjEvent32End(),
};

/* script4_13 @ 0x122C (52 bytes) */
u32 dMarioShieldPose_script4_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F4ECEFA,  /* 0.8078457117080688f */
	    0xBA027B17,  /* -0.0004977448261342943f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F4DEFC1,  /* 0.8044396042823792f */
	    0x39F8E6C2,  /* 0.0004747417406179011f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F4E0FDE,  /* 0.8049296140670776f */
	    0x3A007054,  /* 0.0004899550694972277f */
	aobjEvent32End(),
};

/* script4_14 @ 0x1260 (88 bytes) */
u32 dMarioShieldPose_script4_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E6E4572,  /* 0.23268678784370422f */
	    0xB7F93BA7,  /* -2.971089088532608e-05f */
	    0x3E66A038,  /* 0.22522056102752686f */
	    0xB60EFA35,  /* -2.1305288555595325e-06f */
	    0xBE83A715,  /* -0.2571341097354889f */
	    0x396CB811,  /* 0.00022575283946935087f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E6E1026,  /* 0.23248347640037537f */
	    0x37ED39A3,  /* 2.8279440812184475e-05f */
	    0x3E669CF8,  /* 0.22520816326141357f */
	    0x35D43B66,  /* 1.5812518086022465e-06f */
	    0xBE82DCB7,  /* -0.25559017062187195f */
	    0xB96190FD,  /* -0.00021511684462893754f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E6E17DD,  /* 0.23251290619373322f */
	    0x37F6DC00,  /* 2.942793071269989e-05f */
	    0x3E669D64,  /* 0.2252097725868225f */
	    0x35D67750,  /* 1.5978966985130683e-06f */
	    0xBE82F9D2,  /* -0.25581222772598267f */
	    0xB968D829,  /* -0.00022205770073924214f */
	aobjEvent32End(),
};

/* script4_15 @ 0x12B8 (56 bytes) */
u32 dMarioShieldPose_script4_15[11] = {
	aobjEvent32SetValRate(0x040, 0),
		    0x41F00000,  /* 30.0f */
		    0xBFB506B1,  /* -1.4142667055130005f */
		aobjEvent32SetVal0RateBlock(0x020, 0),
		    0x439D8000,  /* 315.0f */
		aobjEvent32SetValRateBlock(0x060, 45),
		    0x438BED70,  /* 279.85498046875f */
		    0xBFAAAAAB,  /* -1.3333333730697632f */
		    0xC2069168,  /* -33.641998291015625f */
		    0xBF800000,  /* -1.0f */
		aobjEvent32End(),
};
PAD(12);

/* AObjEvent32 *shield_anim_joint_3[26] — direction 4 dispatch. attr+0x2E8. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_3[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_0,
	(AObjEvent32 *)dMarioShieldPose_script5_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_2,
	(AObjEvent32 *)dMarioShieldPose_script5_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_5,
	(AObjEvent32 *)dMarioShieldPose_script5_6,
	(AObjEvent32 *)dMarioShieldPose_script5_7,
	(AObjEvent32 *)dMarioShieldPose_script5_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_9,
	(AObjEvent32 *)dMarioShieldPose_script5_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_12,
	(AObjEvent32 *)dMarioShieldPose_script5_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script5_14,
	(AObjEvent32 *)dMarioShieldPose_script5_15,
};

/* script5_0 @ 0x1358 (32 bytes) */
u32 dMarioShieldPose_script5_0[8] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x020, 190),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32Cmd12(0x020, 145),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script5_1 @ 0x1378 (92 bytes) */
u32 dMarioShieldPose_script5_1[23] = {
	aobjEvent32SetValRateBlock(0x017, 0),
	    0xBE567750,  /* -0.20943951606750488f */
	    0xBB05720F,  /* -0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0xBB8EFA35,  /* -0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0x3ABEA2F1,  /* 0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32SetVal0Rate(0x006, 90),
	    0xBF490FDB,  /* -0.7853981852531433f */
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0x006, 45),
	aobjEvent32SetValRate(0x001, 90),
	    0x00000000,  /* 0.0f */
	    0x3B51B33D,  /* 0.003199770348146558f */
	aobjEvent32Cmd12(0x001, 45),
	aobjEvent32SetValRate(0x010, 180),
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32Cmd12(0x010, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script5_2 @ 0x13D4 (88 bytes) */
u32 dMarioShieldPose_script5_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC016206B,  /* -2.345728635787964f */
	    0xBC7E59E7,  /* -0.015524364076554775f */
	    0xC03123A3,  /* -2.7678000926971436f */
	    0xBCE95ADA,  /* -0.028485704213380814f */
	    0x3FD011A7,  /* 1.62553870677948f */
	    0x3C4C8FB2,  /* 0.012485431507229805f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC02A6284,  /* -2.6622629165649414f */
	    0xBA2F70C4,  /* -0.000669252360239625f */
	    0xC05705A3,  /* -3.3597190380096436f */
	    0xBA82AC3D,  /* -0.000996954389847815f */
	    0x3FF1CA02,  /* 1.888977289199829f */
	    0x3AEDDCB9,  /* 0.001814744551666081f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC02A6BE3,  /* -2.662834882736206f */
	    0xBA15F56D,  /* -0.0005720470217056572f */
	    0xC057124B,  /* -3.3604915142059326f */
	    0xBA4A754C,  /* -0.0007723167072981596f */
	    0x3FF20392,  /* 1.8907339572906494f */
	    0x3AE642E4,  /* 0.0017567542381584644f */
	aobjEvent32End(),
};

/* script5_3 @ 0x142C (48 bytes) */
u32 dMarioShieldPose_script5_3[12] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBC91D45B,  /* -0.017801454290747643f */
	    0x36A8A23B,  /* 5.025676273362478e-06f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91BF47,  /* -0.017791403457522392f */
	    0x3728A23B,  /* 1.0051352546724956e-05f */
	aobjEvent32End(),
};

/* script5_4 @ 0x145C (68 bytes) */
u32 dMarioShieldPose_script5_4[17] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBB6AC8AD,  /* -0.0035825178492814302f */
	    0xBE567750,  /* -0.20943951606750488f */
	    0x3A907B7E,  /* 0.0011023131664842367f */
	aobjEvent32SetValRate(0x007, 180),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32Cmd12(0x007, 135),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script5_5 @ 0x14A0 (116 bytes) */
u32 dMarioShieldPose_script5_5[29] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBD8D9A01,  /* -0.06914139539003372f */
	    0x3BEB6E8C,  /* 0.007184809073805809f */
	    0x3F410D77,  /* 0.7541117072105408f */
	    0x3B4881FE,  /* 0.0030595059506595135f */
	    0xBFF7750D,  /* -1.9332596063613892f */
	    0x3C249CE7,  /* 0.01004717405885458f */
	aobjEvent32SetValRate(0x003, 44),
	    0xBD56815A,  /* -0.05236945301294327f */
	    0x3BF8B7A3,  /* 0.007590250577777624f */
	    0x3F53506B,  /* 0.825445830821991f */
	    0x3A0B2C2D,  /* 0.0005309011903591454f */
	aobjEvent32SetValRateBlock(0x004, 38),
	    0xBFF6BFB6,  /* -1.9277255535125732f */
	    0x3B46C8C6,  /* 0.0030332072637975216f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFF657F6,  /* -1.9245593547821045f */
	    0xBB39DC30,  /* -0.0028360001742839813f */
	aobjEvent32SetValRateBlock(0x004, 5),
	    0xBFF3B6C8,  /* -1.9040155410766602f */
	    0x3C361689,  /* 0.011113771237432957f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBD497BCB,  /* -0.049190323799848557f */
	    0x3B5058EA,  /* 0.0031791278161108494f */
	    0x3F535FA9,  /* 0.8256784081459045f */
	    0x3973DB7F,  /* 0.0002325605455553159f */
	    0xBFF30ECF,  /* -1.898889422416687f */
	    0x3BA7F990,  /* 0.005126185715198517f */
	aobjEvent32End(),
};

/* script5_6 @ 0x1514 (76 bytes) */
u32 dMarioShieldPose_script5_6[19] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xBC919C21,  /* -0.017774643376469612f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 30),
	    0xBC919517,  /* -0.017771286889910698f */
	    0xB760A42E,  /* -1.3389666492003016e-05f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC92057D,  /* -0.01782488264143467f */
	    0x3C119516,  /* 0.008885642513632774f */
	aobjEvent32SetValRateBlock(0x004, 13),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0xBC11DB61,  /* -0.00890240166336298f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91DB61,  /* -0.01780480332672596f */
	    0xB6E0CC64,  /* -6.699514415231533e-06f */
	aobjEvent32End(),
};

/* script5_7 @ 0x1560 (32 bytes) */
u32 dMarioShieldPose_script5_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 135),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script5_8 @ 0x1580 (40 bytes) */
u32 dMarioShieldPose_script5_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 145),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script5_9 @ 0x15A8 (88 bytes) */
u32 dMarioShieldPose_script5_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x401C17B0,  /* 2.438945770263672f */
	    0x3910182A,  /* 0.00013741911971010268f */
	    0xC0265B56,  /* -2.5993247032165527f */
	    0x394880E0,  /* 0.00019121496006846428f */
	    0xC067D57F,  /* -3.622405767440796f */
	    0xB986520F,  /* -0.0002561961009632796f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x401D1318,  /* 2.4542903900146484f */
	    0x3A1D2F32,  /* 0.0005996107356622815f */
	    0xC0250B89,  /* -2.578829050064087f */
	    0x3A49E652,  /* 0.0007701861904934049f */
	    0xC069A1C3,  /* -3.650498151779175f */
	    0xBA8D6815,  /* -0.0010788465151563287f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x401D1D06,  /* 2.4548964500427246f */
	    0x3A1EE510,  /* 0.0006061354652047157f */
	    0xC024FECD,  /* -2.578051805496216f */
	    0x3A4BC8DE,  /* 0.0007773766992613673f */
	    0xC069B39F,  /* -3.651588201522827f */
	    0xBA8EDF66,  /* -0.0010900318156927824f */
	aobjEvent32End(),
};

/* script5_10 @ 0x1600 (52 bytes) */
u32 dMarioShieldPose_script5_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F575145,  /* 0.841083824634552f */
	    0x3A01AD8F,  /* 0.0004946821718476713f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F64F4DD,  /* 0.8943613171577454f */
	    0x3B03B6A5,  /* 0.002009787829592824f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F6579DC,  /* 0.8963906764984131f */
	    0x3B04FE7D,  /* 0.002029328839853406f */
	aobjEvent32End(),
};

/* script5_11 @ 0x1634 (88 bytes) */
u32 dMarioShieldPose_script5_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE0813AF,  /* -0.1328875869512558f */
	    0xB6E6F124,  /* -6.882606612634845e-06f */
	    0xBD2D3178,  /* -0.04228350520133972f */
	    0xB425514E,  /* -1.5396400954159617e-07f */
	    0xBC46F05A,  /* -0.01214226521551609f */
	    0xB9510BFC,  /* -0.00019936257740482688f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE08DE21,  /* -0.13365985453128815f */
	    0xB7FE9BCF,  /* -3.035171357623767e-05f */
	    0xBD2D53A1,  /* -0.04231608286499977f */
	    0xB5C71B6F,  /* -1.4834639614491607e-06f */
	    0xBD08E7E8,  /* -0.03342428803443909f */
	    0xBA50C266,  /* -0.0007963537937030196f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE08E617,  /* -0.1336902230978012f */
	    0xB7FEBF8E,  /* -3.036835914826952e-05f */
	    0xBD2D5584,  /* -0.04231788218021393f */
	    0xB5F1D534,  /* -1.8017949514614884e-06f */
	    0xBD0C32F2,  /* -0.03422827273607254f */
	    0xBA52C28D,  /* -0.0008039854583330452f */
	aobjEvent32End(),
};

/* script5_12 @ 0x168C (88 bytes) */
u32 dMarioShieldPose_script5_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC03EA7AC,  /* -2.9789838790893555f */
	    0xB8DA6027,  /* -0.00010412959818495438f */
	    0x4034C2A8,  /* 2.824380874633789f */
	    0xB888D574,  /* -6.524744094349444e-05f */
	    0xC05EDD01,  /* -3.482239007949829f */
	    0xB991E8D6,  /* -0.00027830031467601657f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC03F62F9,  /* -2.9904158115386963f */
	    0xB9E6504C,  /* -0.0004392884438857436f */
	    0x4034514D,  /* 2.817462205886841f */
	    0xB986BD4B,  /* -0.00025699505931697786f */
	    0xC060C790,  /* -3.5121803283691406f */
	    0xBA93F811,  /* -0.0011289139511063695f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC03F6A3E,  /* -2.9908595085144043f */
	    0xB9E89E13,  /* -0.00044368262751959264f */
	    0x40344D0D,  /* 2.8172028064727783f */
	    0xB987FEFD,  /* -0.0002593918761704117f */
	    0xC060DA3C,  /* -3.513319969177246f */
	    0xBA955D83,  /* -0.001139566651545465f */
	aobjEvent32End(),
};

/* script5_13 @ 0x16E4 (52 bytes) */
u32 dMarioShieldPose_script5_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F4E0FE1,  /* 0.804929792881012f */
	    0x3A08467B,  /* 0.0005198490689508617f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F5C5A92,  /* 0.8607569932937622f */
	    0x3B09A41B,  /* 0.0021002355497330427f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F5CE587,  /* 0.8628773093223572f */
	    0x3B0AF571,  /* 0.0021203423384577036f */
	aobjEvent32End(),
};

/* script5_14 @ 0x1718 (88 bytes) */
u32 dMarioShieldPose_script5_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E6E17D8,  /* 0.23251283168792725f */
	    0x3801C85E,  /* 3.0942603189032525e-05f */
	    0x3E669D6D,  /* 0.22520990669727325f */
	    0x35E1A2DC,  /* 1.681120465946151e-06f */
	    0xBE82F9D0,  /* -0.2558121681213379f */
	    0xB97730E4,  /* -0.000235739687923342f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E71A39D,  /* 0.2359756976366043f */
	    0x390E4BF4,  /* 0.00013570470036938787f */
	    0x3E66D7CA,  /* 0.22543254494667053f */
	    0x371AB4BC,  /* 9.221195796271786e-06f */
	    0xBE8FE8BC,  /* -0.2810724973678589f */
	    0xBA78A063,  /* -0.0009484348702244461f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E71C79F,  /* 0.2361130565404892f */
	    0x3910064B,  /* 0.0001373525446979329f */
	    0x3E66DA32,  /* 0.22544172406196594f */
	    0x371A25C1,  /* 9.187905561702792e-06f */
	    0xBE906641,  /* -0.2820301353931427f */
	    0xBA7B0A19,  /* -0.0009576394804753363f */
	aobjEvent32End(),
};

/* script5_15 @ 0x1770 (48 bytes) */
u32 dMarioShieldPose_script5_15[11] = {
	aobjEvent32SetValRateBlock(0x060, 0),
		    0x438BED70,  /* 279.85498046875f */
		    0xBFAAAAAB,  /* -1.3333333730697632f */
		    0xC2069168,  /* -33.641998291015625f */
		    0xBF800000,  /* -1.0f */
		aobjEvent32SetValRate(0x020, 45),
		    0x43430000,  /* 195.0f */
		    0xBFF15D85,  /* -1.8856664896011353f */
		aobjEvent32SetVal0RateBlock(0x040, 45),
		    0xC2700000,  /* -60.0f */
		aobjEvent32End(),
};
PAD(4);

/* AObjEvent32 *shield_anim_joint_4[26] — direction 5 dispatch. attr+0x2EC. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_4[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_0,
	(AObjEvent32 *)dMarioShieldPose_script6_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_2,
	(AObjEvent32 *)dMarioShieldPose_script6_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_5,
	(AObjEvent32 *)dMarioShieldPose_script6_6,
	(AObjEvent32 *)dMarioShieldPose_script6_7,
	(AObjEvent32 *)dMarioShieldPose_script6_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_9,
	(AObjEvent32 *)dMarioShieldPose_script6_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_12,
	(AObjEvent32 *)dMarioShieldPose_script6_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script6_14,
	(AObjEvent32 *)dMarioShieldPose_script6_15,
};

/* script6_0 @ 0x1808 (28 bytes) */
u32 dMarioShieldPose_script6_0[7] = {
	aobjEvent32SetValRateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32SetVal0Rate(0x020, 90),
	    0xC1700000,  /* -15.0f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script6_1 @ 0x1824 (88 bytes) */
u32 dMarioShieldPose_script6_1[22] = {
	aobjEvent32SetValRateBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32SetValRate(0x010, 180),
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32Cmd12(0x010, 90),
	aobjEvent32SetValRate(0x001, 0),
	    0x00000000,  /* 0.0f */
	    0x3B51B33D,  /* 0.003199770348146558f */
	aobjEvent32SetVal0RateBlock(0x006, 0),
	    0xBF490FDB,  /* -0.7853981852531433f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRate(0x007, 90),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x3B05720F,  /* 0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script6_2 @ 0x187C (88 bytes) */
u32 dMarioShieldPose_script6_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC02A6BE0,  /* -2.6628341674804688f */
	    0xBB084203,  /* -0.0020791299175471067f */
	    0xC0571241,  /* -3.3604891300201416f */
	    0xBB890F8B,  /* -0.0041827610693871975f */
	    0x3FF203B6,  /* 1.8907382488250732f */
	    0xBBC29E07,  /* -0.005939248483628035f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC0283373,  /* -2.6281402111053467f */
	    0x3A794496,  /* 0.0009508816292509437f */
	    0xC0445480,  /* -3.067657470703125f */
	    0x3C2D4FAB,  /* 0.010578076355159283f */
	    0x3FF6B1DC,  /* 1.9273028373718262f */
	    0xBB68BC3C,  /* -0.0035512587055563927f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC0282823,  /* -2.6274497509002686f */
	    0x3A35068B,  /* 0.0006905577029101551f */
	    0xC04383F5,  /* -3.05492901802063f */
	    0x3C508A69,  /* 0.01272831205278635f */
	    0x3FF6B486,  /* 1.9273841381072998f */
	    0x38AA9F96,  /* 8.13595688669011e-05f */
	aobjEvent32End(),
};

/* script6_3 @ 0x18D4 (68 bytes) */
u32 dMarioShieldPose_script6_3[17] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91D45B,  /* -0.017801454290747643f */
	    0x3C91D45C,  /* 0.017801456153392792f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x004, 28),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0xBC11D45C,  /* -0.008900728076696396f */
	aobjEvent32SetValRateBlock(0x004, 15),
	    0x00000000,  /* 0.0f */
	    0x3C11F070,  /* 0.008907422423362732f */
	aobjEvent32SetVal0RateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	aobjEvent32End(),
};

/* script6_4 @ 0x1918 (64 bytes) */
u32 dMarioShieldPose_script6_4[16] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32SetValRate(0x007, 90),
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBB3EA2F1,  /* -0.002908881986513734f */
	    0x3E567750,  /* 0.20943951606750488f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBA98825B,  /* -0.0011635528644546866f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script6_5 @ 0x1958 (132 bytes) */
u32 dMarioShieldPose_script6_5[33] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBD497BCB,  /* -0.049190323799848557f */
	    0x3B61686D,  /* 0.003439451800659299f */
	    0x3F535FA9,  /* 0.8256784081459045f */
	    0x39171361,  /* 0.00014407701382879168f */
	    0xBFF30ECF,  /* -1.898889422416687f */
	    0x3BB4BA95,  /* 0.005515406373888254f */
	aobjEvent32SetValRate(0x002, 44),
	    0x3F244550,  /* 0.6416826248168945f */
	    0xBC7E3A7E,  /* -0.015516875311732292f */
	aobjEvent32SetValRateBlock(0x005, 39),
	    0x3E550711,  /* 0.20803476870059967f */
	    0x3C232720,  /* 0.009958058595657349f */
	    0xBFB9672A,  /* -1.4484608173370361f */
	    0x3CA84A8C,  /* 0.020543359220027924f */
	aobjEvent32SetValRateBlock(0x005, 1),
	    0x3E62B10E,  /* 0.22137853503227234f */
	    0x3CB6AEA7,  /* 0.022300077602267265f */
	    0xBFB615D0,  /* -1.4225406646728516f */
	    0x3D247145,  /* 0.0401470847427845f */
	aobjEvent32SetValRateBlock(0x005, 4),
	    0x3EAF8D4B,  /* 0.3428748548030853f */
	    0x3C8D8AC7,  /* 0.017278088256716728f */
	    0xBF99A58A,  /* -1.200364351272583f */
	    0x3D19FAD2,  /* 0.03759271651506424f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3EB7567B,  /* 0.3580816686153412f */
	    0x3C792602,  /* 0.015206815674901009f */
	    0x3F206780,  /* 0.6265792846679688f */
	    0xBC7773EA,  /* -0.01510331965982914f */
	    0xBF953118,  /* -1.1655607223510742f */
	    0x3D0E8E46,  /* 0.03480365127325058f */
	aobjEvent32End(),
};

/* script6_6 @ 0x19DC (72 bytes) */
u32 dMarioShieldPose_script6_6[18] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0xBC91DB61,  /* -0.01780480332672596f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 39),
	    0x00000000,  /* 0.0f */
	    0xBC11DB61,  /* -0.00890240166336298f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91DB61,  /* -0.01780480332672596f */
	    0xBD2B70F4,  /* -0.041855767369270325f */
	aobjEvent32SetValRateBlock(0x004, 4),
	    0xBE9B4BAD,  /* -0.3033117353916168f */
	    0xBD33E832,  /* -0.04392261058092117f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBEAF8D42,  /* -0.34287458658218384f */
	    0xBD220CAA,  /* -0.039562858641147614f */
	aobjEvent32End(),
};

/* script6_7 @ 0x1A24 (32 bytes) */
u32 dMarioShieldPose_script6_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 180),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script6_8 @ 0x1A44 (40 bytes) */
u32 dMarioShieldPose_script6_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 190),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script6_9 @ 0x1A6C (88 bytes) */
u32 dMarioShieldPose_script6_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x401D1D06,  /* 2.4548964500427246f */
	    0x3A2D8E37,  /* 0.0006620617932640016f */
	    0xC024FECD,  /* -2.578051805496216f */
	    0x3A5E1361,  /* 0.0008471515611745417f */
	    0xC069B39E,  /* -3.651587963104248f */
	    0xBA9BED7F,  /* -0.0011896340874955058f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x402329F4,  /* 2.549435615539551f */
	    0x3B45947B,  /* 0.0030148315709084272f */
	    0xC01EAFD6,  /* -2.4794821739196777f */
	    0x3B27CBC3,  /* 0.002560362918302417f */
	    0xC073BC5A,  /* -3.808371067047119f */
	    0xBB992DC7,  /* -0.004674646537750959f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x40235B66,  /* 2.5524535179138184f */
	    0x3B45C7DD,  /* 0.0030178942251950502f */
	    0xC01E8618,  /* -2.4769344329833984f */
	    0x3B26F54D,  /* 0.002547580050304532f */
	    0xC07408E3,  /* -3.813042402267456f */
	    0xBB9912F9,  /* -0.004671451169997454f */
	aobjEvent32End(),
};

/* script6_10 @ 0x1AC4 (52 bytes) */
u32 dMarioShieldPose_script6_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F6579D7,  /* 0.8963903784751892f */
	    0x3B10EEA1,  /* 0.0022114890161901712f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F949315,  /* 1.1607385873794556f */
	    0x3BE94A19,  /* 0.0071194288320839405f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F957B85,  /* 1.1678320169448853f */
	    0x3BE86F2A,  /* 0.007093329913914204f */
	aobjEvent32End(),
};

/* script6_11 @ 0x1AF8 (88 bytes) */
u32 dMarioShieldPose_script6_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE08E630,  /* -0.13369059562683105f */
	    0xB80AAF12,  /* -3.306481085019186e-05f */
	    0xBD2D553E,  /* -0.042317621409893036f */
	    0xB5D7064A,  /* -1.6020578641473548e-06f */
	    0xBD0C32FE,  /* -0.03422831743955612f */
	    0xBA656AE3,  /* -0.0008751584100537002f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE0DEFA0,  /* -0.1386094093322754f */
	    0xB928422B,  /* -0.0001604637800483033f */
	    0xBD2E9615,  /* -0.042623598128557205f */
	    0xB7496937,  /* -1.200503083964577e-05f */
	    0xBE096059,  /* -0.13415659964084625f */
	    0xBB2713E0,  /* -0.002549402415752411f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE0E19C2,  /* -0.13877013325691223f */
	    0xB928876C,  /* -0.00016072177095338702f */
	    0xBD2EA2B9,  /* -0.04263565316796303f */
	    0xB74A3FAE,  /* -1.2054964827257209e-05f */
	    0xBE0BF924,  /* -0.1366925835609436f */
	    0xBB2632CD,  /* -0.0025359869468957186f */
	aobjEvent32End(),
};

/* script6_12 @ 0x1B50 (88 bytes) */
u32 dMarioShieldPose_script6_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC03F6A3E,  /* -2.9908595085144043f */
	    0xB9FE1EB4,  /* -0.0004846953088417649f */
	    0x40344D0D,  /* 2.8172028064727783f */
	    0xB9940101,  /* -0.0002822950773406774f */
	    0xC060DA3D,  /* -3.513320207595825f */
	    0xBAA2DFC6,  /* -0.0012426308821886778f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC0437E68,  /* -3.0545902252197266f */
	    0xBAF77861,  /* -0.0018880480201914907f */
	    0x4032514B,  /* 2.7862117290496826f */
	    0xBA45A41E,  /* -0.0007539408979937434f */
	    0xC06A62E1,  /* -3.662285089492798f */
	    0xBB8437A9,  /* -0.004034955520182848f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC0439D4F,  /* -3.056476354598999f */
	    0xBAF73E4C,  /* -0.001886317040771246f */
	    0x40324507,  /* 2.7854630947113037f */
	    0xBA443EAD,  /* -0.0007486146059818566f */
	    0xC06AA4C4,  /* -3.666306495666504f */
	    0xBB83C5B9,  /* -0.004021373111754656f */
	aobjEvent32End(),
};

/* script6_13 @ 0x1BA8 (52 bytes) */
u32 dMarioShieldPose_script6_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F5CE58A,  /* 0.8628774881362915f */
	    0x3B177135,  /* 0.002310824813321233f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F917D81,  /* 1.136642575263977f */
	    0x3BF0009E,  /* 0.007324292324483395f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F926C9B,  /* 1.1439393758773804f */
	    0x3BEF19F4,  /* 0.007296795025467873f */
	aobjEvent32End(),
};

/* script6_14 @ 0x1BDC (88 bytes) */
u32 dMarioShieldPose_script6_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E71C790,  /* 0.2361128330230713f */
	    0x391D52F0,  /* 0.00015003583393990993f */
	    0x3E66DA37,  /* 0.2254417985677719f */
	    0x372D6A7A,  /* 1.0336394552723505e-05f */
	    0xBE90663E,  /* -0.28203004598617554f */
	    0xBA88C277,  /* -0.0010433931602165103f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E83F354,  /* 0.2577158212661743f */
	    0x3A35BE4A,  /* 0.0006932957330718637f */
	    0x3E68AFEC,  /* 0.22723358869552612f */
	    0x38881E44,  /* 6.490622763521969e-05f */
	    0xBECF0BCC,  /* -0.40438687801361084f */
	    0xBB541D85,  /* -0.0032366227824240923f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E844E46,  /* 0.25840967893600464f */
	    0x3A35E4D3,  /* 0.000693869951646775f */
	    0x3E68C118,  /* 0.22729909420013428f */
	    0x3889646F,  /* 6.55137628200464e-05f */
	    0xBED0B245,  /* -0.40761008858680725f */
	    0xBB533CBA,  /* -0.003223224077373743f */
	aobjEvent32End(),
};

/* script6_15 @ 0x1C34 (44 bytes) */
u32 dMarioShieldPose_script6_15[11] = {
	aobjEvent32SetValRate(0x020, 0),
	    0x43430000,  /* 195.0f */
	    0xBFF15D85,  /* -1.8856664896011353f */
	aobjEvent32SetVal0RateBlock(0x040, 0),
	    0xC2700000,  /* -60.0f */
	aobjEvent32SetValRateBlock(0x060, 45),
	    0x42DC4A3D,  /* 110.1449966430664f */
	    0xBFAAAAAB,  /* -1.3333333730697632f */
	    0xC2069168,  /* -33.641998291015625f */
	    0x3F800000,  /* 1.0f */
	aobjEvent32End(),
};

/* AObjEvent32 *shield_anim_joint_5[26] — direction 6 dispatch. attr+0x2F0. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_5[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_0,
	(AObjEvent32 *)dMarioShieldPose_script7_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_2,
	(AObjEvent32 *)dMarioShieldPose_script7_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_5,
	(AObjEvent32 *)dMarioShieldPose_script7_6,
	(AObjEvent32 *)dMarioShieldPose_script7_7,
	(AObjEvent32 *)dMarioShieldPose_script7_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_9,
	(AObjEvent32 *)dMarioShieldPose_script7_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_12,
	(AObjEvent32 *)dMarioShieldPose_script7_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script7_14,
	(AObjEvent32 *)dMarioShieldPose_script7_15,
};

/* script7_0 @ 0x1CC8 (32 bytes) */
u32 dMarioShieldPose_script7_0[8] = {
	aobjEvent32SetValRateBlock(0x020, 0),
	    0x00000000,  /* 0.0f */
	    0xBD5B6DB7,  /* -0.0535714291036129f */
	aobjEvent32SetVal0Rate(0x020, 90),
	    0xC1700000,  /* -15.0f */
	aobjEvent32Cmd12(0x020, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script7_1 @ 0x1CE8 (92 bytes) */
u32 dMarioShieldPose_script7_1[23] = {
	aobjEvent32SetValRateBlock(0x010, 0),
	    0x00000000,  /* 0.0f */
	    0xBD088889,  /* -0.03333333507180214f */
	aobjEvent32SetValRate(0x010, 180),
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32Cmd12(0x010, 135),
	aobjEvent32SetVal0RateBlock(0x006, 0),
	    0xBF490FDB,  /* -0.7853981852531433f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x00000000,  /* 0.0f */
	    0x3B51B33D,  /* 0.003199770348146558f */
	aobjEvent32SetValRate(0x007, 90),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x3B05720F,  /* 0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	aobjEvent32Cmd12(0x007, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script7_2 @ 0x1D44 (88 bytes) */
u32 dMarioShieldPose_script7_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC0282823,  /* -2.6274497509002686f */
	    0x3A2586EB,  /* 0.0006314354832284153f */
	    0xC04383F5,  /* -3.05492901802063f */
	    0x3C5377ED,  /* 0.01290701050311327f */
	    0x3FF6B486,  /* 1.9273841381072998f */
	    0x37AD22FD,  /* 2.0639499780372716e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC02898AE,  /* -2.6343188285827637f */
	    0xBB1BBC59,  /* -0.0023763386998325586f */
	    0xC020B84B,  /* -2.5112483501434326f */
	    0x3C194E2C,  /* 0.009357016533613205f */
	    0x3FEAC21D,  /* 1.834048867225647f */
	    0xBA26ADCF,  /* -0.0006358296959660947f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC028EB9A,  /* -2.6393799781799316f */
	    0xBBA5D757,  /* -0.005061070900410414f */
	    0xC0200125,  /* -2.5000698566436768f */
	    0x3C372569,  /* 0.011178352870047092f */
	    0x3FEB4012,  /* 1.837892770767212f */
	    0x3B7BE97F,  /* 0.00384387350641191f */
	aobjEvent32End(),
};

/* script7_3 @ 0x1D9C (48 bytes) */
u32 dMarioShieldPose_script7_3[12] = {
	aobjEvent32SetVal0Rate(0x004, 0),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x00000000,  /* 0.0f */
	    0xBC11B137,  /* -0.00889234896749258f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91B138,  /* -0.01778469979763031f */
	    0xBC91B137,  /* -0.01778469793498516f */
	aobjEvent32End(),
};

/* script7_4 @ 0x1DCC (68 bytes) */
u32 dMarioShieldPose_script7_4[17] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x00000000,  /* 0.0f */
	    0x3ACB587A,  /* 0.00155140389688313f */
	    0x3DD67750,  /* 0.10471975803375244f */
	    0xBB2537E3,  /* -0.002521031303331256f */
	    0x00000000,  /* 0.0f */
	    0x39CB587A,  /* 0.0003878509742207825f */
	aobjEvent32SetValRate(0x007, 90),
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBB3EA2F1,  /* -0.002908881986513734f */
	    0x3E567750,  /* 0.20943951606750488f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBA98825B,  /* -0.0011635528644546866f */
	aobjEvent32Cmd12(0x007, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script7_5 @ 0x1E10 (88 bytes) */
u32 dMarioShieldPose_script7_5[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3EB7566E,  /* 0.35808128118515015f */
	    0x3C48328C,  /* 0.012219082564115524f */
	    0x3F206783,  /* 0.6265794634819031f */
	    0xBC6DD7B2,  /* -0.014516757801175117f */
	    0xBF95311E,  /* -1.1655614376068115f */
	    0x3CFD875A,  /* 0.030948329716920853f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBB56309A,  /* -0.0032682777382433414f */
	    0xBC842CD4,  /* -0.016134656965732574f */
	    0x3E7A9D83,  /* 0.24474148452281952f */
	    0xBBAABFA2,  /* -0.005210832692682743f */
	    0xBF3ABFC5,  /* -0.7294886708259583f */
	    0x3AF92C03,  /* 0.001901030889712274f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBC9E3736,  /* -0.01931343600153923f */
	    0xBC837122,  /* -0.016045156866312027f */
	    0x3E75551D,  /* 0.23958249390125275f */
	    0xBBA90CC4,  /* -0.005158992484211922f */
	    0xBF3A423E,  /* -0.7275732755661011f */
	    0x3AFB0E90,  /* 0.0019154120236635208f */
	aobjEvent32End(),
};

/* script7_6 @ 0x1E68 (52 bytes) */
u32 dMarioShieldPose_script7_6[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBEAF8D18,  /* -0.34287333488464355f */
	    0xBD098FEE,  /* -0.03358452767133713f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBF0E2B08,  /* -0.5553441047668457f */
	    0xBB4C15AA,  /* -0.0031140842474997044f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBF0F143F,  /* -0.5589026808738708f */
	    0xBB6937AA,  /* -0.0035586156882345676f */
	aobjEvent32End(),
};

/* script7_7 @ 0x1E9C (32 bytes) */
u32 dMarioShieldPose_script7_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 225),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script7_8 @ 0x1EBC (40 bytes) */
u32 dMarioShieldPose_script7_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 235),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script7_9 @ 0x1EE4 (88 bytes) */
u32 dMarioShieldPose_script7_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x40235B66,  /* 2.5524535179138184f */
	    0x3B460AE2,  /* 0.0030218889005482197f */
	    0xC01E8618,  /* -2.4769344329833984f */
	    0x3B25367F,  /* 0.002520948415622115f */
	    0xC07408E2,  /* -3.813042163848877f */
	    0xBB98BE14,  /* -0.004661330953240395f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x40295297,  /* 2.6456658840179443f */
	    0x391306CB,  /* 0.00014021543029230088f */
	    0xC01A4EFD,  /* -2.4110710620880127f */
	    0x38AE40F1,  /* 8.309062832267955e-05f */
	    0xC07CD931,  /* -3.950756311416626f */
	    0xB950E18A,  /* -0.00019920445629395545f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x402953BE,  /* 2.6457362174987793f */
	    0x38937206,  /* 7.030744745861739e-05f */
	    0xC01A4E4C,  /* -2.4110288619995117f */
	    0x38307CDA,  /* 4.2077947000507265e-05f */
	    0xC07CDAD5,  /* -3.9508564472198486f */
	    0xB8D1FF7E,  /* -0.0001001348573481664f */
	aobjEvent32End(),
};

/* script7_10 @ 0x1F3C (52 bytes) */
u32 dMarioShieldPose_script7_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F957B81,  /* 1.167831540107727f */
	    0x3BE69350,  /* 0.0070366039872169495f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3FAE00C7,  /* 1.3593987226486206f */
	    0x398572A8,  /* 0.00025453162379562855f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FAE04FB,  /* 1.3595269918441772f */
	    0x390675CD,  /* 0.00012823120050597936f */
	aobjEvent32End(),
};

/* script7_11 @ 0x1F70 (88 bytes) */
u32 dMarioShieldPose_script7_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE0E19D7,  /* -0.1387704461812973f */
	    0xB92937E9,  /* -0.00016137924103531986f */
	    0xBD2EA26D,  /* -0.042635370045900345f */
	    0xB74D63EE,  /* -1.2242218872415833e-05f */
	    0xBE0BF91C,  /* -0.13669246435165405f */
	    0xBB2454FF,  /* -0.0025075075682252645f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE134ED0,  /* -0.14385533332824707f */
	    0xB705341B,  /* -7.939549504953902e-06f */
	    0xBD305635,  /* -0.043050963431596756f */
	    0xB50221BA,  /* -4.84778524878493e-07f */
	    0xBE4E8276,  /* -0.20166954398155212f */
	    0xB8AAACFE,  /* -8.138453995343298e-05f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE134FD9,  /* -0.14385928213596344f */
	    0xB6845DA3,  /* -3.944807303923881e-06f */
	    0xBD30563E,  /* -0.04305099695920944f */
	    0xB30EFA35,  /* -3.3289513368117696e-08f */
	    0xBE4E8D35,  /* -0.2017105370759964f */
	    0xB82BF329,  /* -4.099603756912984e-05f */
	aobjEvent32End(),
};

/* script7_12 @ 0x1FC8 (88 bytes) */
u32 dMarioShieldPose_script7_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC0439D4F,  /* -3.056476354598999f */
	    0xBAF682A3,  /* -0.0018807243322953582f */
	    0x40324506,  /* 2.7854628562927246f */
	    0xBA4173CA,  /* -0.000737961963750422f */
	    0xC06AA4C5,  /* -3.666306734085083f */
	    0xBB82C294,  /* -0.003990480676293373f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC0472222,  /* -3.1114583015441895f */
	    0xB8A4C253,  /* -7.856325100874528e-05f */
	    0x40311919,  /* 2.7671568393707275f */
	    0xB7B612A0,  /* -2.1704763639718294e-05f */
	    0xC071A42B,  /* -3.7756450176239014f */
	    0xB9194F4A,  /* -0.00014620754518546164f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC04722C8,  /* -3.1114978790283203f */
	    0xB8266F42,  /* -3.968110104324296e-05f */
	    0x403118EA,  /* 2.7671456336975098f */
	    0xB73BA865,  /* -1.1185275980096776e-05f */
	    0xC071A55F,  /* -3.7757184505462646f */
	    0xB89A25C1,  /* -7.350324449362233e-05f */
	aobjEvent32End(),
};

/* script7_13 @ 0x2020 (52 bytes) */
u32 dMarioShieldPose_script7_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F926C9E,  /* 1.143939733505249f */
	    0x3BED1C99,  /* 0.00723607512190938f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3FAB937F,  /* 1.340438723564148f */
	    0x39889FD7,  /* 0.0002605903137009591f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3FAB97CD,  /* 1.340570092201233f */
	    0x3909ABEC,  /* 0.00013129384024068713f */
	aobjEvent32End(),
};

/* script7_14 @ 0x2054 (88 bytes) */
u32 dMarioShieldPose_script7_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E844E50,  /* 0.2584099769592285f */
	    0x3A3639B9,  /* 0.0006951350369490683f */
	    0x3E68C103,  /* 0.2272987812757492f */
	    0x38895290,  /* 6.54804753139615e-05f */
	    0xBED0B23C,  /* -0.40760982036590576f */
	    0xBB5160E0,  /* -0.003194861114025116f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E8F5709,  /* 0.27996090054512024f */
	    0x3808F933,  /* 3.2657011615810916e-05f */
	    0x3E6AF44C,  /* 0.22944754362106323f */
	    0x365C9C10,  /* 3.2873394957277924e-06f */
	    0xBEFCB00B,  /* -0.49353060126304626f */
	    0xB8ECD757,  /* -0.00011293467105133459f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E8F593A,  /* 0.27997761964797974f */
	    0x378C2F52,  /* 1.671133577474393e-05f */
	    0x3E6AF4B3,  /* 0.2294490784406662f */
	    0x35CD87AD,  /* 1.5313177073039697e-06f */
	    0xBEFCB785,  /* -0.4935876429080963f */
	    0xB86F51CE,  /* -5.705822695745155e-05f */
	aobjEvent32End(),
};

/* script7_15 @ 0x20AC (52 bytes) */
u32 dMarioShieldPose_script7_15[11] = {
	aobjEvent32SetValRateBlock(0x060, 0),
		    0x42DC4A3D,  /* 110.1449966430664f */
		    0xBFAAAAAB,  /* -1.3333333730697632f */
		    0xC2069168,  /* -33.641998291015625f */
		    0x3F800000,  /* 1.0f */
		aobjEvent32SetValRate(0x040, 45),
		    0x41F00000,  /* 30.0f */
		    0x3FB506B1,  /* 1.4142667055130005f */
		aobjEvent32SetVal0RateBlock(0x020, 45),
		    0x42960000,  /* 75.0f */
		aobjEvent32End(),
};
PAD(8);

/* AObjEvent32 *shield_anim_joint_6[26] — direction 7 dispatch. attr+0x2F4. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_6[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_0,
	(AObjEvent32 *)dMarioShieldPose_script8_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_2,
	(AObjEvent32 *)dMarioShieldPose_script8_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_5,
	(AObjEvent32 *)dMarioShieldPose_script8_6,
	(AObjEvent32 *)dMarioShieldPose_script8_7,
	(AObjEvent32 *)dMarioShieldPose_script8_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_9,
	(AObjEvent32 *)dMarioShieldPose_script8_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_12,
	(AObjEvent32 *)dMarioShieldPose_script8_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script8_14,
	(AObjEvent32 *)dMarioShieldPose_script8_15,
};

/* script8_0 @ 0x2148 (24 bytes) */
u32 dMarioShieldPose_script8_0[6] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0xC1700000,  /* -15.0f */
	aobjEvent32SetVal0Rate(0x020, 90),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script8_1 @ 0x2160 (64 bytes) */
u32 dMarioShieldPose_script8_1[16] = {
	aobjEvent32SetValRateBlock(0x017, 0),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x3B05720F,  /* 0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32SetVal0Rate(0x017, 90),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x00000000,  /* 0.0f */
	    0xBE860A92,  /* -0.2617993950843811f */
	    0x41100000,  /* 9.0f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script8_2 @ 0x21A0 (88 bytes) */
u32 dMarioShieldPose_script8_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC028EB9E,  /* -2.639380931854248f */
	    0x3BC70E07,  /* 0.006074670236557722f */
	    0xC0200122,  /* -2.5000691413879395f */
	    0x3B3AD666,  /* 0.0028509139083325863f */
	    0x3FEB4021,  /* 1.8378945589065552f */
	    0xBC718821,  /* -0.014741928316652775f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC00EEC5E,  /* -2.2331767082214355f */
	    0x3C939224,  /* 0.01801402121782303f */
	    0xC013AAC0,  /* -2.3072967529296875f */
	    0xBB401747,  /* -0.0029310749378055334f */
	    0x3FA11779,  /* 1.2585288286209106f */
	    0xBCA3427E,  /* -0.01992916688323021f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC00D97FC,  /* -2.2124013900756836f */
	    0x3CAA3101,  /* 0.020775320008397102f */
	    0xC0141316,  /* -2.3136649131774902f */
	    0xBBD0ABEC,  /* -0.006368150934576988f */
	    0x3F9E12D2,  /* 1.2349493503570557f */
	    0xBCC129C9,  /* -0.023579495027661324f */
	aobjEvent32End(),
};

/* script8_3 @ 0x21F8 (72 bytes) */
u32 dMarioShieldPose_script8_3[18] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBC91B840,  /* -0.017788052558898926f */
	    0x3C91B840,  /* 0.017788052558898926f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal0RateBlock(0x004, 30),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0xBC11CD54,  /* -0.008899051696062088f */
	aobjEvent32SetValRateBlock(0x004, 13),
	    0xBC91B138,  /* -0.01778469979763031f */
	    0x3C11B137,  /* 0.00889234896749258f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0x3C91B137,  /* 0.01778469793498516f */
	aobjEvent32End(),
};

/* script8_4 @ 0x2240 (52 bytes) */
u32 dMarioShieldPose_script8_4[13] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBB3EA2F1,  /* -0.002908881986513734f */
	    0x3E567750,  /* 0.20943951606750488f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBA98825B,  /* -0.0011635528644546866f */
	aobjEvent32SetVal0Rate(0x007, 90),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBE567750,  /* -0.20943951606750488f */
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script8_5 @ 0x2274 (88 bytes) */
u32 dMarioShieldPose_script8_5[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBC9E3724,  /* -0.019313402473926544f */
	    0xBC83D1A7,  /* -0.016091180965304375f */
	    0x3E75551E,  /* 0.23958250880241394f */
	    0xBBA84AF6,  /* -0.0051358891651034355f */
	    0xBF3A423C,  /* -0.7275731563568115f */
	    0x3AFD55A4,  /* 0.0019327891059219837f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBF0FECD4,  /* -0.5622074604034424f */
	    0xBA0F945B,  /* -0.0005477123777382076f */
	    0xBE4BEC34,  /* -0.19914323091506958f */
	    0xBC9D8F0C,  /* -0.019233249127864838f */
	    0xBF86D347,  /* -1.053322672843933f */
	    0xBCAFA8C2,  /* -0.021442774683237076f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBF0FF0F5,  /* -0.56227046251297f */
	    0xB8841626,  /* -6.298375956248492e-05f */
	    0xBE5FF1A4,  /* -0.21869522333145142f */
	    0xBCA02B82,  /* -0.019551996141672134f */
	    0xBF89A56F,  /* -1.0753611326217651f */
	    0xBCB489FF,  /* -0.022038457915186882f */
	aobjEvent32End(),
};

/* script8_6 @ 0x22CC (52 bytes) */
u32 dMarioShieldPose_script8_6[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBF0F1444,  /* -0.5589029788970947f */
	    0xBB95B91B,  /* -0.004569185432046652f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0xBF0CFAD8,  /* -0.5507025718688965f */
	    0x3CE499F9,  /* 0.027905451133847237f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBF05762E,  /* -0.5213345289230347f */
	    0x3CF09540,  /* 0.029368042945861816f */
	aobjEvent32End(),
};

/* script8_7 @ 0x2300 (32 bytes) */
u32 dMarioShieldPose_script8_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 270),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script8_8 @ 0x2320 (40 bytes) */
u32 dMarioShieldPose_script8_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 280),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script8_9 @ 0x2348 (88 bytes) */
u32 dMarioShieldPose_script8_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x402953BE,  /* 2.6457362174987793f */
	    0xB8A5E047,  /* -7.909588020993397e-05f */
	    0xC01A4E4C,  /* -2.4110288619995117f */
	    0xB8449809,  /* -4.6871635277057067e-05f */
	    0xC07CDAD5,  /* -3.9508564472198486f */
	    0x38EB217A,  /* 0.00011211908713448793f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x402311D7,  /* 2.547963857650757f */
	    0xBB4FD7B0,  /* -0.003171425312757492f */
	    0xC01EC460,  /* -2.4807357788085938f */
	    0xBB318B2B,  /* -0.0027091007214039564f */
	    0xC07396EF,  /* -3.8060872554779053f */
	    0x3BA1663A,  /* 0.0049255164340138435f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x4022DDF3,  /* 2.5447967052459717f */
	    0xBB4F926F,  /* -0.0031672974582761526f */
	    0xC01EF0FB,  /* -2.4834582805633545f */
	    0xBB326855,  /* -0.002722283126786351f */
	    0xC0734632,  /* -3.801159381866455f */
	    0x3BA17A55,  /* 0.0049279131926596165f */
	aobjEvent32End(),
};

/* script8_10 @ 0x23A0 (52 bytes) */
u32 dMarioShieldPose_script8_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3FAE04FB,  /* 1.3595269918441772f */
	    0xB9163CEA,  /* -0.00014327807002700865f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F9420F1,  /* 1.1572552919387817f */
	    0xBBF6868C,  /* -0.007523363456130028f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F932985,  /* 1.1497045755386353f */
	    0xBBF76C17,  /* -0.0075507271103560925f */
	aobjEvent32End(),
};

/* script8_11 @ 0x23D4 (88 bytes) */
u32 dMarioShieldPose_script8_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE134FD9,  /* -0.14385928213596344f */
	    0x36951EF5,  /* 4.444149908522377e-06f */
	    0xBD30563E,  /* -0.04305099695920944f */
	    0x348192C0,  /* 2.413489710306749e-07f */
	    0xBE4E8D35,  /* -0.2017105370759964f */
	    0x384055D5,  /* 4.5856304495828226e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE0DDAFF,  /* -0.13853071630001068f */
	    0x39313ABE,  /* 0.00016901918570511043f */
	    0xBD2E9025,  /* -0.04261793568730354f */
	    0x374F2BAC,  /* 1.234832961927168e-05f */
	    0xBE081916,  /* -0.1329081952571869f */
	    0x3B30DCC6,  /* 0.0026987059973180294f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE0DAEC8,  /* -0.13836205005645752f */
	    0x3930DCEA,  /* 0.00016866964870132506f */
	    0xBD2E832B,  /* -0.04260556027293205f */
	    0x374F9FD6,  /* 1.2375376172713004e-05f */
	    0xBE0551D7,  /* -0.1301950067281723f */
	    0x3B31CFB9,  /* 0.002713186899200082f */
	aobjEvent32End(),
};

/* script8_12 @ 0x242C (88 bytes) */
u32 dMarioShieldPose_script8_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC04722C8,  /* -3.1114978790283203f */
	    0x38396C7D,  /* 4.420847471919842e-05f */
	    0x403118EA,  /* 2.7671456336975098f */
	    0x374D87AD,  /* 1.2250541658431757e-05f */
	    0xC071A55F,  /* -3.7757184505462646f */
	    0x38AC9402,  /* 8.229167724493891e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC0436F49,  /* -3.0536673069000244f */
	    0x3B026B73,  /* 0.001990047050639987f */
	    0x40325759,  /* 2.78658127784729f */
	    0x3A517973,  /* 0.0007990814629010856f */
	    0xC06A4289,  /* -3.660310983657837f */
	    0x3B8BB237,  /* 0.004263188224285841f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC0434EA8,  /* -3.051675796508789f */
	    0x3B028406,  /* 0.0019915117882192135f */
	    0x40326488,  /* 2.787385940551758f */
	    0x3A52E7D4,  /* 0.0008045409340411425f */
	    0xC069FC74,  /* -3.656033515930176f */
	    0x3B8C289E,  /* 0.004277302883565426f */
	aobjEvent32End(),
};

/* script8_13 @ 0x2484 (52 bytes) */
u32 dMarioShieldPose_script8_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3FAB97CD,  /* 1.340570092201233f */
	    0xB919BA85,  /* -0.00014660700981039554f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F910810,  /* 1.1330585479736328f */
	    0xBBFDAA89,  /* -0.007741276640444994f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F900976,  /* 1.125288724899292f */
	    0xBBFE9993,  /* -0.007769772317260504f */
	aobjEvent32End(),
};

/* script8_14 @ 0x24B8 (88 bytes) */
u32 dMarioShieldPose_script8_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E8F593A,  /* 0.27997761964797974f */
	    0xB798C050,  /* -1.820936449803412e-05f */
	    0x3E6AF4B3,  /* 0.2294490784406662f */
	    0xB608467B,  /* -2.0306604255893035e-06f */
	    0xBEFCB785,  /* -0.4935876429080963f */
	    0x388569B9,  /* 6.36162658338435e-05f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E83C6F1,  /* 0.25737717747688293f */
	    0xBA3F2B09,  /* -0.0007292484515346587f */
	    0x3E68A7B2,  /* 0.22720220685005188f */
	    0xB88EC01F,  /* -6.806872988818213e-05f */
	    0xBECE3C2B,  /* -0.40280279517173767f */
	    0x3B604300,  /* 0.003421962261199951f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E836780,  /* 0.2566490173339844f */
	    0xBA3EE1DE,  /* -0.0007281581638380885f */
	    0x3E6895EC,  /* 0.22713440656661987f */
	    0xB88E359D,  /* -6.781073898309842e-05f */
	    0xBECC79D8,  /* -0.399367094039917f */
	    0x3B61291B,  /* 0.0034356776159256697f */
	aobjEvent32End(),
};

/* script8_15 @ 0x2510 (48 bytes) */
u32 dMarioShieldPose_script8_15[11] = {
	aobjEvent32SetValRate(0x040, 0),
		    0x41F00000,  /* 30.0f */
		    0x3FB506B1,  /* 1.4142667055130005f */
		aobjEvent32SetVal0RateBlock(0x020, 0),
		    0x42960000,  /* 75.0f */
		aobjEvent32SetValRateBlock(0x060, 45),
		    0x42DC4A3D,  /* 110.1449966430664f */
		    0x3FAAAAAB,  /* 1.3333333730697632f */
		    0x42BB48B5,  /* 93.64200592041016f */
		    0x3F800000,  /* 1.0f */
		aobjEvent32End(),
};
PAD(4);

/* AObjEvent32 *shield_anim_joint_7[26] — direction 8 dispatch. attr+0x2F8. */
AObjEvent32 *dMarioShieldPose_shield_anim_joint_7[26] = {
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_0,
	(AObjEvent32 *)dMarioShieldPose_script9_1,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_2,
	(AObjEvent32 *)dMarioShieldPose_script9_3,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_4,
	NULL,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_5,
	(AObjEvent32 *)dMarioShieldPose_script9_6,
	(AObjEvent32 *)dMarioShieldPose_script9_7,
	(AObjEvent32 *)dMarioShieldPose_script9_8,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_9,
	(AObjEvent32 *)dMarioShieldPose_script9_10,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_11,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_12,
	(AObjEvent32 *)dMarioShieldPose_script9_13,
	NULL,
	(AObjEvent32 *)dMarioShieldPose_script9_14,
	(AObjEvent32 *)dMarioShieldPose_script9_15,
};

/* script9_0 @ 0x25A8 (28 bytes) */
u32 dMarioShieldPose_script9_0[7] = {
	aobjEvent32SetVal0RateBlock(0x020, 0),
	    0xC1700000,  /* -15.0f */
	aobjEvent32SetVal0Rate(0x020, 90),
	    0x00000000,  /* 0.0f */
	aobjEvent32Cmd12(0x020, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script9_1 @ 0x25C4 (68 bytes) */
u32 dMarioShieldPose_script9_1[17] = {
	aobjEvent32SetValRateBlock(0x017, 0),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x3B05720F,  /* 0.0020362173672765493f */
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0x00000000,  /* 0.0f */
	    0xBABEA2F1,  /* -0.001454440993256867f */
	    0x00000000,  /* 0.0f */
	    0x3D088889,  /* 0.03333333507180214f */
	aobjEvent32SetVal0Rate(0x017, 90),
	    0x3EBBA866,  /* 0.36651915311813354f */
	    0x00000000,  /* 0.0f */
	    0xBE860A92,  /* -0.2617993950843811f */
	    0x41100000,  /* 9.0f */
	aobjEvent32Cmd12(0x017, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script9_2 @ 0x2608 (88 bytes) */
u32 dMarioShieldPose_script9_2[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC00D97FC,  /* -2.2124013900756836f */
	    0x3C1F610D,  /* 0.009727728553116322f */
	    0xC0141316,  /* -2.3136649131774902f */
	    0x3BE0A42E,  /* 0.006855509243905544f */
	    0x3F9E12D2,  /* 1.2349493503570557f */
	    0xBC0AA3E6,  /* -0.008461927995085716f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBFE41498,  /* -1.7818784713745117f */
	    0xB9948FFB,  /* -0.00028336033574305475f */
	    0xC016A226,  /* -2.353646755218506f */
	    0x3B82327C,  /* 0.003973303362727165f */
	    0x3F599480,  /* 0.8499221801757812f */
	    0x3A514611,  /* 0.0007983157993294299f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBFE40ACD,  /* -1.781579613685608f */
	    0x399CA927,  /* 0.00029880666988901794f */
	    0xC016A338,  /* -2.3537120819091797f */
	    0xB889646F,  /* -6.55137628200464e-05f */
	    0x3F5985E3,  /* 0.8496991991996765f */
	    0xB969CDE7,  /* -0.0002229731617262587f */
	aobjEvent32End(),
};

/* script9_3 @ 0x2660 (76 bytes) */
u32 dMarioShieldPose_script9_3[19] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x00000000,  /* 0.0f */
	    0xBC91E96B,  /* -0.017811497673392296f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 27),
	    0xBC91D45B,  /* -0.017801454290747643f */
	    0xBC120C80,  /* -0.00891411304473877f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC920C80,  /* -0.01782822608947754f */
	    0x3C11D45B,  /* 0.008900727145373821f */
	aobjEvent32SetValRateBlock(0x004, 16),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0xBC11B840,  /* -0.008894026279449463f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91B840,  /* -0.017788052558898926f */
	    0x3728A23B,  /* 1.0051352546724956e-05f */
	aobjEvent32End(),
};

/* script9_4 @ 0x26AC (56 bytes) */
u32 dMarioShieldPose_script9_4[14] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBB3EA2F1,  /* -0.002908881986513734f */
	    0x3E567750,  /* 0.20943951606750488f */
	    0x3B8EFA35,  /* 0.004363323096185923f */
	    0xBDD67750,  /* -0.10471975803375244f */
	    0xBA98825B,  /* -0.0011635528644546866f */
	aobjEvent32SetVal0Rate(0x007, 90),
	    0xBF060A92,  /* -0.5235987901687622f */
	    0x3F63DEC5,  /* 0.8901179432868958f */
	    0xBE567750,  /* -0.20943951606750488f */
	aobjEvent32Cmd12(0x007, 45),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script9_5 @ 0x26E4 (116 bytes) */
u32 dMarioShieldPose_script9_5[29] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBF0FF0F8,  /* -0.5622706413269043f */
	    0x3A842805,  /* 0.001008272753097117f */
	    0xBE5FF198,  /* -0.2186950445175171f */
	    0xBCA60C29,  /* -0.020269470289349556f */
	    0xBF89A56C,  /* -1.0753607749938965f */
	    0xBCC00DC9,  /* -0.023444073274731636f */
	aobjEvent32SetValRate(0x003, 44),
	    0xBEC606C3,  /* -0.3867703378200531f */
	    0xBB22FFE4,  /* -0.0024871760979294777f */
	    0xBF1DC378,  /* -0.6162638664245605f */
	    0x3AADFCCE,  /* 0.0013274194207042456f */
	aobjEvent32SetValRateBlock(0x004, 17),
	    0xBFBB1C94,  /* -1.4618096351623535f */
	    0xBB9FCCD7,  /* -0.0048767137341201305f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBFBC45EA,  /* -1.4708836078643799f */
	    0xBC12BBF4,  /* -0.008955944329500198f */
	aobjEvent32SetValRateBlock(0x004, 26),
	    0xBFCED06D,  /* -1.615735650062561f */
	    0x3B8CCDF0,  /* 0.004297010600566864f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBEC8C403,  /* -0.39212045073509216f */
	    0xBBAF4FD1,  /* -0.005350091028958559f */
	    0xBF1CFB95,  /* -0.613213837146759f */
	    0x3B47E361,  /* 0.003050051862373948f */
	    0xBFCDA0BA,  /* -1.6064674854278564f */
	    0x3C17D9A6,  /* 0.009268200024962425f */
	aobjEvent32End(),
};

/* script9_6 @ 0x2758 (100 bytes) */
u32 dMarioShieldPose_script9_6[25] = {
	aobjEvent32SetValRate(0x004, 0),
	    0xBF05763C,  /* -0.5213353633880615f */
	    0x3D06241F,  /* 0.03274929150938988f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 7),
	    0xBDDA58F4,  /* -0.10661497712135315f */
	    0x3DD7D111,  /* 0.10537923127412796f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC921383,  /* -0.01783156953752041f */
	    0x3D35F3AF,  /* 0.04442184790968895f */
	aobjEvent32SetValRateBlock(0x004, 14),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0x3C11CD54,  /* 0.008899051696062088f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x00000000,  /* 0.0f */
	    0xB77CAFBB,  /* -1.5061285921547096e-05f */
	aobjEvent32SetValRateBlock(0x004, 21),
	    0x00000000,  /* 0.0f */
	    0xBC11CD54,  /* -0.008899051696062088f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0xBC91CD54,  /* -0.017798103392124176f */
	    0xBC91CD54,  /* -0.017798103392124176f */
	aobjEvent32End(),
};

/* script9_7 @ 0x27BC (32 bytes) */
u32 dMarioShieldPose_script9_7[8] = {
	aobjEvent32SetValRateBlock(0x001, 0),
	    0x3FA78D36,  /* 1.3089969158172607f */
	    0x3A397BF2,  /* 0.0007075659232214093f */
	aobjEvent32SetVal0Rate(0x001, 360),
	    0x3FA78D36,  /* 1.3089969158172607f */
	aobjEvent32Cmd12(0x001, 315),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script9_8 @ 0x27DC (40 bytes) */
u32 dMarioShieldPose_script9_8[10] = {
	aobjEvent32SetValAfterBlock(0x077, 0),
	    0x40490FDB,  /* 3.1415927410125732f */
	    0xBFC90FDA,  /* -1.570796251296997f */
	    0x00000000,  /* 0.0f */
	    0x418FFFF0,  /* 17.999969482421875f */
	    0xB97F0000,  /* -0.00024318695068359375f */
	    0x410FFFD9,  /* 8.99996280670166f */
	aobjEvent32Cmd12(0x000, 325),
	aobjEvent32Wait(45),
	aobjEvent32End(),
};

/* script9_9 @ 0x2804 (88 bytes) */
u32 dMarioShieldPose_script9_9[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x4022DDF3,  /* 2.5447967052459717f */
	    0xBB4EB780,  /* -0.003154247999191284f */
	    0xC01EF0FB,  /* -2.4834582805633545f */
	    0xBB33F185,  /* -0.002745718928053975f */
	    0xC0734632,  /* -3.801159381866455f */
	    0x3BA17165,  /* 0.004926847759634256f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x401D1E0F,  /* 2.4549596309661865f */
	    0xB9031BF0,  /* -0.00012503541074693203f */
	    0xC024FD7A,  /* -2.5779709815979004f */
	    0xB927D4B3,  /* -0.00016005597717594355f */
	    0xC069B57A,  /* -3.6517014503479004f */
	    0x396B68F6,  /* 0.00022450447431765497f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x401D1D06,  /* 2.4548964500427246f */
	    0xB8845DA3,  /* -6.311691686278209e-05f */
	    0xC024FECD,  /* -2.578051805496216f */
	    0xB8A93A25,  /* -8.069378236541525e-05f */
	    0xC069B39F,  /* -3.651588201522827f */
	    0x38ED5D62,  /* 0.0001131843455368653f */
	aobjEvent32End(),
};

/* script9_10 @ 0x285C (52 bytes) */
u32 dMarioShieldPose_script9_10[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F932986,  /* 1.1497046947479248f */
	    0xBBF8E8FE,  /* -0.007596134208142757f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F6587B1,  /* 0.8966017365455627f */
	    0xB9DB09F0,  /* -0.00041778339073061943f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F6579E1,  /* 0.896390974521637f */
	    0xB95CF56D,  /* -0.00021072263189125806f */
	aobjEvent32End(),
};

/* script9_11 @ 0x2890 (88 bytes) */
u32 dMarioShieldPose_script9_11[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xBE0DAEC9,  /* -0.1383620649576187f */
	    0x392F635D,  /* 0.00016726316243875772f */
	    0xBD2E831D,  /* -0.042605508118867874f */
	    0x374B8161,  /* 1.2129866263421718e-05f */
	    0xBE0551D8,  /* -0.1301950216293335f */
	    0x3B33794E,  /* 0.0027385535649955273f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xBE08E70E,  /* -0.1336939036846161f */
	    0x36D4CA61,  /* 6.341652351693483e-06f */
	    0xBD2D5551,  /* -0.04231769219040871f */
	    0x343BA865,  /* 1.7476993718901213e-07f */
	    0xBD0C8AE9,  /* -0.034312162548303604f */
	    0x392D827E,  /* 0.00016547177801840007f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xBE08E62E,  /* -0.13369056582450867f */
	    0x366084E7,  /* 3.34559604198148e-06f */
	    0xBD2D557F,  /* -0.042317863553762436f */
	    0xB4373094,  /* -1.7060875734387082e-07f */
	    0xBD0C332A,  /* -0.034228481352329254f */
	    0x38AF7E2C,  /* 8.3681516116485e-05f */
	aobjEvent32End(),
};

/* script9_12 @ 0x28E8 (88 bytes) */
u32 dMarioShieldPose_script9_12[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0xC0434EA8,  /* -3.051675796508789f */
	    0x3B02916E,  /* 0.0019923108629882336f */
	    0x40326488,  /* 2.787385940551758f */
	    0x3A55A0D9,  /* 0.0008149273344315588f */
	    0xC069FC76,  /* -3.656033992767334f */
	    0x3B8CF626,  /* 0.00430180411785841f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0xC03F6B00,  /* -2.99090576171875f */
	    0x38C02037,  /* 9.161273919744417e-05f */
	    0x40344C9C,  /* 2.81717586517334f */
	    0x385FF5ED,  /* 5.339637937140651e-05f */
	    0xC060DC2D,  /* -3.5134384632110596f */
	    0x39769482,  /* 0.00023515711654908955f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0xC03F6A3E,  /* -2.9908595085144043f */
	    0x38413E2C,  /* 4.6072687837295234e-05f */
	    0x40344D0D,  /* 2.8172028064727783f */
	    0x37E1A2DC,  /* 2.6897927455138415e-05f */
	    0xC060DA3C,  /* -3.513319969177246f */
	    0x38F888EE,  /* 0.00011851066665258259f */
	aobjEvent32End(),
};

/* script9_13 @ 0x2940 (52 bytes) */
u32 dMarioShieldPose_script9_13[13] = {
	aobjEvent32SetValRate(0x004, 0),
	    0x3F900979,  /* 1.1252890825271606f */
	    0xBC001C8D,  /* -0.007819307036697865f */
	aobjEvent32SetValAfterBlock(0x003, 0),
	    0x00000000,  /* 0.0f */
	    0x00000000,  /* 0.0f */
	aobjEvent32SetValRateBlock(0x004, 44),
	    0x3F5CF3F5,  /* 0.8630974888801575f */
	    0xB9E524EF,  /* -0.0004370580136310309f */
	aobjEvent32SetValRateBlock(0x004, 1),
	    0x3F5CE587,  /* 0.8628773093223572f */
	    0xB966DF45,  /* -0.00022017683659214526f */
	aobjEvent32End(),
};

/* script9_14 @ 0x2974 (88 bytes) */
u32 dMarioShieldPose_script9_14[22] = {
	aobjEvent32SetValRateBlock(0x007, 0),
	    0x3E836778,  /* 0.2566487789154053f */
	    0xBA3DF86A,  /* -0.000724679441191256f */
	    0x3E6895E5,  /* 0.22713430225849152f */
	    0xB88C4A21,  /* -6.689527799608186e-05f */
	    0xBECC79D6,  /* -0.3993670344352722f */
	    0x3B62BE94,  /* 0.003459845669567585f */
	aobjEvent32SetValRateBlock(0x007, 44),
	    0x3E71CB57,  /* 0.23612724244594574f */
	    0xB7ED6F41,  /* -2.8304408260737546e-05f */
	    0x3E66DA75,  /* 0.22544272243976593f */
	    0xB6060A92,  /* -1.9973708731413353e-06f */
	    0xBE90734C,  /* -0.2821296453475952f */
	    0x394EFA85,  /* 0.00019739016715902835f */
	aobjEvent32SetValRateBlock(0x007, 1),
	    0x3E71C79F,  /* 0.2361130565404892f */
	    0xB76E33DA,  /* -1.4197978089214303e-05f */
	    0x3E66DA32,  /* 0.22544172406196594f */
	    0xB5860A92,  /* -9.986854365706677e-07f */
	    0xBE906641,  /* -0.2820301353931427f */
	    0x38D0BDCB,  /* 9.953564585885033e-05f */
	aobjEvent32End(),
};

/* script9_15 @ 0x29CC (52 bytes) */
u32 dMarioShieldPose_script9_15[11] = {
	aobjEvent32SetValRateBlock(0x060, 0),
		    0x42DC4A3D,  /* 110.1449966430664f */
		    0x3FAAAAAB,  /* 1.3333333730697632f */
		    0x42BB48B5,  /* 93.64200592041016f */
		    0x3F800000,  /* 1.0f */
		aobjEvent32SetValRate(0x020, 45),
		    0x43430000,  /* 195.0f */
		    0x3FF15CFB,  /* 1.8856500387191772f */
		aobjEvent32SetVal0RateBlock(0x040, 45),
		    0x42F00000,  /* 120.0f */
		aobjEvent32End(),
};
