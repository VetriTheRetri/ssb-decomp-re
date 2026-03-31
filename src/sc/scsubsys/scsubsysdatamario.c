#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTMarioOpeningBlinkScript[] =
{
	0xAC000002,
	ftMotionCommandWait(2),
	0xAC000003,
	ftMotionCommandWait(3),
	0xAC000002,
	ftMotionCommandWait(2),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 dFTMarioOpeningWaitScript[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(dFTMarioOpeningWaitScript)
};

s32 dFTMarioOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioVoiceMarioHereWe),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTMarioOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWaitAsync(80),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTMarioOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWaitAsync(65),
	ftMotionPlayFGM(nSYAudioVoiceMarioHereWe),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandEnd()
};

s32 dFTMarioOpeningActionScript[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

s32 dFTMarioOpeningLoopScript[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWait(0x0028),
	ftMotionCommandSubroutine(dFTMarioOpeningBlinkScript),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(dFTMarioOpeningLoopScript)
};

FTMotionDesc dFTMarioSubMotionDescs[] =
{
	&llFTMarioAnimWaitFileID, &dFTMarioOpeningWaitScript, 0x00000000,
	&ll_357_FileID, &dFTMarioOpeningEntry1Script, 0x00000000,
	&ll_358_FileID, &dFTMarioOpeningEntry2Script, 0x00000000,
	&ll_359_FileID, 0x80000000, 0x00000000,
	&ll_360_FileID, &dFTMarioOpeningEntry3Script, 0x00000000,
	&ll_361_FileID, &dFTMarioOpeningActionScript, 0x00000000,
	&ll_505_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_362_FileID, 0x80000000, 0x80000000,
	&ll_363_FileID, 0x80000000, 0x40000000,
	&ll_364_FileID, 0x80000000, 0x40000000,
	&ll_366_FileID, 0x80000000, 0x00000000,
	&ll_367_FileID, 0x80000000, 0x00000000,
	&ll_368_FileID, 0x80000000, 0x00000000,
	&ll_369_FileID, 0x80000000, 0x00000000,
	&ll_365_FileID, &dFTMarioOpeningLoopScript, 0x00000000,
	&ll_637_FileID, 0x80000000, 0x40000000,
	&ll_635_FileID, 0x80000000, 0x00000000,
	&ll_638_FileID, 0x80000000, 0x00000000
};
s32 dFTMarioSubMotionDescsCount = sizeof(dFTMarioSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000013
