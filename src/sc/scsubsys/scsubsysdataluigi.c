#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80391700[] =
{
	0xAC000003,
	ftMotionCommandWait(2),
	0xAC000004,
	ftMotionCommandWait(3),
	0xAC000003,
	ftMotionCommandWait(2),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 D_ovl1_80391724[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(D_ovl1_80391700),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(D_ovl1_80391700),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(D_ovl1_80391700),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(D_ovl1_80391724)
};

s32 D_ovl1_80391754[] =
{
	0xAC000002,
	0x80000003,
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(12),
	0x84000000,
	ftMotionCommandWaitAsync(46),
	0x80000003,
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionCommandWaitAsync(12),
	0x84000000,
	ftMotionCommandWaitAsync(80),
	0xAC000003,
	ftMotionCommandWaitAsync(92),
	ftMotionPlayFGM(nSYAudioVoiceLuigiFuraFura),
	ftMotionCommandWaitAsync(108),
	ftMotionPlayFGM(nSYAudioVoiceLuigiFuraFura),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391798[] =
{
	0xAC000003,
	ftMotionCommandEnd()
};

s32 D_ovl1_803917A0[] =
{
	0xA0800001,
	0x00000000,
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

s32 D_ovl1_803917B4[] =
{
	0xAC000003,
	ftMotionCommandEnd()
};

FTMotionDesc dFTLuigiSubMotionDescs[] =
{
    &llFTLuigiAnimEggLayFileID, D_ovl1_80391724, 0x00000000,
    &llFTLuigiAnimSelectedFileID,  D_ovl1_80391754, 0x00000004,
    &llFTLuigiAnimWin1FileID,  D_ovl1_80391798, 0x00000004,
    &llFTLuigiAnimWin2FileID,  0x80000000,       0x00000004,
    &llFTLuigiAnimWin2FileID,  D_ovl1_803917A0,  0x00000004,
    &llFTMarioAnimClapsFileID,  0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    &llFTLuigiAnimDollFallFileID,  0x80000000,       0x40000004,
    &llFTLuigiAnimDollRevivalFileID,  0x80000000,       0x40000004,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    &llFTLuigiAnimPosePlayerFileID,  0x80000000,       0x00000004,
    &llFTLuigiAnimPoseEnemyFileID,  D_ovl1_803917B4,  0x00000004
};
s32 dFTLuigiSubMotionDescsCount = sizeof(dFTLuigiSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
