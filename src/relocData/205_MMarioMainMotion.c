/* ftMotionCommand script data for relocData file 205 (MMarioMainMotion) */
/* File size: 320 bytes (0x140) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>

u32 dMMarioMainMotion_0x0000[] = {
	ftMotionCommandWaitAsync(10),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandWaitAsync(40),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0000),
};

u32 dMMarioMainMotion_0x001C[] = {
	ftMotionCommandWaitAsync(10),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandWaitAsync(30),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x001C),
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0060[] = {
	ftMotionCommandWaitAsync(2),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0060),
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00B8[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00F0[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0108[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0120[] = {
#if defined(REGION_JP)
	ftMotionPlayFGM(118),
#else
	ftMotionPlayFGM(122),
#endif
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0138[] = {
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x013C[] = {
	ftMotionCommandEnd(),
};
