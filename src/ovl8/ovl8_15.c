#include "common.h"
#include <sys/develop.h>

typedef struct dbUnknown15_1 {
    s32 dbUnknown15_1_0x0;
    s32 dbUnknown15_1_0x4;
    Vec2h dbUnknown17_2_0x8;
} dbUnknown15_1;

extern db4Bytes D_ovl8_80389F4C;
extern db4Bytes D_ovl8_80389F50;
extern s32 D_8038EFCC_1AB81C;

extern sb32 func_ovl8_803718FC();
extern sb32 func_ovl8_80371930();
extern sb32 func_ovl8_80371960();
extern sb32 func_ovl8_80371968();
extern sb32 func_ovl8_80371970();
extern sb32 func_ovl8_80371978();
extern sb32 func_ovl8_80371980();
extern sb32 func_ovl8_803719A4();
extern sb32 func_ovl8_803719C8();
extern sb32 func_ovl8_80371A2C();
extern sb32 func_ovl8_80371AC4();
extern sb32 func_ovl8_80371ACC();
extern sb32 func_ovl8_80371AD8();
extern sb32 func_ovl8_80371B34();
extern sb32 func_ovl8_80371B98();
extern sb32 func_ovl8_80371BCC();
extern sb32 func_ovl8_80371C2C();
extern sb32 func_ovl8_80371C50();
extern sb32 func_ovl8_80371C8C();
extern sb32 func_ovl8_80371CB8();
extern sb32 func_ovl8_80371D08();
extern sb32 func_ovl8_80371D64();
extern sb32 func_ovl8_80371D74();
extern sb32 func_ovl8_80371DC0();
extern sb32 func_ovl8_80371DD0();
extern sb32 func_ovl8_80371DDC();
extern sb32 func_ovl8_80371DE4();
extern sb32 func_ovl8_80371DEC();
extern sb32 func_ovl8_80371DF4();
extern sb32 func_ovl8_80371DFC();
extern sb32 func_ovl8_80371E04();
extern sb32 func_ovl8_80371E0C();
extern sb32 func_ovl8_80371E14();
extern sb32 func_ovl8_80371E1C();
extern sb32 func_ovl8_80371E24();
extern sb32 func_ovl8_80371E2C();
extern sb32 func_ovl8_80371E58();
extern sb32 func_ovl8_803721E8();
extern sb32 func_ovl8_80372224();
extern sb32 func_ovl8_80372250();
extern sb32 func_ovl8_803722A0();
extern sb32 func_ovl8_803722F0();
extern sb32 func_ovl8_80372348();
extern sb32 func_ovl8_80372358();
extern sb32 func_ovl8_80372360();
extern sb32 func_ovl8_803726CC();
extern sb32 func_ovl8_80372A94();
extern sb32 func_ovl8_80372D18();
extern sb32 func_ovl8_80372D70();
extern sb32 func_ovl8_80372DE8();
extern sb32 func_ovl8_80372E40();
extern sb32 func_ovl8_80373044();
extern sb32 func_ovl8_803730DC();
extern sb32 func_ovl8_80373118();
extern sb32 func_ovl8_80373138();
extern sb32 func_ovl8_803732B0();
extern sb32 func_ovl8_80373648();
extern sb32 func_ovl8_80373650();
extern sb32 func_ovl8_8037367C();
extern sb32 func_ovl8_80373684();
extern sb32 func_ovl8_8037368C();
extern sb32 func_ovl8_80373694();
extern sb32 func_ovl8_80373750();
extern sb32 func_ovl8_80373790();
extern sb32 func_ovl8_803737DC();
extern sb32 func_ovl8_8037383C();
extern sb32 func_ovl8_80373930();
extern sb32 func_ovl8_80373980();
extern sb32 func_ovl8_80373988();
extern sb32 func_ovl8_80373990();
extern sb32 func_ovl8_80373A28();
extern sb32 func_ovl8_80373ABC();
extern sb32 func_ovl8_80373B28();
extern sb32 func_ovl8_80373B84();
extern sb32 func_ovl8_80373BC0();
extern sb32 func_ovl8_80373BD4();
extern sb32 func_ovl8_80375528();
extern sb32 func_ovl8_803755C4();
extern sb32 func_ovl8_80375864();
extern sb32 func_ovl8_803769AC();
extern sb32 func_ovl8_803769B4();
extern sb32 func_ovl8_80376A04();
extern sb32 func_ovl8_80376A48();
extern sb32 func_ovl8_80376AA4();
extern sb32 func_ovl8_80376ADC();
extern sb32 func_ovl8_8037C344();
extern sb32 func_ovl8_8037C358();

extern void func_ovl8_803724B4(void *, void *, void *, s32, s32);
extern void func_ovl8_8037726C(db2Shorts*);
dbUnknown5 *func_ovl8_8037FCD8(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, DBMenu *arg3, s32 arg4);
s32 func_ovl8_80380704(dbUnknownLinkStruct*);
void func_ovl8_8037BE34(GObj* arg0);
void func_ovl8_8037BE94(GObj* arg0);
void func_ovl8_8037D95C(dbUnknownS14* arg0);
s32 func_ovl8_80380920(dbUnknown7* arg0);
void func_ovl8_80380AD0(dbUnknown7* arg0);

// Forward declarations for local functions used in data
void func_ovl8_8037F4F4(dbUnknown5* arg0, s32 arg1);
void func_ovl8_8037F590(dbUnknown5* arg0);
void func_ovl8_8037F654(dbTestMenu* arg0, s16 arg1);
void func_ovl8_8037F668(dbUnknown5* arg0, DBMenuPosition* arg1);
s32 func_ovl8_8037F784(dbUnknown5* arg0, db4Bytes arg1);
s32 func_ovl8_8037F80C(dbUnknown5* arg0, dbUnknown15_1* arg1);
void func_ovl8_8037FE28(dbUnknown5* arg0, s32 arg1);
void func_ovl8_8037FEF4(dbUnknown5* arg0);
void func_ovl8_8037FF14(dbUnknown5* arg0);
void func_ovl8_8038011C(dbUnknown7* arg0, s32 arg1);
void func_ovl8_803801DC(dbUnknown5 *arg0);
void func_ovl8_8038045C(dbUnknown5* arg0);
s32 func_ovl8_803806B0(s32 arg0, s32 arg1);
void func_ovl8_803806C0(dbUnknown5* arg0, void* arg1, void* arg2, void* arg3, s32 arg4, s32 arg5);
void func_ovl8_80380C30(dbUnknown5* arg0);
void func_ovl8_80380DD8(s32 arg0, db4Shorts* arg1, s32* arg2, s32* arg3, s32* arg4, s32* arg5);
void func_ovl8_80380E14(dbUnknown3* arg0, s32 arg1);

/* ************************************************************************** */
/*                                DATA                                        */
/* ************************************************************************** */

// 0x8038ADD0
dbUnknown8_SC D_ovl8_8038ADD0[] = {
	{ 0, 0, -32768, -32768, 100 },
	{ 0, 0, -32767, 0, 93 },
	{ 0, 0, 0, -32767, 93 },
	{ -32767, 2, -32767, -32767, 47 },
	{ 2, -32767, -32767, -32767, 47 },
	{ -32768, 2, -32768, -32768, 27 },
	{ 2, -32768, -32768, -32768, 27 },
	{ -32768, 0, -32768, 0, 80 },
	{ -32767, 1, -32767, 1, 80 },
	{ 1, -32767, 1, -32767, 80 },
	{ 0, -32768, 0, -32768, 80 },
	{ -32768, 1, -32768, 1, 47 },
	{ 1, -32768, 1, -32768, 47 },
	{ 2, 2, -32766, -32766, 80 },
	{ 32767, 0, 0, 0, 0 }
};

