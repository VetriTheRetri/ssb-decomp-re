#ifndef SYS_RDP_RESET_H
#define SYS_RDP_RESET_H

#include <PR/mbi.h>
#include <PR/ultratypes.h>

extern void syRdpSetViewport(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern void syRdpSetDefaultViewport(Vp *vp);
extern void syRdpSetFuncLights(void (*cb)(Gfx **));
extern void syRdpResetSettings(Gfx **dl);

#endif /* SYS_RDP_RESET_H */
