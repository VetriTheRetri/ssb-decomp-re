#include <gm/battle.h>
#include <gm/gmsound.h>
#include <sys/thread6.h>
#include <sys/objdraw.h>
#include <ovl0/reloc_data_mgr.h>

#include "ovl59.h"

// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define GMCREDITS_CHARACTER_COLON      0x34 // Colon
#define GMCREDITS_CHARACTER_PERIOD     0x3F // Period
#define GMCREDITS_CHARACTER_DASH       0x40 // Dash
#define GMCREDITS_CHARACTER_COMMA      0x41 // Comma
#define GMCREDITS_CHARACTER_AMPERS     0x42 // Ampersand (&)
#define GMCREDITS_CHARACTER_QUOTE      0x43 // Quotation mark
#define GMCREDITS_CHARACTER_SLASH      0x44 // Slash
#define GMCREDITS_CHARACTER_APOSTROPHE 0x45 // Apostrophe
#define GMCREDITS_CHARACTER_QMARK      0x46 // Question Mark
#define GMCREDITS_CHARACTER_OBRACKET   0x47 // Open bracket
#define GMCREDITS_CHARACTER_CBRACKET   0x48 // Close bracket
#define GMCREDITS_CHARACTER_EACCENT    0x49 // Letter 'é'

// Convert hexadecimal character to alphabetical equivalent starting from capital A
#define GMCREDITS_LETTER_TO_HEX(c) ((c) > 'Z' ? ((c) - 0x47) : ((c) - 0x41))

// Convert hexadecimal character to number
#define GMCREDITS_NUMBER_TO_HEX(c) (0x35 + ('9' - (c)))

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_800A5240;
extern uintptr_t lCreditsArenaLo;           // 8013AA60
extern uintptr_t D_NF_80392A00;             // 80392A00
extern intptr_t lCreditsInterpolation;      // 00007304
extern intptr_t lCreditsATrack;             // 00007338
extern intptr_t lCreditsDObjDesc;           // 000078C0
extern intptr_t D_NF_001AC870;
extern intptr_t D_NF_00000854;
extern intptr_t lCreditsCrosshairSprite;    // 00006D58
extern intptr_t lCreditsTextBoxBracketLeft; // 00006F98
extern intptr_t lCreditsTextBoxBracketRight;// 000071D8

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 8013A7D8
Gfx *gCreditsNameAndJobDisplayLists[56];

// 8013A8B8
s32 gCreditsNameID;

// 8013A8BC
f32 gCreditsRollSpeed;

// 8013A8C0
s32 gCreditsStatus;

// 8013A8C4
gmCreditsName *gCreditsNameAllocFree;

// 8013A8C8
GObj *gCreditsStaffRollGObj;

// 8013A8CC
GObj *gCreditsCrosshairGObj;

// 8013A8D0
sb32 gCreditsIsPaused;

// 8013A8D4
f32 gCreditsCrosshairPositionX;

// 8013A8D8
f32 gCreditsCrosshairPositionY;

// 8013A8DC
ATrack *gCreditsNameATrack;

// 8013A8E0
void *gCreditsNameInterpolation;

// 8013A8E4
Camera *gCreditsCamera;

// 8013A8E8
void *gCreditsDObjDesc;

// 8013A8EC
s32 gCreditsHighlightSize;

// 8013A8F0
f32 gCreditsHighlightPositionX;

// 8013A8F4
f32 gCreditsHighlightPositionY;

// 8013A8F8
GObj *gCreditsStaffRoleTextGObj;

// 8013A8FC
GObj *gCreditsCompanyTextGObj;

// 8013A900
s32 gCreditsRollBeginWait;

// 8013A904 - controller port to use for credits sequence
u8 gCreditsPlayer;

// 8013A908
s32 gCreditsRollEndWait;

// 8013A910
rdFileNode gCreditsStatusBuf[32];

// 8013AA10
void *gCreditsFiles[1];

// 8013AA18
Mtx44f gCreditsMatrix;

// // // // // // // // // // // //
//                               //
//        INITALIZED DATA        //
//                               //
// // // // // // // // // // // //
// 
// 80135260
s32 dCreditsNameCharacters[/* */] = {
#include "credits/staff.credits.encoded"
};

// 801364F4
gmCreditsText dCreditsNameTextInfo[] = {
#include "credits/staff.credits.metadata"
};

