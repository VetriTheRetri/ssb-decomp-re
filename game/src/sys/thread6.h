#ifndef SYS_THREAD_6_H
#define SYS_THREAD_6_H

#include <PR/os.h>
#include <PR/ultratypes.h>
#include <include/ssb_types.h>

struct ControllerInput {
    /* 0x00 */ u16 unk00; // button
    /* 0x02 */ u16 unk02; // new button presses?
    /* 0x04 */ u16 unk04; // buttons to handle?
    /* 0x06 */ u16 unk06; // released buttons?
    /* 0x08 */ s8 unk08;  // stick_x
    /* 0x09 */ s8 unk09;  // stick_y
};                        // size = 0x0A

typedef struct gControllerInput {
    /* 0x00 */ u16 button_press; // button
    /* 0x02 */ u16 button_new; // new button presses?
    /* 0x04 */ u16 button_update; // buttons to handle?
    /* 0x06 */ u16 button_release; // released buttons?
    Vec2b stick_range;

} gControllerInput;                        // size = 0x0A

extern u32 D_800451A0;
extern u32 gUpdateContData;
extern s8 D_800451A4[MAXCONTROLLERS];
extern struct ControllerInput gContInput[MAXCONTROLLERS];
extern struct ControllerInput D_80045470;

extern void schedule_contread(void);
extern void update_contdata(void);
extern void enable_auto_contread(s32 shouldSchedule);
extern void set_contstatus_delay(s32 delay);
extern void func_80004474(s32 arg0);
extern void func_80004494(s32 arg0);
extern void func_800044B4(s32 arg0);
extern void thread6_controllers(void *arg);

#endif /* SYS_THREAD_6_H */
