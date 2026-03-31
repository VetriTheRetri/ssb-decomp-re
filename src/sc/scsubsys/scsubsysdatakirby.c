#include <ft/fttypes.h>
#include <sc/scsubsys/scsubsys.h>
#include <reloc_data.h>

s32 dFTKirbyOpeningBlinkScript[] =
{
	0xAC000008,
	ftMotionCommandWait(3),
	0xAC000000,
	ftMotionCommandReturn()
};

s32 dFTKirbyOpeningWaitScript[] =
{
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(80),
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(140),
	0xAC000005,
	ftMotionCommandWait(80),
	0xAC000000,
	ftMotionCommandWait(70),
	ftMotionCommandGoto(dFTKirbyOpeningWaitScript)
};

s32 dFTKirbyOpeningEntry1Script[] =
{
	ftMotionCommandWaitAsync(158),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 dFTKirbyOpeningEntry2Script[] =
{
	ftMotionCommandWaitAsync(158),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 dFTKirbyOpeningEntry3Script[] =
{
	ftMotionCommandWaitAsync(120),
	0xAC000005,
	ftMotionCommandEnd()
};

s32 dFTKirbyOpeningActionScript[] =
{
	0xAC000005,
	ftMotionCommandEnd()
};

s32 dFTKirbyOpeningLoopScript[] =
{
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(0x003C),
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(20),
	ftMotionCommandSubroutine(dFTKirbyOpeningBlinkScript),
	ftMotionCommandWait(0x003C),
	ftMotionCommandGoto(dFTKirbyOpeningLoopScript)
};

FTMotionDesc dFTKirbySubMotionDescs[] =
{
    &ll_1259_FileID, dFTKirbyOpeningWaitScript, 0x00000000,
    &ll_416_FileID,  dFTKirbyOpeningEntry1Script, 0x80000000,
    &ll_417_FileID,  dFTKirbyOpeningEntry2Script, 0x80000000,
    &ll_418_FileID,  dFTKirbyOpeningEntry3Script, 0x00000000,
    &ll_418_FileID,  dFTKirbyOpeningEntry3Script, 0x00000000,
    &ll_419_FileID,  dFTKirbyOpeningActionScript, 0x00000000,
    &ll_423_FileID,  0x80000000,      0x00000000,
    0x00000000,      0x80000000,      0x00000000,
    &ll_420_FileID,  0x80000000,      0x80000000,
    &ll_421_FileID,  0x80000000,      0x40000000,
    &ll_422_FileID,  0x80000000,      0x40000000,
    &ll_425_FileID,  0x80000000,      0x00000000,
    &ll_426_FileID,  0x80000000,      0x00000000,
    &ll_427_FileID,  0x80000000,      0x00000000,
    &ll_428_FileID,  0x80000000,      0x00000000,
    &ll_424_FileID,  dFTKirbyOpeningLoopScript, 0x00000000
};

s32 dFTKirbySubMotionDescsCount = sizeof(dFTKirbySubMotionDescs)/sizeof(FTMotionDesc); // 0x00000010