// 0x8038AE84
dbUnknown8_SC D_ovl8_8038AE84[] = {
	{ 0, 0, -32768, -32768, 100 },
	{ 0, 0, -32766, 0, 27 },
	{ 0, 0, 0, -32766, 27 },
	{ 1, 1, -32766, 1, 47 },
	{ 1, 1, 1, -32766, 47 },
	{ -32767, 0, -32767, 0, 47 },
	{ 0, -32767, 0, -32767, 47 },
	{ -32768, 0, -32768, 0, 80 },
	{ -32767, 1, -32767, 1, 80 },
	{ 1, -32767, 1, -32767, 80 },
	{ 0, -32768, 0, -32768, 80 },
	{ -32768, 1, -32768, -32768, 93 },
	{ 1, -32768, -32768, -32768, 93 },
	{ 2, 2, -32766, -32766, 80 },
	{ 32767, 0, 0, 0, 0 }
};

// 0x8038AF38
dbFunction D_ovl8_8038AF38[] = {
	{ 0, NULL },
	{ 0, func_ovl8_8037F4F4 },
	{ 0, func_ovl8_8037F590 },
	{ 0, func_ovl8_80373648 },
	{ 0, func_ovl8_80373650 },
	{ 0, func_ovl8_8037367C },
	{ 0, func_ovl8_80373684 },
	{ 0, func_ovl8_8037368C },
	{ 0, func_ovl8_80373694 },
	{ 0, func_ovl8_80373750 },
	{ 0, func_ovl8_80373790 },
	{ 0, func_ovl8_803737DC },
	{ 0, func_ovl8_8037F80C },
	{ 0, func_ovl8_8037383C },
	{ 0, func_ovl8_80373930 },
	{ 0, func_ovl8_80373980 },
	{ 0, func_ovl8_80373988 },
	{ 0, func_ovl8_80373990 },
	{ 0, func_ovl8_80373A28 },
	{ 0, func_ovl8_80373ABC },
	{ 0, func_ovl8_8037F784 },
	{ 0, func_ovl8_80373B28 },
	{ 0, func_ovl8_80373B84 },
	{ 0, func_ovl8_80373BC0 },
	{ 0, func_ovl8_80373BD4 },
	{ 0, func_ovl8_8037F654 },
	{ 0, func_ovl8_8037F668 },
	{ 0, NULL },
};

// 0x8038B018
dbFunction D_ovl8_8038B018[] = {
	{ 0, NULL },
	{ -76, func_ovl8_8037F4F4 },
	{ 0, func_ovl8_803718FC },
	{ 0, func_ovl8_80371930 },
	{ 0, func_ovl8_80371960 },
	{ 0, func_ovl8_80371968 },
	{ 0, func_ovl8_80371970 },
	{ 0, func_ovl8_80371978 },
	{ 0, func_ovl8_80371980 },
	{ 0, func_ovl8_803719A4 },
	{ 0, func_ovl8_803719C8 },
	{ 0, func_ovl8_80371A2C },
	{ -76, func_ovl8_80373648 },
	{ 0, func_ovl8_80371AC4 },
	{ 0, func_ovl8_80371ACC },
	{ 0, func_ovl8_80371AD8 },
	{ 0, func_ovl8_80371B34 },
	{ 0, func_ovl8_80371B98 },
	{ 0, func_ovl8_80371BCC },
	{ -76, func_ovl8_80373650 },
	{ 0, func_ovl8_80371C2C },
	{ 0, func_ovl8_80371C50 },
	{ 0, func_ovl8_80371C8C },
	{ 0, func_ovl8_80371CB8 },
	{ -76, func_ovl8_8037F590 },
	{ 0, func_ovl8_80371D08 },
	{ 0, func_ovl8_80371D64 },
	{ 0, func_ovl8_80371D74 },
	{ 0, func_ovl8_80371DC0 },
	{ 0, func_ovl8_80371DD0 },
	{ 0, func_ovl8_80371DDC },
	{ 0, func_ovl8_80371DE4 },
	{ 0, func_ovl8_80371DEC },
	{ 0, func_ovl8_80371DF4 },
	{ 0, func_ovl8_80371DFC },
	{ 0, func_ovl8_80371E04 },
	{ 0, func_ovl8_80371E0C },
	{ 0, func_ovl8_80371E14 },
	{ 0, func_ovl8_80371E1C },
	{ 0, func_ovl8_80371E24 },
	{ 0, func_ovl8_80371E2C },
	{ 0, func_ovl8_80371E58 },
	{ 0, NULL },
};

// 0x8038B170
dbFunction D_ovl8_8038B170[] = {
	{ 0, NULL },
	{ -168, func_ovl8_8037F4F4 },
	{ 0, func_ovl8_8037C344 },
	{ 0, func_ovl8_8037C358 },
	{ 0, NULL },
	{ 0, NULL },
};

// 0x8038B1A0
dbFunction D_ovl8_8038B1A0[] = {
	{ 0, NULL },
	{ 0, func_ovl8_8037FE28 },
	{ 0, func_ovl8_8037F590 },
	{ 0, func_ovl8_8037FEF4 },
	{ 0, func_ovl8_80373650 },
	{ 0, func_ovl8_8037367C },
	{ 0, func_ovl8_80373684 },
	{ 0, func_ovl8_8037368C },
	{ 0, func_ovl8_80373694 },
	{ 0, func_ovl8_80373750 },
	{ 0, func_ovl8_80373790 },
	{ 0, func_ovl8_803737DC },
	{ 0, func_ovl8_8037F80C },
	{ 0, func_ovl8_8037383C },
	{ 0, func_ovl8_80373930 },
	{ 0, func_ovl8_80373980 },
	{ 0, func_ovl8_80373988 },
	{ 0, func_ovl8_80373990 },
	{ 0, func_ovl8_80373A28 },
	{ 0, func_ovl8_80373ABC },
	{ 0, func_ovl8_8037F784 },
	{ 0, func_ovl8_80373B28 },
	{ 0, func_ovl8_80373B84 },
	{ 0, func_ovl8_80373BC0 },
	{ 0, func_ovl8_80373BD4 },
	{ 0, func_ovl8_8037F654 },
	{ 0, func_ovl8_8037F668 },
	{ 0, func_ovl8_8037FF14 },
	{ 0, NULL },
};

// 0x8038B288
dbFunction D_ovl8_8038B288[] = {
	{ 0, NULL },
	{ -96, func_ovl8_8037FE28 },
	{ 0, func_ovl8_803718FC },
	{ 0, func_ovl8_80371930 },
	{ 0, func_ovl8_80371960 },
	{ 0, func_ovl8_80371968 },
	{ 0, func_ovl8_80371970 },
	{ 0, func_ovl8_80371978 },
	{ 0, func_ovl8_80371980 },
	{ 0, func_ovl8_803719A4 },
	{ 0, func_ovl8_803719C8 },
	{ 0, func_ovl8_80371A2C },
	{ -96, func_ovl8_8037FEF4 },
	{ -96, func_ovl8_8037FF14 },
	{ 0, func_ovl8_80371ACC },
	{ 0, func_ovl8_80371AD8 },
	{ 0, func_ovl8_80371B34 },
	{ 0, func_ovl8_80371B98 },
	{ 0, func_ovl8_80371BCC },
	{ -96, func_ovl8_80373650 },
	{ 0, func_ovl8_80371C2C },
	{ -20, func_ovl8_80372224 },
	{ 0, func_ovl8_80371C8C },
	{ -20, func_ovl8_80372358 },
	{ -96, func_ovl8_8037F590 },
	{ 0, func_ovl8_80371D08 },
	{ 0, func_ovl8_80371D64 },
	{ 0, func_ovl8_80371D74 },
	{ 0, func_ovl8_80371DC0 },
	{ 0, func_ovl8_80371DD0 },
	{ 0, func_ovl8_80371DDC },
	{ 0, func_ovl8_80371DE4 },
	{ -20, func_ovl8_803726CC },
	{ 0, func_ovl8_80371DF4 },
	{ 0, func_ovl8_80371DFC },
	{ 0, func_ovl8_80371E04 },
	{ 0, func_ovl8_80371E0C },
	{ 0, func_ovl8_80371E14 },
	{ 0, func_ovl8_80371E1C },
	{ 0, func_ovl8_80371E24 },
	{ 0, func_ovl8_80371E2C },
	{ 0, func_ovl8_80371E58 },
	{ 0, NULL },
};

