#include <ssb_types.h>

#define GMCREDITS_COLON_PARAGRAPH_FONT_INDEX              0x34
#define GMCREDITS_PERIOD_PARAGRAPH_FONT_INDEX             0x3F
#define GMCREDITS_DASH_PARAGRAPH_FONT_INDEX               0x40
#define GMCREDITS_COMMA_PARAGRAPH_FONT_INDEX              0x41
#define GMCREDITS_AMPERSAND_PARAGRAPH_FONT_INDEX          0x42
#define GMCREDITS_DOUBLE_QUOTES_PARAGRAPH_FONT_INDEX      0x43
#define GMCREDITS_SLASH_PARAGRAPH_FONT_INDEX              0x44
#define GMCREDITS_APOSTROPHE_PARAGRAPH_FONT_INDEX         0x45
#define GMCREDITS_QUESTION_MARK_PARAGRAPH_FONT_INDEX      0x46
#define GMCREDITS_OPEN_PARENTHESIS_PARAGRAPH_FONT_INDEX   0x47
#define GMCREDITS_CLOSE_PARENTHESIS_PARAGRAPH_FONT_INDEX  0x48
#define GMCREDITS_E_ACCENT_PARAGRAPH_FONT_INDEX           0x49

// Both title and paragraph fonts use same indices for letters (A-Za-z)
#define GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(c) ((c) > 'Z' ? ((c) - 0x47) : ((c) - 0x41))

// Only paragraph font has all ASCII numbers. Title font has only number 4 at 0x37
#define GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX(c) (0x35 + ('9' - (c)))

typedef struct gmCreditsMatrix
{
	u8 filler_0x0[0xC];
	f32 unk_gmcreditsmtx_0xC;
	f32 unk_gmcreditsmtx_0x10;
	f32 unk_gmcreditsmtx_0x14;

} gmCreditsMatrix;

typedef struct gmCreditsText
{
	s32 character_start;        // Where to begin reading text from in main character array
	s32 character_count;        // Number of characters in credits role card to display

} gmCreditsText;

typedef struct gmCreditsSprite
{
	u8 width;
	u8 height;
	intptr_t offset;

} gmCreditsSprite;

typedef struct gmCreditsStaff
{
	u8 filler_0x0[0x4];
	s32 staff_id;

} gmCreditsStaff;

typedef enum gmCreditsCompany
{
	gmCredits_Company_Null = -1,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_Creatures,
	gmCredits_Company_GAMEFREAK,
	gmCredits_Company_Rare,
	gmCredits_Company_Mickeys,
	gmCredits_Company_KENProd,
	gmCredits_Company_AONIProd,
	gmCredits_Company_ARTSVISION,
	gmCredits_Company_EZAKIProd,
	gmCredits_Company_NOA

} gmCreditsCompany;

typedef struct gmCreditsName gmCreditsName;

struct gmCreditsName
{
	gmCreditsName *next;
	s32 name_id;
	sb32 job_or_name;   // 0 = job (e.g. Director), 1 = name (e.g. Masahiro Sakurai)
	f32 offset_x;
	f32 unkgmcreditsstruct0x10;
	f32 interpolation;
	s32 status;
	s32 unkgmcreditsstruct0x1C;
};

typedef struct gmCreditsJob
{
	s32 prefix_id;    // e.g. "Chief" -> Chief Programmers
	s32 job_id;       // Job text to use
	s32 staff_count;  // Number of staff members with this job assignment

} gmCreditsJob;

typedef struct gmCreditsSetup
{
	f32 unk_gmcreditsunk_0x0;
	DObj *dobj;
	f32 spacing;
	f32 unk_gmcreditsunk_0xC;
	f32 unk_gmcreditsunk_0x10;

} gmCreditsSetup;

typedef struct gmCreditsProjection
{
	Vec3f pv0;
	Vec3f pv1;
	Vec3f pv2;
	Vec3f pv3;
	f32 px0;
	f32 py0;
	f32 px1;
	f32 py1;
	f32 px2;
	f32 py2;
	f32 px3;
	f32 py3;

} gmCreditsProjection;


