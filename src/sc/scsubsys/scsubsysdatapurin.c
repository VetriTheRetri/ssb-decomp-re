#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTPurinOpeningBlinkScript[] =
{
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(2),
	0xAC000005,
	0xAC100005,
	ftMotionCommandWait(4),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(2),
	0xAC000000,
	0xAC100000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 dFTPurinOpeningWaitScript[] =
{
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dFTPurinOpeningWaitScript)
};

s32 dFTPurinOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(0),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTPurinOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(62),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(92),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTPurinOpeningEntry3Script[] =
{
	0xAC000005,
	0xAC100005,
	ftMotionCommandWaitAsync(95),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWaitAsync(108),
	0xAC000000,
	0xAC100000,
	ftMotionCommandWaitAsync(110),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTPurinOpeningActionScript[] =
{
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dFTPurinOpeningBlinkScript),
	ftMotionCommandWait(10),
	ftMotionCommandEnd()
};

FTMotionDesc dFTPurinSubMotionDescs[] =
{
	&ll_1492_FileID, dFTPurinOpeningWaitScript, 0x00000000,
	&ll_469_FileID, dFTPurinOpeningEntry1Script, 0x00000000,
	&ll_470_FileID, dFTPurinOpeningEntry2Script, 0x00000000,
	&ll_471_FileID, dFTPurinOpeningEntry3Script, 0x00000000,
	&ll_471_FileID, dFTPurinOpeningEntry3Script, 0x00000000,
	&ll_472_FileID, dFTPurinOpeningActionScript, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_473_FileID, 0x80000000, 0x40000000,
	&ll_474_FileID, 0x80000000, 0x40000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_475_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000
};

s32 dFTPurinSubMotionDescsCount = sizeof(dFTPurinSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
