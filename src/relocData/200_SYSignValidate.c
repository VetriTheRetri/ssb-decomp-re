/* relocData file 200: SYSignValidate — sign-bit validator stub.
 *
 * Same shape as SYKseg1Validate (199): a small MIPS function plus its
 * byte count, loaded onto a heap and invoked via osWritebackDCache +
 * lbRelocGetFileData. Used by `sc1pgame.c`:
 *
 *   func_sign = lbRelocGetFileData(sb32 (*)(void*), file, &llSYSignValidateFunc);
 *   ...
 *   osWritebackDCache(func_sign, *lbRelocGetFileData(s32*, file, &llSYSignValidateNBytes));
 *
 * `Func` is 16 raw MIPS instructions (64 bytes); `NBytes` is the
 * matching s32 byte count used to flush the icache after relocation.
 */

#include "relocdata_types.h"
#if defined(REGION_JP)

u8 dSYSignValidate[80] = {
	#include <SYSignValidate/jp_raw.data.inc.c>
};

#else  /* REGION_US */

/* @ 0x0000, 64 bytes — 16 MIPS instructions cast and called as `sb32 (*)(void*)` */
u32 dSYSignValidate_Func[16] = {
	#include <SYSignValidate/Func.data.inc.c>
};

/* @ 0x0040, 4 bytes — byte count of Func, used for icache writeback. */
s32 dSYSignValidate_NBytes = 0x40;

/* @ 0x0044, 12 bytes — trailing padding so the file rounds to 80 bytes. */
u32 dSYSignValidate_pad[3] = { 0x00000000, 0x00000000, 0x00000000 };

#endif  /* REGION_US */