// 0x8038B3E0
dbFunction D_ovl8_8038B3E0[] = {
	{ 0, NULL },
	{ -192, func_ovl8_8037FE28 },
	{ 0, func_ovl8_8037C344 },
	{ 0, func_ovl8_8037C358 },
	{ 0, NULL },
};

// 0x8038B408
dbFunction D_ovl8_8038B408[] = {
	{ 0, NULL },
	{ -76, func_ovl8_8037FE28 },
	{ -76, func_ovl8_8037FEF4 },
	{ 0, func_ovl8_803721E8 },
	{ 0, func_ovl8_80372224 },
	{ 0, func_ovl8_80372250 },
	{ 0, func_ovl8_803722A0 },
	{ 0, func_ovl8_803722F0 },
	{ 0, func_ovl8_80372348 },
	{ 0, func_ovl8_80372358 },
	{ 0, func_ovl8_80372360 },
	{ 0, func_ovl8_803726CC },
	{ 0, NULL },
};

// 0x8038B470
dbFunction D_ovl8_8038B470[] = {
	{ 0, NULL },
	{ 0, func_ovl8_8038011C },
	{ 0, func_ovl8_80376A04 },
	{ 0, func_ovl8_80375528 },
	{ 0, func_ovl8_803755C4 },
	{ 0, func_ovl8_80375864 },
	{ 0, func_ovl8_803769AC },
	{ 0, func_ovl8_803769B4 },
	{ 0, func_ovl8_80372A94 },
	{ 0, func_ovl8_803806B0 },
	{ 0, func_ovl8_80372D18 },
	{ 0, func_ovl8_80372D70 },
	{ 0, func_ovl8_80376A48 },
	{ 0, func_ovl8_80376AA4 },
	{ 0, func_ovl8_80372DE8 },
	{ 0, func_ovl8_80372E40 },
	{ 0, func_ovl8_80376ADC },
	{ 0, func_ovl8_80373044 },
	{ 0, func_ovl8_803730DC },
	{ 0, func_ovl8_80373118 },
	{ 0, func_ovl8_80373138 },
	{ 0, func_ovl8_803732B0 },
	{ 0, func_ovl8_803801DC },
	{ 0, func_ovl8_8038045C },
	{ 0, func_ovl8_803806C0 },
	{ 0, NULL },
};

// 0x8038B540
dbFunction D_ovl8_8038B540[] = {
	{ 0, NULL },
	{ -200, func_ovl8_8038011C },
	{ 0, func_ovl8_803718FC },
	{ 0, func_ovl8_80371930 },
	{ 0, func_ovl8_80371960 },
	{ 0, func_ovl8_80371968 },
	{ 0, func_ovl8_80371970 },
	{ 0, func_ovl8_80371978 },
	{ 0, func_ovl8_80371980 },
	{ 0, func_ovl8_803719A4 },
	{ 0, func_ovl8_803719C8 },
	{ 0, func_ovl8_80371A2C },
	{ -200, func_ovl8_80376A04 },
	{ -200, func_ovl8_803801DC },
	{ -200, func_ovl8_80372A94 },
	{ 0, func_ovl8_80371AD8 },
	{ 0, func_ovl8_80371B34 },
	{ 0, func_ovl8_80371B98 },
	{ 0, func_ovl8_80371BCC },
	{ -200, func_ovl8_803806B0 },
	{ 0, func_ovl8_80371C2C },
	{ -144, func_ovl8_80372224 },
	{ 0, func_ovl8_80371C8C },
	{ -144, func_ovl8_80372358 },
	{ -200, func_ovl8_8038045C },
	{ -200, func_ovl8_80372D70 },
	{ -200, func_ovl8_80376A48 },
	{ -200, func_ovl8_80372D18 },
	{ -200, func_ovl8_80376AA4 },
	{ -200, func_ovl8_80373118 },
	{ -200, func_ovl8_80373138 },
	{ 0, func_ovl8_80371DE4 },
	{ 0, func_ovl8_80371DEC },
	{ 0, func_ovl8_80371DF4 },
	{ -200, func_ovl8_80372DE8 },
	{ 0, func_ovl8_80371E04 },
	{ 0, func_ovl8_80371E0C },
	{ 0, func_ovl8_80371E14 },
	{ -200, func_ovl8_803732B0 },
	{ 0, func_ovl8_80371E24 },
	{ 0, func_ovl8_80371E2C },
	{ 0, func_ovl8_80371E58 },
	{ 0, NULL },
};

// 0x8038B698
dbFunction D_ovl8_8038B698[] = {
	{ 0, NULL },
	{ -292, func_ovl8_8038011C },
	{ -292, func_ovl8_803730DC },
	{ 0, func_ovl8_8037C358 },
	{ 0, NULL },
};

// 0x8038B6C0
dbFunction D_ovl8_8038B6C0[] = {
	{ 0, NULL },
	{ -56, func_ovl8_8038011C },
	{ -56, func_ovl8_80376A04 },
	{ 0, func_ovl8_803721E8 },
	{ 0, func_ovl8_80372224 },
	{ 0, func_ovl8_80372250 },
	{ 0, func_ovl8_803722A0 },
	{ 0, func_ovl8_803722F0 },
	{ 0, func_ovl8_80372348 },
	{ 0, func_ovl8_80372358 },
	{ 0, func_ovl8_80372360 },
	{ 0, NULL },
};

// 0x8038B720
dbFunction D_ovl8_8038B720[] = {
	{ 0, NULL },
	{ 0, func_ovl8_80380E14 },
	{ 0, func_ovl8_80376A04 },
	{ 0, func_ovl8_80375528 },
	{ 0, func_ovl8_803755C4 },
	{ 0, func_ovl8_80375864 },
	{ 0, func_ovl8_803769AC },
	{ 0, func_ovl8_803769B4 },
	{ 0, func_ovl8_80372A94 },
	{ 0, func_ovl8_803806B0 },
	{ 0, func_ovl8_80372D18 },
	{ 0, func_ovl8_80372D70 },
	{ 0, func_ovl8_80376A48 },
	{ 0, func_ovl8_80376AA4 },
	{ 0, func_ovl8_80372DE8 },
	{ 0, func_ovl8_80372E40 },
	{ 0, func_ovl8_80376ADC },
	{ 0, func_ovl8_80373044 },
	{ 0, func_ovl8_803730DC },
	{ 0, func_ovl8_80373118 },
	{ 0, func_ovl8_80373138 },
	{ 0, func_ovl8_803732B0 },
	{ 0, func_ovl8_803801DC },
	{ 0, func_ovl8_80380C30 },
	{ 0, func_ovl8_80380DD8 },
	{ 0, NULL },
};

// 0x8038B7F0
dbFunction D_ovl8_8038B7F0[] = {
	{ 0, NULL },
	{ -212, func_ovl8_80380E14 },
	{ 0, func_ovl8_803718FC },
	{ 0, func_ovl8_80371930 },
	{ 0, func_ovl8_80371960 },
	{ 0, func_ovl8_80371968 },
	{ 0, func_ovl8_80371970 },
	{ 0, func_ovl8_80371978 },
	{ 0, func_ovl8_80371980 },
	{ 0, func_ovl8_803719A4 },
	{ 0, func_ovl8_803719C8 },
	{ 0, func_ovl8_80371A2C },
	{ -212, func_ovl8_80376A04 },
	{ -212, func_ovl8_803801DC },
	{ -212, func_ovl8_80372A94 },
	{ 0, func_ovl8_80371AD8 },
	{ 0, func_ovl8_80371B34 },
	{ 0, func_ovl8_80371B98 },
	{ 0, func_ovl8_80371BCC },
	{ -212, func_ovl8_803806B0 },
	{ 0, func_ovl8_80371C2C },
	{ -156, func_ovl8_80372224 },
	{ 0, func_ovl8_80371C8C },
	{ -156, func_ovl8_80372358 },
	{ -212, func_ovl8_80380C30 },
	{ -212, func_ovl8_80372D70 },
	{ -212, func_ovl8_80376A48 },
	{ -212, func_ovl8_80372D18 },
	{ -212, func_ovl8_80376AA4 },
	{ -212, func_ovl8_80373118 },
	{ -212, func_ovl8_80373138 },
	{ 0, func_ovl8_80371DE4 },
	{ 0, func_ovl8_80371DEC },
	{ 0, func_ovl8_80371DF4 },
	{ -212, func_ovl8_80372DE8 },
	{ 0, func_ovl8_80371E04 },
	{ 0, func_ovl8_80371E0C },
	{ 0, func_ovl8_80371E14 },
	{ -212, func_ovl8_803732B0 },
	{ 0, func_ovl8_80371E24 },
	{ 0, func_ovl8_80371E2C },
	{ 0, func_ovl8_80371E58 },
	{ 0, NULL },
};

