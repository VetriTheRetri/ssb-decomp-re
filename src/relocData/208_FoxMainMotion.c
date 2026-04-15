/* ftMotionCommand script data for relocData file 208 (FoxMainMotion) */
/* File size: 6816 bytes (0x1AA0) */

#include "relocdata_types.h"

#if defined(REGION_JP)

/* JP binary has a different layout; fold it in as a chain-encoded
 * raw u32 blob. The companion .jp.reloc is empty so fixRelocChain
 * leaves the pre-baked JP chain bytes alone. */
u32 dFoxMainMotion[] = {
	0xBC000003, 0x00000000, 0x38000072, 0x80000002, 0x98002C00, 0x00000000, 0xFF880000, 0x003C0000,
	0x04000006, 0x84000000, 0x00000000, 0x08000002, 0x38000067, 0x98002C00, 0x00000000, 0x003C0000,
	0x00000000, 0x0400000A, 0x38000067, 0x98002C00, 0x00000000, 0x003C0000, 0x00000000, 0x94000000,
	0x90000000, 0x005C000B, 0x3800007C, 0x98002C00, 0x00000000, 0x003C0000, 0x00000000, 0x00000000,
	0x08000006, 0x58000001, 0x00000000, 0x98004000, 0x00000000, 0x00780000, 0x00000000, 0x08000008,
	0x58000001, 0x5C000001, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x74000003,
	0x08000002, 0x74000001, 0x00000000, 0x3800005C, 0x98003400, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x38000051, 0x44000161, 0x80000002, 0x98002C00, 0x00000000, 0x00000064, 0x00640064,
	0x04000006, 0x84000000, 0x00000000, 0x38000046, 0x98002C00, 0x00000000, 0xFFC40000, 0x00000000,
	0x00000000, 0x38000046, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x44000167,
	0x00000000, 0x3800026C, 0x00000000, 0x3800026C, 0x74000003, 0x08000002, 0x74000001, 0x00000000,
	0xAC000001, 0xAC100001, 0x8C000000, 0x88000000, 0x005F0058, 0x00000000, 0x88000000, 0x00870058,
	0x34000000, 0x021A01D6, 0x00000000, 0x38000046, 0x98003400, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0xBC000003, 0x00000000, 0xBC000003, 0x00000000, 0xBC000003, 0x00000000, 0x08000008,
	0x74000003, 0x00000000, 0x08000018, 0x74000001, 0x00000000, 0xAC000001, 0xAC100001, 0xBC000004,
	0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x9BF88400, 0x00000000, 0x00000000, 0x00000000,
	0x04000002, 0xBC000000, 0x08000018, 0xBC000004, 0x04000001, 0x00000000, 0x90000000, 0x00980075,
	0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x74000003, 0x08000018, 0x74000001, 0x8C000000,
	0xBC000003, 0x74000003, 0x08000012, 0x74000001, 0x04000002, 0x58000001, 0x00000000, 0x90000000,
	0x009B0090, 0x3800000B, 0x88000000, 0x009E0088, 0x00000000, 0x90000000, 0x00A00099, 0x90000000,
	0x00A20099, 0x90000000, 0x01050099, 0x74000003, 0x08000013, 0x98003400, 0x00000000, 0x00000000,
	0x00000000, 0x0C0320D0, 0x00B40078, 0x00000000, 0x5A4640F3, 0x01220000, 0x0C8320D0, 0x00960000,
	0x00000000, 0x5A4640F3, 0x01220000, 0x04000003, 0x18000000, 0x04000003, 0x0C0320D0, 0x00B40078,
	0x00000000, 0x5A4640F3, 0x01220000, 0x0C8320D0, 0x00960000, 0x00000000, 0x5A4640F3, 0x01220000,
	0x74000001, 0x04000003, 0x18000000, 0x00000000, 0x74000003, 0x08000011, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x0C01C0D0, 0x00B40096, 0x00000000, 0x5A4640F3, 0x01220000, 0x0C81C0D0,
	0x00960000, 0x00000000, 0x5A4640F3, 0x01220000, 0x04000003, 0x18000000, 0x04000004, 0x0C0280D0,
	0x00B40096, 0x00000000, 0x5A4640F3, 0x01220000, 0x0C8280D0, 0x00960000, 0x00000000, 0x5A4640F3,
	0x01220000, 0x74000001, 0x04000003, 0x18000000, 0x00000000, 0xC4000009, 0x9800AC00, 0x00000000,
	0x00000000, 0x00000000, 0x44000167, 0x38000011, 0x98007C00, 0x00000000, 0x00000000, 0x00000000,
	0x74000003, 0x08000018, 0x74000001, 0x00000000, 0xC4000007, 0x9800AC00, 0x00000000, 0x00000000,
	0x00000000, 0x44000167, 0x3800000B, 0x98007C00, 0x00000000, 0x00000000, 0x00000000, 0x74000003,
	0x08000014, 0x74000001, 0xC8000007, 0x00000000, 0x90000000, 0x01A200F4, 0x08000004, 0x98004000,
	0x00000000, 0x00000000, 0x00000000, 0x3800000B, 0x44000162, 0x74000003, 0x08000014, 0x74000001,
	0x58000001, 0x00000000, 0x08000004, 0x98003C00, 0x00000000, 0x00000000, 0x00000000, 0x3800000B,
	0x44000162, 0x74000003, 0x08000014, 0x74000001, 0x00000000, 0xAC100001, 0x74000003, 0x38000013,
	0x00000000, 0xAC100001, 0x74000003, 0x0400003C, 0x74000001, 0x00000000, 0x74000003, 0x00000000,
	0x74000003, 0x00000000, 0x74000003, 0x00000000, 0x74000003, 0x00000000, 0x74000003, 0x00000000,
	0x74000003, 0x00000000, 0x74000003, 0x08000024, 0x74000001, 0x00000000, 0x98007C00, 0x00000000,
	0x00000000, 0x00000000, 0x08000001, 0x50000000, 0x0C036080, 0x01180000, 0x00000000, 0x5A464193,
	0x00220000, 0x0C80A080, 0x00960000, 0x00000000, 0x5A464193, 0x00220000, 0x4C000026, 0x98004C00,
	0x0000FFB0, 0xFF4C0000, 0x00000000, 0x04000002, 0x74000001, 0x0400000E, 0x18000000, 0x00000000,
	0x74000003, 0x0800003C, 0x74000001, 0x00000000, 0x98007C00, 0x00000000, 0x00000000, 0x00000000,
	0x08000008, 0x50000000, 0x0C00A080, 0x00960000, 0x00000000, 0x5A464193, 0x00220000, 0x0C836080,
	0x01180000, 0x00000000, 0x5A464193, 0x00220000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000,
	0x4C000026, 0x04000007, 0x18000000, 0x00000000, 0x74000003, 0x00000000, 0x3800000B, 0x98004000,
	0x00640000, 0x00000000, 0x00000000, 0x74000003, 0x04000010, 0x74000001, 0x00000000, 0x74000003,
	0x00000000, 0x3800000B, 0x98004000, 0x00640000, 0x00000000, 0x00000000, 0x74000003, 0x0400000E,
	0x74000001, 0x00000000, 0xBC000003, 0x08000002, 0x38000093, 0x58000001, 0x00000000, 0xBC000003,
	0x08000004, 0x58000001, 0x00000000, 0xBC000003, 0x08000006, 0x54000001, 0x00000000, 0x08000004,
	0x98004C00, 0x00000000, 0x00000000, 0x00000000, 0x38000035, 0x54000001, 0x00000000, 0xBC000003,
	0x08000009, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0xBC000003,
	0x60000006, 0x90000000, 0x01BF0197, 0xBC000003, 0x08000008, 0x98002C00, 0x00000000, 0x00000000,
	0x00000000, 0x54000001, 0x00000000, 0xBC000003, 0x08000004, 0x98002C00, 0x00000000, 0x00000000,
	0x00000000, 0x54000001, 0x00000000, 0xBC000003, 0x08000009, 0x50000000, 0x98004C00, 0x00000000,
	0xFF6A0000, 0x00000000, 0x54000001, 0x00000000, 0xBC000003, 0x60000006, 0x90000000, 0x01DB01B3,
	0xBC000003, 0x08000008, 0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x54000001,
	0x00000000, 0xBC000003, 0x08000004, 0x50000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000,
	0x54000001, 0x00000000, 0x08000006, 0x98002C00, 0x00000000, 0x00000000, 0x00000000, 0x54000001,
	0x00000000, 0x60000004, 0x90000000, 0x01F401D2, 0x08000006, 0x98002C00, 0x00000000, 0x00000000,
	0x00000000, 0x54000001, 0x00000000, 0x08000006, 0x98002C00, 0x00000000, 0x00000000, 0x00000000,
	0x54000001, 0x00000000, 0x08000006, 0x50000000, 0x98004000, 0x00000000, 0x00000000, 0x00000000,
	0x54000001, 0x00000000, 0x60000004, 0x90000000, 0x020C01EA, 0x08000006, 0x50000000, 0x98003400,
	0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0x08000006, 0x50000000, 0x98003400,
	0x00000000, 0x00000000, 0x00000000, 0x54000001, 0x00000000, 0xBC000003, 0x08000014, 0x54000001,
	0x00000000, 0xBC000003, 0x6000000A, 0x90000000, 0x02150205, 0xBC000003, 0x08000014, 0x50000000,
	0x54000001, 0x00000000, 0xBC000003, 0x60000006, 0x90000000, 0x02CC020D, 0xBC000002, 0x08000005,
	0xCC040000, 0x88000000, 0x02260000, 0x04000004, 0x18000000, 0x04000003, 0xCC03FFFF, 0x00000000,
	0xBC000003, 0x08000007, 0xCC040000, 0x08000009, 0xBC000004, 0x88000000, 0x02340019, 0x04000006,
	0x18000000, 0x04000001, 0xCC03FFFF, 0x08000026, 0xBC000003, 0x00000000, 0x50000000, 0x08000014,
	0xCC040000, 0x08000015, 0xBC000004, 0x88000000, 0x02410032, 0x04000005, 0x18000000, 0x04000001,
	0xCC03FFFF, 0x08000038, 0xBC000003, 0x00000000, 0xBC000004, 0x08000002, 0xCC040000, 0x08000004,
	0x88000000, 0x024C004B, 0x04000002, 0xCC03FFFF, 0x0400001C, 0x18000000, 0x08000028, 0xBC000003,
	0x00000000, 0xBC000002, 0x08000005, 0x88000000, 0x02540068, 0x04000004, 0x18000000, 0x00000000,
	0xBC000003, 0x08000009, 0xBC000004, 0x88000000, 0x0260007D, 0x04000006, 0x18000000, 0x08000026,
	0xBC000003, 0x00000000, 0xC4000007, 0x50000000, 0xB12C0028, 0x08000015, 0xBC000004, 0x88000000,
	0x02690092, 0x04000005, 0x18000000, 0x08000038, 0xBC000003, 0x00000000, 0xBC000004, 0x08000004,
	0x88000000, 0x027200AC, 0x0400001E, 0x18000000, 0x08000028, 0xBC000003, 0x00000000, 0xBC000002,
	0x08000005, 0x88000000, 0x027A00C9, 0x04000004, 0x18000000, 0x00000000, 0xBC000003, 0x08000009,
	0xBC000004, 0x88000000, 0x028300DE, 0x04000006, 0x18000000, 0x08000026, 0xBC000003, 0x00000000,
	0x08000015, 0xBC000004, 0x88000000, 0x028C00F3, 0x04000005, 0x18000000, 0x08000038, 0xBC000003,
	0x00000000, 0xBC000004, 0x08000004, 0x88000000, 0x0296010C, 0x0400001E, 0x18000000, 0x08000028,
	0xBC000003, 0x00000000, 0xBC000002, 0xB1280009, 0x08000005, 0x88000000, 0x029F0125, 0x04000004,
	0x18000000, 0x00000000, 0xBC000003, 0x08000009, 0xBC000004, 0xB128000F, 0x88000000, 0x02AD013E,
	0x0800000A, 0x54000001, 0x04000005, 0x18000000, 0x08000026, 0xBC000003, 0x00000000, 0xB1280019,
	0x50000000, 0x08000016, 0x54000002, 0xBC000004, 0x88000000, 0x02B70157, 0x04000004, 0x18000000,
	0x08000038, 0xBC000003, 0x00000000, 0xBC000004, 0xB1280022, 0x08000004, 0x88000000, 0x02C80170,
	0x0400001E, 0x18000000, 0x08000028, 0xBC000003, 0x00000000, 0xBC000003, 0x0800000A, 0x54000001,
	0x00000000, 0xBC000003, 0x0800000A, 0x54000001, 0x00000000, 0xC4000007, 0xBC000004, 0x88000000,
	0x037A018D, 0x04000010, 0x18000000, 0x90000000, 0x02D902C5, 0x98007C00, 0x00000000, 0x007800C8,
	0x00C800C8, 0x80000003, 0x98002800, 0x00000000, 0x007800C8, 0x00C800C8, 0x04000004, 0x84000000,
	0x90000000, 0x02E302CD, 0x4400016D, 0xAC000001, 0xAC100001, 0x9BF88800, 0x00000000, 0x00000000,
	0x00000000, 0x74000003, 0x90000000, 0x02E502CD, 0x90000000, 0x02FD02CD, 0x9BF88800, 0x00000000,
	0x00000000, 0x00000000, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBC000003,
	0x00000000, 0xBC000003, 0x4400016E, 0xAC000001, 0xAC100001, 0x80000009, 0x9800A000, 0x00000082,
	0x000000C8, 0x010400C8, 0x0400000A, 0x84000000, 0x90000000, 0x030702F1, 0x48000169, 0xAC000001,
	0xBC000003, 0x98016800, 0x00000082, 0x000000F0, 0x00F000F0, 0x0400000A, 0x90000000, 0x031702FE,
	0xFFFFFFFF, 0x00000002, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF,
	0x00000002, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x03320308,
	0xBC000003, 0x08000006, 0x0C03C030, 0x01040032, 0x00000000, 0x5A464003, 0x00200000, 0x38000013,
	0x04000001, 0x18000000, 0x00000000, 0x00000034, 0x0000000C, 0x0000002D, 0x0000003C, 0x00000000,
	0x00000050, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000169, 0x00000064, 0x00000000, 0x00000000,
	0x00000000, 0x30000000, 0x03570323, 0x4400016C, 0x08000004, 0x74000002, 0x0800000A, 0x98007C00,
	0x0000017C, 0x01400000, 0x00000000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000, 0x9BF88400,
	0x00000000, 0x00000000, 0x00000000, 0x5C000001, 0x38000012, 0x0800000C, 0x74000001, 0x00000000,
	0x00000034, 0x0000000F, 0x0000002D, 0x0000003C, 0x00000000, 0x00000050, 0x00000000, 0xFFFFFFFF,
	0x00000009, 0x00000169, 0x00000064, 0x00000000, 0x00000000, 0x00000000, 0x30000000, 0x03830348,
	0x4400016C, 0x08000004, 0x74000002, 0x0800000B, 0x0C028140, 0x00E6008C, 0x00000000, 0x5A45A003,
	0x01420500, 0x0C828140, 0x00E60000, 0x00000000, 0x5A45A003, 0x01420500, 0x98007C00, 0x00000140,
	0xFEAC0000, 0x00000000, 0x98004C00, 0x00000000, 0xFF6A0000, 0x00000000, 0x9BF88400, 0x00000000,
	0x00000000, 0x00000000, 0x0800000D, 0x74000001, 0x04000006, 0x5C000002, 0x38000012, 0x18000000,
	0x00000000, 0x88000000, 0x037D01AB, 0x00000000, 0x88000000, 0x038001B1, 0x00000000, 0x88000000,
	0x038501B3, 0x00000000, 0x88000000, 0x03880058, 0x88000000, 0x038A01BC, 0x00000000, 0x88000000,
	0x04090058, 0x88000000, 0xFFFF01C3, 0x00000000, 0xBC000003, 0x0800000A, 0xC4000006, 0x44000163,
	0x0800003C, 0x58000001, 0x00000000, 0xBC000003, 0x08000003, 0x0C010090, 0x00C8008C, 0x00000000,
	0x11864003, 0x00000000, 0x0C810090, 0x00C80000, 0x00000000, 0x11864003, 0x00000000, 0x4C000027,
	0x04000002, 0x18000000, 0x0800000A, 0x58000001, 0x00000000, 0xBC000003, 0x08000004, 0x0C01C090,
	0x00C8008C, 0x00000000, 0x11864003, 0x00000000, 0x0C81C090, 0x00C80000, 0x00000000, 0x11864003,
	0x00000000, 0x4C000027, 0x04000003, 0x18000000, 0x0800000A, 0x58000001, 0x00000000, 0x00000000,
	0x08000002, 0x0C026030, 0x00C80014, 0x00000000, 0x14050003, 0x00220500, 0x0C828030, 0x00C800DC,
	0x00000000, 0x14050003, 0x00220500, 0x4C000027, 0x04000002, 0x18000000, 0x58000001, 0x08000009,
	0x18000000, 0x0C026030, 0x00C80014, 0x00000000, 0x14050003, 0x00220500, 0x0C828030, 0x00C800DC,
	0x00000000, 0x14050003, 0x00220500, 0x4C000027, 0x04000002, 0x18000000, 0x58000001, 0x08000010,
	0x18000000, 0x0C026030, 0x00C80014, 0x00000000, 0x14050003, 0x00220500, 0x0C828030, 0x00C800DC,
	0x00000000, 0x14050003, 0x00220500, 0x4C000027, 0x04000002, 0x18000000, 0x58000001, 0x08000017,
	0x18000000, 0x0C026030, 0x00C80014, 0x00000000, 0x14050003, 0x00220500, 0x0C828030, 0x00C800DC,
	0x00000000, 0x14050003, 0x00220500, 0x4C000027, 0x04000002, 0x18000000, 0x58000001, 0x0800001E,
	0x0C026030, 0x00C80014, 0x00000000, 0x0F050003, 0x00220500, 0x0C828030, 0x00C800DC, 0x00000000,
	0x0F050003, 0x00220500, 0x4C000027, 0x04000002, 0x18000000, 0x58000001, 0x94000000, 0x58000001,
	0x90000000, 0x05EC03B8, 0x00000000, 0x00000000, 0xBC000004, 0x08000004, 0x0C028150, 0x00E6008C,
	0x00000000, 0x5A45A003, 0x01420500, 0x0C828150, 0x00E60000, 0x00000000, 0x5A45A003, 0x01420500,
	0x98004C00, 0x00000000, 0x00000000, 0x00000000, 0x4C000025, 0x04000004, 0x0C0280F0, 0x00E6008C,
	0x00000000, 0x5A45A003, 0x01420500, 0x0C8280F0, 0x00E60000, 0x00000000, 0x5A45A003, 0x01420500,
	0x04000010, 0x18000000, 0xBC000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030170, 0x00C80014,
	0x00000000, 0x5A464003, 0x00220000, 0x0C832170, 0x00C8008C, 0x00000000, 0x5A464003, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030150, 0x00C80014,
	0x00000000, 0x5A464003, 0x00220000, 0x0C832150, 0x00C8008C, 0x00000000, 0x5A464003, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030130, 0x00C80014,
	0x00000000, 0x5A464003, 0x00220000, 0x0C832130, 0x00C8008C, 0x00000000, 0x5A464003, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030110, 0x00C80014,
	0x00000000, 0x5A464003, 0x00220000, 0x0C832110, 0x00C8008C, 0x00000000, 0x5A464003, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030110, 0x00C80014,
	0x00000000, 0x5A46402B, 0x00220000, 0x0C832110, 0x00C8008C, 0x00000000, 0x5A46402B, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000001, 0x08000006, 0x0C030130, 0x00DC0014,
	0x00000000, 0x14096003, 0x00220000, 0x0C832130, 0x015E0050, 0x00000000, 0x14096003, 0x00220000,
	0x4C000026, 0x04000008, 0x18000000, 0x00000000, 0xBC000003, 0x08000004, 0xBC000004, 0x08000006,
	0x0C03A150, 0x00E60000, 0x0000FFC4, 0x1187D003, 0x00200000, 0x0C83A150, 0x00E60000, 0x0000FF38,
	0x1687D003, 0x00200000, 0x4C000026, 0x04000004, 0x18000000, 0x08000010, 0xBC000003, 0x00000000,
	0x08000008, 0xBC000004, 0x0800000C, 0x0C028230, 0x0118003C, 0x00000000, 0x5A478003, 0x00420000,
	0x98A07C00, 0x00780000, 0x00000000, 0x00000000, 0x98004C00, 0x00000000, 0xFF4C0000, 0x00000000,
	0x4C000025, 0x50000000, 0x04000005, 0x0C0281B0, 0x0118003C, 0x00000000, 0x5A478003, 0x00220000,
	0x04000008, 0x18000000, 0x0800001C, 0x98002C00, 0x00000000, 0xFF4C0000, 0x00000000, 0x0800002D,
	0xBC000003, 0x00000000, 0x70600003, 0x08000006, 0x0C032210, 0x00C80000, 0x00000000, 0x1408C003,
	0x00420C80, 0x0C832210, 0x01180046, 0x00000000, 0x1408C003, 0x00420C80, 0x98C87C00, 0x006E0000,
	0x00000000, 0x00000000, 0x98004C00, 0x00000000, 0xFF4C0000, 0x00000000, 0x4C000025, 0x50000000,
	0x04000004, 0x6C000001, 0x0C032110, 0x00C80000, 0x00000000, 0x5A464003, 0x00220500, 0x0C832110,
	0x00E60046, 0x00000000, 0x5A464003, 0x00220500, 0x0400000C, 0x18000000, 0x04000008, 0x98002C00,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBC000003, 0x70C80003, 0x70A00003, 0x70C00003,
	0x70980003, 0x08000004, 0xBC000004, 0x08000006, 0x0C0321D0, 0x0104005A, 0x00000000, 0x11864003,
	0x00420F00, 0x0C8281D0, 0x0104005A, 0x00000000, 0x11864003, 0x00420F00, 0x98C87C00, 0x005A0000,
	0x00000000, 0x00000000, 0x98A07C00, 0x005A0000, 0x00000000, 0x00000000, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x4C000025, 0x50000000, 0x04000001, 0x6C000001, 0x04000004, 0x18000000,
	0x0800001C, 0xBC000003, 0x00000000, 0x08000004, 0x58000032, 0x0C00A1D0, 0x00D20000, 0x00000000,
	0x5A464003, 0x00420000, 0x0C8281D0, 0x00D20046, 0x00000000, 0x5A464003, 0x00420000, 0x0D0321D0,
	0x00B40046, 0x00000000, 0x5A464003, 0x00420000, 0x4C000026, 0x04000004, 0x0C00A130, 0x00D20000,
	0x00000000, 0x5A464003, 0x00220000, 0x0C828130, 0x00D20046, 0x00000000, 0x5A464003, 0x00220000,
	0x0D032130, 0x00B40046, 0x00000000, 0x5A464003, 0x00220000, 0x04000018, 0x58000000, 0x18000000,
	0x00000000, 0x08000006, 0x58000001, 0x0C032190, 0x01360000, 0x00000000, 0x5A464003, 0x00420000,
	0x0C832190, 0x01360078, 0x00000000, 0x5A464003, 0x00420000, 0x4C000025, 0x04000004, 0x0C032110,
	0x01180000, 0x00000000, 0x5A464003, 0x00220000, 0x0C832110, 0x01180078, 0x00000000, 0x5A464003,
	0x00220000, 0x0400000E, 0x58000000, 0x18000000, 0x00000000, 0xBC000004, 0x38000046, 0x98003400,
	0x00000000, 0x00000000, 0x00000000, 0x08000010, 0xBC000004, 0x00000000, 0x08000004, 0x58000001,
	0x0C00A190, 0x00DC0000, 0x00000000, 0x5A464003, 0x00420000, 0x0C832190, 0x012C0078, 0x00000000,
	0x5A464003, 0x00420000, 0x0D028110, 0x00C8003C, 0x00000000, 0x5A464003, 0x00220000, 0x4C000025,
	0x04000004, 0x0C00A110, 0x00C80000, 0x00000000, 0x5A464003, 0x00220000, 0x0C832110, 0x00F00078,
	0x00000000, 0x5A464003, 0x00220000, 0x0D028110, 0x00C8003C, 0x00000000, 0x5A464003, 0x00220000,
	0x04000014, 0x58000000, 0x18000000, 0x00000000, 0xBC000004, 0x38000046, 0x98003400, 0x00000000,
	0x00000000, 0x00000000, 0x08000006, 0xBC000004, 0x00000000, 0x08000006, 0x58000014, 0x0C00A050,
	0x01400000, 0x00000000, 0x16864193, 0x00020000, 0x0C832050, 0x0154006E, 0x00000000, 0x16864193,
	0x00020000, 0x04000006, 0x0C10A1B0, 0x01540000, 0x00000000, 0x16887003, 0x00420000, 0x0C9321B0,
	0x0172006E, 0x00000000, 0x16887003, 0x00420000, 0x4C000025, 0x04000002, 0x58000000, 0x18000000,
	0x00000000, 0x08000004, 0x58000014, 0x0C028050, 0x0136FFD8, 0x002D0000, 0xEE86407B, 0x00200000,
	0x0C828050, 0x0168001E, 0x001E0000, 0xEE86407B, 0x00200000, 0x4C0000B4, 0x04000002, 0x18000000,
	0x04000001, 0x2C000000, 0x2C000001, 0x4C0000B4, 0x04000002, 0x18000000, 0x04000001, 0x2C000000,
	0x2C000001, 0x4C0000B4, 0x04000002, 0x18000000, 0x04000001, 0x2C000000, 0x2C000001, 0x4C0000B4,
	0x04000002, 0x18000000, 0x04000001, 0x2C000000, 0x2C000001, 0x4C0000B4, 0x04000002, 0x18000000,
	0x04000001, 0x2C000000, 0x2C000001, 0x4C0000B4, 0x04000002, 0x18000000, 0x04000001, 0x2C000000,
	0x2C000001, 0x4C0000B4, 0x04000002, 0x18000000, 0x58000000, 0x18000000, 0x00000000, 0xBC000003,
	0x38000046, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0800001E, 0x380000B5,
	0x04000020, 0x5C000001, 0x00000000, 0x90000000, 0x061B05E6, 0xBC000003, 0xC0000000, 0xA0880000,
	0x08000019, 0x54000001, 0xC4000006, 0xB0BC0000, 0x380000AF, 0x98887C00, 0x005A0000, 0x00000000,
	0x00000000, 0x04000004, 0x58000001, 0x98004C00, 0x00000000, 0xFF240000, 0x00000000, 0x00000000,
	0xC0000000, 0xA0880000, 0x0800000F, 0x54000001, 0xB0BC0000, 0x380000AF, 0x98887C00, 0x005A0000,
	0x00000000, 0x00000000, 0x58000001, 0x98004000, 0x00000000, 0xFF2E0000, 0x00000000, 0x00000000,
	0xBC000003, 0x98003400, 0x00000000, 0x00000000, 0x00000000, 0x98007C00, 0x000000B4, 0x00000000,
	0x00000000, 0x00000000, 0x90000000, 0x06260610, 0xC4000007, 0xBC000003, 0x98607C00, 0x0000003C,
	0x00000000, 0x00000000, 0xB0A80024, 0x380000B0, 0x00000000, 0xB8000000, 0x0638061C, 0x80000002,
	0x98005800, 0x00000000, 0x00000000, 0x00000000, 0x0400000B, 0x84000000, 0x74000002, 0x80000002,
	0x98005800, 0x00000000, 0x00000000, 0x00000000, 0x0400000B, 0x84000000, 0x00000000, 0x90000000,
	0x06530625, 0xC4000009, 0x44000160, 0xB0AC0000, 0x0C0181B1, 0x00B40000, 0x00000000, 0x5A432003,
	0x05422080, 0x98008000, 0x00000000, 0x00000000, 0x00000000, 0x98007400, 0x00000000, 0x00000000,
	0x00000000, 0x380000B1, 0x80000002, 0x04000004, 0x98307000, 0x00000000, 0x00000000, 0x00000000,
	0x84000000, 0x94000000, 0x90000000, 0x0665064A, 0x44000160, 0xB0AC0000, 0x0C0181B1, 0x00B40000,
	0x00000000, 0x5A432003, 0x05422080, 0x98008000, 0x00000000, 0x00000000, 0x00000000, 0x98007400,
	0x00000000, 0x00000000, 0x00000000, 0x380000B1, 0x90000000, 0x06A7064A, 0x00000000, 0x00000000,
	0x98005800, 0x00000000, 0x00000000, 0x00000000, 0x98008000, 0x00000000, 0x00000000, 0x00000000,
	0x64000000, 0x08000014, 0x58000001, 0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x42700000,
	0x00000000, 0x43AF0000, 0x43AF0000, 0x43AF0000, 0x00000032, 0xC4000009, 0xBC000003, 0x74000003,
	0x98004C00, 0x00000000, 0xFF4C0000, 0x00000000, 0x98007C00, 0x000000F0, 0x00C80000, 0x00000000,
	0x380000B3, 0x0C0000A2, 0x01680000, 0x00F00000, 0x00064143, 0x00000000, 0x04000002, 0x74000001,
	0x18000000, 0x00000000, 0xBC000003, 0xB0A40000, 0x00000000, 0xC400000A, 0xBC000003, 0x5C000002,
	0x98005800, 0x00000000, 0x00000000, 0x00000000, 0x98406C00, 0x00000000, 0x00000000, 0x00000000,
	0x380000B2, 0x00000000, 0xBC000003, 0x5C000003, 0xB4000000, 0x00000000, 0x90000000, 0x06A9067D,
	0x90000000, 0x06AB0692, 0x90000000, 0x06AD0695, 0x90000000, 0xFFFF06A2, 0x00000000, 0x00000000,
};

