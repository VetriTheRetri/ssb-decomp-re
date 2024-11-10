#include "thread6.h"

#include <sys/main.h>
#include <sys/thread3.h>
#include <macros.h>
#include <missing_libultra.h>
#include <ssb_types.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

// 0x800450F0
OSMesgQueue sInitQueue; // Queue for OS controller Init, Status, and Read

// 0x80045108
OSMesg sInitMesg[1]; // Message buffer for OS controller Init, Status, and Read

// 0x80045110
SCClient D_80045110;

// 0x80045118
OSMesg sContEvtMesgs[7]; // used in MqList D_80045110

// 0x80045138
OSMesgQueue sContEventQueue; // queue for ControllerEvent callbacks

// 0x80045150
OSMesg D_80045150[MAXCONTROLLERS];

// 0x80045160
OSMesgQueue D_80045160; // controller mesgqueue? for waiting for 0 to 1+ controllers?

// 0x80045178
OSContStatus sContStatus[MAXCONTROLLERS];

// 0x80045188
OSContPad sContData[MAXCONTROLLERS];

// 0x800451A0
u32 gSYControllerConnectedNum;

// 0x800451A4
s8 gPlayerControllerPortStatuses[MAXCONTROLLERS];

// 0x800451A8
ControllerInfo sContInfo[MAXCONTROLLERS];

// 0x80045228
SYController gSYControllerDevices[MAXCONTROLLERS];

// 0x80045250
sb32 gUpdateContData;

// 0x80045254
ControllerEvent *sDelayedContUpdate;

// 0x80045258
sb32 sReadContData; // if true, always update controller data when a thread6 loop runs

// 0x8004525C
u32 sStatusUpdateDelay; // number of events (or frames?) to wait until perfomring OSContStatus update

/// 0x80045260
u32 sLeftUntilStatus; // remaining count of controller events (or frames) until OSContStatus update

// 0x80045268
Unk80045268 D_80045268[MAXCONTROLLERS];

// 0x800452C8
OSPfs sMotorPfs[MAXCONTROLLERS];

// 0x80045468
UNUSED u32 unref80045468[2];

// 0x80045470
SYController _gSysController; // needs to be plugged to linker manually (linker_constants.txt) otherwise this file doesn't match


// 0x80003C00
void update_controller_indices(void) {
    s32 v0 = 0;
    s32 i;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (sContInfo[i].unk1C == 0) {
            gPlayerControllerPortStatuses[v0++] = i;
        }
    }
    gSYControllerConnectedNum = v0;

    for (i = v0; i < MAXCONTROLLERS; i++) {
        gPlayerControllerPortStatuses[i] = -1;
    }
}

// 0x80003CC4
void update_controller_status(void) {
    s32 i;

    osContStartQuery(&sInitQueue);
    osRecvMesg(&sInitQueue, NULL, OS_MESG_BLOCK);
    osContGetQuery(sContStatus);

    for (i = 0; i != MAXCONTROLLERS; i++) {
        if (sContStatus[i].errno == 0 && sContStatus[i].status & CONT_CARD_ON) {
            if (!(sContInfo[i].unk1D & CONT_CARD_ON) || sContInfo[i].unk1C) {
                osMotorInit(&sInitQueue, &sMotorPfs[i], i);
            }
        }
        sContInfo[i].unk1C = sContStatus[i].errno;
        sContInfo[i].unk1D = sContStatus[i].status;
    }
}

// 0x80003DD4
void read_controller_data(void) {
    s32 i;

    osContStartReadData(&sInitQueue);
    osRecvMesg(&sInitQueue, NULL, OS_MESG_BLOCK);
    osContGetReadData(sContData);

    for (i = 0; i != MAXCONTROLLERS; i++) {
        if (!sContData[i].errno && (sContStatus[i].status & CONT_CARD_ON) && sContInfo[i].unk1C) {
            osMotorInit(&sInitQueue, &sMotorPfs[i], i);
        }
        // L80003EA8
        sContInfo[i].unk1C = sContData[i].errno;
        if ((sContData[i].errno & 0xFF) == 0) {
            sContInfo[i].unk02 = (sContData[i].button ^ sContInfo[i].unk00) & sContData[i].button;
            sContInfo[i].unk0A = (sContData[i].button ^ sContInfo[i].unk00) & sContInfo[i].unk00;

            if (sContData[i].button ^ sContInfo[i].unk00) {
                // there is a new press
                sContInfo[i].unk06 = sContInfo[i].unk02;
                sContInfo[i].unk18 = sContInfo[i].unk10;
            } else {
                // no new button presses
                sContInfo[i].unk18--;
                if (sContInfo[i].unk18 > 0) {
                    sContInfo[i].unk06 = 0;
                } else {
                    // L80003F00
                    sContInfo[i].unk06 = sContData[i].button;
                    sContInfo[i].unk18 = sContInfo[i].unk14;
                }
            }
            // L80003F10
            sContInfo[i].unk00 = sContData[i].button;
            sContInfo[i].unk0E = sContData[i].stick_x;
            sContInfo[i].unk0F = sContData[i].stick_y;
            sContInfo[i].unk04 |= sContInfo[i].unk02;
            sContInfo[i].unk0C |= sContInfo[i].unk0A;
            sContInfo[i].unk08 |= sContInfo[i].unk06;
        }
        // L80003F50
    }
    gUpdateContData = TRUE;
}

