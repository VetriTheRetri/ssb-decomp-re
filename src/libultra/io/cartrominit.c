#include <macros.h>
#include <PR/os.h>
#include <PR/os_internal.h>
#include <PR/R4300.h>
#include <PR/rcp.h>
#include <piint.h>

OSPiHandle __CartRomHandle ALIGNED(8);

OSPiHandle* osCartRomInit()
{
	u32 value = 0;
	u32 saveMask;
	static int first = 1;
	register u32 stat;
	u32 latency;
	u32 pulse;
	u32 pageSize;
	u32 relDuration;

	__osPiGetAccess();

	if (!first) {
		__osPiRelAccess();
		return &__CartRomHandle;
	}

	first = 0;
	__CartRomHandle.type = DEVICE_TYPE_CART;
	__CartRomHandle.baseAddress = PHYS_TO_K1(PI_DOM1_ADDR2);
	__CartRomHandle.domain = PI_DOMAIN1;
	__CartRomHandle.speed = 0;

	bzero(&__CartRomHandle.transferInfo, sizeof(__OSTranxInfo));

	WAIT_ON_IOBUSY(stat);

	IO_WRITE(PI_BSD_DOM1_LAT_REG, 0xFF);
	IO_WRITE(PI_BSD_DOM1_PGS_REG, 0);
	IO_WRITE(PI_BSD_DOM1_RLS_REG, 3);
	IO_WRITE(PI_BSD_DOM1_PWD_REG, 0xFF);

	value = IO_READ(__CartRomHandle.baseAddress);

	__CartRomHandle.latency = (value >> 0) & 0xFF;
	__CartRomHandle.pulse = (value >> 8) & 0xFF;
	__CartRomHandle.pageSize = (value >> 0x10) & 0xF;
	__CartRomHandle.relDuration = (value >> 0x14) & 0xF;

	IO_WRITE(PI_BSD_DOM1_LAT_REG, __CartRomHandle.latency);
	IO_WRITE(PI_BSD_DOM1_PGS_REG, __CartRomHandle.pageSize);
	IO_WRITE(PI_BSD_DOM1_RLS_REG, __CartRomHandle.relDuration);
	IO_WRITE(PI_BSD_DOM1_PWD_REG, __CartRomHandle.pulse);

	__osCurrentHandle[__CartRomHandle.domain]->type = (u8) __CartRomHandle.type;
	__osCurrentHandle[__CartRomHandle.domain]->latency = (u8) __CartRomHandle.latency;
	__osCurrentHandle[__CartRomHandle.domain]->pageSize = (u8) __CartRomHandle.pageSize;
	__osCurrentHandle[__CartRomHandle.domain]->relDuration = (u8) __CartRomHandle.relDuration;
	__osCurrentHandle[__CartRomHandle.domain]->pulse = (u8) __CartRomHandle.pulse;

	saveMask = __osDisableInt();
	__CartRomHandle.next = __osPiTable;
	__osPiTable = &__CartRomHandle;
	__osRestoreInt(saveMask);
	__osPiRelAccess();

	return &__CartRomHandle;
}