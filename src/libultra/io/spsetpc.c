#include <PR/rcp.h>

// TODO: this comes from a header
#ident "$Revision: 1.17 $"

s32 __osSpSetPc(u32 pc) {
	register u32 status = IO_READ(SP_STATUS_REG);

	if (!(status & SP_STATUS_HALT)) {
		return -1;
	}
	IO_WRITE(SP_PC_REG, pc);

	return 0;
}