#else  /* REGION_US */

#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dFoxMainMotion_0x0000[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0008[] = {
	ftMotionPlayFGM(118),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x002C[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(107),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(10),
	ftMotionPlayFGM(107),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x002C),
	ftMotionPlayFGM(128),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0080[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x008C[] = {
	ftMotionCommandEffect(0, 16, 0, 0, 0, 120, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00BC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00CC[] = {
	ftMotionPlayFGM(96),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x00E4[] = {
	ftMotionPlayFGM(85),
	ftMotionPlayVoice(363),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 100, 100, 100),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x010C[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0124[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x013C[] = {
	ftMotionPlayVoice(369),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0144[] = {
	ftMotionPlayFGM(632),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x014C[] = {
	ftMotionPlayFGM(632),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0160[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x016C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0178[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSetDamageThrown(0x0758), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x018C[] = {
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01A4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01B4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01BC[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01C8[] = {
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x01D4[] = {
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
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

u32 dFoxMainMotion_0x0218[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x01D4),
};

u32 dFoxMainMotion_0x0220[] = {
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandReturn(),
};

u32 dFoxMainMotion_0x0240[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(18),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x025C[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0240),
};

u32 dFoxMainMotion_0x0264[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandSubroutine(dFoxMainMotion_0x0220),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0274[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandGoto(dFoxMainMotion_0x0264),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(19),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandMakeAttackColl(0, 0, 25, 6, 1, 0, 180, 120, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0310[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(17),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(0, 0, 14, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 6, 1, 0, 180, 150, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 6, 1, 0, 150, 0, 0, 0, 361, 100, 60, 3, 1, 1, 1, 0),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0394[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(369),
	ftMotionPlayFGM(17),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(24),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x03D0[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandEffect(0, 43, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayVoice(369),
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandStopRumble(7),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0410[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x03D0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(11),
	ftMotionPlayVoice(364),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0448[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 15, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(11),
	ftMotionPlayVoice(364),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0474[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionPlayFGM(19),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0484[] = {
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0498[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04A8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04B8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04C8[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(36),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x04D8[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(1),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandEffect(0, 19, 0, 0, -80, -180, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(14),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0540[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0550[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandMakeAttackColl(0, 0, 5, 4, 0, 0, 150, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 27, 4, 0, 0, 280, 0, 0, 0, 361, 100, 100, 3, 0, 1, 1, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(7),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B0[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05B8[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(16),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05DC[] = {
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x05E4[] = {
	ftMotionPlayFGM(11),
	ftMotionCommandEffect(0, 16, 0, 100, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandWait(14),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0608[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(157),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x061C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x062C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x063C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(57),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x065C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x067C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x065C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06AC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06CC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x06F0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x06CC),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(8),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0724[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0748[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0764[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x0748),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x078C[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07A8[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 16, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07C8[] = {
	ftMotionCommandSetFlag3(4),
	ftMotionCommandGoto(dFoxMainMotion_0x07A8),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x07F4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0814[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0824[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0814),
};

u32 dFoxMainMotion_0x0834[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0848[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag3(6),
	ftMotionCommandGoto(dFoxMainMotion_0x0834),
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandSubroutine(0x0000), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(3),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0880[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(7),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0064), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08B8[] = {
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x00C8), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x08F0[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(2),
	ftMotionCommandSetAfterImage(1, 0),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x012C), /* extern */
	ftMotionCommandWait(2),
	ftMotionCommandSetAfterImage(0, -1),
	ftMotionCommandWait(28),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0924[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x01A0), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0940[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x01F4), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0968[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandSetColAnim(76, 40),
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0248), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0998[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x02B0), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09BC[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0324), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x09D8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0378), /* extern */
	ftMotionCommandWait(6),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A00[] = {
	ftMotionCommandWaitAsync(21),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x03CC), /* extern */
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A24[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x0430), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A48[] = {
	ftMotionCommandSetSlopeContour(2),
	ftMotionCommandSetColAnim(75, 9),
	ftMotionCommandWaitAsync(5),
	ftMotionCommandSubroutine(0x0494), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 15),
	ftMotionCommandSubroutine(0x04F8), /* extern */
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandWait(5),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(38),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0A9C[] = {
	ftMotionCommandSetColAnim(75, 25),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWaitAsync(22),
	ftMotionCommandSetFlag0(2),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x055C), /* extern */
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(56),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0ACC[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSetColAnim(75, 34),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSubroutine(0x05C0), /* extern */
	ftMotionCommandWait(30),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(40),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0AF4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B04[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0B14[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandSubroutine(0x0634), /* extern */
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B14),
};

u32 dFoxMainMotion_0x0B34[] = {
	ftMotionCommandEffect(0, 31, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandLoopBegin(3),
	ftMotionCommandEffect(0, 10, 0, 0, 0, 120, 200, 200, 200),
	ftMotionCommandWait(4),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionPlayVoice(375),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandGoto(dFoxMainMotion_0x0B34),
	ftMotionCommandEffect(-1, 34, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BBC[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0BC4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayVoice(376),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetTexturePartID(1048577),
	ftMotionCommandLoopBegin(9),
	ftMotionCommandEffect(0, 40, 0, 0, 130, 0, 200, 260, 200),
	ftMotionCommandWait(10),
	ftMotionCommandLoopEnd(),
	ftMotionCommandGoto(dFoxMainMotion_0x0BC4),
};

u32 dFoxMainMotion_0x0BF8[] = {
	ftMotionPlayInterruptableVoice(371),
	ftMotionCommandSetTexturePartID(1),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 90, 0, 0, 130, 0, 240, 240, 240),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dFoxMainMotion_0x0BF8),
};

FTThrowHitDesc dFoxMainMotion_0x0C20[] = {
	{ -1, 2, 361, 100, 0, 0, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0C58[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C20),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 30, 1, 1, 0, 260, 50, 0, 0, 361, 100, 0, 3, 0, 1, 0, 0),
	ftMotionPlayFGM(19),
	ftMotionCommandWait(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dFoxMainMotion_0x0C8C[] = {
	{ 52, 12, 45, 60, 0, 80, 0 },
	{ -1, 2, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0CC4[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0C8C),
	ftMotionPlayVoice(374),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandEffect(0, 31, 0, 0, 380, 320, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag2(1),
	ftMotionPlayFGM(18),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandEnd(),
};

FTThrowHitDesc dFoxMainMotion_0x0D20[] = {
	{ 52, 15, 45, 60, 0, 80, 0 },
	{ -1, 9, 361, 100, 0, 0, 0 },
};

u32 dFoxMainMotion_0x0D58[] = {
	ftMotionCommandSetThrow((u32)dFoxMainMotion_0x0D20),
	ftMotionPlayVoice(374),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetHitStatusAll(2),
	ftMotionCommandWaitAsync(11),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 0, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 0, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 31, 0, 0, 320, -340, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -150, 0, 0, 0),
	ftMotionCommandEffect(-1, 33, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(13),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandWait(6),
	ftMotionCommandSetFlag2(2),
	ftMotionPlayFGM(18),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DE4[] = {
	ftMotionCommandSubroutine(0x06AC), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DF0[] = {
	ftMotionCommandSubroutine(0x06C4), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0DFC[] = {
	ftMotionCommandSubroutine(0x06CC), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E08[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSubroutine(0x06F0), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E1C[] = {
	ftMotionCommandSubroutine(dFoxMainMotion_0x0160),
	ftMotionCommandSubroutine(0x070C), /* extern */
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E30[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionPlayVoice(365),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E4C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(3),
	ftMotionCommandMakeAttackColl(0, 0, 8, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 8, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0E94[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 14, 4, 1, 0, 200, 140, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 14, 4, 1, 0, 200, 0, 0, 0, 70, 100, 0, 3, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(3),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EDC[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x0EE0[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(9),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 0, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(23),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 80, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandMakeAttackColl(0, 0, 19, 1, 1, 0, 200, 20, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 1, 1, 0, 200, 220, 0, 0, 60, 80, 0, 3, 0, 1, 1, 10),
	ftMotionCommandPlayFGMStoreInfo(43),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandPauseScript(),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandGoto(dFoxMainMotion_0x0EE0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x102C[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1030[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 10, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 10, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandEffect(0, 19, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 20, 7, 1, 0, 230, 140, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 20, 7, 1, 0, 230, 0, 0, 0, 361, 90, 0, 3, 1, 2, 1, 10),
	ftMotionCommandWait(16),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetSlopeContour(0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 11, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 11, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x10F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 10, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 10, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1130[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1170[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11B0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 8, 1, 0, 200, 20, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 200, 140, 0, 0, 361, 100, 10, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x11F0[] = {
	ftMotionCommandSetSlopeContour(1),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 24, 9, 1, 0, 220, 20, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 9, 1, 0, 350, 80, 0, 0, 80, 150, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1230[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 29, 12, 1, 0, 230, 0, 0, -60, 70, 125, 0, 3, 0, 1, 0, 25),
	ftMotionCommandMakeAttackColl(1, 0, 29, 12, 1, 0, 230, 0, 0, -200, 90, 125, 0, 3, 0, 1, 0, 25),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1280[] = {
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(12),
	ftMotionCommandMakeAttackColl(0, 0, 20, 17, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 2, 1, 0),
	ftMotionCommandEffect(20, 31, 0, 120, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(5),
	ftMotionCommandMakeAttackColl(0, 0, 20, 13, 1, 0, 280, 60, 0, 0, 361, 120, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(8),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandWaitAsync(45),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1308[] = {
	ftMotionCommandSetHitStatusPartID(12, 3),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 16, 1, 0, 200, 0, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandMakeAttackColl(1, 0, 25, 16, 1, 0, 280, 70, 0, 0, 80, 140, 0, 3, 0, 2, 1, 25),
	ftMotionCommandEffect(25, 31, 0, 110, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(4),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 230, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 10),
	ftMotionCommandWait(12),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(8),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x13B0[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusPartID(25, 3),
	ftMotionCommandSetHitStatusPartID(20, 3),
	ftMotionCommandSetHitStatusPartID(24, 3),
	ftMotionCommandSetHitStatusPartID(19, 3),
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandMakeAttackColl(0, 0, 25, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 260, 90, 0, 0, 25, 80, 0, 3, 0, 2, 1, 35),
	ftMotionCommandEffect(25, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(20, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandPlaySmashVoice(0),
	ftMotionCommandWait(1),
	ftMotionCommandSetHitStatusPartAll(1),
	ftMotionCommandWait(4),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWaitAsync(28),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x144C[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(50),
	ftMotionCommandMakeAttackColl(0, 0, 5, 14, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 14, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 14, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(42),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 9, 1, 0, 210, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 9, 1, 0, 210, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 25, 9, 1, 0, 180, 70, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(24),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x14E4[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 25, 12, 1, 0, 310, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 310, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 25, 8, 1, 0, 280, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 280, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(14),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1554[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(16),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1578[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandMakeAttackColl(0, 0, 5, 12, 1, 0, 220, 0, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 12, 1, 0, 300, 120, 0, 0, 361, 100, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(4),
	ftMotionCommandMakeAttackColl(0, 0, 5, 8, 1, 0, 200, 0, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 8, 1, 0, 240, 120, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandMakeAttackColl(2, 0, 20, 8, 1, 0, 200, 60, 0, 0, 361, 100, 0, 3, 0, 1, 1, 0),
	ftMotionCommandWait(20),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1610[] = {
	ftMotionCommandSetSlopeContour(4),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetSlopeContour(4),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1634[] = {
	ftMotionCommandWaitAsync(6),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 5, 2, 1, 0, 320, 0, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandMakeAttackColl(1, 0, 25, 2, 1, 0, 340, 110, 0, 0, 90, 100, 100, 3, 0, 0, 1, 0),
	ftMotionCommandWait(6),
	ftMotionCommandMakeAttackColl(0, 1, 5, 13, 1, 0, 340, 0, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandMakeAttackColl(1, 1, 25, 13, 1, 0, 370, 110, 0, 0, 90, 135, 0, 3, 0, 2, 1, 0),
	ftMotionCommandPlayFGMStoreInfo(41),
	ftMotionCommandWait(2),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x16A4[] = {
	ftMotionCommandWaitAsync(4),
	ftMotionCommandSetFlag1(20),
	ftMotionCommandMakeAttackColl(0, 0, 20, 2, 1, 0, 310, -40, 45, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandMakeAttackColl(1, 0, 20, 2, 1, 0, 360, 30, 30, 0, -70, 100, 30, 3, 0, 1, 0, 0),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandWait(1),
	ftMotionCommandRefreshAttackCollID(0),
	ftMotionCommandRefreshAttackCollID(1),
	ftMotionCommandPlayFGMStoreInfo(190),
	ftMotionCommandWait(2),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandSetFlag1(0),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x177C[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(74),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1798[] = {
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(191),
	ftMotionCommandWait(32),
	ftMotionCommandSetFlag2(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x17AC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1798),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(25),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandMakeRumble(0, 6),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(185),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandWait(4),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -220, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1800[] = {
	ftMotionCommandHideItem(0),
	ftMotionCommandSetModelPartID(17, 0),
	ftMotionCommandWaitAsync(15),
	ftMotionCommandSetFlag0(1),
	ftMotionCommandSetColAnim(47, 0),
	ftMotionPlayFGM(185),
	ftMotionCommandEffect(17, 31, 0, 90, 0, 0, 0, 0, 0),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEffect(0, 16, 0, 0, 0, -210, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1840[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 180, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1868[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1840),
};

u32 dFoxMainMotion_0x1870[] = {
	ftMotionCommandMakeRumble(0, 7),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandEffect(12, 31, 0, 0, 60, 0, 0, 0, 0),
	ftMotionCommandSetColAnim(42, 36),
	ftMotionPlayFGM(186),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1894[] = {
	ftMotionCommandSetParallelScript(dFoxMainMotion_0x1870),
	ftMotionCommandLoopBegin(4),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandWait(11),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x18BC[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x1894),
	ftMotionCommandMakeRumble(0, 9),
	ftMotionPlayVoice(362),
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(187),
};

u32 dFoxMainMotion_0x1908[] = {
	ftMotionCommandLoopBegin(2),
	ftMotionCommandWait(4),
	ftMotionCommandEffect(6, 28, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandLoopEnd(),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	ftMotionPlayVoice(362),
	ftMotionCommandSetColAnim(43, 0),
	ftMotionCommandMakeAttackColl(0, 0, 12, 16, 1, 1, 180, 0, 0, 0, 80, 60, 0, 3, 5, 2, 1, 60),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 29, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(187),
	ftMotionCommandGoto(dFoxMainMotion_0x1908),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x197C[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1980[] = {
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(0, 32, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandSetAirJumpAdd(0),
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSetFlag1(1),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19B0[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19B4[] = {
	0x00000004,
};

u32 dFoxMainMotion_0x19B8[] = {
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19BC[] = {
	ftMotionCommandStopLoopSFX(40894464),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x19C4[] = {
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	ftMotionCommandStopLoopSFX(61800448),
	0x00000032,
};

u32 dFoxMainMotion_0x19D4[] = {
	ftMotionCommandMakeRumble(0, 9),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetHitStatusAll(3),
	ftMotionCommandEffect(0, 19, 0, 0, 0, -180, 0, 0, 0),
	ftMotionCommandEffect(0, 31, 0, 0, 240, 200, 0, 0, 0),
	ftMotionPlayFGM(189),
	ftMotionCommandMakeAttackColl(0, 0, 0, 5, 0, 2, 360, 0, 240, 0, 0, 100, 80, 3, 0, 0, 0, 0),
	ftMotionCommandWait(2),
	ftMotionCommandSetHitStatusAll(1),
	ftMotionCommandClearAttackCollAll(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A28[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetColAnim(41, 0),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A34[] = {
	ftMotionCommandMakeRumble(0, 10),
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(2),
	ftMotionCommandEffect(0, 22, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEffect(8, 27, 0, 0, 0, 0, 0, 0, 0),
	ftMotionPlayFGM(188),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A68[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionCommandSetFlag2(3),
	ftMotionCommandResetColAnim(),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A78[] = {
	ftMotionCommandGoto(dFoxMainMotion_0x19D4),
	ftMotionCommandGoto(dFoxMainMotion_0x1A28),
	ftMotionCommandGoto(dFoxMainMotion_0x1A34),
	ftMotionCommandGoto(dFoxMainMotion_0x1A68),
	ftMotionCommandEnd(),
};

u32 dFoxMainMotion_0x1A9C[] = {
	ftMotionCommandEnd(),
};

#endif
