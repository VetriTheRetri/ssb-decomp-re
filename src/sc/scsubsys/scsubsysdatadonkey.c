#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80391340[] =
{
	ftMotionPlayFGM(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391348[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_8039134C[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_80391350[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

FTMotionDesc dFTDonkeySubMotionDescs[] =
{
	&llFTDonkeyAnimEggLayFileID, 0x80000000, 0x00000000,
	&llFTDonkeyAnimSelectedFileID, D_ovl1_80391340, 0x00000000,
	&llFTDonkeyAnimWin1FileID, D_ovl1_80391348, 0x00000000,
	&llFTDonkeyAnimWin2FileID, 0x80000000, 0x00000000,
	&llFTDonkeyAnimWin3FileID, D_ovl1_8039134C, 0x00000000,
	&llFTDonkeyAnimClapsFileID, D_ovl1_80391350, 0x00000000,
	&llFTDonkeyAnimRunFileID, 0x80000000, 0x00000000,
	0x00000000,   0x80000000, 0x00000000,
	&llFTDonkeyAnimDollPickUpFileID, 0x80000000, 0x80000000,
	&llFTDonkeyAnimDollFallFileID, 0x80000000, 0x40000000,
	&llFTDonkeyAnimDollRevivalFileID, 0x80000000, 0x40000000,
	&llFTDonkeyAnimIntroFileID, 0x80000000, 0x80000000,
	&llFTDonkeyAnimUnknownFileID, 0x80000000, 0x00000000,
	&llFTDonkeyAnimPose1PFileID, 0x80000000, 0x00000000,
	&llFTGDonkeyAnimPose1PFileID, 0x80000000, 0x00000000
};

s32 dFTDonkeySubMotionDescsCount = sizeof(dFTDonkeySubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
