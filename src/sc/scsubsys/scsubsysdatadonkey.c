#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTDonkeyOpeningEntry1Script[] =
{
	ftMotionPlayFGM(nSYAudioVoiceDonkeySmash1),
	ftMotionCommandEnd()
};

s32 dFTDonkeyOpeningEntry2Script[] =
{
	ftMotionCommandEnd()
};

s32 dFTDonkeyOpeningEntry3Script[] =
{
	ftMotionCommandEnd()
};

s32 dFTDonkeyOpeningActionScript[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

FTMotionDesc dFTDonkeySubMotionDescs[] =
{
    &ll_800_FileID, 0x80000000, 0x00000000,
    &ll_381_FileID, dFTDonkeyOpeningEntry1Script, 0x00000000,
    &ll_382_FileID, dFTDonkeyOpeningEntry2Script, 0x00000000,
    &ll_383_FileID, 0x80000000, 0x00000000,
    &ll_384_FileID, dFTDonkeyOpeningEntry3Script, 0x00000000,
    &ll_385_FileID, dFTDonkeyOpeningActionScript, 0x00000000,
    &ll_806_FileID, 0x80000000, 0x00000000,
    0x00000000,   0x80000000, 0x00000000,
    &ll_386_FileID, 0x80000000, 0x80000000,
    &ll_387_FileID, 0x80000000, 0x40000000,
    &ll_388_FileID, 0x80000000, 0x40000000,
    &ll_389_FileID, 0x80000000, 0x80000000,
    &ll_390_FileID, 0x80000000, 0x00000000,
    &ll_391_FileID, 0x80000000, 0x00000000,
    &ll_392_FileID, 0x80000000, 0x00000000
};

s32 dFTDonkeySubMotionDescsCount = sizeof(dFTDonkeySubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