s32 unused80136794[] = {
	0x000004a5, 0x00000000
};

// 8013679C
s32 dCreditsJobDescriptions[/* */] = {
	0xFFFFFFFF,0x00000000,0x00000001,0x00000001,
	0x00000010,0x00000002,0xFFFFFFFF,0x00000002,
	0x00000007,0x00000001,0x00000011,0x00000008,
	0xFFFFFFFF,0x00000003,0x0000001B,0xFFFFFFFF,
	0x00000004,0x0000001C,0xFFFFFFFF,0x00000005,
	0x0000001D,0xFFFFFFFF,0x00000006,0x00000026,
	0xFFFFFFFF,0x00000008,0x00000038,0xFFFFFFFF,
	0x0000000F,0x0000003B,0xFFFFFFFF,0x00000007,
	0x0000004B,0x00000009,0x0000000A,0x0000004C,
	0x0000000B,0x0000000A,0x0000004D,0xFFFFFFFF,
	0x0000000C,0x00000051,0x0000000D,0x0000000C,
	0x00000052,0xFFFFFFFF,0x0000000E,0xFFFFFFFF,
};

// 8013685C
s32 dCreditsJobCharacters[/* */] = {
#include "credits/titles.credits.encoded"
};

// 80136B10
gmCreditsText dCreditsJobTextInfo[] = {
#include "credits/titles.credits.metadata"
};

// 80136BA0 - Literally every character from credits roles all at once. Should convert from .txt into .inc.c
s32 dCreditsStaffRoleCharacters[/* */] = {
#include "credits/info.credits.encoded"
};

// 80139B68
gmCreditsText dCreditsStaffRoleTextInfo[] = {
#include "credits/info.credits.metadata"
};

// 80139E08
// extern s32* dCreditsCompanyCharacters;
s32 dCreditsCompanyCharacters[/* */] = {
#include "credits/companies.credits.encoded"
};

// 80139FD4
gmCreditsText dCreditsCompanyTextInfo[] = {
#include "credits/companies.credits.metadata"
};

// 8013A02C Empty word in company text info
s32 emptyword8013A02C[] = { 0x00000073, 0x00000000 };

// 8013A034
s32 dCreditsCompanyIDs[/* */] =
{
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	-1,
	-1,
	-1,
	-1,
	-1,
	gmCredits_Company_Creatures,
	gmCredits_Company_Creatures,
	gmCredits_Company_Creatures,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	-1,
	gmCredits_Company_ARTSVISION,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_AONIProd,
	gmCredits_Company_AONIProd,
	gmCredits_Company_EZAKIProd,
	gmCredits_Company_AONIProd,
	-1,
	gmCredits_Company_Mickeys,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	-1, 
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_GAMEFREAK,
	gmCredits_Company_Creatures,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_Creatures,
	-1,
	gmCredits_Company_NOA,
	gmCredits_Company_NOA,
	gmCredits_Company_NOA,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_Creatures,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	-1,
	-1,
	-1,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_HAL,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_NINTENDO,
	-1,
	-1
};

// 8013A184
u32 dCreditsFileIDs[/* */] = { 0xC3 };

