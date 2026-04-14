/* ftMotionCommand script data for relocData file 205 (MMarioMainMotion) */
/* File size: 320 bytes (0x140) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x0000[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(118),
	ftMotionCommandWaitAsync(40),
	ftMotionPlayFGM(118),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0000),
};
#else
u32 dMMarioMainMotion_0x0000[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(122),
	ftMotionCommandWaitAsync(40),
	ftMotionPlayFGM(122),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0000),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x001C[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(118),
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(118),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x001C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(118),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x001C[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(122),
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(122),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x001C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(122),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x0060[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0060),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x0060[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0060),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x00B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x00B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x00F0[] = {
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x00F0[] = {
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x0108[] = {
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x0108[] = {
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

#if defined(REGION_JP)
u32 dMMarioMainMotion_0x0120[] = {
	ftMotionPlayFGM(118),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#else
u32 dMMarioMainMotion_0x0120[] = {
	ftMotionPlayFGM(122),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};
#endif

u32 dMMarioMainMotion_0x0138[] = {
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x013C[] = {
	ftMotionCommandEnd(),
};
