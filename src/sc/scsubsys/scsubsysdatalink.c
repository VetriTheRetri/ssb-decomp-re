#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTLinkOpeningBlinkScript[] =
{
	0xAC000002,
	ftMotionCommandWait(6),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 dFTLinkOpeningWaitScript[] =
{
	ftMotionCommandSubroutine(dFTLinkOpeningBlinkScript),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(dFTLinkOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dFTLinkOpeningBlinkScript),
	ftMotionCommandWait(50),
	ftMotionCommandGoto(dFTLinkOpeningWaitScript)
};

s32 dFTLinkOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(5),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandWaitAsync(25),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandWaitAsync(60),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing4),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandEnd()
};

s32 dFTLinkOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(5),
	ftMotionPlayFGM(nSYAudioVoiceLinkSmash1),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandEnd()
};

s32 dFTLinkOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(15),
	ftMotionPlayFGM(nSYAudioFGMBladeSwing3),
	0x98587C00,
	0x00000000,
	0x00B40000,
	0x00000000,
	ftMotionCommandWaitAsync(100),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd()
};

s32 dFTLinkOpeningActionScript[] =
{
	0xA0A00000,
	0xA05FFFFF,
	0xA0A80000,
	0xA09FFFFF,
	ftMotionCommandEnd()
};

s32 dFTLinkOpeningSpecialScript[] =
{
	ftMotionPlayFGM(nSYAudioFGMGroundGrind3),
	0x98003400,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandEnd()
};

s32 dFTLinkOpeningLoopScript[] =
{
	0xA0A80000,
	0xA09FFFFF,
	0xA0A00000,
	0xA05FFFFF,
	0xA0B00001,
	0xA0B80001,
	0xA0C00001,
	0xAC000002,
	ftMotionCommandWaitAsync(110),
	0xAC000000,
	ftMotionCommandWait(8),
	0xAC000002,
	ftMotionCommandWait(4),
	0xAC000000,
	ftMotionCommandWaitAsync(135),
	0xAC000002,
	ftMotionCommandWait(4),
	0xAC000000
};

s32 dFTLinkOpeningAppearScript[] =
{
	0xA0B00001,
	0xA0B80001,
	0xA0C00001,
	0xA0580002,
	ftMotionCommandEnd()
};

FTMotionDesc dFTLinkSubMotionDescs[] =
{
    &ll_1115_FileID, dFTLinkOpeningWaitScript, 0x00000000,
    &ll_404_FileID,  dFTLinkOpeningEntry1Script, 0x00000000,
    &ll_405_FileID,  dFTLinkOpeningEntry2Script, 0x00000000,
    &ll_406_FileID,  dFTLinkOpeningEntry3Script, 0x00000000,
    &ll_406_FileID,  dFTLinkOpeningEntry3Script, 0x00000000,
    &ll_407_FileID,  dFTLinkOpeningActionScript, 0x00000000,
    &ll_1121_FileID, 0x80000000,      0x00000000,
    &ll_1125_FileID, dFTLinkOpeningSpecialScript, 0x00000000,
    &ll_408_FileID,  0x80000000,      0x80000000,
    &ll_409_FileID,  0x80000000,      0x40000000,
    &ll_410_FileID,  0x80000000,      0x40000000,
    &ll_412_FileID,  0x80000000,      0x00000000,
    &ll_413_FileID,  0x80000000,      0x00000000,
    &ll_414_FileID,  dFTLinkOpeningAppearScript, 0x00000000,
    &ll_415_FileID,  dFTLinkOpeningAppearScript, 0x00000000,
    &ll_411_FileID,  dFTLinkOpeningLoopScript, 0x00000000
};
s32 dFTLinkSubMotionDescsCount = sizeof(dFTLinkSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
