/* ftMotionCommand script data for relocData file 238 (NessMainMotion) */
/* File size: 6064 bytes (0x17B0) */

#include "relocdata_types.h"

#if defined(REGION_JP)

/* JP binary has a different layout; fold it in as a chain-encoded
 * raw u32 blob. The companion .jp.reloc is empty so fixRelocChain
 * leaves the pre-baked JP chain bytes alone. */
u32 dNessMainMotion[] = {
	0xAC000001, 0x04000002, 0xAC000002, 0x04000004, 0xAC000001, 0x04000003, 0xAC000000, 0x04000001,
	0x8C000000, 0xBC000003, 0x88000000, 0x000F0000, 0x04000050, 0xBC000003, 0x88000000, 0x00120000,
	0x04000014, 0x88000000, 0x00150000, 0x04000050, 0x90000000, 0x002D0009, 0x38000078, 0x80000002,
	0x98002C00, 0x00000000, 0xFF880000, 0x003C0000, 0x04000006, 0x84000000, 0x00000000, 0x08000002,
	0x3800006B, 0x98002C00, 0x00000000, 0x003C0000, 0x00000000, 0x0400000F, 0x3800006B, 0x98002C00,
	0x00000000, 0x003C0000, 0x00000000, 0x94000000, 0x90000000, 0x0049001F, 0x3800007C, 0x98002C00,
	0x00000000, 0x003C0000, 0x00000000, 0x00000000, 0xBC000003, 0x08000006, 0x58000001, 0x00000000,
	0xBC000003, 0x98004000, 0x00000000, 0x00780000, 0x00000000, 0x0800000C, 0x58000001, 0x5C000001,
	0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x74000003, 0x08000002, 0x74000001,
	0x90000000, 0x007A004A, 0x38000060, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x80000004,
	0x9800A400, 0x00000000, 0x00000064, 0x00640064, 0x04000006, 0x84000000, 0x00000000, 0x380000D4,
	0x80000004, 0x9800A400, 0x00000000, 0x00000064, 0x00640064, 0x04000006, 0x84000000, 0x00000000,
	0xBC000003, 0x3800004A, 0x98002C00, 0x00000000, 0xFFC40000, 0x00000000, 0x00000000, 0xBC000003,
	0x3800004A, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x440001BA, 0x00000000,
	0x38000270, 0x00000000, 0x38000270, 0x74000003, 0x08000002, 0x74000001, 0x00000000, 0xAC000004,
	0x8C000000, 0x88000000, 0x007D0077, 0x00000000, 0x88000000, 0x009F0077, 0x34000000, 0x021201D6,
	0x00000000, 0xBC000003, 0x3800004A, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x08000008, 0x74000003, 0x00000000, 0x08000018, 0x74000001, 0x00000000, 0xAC000004, 0xBC000004,
	0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x9BF88400, 0x00000000, 0x00000000, 0x00000000,
	0x04000002, 0xBC000000, 0x08000018, 0xBC000004, 0x04000001, 0x00000000, 0x90000000, 0x00AF008E,
	0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x74000003, 0x08000014, 0x74000001, 0x8C000000,
	0x74000003, 0x08000016, 0x74000001, 0x08000002, 0x58000001, 0x00000000, 0x90000000, 0x00B200A8,
	0x3800000B, 0x88000000, 0x00B500A0, 0x00000000, 0x90000000, 0x00B700B0, 0x90000000, 0x00B900B0,
	0x90000000, 0x010700B0, 0xBC000004, 0x74000003, 0x08000014, 0xAC000004, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x0C0180C0, 0x00C80000, 0x00640000, 0x5A46416B, 0x01220000, 0x04000002,
	0x18000000, 0x04000003, 0x0C0180C0, 0x00C80000, 0x00640000, 0x5A46416B, 0x01220000, 0x74000001,
	0x04000002, 0x18000000, 0xBC000003, 0x0400000E, 0xAC000000, 0x00000000, 0xBC000004, 0x74000003,
	0x08000014, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x0C0340C0, 0x00B40046, 0xFFCE003C,
	0x5A46416B, 0x01220000, 0x04000002, 0x18000000, 0x04000002, 0x0C0340C0, 0x00B40046, 0xFFCE003C,
	0x5A46416B, 0x01220000, 0x74000001, 0x04000002, 0x18000000, 0xBC000003, 0x00000000, 0xC4000009,
	0x440001B1, 0x38000011, 0x98007C00, 0x00000000, 0x00000000, 0x00000000, 0x74000003, 0x08000018,
	0x74000001, 0x00000000, 0xC4000007, 0x440001B1, 0x3800000B, 0x98007C00, 0x00000000, 0x00000000,
	0x00000000, 0x74000003, 0x08000014, 0x74000001, 0xC8000007, 0x00000000, 0x90000000, 0x01A500FA,
	0x3800000B, 0x98007C00, 0x00000078, 0x00000000, 0x00000000, 0x08000004, 0x98004000, 0x00640000,
	0x00000000, 0x00000000, 0x74000003, 0x08000014, 0x74000001, 0x58000001, 0x00000000, 0x3800000B,
	0x98007C00, 0x00000078, 0x00000000, 0x00000000, 0x08000004, 0x98003C00, 0xFF9C0000, 0x00000000,
	0x00000000, 0x74000003, 0x08000014, 0x74000001, 0x00000000, 0xAC000004, 0x74000003, 0x38000013,
	0x00000000, 0xAC000004, 0x74000003, 0x0400003C, 0x74000001, 0x00000000, 0x74000003, 0x00000000,
	0x74000003, 0x00000000, 0x74000003, 0x00000000, 0x74000003, 0x00000000, 0x74000003, 0x00000000,
	0x74000003, 0x00000000, 0x74000003, 0x08000024, 0x74000001, 0x00000000, 0x98007C00, 0x00000000,
	0x00000000, 0x00000000, 0x74000003, 0x440001B1, 0x08000004, 0x0C0380C0, 0x01180000, 0x00000000,
	0x5A464193, 0x00220000, 0x0C80A0C0, 0x00960000, 0x00000000, 0x5A464193, 0x00220000, 0x4C000026,
	0x98004C00, 0x0000FFB0, 0xFF4C0000, 0x00000000, 0x04000002, 0x74000001, 0x04000004, 0x18000000,
	0x00000000, 0x74000003, 0x00000000, 0x98007C00, 0x00000000, 0x00000000, 0x00000000, 0x74000003,
	0x440001B1, 0x08000003, 0x0C00A0C0, 0x00960000, 0x00000000, 0x5A464193, 0x00220000, 0x0C8380C0,
	0x01180050, 0x00000000, 0x5A464193, 0x00220000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000,
	0x4C000026, 0x04000002, 0x74000001, 0x04000004, 0x18000000, 0x00000000, 0x74000003, 0x00000000,
	0x3800000B, 0x98004000, 0x00640000, 0x00000000, 0x00000000, 0x74000003, 0x0400000F, 0x74000001,
	0x00000000, 0x74000003, 0x00000000, 0x3800000B, 0x98004000, 0x00640000, 0x00000000, 0x00000000,
	0x74000003, 0x0400000F, 0x74000001, 0x00000000, 0x08000002, 0x58000001, 0x00000000, 0x08000004,
	0x58000001, 0x00000000, 0x08000008, 0x54000001, 0x00000000, 0x08000004, 0x98004C00, 0x00000000,
	0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000009, 0x98002C00, 0x00000000, 0x00000000,
	0x00000000, 0x54000001, 0x00000000, 0x60000006, 0x90000000, 0x01BE019C, 0x08000008, 0x98002C00,
	0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000004, 0x98002C00, 0x00000000,
	0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000009, 0x50000000, 0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000, 0x54000001, 0x00000000, 0x60000006, 0x90000000, 0x01D801B4, 0x08000008,
	0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000004,
	0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000007,
	0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x60000004, 0x90000000,
	0x01F101CF, 0x08000006, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000,
	0x08000006, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000006,
	0x50000000, 0x98004000, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x60000004,
	0x90000000, 0x020701E7, 0x08000006, 0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000,
	0x54000001, 0x00000000, 0x08000006, 0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000,
	0x54000001, 0x00000000, 0x08000012, 0x54000001, 0x00000000, 0x60000009, 0x90000000, 0x020D0202,
	0x08000012, 0x54000001, 0x00000000, 0x60000009, 0x90000000, 0x02B90208, 0x08000002, 0xCC040000,
	0x08000004, 0x88000000, 0x021D0000, 0x04000004, 0xCC03FFFF, 0x04000004, 0x18000000, 0x00000000,
	0x08000007, 0xCC040000, 0x08000009, 0xBC000004, 0x88000000, 0x022C0019, 0x04000004, 0xCC03FFFF,
	0x04000005, 0x18000000, 0x08000024, 0xBC000003, 0x00000000, 0x50000000, 0x08000013, 0xCC040000,
	0x08000014, 0xBC000004, 0x08000016, 0x88000000, 0x02380032, 0x04000003, 0xBC000003, 0x04000003,
	0x18000000, 0x04000004, 0xCC03FFFF, 0x00000000, 0xBC000004, 0xCC040000, 0x08000004, 0x88000000,
	0x0240004B, 0x04000001, 0xCC03FFFF, 0x04000019, 0x18000000, 0x00000000, 0x08000004, 0x88000000,
	0x02470068, 0x04000008, 0x18000000, 0x00000000, 0x08000009, 0xBC000004, 0x88000000, 0x0255007D,
	0x04000009, 0x18000000, 0x08000024, 0xBC000003, 0x00000000, 0xC4000007, 0x50000000, 0xB12C0028,
	0xAC000004, 0x08000014, 0xBC000004, 0x08000016, 0x88000000, 0x025E0092, 0x04000003, 0xBC000003,
	0x04000003, 0x18000000, 0x00000000, 0xBC000004, 0x08000004, 0x88000000, 0x026400AC, 0x0400001B,
	0x18000000, 0x00000000, 0x08000004, 0x88000000, 0x026B00C9, 0x04000008, 0x18000000, 0x00000000,
	0x08000009, 0xBC000004, 0x88000000, 0x027500DE, 0x04000009, 0x18000000, 0x08000024, 0xBC000003,
	0x00000000, 0x08000014, 0xBC000004, 0x08000016, 0x88000000, 0x027E00F3, 0x04000003, 0xBC000003,
	0x04000003, 0x18000000, 0x00000000, 0xBC000004, 0x08000004, 0x88000000, 0x0285010C, 0x0400001B,
	0x18000000, 0x00000000, 0xB1280008, 0x08000004, 0x88000000, 0x028D0125, 0x04000008, 0x18000000,
	0x00000000, 0xB1280010, 0x08000009, 0xBC000004, 0x88000000, 0x029B013E, 0x0800000B, 0x54000001,
	0x04000009, 0x18000000, 0x08000024, 0xBC000003, 0x00000000, 0xB128001C, 0x50000000, 0x08000014,
	0xBC000004, 0x08000016, 0x88000000, 0x02A60157, 0x54000002, 0x04000003, 0xBC000003, 0x04000003,
	0x18000000, 0x00000000, 0xBC000004, 0xB128000A, 0x08000004, 0x88000000, 0x02B50170, 0x0400001B,
	0x18000000, 0x00000000, 0xBC000003, 0x08000008, 0x54000001, 0x00000000, 0xBC000003, 0x08000008,
	0x54000001, 0x00000000, 0xC4000007, 0xBC000004, 0x88000000, 0x038A018D, 0x04000010, 0x18000000,
	0x90000000, 0x02C602B2, 0x98007C00, 0x00000000, 0x007800C8, 0x00C800C8, 0x80000003, 0x98002800,
	0x00000000, 0x007800C8, 0x00C800C8, 0x04000004, 0x84000000, 0x90000000, 0x02CF02BA, 0x9BF88800,
	0x00000000, 0x00000000, 0x00000000, 0x440001B7, 0xAC000004, 0x74000003, 0x90000000, 0x02D102BA,
	0x90000000, 0x02E802BA, 0x9BF88400, 0x00000000, 0x00000000, 0x00000000, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0xBC000003, 0x00000000, 0xBC000003, 0x440001B6, 0xAC000004,
	0x8000000C, 0x9800A000, 0x00000082, 0x000000C8, 0x010400C8, 0x0400000A, 0x84000000, 0x90000000,
	0x02F202DD, 0x480001C0, 0xAC000002, 0xBC000003, 0x98016800, 0x00000082, 0x000000F0, 0x00F000F0,
	0x0400000A, 0x90000000, 0x030302E9, 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000,
	0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000,
	0x00000000, 0xBC000003, 0x30000000, 0x032302F3, 0xBC000003, 0x98002C00, 0x00000000, 0xFF880000,
	0x003C0000, 0x08000006, 0x0C03C030, 0x01360000, 0x00000000, 0x5A464003, 0x00200000, 0x38000013,
	0x04000001, 0x18000000, 0x00000000, 0x00000034, 0x00000010, 0x0000002D, 0x00000046, 0x00000000,
	0x0000005A, 0x00000000, 0xFFFFFFFF, 0x00000008, 0x00000169, 0x00000064, 0x00000000, 0x00000000,
	0x00000000, 0xBC000003, 0x30000000, 0x035E0313, 0xA0800002, 0xA0500002, 0xAC000004, 0x380000D4,
	0x98F07C00, 0x00000000, 0x00000000, 0x00000000, 0x08000003, 0x74000002, 0x0C03C140, 0x012C0000,
	0x00000000, 0x5A450003, 0x01400500, 0x80000008, 0x98F0A400, 0x00000000, 0x00000000, 0x00000000,
	0x04000003, 0x84000000, 0x18000000, 0x5C000001, 0x50000000, 0xAC000000, 0x38000012, 0x98F07C00,
	0x00000000, 0x00000000, 0x00000000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000, 0x9BF88400,
	0x00000000, 0x00000000, 0x00000000, 0x08000016, 0x74000001, 0x00000000, 0x00000034, 0x00000010,
	0x0000002D, 0x00000046, 0x00000000, 0x0000005A, 0x00000000, 0xFFFFFFFF, 0x00000008, 0x00000169,
	0x00000064, 0x00000000, 0x00000000, 0x00000000, 0xBC000003, 0x30000000, 0x0393034E, 0xA0800002,
	0xA0500002, 0xAC000004, 0x380000D4, 0x98F07C00, 0x00000000, 0x00000000, 0x00000000, 0x08000003,
	0x74000002, 0x0C03C140, 0x012C0000, 0x00000000, 0x5A450003, 0x01400500, 0x80000008, 0x98F0A400,
	0x00000000, 0x00000000, 0x00000000, 0x04000003, 0x84000000, 0x18000000, 0x5C000002, 0x50000000,
	0xAC000000, 0x38000012, 0x98F07C00, 0x00000000, 0x00000000, 0x00000000, 0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000, 0x9BF88400, 0x00000000, 0x00000000, 0x00000000, 0x08000016, 0x74000001,
	0x00000000, 0x88000000, 0x038D01AB, 0x00000000, 0x88000000, 0x039001B1, 0x00000000, 0x88000000,
	0x039501B3, 0x00000000, 0x88000000, 0x03980077, 0x88000000, 0x039A01BC, 0x00000000, 0x88000000,
	0x052F0077, 0x88000000, 0xFFFF01C3, 0x00000000, 0xBC000003, 0xAC000003, 0x440001B0, 0x04000014,
	0xC4000006, 0x0800003C, 0x58000001, 0x00000000, 0xBC000001, 0x08000002, 0x0C014050, 0x00A00000,
	0x00000000, 0x5A432003, 0x00000400, 0x0C812050, 0x00A00000, 0x00000000, 0x5A432003, 0x00000400,
	0x4C000027, 0x04000002, 0x18000000, 0x0800000A, 0x58000001, 0x00000000, 0xBC000001, 0x08000003,
	0x0C020050, 0x00B40010, 0x00000000, 0x11832003, 0x00200400, 0x0C81E050, 0x00B40000, 0x00000000,
	0x11832003, 0x00200400, 0x4C000027, 0x04000003, 0x18000000, 0x08000008, 0x58000001, 0x00000000,
	0x08000006, 0x440001B1, 0x0C034080, 0x00960000, 0x00000000, 0x5A464003, 0x00220500, 0x0C838080,
	0x01180000, 0x00000000, 0x5A464003, 0x00220500, 0x4C000026, 0x04000002, 0x20020000, 0x20820000,
	0x24005A00, 0x24808C00, 0x04000004, 0x18000000, 0x00000000, 0xBC000004, 0x50000000, 0x08000007,
	0x0C000190, 0x01180000, 0x008C0078, 0x5A464003, 0x01400800, 0x98004C00, 0x00000000, 0x00000000,
	0x00000000, 0x4C000025, 0x04000004, 0x0C000130, 0x00FA0000, 0x008C0078, 0x5A464003, 0x01400500,
	0x0400000E, 0x18000000, 0x00000000, 0x08000007, 0x0C032170, 0x00B40014, 0x00000000, 0x5A464003,
	0x00220500, 0x0C834170, 0x00E60050, 0x00000000, 0x5A464003, 0x00220500, 0x4C000026, 0x04000005,
	0x18000000, 0x00000000, 0x08000007, 0x0C032150, 0x00B40014, 0x00000000, 0x5A464003, 0x00220500,
	0x0C834150, 0x00E60050, 0x00000000, 0x5A464003, 0x00220500, 0x4C000026, 0x04000005, 0x18000000,
	0x00000000, 0x08000007, 0x0C032130, 0x00B40014, 0x00000000, 0x5A464003, 0x00220500, 0x0C834130,
	0x00E60050, 0x00000000, 0x5A464003, 0x00220500, 0x4C000026, 0x04000005, 0x18000000, 0x00000000,
	0x08000005, 0x70600003, 0x0C014110, 0x01720000, 0x00000000, 0x18028003, 0x00202300, 0x0C820110,
	0x01720000, 0x00000000, 0x18028003, 0x00202300, 0x4C000026, 0x0400000F, 0x18000000, 0xBC000003,
	0x6C000001, 0x00000000, 0x08000004, 0x0C026070, 0x00A00014, 0x00000000, 0x5A414003, 0x00220100,
	0x0C828070, 0x00C8008C, 0x00000000, 0x5A414003, 0x00220100, 0x4C000027, 0xBC000004, 0x04000005,
	0x18000000, 0x04000002, 0x58000001, 0xBC000003, 0x00000000, 0x00000002, 0x00000000, 0x00000000,
	0x43160000, 0x00000000, 0x43960000, 0x43960000, 0x43960000, 0x000003E8, 0xBC000003, 0x08000002,
	0xA0880000, 0xC0000000, 0x0800000A, 0x98887C00, 0x00780000, 0x00000000, 0x00000000, 0x50000000,
	0x08000010, 0x58000001, 0x08000012, 0x4C000025, 0x0C022290, 0x00C80000, 0x01180000, 0x5A443003,
	0x004E2300, 0x0C822290, 0x00B40000, 0x003C0000, 0x5A443003, 0x004E2300, 0x04000004, 0x18000000,
	0x58000000, 0x00000000, 0xBC000003, 0x50000000, 0x08000002, 0xA0F00000, 0xC0000000, 0x08000006,
	0x98F07C00, 0x00000000, 0x00000064, 0x00640064, 0x0800000D, 0x4C0000C5, 0x0C03C270, 0x00C80000,
	0x00000000, 0x1A464003, 0x00420000, 0x04000005, 0x0C03C230, 0x00C80000, 0x00000000, 0x16864003,
	0x00420000, 0x04000003, 0x0C03C1D0, 0x00C80000, 0x00000000, 0x5A464003, 0x00420000, 0x04000005,
	0x18000000, 0x38000024, 0x00000000, 0xBC000004, 0x50000000, 0x08000002, 0xA0F00000, 0xC0000000,
	0x0800000D, 0x4C0000C5, 0x98F07C00, 0x00000000, 0x00000064, 0x00640064, 0x0C03C2B0, 0x00C80000,
	0x00000000, 0x5A464003, 0x00420000, 0x04000028, 0x18000000, 0x38000024, 0x00000000, 0x08000005,
	0x58000032, 0x0C0341D0, 0x00F0000A, 0x00000000, 0x5A464003, 0x00420780, 0x0C8281D0, 0x00F0000A,
	0x00000000, 0x5A464003, 0x00420780, 0x0D00A1D0, 0x01040000, 0x00000000, 0x5A464003, 0x00420780,
	0x4C000026, 0x04000008, 0x0C034170, 0x00F0000A, 0x00000000, 0x5A464003, 0x00420000, 0x0C828170,
	0x00F0000A, 0x00000000, 0x5A464003, 0x00420000, 0x0D00A170, 0x01040000, 0x00000000, 0x5A464003,
	0x00420000, 0x0400001E, 0x58000000, 0x18000000, 0x00000000, 0x0800000A, 0x58000001, 0x4C000025,
	0x0C000190, 0x01360000, 0x008C00B4, 0x5A464003, 0x01400800, 0x4C000025, 0x04000004, 0x0C000150,
	0x01180000, 0x008C00B4, 0x5A464003, 0x00200000, 0x0400000D, 0x58000000, 0x18000000, 0x00000000,
	0xBC000004, 0x3800004A, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x04000008, 0xBC000004,
	0x00000000, 0x0800000A, 0x58000001, 0x0C034210, 0x00F0FFE2, 0x002D0000, 0x5A464003, 0x00420500,
	0x0C834210, 0x01220050, 0x001E0000, 0x5A464003, 0x00420500, 0x4C000025, 0x04000004, 0x0C034150,
	0x00DCFFE2, 0x002D0000, 0x5A464003, 0x00220000, 0x0C834150, 0x010E0050, 0x001E0000, 0x5A464003,
	0x00220000, 0x04000006, 0x58000000, 0x18000000, 0x00000000, 0xBC000003, 0x3800004A, 0x98003400,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x08000008, 0x70600003, 0x0C018230, 0x017C0000,
	0x00640000, 0x15478003, 0x00400500, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x4C000025,
	0x04000004, 0x6C000001, 0x04000005, 0x18000000, 0x00000000, 0x08000004, 0x0C0001F0, 0x01400000,
	0xFFE2001E, 0xE9878003, 0x00400500, 0x4C000025, 0x04000004, 0x0C0001F0, 0x012C0000, 0xFFE2001E,
	0xE9878003, 0x00400000, 0x0400000D, 0x18000000, 0x00000000, 0x3800004A, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x08000014, 0x380000D4, 0x00000000, 0x90000000, 0x054A052B,
	0x38000019, 0x98008400, 0x00000000, 0x00000000, 0x00000000, 0x98007400, 0x000000B4, 0x00000000,
	0x00000000, 0xB1080000, 0xA0600001, 0xC400000A, 0x5C000001, 0x04000024, 0xA4000000, 0xC4028007,
	0x80000004, 0x98001C00, 0x00000064, 0x000000C8, 0x00C800C8, 0x04000004, 0x84000000, 0x00000000,
	0x00000000, 0x90000000, 0x05AB0548, 0xBC000003, 0xA0800002, 0xA0500002, 0xAC000004, 0x380000D4,
	0x440001BB, 0x9800A400, 0x00000096, 0x00000000, 0x00000000, 0x08000014, 0x98007C00, 0x00000096,
	0x00820000, 0x00000000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000, 0x54000001, 0xC4000006,
	0x08000028, 0xAC000000, 0x00000000, 0xA0800002, 0xA0500002, 0xAC000004, 0x380000D4, 0x440001BB,
	0x9800A400, 0x00000096, 0x00000000, 0x00000000, 0x08000014, 0x98007C00, 0x00000078, 0x00820000,
	0x00000000, 0x98004000, 0x00000000, 0xFF6A0000, 0x00000000, 0x54000001, 0xC4000006, 0x08000028,
	0xAC000000, 0x00000000, 0xBC000003, 0xA0800002, 0xA0500002, 0xAC000004, 0x440001BE, 0x9800A400,
	0x00000096, 0x00000000, 0x00000000, 0x08000014, 0x3C0000D3, 0x98007C00, 0x00000096, 0x00820000,
	0x00000000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000, 0x00000000, 0xC4000007, 0xBC000003,
	0xA0800002, 0xA0500002, 0xAC000002, 0xB1000000, 0x00000000, 0xBC000003, 0x00000000, 0xC400000A,
	0x74000002, 0x0C000472, 0x01900000, 0x00640000, 0x5A464003, 0x00481900, 0xAC000004, 0xB1040000,
	0x440001B7, 0x380000AE, 0x3800025C, 0x98004400, 0x0000005A, 0x00000000, 0x00000000, 0x08000012,
	0x74000001, 0x00000000, 0x90000000, 0x05AD057A, 0x90000000, 0x05AF058E, 0x90000000, 0x05B10595,
	0x90000000, 0x05E10597, 0x00000000, 0x00000001, 0x00000000, 0x43960000, 0x43430000, 0x00000000,
	0x43C80000, 0x43C80000, 0x43C80000, 0x00000000, 0xC4000009, 0xBC000003, 0x98011C00, 0x00000078,
	0x00000000, 0x00000000, 0x3C0000D6, 0x00000000, 0xBC000003, 0xAC000002, 0xB0F80000, 0x00000000,
	0xC400000A, 0xBC000003, 0x380000D2, 0x38000267, 0xB0FC0000, 0x98004C00, 0x00000000, 0xFF880000,
	0x00000000, 0x98406C00, 0x00000000, 0x00000000, 0x00000000, 0x8000000E, 0x98012800, 0x00000000,
	0x000000C8, 0x00C800C8, 0x04000001, 0x84000000, 0x58000001, 0x00000000, 0xBC000003, 0x00000000,
	0x90000000, 0x05E305BC, 0x90000000, 0x05E505C4, 0x90000000, 0x05E705C8, 0x90000000, 0xFFFF05DE,
};