// 8013A188
gmCreditsSprite dCreditsNameAndJobSpriteInfo[] = {
	0x14, 0x16, 0x0008,
	0x0f, 0x16, 0x0218,
	0x0f, 0x16, 0x0398,
	0x12, 0x16, 0x04f8,
	0x0d, 0x16, 0x0728,
	0x0d, 0x16, 0x0888,
	0x13, 0x16, 0x0a08,
	0x12, 0x16, 0x0c38,
	0x07, 0x16, 0x0e68,
	0x0b, 0x16, 0x0fe8,
	0x12, 0x16, 0x1188,
	0x0d, 0x16, 0x13b8,
	0x17, 0x16, 0x1538,
	0x13, 0x16, 0x17d8,
	0x16, 0x16, 0x19e8,
	0x0f, 0x16, 0x1c88,
	0x17, 0x16, 0x1e08,
	0x10, 0x16, 0x2038,
	0x0f, 0x16, 0x2198,
	0x0f, 0x16, 0x22f8,
	0x10, 0x16, 0x2478,
	0x12, 0x16, 0x25d8,
	0x19, 0x16, 0x27e8,
	0x13, 0x16, 0x2a88,
	0x10, 0x16, 0x2c98,
	0x13, 0x16, 0x2e18,
	0x0e, 0x12, 0x0178,
	0x10, 0x16, 0x02d8,
	0x0e, 0x12, 0x0458,
	0x10, 0x16, 0x0668,
	0x10, 0x12, 0x07e8,
	0x0b, 0x16, 0x0948,
	0x0f, 0x16, 0x0b78,
	0x0f, 0x16, 0x0da8,
	0x06, 0x16, 0x0f28,
	0x08, 0x1a, 0x10a8,
	0x10, 0x16, 0x12f8,
	0x06, 0x16, 0x1478,
	0x14, 0x12, 0x16a8,
	0x0f, 0x12, 0x1948,
	0x12, 0x12, 0x1b58,
	0x10, 0x16, 0x1d48,
	0x10, 0x16, 0x1f78,
	0x0b, 0x12, 0x20f8,
	0x0d, 0x12, 0x2258,
	0x0b, 0x16, 0x23b8,
	0x0f, 0x12, 0x2538,
	0x0e, 0x12, 0x2748,
	0x15, 0x12, 0x2958,
	0x0f, 0x12, 0x2bf8,
	0x10, 0x16, 0x2d58,
	0x0e, 0x11, 0x2f88,
	0x07, 0x07, 0x3078,
	0x08, 0x0b, 0x3018,
	0x08, 0x0b, 0x30b8,
	0x10, 0x16, 0x3118,
};

// 8013A348
gmCreditsSprite dCreditsTextBoxSpriteInfo[/* */] = {
	0x0c, 0x0e, 0x3258,
	0x0c, 0x0e, 0x33e8,
	0x0c, 0x0e, 0x3588,
	0x0c, 0x0e, 0x3718,
	0x0c, 0x0e, 0x38b8,
	0x0c, 0x0e, 0x3a48,
	0x0c, 0x0e, 0x3be8,
	0x0c, 0x0e, 0x3d78,
	0x05, 0x0e, 0x3f18,
	0x0c, 0x0e, 0x40b8,
	0x0c, 0x0e, 0x4258,
	0x0c, 0x0e, 0x43f8,
	0x0e, 0x0e, 0x4598,
	0x0c, 0x0e, 0x4728,
	0x0c, 0x0e, 0x48b8,
	0x0c, 0x0e, 0x4a48,
	0x0d, 0x0e, 0x4bd8,
	0x0c, 0x0e, 0x4d68,
	0x0c, 0x0e, 0x4ef8,
	0x0d, 0x0e, 0x5088,
	0x0c, 0x0e, 0x5228,
	0x0e, 0x0e, 0x53b8,
	0x0e, 0x0e, 0x5548,
	0x0c, 0x0e, 0x56d8,
	0x0d, 0x0e, 0x5868,
	0x0e, 0x0e, 0x59f8,
	0x0a, 0x0b, 0x3310,
	0x0a, 0x0d, 0x34b0,
	0x0a, 0x0b, 0x3640,
	0x0a, 0x0d, 0x37e0,
	0x0a, 0x0b, 0x3970,
	0x09, 0x0d, 0x3b10,
	0x0a, 0x0c, 0x3ca8,
	0x0a, 0x0d, 0x3e40,
	0x04, 0x0d, 0x3fe0,
	0x06, 0x0e, 0x4188,
	0x0a, 0x0d, 0x4320,
	0x04, 0x0d, 0x44c0,
	0x0c, 0x0b, 0x4650,
	0x0a, 0x0b, 0x47e0,
	0x0a, 0x0b, 0x4970,
	0x0a, 0x0c, 0x4b08,
	0x0a, 0x0c, 0x4c98,
	0x09, 0x0b, 0x4e20,
	0x0a, 0x0b, 0x4fb0,
	0x09, 0x0d, 0x5150,
	0x0a, 0x0b, 0x52e0,
	0x0a, 0x0b, 0x5470,
	0x0c, 0x0b, 0x5600,
	0x0c, 0x0b, 0x5790,
	0x0a, 0x0c, 0x5928,
	0x0a, 0x0b, 0x5ab0,
	0x05, 0x0b, 0x5b70,
	0x0d, 0x0e, 0x6468,
	0x0d, 0x0e, 0x6398,
	0x0d, 0x0e, 0x62c8,
	0x0d, 0x0e, 0x61f8,
	0x0d, 0x0e, 0x6128,
	0x0d, 0x0e, 0x6058,
	0x0d, 0x0e, 0x5f88,
	0x0d, 0x0e, 0x5eb8,
	0x09, 0x0e, 0x5de8,
	0x0d, 0x0e, 0x6538,
	0x05, 0x05, 0x5c90,
	0x09, 0x04, 0x5d18,
	0x05, 0x05, 0x5c00,
	0x10, 0x0e, 0x6698,
	0x05, 0x05, 0x65c0,
	0x06, 0x0c, 0x6758,
	0x05, 0x05, 0x67e0,
	0x0c, 0x0e, 0x68b8,
	0x07, 0x0e, 0x6988,
	0x07, 0x0e, 0x6a58,
	0x0a, 0x0d, 0x6b20,
};

