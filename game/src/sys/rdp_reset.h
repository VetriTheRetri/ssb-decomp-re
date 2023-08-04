#ifndef SYS_RDP_RESET_H
#define SYS_RDP_RESET_H

#include <PR/mbi.h>
#include <PR/ultratypes.h>

extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);
extern void setup_viewport(Vp *vp);
extern void set_scissor_callback(void (*cb)(Gfx **));
extern void reset_rdp_settings(Gfx **dl);

#endif /* SYS_RDP_RESET_H */