#else  /* REGION_US */

#include <ft/ftdef.h>
#include <ft/fttypes.h>

extern u32 dNessMainMotion_0x0128[];

u32 dNessMainMotion_0x0000[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandWait(4),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandWait(3),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandWait(1),
	ftMotionCommandReturn(),
};

u32 dNessMainMotion_0x0024[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dNessMainMotion_0x0000),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dNessMainMotion_0x0024),
	ftMotionPlayFGM(124),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x007C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(111),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(111),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dNessMainMotion_0x007C),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x00D0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x00E0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0114[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandGoto(dNessMainMotion_0x0128),
};

u32 dNessMainMotion_0x0128[] = {
	ftMotionPlayFGM(100),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x015C[] = {
	ftMotionPlayFGM(222),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 41, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0180[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x019C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01B8[] = {
	ftMotionPlayVoice(452),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01C0[] = {
	ftMotionPlayFGM(636),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01C8[] = {
	ftMotionPlayFGM(636),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01DC[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandReturn(),
};

u32 dNessMainMotion_0x01E4[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01DC),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x01F0[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01DC),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0204[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0220[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x022C[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0238[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0278[] = {
	ftMotionCommandGoto(dNessMainMotion_0x0238),
};

u32 dNessMainMotion_0x0280[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dNessMainMotion_0x02A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x02B8[] = {
	ftMotionCommandGoto(dNessMainMotion_0x02A0),
};

u32 dNessMainMotion_0x02C0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dNessMainMotion_0x0280),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x02D0[] = {
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandGoto(dNessMainMotion_0x02C0),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 6, 0, 0, 200, 0, 100, 0, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0358[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandMakeAttackColl(0, 0, 26, 6, 0, 0, 180, 70, -50, 60, 361, 100, 90, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x03BC[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(443),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x03E8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionPlayVoice(443),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0418[] = {
	ftMotionCommandGoto(dNessMainMotion_0x03E8),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x045C[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, -100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0494[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04A4[] = {
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04D0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04E0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04E8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x04F8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(443),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 28, 6, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0564[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x056C[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayVoice(443),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 5, 6, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 28, 6, 0, 0, 280, 80, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x05D8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x05E0[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0604[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x060C[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(15),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0630[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0648[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0654[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0670[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x068C[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_0x0670),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06B4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06D0[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x06F0[] = {
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dNessMainMotion_0x06D0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x071C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x073C[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0758[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_0x073C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0780[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x079C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x07BC[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dNessMainMotion_0x079C),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x07E8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0808[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0814[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_0x0808),
};

u32 dNessMainMotion_0x0820[] = {
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x082C[] = {
	ftMotionCommandSetFlag3(9),
	ftMotionCommandGoto(dNessMainMotion_0x0820),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0860[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0894[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x08D0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(25),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x08F8[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0910[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0934[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x096C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0988[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09A0[] = {
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09C4[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x09EC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A08[] = {
	ftMotionCommandSetColAnim(75, 8),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A24[] = {
	ftMotionCommandSetColAnim(75, 16),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(11),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A54[] = {
	ftMotionCommandSetColAnim(75, 28),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandSetFlag0(2),
	ftMotionCommandWait(3),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0A88[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 10),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(27),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AA8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AB8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0AC8[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dNessMainMotion_0x0AC8),
};

u32 dNessMainMotion_0x0AE8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(449),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandGoto(dNessMainMotion_0x0AE8),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0B6C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0B74[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(448),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandLoopBegin(12),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dNessMainMotion_0x0B74),
};

u32 dNessMainMotion_0x0BA4[] = {
	ftMotionPlayInterruptableVoice(458),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dNessMainMotion_0x0BA4),
};

FTThrowHitDesc dNessMainMotion_0x0BCC[] = {
	{ -1, 8, 361, 100, 0, 0, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dNessMainMotion_0x0C04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0BCC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dNessMainMotion_0x0C4C[] = {
	{ 52, 16, 45, 70, 0, 90, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dNessMainMotion_0x0C84[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0C4C),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(222),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, 41, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dNessMainMotion_0x0D38[] = {
	{ 52, 16, 45, 70, 0, 90, 0 },
	{ -1, 8, 361, 100, 0, 0, 0 },
};

u32 dNessMainMotion_0x0D70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetThrow((u32)dNessMainMotion_0x0D38),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(222),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 30, 10, 0, 0, 300, 0, 0, 0, 361, 80, 0, 3, 1, 2, 0, 10),
	ftMotionCommandLoopBegin(8),
	ftMotionCommandEffect(30, 41, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(3),
	ftMotionCommandLoopEnd(),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetTexturePartID(0),
	ftMotionPlayFGM(18),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E24[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E30[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E3C[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E48[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01DC),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E5C[] = {
	ftMotionCommandSubroutine(dNessMainMotion_0x01DC),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E70[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(3),
	ftMotionPlayVoice(442),
	ftMotionCommandWait(20),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0E90[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 10, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 9, 2, 1, 0, 160, 0, 0, 0, 361, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0ED8[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 16, 2, 1, 0, 180, 16, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandMakeAttackColl(1, 0, 15, 2, 1, 0, 180, 0, 0, 0, 70, 50, 0, 3, 0, 0, 0, 8),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0F20[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionPlayVoice(443),
	ftMotionCommandMakeAttackColl(0, 0, 26, 4, 0, 0, 150, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 28, 4, 0, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(2),
	ftMotionCommandSetAttackCollDamage(0, 4),
	ftMotionCommandSetAttackCollDamage(1, 4),
	ftMotionCommandSetAttackCollSize(0, 180),
	ftMotionCommandSetAttackCollSize(1, 280),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0F74[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 280, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 16),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 9, 1, 0, 250, 0, 140, 120, 361, 100, 0, 3, 1, 2, 0, 10),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x0FCC[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 11, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 11, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1008[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 10, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1044[] = {
	ftMotionCommandWaitAsync(7),
	ftMotionCommandMakeAttackColl(0, 0, 25, 9, 1, 0, 180, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 9, 1, 0, 230, 80, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1080[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 10, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
	ftMotionCommandMakeAttackColl(1, 0, 16, 7, 1, 0, 370, 0, 0, 0, 100, 40, 0, 3, 0, 1, 0, 80),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(15),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x10C8[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 19, 3, 1, 0, 160, 20, 0, 0, 361, 20, 0, 3, 0, 1, 1, 2),
	ftMotionCommandMakeAttackColl(1, 0, 20, 3, 1, 0, 200, 140, 0, 0, 361, 20, 0, 3, 0, 1, 1, 2),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1114[] = {
	0x00000002,
};

u32 dNessMainMotion_0x1118[] = {
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x111C[] = {
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1120[] = {
	ftMotionCommandStopLoopSFX(51773440),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1128[] = {
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(60162048),
	0x000003E8,
};

u32 dNessMainMotion_0x1138[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(17, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandMakeAttackColl(0, 0, 17, 18, 1, 0, 200, 0, 280, 0, 361, 65, 0, 3, 0, 2, 7, 70),
	ftMotionCommandMakeAttackColl(1, 0, 17, 18, 1, 0, 180, 0, 60, 0, 361, 65, 0, 3, 0, 2, 7, 70),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x11A8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandPlayFGMStoreInfo(207),
	ftMotionCommandMakeAttackColl(0, 0, 30, 17, 1, 0, 200, 0, 0, 0, 110, 100, 0, 3, 0, 2, 1, 20),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 30, 15, 1, 0, 200, 0, 0, 0, 78, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 30, 13, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionPlayFGM(40),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x122C[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetModelPartID(30, 0),
	ftMotionCommandHideItem(0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandPlayFGMStoreInfo(207),
	ftMotionCommandEffect(30, 31, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandMakeAttackColl(0, 0, 30, 19, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(40),
	ftMotionCommandClearAttackCollAll(),
	ftMotionPlayFGM(40),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x127C[] = {
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 26, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandMakeAttackColl(2, 0, 5, 14, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 15),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandMakeAttackColl(0, 0, 26, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 11, 1, 0, 240, 10, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 5, 11, 1, 0, 260, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandWait(30),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1314[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandMakeAttackColl(0, 0, 0, 12, 1, 0, 310, 0, 140, 180, 361, 100, 0, 3, 1, 2, 0, 16),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 10, 1, 0, 280, 0, 140, 180, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1360[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1384[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 26, 16, 1, 0, 240, -30, 45, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 26, 16, 1, 0, 290, 80, 30, 0, 361, 100, 0, 3, 0, 2, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 26, 10, 1, 0, 220, -30, 45, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 26, 10, 1, 0, 270, 80, 30, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x13F4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1410[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandMakeAttackColl(0, 0, 12, 15, 1, 0, 350, 0, 100, 0, 85, 110, 0, 3, 0, 2, 0, 10),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1454[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 320, 0, -30, 30, -90, 120, 0, 3, 0, 2, 0, 10),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 0, 15, 1, 0, 300, 0, -30, 30, -90, 120, 0, 3, 0, 2, 0, 0),
	ftMotionCommandWait(13),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1494[] = {
	ftMotionPlayFGM(78),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x14AC[] = {
	ftMotionCommandWaitAsync(20),
	ftMotionPlayFGM(222),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x14B8[] = {
	ftMotionCommandGoto(dNessMainMotion_0x14AC),
	ftMotionPlayFGM(25),
	ftMotionCommandEffect(0, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(67, 0),
	ftMotionCommandSetModelPartID(12, 1),
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandWait(36),
	ftMotionCommandResetModelPartAll(),
	ftMotionCommandMakeRumble(20, 7),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 7, 0, 0, 100, 0, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1520[] = {
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1524[] = {
	ftMotionCommandGoto(dNessMainMotion_0x1520),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(222),
	ftMotionPlayVoice(453),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x158C[] = {
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayFGM(222),
	ftMotionPlayVoice(453),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandEffect(0, 31, 0, 0, 120, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetTexturePartID(0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x15E8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(4),
	ftMotionPlayVoice(456),
	ftMotionCommandEffect(0, 41, 0, 0, 150, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlayLoopSFXStoreInfo(221),
	ftMotionCommandEffect(0, 31, 0, 0, 150, 130, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1638[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetModelPartID(16, 2),
	ftMotionCommandSetModelPartID(10, 2),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(65, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1654[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x165C[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandMakeAttackColl(0, 0, 0, 30, 1, 2, 300, 0, 100, 0, 361, 84, 0, 3, 0, 2, 4, 40),
	ftMotionCommandSetTexturePartID(4),
	ftMotionCommandSetColAnim(66, 0),
	ftMotionPlayVoice(449),
	ftMotionPlayFGM(184),
	ftMotionPlayFGM(616),
	ftMotionCommandEffect(0, 17, 0, 0, 90, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x16B0[] = {
	ftMotionCommandGoto(dNessMainMotion_0x15E8),
	ftMotionCommandGoto(dNessMainMotion_0x1638),
	ftMotionCommandGoto(dNessMainMotion_0x1654),
	ftMotionCommandGoto(dNessMainMotion_0x165C),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x16D4[] = {
	0x00000001,
};

u32 dNessMainMotion_0x16D8[] = {
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x16DC[] = {
	ftMotionCommandStopLoopSFX(60162048),
	ftMotionCommandStopLoopSFX(54722560),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x16E8[] = {
	ftMotionCommandStopLoopSFX(64421888),
	ftMotionCommandStopLoopSFX(64421888),
	ftMotionCommandStopLoopSFX(64421888),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x16F8[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 71, 0, 0, 120, 0, 0, 0, 0),
	ftMotionCommandPlayLoopSFXStoreInfo(224),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1718[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetTexturePartID(2),
	ftMotionCommandSetColAnim(63, 0),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1728[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(220),
	ftMotionPlayFGM(627),
	ftMotionCommandSetColAnim(64, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -120, 0, 0, 0),
	ftMotionCommandEffect(8, 27, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopBegin(14),
	ftMotionCommandEffect(0, 74, 0, 0, 0, 0, 200, 200, 200),
	ftMotionCommandWait(1),
	ftMotionCommandLoopEnd(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1780[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x1788[] = {
	ftMotionCommandGoto(dNessMainMotion_0x16F8),
	ftMotionCommandGoto(dNessMainMotion_0x1718),
	ftMotionCommandGoto(dNessMainMotion_0x1728),
	ftMotionCommandGoto(dNessMainMotion_0x1780),
	ftMotionCommandEnd(),
};

u32 dNessMainMotion_0x17AC[] = {
	ftMotionCommandEnd(),
};

#endif
