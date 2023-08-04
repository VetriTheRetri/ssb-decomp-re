#include "sys/thread6.h"

#include "sys/main.h"
#include "sys/thread3.h"

#include <macros.h>
#include <missing_libultra.h>
#include <ssb_types.h>

#include <PR/os.h>
#include <PR/ultratypes.h>

struct ControllerInfo {
    /* 0x00 */ u16 unk00; // contpad button
    /* 0x02 */ u16 unk02; // new button presses
    /* 0x04 */ u16 unk04; // pressed buttons ( |= .02)
    /* 0x06 */ u16 unk06; // moved new presses? buttons to handle?
    /* 0x08 */ u16 unk08; // all buttons? ( |= .06)
    /* 0x0A */ u16 unk0A; // button releases
    /* 0x0C */ u16 unk0C; // released buttons ( |= .0A)
    /* 0x0E */ s8 unk0E;  // stick x
    /* 0x0F */ s8 unk0F;  // stick y
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ s32 unk18; // some sort of countdown
    /* 0x1C */ u8 unk1C;  // cont status errno
    /* 0x1D */ u8 unk1D;  // cont status status
};                        // size = 0x20

enum ContEventType {
    CONT_EVENT_READ_CONT_DATA = 1,
    CONT_EVENT_UPDATE_GLOBAL_DATA,
    CONT_EVENT_UNK_3,
    CONT_EVENT_SCHEDULE_READ_CONT_DATA,
    CONT_EVENT_MOTOR,
    CONT_EVENT_SET_STATUS_DELAY
};

struct ControllerEvent {
    /* 0x00 */ enum ContEventType type;
    /* 0x04 */ OSMesg mesg;
    /* 0x08 */ OSMesgQueue *cbQueue;
}; // size = 0x0C

struct ContEvtType3 {
    /* 0x00 */ struct ControllerEvent evt;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 unk10;
}; // size = 0x14

struct ContSchedReadEvt {
    /* 0x00 */ struct ControllerEvent evt;
    /* 0x0C */ s32 scheduleRead;
}; // size = 0x10

enum MotorCmd { MOTOR_CMD_INIT, MOTOR_CMD_START, MOTOR_CMD_STOP };

struct ContMotorEvt {
    /* 0x00 */ struct ControllerEvent evt;
    /* 0x0C */ s32 contID;
    /* 0x10 */ enum MotorCmd cmd;
}; // size = 0x14

struct ContStatusDelayEvt {
    /* 0x00 */ struct ControllerEvent evt;
    /* 0x0C */ s32 delay;
}; // size = 0x10

struct Unk80045268 {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04; // event?
    /* 0x08 */ s32 unk08; // controller number
    /* 0x0C */ OSMesgQueue *unk0C;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
}; // size = 0x18

OSMesgQueue sInitQueue; ///< Queue for OS controller Init, Status, and Read
OSMesg sInitMesg[1];    ///< Message buffer for OS controller Init, Status, and Read
struct MqListNode D_80045110;
OSMesg sContEvtMesgs[7];     // used in MqList D_80045110 [80045118]
OSMesgQueue sContEventQueue; // queue for struct ControllerEvent callbacks [80045138]
OSMesg D_80045150[MAXCONTROLLERS];
OSMesgQueue D_80045160; // controller mesgqueue? for waiting for 0 to 1+ controllers?
OSContStatus sContStatus[MAXCONTROLLERS]; // 80045178
OSContPad sContData[MAXCONTROLLERS];      // 80045188
u32 D_800451A0;
s8 D_800451A4[MAXCONTROLLERS];
struct ControllerInfo sContInfo[MAXCONTROLLERS];   // 800451A8
struct ControllerInput gContInput[MAXCONTROLLERS]; // 80045228
u32 gUpdateContData;                               // bool [80045250]
struct ControllerEvent *sDelayedContUpdate;        // 80045254
/// bool [80045258] if true, always update controller data when a thread6 loop runs
u32 sReadContData;
// [8004525C] number of events (or frames?) to wait until perfomring OSContStatus update
u32 sStatusUpdateDelay;
/// [80045260] remaining count of controller events (or frames) until OSContStatus update
u32 sLeftUntilStatus;

struct Unk80045268 D_80045268[MAXCONTROLLERS];
OSPfs sMotorPfs[MAXCONTROLLERS]; // 800452C8
UNUSED u32 unref80045468;
struct ControllerInput D_80045470;
UNUSED u32 unref80045480[2];

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunknown-pragmas"

