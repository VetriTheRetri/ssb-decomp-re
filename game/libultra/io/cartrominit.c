#include <os_internal.h>
#include <R4300.h>
#include <rcp.h>
#include "piint.h"

static OSPiHandle sCartHandle;

OSPiHandle *osCartRomInit(void)
{
	static u32 handleUninit = TRUE;

	u32 stat;
	u32 domain;
	u32 saveMask;
	
	__osPiGetAccess();
	if (!handleUninit) {
		__osPiRelAccess();
		return &sCartHandle;
	}
	handleUninit = FALSE;

	sCartHandle.type = DEVICE_TYPE_CART;
	sCartHandle.baseAddress = PHYS_TO_K1(PI_DOM1_ADDR2);
	sCartHandle.domain = PI_DOMAIN1;
	sCartHandle.speed = 0;
	// why not sizeof(__OSTranxInfo) [0xC0 bytes]?
	bzero(&sCartHandle.transferInfo, 0x60);

	WAIT_ON_IOBUSY(stat);
	
	IO_WRITE(PI_BSD_DOM1_LAT_REG, 0xFF);
	IO_WRITE(PI_BSD_DOM1_PGS_REG, 0x00);
	IO_WRITE(PI_BSD_DOM1_RLS_REG, 0x03);
	IO_WRITE(PI_BSD_DOM1_PWD_REG, 0xFF);
	
	domain = IO_READ(sCartHandle.baseAddress);
	/* these specific u16 casts are needed for reg alloc */
	sCartHandle.latency = (u16)domain;
	sCartHandle.pulse = (u16)(domain >> 0x08);
	sCartHandle.pageSize = (domain >> 0x10) & 0xF;
	sCartHandle.relDuration = (domain >> 0x14) & 0xF;
	IO_WRITE(PI_BSD_DOM1_LAT_REG, domain & 0xFF);
	IO_WRITE(PI_BSD_DOM1_PGS_REG, sCartHandle.pageSize);
	IO_WRITE(PI_BSD_DOM1_RLS_REG, sCartHandle.relDuration);
	IO_WRITE(PI_BSD_DOM1_PWD_REG, sCartHandle.pulse);
	__osCurrentHandle[sCartHandle.domain]->type = sCartHandle.type;
	__osCurrentHandle[sCartHandle.domain]->latency = sCartHandle.latency;
	__osCurrentHandle[sCartHandle.domain]->pageSize = sCartHandle.pageSize;
	__osCurrentHandle[sCartHandle.domain]->relDuration = sCartHandle.relDuration;
	__osCurrentHandle[sCartHandle.domain]->pulse = sCartHandle.pulse;
	
	saveMask = __osDisableInt();
	sCartHandle.next = __osPiTable;
	__osPiTable = &sCartHandle;
	__osRestoreInt(saveMask);
	
	__osPiRelAccess();
	return &sCartHandle;
}