// 0x80003F98
void update_global_contdata(void)
{
    s32 i;
    SYController *players, *sys = &gSysController;

    for (i = 0; i < 4; i++)
    {
        if (sContInfo[i].unk1C == FALSE)
        {
            gSYControllerDevices[i].button_hold = sContInfo[i].unk00;
            gSYControllerDevices[i].button_tap = sContInfo[i].unk04;
            gSYControllerDevices[i].button_release = sContInfo[i].unk0C;
            gSYControllerDevices[i].button_update = sContInfo[i].unk08;
            gSYControllerDevices[i].stick_range.x = sContInfo[i].unk0E;
            gSYControllerDevices[i].stick_range.y = sContInfo[i].unk0F;

            sContInfo[i].unk04 = sContInfo[i].unk08 = sContInfo[i].unk0C = 0;
        }
    }
    update_controller_indices();

    players = &gSYControllerDevices[gPlayerControllerPortStatuses[0]];

    sys->button_tap = players->button_tap;
    sys->button_hold = players->button_hold;
    sys->button_update = players->button_update;
    sys->button_release = players->button_release;
    sys->stick_range.x = players->stick_range.x;
    sys->stick_range.y = players->stick_range.y;

    gUpdateContData = FALSE;
}

// initialize controllers
void initialize_controllers(void);
#ifdef NON_MATCHING
/* Doesn't match due to the constant "5" either:
    (a) if literal "5" is used, it is not held in register a2 throughout the function
    (b) if a variable set to 5 is used, then the stack is off and the "5" is stored
        in the wrong register (a1)
*/
void initialize_controllers(void) {
    UNUSED s32 pad;
    s32 test = 5;
    s32 i;
    u8 pattern; // sp43

    osCreateMesgQueue(&sInitQueue, sInitMesg, ARRAY_COUNT(sInitMesg));
    osSetEventMesg(OS_EVENT_SI, &sInitQueue, (OSMesg)1);
    osContInit(&sInitQueue, &pattern, sContStatus);

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (sContStatus[i].status & CONT_CARD_ON) { osMotorInit(&sInitQueue, &sMotorPfs[i], i); }
    }
    // 0x80004150
    osCreateMesgQueue(&D_80045160, D_80045150, ARRAY_COUNT(D_80045150));
    // test = 5;
    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80045268[i].unk08 = i;
        D_80045268[i].unk00 = 0;
        D_80045268[i].unk04 = test; // OS_EVENT_SI?
        D_80045268[i].unk0C = &D_80045160;
    }
    // 0x8000419C
    for (i = 0; i < MAXCONTROLLERS; i++) {
        sContData[i].button = 0;

        sContInfo[i].unk06 = 0;
        sContInfo[i].unk02 = 0;
        sContInfo[i].unk00 = 0;
        sContInfo[i].unk0F = 0;
        sContInfo[i].unk18 = 30;
        sContInfo[i].unk10 = 30;
        sContInfo[i].unk14 = test;

        sContInfo[i].unk0E = sContInfo[i].unk0F;
        sContInfo[i].unk1C = sContStatus[i].errno;
        sContInfo[i].unk1D = sContStatus[i].status;

        gSYControllerDevices[i].unk04 = 0;
        gSYControllerDevices[i].unk02 = 0;
        gSYControllerDevices[i].unk00 = 0;

        // gSYControllerDevices[i].unk09 = 0;
        gSYControllerDevices[i].unk08 = gSYControllerDevices[i].unk09 = 0;
    }

    update_controller_indices();
    gUpdateContData    = FALSE;
    sDelayedContUpdate = NULL;
    sReadContData      = TRUE;
    sLeftUntilStatus = sStatusUpdateDelay = 1;
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/sys/thread6/initialize_controllers.s")
#endif

// 0x80004284
void dispatch_contevt(ControllerEvent *evt) {
    OSMesg mesg[1];    // sp34
    OSMesgQueue queue; // sp1C

    osCreateMesgQueue(&queue, mesg, ARRAY_COUNT(mesg));
    evt->mesg    = (OSMesg)1;
    evt->cbQueue = &queue;

    osSendMesg(&sContEventQueue, (OSMesg)evt, OS_MESG_NOBLOCK);
    osRecvMesg(&queue, NULL, OS_MESG_BLOCK);
}

void schedule_contread(void) {
    ControllerEvent evt;

    evt.type = CONT_EVENT_READ_CONT_DATA;
    dispatch_contevt(&evt);
}

