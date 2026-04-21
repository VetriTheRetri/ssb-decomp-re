#include <sys/objman.h>
#include <sys/develop.h>
#include <db/debug.h>


/* ************************************************************************** */
/*                                DATA                                        */
/* ************************************************************************** */

extern s32 D_ovl8_80387F00;
extern s32 D_ovl8_80387F04;
extern s32 D_ovl8_80387F08;
extern s32 D_ovl8_80387F0C;
extern s32 D_ovl8_80387F10;
extern s32 D_ovl8_80387F14;
extern s32 D_ovl8_80387F18;
extern s32 D_ovl8_80387F1C;
extern s32 D_ovl8_80387F20;
extern s32 D_ovl8_80387F24;
extern s32 D_ovl8_80387F28;
extern s32 D_ovl8_80387F2C;
extern s32 D_ovl8_80387F30;
extern s32 D_ovl8_80387F34;
extern s32 D_ovl8_80387F38;

extern sb32 func_ovl8_803718C4();
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
extern sb32 func_ovl8_80371ABC();
extern sb32 func_ovl8_80371AC4();
extern sb32 func_ovl8_80371ACC();
extern sb32 func_ovl8_80371AD8();
extern sb32 func_ovl8_80371B34();
extern sb32 func_ovl8_80371B98();
extern sb32 func_ovl8_80371BCC();
extern sb32 func_ovl8_80371C1C();
extern sb32 func_ovl8_80371C2C();
extern sb32 func_ovl8_80371C50();
extern sb32 func_ovl8_80371C8C();
extern sb32 func_ovl8_80371CB8();
extern sb32 func_ovl8_80371D00();
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
extern sb32 func_ovl8_803720D4();
extern sb32 func_ovl8_8037217C();
extern sb32 func_ovl8_803721E8();
extern sb32 func_ovl8_80372224();
extern sb32 func_ovl8_80372250();
extern sb32 func_ovl8_803722A0();
extern sb32 func_ovl8_803722F0();
extern sb32 func_ovl8_80372348();
extern sb32 func_ovl8_80372358();
extern sb32 func_ovl8_80372360();
extern sb32 func_ovl8_80372554();
extern sb32 func_ovl8_803725DC();
extern sb32 func_ovl8_803726CC();
extern sb32 func_ovl8_8037295C();
extern sb32 func_ovl8_80372A3C();
extern sb32 func_ovl8_80372A48();
extern sb32 func_ovl8_80372A94();
extern sb32 func_ovl8_80372B40();
extern sb32 func_ovl8_80372B6C();
extern sb32 func_ovl8_80372D18();
extern sb32 func_ovl8_80372D70();
extern sb32 func_ovl8_80372DC8();
extern sb32 func_ovl8_80372DD8();
extern sb32 func_ovl8_80372DE8();
extern sb32 func_ovl8_80372E40();
extern sb32 func_ovl8_80372FEC();
extern sb32 func_ovl8_80373044();
extern sb32 func_ovl8_803730DC();
extern sb32 func_ovl8_80373118();
extern sb32 func_ovl8_80373138();
extern sb32 func_ovl8_803732B0();
extern sb32 func_ovl8_8037354C();
extern sb32 func_ovl8_80373640();
extern sb32 func_ovl8_80373648();
extern sb32 func_ovl8_80373650();
extern sb32 func_ovl8_8037367C();
extern sb32 func_ovl8_80373684();
extern sb32 func_ovl8_8037368C();
extern sb32 func_ovl8_80373694();
extern sb32 func_ovl8_80373750();
extern sb32 func_ovl8_80373790();
extern sb32 func_ovl8_803737DC();
extern sb32 func_ovl8_80373828();
extern sb32 func_ovl8_8037383C();
extern sb32 func_ovl8_80373930();
extern sb32 func_ovl8_80373980();
extern sb32 func_ovl8_80373988();
extern sb32 func_ovl8_80373990();
extern sb32 func_ovl8_80373A28();
extern sb32 func_ovl8_80373ABC();
extern sb32 func_ovl8_80373AC4();
extern sb32 func_ovl8_80373B28();
extern sb32 func_ovl8_80373B84();
extern sb32 func_ovl8_80373BC0();
extern sb32 func_ovl8_80373BD4();
extern sb32 func_ovl8_80373D88();
extern sb32 func_ovl8_80373E24();
extern sb32 func_ovl8_80373EA8();
extern sb32 func_ovl8_803743C0();
extern sb32 func_ovl8_803743D8();
extern sb32 func_ovl8_80375270();
extern sb32 func_ovl8_80375354();
extern sb32 func_ovl8_80375528();
extern sb32 func_ovl8_803755C4();
extern sb32 func_ovl8_80375864();
extern sb32 func_ovl8_80375B04();
extern sb32 func_ovl8_80375BEC();
extern sb32 func_ovl8_803761F4();
extern sb32 func_ovl8_803762AC();
extern sb32 func_ovl8_803762B4();
extern sb32 func_ovl8_803764C8();
extern sb32 func_ovl8_803768E0();
extern sb32 func_ovl8_803769AC();
extern sb32 func_ovl8_803769B4();
extern sb32 func_ovl8_803769D4();
extern sb32 func_ovl8_80376A04();
extern sb32 func_ovl8_80376A48();
extern sb32 func_ovl8_80376AA4();
extern sb32 func_ovl8_80376ADC();