void func_80003C00(void);
#ifdef NON_MATCHING
void func_80003C00(void) {
    s32 v0;
    s32 v1;
    // s32 a0;
    s32 a1;
    s32 a2;

    for (v0 = 0, v1 = 0; v1 < 4; v0++, v1++) {
        if (sContInfo[v0].unk1C == 0) { D_800451A4[v0] = v1; }
        // L80003C34
    }
    // 80003C40
    D_800451A0 = v0;

    if (v0 < 4) {
        v1 = v0;
        a2 = (4 - v0) & 3;
        a1 = a2 + v0;

        if (a2 != 0) {
            do { D_800451A4[v1] = -1; } while (v1 != a1);
        }

        // 80003C88
        if (v1 == 4) { return; }
        // L80003C8C
        for (; v1 < 4; v1++) { D_800451A4[v1] = -1; }
    }

    // L80003CBC
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread6/func_80003C00.s")
#endif

// func_80003CC4
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

// func_80003DD4
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

// func_80003F98
void update_global_contdata(void);
#ifdef NON_MATCHING
void update_global_contdata(void) {
    s32 i;

    for (i = 0; i < MAXCONTROLLERS; i++) {
        if (!sContInfo[i].unk1C) {
            gContInput[i].unk00 = sContInfo[i].unk00;
            gContInput[i].unk02 = sContInfo[i].unk04;
            gContInput[i].unk06 = sContInfo[i].unk0C;
            gContInput[i].unk04 = sContInfo[i].unk08;
            gContInput[i].unk08 = sContInfo[i].unk0E;
            gContInput[i].unk09 = sContInfo[i].unk0F;

            sContInfo[i].unk08 = 0;
            sContInfo[i].unk0C = 0;
            sContInfo[i].unk04 = 0;
        }
        // L80004014
    }
    // 8000401C
    func_80003C00();
    D_80045470.unk02 = gContInput[D_800451A4[0]].unk02;
    D_80045470.unk00 = gContInput[D_800451A4[0]].unk00;
    D_80045470.unk04 = gContInput[D_800451A4[0]].unk04;
    D_80045470.unk06 = gContInput[D_800451A4[0]].unk06;
    D_80045470.unk08 = gContInput[D_800451A4[0]].unk08;
    D_80045470.unk09 = gContInput[D_800451A4[0]].unk09;

    gUpdateContData = FALSE;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread6/update_global_contdata.s")
#endif

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
    // 80004150
    osCreateMesgQueue(&D_80045160, D_80045150, ARRAY_COUNT(D_80045150));
    // test = 5;
    for (i = 0; i < MAXCONTROLLERS; i++) {
        D_80045268[i].unk08 = i;
        D_80045268[i].unk00 = 0;
        D_80045268[i].unk04 = test; // OS_EVENT_SI?
        D_80045268[i].unk0C = &D_80045160;
    }
    // 8000419C
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

        gContInput[i].unk04 = 0;
        gContInput[i].unk02 = 0;
        gContInput[i].unk00 = 0;

        // gContInput[i].unk09 = 0;
        gContInput[i].unk08 = gContInput[i].unk09 = 0;
    }

    func_80003C00();
    gUpdateContData    = FALSE;
    sDelayedContUpdate = NULL;
    sReadContData      = TRUE;
    sLeftUntilStatus = sStatusUpdateDelay = 1;
}
#else
#pragma GLOBAL_ASM("game/nonmatching/sys/thread6/initialize_controllers.s")
#endif

// func_80004284
void dispatch_contevt(struct ControllerEvent *evt) {
    OSMesg mesg[1];    // sp34
    OSMesgQueue queue; // sp1C

    osCreateMesgQueue(&queue, mesg, ARRAY_COUNT(mesg));
    evt->mesg    = (OSMesg)1;
    evt->cbQueue = &queue;

    osSendMesg(&sContEventQueue, (OSMesg)evt, OS_MESG_NOBLOCK);
    osRecvMesg(&queue, NULL, OS_MESG_BLOCK);
}

void schedule_contread(void) {
    struct ControllerEvent evt;

    evt.type = CONT_EVENT_READ_CONT_DATA;
    dispatch_contevt(&evt);
}

void update_contdata(void) {
    struct ControllerEvent evt;

    evt.type = CONT_EVENT_UPDATE_GLOBAL_DATA;
    dispatch_contevt(&evt);
}

void unref_80004338(s32 arg0, s32 arg1) {
    struct ContEvtType3 data;

    data.evt.type = CONT_EVENT_UNK_3;
    data.unk0C    = arg0;
    data.unk10    = arg1;
    dispatch_contevt(&data.evt);
}

// func_80004368
void enable_auto_contread(s32 shouldSchedule) {
    struct ContSchedReadEvt data;

    data.evt.type     = CONT_EVENT_SCHEDULE_READ_CONT_DATA;
    data.scheduleRead = shouldSchedule;
    dispatch_contevt(&data.evt);
}

// func_80004394
void set_contstatus_delay(s32 delay) {
    struct ContStatusDelayEvt data;

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

// func_800044D4
void handle_contevt(struct ControllerEvent *evt) {
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
                sContInfo[i].unk10 = ((struct ContEvtType3 *)evt)->unk0C;
                sContInfo[i].unk14 = ((struct ContEvtType3 *)evt)->unk10;
            }

            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_SCHEDULE_READ_CONT_DATA:
        {
            sReadContData = ((struct ContSchedReadEvt *)evt)->scheduleRead;
            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_SET_STATUS_DELAY:
        {
            sStatusUpdateDelay = ((struct ContStatusDelayEvt *)evt)->delay;
            if (evt->cbQueue != NULL) { osSendMesg(evt->cbQueue, evt->mesg, OS_MESG_NOBLOCK); }
            break;
        }
        case CONT_EVENT_MOTOR:
        {
            // why
            if (!sContInfo[((struct ContMotorEvt *)evt)->contID].unk1C
                && (sContInfo[((struct ContMotorEvt *)evt)->contID].unk1D & CONT_CARD_ON)) {
                s32 id     = ((struct ContMotorEvt *)evt)->contID;
                OSPfs *pfs = &sMotorPfs[id];

                switch (((struct ContMotorEvt *)evt)->cmd) {
                    case MOTOR_CMD_INIT: osMotorInit(&sInitQueue, pfs, id); break;
                    case MOTOR_CMD_START:
                        if (!D_80045020) { osMotorStart(pfs); }
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
    func_800009D8(&D_80045110, &sContEventQueue, sContEvtMesgs, ARRAY_COUNT(sContEvtMesgs));
    osSendMesg(&gThreadingQueue, (OSMesg)1, OS_MESG_NOBLOCK);

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
            handle_contevt((struct ControllerEvent *)mesg);
        }
    }
}

#pragma GCC diagnostic pop