// 8013A598
Gfx dCreditsTextBoxDisplayList[/* */] =
{
	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_FILL),
	gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
	gsDPSetFillColor(GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x42, 0x3A, 0x31, 0x1))),
	gsDPFillRectangle(346, 35, 348, 164),
	gsDPFillRectangle(346, 35, 584,  37),
	gsDPFillRectangle(582, 35, 584, 164),
	gsDPFillRectangle(346, 162, 584, 164),
	gsSPEndDisplayList()
};

// 8013A5E0
s32 dCreditsTextLuigi[/* */] = 
{
	GMCREDITS_LETTER_TO_HEX('L'),
	GMCREDITS_LETTER_TO_HEX('u'),
	GMCREDITS_LETTER_TO_HEX('i'),
	GMCREDITS_LETTER_TO_HEX('g'),
	GMCREDITS_LETTER_TO_HEX('i')
};

// 8013A5F4
s32 dCreditsTextJigglypuff[/* */] =
{
	GMCREDITS_LETTER_TO_HEX('J'),
	GMCREDITS_LETTER_TO_HEX('i'),
	GMCREDITS_LETTER_TO_HEX('g'),
	GMCREDITS_LETTER_TO_HEX('g'),
	GMCREDITS_LETTER_TO_HEX('l'),
	GMCREDITS_LETTER_TO_HEX('y'),
	GMCREDITS_LETTER_TO_HEX('p'),
	GMCREDITS_LETTER_TO_HEX('u'),
	GMCREDITS_LETTER_TO_HEX('f'),
	GMCREDITS_LETTER_TO_HEX('f')
};

// 8013A61C
s32 dCreditsTextCFalcon[/* */] = 
{
	GMCREDITS_LETTER_TO_HEX('C'),
	GMCREDITS_CHARACTER_PERIOD,
	GMCREDITS_LETTER_TO_HEX('F'),
	GMCREDITS_LETTER_TO_HEX('a'),
	GMCREDITS_LETTER_TO_HEX('l'),
	GMCREDITS_LETTER_TO_HEX('c'),
	GMCREDITS_LETTER_TO_HEX('o'),
	GMCREDITS_LETTER_TO_HEX('n')
};

// 8013A63C
s32 dCreditsTextNess[/* */] =
{
	GMCREDITS_LETTER_TO_HEX('N'),
	GMCREDITS_LETTER_TO_HEX('e'),
	GMCREDITS_LETTER_TO_HEX('s'),
	GMCREDITS_LETTER_TO_HEX('s')
};

// 8013A64C
s32 dCreditsTextEarthBound[/* */] =
{
	GMCREDITS_LETTER_TO_HEX('E'),
	GMCREDITS_LETTER_TO_HEX('a'),
	GMCREDITS_LETTER_TO_HEX('r'),
	GMCREDITS_LETTER_TO_HEX('t'),
	GMCREDITS_LETTER_TO_HEX('h'),
	GMCREDITS_LETTER_TO_HEX('B'),
	GMCREDITS_LETTER_TO_HEX('o'),
	GMCREDITS_LETTER_TO_HEX('u'),
	GMCREDITS_LETTER_TO_HEX('n'),
	GMCREDITS_LETTER_TO_HEX('d')
};

// 8013A674
s32 dCreditsTextFZero[/* */] =
{
	GMCREDITS_LETTER_TO_HEX('F'),
	GMCREDITS_CHARACTER_DASH,
	GMCREDITS_LETTER_TO_HEX('Z'),
	GMCREDITS_LETTER_TO_HEX('E'),
	GMCREDITS_LETTER_TO_HEX('R'),
	GMCREDITS_LETTER_TO_HEX('O'),
	GMCREDITS_LETTER_TO_HEX(' '),
	GMCREDITS_LETTER_TO_HEX('X')
};