// 0x8038B948
dbFunction D_ovl8_8038B948[] = {
	{ 0, NULL },
	{ -200, func_ovl8_80380E14 },
	{ -200, func_ovl8_803730DC },
	{ 0, func_ovl8_8037C358 },
	{ 0, NULL },
};

// 0x8038B970
dbFunction D_ovl8_8038B970[] = {
	{ 0, NULL },
	{ -56, func_ovl8_80380E14 },
	{ -56, func_ovl8_80376A04 },
	{ 0, func_ovl8_803721E8 },
	{ 0, func_ovl8_80372224 },
	{ 0, func_ovl8_80372250 },
	{ 0, func_ovl8_803722A0 },
	{ 0, func_ovl8_803722F0 },
	{ 0, func_ovl8_80372348 },
	{ 0, func_ovl8_80372358 },
	{ 0, func_ovl8_80372360 },
	{ 0, NULL },
};

/* ************************************************************************** */
/*                              FUNCTIONS                                     */
/* ************************************************************************** */

// 0x8037F300
dbUnknown5* func_ovl8_8037F300(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2)
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xB4)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x4C;
            arg2 = &arg0->unk_dbunk5_0xA8;
            #line 49
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
            #line 56
        }

        func_ovl8_803733AC(arg0, arg1, arg2);

        arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38;
        arg1->db_func = &D_ovl8_8038B018;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B170;

    }

    return arg0;
}

// 0x8037F3A8
dbUnknown5* func_ovl8_8037F3A8(dbUnknown5* arg0, dbUnknownLinkStruct* arg1, dbUnknownLink* arg2, DBMenu* arg3, s32 arg4)
{
	s32 var_v0;
    u32 var_v1;
    dbUnknownLinkStruct* var_v0_2;

	if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xB4), (arg0 != NULL)))
	{
		if (arg1 == NULL)
		{
			arg1 = &arg0->unk_dbunk5_0x4C;
			arg2 = &arg0->unk_dbunk5_0xA8;
            #line 79
			func_ovl8_803717E0(arg1, arg2);
			func_ovl8_8037C2D0(arg2);
            #line 86
		}
        
		func_ovl8_8037345C(arg0, arg1, arg2, arg3, arg4);
		arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38;
		arg1->db_func = &D_ovl8_8038B018;
		arg2->unk_dbunklink_0x8 = &D_ovl8_8038B170;
		arg0->unk_dbunk5_0x40.s_16 = 0x10;

        var_v0 = (arg3->position.h< arg3->position.w) ? 0 : 1;
		arg0->unk_dbunk5_0x3C.w = var_v0;
		arg0->unk_dbunk5_0x4 = 0.0F;
        
        if (var_v0 != 0) 
        {
            var_v0_2 = arg0;
            if (arg0 != NULL) 
            {
                var_v0_2 = arg0->unk_dbunk5_0x38;
            }
            
            var_v1 = var_v0_2->position.h;
        } 
        else 
        {
            var_v0_2 = arg0;
            if (arg0 != NULL) 
            {
                var_v0_2 = arg0->unk_dbunk5_0x38;
            }
            
            var_v1 = var_v0_2->position.w;
        }
        
        arg0->unk_dbunk5_0x8 = var_v1;
		arg0->unk_dbunk5_0x44.ls = &D_ovl8_8038ADD0;
		arg0->unk_dbunk5_0x48 = &D_ovl8_8038AE84;
        
	}
	return arg0;
}

