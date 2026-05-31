/* ftMotionCommand script data for relocData file 205 (MMarioMainMotion) */
/* File size: 320 bytes (0x140) */

#include "relocdata_types.h"
#include <ft/ftdef.h>
#include <ft/fttypes.h>
#include <ef/efdef.h>
ftMotionCommand dMMarioMainMotion_Walk2[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandWaitAsync(40),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_Walk2),
};

ftMotionCommand dMMarioMainMotion_Walk3[] = {
	ftMotionCommandWaitAsync(10),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandWaitAsync(30),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_Walk3),
};

/* Dash anim — was dMMarioMainMotion_Walk3 + 0x1C. */
ftMotionCommand dMMarioMainMotion_Dash[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandLoopBegin(2),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -120, 0, 60, 0),
	ftMotionCommandWait(6),
	ftMotionCommandLoopEnd(),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_Run[] = {
	ftMotionCommandWaitAsync(2),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandWait(15),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, 60, 0, 0, 0),
	ftMotionCommandPauseScript(),
	ftMotionCommandGoto(dMMarioMainMotion_Run),
};

/* LandingAirX tail — was dMMarioMainMotion_Run + 0x3C. */
ftMotionCommand dMMarioMainMotion_LandingAirXTail[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustLight, 0, 0, 0, -60, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_LandingAirX_0x00B8[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_LandingAirX_0x00D4[] = {
	ftMotionCommandSetSlopeContour(3),
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_LandingAirF[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_LandingAirB[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_JumpB[] = {
	ftMotionPlayFGM(nSYAudioFGMMMarioFoot),
	ftMotionCommandEffect(0, nEFKindDustHeavyDouble, 0, 0, 0, 0, 0, 0, 0),
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_JumpAerial[] = {
	ftMotionCommandEnd(),
};

ftMotionCommand dMMarioMainMotion_0x013C[] = {
	ftMotionCommandEnd(),
};
