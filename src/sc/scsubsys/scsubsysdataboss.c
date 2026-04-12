#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_803928E0[] =
{
#if defined(REGION_US)
	0xB110012C,
#else
	0xB10C012C,
#endif
	ftMotionCommandEnd()
};

FTMotionDesc dFTBossSubMotionDescs[] =
{
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	&llFTBossAnimDefaultFileID, 0x80000000, 0x80000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&llFTBossAnimPose1PFileID, 0x80000000, 0x80000000,
	&llFTYoshiAnimUnknown8FileID, 0x80000000, 0x80000000,
	&llFTYoshiAnimUnknown9FileID, D_ovl1_803928E0, 0x80000000,
	&llFTYoshiAnimUnknown10FileID, 0x80000000, 0x80000000
};
s32 dFTBossSubMotionDescsCount = sizeof(dFTBossSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000012
