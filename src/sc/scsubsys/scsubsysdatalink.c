#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80391890[] =
{
	0xAC000002,
	ftMotionCommandWait(6),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 D_ovl1_803918A4[] =
{
	ftMotionCommandSubroutine(D_ovl1_80391890),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(D_ovl1_80391890),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(D_ovl1_80391890),
	ftMotionCommandWait(50),
	ftMotionCommandGoto(D_ovl1_803918A4)
};

s32 D_ovl1_803918D0[] =
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

s32 D_ovl1_8039191C[] =
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

s32 D_ovl1_80391954[] =
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

s32 D_ovl1_80391978[] =
{
	0xA0A00000,
	0xA05FFFFF,
	0xA0A80000,
	0xA09FFFFF,
	ftMotionCommandEnd()
};

s32 D_ovl1_8039198C[] =
{
	ftMotionPlayFGM(nSYAudioFGMGroundGrind3),
	0x98003400,
	0x00000000,
	0x00000000,
	0x00000000,
	ftMotionCommandEnd()
};

s32 D_ovl1_803919A4[] =
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

s32 D_ovl1_803919EC[] =
{
	0xA0B00001,
	0xA0B80001,
	0xA0C00001,
	0xA0580002,
	ftMotionCommandEnd()
};

FTMotionDesc dFTLinkSubMotionDescs[] =
{
	&llFTLinkAnimEggLayFileID, D_ovl1_803918A4, 0x00000000,
	&llFTLinkAnimSelectedFileID,  D_ovl1_803918D0, 0x00000000,
	&llFTLinkAnimWin1FileID,  D_ovl1_8039191C, 0x00000000,
	&llFTLinkAnimWin2FileID,  D_ovl1_80391954, 0x00000000,
	&llFTLinkAnimWin2FileID,  D_ovl1_80391954, 0x00000000,
	&llFTLinkAnimClapsFileID,  D_ovl1_80391978, 0x00000000,
	&llFTLinkAnimRunFileID, 0x80000000,      0x00000000,
	&llFTLinkAnimJumpFFileID, D_ovl1_8039198C, 0x00000000,
	&llFTLinkAnimDollPickUpFileID,  0x80000000,      0x80000000,
	&llFTLinkAnimDollFallFileID,  0x80000000,      0x40000000,
	&llFTLinkAnimDollRevivalFileID,  0x80000000,      0x40000000,
	&llFTLinkAnimIntroFileID,  0x80000000,      0x00000000,
	&llFTLinkAnimPoseAllyFileID,  0x80000000,      0x00000000,
	&llFTLinkAnimPosePlayerFileID,  D_ovl1_803919EC, 0x00000000,
	&llFTLinkAnimPoseOpponentFileID,  D_ovl1_803919EC, 0x00000000,
	&llFTLinkAnimClaps2FileID,  D_ovl1_803919A4, 0x00000000
};
s32 dFTLinkSubMotionDescsCount = sizeof(dFTLinkSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
