#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTSamusOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(19),
	0x98807C00,
	0x003C0000,
	0x00000000,
	0x00000000,
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(46),
	0x98807C00,
	0x003C0000,
	0x00000000,
	0x00000000,
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(79),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	0x80000003,
	0x98807000,
	0x012C0000,
	0x00000000,
	0x00000000,
	ftMotionPlayFGM(nSYAudioFGMFireShoot1),
	ftMotionCommandWait(16),
	0x84000000,
	ftMotionCommandEnd()
};

s32 dFTSamusOpeningEntry2Script[] =
{
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(75),
	0x98807C00,
	0x003C0000,
	0x00000000,
	0x00000000,
	ftMotionPlayFGM(nSYAudioVoiceSamusSmash1),
	ftMotionCommandEnd()
};

s32 dFTSamusOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(100),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd()
};

s32 dFTSamusOpeningActionScript[] =
{
	0xA0500001,
	ftMotionCommandEnd()
};

FTMotionDesc dFTSamusSubMotionDescs[] =
{
    &ll_953_FileID, 0x80000000, 0x00000000,
    &ll_393_FileID, dFTSamusOpeningEntry1Script, 0x00000000,
    &ll_394_FileID, dFTSamusOpeningEntry2Script, 0x00000000,
    &ll_395_FileID, dFTSamusOpeningEntry3Script, 0x00000000,
    &ll_395_FileID, dFTSamusOpeningEntry3Script, 0x00000000,
    &ll_396_FileID, dFTSamusOpeningActionScript, 0x00000000,
    &ll_959_FileID, 0x80000000, 0x00000000,
    0x00000000,   0x80000000, 0x00000000,
    &ll_397_FileID, 0x80000000, 0x80000000,
    &ll_398_FileID, 0x80000000, 0x40000000,
    &ll_399_FileID, 0x80000000, 0x40000000,
    &ll_400_FileID, 0x80000000, 0x00000000,
    &ll_401_FileID, 0x80000000, 0x00000000,
    &ll_402_FileID, 0x80000000, 0x00000000,
    &ll_403_FileID, 0x80000000, 0x00000000
};
s32 dFTSamusSubMotionDescsCount = sizeof(dFTSamusSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
