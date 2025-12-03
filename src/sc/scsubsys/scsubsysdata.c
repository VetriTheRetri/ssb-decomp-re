#include <ft/fttypes.h>
#include <mv/mvopening/mvopeningroom.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 D_ovl1_80390BE0[2] = { 0, 0 };

FTOpeningDesc D_ovl1_80390BE8[15] =
{
	0x00010000, NULL,
	0x00010001, NULL,
	0x00010002, NULL,
	0x00010003, NULL,
	0x00010004, NULL,
	0x00010005, NULL,
	0x00010006, NULL,
	0x00010007, NULL,
	0x00010008, mvOpeningFighterProcUpdate,
	0x00010009, scSubsysFighterApplyVelTransN,
	0x0001000A, scSubsysFighterApplyVelTransN,
	0x0001000B, NULL,
	0x0001000C, NULL,
	0x0001000D, NULL,
	0x0001000E, NULL
};

FTOpeningDesc D_ovl1_80390C60[1] =
{
	0xFFFFFFFF, NULL
};

FTOpeningDesc D_ovl1_80390C68[4] =
{
	0x0001000F, NULL,
	0x00010010, NULL,
	0x00010011, NULL,
	0x00010012, NULL
};

FTOpeningDesc D_ovl1_80390C88[9] =
{
	0x0001000F, NULL,
	0x00010010, NULL,
	0x00010011, NULL,
	0x00010012, NULL,
	0x00010013, NULL,
	0x00010014, NULL,
	0x00010015, NULL,
	0x00010016, NULL,
	0x00010017, NULL
};

FTOpeningDesc D_ovl1_80390CD0[1] =
{
	0x0001000F, NULL
};

FTOpeningDesc D_ovl1_80390CD8[1] =
{
	0x0001000F, NULL
};

FTOpeningDesc D_ovl1_80390CE0[4] =
{
	0x0001000F, NULL,
	0x00010010, NULL,
	0x00010011, NULL,
	0x00010012, NULL
};

FTOpeningDesc D_ovl1_80390D00[1] =
{
	0x0001000F, NULL
};

FTOpeningDesc D_ovl1_80390D08[3] =
{
	0x0001000F, NULL,
	0x00010010, NULL,
	0x00010011, NULL
};

FTOpeningDesc* D_ovl1_80390D20[] =
{
	D_ovl1_80390C68,
	D_ovl1_80390C88,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390CD8,
	D_ovl1_80390CE0,
	D_ovl1_80390C60,
	D_ovl1_80390CD0,
	D_ovl1_80390D00,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390D08,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	D_ovl1_80390C60,
	NULL,
};

