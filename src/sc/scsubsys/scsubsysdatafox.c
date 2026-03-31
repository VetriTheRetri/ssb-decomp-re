#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTFoxOpeningEntry1Script[] =
{
	0xA0880000,
	ftMotionCommandWaitAsync(85),
	0xA08FFFFF,
	0xA0800001,
	ftMotionCommandEnd()
};

s32 dFTFoxOpeningEntry2Script[] =
{
	0xA0880000,
	ftMotionCommandWaitAsync(110),
	ftMotionPlayFGM(nSYAudioVoiceFoxWin),
	ftMotionCommandEnd()
};

s32 dFTFoxOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioVoiceFoxSelected),
	ftMotionCommandEnd()
};

s32 dFTFoxOpeningActionScript[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

s32 dFTFoxOpeningLoopScript[] =
{
	0xA0880000,
	ftMotionCommandEnd()
};

FTMotionDesc dFTFoxSubMotionDescs[] =
{
	&ll_642_FileID, 0x80000000, 0x00000000,
	&ll_370_FileID, dFTFoxOpeningEntry1Script, 0x00000000,
	&ll_371_FileID, dFTFoxOpeningEntry2Script, 0x00000000,
	&ll_372_FileID, dFTFoxOpeningEntry3Script, 0x00000000,
	&ll_372_FileID, dFTFoxOpeningEntry3Script, 0x00000000,
	&ll_373_FileID, dFTFoxOpeningActionScript, 0x00000000,
	&ll_648_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_374_FileID, 0x80000000, 0x80000000,
	&ll_375_FileID, 0x80000000, 0x40000000,
	&ll_376_FileID, 0x80000000, 0x40000000,
	&ll_377_FileID, 0x80000000, 0x00000000,
	&ll_378_FileID, 0x80000000, 0x00000000,
	&ll_379_FileID, dFTFoxOpeningLoopScript, 0x00000000,
	&ll_380_FileID, dFTFoxOpeningLoopScript, 0x00000000,
	&ll_781_FileID, 0x80000000, 0x00000000,
	&ll_782_FileID, 0x80000000, 0x00000000,
	&ll_783_FileID, 0x80000000, 0x00000000,
	&ll_784_FileID, 0x80000000, 0x00000000,
	&ll_779_FileID, 0x80000000, 0x00000000,
	&ll_790_FileID, 0x80000000, 0x00000000,
	&ll_791_FileID, 0x80000000, 0x00000000,
	&ll_792_FileID, 0x80000000, 0x00000000,
	&ll_793_FileID, 0x80000000, 0x00000000
};
s32 dFTFoxSubMotionDescsCount = sizeof(dFTFoxSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000018