extern void hal_interpolation_cubic(Vec3f*, void*, f32);
extern void hal_rotate_rpy_translate_scale_f(Mtx44f mf,f32 dx,f32 dy,f32 dz,f32 r,f32 p,f32 h,f32 sx,f32 sy,f32 sz);
extern void hlMtxPerspFastF(Mtx44f a, u16* b, f32 c, f32 d, f32 e, f32 f, f32  g);
extern void hlMtxLookAtF(Mtx44f mf, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
extern void guMtxCatF(Mtx44f a, Mtx44f b, Mtx44f c);

extern uintptr_t D_NF_800A5240;
extern uintptr_t lCreditsArenaLo;           // 8013AA60
extern uintptr_t D_NF_80392A00;             // 80392A00
extern intptr_t lCreditsInterpolation;      // 00007304
extern intptr_t lCreditsAObjAnimJoint;             // 00007338
extern intptr_t lCreditsDObjDesc;           // 000078C0
extern intptr_t lCreditsCrosshairSprite;    // 00006D58
extern intptr_t lCreditsTextBoxBracketLeft; // 00006F98
extern intptr_t lCreditsTextBoxBracketRight;// 000071D8
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);

void gmCreditsMakeTextBoxBracketSObjs();
void gmCreditsMakeTextBoxGObj();


// 8013A7D0
s32 D_8013A7D0[2];

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
AObjAnimJoint *gCreditsNameAObjAnimJoint;

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


// 80135260
s32 dCreditsNameCharacters[] = {
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
s32 dCreditsJobDescriptions[] = {
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
s32 dCreditsJobCharacters[] = {
#include "credits/titles.credits.encoded"
};

// 80136B10
gmCreditsText dCreditsJobTextInfo[] = {
#include "credits/titles.credits.metadata"
};

// 80136BA0 - Literally every character from credits roles all at once. Should convert from .txt into .inc.c
s32 dCreditsStaffRoleCharacters[] = {
#include "credits/info.credits.encoded"
};

// 80139B68
gmCreditsText dCreditsStaffRoleTextInfo[] = {
#include "credits/info.credits.metadata"
};

// 80139E08
s32 dCreditsCompanyCharacters[] = {
#include "credits/companies.credits.encoded"
};

// 80139FD4
gmCreditsText dCreditsCompanyTextInfo[] = {
#include "credits/companies.credits.metadata"
};

// 8013A02C Empty word in company text info
s32 emptyword8013A02C[] = { 0x00000073, 0x00000000 };

// 8013A034
s32 dCreditsCompanyIDs[] =
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
u32 dCreditsFileIDs[] = { 0xC3 };

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
gmCreditsSprite dCreditsTextBoxSpriteInfo[] = {
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
Gfx dCreditsTextBoxDisplayList[] =
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
s32 dCreditsTextLuigi[] = 
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('L'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i')
};

// 8013A5F4
s32 dCreditsTextJigglypuff[] =
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('J'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f')
};

// 8013A61C
s32 dCreditsTextCFalcon[] = 
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('C'),
	GMCREDITS_PERIOD_PARAGRAPH_FONT_INDEX,
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('F'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n')
};

// 8013A63C
s32 dCreditsTextNess[] =
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('N'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s')
};

// 8013A64C
s32 dCreditsTextEarthBound[] =
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('E'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('t'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('h'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('B'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('d')
};

// 8013A674
s32 dCreditsTextFZero[] =
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('F'),
	GMCREDITS_DASH_PARAGRAPH_FONT_INDEX,
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('Z'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('E'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('R'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('O'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('X')
};

// 8013A694
s32 dCreditsTextClassicMario[] =
{
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('C'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('M'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
	GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')
};

// 8013A6C8
Lights1 dCreditsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 8013A6E0
Gfx dCreditsDisplayList[] =
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
