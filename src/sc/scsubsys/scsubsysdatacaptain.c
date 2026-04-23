#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80391E50[] =
{
	ftMotionCommandWaitAsync(84),
	ftMotionPlayFGM(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391E5C[] =
{
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioVoiceCaptainHeavyGet),
	ftMotionCommandWaitAsync(54),
	ftMotionPlayFGM(nSYAudioVoiceCaptainAttackS4),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391E70[] =
{
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioVoiceCaptainHeavyGet),
	ftMotionCommandWaitAsync(54),
	ftMotionPlayFGM(nSYAudioVoiceCaptainJumpAerial),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391E84[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_80391E88[] =
{
	0xAC000006,
	ftMotionCommandEnd()
};

FTMotionDesc dFTCaptainSubMotionDescs[] =
{
    &llFTCaptainAnimEggLayFileID, 0x80000000,      0x00000000,
    &llFTCaptainAnimSelectedFileID,  D_ovl1_80391E50, 0x00000000,
    &llFTCaptainAnimVictory1FileID,  D_ovl1_80391E5C, 0x00000000,
    &llFTCaptainAnimVictory2FileID,  D_ovl1_80391E70, 0x00000000,
    &llFTCaptainAnimVictory2FileID,  D_ovl1_80391E70, 0x00000000,
    &llFTCaptainAnimClapsFileID,  D_ovl1_80391E84, 0x00000000,
    &llFTCaptainAnimRunFileID, 0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &llFTCaptainAnimDollFallFileID,  0x80000000,      0x40000000,
    &llFTCaptainAnimDollRevivalFileID,  0x80000000,      0x40000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &llFTCaptainAnimUnknownFileID,  D_ovl1_80391E88, 0x00000000,
    0x00000000,      0x80000000,      0x00000000
};
s32 dFTCaptainSubMotionDescsCount = sizeof(dFTCaptainSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