// 0x8037F4F4
void func_ovl8_8037F4F4(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038AF38,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038B018;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038B170;

        func_ovl8_8037354C(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
            func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x8037F590
void func_ovl8_8037F590(dbUnknown5* arg0)
{
    s16 sp38[3];
    s16 sp30[3];
    s32 sp2C;
    dbUnknownLinkStruct* temp_a2;
    dbFunction* temp_v1;

    temp_a2 = arg0->unk_dbunk5_0x38;
    temp_v1 = temp_a2->db_func;
    sp2C = temp_v1[23].unk_dbfunc_0x4(temp_v1[23].unk_dbfunc_0x0 + (uintptr_t)temp_a2);

    temp_a2 = arg0->unk_dbunk5_0x38;
    temp_v1 = temp_a2->db_func;
    temp_v1[21].unk_dbfunc_0x4(temp_v1[21].unk_dbfunc_0x0 + (uintptr_t)temp_a2, &sp38);

    func_ovl8_8037B46C(sp2C, &sp38, arg0->unk_dbunk5_0x48, &arg0->unk_dbunk5_0x38->bg_color);

    temp_v1 = arg0->unk_dbunk5_0x30;
    temp_v1[26].unk_dbfunc_0x4(temp_v1[26].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp30);

    sp30[0] += sp38[0];
    sp30[1] += sp38[1];

    func_ovl8_8037B46C(sp2C, &sp30, arg0->unk_dbunk5_0x44.ls, &arg0->unk_dbunk5_0x38->bg_color);
}

// 0x8037F654
void func_ovl8_8037F654(dbTestMenu* arg0, s16 arg1)
{
    arg0->unk_dbtestmenu_0x14.unk_dbunkstruct_0x2C = arg1;
}

// 0x8037F668
void func_ovl8_8037F668(dbUnknown5* arg0, DBMenuPosition* arg1) 
{
    DBMenuPosition sp30;
    dbFunction* temp_v0;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;

    temp_v0 = arg0->unk_dbunk5_0x38->db_func;
    temp_v0[22].unk_dbfunc_0x4(temp_v0[22].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp30);

    // if (arg0->unk_dbunk5_0x8);
    temp_f14 = (arg0->unk_dbunk5_0x8 - arg0->unk_dbunk5_0x4);
    
    if (arg0->unk_dbunk5_0x3C.ls == NULL)
    {
        temp_f0 = (sp30.w - arg0->unk_dbunk5_0x40.s_16);
        temp_f12 = (temp_f0, temp_f0) * (((arg0->unk_dbunk5_0x0 - arg0->unk_dbunk5_0x4) / temp_f14));
        arg1->x = temp_f12;
        arg1->y = sp30.y;
        arg1->w = arg0->unk_dbunk5_0x40.s_16;
        arg1->h = sp30.h;
    }
    else
    {
        temp_f0 = (sp30.h - arg0->unk_dbunk5_0x40.s_16);
        temp_f12 = (temp_f0, temp_f0) * (((arg0->unk_dbunk5_0x0 - arg0->unk_dbunk5_0x4) / temp_f14));
        arg1->x = sp30.x;
        arg1->y = ((sp30.h - arg0->unk_dbunk5_0x40.s_16) - temp_f12);
        arg1->w = sp30.w;
        arg1->h = arg0->unk_dbunk5_0x40.s_16;
    }
}

// 0x8037F784
s32 func_ovl8_8037F784(dbUnknown5* arg0, db4Bytes arg1)
{
    db4Shorts sp28;
    dbFunction *temp_v0_2;
    db4Bytes sp20;
    dbFunction *temp_v0;

    temp_v0 = arg0->unk_dbunk5_0x38->db_func;
    temp_v0[22].unk_dbfunc_0x4(temp_v0[22].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunk5_0x38, &sp20);

    if (TRUE);

    temp_v0_2 = arg0->unk_dbunk5_0x30;
    temp_v0_2[26].unk_dbfunc_0x4(temp_v0_2[26].unk_dbfunc_0x0 + (uintptr_t)arg0, &sp28);

    if (func_ovl8_80377168(arg1, &sp28) == 0)
    {
        return 2;
    }
    else return 1;
}

// 0x8037F80C
s32 func_ovl8_8037F80C(dbUnknown5* arg0, dbUnknown15_1* arg1) 
{
    Vec2hPair sp58;
    DBMenuPosition sp50;
    s32 sp4C;
    DBMenuPosition sp44;
    f32 temp_f20;
    f32 var_f0;
    dbFunction* temp_s0;
    dbUnknownLinkStruct* temp_v0;

    sp58.pos2 = arg1->dbUnknown17_2_0x8;

    temp_s0 = arg0->unk_dbunk5_0x38->db_func;
    temp_s0[10].unk_dbfunc_0x4(temp_s0[10].unk_dbfunc_0x0 + (uintptr_t) arg0->unk_dbunk5_0x38, &sp58.pos2);
        
    temp_s0 = arg0->unk_dbunk5_0x30;
    sp4C = temp_s0[20].unk_dbfunc_0x4(temp_s0[20].unk_dbfunc_0x0 + (uintptr_t) arg0, sp58.pos2);
        
    if (sp4C == 0) 
    {
        return 0;
    }
    
    temp_s0 = arg0->unk_dbunk5_0x30;
    ((void (*)(void*, void*))temp_s0[26].unk_dbfunc_0x4)(temp_s0[26].unk_dbfunc_0x0 + (uintptr_t) arg0, &sp50);
        
    sp58.pos.x = sp58.pos2.x - sp50.x;
    sp58.pos.y = sp58.pos2.y - sp50.y;
    
    temp_f20 = arg0->unk_dbunk5_0x8 - arg0->unk_dbunk5_0x4;
    
    temp_v0 = arg0->unk_dbunk5_0x38;
    temp_s0 = temp_v0->db_func;
    temp_s0[22].unk_dbfunc_0x4(temp_s0[22].unk_dbfunc_0x0 + (uintptr_t) temp_v0, &sp44);

    if (sp4C == 1) 
    {
        temp_s0 = arg0;
        if (arg0 != NULL) 
        {
            
            temp_s0 = arg0->unk_dbunk5_0x38;
        }
        
        while (func_ovl8_80377244() & ((dbUnknownLinkStruct*)temp_s0)->unk_dbunkstruct_0x30)
        {
            if (arg0->unk_dbunk5_0x3C.ls == NULL) 
            {
                var_f0 = (((f32) ((sp58.pos2.x - sp58.pos.x) - sp44.x) / (f32) (sp44.w - arg0->unk_dbunk5_0x40.s_16)) * temp_f20) + arg0->unk_dbunk5_0x4;
            } 
            else 
            {
                var_f0 = (((f32) (((sp44.y + sp44.h) - sp58.pos2.y) + sp58.pos.y) / (f32) (sp44.h - arg0->unk_dbunk5_0x40.s_16)) * temp_f20) + arg0->unk_dbunk5_0x4;
            }
            
            temp_s0 = arg0->unk_dbunk5_0x30;
            ((void (*)(void*, f32))temp_s0[8].unk_dbfunc_0x4)(temp_s0[8].unk_dbfunc_0x0 + (uintptr_t) arg0, var_f0);
            
            func_ovl8_8037726C(&sp58.pos2);
 
            temp_s0 = arg0->unk_dbunk5_0x38->db_func;
            temp_s0[10].unk_dbfunc_0x4(temp_s0[10].unk_dbfunc_0x0 + (uintptr_t) arg0->unk_dbunk5_0x38, &sp58.pos2);
            
            if (sp58.pos2.x < 0) 
            {
                sp58.pos2.x = 0;
            }
            if (sp58.pos2.y < 0) 
            {
                sp58.pos2.y = 0;
            }
            
            if (sp58.pos2.x >= (s32) sp44.w) 
            {
                sp58.pos2.x = sp44.w - 1;
            }
            
            if (sp58.pos2.y >= (s32) sp44.h) 
            {
                sp58.pos2.y = sp44.h - 1;
            }
            
            if (arg0->unk_dbunk5_0x2C != NULL) 
            {
                ((void (*)(void*))arg0->unk_dbunk5_0x2C)(arg0);
            } 
            else
            {
                temp_s0 = arg0->unk_dbunk5_0x30;
                temp_s0[19].unk_dbfunc_0x4(temp_s0[19].unk_dbfunc_0x0 + (uintptr_t) arg0);
            }
            
            gcSleepCurrentGObjThread(1);

            temp_s0 = arg0;
            if (arg0 != NULL) 
            {
                
                temp_s0 = arg0->unk_dbunk5_0x38;
            }
        }
    } 
    else if (sp4C == 2) 
    {
        if (arg0->unk_dbunk5_0x3C.ls == NULL) 
        {
            var_f0 = ((((f32) sp58.pos2.x - (f32) sp44.x) / (f32) (sp44.w - arg0->unk_dbunk5_0x40.s_16)) * temp_f20) + arg0->unk_dbunk5_0x4;
        } 
        else 
        {
            var_f0 = ((((f32) sp58.pos2.y - (f32) sp44.y) / (f32) (sp44.h - arg0->unk_dbunk5_0x40.s_16)) * temp_f20) + arg0->unk_dbunk5_0x4;
        }
        
        temp_s0 = arg0->unk_dbunk5_0x30;
        ((void (*)(void*, f32))temp_s0[8].unk_dbfunc_0x4)(temp_s0[8].unk_dbfunc_0x0 + (uintptr_t) arg0, var_f0);
        
        if (arg0->unk_dbunk5_0x2C != NULL) 
        {
            ((void (*)(void*))arg0->unk_dbunk5_0x2C)(arg0);
        } 
        else 
        {
            temp_s0 = arg0->unk_dbunk5_0x30;
            temp_s0[19].unk_dbfunc_0x4(temp_s0[19].unk_dbfunc_0x0 + (uintptr_t) arg0);
        }
    }
        
    return 1;
}

// 0x8037FBC0
s32 func_ovl8_8037FBC0(s32 arg0, s32 arg1)
{
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_ovl8_803717A0(0xCC);

    if (temp_v0 != 0)
    {
        func_ovl8_8037FCD8(temp_v0, 0, 0, arg1, arg0);
        var_v1 = temp_v0;
    }
    else
    {
        var_v1 = 0;
    }

    return var_v1;
}

// 0x8037FC1C
dbUnknown5* func_ovl8_8037FC1C(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2)
{
    if ((arg0 != NULL) || (arg0 = func_ovl8_803717A0(0xCC), (arg0 != NULL)))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x60;\
            arg2 = &arg0->unk_dbunk5_0xC0;
            #line 401
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
            #line 408
        }
        func_ovl8_8037F300(arg0, arg1, arg2);
        func_ovl8_80372430((char*) arg0 + 0x4C, arg1);
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0;\
        arg1->db_func = &D_ovl8_8038B288;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;
    }
    return arg0;
}

