/* ftMotionCommand script data for relocData file 205 (MMarioMainMotion) */
/* File size: 320 bytes (0x140) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#if defined(REGION_JP)

u8 dMMarioMainMotion[320] = {
	#include <MMarioMainMotion/jp_raw.data.inc.c>
};

#else  /* REGION_US */

u32 dMMarioMainMotion_0x0000[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandWaitAsync(40),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0000),
};

u32 dMMarioMainMotion_0x001C[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x001C),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0060[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_0x0060),
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 11, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x00F0[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0108[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0120[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, 13, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x0138[] = {
	ftMotionCommandEnd(),
};

u32 dMMarioMainMotion_0x013C[] = {
	ftMotionCommandEnd(),
};

#endif  /* REGION_US */
