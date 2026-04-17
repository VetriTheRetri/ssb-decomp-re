/* relocData file 199: SYKseg1Validate — kseg1 validator stub.
 *
 * A 64-byte file holding a small MIPS function that the engine loads
 * onto a heap and invokes via lbRelocGetFileData / osWritebackDCache.
 * See scvsbattle.c — `lbRelocGetExternHeapFile` loads the file, then:
 *
 *   func_kseg1 = lbRelocGetFileData(sb32 (*)(void), file, &llSYKseg1ValidateFunc);
 *   ...
 *   osWritebackDCache(func_kseg1, *lbRelocGetFileData(s32*, file, &llSYKseg1ValidateNBytes));
 *
 * `Func` is 12 raw MIPS instructions (48 bytes); `NBytes` is the
 * matching s32 byte count used to flush the icache after relocation.
 */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dSYKseg1Validate[64] = {
	#include <SYKseg1Validate/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* @ 0x0000, 48 bytes — 12 MIPS instructions cast and called as `sb32 (*)(void)` */
u32 dSYKseg1Validate_Func[12] = {
	#include <SYKseg1Validate/Func.data.inc.c>
};

/* @ 0x0030, 4 bytes — byte count of Func, used for icache writeback. */
s32 dSYKseg1Validate_NBytes = 0x30;

/* @ 0x0034, 12 bytes — trailing padding so the file rounds to 64 bytes. */
u32 dSYKseg1Validate_pad[3] = { 0x00000000, 0x00000000, 0x00000000 };

#endif  /* REGION_US */