// 0x8037FCD8
dbUnknown5 *func_ovl8_8037FCD8(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, DBMenu *arg3, s32 arg4) 
{
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    u16 temp_v1;

    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0xCC)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0x60;\
            arg2 = &arg0->unk_dbunk5_0xC0;
            #line 430
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
            #line 437
        }
        
        func_ovl8_8037F3A8(arg0, arg1, arg2, arg3, arg4);
        func_ovl8_803724B4((char*) arg0 + 0x4C, arg1, arg3, arg4, 0);
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0,
        arg1->db_func = &D_ovl8_8038B288;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;
        temp_v1 = arg3->unk_dbmenu_0x10;

        if (temp_v1 == 2) 
        {
            sp3C = 2;
        } 
        else if (temp_v1 == 5)
        {
            sp3C = 3;
        }
        
        sp44 = (s32) arg3->position.w;
        sp40 = (s32) arg3->position.h;
        func_ovl8_8037B85C(sp3C, &sp44, &sp40);
        arg0->unk_dbunk5_0xBC = func_ovl8_8037ACAC(arg3->position.w, arg3->position.h, sp3C, sp44, sp40);
        arg0->unk_dbunk5_0x54 = arg0->unk_dbunk5_0xBC;
    }
    return arg0;
}

// 0x8037FE28
void func_ovl8_8037FE28(dbUnknown5* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk5_0x30 = &D_ovl8_8038B1A0,
        arg0->unk_dbunk5_0x38->db_func = &D_ovl8_8038B288;
        arg0->unk_dbunk5_0x34->unk_dbunklink_0x8 = &D_ovl8_8038B3E0;
        arg0->unk_dbunk5_0x58 = &D_ovl8_8038B408;

        if (arg0->unk_dbunk5_0xBC != 0)
        {
            func_ovl8_8037B3E4(arg0->unk_dbunk5_0xBC);
        }

        func_ovl8_80372554(&arg0->unk_dbunk5_0x4C, 0);
        func_ovl8_8037F4F4(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk5_0x34, 0);
            func_ovl8_803718C4(arg0->unk_dbunk5_0x38, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x8037FEF4
void func_ovl8_8037FEF4(dbUnknown5* arg0)
{
    func_ovl8_803725DC(&arg0->unk_dbunk5_0x4C);
}

// 0x8037FF14
void func_ovl8_8037FF14(dbUnknown5* arg0)
{
    dbFunction* temp_v0 = arg0->unk_dbunk5_0x30;
    temp_v0[2].unk_dbfunc_0x4(temp_v0[2].unk_dbfunc_0x0 + (uintptr_t)arg0);
}

// 0x8037FF40
void func_ovl8_8037FF40(s32* arg0, s32* arg1, s32* arg2, s32* arg3, s32* arg4)
{
    s32 temp_v0;
    s32 var_s1;
    s32* var_s0;
    s32* var_v0;

    *arg1 = 0;

    for (var_v0 = arg0; var_v0 != NULL && *var_v0 != 0; var_v0++)
    {
        *arg1 += 1;
    }

    if ((arg0 != NULL) && (*arg1 != 0))
    {
        *arg3 = 0;
        *arg2 = 0;

        for (var_s1 = 0; var_s1 < *arg1; var_s1++)
        {
            *arg3 += 0xC;

            temp_v0 = func_ovl8_8037E7A8(arg0[var_s1]);

            if (*arg2 < temp_v0)
            {
                *arg2 = temp_v0;
            }
        }
        *arg2 += 0x10;
        *arg4 = 0xC;
    }
}

// 0x80380048
dbUnknown5* func_ovl8_80380048(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, DBMenu *arg3, s32 arg4) 
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0x130)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0xC8;\
            arg2 = &arg0->unk_dbunk5_0x124;
            #line 550
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
            #line 557
        }
        
        func_ovl8_80376530(arg0, arg1, arg2, arg3, -1, 1);
        arg0->db_func = &D_ovl8_8038B470,
        arg1->db_func = &D_ovl8_8038B540;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B698;
        arg0->unk_dbunk5_0x44.ls = &D_ovl8_8038B6C0;
        arg0->unk_dbunk5_0xB4 = arg4;
    }
    
    return arg0;
}

// 0x8038011C
void func_ovl8_8038011C(dbUnknown7* arg0, s32 arg1)
{
    s32 temp_a0;

    if (arg0 != NULL)
    {
        arg0->unk18 = &D_ovl8_8038B470,
        arg0->unk20->db_func = &D_ovl8_8038B540;
        arg0->unk1C->unk_dbunklink_0x8 = &D_ovl8_8038B698;
        arg0->unk44 = &D_ovl8_8038B6C0;

        temp_a0 = arg0->unkC0;

        if (temp_a0 != 0)
            func_ovl8_8037B3E4(temp_a0);

        func_ovl8_803768E0(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk1C, 0);
            func_ovl8_803718C4(arg0->unk20, 0);
        }
        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}

// 0x803801DC
void func_ovl8_803801DC(dbUnknown5 *arg0)
{
    s32 sp54;
    s32 sp50;
    DBMenuPosition pos;
    s32 sp44;
    s32 sp40;
    s32 sp3C;
    dbUnknownLinkStruct *sp38;
    dbUnknownLinkStruct *var_v1;
    dbUnknownLinkStruct *var_a3;
    
    var_v1 = (dbUnknownLinkStruct*) arg0;
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    if (var_v1->unk_dbunkstruct_0x24 == 1)
    {
        sp44 = 2;
    }
    else
    {
        var_v1 = (dbUnknownLinkStruct*) arg0;
        if (arg0)
        {
            var_v1 = arg0->unk_dbunk5_0x20.ls;
        }
        
        if (var_v1->unk_dbunkstruct_0x24 == 4)
        {
            sp44 = 3;
        }
        else
        {
            var_v1 = (dbUnknownLinkStruct*) arg0;
            if (arg0)
            {
                var_v1 = arg0->unk_dbunk5_0x20.ls;
                if (arg0->unk_dbunk5_0x20.ls);
            }
            if (var_v1->unk_dbunkstruct_0x24 == 6)
            {
                sp44 = 1;
            }
        }
    }
    
    arg0->unk_dbunk5_0xC4 = 0;
    arg0->unk_dbunk5_0xAC = 0;
    
    var_v1 = arg0->db_func;
    ((dbFunction*)(var_v1))[24].unk_dbfunc_0x4(((dbFunction*)(var_v1))[24].unk_dbfunc_0x0 + (uintptr_t)arg0, arg0->unk_dbunk5_0xB4, &arg0->unk_dbunk5_0xB0, &sp54, &sp50, &arg0->unk_dbunk5_0xBC);
    
    var_v1 = (dbUnknownLinkStruct*) arg0;
    arg0->unk_dbunk5_0xB8[0] = (s32) sp54;
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    pos.x = var_v1->position.x;
    
    var_v1 = (dbUnknownLinkStruct*) arg0;
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    pos.y = var_v1->position.y;
    pos.w = sp54;
    pos.h = sp50;
    
    sp38 = func_ovl8_8037C0CC();
    func_ovl8_8037A8BC(&sp38->position, &pos);
    func_ovl8_8037A8BC(&sp38->unk_dbunkstruct_0x5C, &pos);

    var_v1 = (dbUnknownLinkStruct*) arg0;
    arg0->unk_dbunk5_0x20.ls->position.x = pos.x;
    arg0->unk_dbunk5_0x20.ls->position.y = pos.y;
    arg0->unk_dbunk5_0x20.ls->position.w = sp54;
    arg0->unk_dbunk5_0x20.ls->position.h = sp50;
    
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    sp40 = var_v1->position.w;
    
    var_v1 = (dbUnknownLinkStruct*) arg0;
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    sp3C = var_v1->position.h;
    func_ovl8_8037B85C(sp44, &sp40, &sp3C);
    sp44 = func_ovl8_8037ACAC(sp54, sp50, sp44, sp40, sp3C);

    arg0->unk_dbunk5_0xC0 = sp44;
    arg0->unk_dbunk5_0x40.gobj = sp44;
    
    var_v1 = arg0->db_func;
    ((dbFunction*)(var_v1))[23].unk_dbfunc_0x4(((dbFunction*)(var_v1))[23].unk_dbfunc_0x0 + (uintptr_t)arg0);
    
    func_ovl8_803723AC((dbMenuSprite*)&arg0->unk_dbunk5_0x38, arg0, (Sprite*)arg0->unk_dbunk5_0x40.gobj, &func_ovl8_8037BE34, &func_ovl8_8037BE94, 1);
    
    var_v1 = (dbUnknownLinkStruct*) arg0;
    if (arg0)
    {
        var_v1 = arg0->unk_dbunk5_0x20.ls;
    }
    
    var_a3 = (dbUnknownLinkStruct*) arg0;
    if (arg0)
    {
        var_a3 = arg0->unk_dbunk5_0x20.ls;
    }

    arg0->db_func[10].unk_dbfunc_0x4(arg0->db_func[10].unk_dbfunc_0x0 + (uintptr_t)arg0, var_v1->position.x, var_a3->position.y);
}

