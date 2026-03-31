#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTCaptainOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(84),
	ftMotionPlayFGM(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandEnd()
};

s32 dFTCaptainOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioVoiceCaptainHeavyGet),
	ftMotionCommandWaitAsync(54),
	ftMotionPlayFGM(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEnd()
};

s32 dFTCaptainOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioVoiceCaptainHeavyGet),
	ftMotionCommandWaitAsync(54),
	ftMotionPlayFGM(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandEnd()
};

s32 dFTCaptainOpeningActionScript[] =
{
	ftMotionCommandEnd()
};

s32 dFTCaptainOpeningLoopScript[] =
{
	0xAC000006,
	ftMotionCommandEnd()
};

FTMotionDesc dFTCaptainSubMotionDescs[] =
{
    &ll_1512_FileID, 0x80000000,      0x00000000,
    &ll_429_FileID,  dFTCaptainOpeningEntry1Script, 0x00000000,
    &ll_430_FileID,  dFTCaptainOpeningEntry2Script, 0x00000000,
    &ll_431_FileID,  dFTCaptainOpeningEntry3Script, 0x00000000,
    &ll_431_FileID,  dFTCaptainOpeningEntry3Script, 0x00000000,
    &ll_432_FileID,  dFTCaptainOpeningActionScript, 0x00000000,
    &ll_1518_FileID, 0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_433_FileID,  0x80000000,      0x40000000,
    &ll_434_FileID,  0x80000000,      0x40000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_435_FileID,  dFTCaptainOpeningLoopScript, 0x00000000,
    0x00000000,      0x80000000,      0x00000000
};
s32 dFTCaptainSubMotionDescsCount = sizeof(dFTCaptainSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
