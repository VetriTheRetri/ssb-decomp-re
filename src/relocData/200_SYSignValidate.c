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

sb32 dSYSignValidate_Func(u32* arg0) {
    if (arg0[0] != 0x04080040) return FALSE;
    
    if (arg0[1] != 0x02081040) return FALSE;

    return TRUE;
}

/* @ 0x0040, 4 bytes — byte count of Func, used for icache writeback. */
s32 dSYSignValidate_NBytes = 0x40;