// 0x80380414
void* func_ovl8_80380414(dbUnknownLinkStruct* arg0)
{
    dbUnknownLinkStruct* var_v0 = arg0;

    if (arg0 != NULL)
    {
        var_v0 = arg0->unk_dbunkstruct_0x20;
    }

    if (var_v0->unk_dbunkstruct_0x2C == 0)
    {
        return func_ovl8_80380704(arg0);
    }
    else return func_ovl8_80380920(arg0);
}

// 0x8038045C
void func_ovl8_8038045C(dbUnknown5* arg0) 
{
    dbUnknownS14 sp74;
    DBMenuPosition sp6C;
    s32 i;
    s32 width; 
    Vec2h sp60;
    db4Bytes* sp5C;
    char** sp58;
    s32 var_a2;

    sp58 = arg0->unk_dbunk5_0xB4;
    
    func_ovl8_8037D95C(&sp74);
    
    arg0->unk_dbunk5_0x20.ls->db_func[20].unk_dbfunc_0x4(
        arg0->unk_dbunk5_0x20.ls->db_func[20].unk_dbfunc_0x0 + (uintptr_t) arg0->unk_dbunk5_0x20.ls,
        &sp6C,
        arg0->unk_dbunk5_0x20.ls->db_func
    );
    
    sp6C.y = 0;
    sp6C.x = 0;
    sp6C.h = 12;
    
    func_ovl8_8037D990(0x10);
    func_ovl8_8037D9D0(&D_ovl8_80389F4C);
    
    for ( i = 0 ; arg0->unk_dbunk5_0xB0 > i; i++) 
    {
        if (
            (arg0->unk_dbunk5_0xC4 == 0) ||
            ((i + 1) == arg0->unk_dbunk5_0xC4) ||
            ((i + 1) == (s32) arg0->unk_dbunk5_0xAC)
        ) 
        {
            sp6C.h = 12;
            sp6C.y = i * 12;
            var_a2 = ((s32)arg0->unk_dbunk5_0xAC == i + 1) ? 1 : 0;
            
            func_ovl8_8037B434(
                (Sprite *)arg0->unk_dbunk5_0x40.gobj,
                &sp6C,
                var_a2,
                &(arg0->unk_dbunk5_0x20.ls)->bg_color
            );
            
            width = func_ovl8_8037E7A8(sp58[i]);
            
            if ((i + 1) == (s32) arg0->unk_dbunk5_0xAC) 
            {
                func_ovl8_8037D9D0(&D_ovl8_80389F50);
            }
            else 
            {
                if ((arg0->unk_dbunk5_0xC4 == 0) || ((i + 1) == arg0->unk_dbunk5_0xC4)) 
                {
                    func_ovl8_8037D9D0(&D_ovl8_80389F4C);
                }
            }
            
            sp60.x = sp6C.x + 6,
            sp60.y = sp6C.y + 6;
            
            func_ovl8_8037A5B8(arg0->unk_dbunk5_0x40.ls, &sp60, &sp5C);
            func_ovl8_8037D9B4(&sp5C);
            func_ovl8_8037DFCC(
                (s16) (((s32) sp6C.w / 2) - (width / 2)),
                (s16) ((i * 12 - (func_ovl8_8037E80C() / 2)) + 6)
            );
            func_ovl8_8037DD60(arg0->unk_dbunk5_0x40.ls, sp58[i]);
        }
    } 

    func_ovl8_8037D908(&sp74);
    arg0->unk_dbunk5_0xC4 = (s32) arg0->unk_dbunk5_0xAC;
}

// 0x803806B0
s32 func_ovl8_803806B0(s32 arg0, s32 arg1)
{
    return 0;
}

// 0x803806C0
void func_ovl8_803806C0(dbUnknown5* arg0, void* arg1, void* arg2, void* arg3, s32 arg4, s32 arg5)
{
    func_ovl8_8037FF40(arg0->unk_dbunk5_0xB4, arg2, arg3, arg4, arg5);
}

