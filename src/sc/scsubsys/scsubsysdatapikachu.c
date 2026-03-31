#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTPikachuOpeningBlinkScript[] =
{
	0xAC000006,
	ftMotionCommandWait(2),
	0xAC000000,
	ftMotionCommandReturn()
};

s32 dFTPikachuOpeningWaitScript[] =
{
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWait(16),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWait(100),
	ftMotionCommandGoto(dFTPikachuOpeningWaitScript)
};

s32 dFTPikachuOpeningEntry1Script[] =
{
	ftMotionCommandEnd()
};

s32 dFTPikachuOpeningEntry2Script[] =
{
	ftMotionCommandEnd()
};

s32 dFTPikachuOpeningEntry3Script[] =
{
	ftMotionPlayFGM(nSYAudioVoicePikachuFuraSleep),
	0xAC000006,
	0x00000000,
	0x00000000
};

s32 dFTPikachuOpeningLoopScript[] =
{
	0xAC100006,
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWaitAsync(45),
	0xAC100000,
	ftMotionCommandWaitAsync(80),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWaitAsync(95),
	0xAC100006,
	ftMotionCommandWaitAsync(125),
	ftMotionCommandSubroutine(dFTPikachuOpeningBlinkScript),
	ftMotionCommandWaitAsync(145),
	0xAC100000,
	ftMotionCommandEnd()
};

FTMotionDesc dFTPikachuSubMotionDescs[] =
{
	&ll_1957_FileID, dFTPikachuOpeningWaitScript, 0x00000000,
	&ll_476_FileID, dFTPikachuOpeningEntry1Script, 0x80000000,
	&ll_477_FileID, dFTPikachuOpeningEntry2Script, 0x00000000,
	&ll_478_FileID, dFTPikachuOpeningEntry3Script, 0x00000000,
	&ll_478_FileID, dFTPikachuOpeningEntry3Script, 0x00000000,
	&ll_479_FileID, 0x80000000, 0x00000000,
	&ll_1963_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_480_FileID, 0x80000000, 0x80000000,
	&ll_481_FileID, 0x80000000, 0x40000000,
	&ll_482_FileID, 0x80000000, 0x40000000,
	&ll_484_FileID, 0x80000000, 0x00000000,
	&ll_485_FileID, 0x80000000, 0x00000000,
	&ll_486_FileID, 0x80000000, 0x00000000,
	&ll_487_FileID, 0x80000000, 0x00000000,
	&ll_483_FileID, dFTPikachuOpeningLoopScript, 0x00000000
};

s32 dFTPikachuSubMotionDescsCount = sizeof(dFTPikachuSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
