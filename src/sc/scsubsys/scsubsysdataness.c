#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTNessOpeningBlinkScript[] =
{
	0xAC000001,
	ftMotionCommandWait(2),
	0xAC000002,
	ftMotionCommandWait(4),
	0xAC000001,
	ftMotionCommandWait(3),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 dFTNessOpeningWaitScript[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(dFTNessOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(dFTNessOpeningBlinkScript),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dFTNessOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dFTNessOpeningWaitScript)
};

s32 dFTNessOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandWaitAsync(27),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	0x98002C00,
	0x00000000,
	0xFFC40000,
	0x00000000,
	ftMotionCommandWaitAsync(36),
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandWaitAsync(57),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	0x98002C00,
	0x00000000,
	0xFFC40000,
	0x00000000,
	ftMotionCommandWaitAsync(86),
	ftMotionPlayFGM(nSYAudioFGMUnkSmallPing1),
	0xAC000003,
	ftMotionCommandWaitAsync(101),
	ftMotionPlayFGM(nSYAudioFGMUnkSmallPing1),
	ftMotionCommandEnd()
};

s32 dFTNessOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(100),
	0xAC000003,
	ftMotionCommandEnd()
};

s32 dFTNessOpeningEntry3Script[] =
{
	0xA0880001,
	0xAC000004,
	ftMotionCommandWaitAsync(31),
	0xAC000000,
	ftMotionCommandWaitAsync(52),
	0xAC000004,
	ftMotionCommandWaitAsync(81),
	0xAC000000,
	ftMotionCommandEnd()
};

s32 dFTNessOpeningActionScript[] =
{
	ftMotionCommandEnd()
};

s32 dFTNessOpeningLoopScript[] =
{
	0xA0800002,
	0xA0500002,
	ftMotionCommandEnd()
};

FTMotionDesc dFTNessSubMotionDescs[] =
{
	&ll_1664_FileID, dFTNessOpeningWaitScript, 0x00000000,
	&ll_436_FileID, dFTNessOpeningEntry1Script, 0x00000000,
	&ll_437_FileID, dFTNessOpeningEntry2Script, 0x80000000,
	&ll_438_FileID, dFTNessOpeningEntry3Script, 0x00000000,
	&ll_438_FileID, dFTNessOpeningEntry3Script, 0x00000000,
	&ll_439_FileID, dFTNessOpeningActionScript, 0x00000000,
	&ll_1670_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_440_FileID, 0x80000000, 0x40000000,
	&ll_441_FileID, 0x80000000, 0x40000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_442_FileID, dFTNessOpeningLoopScript, 0x00000000,
	0x00000000, 0x80000000, 0x00000000
};

s32 dFTNessSubMotionDescsCount = sizeof(dFTNessSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