// 0x80380704
s32 func_ovl8_80380704(dbUnknownLinkStruct* arg0) 
{
    Vec2h sp3C;
    s32 var_s3;
    dbUnknownLinkStruct* var_s0;

    func_ovl8_8037726C(&sp3C);

    ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
    
    if (((dbFunction*)(var_s0))[16].unk_dbfunc_0x4(((dbFunction*)(var_s0))[16].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, &sp3C) != 0) 
    {
        ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
        ((dbFunction*)(var_s0))[8].unk_dbfunc_0x4(((dbFunction*)(var_s0))[8].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, &sp3C);
        
        arg0[1].unk_dbunkstruct_0x44 = ((sp3C.y / 12) + 1);
        
        if (1) 
        {
            ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
            ((dbFunction*)(var_s0))[35].unk_dbfunc_0x4(((dbFunction*)(var_s0))[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, 1);
        }
    } 
    else 
    {
        arg0[1].unk_dbunkstruct_0x44 = 0;
    }
    
    var_s3 = arg0[1].unk_dbunkstruct_0x44;
    
    var_s0 = arg0;
    if (arg0 != NULL) 
    {
        
        var_s0 = arg0->unk_dbunkstruct_0x20;
    }
    
    while (func_ovl8_80377244() & var_s0->unk_dbunkstruct_0x30)
    {
        func_ovl8_8037726C(&sp3C);

        ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
        
        if (((dbFunction*)(var_s0))[16].unk_dbfunc_0x4(((dbFunction*)(var_s0))[16].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, &sp3C) != 0) 
        {
            ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
            ((dbFunction*)(var_s0))[8].unk_dbfunc_0x4(((dbFunction*)(var_s0))[8].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, &sp3C);
            
            
            arg0[1].unk_dbunkstruct_0x44 = (sp3C.y / 12) + 1;
            
            if (1);
            
            if ((arg0[1].unk_dbunkstruct_0x44 <= 0) || ((s32)arg0[1].unk_dbunkstruct_0x48 < arg0[1].unk_dbunkstruct_0x44)) 
            {
                arg0[1].unk_dbunkstruct_0x44 = 0;
            }
        } 
        else 
        {
            arg0[1].unk_dbunkstruct_0x44 = 0;
        }
        
        if (arg0[1].unk_dbunkstruct_0x44 != var_s3) 
        {
            ((dbFunction*)(var_s0)) = arg0->unk_dbunkstruct_0x20->db_func;
            ((dbFunction*)(var_s0))[35].unk_dbfunc_0x4(((dbFunction*)(var_s0))[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk_dbunkstruct_0x20, 1);
            var_s3 = arg0[1].unk_dbunkstruct_0x44;
        }

        gcSleepCurrentGObjThread(1);
        
        var_s0 = arg0;
        if (arg0 != NULL) 
        {
            var_s0 = arg0->unk_dbunkstruct_0x20;
        }
    }
    
    return arg0[1].unk_dbunkstruct_0x44;
}

// 0x80380920
s32 func_ovl8_80380920(dbUnknown7* arg0)
{
	Vec3i sp3C;
	dbUnknown7* var_s1;
	dbUnknown7* var_v0;
	s32 var_s2;

	var_s2 = arg0->unkAC[0];

    var_s1 = arg0->unk20->db_func;
    ((dbFunction*)var_s1)[35].unk_dbfunc_0x4(((dbFunction*)var_s1)[35].unk_dbfunc_0x0 + (uintptr_t) arg0->unk20, 1);
    
	func_ovl8_80380AD0(arg0);

    while (TRUE)
    {
    	if (func_ovl8_8037D384() != 0) 
        {
            func_ovl8_8037D3AC(&sp3C);
            
            var_s1 = arg0;
            if (arg0) var_s1 = (dbUnknown7*)arg0->unk20;
            
            if (((((s32*)&sp3C)[0]) & var_s1->unk30))
            {
                break;
            }
            var_s1 = arg0;
            if (arg0) var_s1 = (dbUnknown7*)arg0->unk20;
            
            if ((((s32*)&sp3C)[0]) & var_s1->unk34) 
            {
                arg0->unkAC[0] = 0;
                break;
            }

            var_s1 = arg0;
            if (arg0) var_s1 = (dbUnknown7*)arg0->unk20;
            
            if (((((s32*)&sp3C)[0]) & var_s1->unk38) || ((var_v0 = arg0, (var_v0 = (arg0 ? ((dbUnknown7*)arg0->unk20) : var_v0)), var_v0)->unk38) & (((s32)var_v0) = sp3C.y)) 
            {
                arg0->unkAC[0]--;
                
                if (arg0->unkAC[0] <= 0) arg0->unkAC[0] = arg0->unkAC[1];
            }
            
            var_s1 = arg0;
            if (arg0) var_s1 = (dbUnknown7*)arg0->unk20;
            
            if ((var_s1->unk3C[0] & (((s32*)&sp3C)[0])) || ((var_v0 = arg0, (var_v0 = (arg0 ? ((dbUnknown7*)arg0->unk20) : var_v0)), var_v0)->unk3C[0]) & (((s32)var_v0) = sp3C.y))
            {
                arg0->unkAC[0]++;
                if (arg0->unkAC[1] < arg0->unkAC[0]) {
                    arg0->unkAC[0] = 1;
                }
            }
        }

        if (var_s2 != arg0->unkAC[0])
        {
            var_s1 = arg0->unk20->db_func;
            ((dbFunction*)var_s1)[35].unk_dbfunc_0x4(((dbFunction*)var_s1)[35].unk_dbfunc_0x0 + (uintptr_t)arg0->unk20, 1);
            var_s2 = arg0->unkAC[0];
            
            func_ovl8_80380AD0(arg0);
        }
        
        gcSleepCurrentGObjThread(1);
    }
    
	return arg0->unkAC[0];
}

// 0x80380AD0
void func_ovl8_80380AD0(dbUnknown7* arg0) 
{
    Vec2h pos;
    u16 sp22;
    u16 sp20;
    dbFunction* temp_v0;

    if (arg0->unkAC[0]) {
        
        pos.x = arg0->unkAC[3] + 2;
        pos.y = arg0->unkAC[4] * arg0->unkAC[0];
    
        temp_v0 = arg0->unk20->db_func;
        temp_v0[9].unk_dbfunc_0x4(((u8*)arg0->unk20 + temp_v0[9].unk_dbfunc_0x0), &pos.x);
        
        func_ovl8_80375BA0(D_8038EFCC_1AB81C, &sp22, &sp20);
        
        pos.x -= sp22;
        pos.y -= sp20;
        func_ovl8_80375BD0(&pos.x);
    }
}


// 0x80380B6C
dbUnknown5* func_ovl8_80380B6C(dbUnknown5 *arg0, dbUnknownLinkStruct *arg1, dbUnknownLink *arg2, DBMenu *arg3, s32 arg4) 
{
    if (arg0 != NULL || ((arg0 = func_ovl8_803717A0(0x130)) != NULL))
    {
        if (arg1 == NULL)
        {
            arg1 = &arg0->unk_dbunk5_0xD4;\
            arg2 = &arg0->unk_dbunk5_0xC8;
            #line 1022
            func_ovl8_803717E0(arg1);
            func_ovl8_8037C2D0(arg2);
            #line 1029
        }
        
        func_ovl8_80380048(arg0, arg1, arg2, arg3, arg4);
        arg0->db_func = &D_ovl8_8038B720,
        arg1->db_func = &D_ovl8_8038B7F0;
        arg2->unk_dbunklink_0x8 = &D_ovl8_8038B948;
        arg0->unk_dbunk5_0x44.ls = &D_ovl8_8038B970;
    }
    
    return arg0;
}

// 0x80380C30
void func_ovl8_80380C30(dbUnknown5* arg0) 
{
    s32 var_s1;
    u8* sp60;
    u8* sp5C;
    dbUnknownLinkStruct* temp_s3;
    dbUnknownLinkStruct* var_v0;
    s32 var_s4;
    Vec2h sp4C;

    temp_s3 = arg0->unk_dbunk5_0xB4;
    var_s4 = 0;
    
    if (((s32*)temp_s3)[2])  // definitely wrong type
    {
        memcpy(arg0->unk_dbunk5_0x40.ls->unk_dbunkstruct_0x20, ((s32*)temp_s3)[2], 0x200);
    }
    
    var_v0 = (dbUnknownLinkStruct*) arg0;
    if (arg0 ) 
    {
        var_v0 = arg0->unk_dbunk5_0x20.ls;
    }
    
    if (var_v0->unk_dbunkstruct_0x24 == 6) 
    {
        var_s4 = func_ovl8_803716D8(temp_s3->position.x * arg0->unk_dbunk5_0xBC);
    }
    
    for (var_s1 = 0; arg0->unk_dbunk5_0xB0 > var_s1; var_s1++) 
    {
        sp4C.x = 0;
        sp4C.y = arg0->unk_dbunk5_0xBC * (0, var_s1);
        
        var_v0 = ((var_s1 + 1) == (s32)arg0->unk_dbunk5_0xAC) 
            ? ((Vec2i*)(temp_s3->unk_dbunkstruct_0xC))[var_s1].y  // definitely wrong type
            : ((Vec2i*)(temp_s3->unk_dbunkstruct_0xC))[var_s1].x; // definitely wrong type
        
        sp60 = var_v0;
        
        if (var_v0 != 0) 
        {
            var_v0 = arg0;
            if (arg0 != 0) 
            {
                var_v0 = arg0->unk_dbunk5_0x20.ls;
            }
            
            if (var_v0->unk_dbunkstruct_0x24 == 6) 
            {
                sp5C = var_s4;
                func_ovl8_8037C1D4(&sp60, &sp5C, temp_s3->position.x * arg0->unk_dbunk5_0xBC);
                sp60 = var_s4;
            }
            
            func_ovl8_803798A0(arg0->unk_dbunk5_0x40.str, sp60, arg0->unk_dbunk5_0xB8[0], arg0->unk_dbunk5_0xBC, &sp4C, 4);
        }
    }
    if (var_s4) 
    {
        func_ovl8_80371764(var_s4);
    }
}

// 0x80380DD8
void func_ovl8_80380DD8(s32 arg0, db4Shorts* arg1, s32* arg2, s32* arg3, s32* arg4, s32* arg5)
{
    *arg2 = arg1->arr[0];
    *arg3 = arg1->arr[1];
    *arg4 = *arg2 * arg1->arr[2];
    *arg5 = arg1->arr[2];
}

// 0x80380E14
void func_ovl8_80380E14(dbUnknown3* arg0, s32 arg1)
{
    if (arg0 != NULL)
    {
        arg0->unk_dbunk3_0x18 = &D_ovl8_8038B720;\
        arg0->unk_dbunk3_0x20->unk_dbunk3_0x58 = &D_ovl8_8038B7F0;
        arg0->unk_dbunk3_0x1C->unk_dbunklink_0x8 = &D_ovl8_8038B948;
        arg0->unk_dbunk3_0x44 = &D_ovl8_8038B970;

        func_ovl8_8038011C(arg0, 0);

        if (arg1 != 0)
        {
            func_ovl8_8037C30C(arg0->unk_dbunk3_0x1C, 0);
            func_ovl8_803718C4(arg0->unk_dbunk3_0x20, 0);
        }

        if (arg1 & 1)
        {
            func_ovl8_803717C0(arg0);
        }
    }
}