void func_ovl8_8037C30C(dbUnknownLink *arg0, s32 arg1);
s32 func_ovl8_8037C344(s32 arg0, s32 arg1, s32 arg2);
s32 func_ovl8_8037C358(dbUnknown5_2 *arg0, s32 arg1, s32 arg2);

DBMenu D_ovl8_80387F40[17] = {
	{ { 48, 37, 63, 122 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 1, 0, 'KyPd', 0, 0, 0, 0 },
	{ { 4, 64, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F00 },
	{ { 24, 64, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F04 },
	{ { 44, 64, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F08 },
	{ { 4, 44, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F0C },
	{ { 24, 44, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F10 },
	{ { 44, 44, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F14 },
	{ { 4, 24, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F18 },
	{ { 24, 24, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F1C },
	{ { 44, 24, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F20 },
	{ { 4, 84, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F24 },
	{ { 24, 84, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80387F28 },
	{ { 36, 104, 24, 16 }, { 0, 0, 0, 255 }, { 66, 176, 128, 255 }, 2, 0, 'STBN', 0x81, 0, 0, (s32)&D_ovl8_80387F2C },
	{ { 4, 104, 24, 16 }, { 0, 0, 0, 255 }, { 127, 127, 255, 255 }, 2, 0, 'STBN', 0x84, 0, 0, (s32)&D_ovl8_80387F30 },
	{ { 44, 84, 16, 16 }, { 0, 0, 0, 255 }, { 255, 46, 46, 255 }, 2, 0, 'STBN', 0x83, 0, 0, (s32)&D_ovl8_80387F34 },
	{ { 4, 4, 56, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'SLED', 1, 0, 0, (s32)&D_ovl8_80387F38 },
	{ { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0, 0, 0, 0, 0, 0 },
};

char D_ovl8_803881E8[2] = "A";

char D_ovl8_803881EC[2] = "B";

char D_ovl8_803881F0[2] = "C";

char D_ovl8_803881F4[2] = "D";

char D_ovl8_803881F8[2] = "E";

char D_ovl8_803881FC[2] = "F";

char D_ovl8_80388200[2] = "G";

char D_ovl8_80388204[2] = "Q";

char D_ovl8_80388208[2] = "W";

char D_ovl8_8038820C[2] = "R";

char D_ovl8_80388210[2] = "T";

char D_ovl8_80388214[2] = "Y";

char D_ovl8_80388218[2] = "U";

char D_ovl8_8038821C[2] = "I";

char D_ovl8_80388220[2] = "O";

char D_ovl8_80388224[2] = "P";

char D_ovl8_80388228[2] = "S";

char D_ovl8_8038822C[2] = "H";

char D_ovl8_80388230[2] = "J";

char D_ovl8_80388234[2] = "K";

char D_ovl8_80388238[2] = "L";

char D_ovl8_8038823C[2] = "Z";

char D_ovl8_80388240[2] = "X";

char D_ovl8_80388244[2] = "V";

char D_ovl8_80388248[2] = "N";

char D_ovl8_8038824C[2] = "M";

char D_ovl8_80388250[2] = "1";

char D_ovl8_80388254[2] = "2";

char D_ovl8_80388258[2] = "3";

char D_ovl8_8038825C[2] = "4";

char D_ovl8_80388260[2] = "5";

char D_ovl8_80388264[2] = "6";

char D_ovl8_80388268[2] = "7";

char D_ovl8_8038826C[2] = "8";

char D_ovl8_80388270[2] = "9";

char D_ovl8_80388274[2] = "0";

char D_ovl8_80388278[6] = "SPACE";

char D_ovl8_80388280[3] = "OK";

char D_ovl8_80388284[4] = "DEL";

char D_ovl8_80388288[3] = "No";

char D_ovl8_8038828C[8] = "Caption";

char D_ovl8_80388294[2] = ".";

DBMenu D_ovl8_80388298[44] = {
	{ { 9, 4, 214, 133 }, { 0, 0, 0, 255 }, { 127, 127, 127, 255 }, 1, 0, 'KyWn', 0, 0, 0, 0 },
	{ { 16, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881E8 },
	{ { 104, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881EC },
	{ { 64, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881F0 },
	{ { 56, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881F4 },
	{ { 48, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881F8 },
	{ { 76, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_803881FC },
	{ { 96, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388200 },
	{ { 8, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388204 },
	{ { 28, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388208 },
	{ { 68, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038820C },
	{ { 88, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388210 },
	{ { 108, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388214 },
	{ { 128, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388218 },
	{ { 148, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038821C },
	{ { 168, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388220 },
	{ { 188, 52, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388224 },
	{ { 36, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388228 },
	{ { 116, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038822C },
	{ { 136, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388230 },
	{ { 156, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388234 },
	{ { 176, 72, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388238 },
	{ { 24, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038823C },
	{ { 44, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388240 },
	{ { 84, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388244 },
	{ { 124, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388248 },
	{ { 144, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038824C },
	{ { 4, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388250 },
	{ { 24, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388254 },
	{ { 44, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388258 },
	{ { 64, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038825C },
	{ { 84, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388260 },
	{ { 104, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388264 },
	{ { 124, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388268 },
	{ { 144, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_8038826C },
	{ { 164, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388270 },
	{ { 184, 32, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388274 },
	{ { 8, 112, 64, 16 }, { 0, 0, 0, 255 }, { 179, 179, 179, 255 }, 2, 0, 'STBN', 0x82, 0, 0, (s32)&D_ovl8_80388278 },
	{ { 168, 112, 36, 16 }, { 0, 0, 0, 255 }, { 255, 127, 128, 255 }, 2, 0, 'STBN', 0x81, 0, 0, (s32)&D_ovl8_80388280 },
	{ { 80, 112, 40, 16 }, { 0, 0, 0, 255 }, { 204, 204, 63, 255 }, 2, 0, 'STBN', 0x83, 0, 0, (s32)&D_ovl8_80388284 },
	{ { 128, 112, 36, 16 }, { 0, 0, 0, 255 }, { 127, 127, 255, 255 }, 2, 0, 'STBN', 0x84, 0, 0, (s32)&D_ovl8_80388288 },
	{ { 21, 6, 167, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'SLED', 1, 0, 0, (s32)&D_ovl8_8038828C },
	{ { 164, 92, 16, 16 }, { 0, 0, 0, 255 }, { 255, 255, 255, 255 }, 2, 0, 'STBN', 0x80, 0, 0, (s32)&D_ovl8_80388294 },
	{ { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, 0, 0, 0, 0, 0, 0, 0 },
};

s32 D_ovl8_80388978[2] = { 0, 0 };

dbFunction D_ovl8_80388980[] = {
	{0, NULL},
	{0, func_ovl8_803718C4},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{0, func_ovl8_80371ABC},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{0, func_ovl8_80371C1C},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{0, func_ovl8_80371D00},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
	{0, NULL},
};

dbFunction D_ovl8_80388AE0[] = {
	{0, NULL},
	{0, func_ovl8_803720D4},
	{0, func_ovl8_8037217C},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, NULL},
};

dbFunction D_ovl8_80388B40[] = {
	{0, NULL},
	{(s16)0xFFEC, func_ovl8_803720D4},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFEC, func_ovl8_8037217C},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{0, func_ovl8_80371C1C},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFEC, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFEC, func_ovl8_80372358},
	{0, func_ovl8_80371D00},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

s32 D_ovl8_80388C98[] = {
	0xFFFFFFFF, 0x00000000
};

dbFunction D_ovl8_80388CA0[] = {
	{0, NULL},
	{0, func_ovl8_80372554},
	{0, func_ovl8_803725DC},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, func_ovl8_803726CC},
	{0, NULL},
};

dbFunction D_ovl8_80388D08[] = {
	{0, NULL},
	{(s16)0xFFEC, func_ovl8_80372554},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFEC, func_ovl8_803725DC},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{0, func_ovl8_80371C1C},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFEC, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFEC, func_ovl8_80372358},
	{0, func_ovl8_80371D00},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{(s16)0xFFEC, func_ovl8_803726CC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80388E60[] = {
	{0, NULL},
	{0, func_ovl8_8037295C},
	{0, func_ovl8_80372B40},
	{0, func_ovl8_80375528},
	{0, func_ovl8_803755C4},
	{0, func_ovl8_80375864},
	{0, func_ovl8_80372A3C},
	{0, func_ovl8_80372A48},
	{0, func_ovl8_80372A94},
	{0, func_ovl8_80372B6C},
	{0, func_ovl8_80372D18},
	{0, func_ovl8_80372D70},
	{0, func_ovl8_80372DC8},
	{0, func_ovl8_80372DD8},
	{0, func_ovl8_80372DE8},
	{0, func_ovl8_80372E40},
	{0, func_ovl8_80372FEC},
	{0, func_ovl8_80373044},
	{0, func_ovl8_803730DC},
	{0, func_ovl8_80373118},
	{0, func_ovl8_80373138},
	{0, func_ovl8_803732B0},
	{0, NULL},
};

dbFunction D_ovl8_80388F18[] = {
	{0, NULL},
	{(s16)0xFFC8, func_ovl8_8037295C},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFC8, func_ovl8_80372B40},
	{0, func_ovl8_80371AC4},
	{(s16)0xFFC8, func_ovl8_80372A94},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFC8, func_ovl8_80372B6C},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{0, func_ovl8_80371D00},
	{(s16)0xFFC8, func_ovl8_80372D70},
	{(s16)0xFFC8, func_ovl8_80372DC8},
	{(s16)0xFFC8, func_ovl8_80372D18},
	{(s16)0xFFC8, func_ovl8_80372DD8},
	{(s16)0xFFC8, func_ovl8_80373118},
	{(s16)0xFFC8, func_ovl8_80373138},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{(s16)0xFFC8, func_ovl8_80372DE8},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{(s16)0xFFC8, func_ovl8_803732B0},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80389070[] = {
	{0, NULL},
	{(s16)0xFF6C, func_ovl8_8037295C},
	{(s16)0xFF6C, func_ovl8_803730DC},
	{0, func_ovl8_8037C358},
	{0, NULL},
	{0, NULL},
};

dbFunction D_ovl8_803890A0[] = {
	{0, NULL},
	{0, func_ovl8_8037354C},
	{0, func_ovl8_80373640},
	{0, func_ovl8_80373648},
	{0, func_ovl8_80373650},
	{0, func_ovl8_8037367C},
	{0, func_ovl8_80373684},
	{0, func_ovl8_8037368C},
	{0, func_ovl8_80373694},
	{0, func_ovl8_80373750},
	{0, func_ovl8_80373790},
	{0, func_ovl8_803737DC},
	{0, func_ovl8_80373828},
	{0, func_ovl8_8037383C},
	{0, func_ovl8_80373930},
	{0, func_ovl8_80373980},
	{0, func_ovl8_80373988},
	{0, func_ovl8_80373990},
	{0, func_ovl8_80373A28},
	{0, func_ovl8_80373ABC},
	{0, func_ovl8_80373AC4},
	{0, func_ovl8_80373B28},
	{0, func_ovl8_80373B84},
	{0, func_ovl8_80373BC0},
	{0, func_ovl8_80373BD4},
	{0, NULL},
};

dbFunction D_ovl8_80389170[] = {
	{0, NULL},
	{(s16)0xFFB8, func_ovl8_8037354C},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFB8, func_ovl8_80373648},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFB8, func_ovl8_80373650},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{(s16)0xFFB8, func_ovl8_80373640},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_803892C8[] = {
	{0, NULL},
	{(s16)0xFFC4, func_ovl8_8037354C},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_803892F0[] = {
	{0, NULL},
	{0, func_ovl8_80373D88},
	{0, func_ovl8_80373640},
	{0, func_ovl8_80373648},
	{0, func_ovl8_80373650},
	{0, func_ovl8_8037367C},
	{0, func_ovl8_80373684},
	{0, func_ovl8_8037368C},
	{0, func_ovl8_80373694},
	{0, func_ovl8_80373750},
	{0, func_ovl8_80373790},
	{0, func_ovl8_803737DC},
	{0, func_ovl8_80373E24},
	{0, func_ovl8_80373EA8},
	{0, func_ovl8_80373930},
	{0, func_ovl8_80373980},
	{0, func_ovl8_80373988},
	{0, func_ovl8_80373990},
	{0, func_ovl8_80373A28},
	{0, func_ovl8_80373ABC},
	{0, func_ovl8_80373AC4},
	{0, func_ovl8_80373B28},
	{0, func_ovl8_80373B84},
	{0, func_ovl8_803743D8},
	{0, func_ovl8_80373BD4},
	{0, func_ovl8_803743C0},
	{0, NULL},
};

dbFunction D_ovl8_803893C8[] = {
	{0, NULL},
	{(s16)0xFFC0, func_ovl8_80373D88},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFC0, func_ovl8_80373648},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFC0, func_ovl8_80373650},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{(s16)0xFFC0, func_ovl8_80373640},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80389520[] = {
	{0, NULL},
	{(s16)0xFF64, func_ovl8_80373D88},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
	{0, NULL},
};

dbUnknown8_SC D_ovl8_80389550[] = {
	{ 0, 0, 0, 0, 0x0000FFFF },
	{ 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_80389580[] = {
	{ 0, 0, -32768, -32768, 60 },
	{ 32767, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_80389598[] = {
	{ 0, -32767, -32767, -32768, 33 },
	{ -32768, -32767, -32768, -32767, 53 },
	{ -32767, -32768, -32768, -32768, 53 },
	{ -32768, -32768, -32768, -32768, 93 },
	{ 32767, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_803895D4[] = {
	{ 0, 0, -32768, -32768, 60 },
	{ -32767, 0, -32768, -32768, 33 },
	{ 32767, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_803895F8[] = {
	{ 0, 0, -32768, -32768, 60 },
	{ 0, 0, 1, -32768, 93 },
	{ 32767, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_8038961C[] = {
	{ 0, 0, -32768, -32768, 60 },
	{ 32767, 0, 0, 0, 0 }
};

dbUnknown8_SC D_ovl8_80389634[] = {
	{ 1, 0, -32768, 1, 93 },
	{ 0, 0, 0, 0, 33 },
	{ 1, 0, 1, 0, 53 },
	{ 0, 1, 0, 1, 53 },
	{ 32767, 0, 0, 0, 0 }
};

dbFunction D_ovl8_80389670[] = {
	{0, NULL},
	{0, func_ovl8_80375270},
	{0, func_ovl8_80375354},
	{0, func_ovl8_80375528},
	{0, func_ovl8_803755C4},
	{0, func_ovl8_80375864},
	{0, NULL},
};

dbFunction D_ovl8_803896A8[] = {
	{0, NULL},
	{(s16)0xFFD0, func_ovl8_80375270},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFD0, func_ovl8_80375354},
	{0, func_ovl8_80371AC4},
	{0, func_ovl8_80371ACC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{0, func_ovl8_80371C1C},
	{0, func_ovl8_80371C2C},
	{0, func_ovl8_80371C50},
	{0, func_ovl8_80371C8C},
	{0, func_ovl8_80371CB8},
	{0, func_ovl8_80371D00},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80389800[] = {
	{0, NULL},
	{(s16)0xFFDC, func_ovl8_80375270},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
	{0, NULL},
};

dbFunction D_ovl8_80389830[] = {
	{0, NULL},
	{0, func_ovl8_80375B04},
	{0, func_ovl8_8037217C},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, func_ovl8_80375BEC},
	{0, NULL},
};

dbFunction D_ovl8_80389898[] = {
	{0, NULL},
	{(s16)0xFFE0, func_ovl8_80375B04},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFE0, func_ovl8_8037217C},
	{0, func_ovl8_80371AC4},
	{(s16)0xFFE0, func_ovl8_80375BEC},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{0, func_ovl8_80371C1C},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFE0, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFE0, func_ovl8_80372358},
	{0, func_ovl8_80371D00},
	{0, func_ovl8_80371D08},
	{0, func_ovl8_80371D64},
	{0, func_ovl8_80371D74},
	{0, func_ovl8_80371DC0},
	{0, func_ovl8_80371DD0},
	{0, func_ovl8_80371DDC},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{0, func_ovl8_80371DFC},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{0, func_ovl8_80371E1C},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_803899F0[] = {
	{0, NULL},
	{0, func_ovl8_803761F4},
	{0, func_ovl8_803762B4},
	{0, func_ovl8_80375528},
	{0, func_ovl8_803755C4},
	{0, func_ovl8_80375864},
	{0, func_ovl8_803762AC},
	{0, func_ovl8_80372A48},
	{0, func_ovl8_80372A94},
	{0, func_ovl8_803764C8},
	{0, func_ovl8_80372D18},
	{0, func_ovl8_80372D70},
	{0, func_ovl8_80372DC8},
	{0, func_ovl8_80372DD8},
	{0, func_ovl8_80372DE8},
	{0, func_ovl8_80372E40},
	{0, func_ovl8_80372FEC},
	{0, func_ovl8_80373044},
	{0, func_ovl8_803730DC},
	{0, func_ovl8_80373118},
	{0, func_ovl8_80373138},
	{0, func_ovl8_803732B0},
	{0, NULL},
};

dbFunction D_ovl8_80389AA8[] = {
	{0, NULL},
	{(s16)0xFFB4, func_ovl8_803761F4},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFB4, func_ovl8_803762B4},
	{0, func_ovl8_80371AC4},
	{(s16)0xFFB4, func_ovl8_80372A94},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFB4, func_ovl8_803764C8},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFEC, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFEC, func_ovl8_80372358},
	{0, func_ovl8_80371D00},
	{(s16)0xFFB4, func_ovl8_80372D70},
	{(s16)0xFFB4, func_ovl8_80372DC8},
	{(s16)0xFFB4, func_ovl8_80372D18},
	{(s16)0xFFB4, func_ovl8_80372DD8},
	{(s16)0xFFB4, func_ovl8_80373118},
	{(s16)0xFFB4, func_ovl8_80373138},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{(s16)0xFFB4, func_ovl8_80372DE8},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{(s16)0xFFB4, func_ovl8_803732B0},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80389C00[] = {
	{0, NULL},
	{(s16)0xFF58, func_ovl8_803761F4},
	{(s16)0xFF58, func_ovl8_803730DC},
	{0, func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_80389C28[] = {
	{0, NULL},
	{(s16)0xFFC8, func_ovl8_803761F4},
	{(s16)0xFFC8, func_ovl8_803762B4},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, NULL},
	{0, NULL},
};

dbFunction D_ovl8_80389C90[] = {
	{0, NULL},
	{0, func_ovl8_803768E0},
	{0, func_ovl8_80376A04},
	{0, func_ovl8_80375528},
	{0, func_ovl8_803755C4},
	{0, func_ovl8_80375864},
	{0, func_ovl8_803769AC},
	{0, func_ovl8_803769B4},
	{0, func_ovl8_80372A94},
	{0, func_ovl8_803769D4},
	{0, func_ovl8_80372D18},
	{0, func_ovl8_80372D70},
	{0, func_ovl8_80376A48},
	{0, func_ovl8_80376AA4},
	{0, func_ovl8_80372DE8},
	{0, func_ovl8_80372E40},
	{0, func_ovl8_80376ADC},
	{0, func_ovl8_80373044},
	{0, func_ovl8_803730DC},
	{0, func_ovl8_80373118},
	{0, func_ovl8_80373138},
	{0, func_ovl8_803732B0},
	{0, NULL},
};

dbFunction D_ovl8_80389D48[] = {
	{0, NULL},
	{(s16)0xFFB4, func_ovl8_803768E0},
	{0, func_ovl8_803718FC},
	{0, func_ovl8_80371930},
	{0, func_ovl8_80371960},
	{0, func_ovl8_80371968},
	{0, func_ovl8_80371970},
	{0, func_ovl8_80371978},
	{0, func_ovl8_80371980},
	{0, func_ovl8_803719A4},
	{0, func_ovl8_803719C8},
	{0, func_ovl8_80371A2C},
	{(s16)0xFFB4, func_ovl8_80376A04},
	{0, func_ovl8_80371AC4},
	{(s16)0xFFB4, func_ovl8_80372A94},
	{0, func_ovl8_80371AD8},
	{0, func_ovl8_80371B34},
	{0, func_ovl8_80371B98},
	{0, func_ovl8_80371BCC},
	{(s16)0xFFB4, func_ovl8_803769D4},
	{0, func_ovl8_80371C2C},
	{(s16)0xFFEC, func_ovl8_80372224},
	{0, func_ovl8_80371C8C},
	{(s16)0xFFEC, func_ovl8_80372358},
	{0, func_ovl8_80371D00},
	{(s16)0xFFB4, func_ovl8_80372D70},
	{(s16)0xFFB4, func_ovl8_80376A48},
	{(s16)0xFFB4, func_ovl8_80372D18},
	{(s16)0xFFB4, func_ovl8_80376AA4},
	{(s16)0xFFB4, func_ovl8_80373118},
	{(s16)0xFFB4, func_ovl8_80373138},
	{0, func_ovl8_80371DE4},
	{0, func_ovl8_80371DEC},
	{0, func_ovl8_80371DF4},
	{(s16)0xFFB4, func_ovl8_80372DE8},
	{0, func_ovl8_80371E04},
	{0, func_ovl8_80371E0C},
	{0, func_ovl8_80371E14},
	{(s16)0xFFB4, func_ovl8_803732B0},
	{0, func_ovl8_80371E24},
	{0, func_ovl8_80371E2C},
	{0, func_ovl8_80371E58},
	{0, NULL},
};

dbFunction D_ovl8_80389EA0[] = {
	{0, NULL},
	{(s16)0xFF54, func_ovl8_803768E0},
	{(s16)0xFF54, func_ovl8_803730DC},
	{0, func_ovl8_8037C358},
	{0, NULL},
};

dbFunction D_ovl8_80389EC8[] = {
	{0, NULL},
	{(s16)0xFFC8, func_ovl8_803768E0},
	{(s16)0xFFC8, func_ovl8_80376A04},
	{0, func_ovl8_803721E8},
	{0, func_ovl8_80372224},
	{0, func_ovl8_80372250},
	{0, func_ovl8_803722A0},
	{0, func_ovl8_803722F0},
	{0, func_ovl8_80372348},
	{0, func_ovl8_80372358},
	{0, func_ovl8_80372360},
	{0, NULL},
	{0, NULL},
};

s16 D_ovl8_80389F30[2] = { 0xFFFF, 0x0000 };

s16 D_ovl8_80389F34[2] = { 0xFFFF, 0x0000 };

s16 D_ovl8_80389F38[2] = { 0xFFFF, 0x0000 };

s16 D_ovl8_80389F3C[2] = { 0xFFFF, 0x0000 };

s16 D_ovl8_80389F40[2] = { 0x0001, 0x0000 };

s16 D_ovl8_80389F44[2] = { 0x0001, 0x0000 };

s32 D_ovl8_80389F48 = 0xFFFFFFFF;

s32 D_ovl8_80389F4C = 0x000000FF;

dbUnknown8_SC D_ovl8_80389F50[] = {
	{ -256, 255, 255, 255, 0x0000FFFF }
};

char D_ovl8_80389F5C[1] = "";

s32 D_ovl8_80389F60 = 0x00000004;

s32 D_ovl8_80389F64 = 0x00000000;

s32 D_ovl8_80389F68[] = {
	0x00000000, 0x7FFF7FFF
};

Sprite D_ovl8_80389F70 = {
	0, 0,
	0, 0,
	1.0f, 1.0f,
	0, 0,
	SP_FASTCOPY | SP_TEXSHUF, 4660,
	255, 255, 255, 255,
	0, 0,
	NULL,
	0, 1,
	1, 36,
	0, 0,
	0, 2,
	NULL,
	NULL,
	NULL,
	0, 0,
};

dbUnknown8_SC D_ovl8_80389FB4[] = {
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

dbUnknown8_SC D_ovl8_8038A068[] = {
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

s32 D_ovl8_8038A11C[] = {
	0x00000000, 0x028001E0, 0x0000FFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000
};

s32 D_ovl8_8038A144[] = {
	0x00000000, 0x00100010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000
};

dbFunction D_ovl8_8038A170[] = {
	{0, NULL},
	{0, (sb32(*)())func_ovl8_8037C30C},
	{0, func_ovl8_8037C344},
	{0, func_ovl8_8037C358},
	{0, NULL},
	{0, NULL},
};

/* ************************************************************************** */
/*                              FUNCTIONS                                     */
/* ************************************************************************** */

// 0x8037C2D0
void *func_ovl8_8037C2D0(void **arg0)
{
	if (arg0 != NULL || (arg0 = func_ovl8_803717A0(0xC)))
		arg0[0x8 / 4] = &D_ovl8_8038A170;

	return arg0;
}

// 0x8037C30C
void func_ovl8_8037C30C(dbUnknownLink *arg0, s32 arg1)
{
	if (arg0 == NULL)
		return;

	arg0->unk_dbunklink_0x8 = (dbUnknownLink *)&D_ovl8_8038A170;

	if (arg1 & 1)
		func_ovl8_803717C0(arg0);
}

// 0x8037C344
s32 func_ovl8_8037C344(s32 arg0, s32 arg1, s32 arg2)
{
	return 0;
}

// 0x8037C358
s32 func_ovl8_8037C358(dbUnknown5_2 *arg0, s32 arg1, s32 arg2)
{
	dbUnknown5_2 *temp_a3;
	dbFunction *temp_v0;
	dbUnknown5 *temp_v1;

	temp_a3 = arg0->dbUnknown5_2_0x4;
	if (temp_a3 == NULL)
	{
		return 0;
	}

	temp_v1 = temp_a3->dbUnknown5_2_0x4C;
	if (temp_v1 == NULL)
	{
		return 0;
	}

	temp_v0 = temp_v1->db_func;
	return temp_v0[18].unk_dbfunc_0x4(temp_v0[18].unk_dbfunc_0x0 + (uintptr_t)temp_v1, arg1, arg2, temp_a3);
}

// 0x8037C3AC
void func_ovl8_8037C3AC(s32 *arg0, s32 arg1)
{
	arg0[1] = arg1;
}