f32 dSCSubsysFighterScales[] =
{
	1.25,
	1.15,
	1.00,
	1.03,
	1.21,
	1.33,
	1.05,
	1.07,
	1.22,
	1.20,
	1.26,
	1.30
};

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
	&ll_357_FileID, &D_ovl1_80390E14, 0x00000000,
	&ll_358_FileID, &D_ovl1_80390E34, 0x00000000,
	&ll_359_FileID, 0x80000000, 0x00000000,
	&ll_360_FileID, &D_ovl1_80390E50, 0x00000000,
	&ll_361_FileID, &D_ovl1_80390E70, 0x00000000,
	&ll_505_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_362_FileID, 0x80000000, 0x80000000,
	&ll_363_FileID, 0x80000000, 0x40000000,
	&ll_364_FileID, 0x80000000, 0x40000000,
	&ll_366_FileID, 0x80000000, 0x00000000,
	&ll_367_FileID, 0x80000000, 0x00000000,
	&ll_368_FileID, 0x80000000, 0x00000000,
	&ll_369_FileID, 0x80000000, 0x00000000,
	&ll_365_FileID, &D_ovl1_80390E7C, 0x00000000,
	&ll_637_FileID, 0x80000000, 0x40000000,
	&ll_635_FileID, 0x80000000, 0x00000000,
	&ll_638_FileID, 0x80000000, 0x00000000
};
s32 dFTMarioSubMotionDescsCount = sizeof(dFTMarioSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000013
s32 dFTMarioSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTMMarioSubMotionDescs[] =
{
	&llFTMarioAnimWaitFileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_488_FileID, 0x80000000, 0x00000000
};
s32 dFTMMarioSubMotionDescsCount = sizeof(dFTMMarioSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTMMarioSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNMarioSubMotionDescs[] =
{
	&llFTMarioAnimWaitFileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_489_FileID, 0x80000000, 0x00000000
};
s32 dFTNMarioSubMotionDescsCount = sizeof(dFTNMarioSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNMarioSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

s32 D_ovl1_80391110[] =
{
	0xA0880000,
	ftMotionCommandWaitAsync(85),
	0xA08FFFFF,
	0xA0800001,
	ftMotionCommandEnd()
};

s32 D_ovl1_80391124[] =
{
	0xA0880000,
	ftMotionCommandWaitAsync(110),
	ftMotionPlayFGM(nSYAudioVoiceFoxWin),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391134[] =
{
	ftMotionCommandWaitAsync(90),
	ftMotionPlayFGM(nSYAudioVoiceFoxSelected),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391140[] =
{
	0xA0800001,
	0xA0500001,
	ftMotionCommandEnd()
};

s32 D_ovl1_8039114C[] =
{
	0xA0880000,
	ftMotionCommandEnd()
};

FTMotionDesc dFTFoxSubMotionDescs[] =
{
	&ll_642_FileID, 0x80000000, 0x00000000,
	&ll_370_FileID, D_ovl1_80391110, 0x00000000,
	&ll_371_FileID, D_ovl1_80391124, 0x00000000,
	&ll_372_FileID, D_ovl1_80391134, 0x00000000,
	&ll_372_FileID, D_ovl1_80391134, 0x00000000,
	&ll_373_FileID, D_ovl1_80391140, 0x00000000,
	&ll_648_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_374_FileID, 0x80000000, 0x80000000,
	&ll_375_FileID, 0x80000000, 0x40000000,
	&ll_376_FileID, 0x80000000, 0x40000000,
	&ll_377_FileID, 0x80000000, 0x00000000,
	&ll_378_FileID, 0x80000000, 0x00000000,
	&ll_379_FileID, D_ovl1_8039114C, 0x00000000,
	&ll_380_FileID, D_ovl1_8039114C, 0x00000000,
	&ll_781_FileID, 0x80000000, 0x00000000,
	&ll_782_FileID, 0x80000000, 0x00000000,
	&ll_783_FileID, 0x80000000, 0x00000000,
	&ll_784_FileID, 0x80000000, 0x00000000,
	&ll_779_FileID, 0x80000000, 0x00000000,
	&ll_790_FileID, 0x80000000, 0x00000000,
	&ll_791_FileID, 0x80000000, 0x00000000,
	&ll_792_FileID, 0x80000000, 0x00000000,
	&ll_793_FileID, 0x80000000, 0x00000000
};
s32 dFTFoxSubMotionDescsCount = sizeof(dFTFoxSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000018
s32 dFTFoxSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNFoxSubMotionDescs[] =
{
	&ll_642_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_490_FileID, 0x80000000, 0x00000000
};
s32 dFTNFoxSubMotionDescsCount = sizeof(dFTNFoxSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNFoxSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

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
    &ll_800_FileID, 0x80000000, 0x00000000,
    &ll_381_FileID, D_ovl1_80391340, 0x00000000,
    &ll_382_FileID, D_ovl1_80391348, 0x00000000,
    &ll_383_FileID, 0x80000000, 0x00000000,
    &ll_384_FileID, D_ovl1_8039134C, 0x00000000,
    &ll_385_FileID, D_ovl1_80391350, 0x00000000,
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
s32 dFTDonkeySubMotionDescsCount_pad[] = { 0x00000000, 0x00000000, 0x00000000 };

FTMotionDesc dFTNDonkeySubMotionDescs[] =
{
	&ll_800_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_491_FileID, 0x80000000, 0x00000000
};
s32 dFTNDonkeySubMotionDescsCount = sizeof(dFTNDonkeySubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNDonkeySubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTGDonkeySubMotionDescs[] =
{
	&ll_800_FileID, 0x80000000, 0x00000000
};
s32 dFTGDonkeySubMotionDescsCount = sizeof(dFTGDonkeySubMotionDescs)/sizeof(FTMotionDesc); // 0x00000001

s32 D_ovl1_803914F0[] =
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

s32 D_ovl1_8039154C[] =
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

s32 D_ovl1_8039156C[] =
{
	ftMotionCommandWaitAsync(100),
	ftMotionPlayFGM(nSYAudioFGMBladeDraw),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391578[] =
{
	0xA0500001,
	ftMotionCommandEnd()
};

FTMotionDesc dFTSamusSubMotionDescs[] =
{
    &ll_953_FileID, 0x80000000, 0x00000000,
    &ll_393_FileID, D_ovl1_803914F0, 0x00000000,
    &ll_394_FileID, D_ovl1_8039154C, 0x00000000,
    &ll_395_FileID, D_ovl1_8039156C, 0x00000000,
    &ll_395_FileID, D_ovl1_8039156C, 0x00000000,
    &ll_396_FileID, D_ovl1_80391578, 0x00000000,
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
s32 dFTSamusSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNSamusSubMotionDescs[] =
{
	&ll_953_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_492_FileID, 0x80000000, 0x00000000
};
s32 dFTNSamusSubMotionDescsCount = sizeof(dFTNSamusSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNSamusSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

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
    &ll_1103_FileID, D_ovl1_80391724, 0x00000000,
    &ll_462_FileID,  D_ovl1_80391754, 0x00000004,
    &ll_463_FileID,  D_ovl1_80391798, 0x00000004,
    &ll_464_FileID,  0x80000000,       0x00000004,
    &ll_464_FileID,  D_ovl1_803917A0,  0x00000004,
    &ll_361_FileID,  0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    &ll_465_FileID,  0x80000000,       0x40000004,
    &ll_466_FileID,  0x80000000,       0x40000004,
    0x00000000,      0x80000000,       0x00000000,
    0x00000000,      0x80000000,       0x00000000,
    &ll_467_FileID,  0x80000000,       0x00000004,
    &ll_468_FileID,  D_ovl1_803917B4,  0x00000004
};
s32 dFTLuigiSubMotionDescsCount = sizeof(dFTLuigiSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTLuigiSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000, 0x00000000 };

FTMotionDesc dFTNLuigiSubMotionDescs[] =
{
	&ll_1103_FileID, 0x80000000, 0x00000000
};
s32 dFTNLuigiSubMotionDescsCount = sizeof(dFTNLuigiSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000001

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
    &ll_1115_FileID, D_ovl1_803918A4, 0x00000000,
    &ll_404_FileID,  D_ovl1_803918D0, 0x00000000,
    &ll_405_FileID,  D_ovl1_8039191C, 0x00000000,
    &ll_406_FileID,  D_ovl1_80391954, 0x00000000,
    &ll_406_FileID,  D_ovl1_80391954, 0x00000000,
    &ll_407_FileID,  D_ovl1_80391978, 0x00000000,
    &ll_1121_FileID, 0x80000000,      0x00000000,
    &ll_1125_FileID, D_ovl1_8039198C, 0x00000000,
    &ll_408_FileID,  0x80000000,      0x80000000,
    &ll_409_FileID,  0x80000000,      0x40000000,
    &ll_410_FileID,  0x80000000,      0x40000000,
    &ll_412_FileID,  0x80000000,      0x00000000,
    &ll_413_FileID,  0x80000000,      0x00000000,
    &ll_414_FileID,  D_ovl1_803919EC, 0x00000000,
    &ll_415_FileID,  D_ovl1_803919EC, 0x00000000,
    &ll_411_FileID,  D_ovl1_803919A4, 0x00000000
};
s32 dFTLinkSubMotionDescsCount = sizeof(dFTLinkSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
s32 dFTLinkSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000, 0x00000000 };

FTMotionDesc dFTNLinkSubMotionDescs[] =
{
	&ll_1115_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_493_FileID, 0x80000000, 0x00000000
};
s32 dFTNLinkSubMotionDescsCount = sizeof(dFTNLinkSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNLinkSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

s32 D_ovl1_80391B90[] =
{
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(2),
	0xAC000005,
	0xAC100005,
	ftMotionCommandWait(4),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(3),
	0xAC000000,
	0xAC100000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 D_ovl1_80391BC4[] =
{
	ftMotionCommandSubroutine(D_ovl1_80391B90),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(D_ovl1_80391B90),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(D_ovl1_80391B90),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(D_ovl1_80391BC4)
};

s32 D_ovl1_80391BF0[] =
{
	ftMotionCommandWaitAsync(40),
	0xAC00000A,
	0xAC10000A,
	ftMotionCommandWaitAsync(100),
	ftMotionPlayFGM(nSYAudioVoiceYoshiAppeal),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391C08[] =
{
	0xAC000009,
	0xAC100009,
	ftMotionCommandWaitAsync(75),
	0xAC00000A,
	0xAC10000A,
	ftMotionCommandWaitAsync(120),
	ftMotionPlayFGM(nSYAudioVoiceYoshiAppeal),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391C28[] =
{
	0xAC000006,
	0xAC100006,
	ftMotionCommandWaitAsync(15),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionPlayFGM(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandWaitAsync(25),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionPlayFGM(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandWaitAsync(55),
	ftMotionPlayFGM(nSYAudioFGMLightSwingS),
	ftMotionPlayFGM(nSYAudioVoiceYoshiSmash2),
	ftMotionCommandWaitAsync(110),
	ftMotionPlayFGM(nSYAudioVoiceYoshiSmash1),
	ftMotionCommandEnd()
};

s32 D_ovl1_80391C60[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_80391C64[] =
{
	0xAC000005,
	0xAC100005,
	ftMotionCommandWaitAsync(50),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWaitAsync(90),
	0xAC000005,
	0xAC100005,
	ftMotionCommandWaitAsync(95),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWaitAsync(98),
	0xAC000000,
	0xAC100000,
	ftMotionCommandEnd()
};

FTMotionDesc dFTYoshiSubMotionDescs[] =
{
    &ll_1815_FileID, D_ovl1_80391BC4, 0x00000000,
    &ll_443_FileID,  D_ovl1_80391BF0, 0x00000000,
    &ll_444_FileID,  D_ovl1_80391C08, 0x00000000,
    &ll_445_FileID,  D_ovl1_80391C28, 0x00000000,
    &ll_445_FileID,  D_ovl1_80391C28, 0x00000000,
    &ll_446_FileID,  D_ovl1_80391C60, 0x00000000,
    &ll_1821_FileID, 0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_447_FileID,  0x80000000,      0x80000000,
    &ll_448_FileID,  0x80000000,      0x40000000,
    &ll_449_FileID,  0x80000000,      0x40000000,
    &ll_454_FileID,  0x80000000,      0x00000000,
    &ll_455_FileID,  0x80000000,      0x00000000,
    &ll_456_FileID,  0x80000000,      0x00000000,
    &ll_457_FileID,  0x80000000,      0x00000000,
    &ll_450_FileID,  D_ovl1_80391C64, 0x00000000,
    &ll_451_FileID,  0x80000000,      0x00000000,
    &ll_452_FileID,  0x80000000,      0x00000000,
    &ll_453_FileID,  0x80000000,      0x00000000
};

s32 dFTYoshiSubMotionDescsCount = sizeof(dFTYoshiSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000013
s32 dFTYoshiSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNYoshiSubMotionDescs[] =
{
	&ll_1815_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_494_FileID, 0x80000000, 0x00000000
};
s32 dFTNYoshiSubMotionDescsCount = sizeof(dFTNYoshiSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNYoshiSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

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
    &ll_1512_FileID, 0x80000000,      0x00000000,
    &ll_429_FileID,  D_ovl1_80391E50, 0x00000000,
    &ll_430_FileID,  D_ovl1_80391E5C, 0x00000000,
    &ll_431_FileID,  D_ovl1_80391E70, 0x00000000,
    &ll_431_FileID,  D_ovl1_80391E70, 0x00000000,
    &ll_432_FileID,  D_ovl1_80391E84, 0x00000000,
    &ll_1518_FileID, 0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_433_FileID,  0x80000000,      0x40000000,
    &ll_434_FileID,  0x80000000,      0x40000000,
    0x00000000,      0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_435_FileID,  D_ovl1_80391E88, 0x00000000,
    0x00000000,      0x80000000,      0x00000000
};
s32 dFTCaptainSubMotionDescsCount = sizeof(dFTCaptainSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTCaptainSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNCaptainSubMotionDescs[] =
{
	&ll_1512_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_495_FileID, 0x80000000, 0x00000000
};
s32 dFTNCaptainSubMotionDescsCount = sizeof(dFTNCaptainSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNCaptainSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

s32 D_ovl1_80392010[] =
{
	0xAC000008,
	ftMotionCommandWait(3),
	0xAC000000,
	ftMotionCommandReturn()
};

s32 D_ovl1_80392020[] =
{
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(140),
	0xAC000005,
	ftMotionCommandWait(80),
	0xAC000000,
	ftMotionCommandWait(70),
	ftMotionCommandGoto(D_ovl1_80392020)
};

s32 D_ovl1_8039205C[] =
{
	ftMotionCommandWaitAsync(158),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 D_ovl1_80392068[] =
{
	ftMotionCommandWaitAsync(158),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 D_ovl1_80392074[] =
{
	ftMotionCommandWaitAsync(120),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 D_ovl1_80392080[] =
{
	0xAC000005,
	ftMotionCommandEnd()
};

s32 D_ovl1_80392088[] =
{
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(0x003C),
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(D_ovl1_80392010),
	ftMotionCommandWait(0x003C),
	ftMotionCommandGoto(D_ovl1_80392088)
};

FTMotionDesc dFTKirbySubMotionDescs[] =
{
    &ll_1259_FileID, D_ovl1_80392020, 0x00000000,
    &ll_416_FileID,  D_ovl1_8039205C, 0x80000000,
    &ll_417_FileID,  D_ovl1_80392068, 0x80000000,
    &ll_418_FileID,  D_ovl1_80392074, 0x00000000,
    &ll_418_FileID,  D_ovl1_80392074, 0x00000000,
    &ll_419_FileID,  D_ovl1_80392080, 0x00000000,
    &ll_423_FileID,  0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_420_FileID,  0x80000000,      0x80000000,
    &ll_421_FileID,  0x80000000,      0x40000000,
    &ll_422_FileID,  0x80000000,      0x40000000,
    &ll_425_FileID,  0x80000000,      0x00000000,
    &ll_426_FileID,  0x80000000,      0x00000000,
    &ll_427_FileID,  0x80000000,      0x00000000,
    &ll_428_FileID,  0x80000000,      0x00000000,
    &ll_424_FileID,  D_ovl1_80392088, 0x00000000
};

s32 dFTKirbySubMotionDescsCount = sizeof(dFTKirbySubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
s32 dFTKirbySubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNKirbySubMotionDescs[] =
{
	&ll_1259_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_496_FileID, 0x80000000, 0x00000000
};
s32 dFTNKirbySubMotionDescsCount = sizeof(dFTNKirbySubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNKirbySubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

s32 D_ovl1_80392240[] =
{
	0xAC000006,
	ftMotionCommandWait(2),
	0xAC000000,
	ftMotionCommandReturn()
};

s32 D_ovl1_80392250[] =
{
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWait(16),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWait(30),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWait(100),
	ftMotionCommandGoto(D_ovl1_80392250)
};

s32 D_ovl1_80392294[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_80392298[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_8039229C[] =
{
	ftMotionPlayFGM(nSYAudioVoicePikachuFuraSleep),
	0xAC000006,
	0x00000000,
	0x00000000
};

s32 D_ovl1_803922AC[] =
{
	0xAC100006,
	ftMotionCommandWaitAsync(20),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWaitAsync(45),
	0xAC100000,
	ftMotionCommandWaitAsync(80),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWaitAsync(95),
	0xAC100006,
	ftMotionCommandWaitAsync(125),
	ftMotionCommandSubroutine(D_ovl1_80392240),
	ftMotionCommandWaitAsync(145),
	0xAC100000,
	ftMotionCommandEnd()
};

FTMotionDesc dFTPikachuSubMotionDescs[] =
{
	&ll_1957_FileID, D_ovl1_80392250, 0x00000000,
	&ll_476_FileID, D_ovl1_80392294, 0x80000000,
	&ll_477_FileID, D_ovl1_80392298, 0x00000000,
	&ll_478_FileID, D_ovl1_8039229C, 0x00000000,
	&ll_478_FileID, D_ovl1_8039229C, 0x00000000,
	&ll_479_FileID, 0x80000000, 0x00000000,
	&ll_1963_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_480_FileID, 0x80000000, 0x80000000,
	&ll_481_FileID, 0x80000000, 0x40000000,
	&ll_482_FileID, 0x80000000, 0x40000000,
	&ll_484_FileID, 0x80000000, 0x00000000,
	&ll_485_FileID, 0x80000000, 0x00000000,
	&ll_486_FileID, 0x80000000, 0x00000000,
	&ll_487_FileID, 0x80000000, 0x00000000,
	&ll_483_FileID, D_ovl1_803922AC, 0x00000000
};

s32 dFTPikachuSubMotionDescsCount = sizeof(dFTPikachuSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
s32 dFTPikachuSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000, 0x00000000 };

FTMotionDesc dFTNPikachuSubMotionDescs[] =
{
	&ll_1957_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_497_FileID, 0x80000000, 0x00000000
};
s32 dFTNPikachuSubMotionDescsCount = sizeof(dFTNPikachuSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNPikachuSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

s32 D_ovl1_80392480[] =
{
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(2),
	0xAC000005,
	0xAC100005,
	ftMotionCommandWait(4),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWait(2),
	0xAC000000,
	0xAC100000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 D_ovl1_803924B4[] =
{
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWait(90),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWait(10),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(D_ovl1_803924B4)
};

s32 D_ovl1_803924E0[] =
{
	ftMotionCommandWaitAsync(0),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(30),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(60),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandEnd()
};

s32 D_ovl1_80392508[] =
{
	ftMotionCommandWaitAsync(8),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(32),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(62),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(92),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandEnd()
};

s32 D_ovl1_80392548[] =
{
	0xAC000005,
	0xAC100005,
	ftMotionCommandWaitAsync(95),
	0xAC000004,
	0xAC100004,
	ftMotionCommandWaitAsync(108),
	0xAC000000,
	0xAC100000,
	ftMotionCommandWaitAsync(110),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWaitAsync(120),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandEnd()
};

s32 D_ovl1_80392584[] =
{
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(D_ovl1_80392480),
	ftMotionCommandWait(10),
	ftMotionCommandEnd()
};

FTMotionDesc dFTPurinSubMotionDescs[] =
{
	&ll_1492_FileID, D_ovl1_803924B4, 0x00000000,
	&ll_469_FileID, D_ovl1_803924E0, 0x00000000,
	&ll_470_FileID, D_ovl1_80392508, 0x00000000,
	&ll_471_FileID, D_ovl1_80392548, 0x00000000,
	&ll_471_FileID, D_ovl1_80392548, 0x00000000,
	&ll_472_FileID, D_ovl1_80392584, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_473_FileID, 0x80000000, 0x40000000,
	&ll_474_FileID, 0x80000000, 0x40000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_475_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000
};

s32 dFTPurinSubMotionDescsCount = sizeof(dFTPurinSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTPurinSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNPurinSubMotionDescs[] =
{
	&ll_1492_FileID, 0x80000000, 0x00000000
};
s32 dFTNPurinSubMotionDescsCount = sizeof(dFTNPurinSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000001

s32 D_ovl1_80392670[] =
{
	0xAC000001,
	ftMotionCommandWait(2),
	0xAC000002,
	ftMotionCommandWait(4),
	0xAC000001,
	ftMotionCommandWait(3),
	0xAC000000,
	ftMotionCommandWait(1),
	ftMotionCommandReturn()
};

s32 D_ovl1_80392694[] =
{
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(D_ovl1_80392670),
	ftMotionCommandWait(80),
	ftMotionCommandSetSlopeContour(0x0003),
	ftMotionCommandSubroutine(D_ovl1_80392670),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(D_ovl1_80392670),
	ftMotionCommandWait(80),
	ftMotionCommandGoto(D_ovl1_80392694)
};

s32 D_ovl1_803926C8[] =
{
	ftMotionCommandWaitAsync(8),
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandWaitAsync(27),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	0x98002C00,
	0x00000000,
	0xFFC40000,
	0x00000000,
	ftMotionCommandWaitAsync(36),
	ftMotionPlayFGM(nSYAudioFGMNessJump),
	ftMotionCommandWaitAsync(57),
	ftMotionPlayFGM(nSYAudioFGMNessLanding),
	0x98002C00,
	0x00000000,
	0xFFC40000,
	0x00000000,
	ftMotionCommandWaitAsync(86),
	ftMotionPlayFGM(nSYAudioFGMUnkSmallPing1),
	0xAC000003,
	ftMotionCommandWaitAsync(101),
	ftMotionPlayFGM(nSYAudioFGMUnkSmallPing1),
	ftMotionCommandEnd()
};

s32 D_ovl1_80392720[] =
{
	ftMotionCommandWaitAsync(100),
	0xAC000003,
	ftMotionCommandEnd()
};

s32 D_ovl1_8039272C[] =
{
	0xA0880001,
	0xAC000004,
	ftMotionCommandWaitAsync(31),
	0xAC000000,
	ftMotionCommandWaitAsync(52),
	0xAC000004,
	ftMotionCommandWaitAsync(81),
	0xAC000000,
	ftMotionCommandEnd()
};

s32 D_ovl1_80392750[] =
{
	ftMotionCommandEnd()
};

s32 D_ovl1_80392754[] =
{
	0xA0800002,
	0xA0500002,
	ftMotionCommandEnd()
};

FTMotionDesc dFTNessSubMotionDescs[] =
{
	&ll_1664_FileID, D_ovl1_80392694, 0x00000000,
	&ll_436_FileID, D_ovl1_803926C8, 0x00000000,
	&ll_437_FileID, D_ovl1_80392720, 0x80000000,
	&ll_438_FileID, D_ovl1_8039272C, 0x00000000,
	&ll_438_FileID, D_ovl1_8039272C, 0x00000000,
	&ll_439_FileID, D_ovl1_80392750, 0x00000000,
	&ll_1670_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_440_FileID, 0x80000000, 0x40000000,
	&ll_441_FileID, 0x80000000, 0x40000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_442_FileID, D_ovl1_80392754, 0x00000000,
	0x00000000, 0x80000000, 0x00000000
};

s32 dFTNessSubMotionDescsCount = sizeof(dFTNessSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNessSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

FTMotionDesc dFTNNessSubMotionDescs[] =
{
	&ll_1664_FileID, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_498_FileID, 0x80000000, 0x00000000
};
s32 dFTNNessSubMotionDescsCount = sizeof(dFTNNessSubMotionDescs)/sizeof(FTMotionDesc); // 0x0000000F
s32 dFTNNessSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000 };

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
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	&ll_2098_FileID, 0x80000000, 0x80000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	0x00000000, 0x80000000, 0x00000000,
	&ll_461_FileID, 0x80000000, 0x80000000,
	&ll_458_FileID, 0x80000000, 0x80000000,
	&ll_459_FileID, D_ovl1_803928E0, 0x80000000,
	&ll_460_FileID, 0x80000000, 0x80000000
};
s32 dFTBossSubMotionDescsCount = sizeof(dFTBossSubMotionDescs)/sizeof(FTMotionDesc); // 0x00000012
s32 dFTBossSubMotionDescsCount_pad[] = { 0x00000000, 0x00000000, 0x00000000 };
