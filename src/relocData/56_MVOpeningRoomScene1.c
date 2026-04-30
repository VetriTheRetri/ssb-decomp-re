/* relocData file 56: MVOpeningRoomScene1 — movie/opening camera animation data.
 *
 * Block boundaries from symbols/reloc_data_symbols.us.txt offsets.
 * Each ll{Name}CamAnimJoint in that file points at a u32 AObjEvent32
 * command stream; the movie engine passes each to gcAddCObjCamAnimJoint.
 */

#include "relocdata_types.h"
#include <sys/objdef.h>  // aobjEvent32* macros

/* CamAnimJoint CamAnimJoint @ 0x0000 (1008 bytes) */
u32 dMVOpeningRoomScene1_CamAnimJoint[249] = {
	aobjEvent32SetVal0Rate(0x075, 0),
	    0x00000000,  /* 0.0f */
	    0xC559EC07,  /* -3486.751708984375f */
	    0x00000000,  /* 0.0f */
	    0x4504A7D2,  /* 2122.48876953125f */
	    0xC55C8799,  /* -3528.474853515625f */
	aobjEvent32SetValRate(0x002, 0),
	    0x45EACFF9,  /* 7513.99658203125f */
	    0xBE294E6C,  /* -0.16533821821212769f */
	aobjEvent32SetValBlock(0x200, 0),
	    0x41838231,  /* 16.438570022583008f */
	aobjEvent32SetVal0Rate(0x030, 20),
	    0x00000000,  /* 0.0f */
	    0x4504A7D2,  /* 2122.48876953125f */
	aobjEvent32SetValRate(0x006, 20),
	    0x45EACFF9,  /* 7513.99658203125f */
	    0x3E21702A,  /* 0.15765443444252014f */
	    0xC559EC07,  /* -3486.751708984375f */
	    0xBE32B9E6,  /* -0.1745372712612152f */
	aobjEvent32SetVal0Rate(0x001, 21),
	    0x00000000,  /* 0.0f */
	aobjEvent32SetVal(0x200, 80),
	    0x41838231,  /* 16.438570022583008f */
	aobjEvent32SetVal0RateBlock(0x040, 9),
	    0xC55C8799,  /* -3528.474853515625f */
	aobjEvent32SetValRate(0x040, 60),
	    0xC55C8799,  /* -3528.474853515625f */
	    0xBEF8B014,  /* -0.48571836948394775f */
	aobjEvent32Wait(11),
	aobjEvent32SetVal(0x006, 60),
	    0x4603532A,  /* 8404.791015625f */
	    0xC50390A1,  /* -2105.039306640625f */
	aobjEvent32SetValRate(0x030, 60),
	    0x00000000,  /* 0.0f */
	    0x3F133190,  /* 0.5749750137329102f */
	    0x4504A7D2,  /* 2122.48876953125f */
	    0xBD997426,  /* -0.07492856681346893f */
	aobjEvent32Wait(1),
	aobjEvent32SetValAfter(0x001, 59),
	    0x00000000,  /* 0.0f */
	aobjEvent32Wait(48),
	aobjEvent32SetValRate(0x040, 35),
	    0xC535E582,  /* -2910.34423828125f */
	    0x423A1B94,  /* 46.52693176269531f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRate(0x020, 35),
	    0x44F0582B,  /* 1922.7552490234375f */
	    0xC14516FF,  /* -12.318114280700684f */
	aobjEvent32SetTargetRate(0x010, 0),
	    0x3F133333,  /* 0.574999988079071f */
	aobjEvent32SetValRate(0x010, 44),
	    0xC43A28AC,  /* -744.635498046875f */
	    0xC22C111F,  /* -43.016719818115234f */
	aobjEvent32SetValRate(0x200, 59),
	    0x41FD43AE,  /* 31.65804672241211f */
	    0x3E8F289B,  /* 0.2796066701412201f */
	aobjEvent32SetTargetRate(0x002, 0),
	    0x41907DF3,  /* 18.061498641967773f */
	aobjEvent32SetValRate(0x002, 60),
	    0x45895A0B,  /* 4395.25537109375f */
	    0xC273115B,  /* -60.76694869995117f */
	aobjEvent32SetTargetRate(0x001, 0),
	    0x40815D14,  /* 4.042612075805664f */
	aobjEvent32SetValRate(0x001, 80),
	    0x4589D8BE,  /* 4411.0927734375f */
	    0x403FBE40,  /* 2.9959869384765625f */
	aobjEvent32SetTargetRate(0x004, 0),
	    0x41D43893,  /* 26.527624130249023f */
	aobjEvent32SetValRate(0x004, 120),
	    0x44A1070C,  /* 1288.22021484375f */
	    0x419EC0C9,  /* 19.844133377075195f */
	aobjEvent32Wait(24),
	aobjEvent32SetValRate(0x040, 22),
	    0xC4AF6B70,  /* -1403.357421875f */
	    0x429B521B,  /* 77.66036224365234f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRate(0x020, 41),
	    0x448F7430,  /* 1147.630859375f */
	    0xBF007E52,  /* -0.5019274950027466f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(0x010, 7),
	    0xC484395E,  /* -1057.792724609375f */
	    0xC24F4EF3,  /* -51.82709884643555f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x040, 29),
	    0xC2AA61F3,  /* -85.1913070678711f */
	    0x402BD399,  /* 2.6847898960113525f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x010, 7),
	    0xC4B7C6E1,  /* -1470.2149658203125f */
	    0xC2706A26,  /* -60.103660583496094f */
	aobjEvent32SetValRate(0x010, 15),
	    0xC514C12A,  /* -2380.07275390625f */
	    0xC26DDB42,  /* -59.46411895751953f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x200, 121),
	    0x4227592D,  /* 41.83708572387695f */
	    0x3D433DBA,  /* 0.047666288912296295f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x002, 20),
	    0x45488511,  /* 3208.316650390625f */
	    0xC2393137,  /* -46.29806137084961f */
	aobjEvent32Wait(13),
	aobjEvent32SetValRate(0x010, 20),
	    0xC55DF75B,  /* -3551.459716796875f */
	    0xC25CE34F,  /* -55.221981048583984f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x040, 43),
	    0xC487D3FA,  /* -1086.624267578125f */
	    0xC0E8DC0C,  /* -7.276861190795898f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 60),
	    0x452A70B9,  /* 2727.045166015625f */
	    0x3F9EA4F6,  /* 1.2394092082977295f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x002, 40),
	    0x44CA2BE4,  /* 1617.37158203125f */
	    0xC1E1EF22,  /* -28.241764068603516f */
	aobjEvent32SetValRate(0x001, 100),
	    0x4406D1C5,  /* 539.2776489257812f */
	    0xC2010F7E,  /* -32.26512908935547f */
	aobjEvent32Wait(13),
	aobjEvent32SetValRate(0x010, 62),
	    0xC5AFAE1C,  /* -5621.763671875f */
	    0xC1AE8E57,  /* -21.819501876831055f */
	aobjEvent32Wait(25),
	aobjEvent32SetValRate(0x040, 51),
	    0xC4404DD9,  /* -769.2163696289062f */
	    0x40B30DE9,  /* 5.595448017120361f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x006, 60),
	    0x43C011EA,  /* 384.13995361328125f */
	    0xC176A576,  /* -15.415395736694336f */
	    0x44B75CF5,  /* 1466.9049072265625f */
	    0x400EF2A3,  /* 2.2335593700408936f */
	aobjEvent32Wait(16),
	aobjEvent32SetValRate(0x020, 44),
	    0x449F90F2,  /* 1276.529541015625f */
	    0xC1E2CBB0,  /* -28.349456787109375f */
	aobjEvent32Wait(19),
	aobjEvent32SetValRate(0x010, 45),
	    0xC5BAE1FB,  /* -5980.24755859375f */
	    0x3F37546E,  /* 0.7161320447921753f */
	aobjEvent32Wait(14),
	aobjEvent32SetVal0RateBlock(0x040, 10),
	    0xC43A5354,  /* -745.302001953125f */
	aobjEvent32SetValRate(0x040, 10),
	    0xC4404DD9,  /* -769.2163696289062f */
	    0xBF53BB87,  /* -0.8270801901817322f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 10),
	    0x44958594,  /* 1196.17431640625f */
	    0x3EC4180C,  /* 0.38299596309661865f */
	aobjEvent32SetValRate(0x207, 20),
	    0x4406D1C5,  /* 539.2776489257812f */
	    0xC1433EBA,  /* -12.202814102172852f */
	    0x43C011EA,  /* 384.13995361328125f */
	    0x421DF89D,  /* 39.4927864074707f */
	    0x44B75CF5,  /* 1466.9049072265625f */
	    0x4158B18B,  /* 13.54334545135498f */
	    0x4227592D,  /* 41.83708572387695f */
	    0xBD30651E,  /* -0.043065182864665985f */
	aobjEvent32Wait(9),
	aobjEvent32SetValRate(0x040, 33),
	    0xC47EADCB,  /* -1018.7155151367188f */
	    0xC1696A19,  /* -14.58840274810791f */
	aobjEvent32Wait(1),
	aobjEvent32SetValRate(0x020, 14),
	    0x44A0B716,  /* 1285.721435546875f */
	    0x41504290,  /* 13.016250610351562f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRate(0x200, 20),
	    0x420628B3,  /* 33.53974533081055f */
	    0xBD832064,  /* -0.06402662396430969f */
	aobjEvent32SetValRate(0x010, 26),
	    0xC58CF50C,  /* -4510.630859375f */
	    0x42DD732F,  /* 110.72496795654297f */
	aobjEvent32SetValRate(0x007, 90),
	    0xC448C207,  /* -803.0316772460938f */
	    0xC1433EB7,  /* -12.202811241149902f */
	    0x4593C2C3,  /* 4728.34521484375f */
	    0x42221637,  /* 40.52169418334961f */
	    0x4538CAC3,  /* 2956.672607421875f */
	    0x4158B187,  /* 13.543341636657715f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRate(0x020, 22),
	    0x45279B3E,  /* 2681.70263671875f */
	    0x4238965E,  /* 46.14684295654297f */
	aobjEvent32Wait(16),
	aobjEvent32SetValRate(0x200, 75),
	    0x41CB7B4E,  /* 25.43520736694336f */
	    0xBE56D56E,  /* -0.20979854464530945f */
	aobjEvent32Wait(2),
	aobjEvent32SetValRate(0x040, 57),
	    0xC56BD775,  /* -3773.466064453125f */
	    0x3F185BB4,  /* 0.5951492786407471f */
	aobjEvent32Wait(4),
	aobjEvent32SetValRateBlock(0x030, 53),
	    0xC43529AA,  /* -724.6510009765625f */
	    0x3DBD43A4,  /* 0.09241417050361633f */
	    0x455F7720,  /* 3575.4453125f */
	    0x3F218DE1,  /* 0.631071150302887f */
	aobjEvent32SetValRate(0x030, 26),
	    0xC46DE3F8,  /* -951.56201171875f */
	    0xC11964EE,  /* -9.587141036987305f */
	    0x45515F20,  /* 3349.9453125f */
	    0xC15D5926,  /* -13.834264755249023f */
	aobjEvent32SetValRate(0x040, 45),
	    0xC56A44BA,  /* -3748.29541015625f */
	    0x3D5115F9,  /* 0.05104634538292885f */
	aobjEvent32Wait(11),
	aobjEvent32SetValRate(0x007, 20),
	    0xC448C207,  /* -803.0316772460938f */
	    0xC0A6308C,  /* -5.193426132202148f */
	    0x45974C36,  /* 4841.5263671875f */
	    0xC21D60CA,  /* -39.344520568847656f */
	    0x4538CAC3,  /* 2956.672607421875f */
	    0xC2D115FF,  /* -104.54296112060547f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRate(0x200, 25),
	    0x417E3805,  /* 15.888676643371582f */
	    0x3BA01BC6,  /* 0.004886123351752758f */
	aobjEvent32Wait(10),
	aobjEvent32SetValRate(0x030, 19),
	    0xC490824E,  /* -1156.072021484375f */
	    0xBF8C571B,  /* -1.0964082479476929f */
	    0x450DB725,  /* 2267.446533203125f */
	    0xBF7A9857,  /* -0.9788870215415955f */
	aobjEvent32Wait(5),
	aobjEvent32SetValRateBlock(0x007, 10),
	    0xC46FB568,  /* -958.83447265625f */
	    0xBFA40B97,  /* -1.2816036939620972f */
	    0x455DC028,  /* 3548.009765625f */
	    0xC1293CB7,  /* -10.577322959899902f */
	    0xC3339DB7,  /* -179.61607360839844f */
	    0xC142F1F3,  /* -12.184069633483887f */
	aobjEvent32SetVal0Rate(0x007, 160),
	    0xC47F39E0,  /* -1020.904296875f */
	    0x453E361B,  /* 3043.381591796875f */
	    0xC493A5CA,  /* -1181.180908203125f */
	aobjEvent32SetValRate(0x200, 160),
	    0x41800355,  /* 16.00162696838379f */
	    0x3C0647C9,  /* 0.008195825852453709f */
	aobjEvent32Wait(4),
	aobjEvent32SetVal0RateBlock(0x070, 156),
	    0xC48EEDDF,  /* -1143.4334716796875f */
	    0x45056987,  /* 2134.595458984375f */
	    0xC56B334B,  /* -3763.205810546875f */
	aobjEvent32End(),
};

u8 dMVOpeningRoomScene1_CamAnimJoint_post[12] = {
	#include <MVOpeningRoomScene1/CamAnimJoint_post.data.inc.c>
};
