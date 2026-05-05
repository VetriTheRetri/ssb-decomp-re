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

sb32 dSYKseg1Validate_Func(void) {
    return (*(s32* )0xA0000200 == 0xAC290000) ? TRUE : FALSE;
}

/* @ 0x0030, 4 bytes — byte count of Func, used for icache writeback. */
s32 dSYKseg1Validate_NBytes = 0x30;