// 8013A694
s32 dCreditsTextClassicMario[/* */] =
{
	GMCREDITS_LETTER_TO_HEX('C'),
	GMCREDITS_LETTER_TO_HEX('l'),
	GMCREDITS_LETTER_TO_HEX('a'),
	GMCREDITS_LETTER_TO_HEX('s'),
	GMCREDITS_LETTER_TO_HEX('s'),
	GMCREDITS_LETTER_TO_HEX('i'),
	GMCREDITS_LETTER_TO_HEX('c'),
	GMCREDITS_LETTER_TO_HEX('M'),
	GMCREDITS_LETTER_TO_HEX('a'),
	GMCREDITS_LETTER_TO_HEX('r'),
	GMCREDITS_LETTER_TO_HEX('i'),
	GMCREDITS_LETTER_TO_HEX('o')
};

// 8013A6C8
Lights1 dCreditsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 8013A6E0
Gfx dCreditsDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dCreditsLights1),
	gsSPEndDisplayList()
};

// 8013A708
scUnkDataBounds D_ovl59_8013A708 =
{
	0x8023E000,
	0x802D4000,
	0x8036A000,
	0x00000000,
	0x00000280,
	0x000001E0,
	0x00015696,
};

// 8013A724
scRuntimeInfo D_ovl59_8013A724 =
{
	0x00000000,
	0x8000A5E4,
	0x80135118,
	0x8013AA60,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004000,
	0x00000400,
	0x00000000,
	0x00000000,
	0x00001000,
	0x00020000,
	0x00001000,
	0x801350F4,
	0x80004310,
	0x00000010,
	0x00000600,
	0x00000010,
	0x00000000,
	0x00000040,
	0x00000040,
	0x00000088,
	0x00000100,
	0x00000000,
	0x00000000,
	0x00000020,
	0x00000010,
	0x00000400,
	0x00000088,
	0x00000100,
	0x0000006C,
	0x00000008,
	0x00000090,
	0x8013505C,
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 80131B00
sb32 gmCreditsCheckUnpause(void)
{
    sb32 var_v1 = TRUE;
    u16 button_new = gPlayerControllers[gCreditsPlayer].button_new;

    if (button_new & (A_BUTTON | B_BUTTON | Z_TRIG | START_BUTTON))
    {
        GObj *name_gobj;
        GObj *job_gobj;

        if (gCreditsStaffRollGObj != NULL)
        {
            func_8000B2B8(gCreditsStaffRollGObj);
        }
        name_gobj = gOMObjCommonLinks[GObj_LinkID_CreditsName];

        while (name_gobj != NULL)
        {
            func_8000B2B8(name_gobj);

            name_gobj = name_gobj->link_next;
        }
        job_gobj = gOMObjCommonLinks[GObj_LinkID_CreditsJob];

        while (job_gobj != NULL)
        {
            func_8000B2B8(job_gobj);
            job_gobj = job_gobj->link_next;
        }
        var_v1 = FALSE;
    }
    return var_v1;
}

// 80131BB0
void func_ovl59_80131BB0(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height)
{
    f32 x = vec->x;
    f32 y = vec->y;
    f32 z = vec->z;

    f32 w = (mtx[0][0] * x) + (mtx[1][0] * y) + (mtx[2][0] * z) + mtx[3][0];
    f32 h = (mtx[0][1] * x) + (mtx[1][1] * y) + (mtx[2][1] * z) + mtx[3][1];
    f32 i = (mtx[0][3] * x) + (mtx[1][3] * y) + (mtx[2][3] * z) + mtx[3][3];

    i = (1.0F / i);

    *width = w * i * 640.0F * 0.5F;
    *height = h * i * 480.0F * 0.5F;
}

// // 80131C88
// void func_ovl59_80131C88(Camera *cam)
// {
//     Mtx44f m, n;

//     hlMtxPerspFastF(n, &cam->projection.persp.norm, cam->projection.persp.fovy, cam->projection.persp.aspect, cam->projection.persp.near, cam->projection.persp.far, cam->projection.persp.scale);
//     hlMtxLookAtF(m, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, cam->vec.up.y, cam->vec.up.z);
//     guMtxCatF(m, n, gCreditsMatrix);
// }

// // 80131D30
// void func_ovl59_80131D30(DObj *dobj, Vec3f *vec, f32 *width, f32 *height)
// {
//     Mtx44f m, r;

//     hal_rotate_rpy_translate_scale_f
//     (
//         m,
//         dobj->translate.vec.f.x,
//         dobj->translate.vec.f.y,
//         dobj->translate.vec.f.z,
//         dobj->rotate.vec.f.x,
//         dobj->rotate.vec.f.y,
//         dobj->rotate.vec.f.z,
//         dobj->scale.vec.f.x,
//         dobj->scale.vec.f.y,
//         dobj->scale.vec.f.z
//     );
//     guMtxCatF(m, gCreditsMatrix, r);
//     func_ovl59_80131BB0(r, vec, width, height);
// }

// // 80131DD0
// void func_ovl59_80131DD0(GObj *gobj, gmCreditsProjection *proj)
// {
//     gmCreditsMatrix *credits = gobj->user_data.p;

//     proj->pv0.z = proj->pv1.z = proj->pv2.z = proj->pv3.z = 0.0F;
//     proj->pv0.y = proj->pv2.y = 28.0F;

//     proj->pv1.y = proj->pv3.y = -(credits->unk_gmcreditsmtx_0x10 + 4.0F);
//     proj->pv0.x = proj->pv1.x = -22.0F;

//     proj->pv2.x = proj->pv3.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
// }

// // 80131E70
// void func_ovl59_80131E70(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
// {
//     arg0->x = arg2 - arg4;
//     arg0->y = arg3 - arg1;
//     arg0->z = (arg1 * arg4) - (arg3 * arg2);
// }

// // 80131EB8
// sb32 gmCreditsCheckCursorNameOverlap(Vec3f *vec)
// {
//     SObj *sobj = SObjGetStruct(gCreditsCrosshairGObj);
//     f32 x = (sobj->pos.x + 29.0F) - 320.0F;
//     f32 y = 240.0F - (sobj->pos.y + 29.0F);
//     f32 v = (vec->x * x) + (vec->y * y) + vec->z;
//     sb32 ret = TRUE;

//     if (v < 0.0F)
//     {
//         ret = FALSE;
//     }
//     return ret;
// }

// // 80131F34
// void func_ovl59_80131F34(GObj *arg0)
// {
//     GObj *ugobj = arg0->user_data.p;
//     gmCreditsMatrix *credits = ugobj->user_data.p;

//     if ((credits->unk_gmcreditsmtx_0x14 + gCreditsRollSpeed) >= 1.0F)
//     {
//         omEjectGObj(NULL);
//         omEjectGObj(gCreditsStaffRoleTextGObj);
//         omEjectGObj(gCreditsCompanyTextGObj);
//     }
//     else
//     {
//         DObj *dobj = DObjGetStruct(arg0)->child;

//         DObjGetStruct(arg0)->translate.vec.f = DObjGetStruct(ugobj)->translate.vec.f;
//         DObjGetStruct(arg0)->rotate.vec.f = DObjGetStruct(ugobj)->rotate.vec.f;

//         dobj->translate.vec.f.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
//     }
// }

// // 8013202C
// void func_ovl59_8013202C(GObj *arg0)
// {
//     GObj *gobj = gOMObjCommonLinks[GObj_LinkID_02];
//     GObj *ugobj = arg0->user_data.p;

//     if (gobj == NULL)
//     {
//         gobj = omMakeGObjSPAfter(8, NULL, GObj_LinkID_02, 0x80000000);
//         omAddGObjRenderProc(gobj, odRenderDObjTreeForGObj, 3, 0x80000000, -1);
//         func_8000F590(gobj, gCreditsDObjDesc, NULL, OMMtx_Transform_TraRotRpyRSca, 0, 0);
//         omAddGObjCommonProc(gobj, func_ovl59_80131F34, 1, 1);

//         gobj->user_data.p = arg0;
//         ugobj->unk_0x1C = gobj;
//     }
//     else
//     {
//         gobj->user_data.p = arg0;
//         ugobj->unk_0x1C = gobj;
//     }
// }

// // 801320F4
// s32 gmCreditsGetLockOnPosX(s32 posx)
// {
//     s32 boundx = posx;

//     if (posx < 20)
//     {
//         boundx = 20;
//     }
//     if (posx > 620)
//     {
//         boundx = 620;
//     }
//     return boundx;
// }

// // 8013211C
// s32 gmCreditsGetLockOnPosY(s32 posy)
// {
//     s32 boundy = posy;

//     if (posy < 20)
//     {
//         boundy = 20;
//     }
//     if (posy > 460)
//     {
//         boundy = 460;
//     }
//     return boundy;
// }

// // 80132144
// void gmCreditsHighlightProcRender(GObj *gobj)
// {
//     s32 unused;

//     gDPPipeSync(gDisplayListHead[0]++);
//     gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
//     gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
//     gDPSetFillColor(gDisplayListHead[0]++, GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x80, 0x00, 0x00, 0x01)));
//     gDPFillRectangle
//     (
//         gDisplayListHead[0]++,
//         gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
//         gmCreditsGetLockOnPosX(((gCreditsHighlightSize * -30) + 2) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
//     );
//     gDPFillRectangle
//     (
//         gDisplayListHead[0]++,
//         gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
//         gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY(((gCreditsHighlightSize * -25) + 2) + gCreditsHighlightPositionY)
//     );
//     gDPFillRectangle
//     (
//         gDisplayListHead[0]++,
//         gmCreditsGetLockOnPosX((gCreditsHighlightSize * -30) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY((gCreditsHighlightSize * 45) + gCreditsHighlightPositionY),
//         gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
//     );
//     gDPFillRectangle
//     (
//         gDisplayListHead[0]++,
//         gmCreditsGetLockOnPosX((gCreditsHighlightSize * 65) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY((gCreditsHighlightSize * -25) + gCreditsHighlightPositionY),
//         gmCreditsGetLockOnPosX(((gCreditsHighlightSize * 65) + 2) + gCreditsHighlightPositionX),
//         gmCreditsGetLockOnPosY(((gCreditsHighlightSize * 45) + 2) + gCreditsHighlightPositionY)
//     );
// }

// // 8013270C
// void gmCreditsHighlightProcUpdate(GObj *gobj)
// {
//     s32 i;

//     for (i = 0; i < 3; i++)
//     {
//         gCreditsHighlightSize = 6;

//         while (gCreditsHighlightSize != 0)
//         {
//             gCreditsHighlightSize--;
//             gsStopCurrentProcess(1);
//         }
//     }
//     omEjectGObj(NULL);
//     gsStopCurrentProcess(1);
// }

// // 801327A4
// void gmCreditsMakeHighlightGObj(GObj *gobj)
// {
//     GObj *highlight_gobj = gOMObjCommonLinks[GObj_LinkID_Highlight];
//     s32 unused;
//     SObj *sobj = SObjGetStruct(gCreditsCrosshairGObj);

//     if (highlight_gobj == NULL)
//     {
//         highlight_gobj = omMakeGObjSPAfter(9, NULL, 9, 0x80000000);

//         omAddGObjRenderProc(highlight_gobj, gmCreditsHighlightProcRender, 8, 0x80000000, -1);
//         omAddGObjCommonProc(highlight_gobj, gmCreditsHighlightProcUpdate, 0, 1);

//         gCreditsHighlightPositionX = sobj->pos.x + 8.0F;
//         gCreditsHighlightPositionY = sobj->pos.y + 20.0F;
//     }
// }

// // 80132860
// void gmCreditsSetTextQMarks(s32 *characters, s32 character_count)
// {
//     s32 i, j, k;
//     s32 *cadd, *cbase = &dCreditsStaffRoleCharacters[0];

//     for (i = 0; i < ARRAY_COUNT(dCreditsStaffRoleTextInfo); i++)
//     {
//         for (cadd = cbase, j = 0, k = 0; j < dCreditsStaffRoleTextInfo[i].character_count; j++, cbase++)
//         {
//             if (*cbase == characters[k])
//             {
//                 if (k == 0)
//                 {
//                     cadd = cbase;
//                 }
//                 k++;
//             }
//             else k = 0;

//             if (k == character_count)
//             {
//                 while (k != 0)
//                 {
//                     *cadd++ = GMCREDITS_CHARACTER_QMARK;

//                     k--;

//                     continue;
//                 }
//                 cadd = cbase;
//                 k = 0;
//             }
//         }
//     }
// }
