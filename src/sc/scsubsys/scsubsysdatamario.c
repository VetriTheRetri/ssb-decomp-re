#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80390DC0[] =
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

s32 D_ovl1_80390DE4[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(D_ovl1_80390DE4)
};

s32 D_ovl1_80390E14[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioVoiceMarioHereWe),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandEnd()
};

s32 D_ovl1_80390E34[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWaitAsync(80),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandEnd()
};

s32 D_ovl1_80390E50[] =
{
	ftMotionCommandWaitAsync(10),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWaitAsync(65),
	ftMotionPlayFGM(nSYAudioVoiceMarioHereWe),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandEnd()
};

s32 D_ovl1_80390E70[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

s32 D_ovl1_80390E7C[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWait(0x0028),
	ftMotionCommandSubroutine(D_ovl1_80390DC0),
	ftMotionCommandWait(10),
	ftMotionCommandGoto(D_ovl1_80390E7C)
};

FTMotionDesc dFTMarioSubMotionDescs[] =
{
	&llFTMarioAnimWaitFileID, &D_ovl1_80390DE4, 0x00000000,
	&llFTMarioAnimWin2FileID, &D_ovl1_80390E14, 0x00000000,
	&llFTMarioAnimWin3FileID, &D_ovl1_80390E34, 0x00000000,
	&llFTMarioAnimSelectedFileID, 0x80000000, 0x00000000,
	&llFTMarioAnimWinBetaFileID, &D_ovl1_80390E50, 0x00000000,
	&llFTMarioAnimClapsFileID, &D_ovl1_80390E70, 0x00000000,
	&llFTMarioAnimRunFileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&llFTMarioAnimDollPickUpFileID, 0x80000000, 0x80000000,
	&llFTMarioAnimDollFallsFileID, 0x80000000, 0x40000000,
	&llFTMarioAnimDollRevivalFileID, 0x80000000, 0x40000000,
	&llFTMarioAnimIntroFileID, 0x80000000, 0x00000000,
	&llFTMarioAnimIntro2FileID, 0x80000000, 0x00000000,
	&llFTMarioAnimPoseFileID, 0x80000000, 0x00000000,
	&llFTMarioAnimPose2FileID, 0x80000000, 0x00000000,
	&llFTMarioAnimIntroVsKirbyFileID, &D_ovl1_80390E7C, 0x00000000,
	&llFTMarioAnimSuperJumpPunchAirFileID, 0x80000000, 0x40000000,
	&llFTMarioAnimFireballGroundFileID, 0x80000000, 0x00000000,
	&llFTMarioAnimMarioTornadoGroundFileID, 0x80000000, 0x00000000
};
s32 dFTMarioSubMotionDescsCount = sizeof(dFTMarioSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000013