void update_contdata(void) {
    ControllerEvent evt;

    evt.type = CONT_EVENT_UPDATE_GLOBAL_DATA;
    dispatch_contevt(&evt);
}

void unref_80004338(s32 arg0, s32 arg1) {
    ContEvtType3 data;

    data.evt.type = CONT_EVENT_UNK_3;
    data.unk0C    = arg0;
    data.unk10    = arg1;
    dispatch_contevt(&data.evt);
}

// 0x80004368
void enable_auto_contread(s32 shouldSchedule) {
    ContSchedReadEvt data;

    data.evt.type     = CONT_EVENT_SCHEDULE_READ_CONT_DATA;
    data.scheduleRead = shouldSchedule;
    dispatch_contevt(&data.evt);
}

// 0x80004394
void set_contstatus_delay(s32 delay) {
    ContStatusDelayEvt data;

    data.evt.type = CONT_EVENT_SET_STATUS_DELAY;
    data.delay    = delay;
    dispatch_contevt(&data.evt);
}

void func_800043C0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (D_80045268[i].unk00 == 0) { break; }
    }

    if (i == MAXCONTROLLERS) {
        osRecvMesg(&D_80045160, (OSMesg *)&i, OS_MESG_BLOCK);
    } else {
        D_80045268[i].unk00 = 1;
    }
    D_80045268[i].unk10 = arg0;
    D_80045268[i].unk14 = arg1;
    osSendMesg(&sContEventQueue, (OSMesg *)&D_80045268[i].unk04, OS_MESG_NOBLOCK);
}

void func_80004474(s32 arg0) {
    func_800043C0(arg0, 1);
}

void func_80004494(s32 arg0) {
    func_800043C0(arg0, 2);
}

void func_800044B4(s32 arg0) {
    func_800043C0(arg0, 0);
}

// 0x800044D4
void handle_contevt(ControllerEvent *evt) {
    switch (evt->type) {
        case CONT_EVENT_READ_CONT_DATA:
        {
            read_controller_data();
            update_global_contdata();
            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_UPDATE_GLOBAL_DATA:
        {
            if (gUpdateContData) {
                update_global_contdata();
                if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            } else {
                sDelayedContUpdate = evt;
            }
            break;
        }
        case CONT_EVENT_UNK_3:
        {
            s32 i;
            for (i = 0; i < MAXCONTROLLERS; i++) {
                sContInfo[i].unk10 = ((ContEvtType3 *)evt)->unk0C;
                sContInfo[i].unk14 = ((ContEvtType3 *)evt)->unk10;
            }

            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_SCHEDULE_READ_CONT_DATA:
        {
            sReadContData = ((ContSchedReadEvt *)evt)->scheduleRead;
            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_SET_STATUS_DELAY:
        {
            sStatusUpdateDelay = ((ContStatusDelayEvt *)evt)->delay;
            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_MOTOR:
        {
            // why
            if (!sContInfo[((ContMotorEvt *)evt)->contID].unk1C
                && (sContInfo[((ContMotorEvt *)evt)->contID].unk1D & CONT_CARD_ON)) {
                s32 id     = ((ContMotorEvt *)evt)->contID;
                OSPfs *pfs = &sMotorPfs[id];

                switch (((ContMotorEvt *)evt)->cmd) {
                    case MOTOR_CMD_INIT: osMotorInit(&sInitQueue, pfs, id); break;
                    case MOTOR_CMD_START:
                        if (!D_80045020_40830) { osMotorStart(pfs); }
                        break;
                    case MOTOR_CMD_STOP: osMotorStop(pfs); break;
                }
            }

            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
    }
}

void thread6_controllers(UNUSED void *arg) {
    OSMesg mesg;

    initialize_controllers();
    scAddClient(&D_80045110, &sContEventQueue, sContEvtMesgs, ARRAY_COUNT(sContEvtMesgs));
    osSendMesg(&sSYMainThreadingQueue, (OSMesg)1, OS_MESG_NOBLOCK);

    while (TRUE) {
        osRecvMesg(&sContEventQueue, &mesg, OS_MESG_BLOCK);
        if ((intptr_t)mesg == 1) {
            if (sLeftUntilStatus != 0) { sLeftUntilStatus--; }

            if (sLeftUntilStatus == 0) {
                update_controller_status();
                sLeftUntilStatus = sStatusUpdateDelay;
            }

            if (!sReadContData) { continue; }
            read_controller_data();

            if (sDelayedContUpdate == NULL) { continue; }
            update_global_contdata();
            if (sDelayedContUpdate->cbQueue != NULL) {
                osSendMesg(sDelayedContUpdate->cbQueue, sDelayedContUpdate->mesg, OS_MESG_NOBLOCK);
            }
            sDelayedContUpdate = NULL;
        } else {
            handle_contevt((ControllerEvent *)mesg);
        }
    }
}