#include <debug.h>
#include <sys/develop.h>
#include <ft/fighter.h>
#include <sc/scene.h>
#include <gr/ground.h>
#include <mn/menu.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>


typedef enum charsActionKind
{
	charsActionKindSpecialHi, // USP
	charsActionKindSpecialN,  // NSP
	charsActionKindSpecialLw  // DSP

} charsActionKind;

typedef struct charsActionInfo
{
	s32 status_id;
	s32 anim_length;
	u32 flags;

} charsActionInfo;

typedef struct charsSpecialActionInfo
{
	charsActionInfo info[3][8];

} charsSpecialActionInfo;


// Externs
// D_ovl1_80390D90
extern f32 menu_zoom[12];
extern intptr_t D_NF_800A5240;
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;
extern intptr_t lOverlay33ArenaLo;  // 80136A90
extern intptr_t lOverlay33ArenaHi;  // 803903E0
extern intptr_t FILE_010_CHARACTERS_TEXTURE_IMAGE_OFFSET; // file 0x010 image offset for Characters texture
extern intptr_t FILE_010_NAME_BORDER_IMAGE_OFFSET; // file 0x010 image offset for character name border texture, normal height
extern intptr_t FILE_010_NAME_BORDER_TALL_IMAGE_OFFSET; // file 0x010 image offset for character name border texture, tall height
extern intptr_t FILE_010_WORKS_BACKGROUND_IMAGE_OFFSET; // file 0x010 image offset for works background texture
extern intptr_t FILE_010_BIO_UNDERLAY_TEXTURE_IMAGE_OFFSET; // file 0x010 image offset for rectangle underlaying bios
extern intptr_t FILE_020_DATA_HEADER_IMAGE_OFFSET; // file 0x020 image offset for DATA header
extern intptr_t FILE_020_ARROW_LEFT_IMAGE_OFFSET; // file 0x020 image offset for left arrow
extern intptr_t FILE_020_ARROW_RIGHT_IMAGE_OFFSET; // file 0x020 image offset for right arrow

extern void gcRemoveSObjAll(GObj*);

extern void func_80007080(void*, f32, f32, f32, f32);

extern void ftRenderLightsDrawReflect(Gfx**, f32, f32);
extern f32 scSubsysFighterGetLightAngleX();
extern f32 scSubsysFighterGetLightAngleY();


// Forward declarations
void mnCharsUpdateMoveName(GObj* move_name_gobj);


// Data
// 801340B0
charsSpecialActionInfo charsSpecialActionInfoMario = {

	0x200E1, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 801341D0
charsSpecialActionInfo charsSpecialActionInfoFox = {

	0x200E3, 0x0029A, 0x00000,
	0x200E5, 0x00023, 0x00002,
	0x200E7, 0x0001E, 0x00002,
	0x200E9, 0x0029A, 0x00002,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E1, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200EC, 0x0029A, 0x00000,
	0x200EF, 0x0003C, 0x00006,
	0x200EE, 0x0029A, 0x00006,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 801342F0
charsSpecialActionInfo charsSpecialActionInfoDonkey = {

	0x200E6, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x200E0, 0x0029A, 0x00002,
	0x200E2, 0x0029A, 0x00002,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E8, 0x0029A, 0x00000,
	0x200E9, 0x0029A, 0x00000,
	0x200EA, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134410
charsSpecialActionInfo charsSpecialActionInfoSamus = {

	0x200E3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x200DF, 0x0003C, 0x00002,
	0x200E0, 0x0029A, 0x00002,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E5, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134530
charsSpecialActionInfo charsSpecialActionInfoLuigi = {

	0x200E1, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134650
charsSpecialActionInfo charsSpecialActionInfoLink = {

	0x200E2, 0x0029A, 0x00000,
	0x200E3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E5, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200EB, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134770
charsSpecialActionInfo charsSpecialActionInfoYoshi = {

	0x200DE, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E4, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E0, 0x0029A, 0x00000,
	0x200E3, 0x0000C, 0x00000,
	0x200E1, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134890
charsSpecialActionInfo charsSpecialActionInfoCaptain = {

	0x200EB, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E4, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E6, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 801349B0
charsSpecialActionInfo charsSpecialActionInfoKirby = {

	0x20100, 0x0029A, 0x00004,
	0x20103, 0x0000C, 0x00000,
	0x20101, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2010D, 0x0029A, 0x00000,
	0x2010E, 0x00028, 0x00024,
	0x2010F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x20104, 0x0029A, 0x00000,
	0x20106, 0x0029A, 0x00024,
	0x20107, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134AD0
charsSpecialActionInfo charsSpecialActionInfoPikachu = {

	0x200EA, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E0, 0x0029A, 0x00000,
	0x200E1, 0x0003C, 0x00002,
	0x200E2, 0x0029A, 0x00000,
	0x200E3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x00000, 0x00000, 0x00000
};

// 80134BF0
charsSpecialActionInfo charsSpecialActionInfoPurin = {

	0x200E8, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E6, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200EA, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134D10
charsSpecialActionInfo charsSpecialActionInfoNess = {

	0x200E4, 0x0029A, 0x00000,
	0x200E5, 0x00078, 0x00000,
	0x200E7, 0x0029A, 0x00000,
	0x200E6, 0x0001C, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200E2, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200ED, 0x0029A, 0x00000,
	0x200EE, 0x0003C, 0x00000,
	0x200EF, 0x0029A, 0x00006,
	0x200F0, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80134E30
charsActionInfo D_ovl33_80134E30[39][8] = {

	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x2000B, 0x0005A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2000C, 0x0005A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2000D, 0x0005A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x2000F, 0x00012, 0x00000,
	0x20010, 0x0003C, 0x00000,
	0x20011, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x20016, 0x0029A, 0x00000,
	0x20018, 0x0029A, 0x00000,
	0x2001A, 0x0029A, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x20017, 0x0029A, 0x00000,
	0x20019, 0x0029A, 0x00000,
	0x2001A, 0x0029A, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x20018, 0x0029A, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x20019, 0x0029A, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2001C, 0x0029A, 0x00000,
	0x2001D, 0x0029A, 0x00000,
	0x2001E, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x20024, 0x0029A, 0x00000,
	0x20023, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200A4, 0x0005A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2000A, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x20031, 0x0003C, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2009C, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x2009C, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200C0, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200C3, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200C7, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200C9, 0x0029A, 0x00000,
	0x2001E, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200CC, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200CF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200D0, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200D1, 0x0029A, 0x00000,
	0x2001B, 0x0001E, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200D2, 0x0029A, 0x00000,
	0x2001B, 0x0001E, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200D3, 0x0029A, 0x00000,
	0x2001B, 0x0001E, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200D4, 0x0029A, 0x00000,
	0x2001B, 0x0001E, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200D5, 0x0029A, 0x00000,
	0x2001B, 0x0001E, 0x00000,
	0x2001F, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200A9, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200AA, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x10001, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x10002, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x10003, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x10004, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x10005, 0x0029A, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x200BD, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80135CD0
charsActionInfo D_ovl33_80135CD0[8] = {

	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80135D30
charsActionInfo D_ovl33_80135D30 = {

	0x2001A, 0x0001E, 0x00000,
};

// 80135D3C
charsActionInfo D_ovl33_80135D3C[8] = {

	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80135D9C
charsActionInfo D_ovl33_80135D9C = {

	0x2001A, 0x0001E, 0x00000,
};

// 80135DA8
charsActionInfo D_ovl33_80135DA8[12][8] = {

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x200DD, 0x0029A, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0x00000, 0x00000, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DD, 0x0029A, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x200DD, 0x0029A, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x200DF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x200DD, 0x0029A, 0x00000,
	0x200DE, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,

	0x200BE, 0x0029A, 0x00000,
	0x200BF, 0x0029A, 0x00000,
	0x200DC, 0x0029A, 0x00000,
	0x2000A, 0x0001E, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000,
	0xA2C2A, 0x00001, 0x00000
};

// 80136228
rdFileID D_ovl33_80136228[4] = {

	0x0000010,
	0x0000020,
	0x0000014,
	0x0000023,
};

// 8013638
s32 D_ovl33_80136238[] = {

	0x0000000,
	0x0000000,
	0x0000000,
	0x0000000,
	0xA0A3C00,
	0x0000000
};


// BSS
// 801365F0
s32 D_ovl33_801365F0[2];

// 801365F8
s32 gMNCharsCurrentIndex;

// 801365FC
GObj* gMNCharsSeriesLogoGObj;

// 80136600
GObj* gMNCharsNameGObj;

// 80136604
GObj* gMNCharsBioGObj;

// 80136608
GObj* gMNCharsWorksGObj;

// 8013660C
GObj* gMNCharsFighterGObj;

// 80136610
s32 D_ovl33_80136610[45];

// 801366C4
s32 gMNCharsActionType;

// 801366C8
s32 gMNCharsAnimFramesRemaining;

// 801366CC
sb32 gMNCharsUseAnimFramesRemaining;

// 801366D0
sb32 gMNCharsAutoRotateFighter;

// 801366D4
s32 gMNCharsUnknown;

// 801366D8
s32 D_ovl33_801366D8;

// 801366DC
GObj* gMNCharsMoveNameGObj;

// 801366E0
GObj* gMNCharsFighterCameraGObj;

// 801366E4
f32 gMNCharsHeldStickAngle;

// 801366E8
union union_name {
    f32 f;
    s32 s;
} gMNCharsHeldStickUnknown;

// 801366EC
void* gMNCharsAnimHeap;

// 801366F0
sb32 gMNCharsIsDemoMode;

// 801366F4
s32 gMNCharsFirstFtKind;

// 801366F8
s32 gMNCharsSecondFtKind;

// 801366FC
s32 gMNCharsCurrentActionTrack;

// 80136700
u16 gMNCharsUnlockedMask;

// 80136704
s32 gMNCharsCurrentAnimFrame;

// 80136708
s32 gMNCharsRecentActionTypes[3];

// 80136714
s32 gMNCharsRecentActionTypeIndex;

// 80136718
s32 gMNCharsChangeWait;

// 8013671C
s32 gMNCharsFramesElapsed;

// 80136720
u32 D_ovl33_80136720[200];

// 80136A40
rdFileNode D_ovl33_80136A40;

// 80136A48
u32 D_ovl33_80136A48[12];

// 80136A78
s32 gMNCharsFilesArray[4];


// 80131B00
void mnCharsSetupDisplayList(Gfx **display_list)
{
	gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
	ftRenderLightsDrawReflect(display_list, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 80131B58
s32 mnCharsGetFtKind(s32 index)
{
	s32 kinds[12] = {

		nFTKindMario,
		nFTKindLuigi,
		nFTKindDonkey,
		nFTKindLink,
		nFTKindSamus,
		nFTKindYoshi,
		nFTKindKirby,
		nFTKindFox,
		nFTKindPikachu,
		nFTKindPurin,
		nFTKindCaptain,
		nFTKindNess
	};
	return kinds[index];
}

// 80131BA8
s32 mnCharsGetIndex(s32 ft_kind)
{
	s32 indexes[12] = {

		0, 7, 2, 4, 1, 3, 5, 10, 6, 8, 9, 11
	};
	return indexes[ft_kind];
}

// 80131BF8 - Unused?
void func_ovl33_80131BF8() {}

// 80131C00
void mnCharsCreateBio(s32 ft_kind)
{
	GObj* bio_gobj;
	SObj* bio_sobj;
	intptr_t offsets[12] = {

		0x0ACA8, 0x0D128, 0x0F5A8, 0x11A28, 0x13EA8, 0x16328,
		0x187A8, 0x1AC28, 0x1D0A8, 0x1F528, 0x219A8, 0x23E28
	};

	gMNCharsBioGObj = bio_gobj = gcMakeGObjSPAfter(0, 0, 0x11, 0x80000000);
	gcAddGObjDisplay(bio_gobj, lbCommonDrawSObjAttr, 0x1A, 0x80000000, -1);

	bio_sobj = lbCommonMakeSObjForGObj(bio_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_BIO_UNDERLAY_TEXTURE_IMAGE_OFFSET));
	bio_sobj->sprite.attr &= ~SP_FASTCOPY;
	bio_sobj->sprite.attr |= SP_TRANSPARENT;
	bio_sobj->sprite.red = 0;
	bio_sobj->sprite.green = 0;
	bio_sobj->sprite.blue = 0;
	bio_sobj->pos.x = 126.0f;
	bio_sobj->pos.y = 54.0f;

	bio_sobj = lbCommonMakeSObjForGObj(bio_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], offsets[ft_kind]));
	bio_sobj->sprite.attr &= ~SP_FASTCOPY;
	bio_sobj->sprite.attr |= SP_TRANSPARENT;
	bio_sobj->sprite.red = 0xFF;
	bio_sobj->sprite.green = 0xFF;
	bio_sobj->sprite.blue = 0xFF;
	bio_sobj->pos.x = 126.0f;
	bio_sobj->pos.y = 54.0f;
}

// 80131D44
void mnCharsCreateHeader()
{
	GObj* header_gobj;
	SObj* header_sobj;

	header_gobj = gcMakeGObjSPAfter(0, 0, 0x12, 0x80000000);
	gcAddGObjDisplay(header_gobj, lbCommonDrawSObjAttr, 0x1B, 0x80000000, -1);

	// DATA header
	header_sobj = lbCommonMakeSObjForGObj(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_DATA_HEADER_IMAGE_OFFSET));
	header_sobj->sprite.attr &= ~SP_FASTCOPY;
	header_sobj->sprite.attr |= SP_TRANSPARENT;
	header_sobj->pos.x = 23.0f;
	header_sobj->pos.y = 17.0f;
	header_sobj->sprite.red = 0x5F;
	header_sobj->sprite.green = 0x58;
	header_sobj->sprite.blue = 0x46;

	// Characters header
	header_sobj = lbCommonMakeSObjForGObj(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_CHARACTERS_TEXTURE_IMAGE_OFFSET));
	header_sobj->sprite.attr &= ~SP_FASTCOPY;
	header_sobj->sprite.attr |= SP_TRANSPARENT;
	header_sobj->pos.x = 157.0f;
	header_sobj->pos.y = 23.0f;
	header_sobj->sprite.red = 0xF2;
	header_sobj->sprite.green = 0xC7;
	header_sobj->sprite.blue = 0xD;
	header_sobj->env_color.r = 0;
	header_sobj->env_color.g = 0;
	header_sobj->env_color.b = 0;

	// left arrow
	header_sobj = lbCommonMakeSObjForGObj(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_ARROW_LEFT_IMAGE_OFFSET));
	header_sobj->sprite.attr &= ~SP_FASTCOPY;
	header_sobj->sprite.attr |= SP_TRANSPARENT;
	header_sobj->pos.x = 257.0f;
	header_sobj->pos.y = 40.0f;
	header_sobj->sprite.red = 0xE3;
	header_sobj->sprite.green = 0x7D;
	header_sobj->sprite.blue = 0xC;

	// right arrow
	header_sobj = lbCommonMakeSObjForGObj(header_gobj, GetAddressFromOffset(gMNCharsFilesArray[1], &FILE_020_ARROW_RIGHT_IMAGE_OFFSET));
	header_sobj->sprite.attr &= ~SP_FASTCOPY;
	header_sobj->sprite.attr |= SP_TRANSPARENT;
	header_sobj->pos.x = 275.0f;
	header_sobj->pos.y = 40.0f;
	header_sobj->sprite.red = 0xE3;
	header_sobj->sprite.green = 0x7D;
	header_sobj->sprite.blue = 0xC;
}

// 80131F28
void mnCharsCreateSeriesLogo(s32 ft_kind)
{
	GObj* series_logo_gobj;
	intptr_t offsets[12] = {

		0x0990, 0x21D0, 0x1348, 0x1860, 0x0990, 0x2520,
		0x2F10, 0x3828, 0x3E68, 0x4710, 0x4710, 0x5A00
	};
	intptr_t zoom_offsets[12] = {

		0x0000, 0x1940, 0x0B00, 0x1470, 0x0000, 0x22B0,
		0x2690, 0x2FF0, 0x3900, 0x3F40, 0x3F40, 0x4840
	};
	intptr_t color_offsets[12] = {

		0x0A14, 0x2254, 0x13CC, 0x18E4, 0x0A14, 0x25A4,
		0x2F94, 0x38AC, 0x3EEC, 0x4794, 0x4794, 0x5A84
	};

	gMNCharsSeriesLogoGObj = series_logo_gobj = gcMakeGObjSPAfter(0, 0, 0x13, 0x80000000);
	gcSetupCommonDObjs(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], offsets[ft_kind]), 0);
	gcAddGObjDisplay(series_logo_gobj, gcDrawDObjTreeForGObj, 0x1C, 0x80000000, -1);
	gcAddMObjAll(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], zoom_offsets[ft_kind]));
	gcAddMatAnimJointAll(series_logo_gobj, GetAddressFromOffset(gMNCharsFilesArray[3], color_offsets[ft_kind]), 4.0F);
	gcPlayAnimAll(series_logo_gobj);

	DObjGetStruct(series_logo_gobj)->translate.vec.f.x = -350.0f;
	DObjGetStruct(series_logo_gobj)->translate.vec.f.y = 200.0f;
	DObjGetStruct(series_logo_gobj)->translate.vec.f.z = 0.0f;
	DObjGetStruct(series_logo_gobj)->scale.vec.f.x = 1.7f;
	DObjGetStruct(series_logo_gobj)->scale.vec.f.y = 1.7f;
}

// 801320E4
void mnCharsCreateName(s32 ft_kind)
{
	GObj* name_gobj;
	SObj* name_sobj;
	Vec2f coords[12] = {

		{ 33.0, 50.0 },
		{ 46.0, 51.0 },
		{ 24.0, 51.0 },
		{ 24.0, 51.0 },
		{ 38.0, 50.0 },
		{ 44.0, 49.0 },
		{ 32.0, 49.0 },
		{ 24.0, 48.0 },
		{ 34.0, 49.0 },
		{ 23.0, 50.0 },
		{ 34.0, 49.0 },
		{ 42.0, 52.0 }
	};
	intptr_t offsets[12] = {

		0x2F98, 0x33A0, 0x4290, 0x4910, 0x4F78, 0x5398,
		0x58F8, 0x6828, 0x6E48, 0x7628, 0x82E0, 0x8828
	};

	gMNCharsNameGObj = name_gobj = gcMakeGObjSPAfter(0, 0, 0x14, 0x80000000);
	gcAddGObjDisplay(name_gobj, lbCommonDrawSObjAttr, 0x1D, 0x80000000, -1);

	if ((ft_kind == nFTKindPurin) || (ft_kind == nFTKindCaptain))
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_NAME_BORDER_TALL_IMAGE_OFFSET));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = 10.0f;
		name_sobj->pos.y = 44.0f;
		name_sobj->sprite.red = 0x7D;
		name_sobj->sprite.green = 0x45;
		name_sobj->sprite.blue = 0x07;
	}
	else
	{
		name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_NAME_BORDER_IMAGE_OFFSET));
		name_sobj->sprite.attr &= ~SP_FASTCOPY;
		name_sobj->sprite.attr |= SP_TRANSPARENT;
		name_sobj->pos.x = 10.0f;
		name_sobj->pos.y = 45.0f;
		name_sobj->sprite.red = 0x7D;
		name_sobj->sprite.green = 0x45;
		name_sobj->sprite.blue = 0x07;
	}

	name_sobj = lbCommonMakeSObjForGObj(name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], offsets[ft_kind]));
	name_sobj->sprite.attr &= ~SP_FASTCOPY;
	name_sobj->sprite.attr |= SP_TRANSPARENT;
	name_sobj->pos.x = coords[ft_kind].x;
	name_sobj->pos.y = coords[ft_kind].y;
	name_sobj->sprite.red = 0x7D;
	name_sobj->sprite.green = 0x45;
	name_sobj->sprite.blue = 0x07;
}

// 801322F0
void mnCharsCreateWorksBackground()
{
	GObj* works_bg_gobj;
	SObj* works_bg_sobj;

	works_bg_gobj = gcMakeGObjSPAfter(0, 0, 0x15, 0x80000000);
	gcAddGObjDisplay(works_bg_gobj, lbCommonDrawSObjAttr, 0x1E, 0x80000000, -1);

	works_bg_sobj = lbCommonMakeSObjForGObj(works_bg_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], &FILE_010_WORKS_BACKGROUND_IMAGE_OFFSET));
	works_bg_sobj->sprite.attr &= ~SP_FASTCOPY;
	works_bg_sobj->sprite.attr |= SP_TRANSPARENT;
	works_bg_sobj->pos.x = 116.0f;
	works_bg_sobj->pos.y = 173.0f;
	works_bg_sobj->sprite.red = 0xCF;
	works_bg_sobj->sprite.green = 0xCF;
	works_bg_sobj->sprite.blue = 0xAE;
}

// 8013239C
void mnCharsCreateWorks(s32 ft_kind)
{
	GObj* works_gobj;
	SObj* works_sobj;
	intptr_t works_offsets[12] = {

		0x25AB8, 0x26518, 0x26F78, 0x279D8, 0x28438, 0x28E98,
		0x298F8, 0x2A358, 0x2ADB8, 0x2B818, 0x2C278, 0x2CCD8
	};

	gMNCharsWorksGObj = works_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(works_gobj, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1);

	works_sobj = lbCommonMakeSObjForGObj(works_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], works_offsets[ft_kind]));
	works_sobj->sprite.attr &= ~SP_FASTCOPY;
	works_sobj->sprite.attr |= SP_TRANSPARENT;
	works_sobj->pos.x = 139.0f;
	works_sobj->pos.y = 180.0f;
	works_sobj->sprite.red = 0xBC;
	works_sobj->sprite.green = 0xBF;
	works_sobj->sprite.blue = 0xFF;
}

// 80132494
void mnCharsSetScale(GObj* fighter_gobj, s32 ft_kind)
{
	DObjGetStruct(fighter_gobj)->scale.vec.f.x = menu_zoom[ft_kind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.y = menu_zoom[ft_kind];
	DObjGetStruct(fighter_gobj)->scale.vec.f.z = menu_zoom[ft_kind];
}

// 801324CC
void mnCharsSetPosition(GObj* fighter_gobj, s32 ft_kind)
{
	DObjGetStruct(fighter_gobj)->translate.vec.f.x = 0.0f;
	DObjGetStruct(fighter_gobj)->translate.vec.f.y = -100.0f;
	DObjGetStruct(fighter_gobj)->translate.vec.f.z = 0.0f;
}

// 801324F8 - Unused?
void func_ovl33_801324F8() {}

// 80132500
charsActionInfo* mnCharsGetActionInfo(charsActionInfo* info, s32 ft_kind, s32 action_type, s32 arg3, s32 track)
{
	charsSpecialActionInfo* special_actions[12] = {

		&charsSpecialActionInfoMario,
		&charsSpecialActionInfoFox,
		&charsSpecialActionInfoDonkey,
		&charsSpecialActionInfoSamus,
		&charsSpecialActionInfoLuigi,
		&charsSpecialActionInfoLink,
		&charsSpecialActionInfoYoshi,
		&charsSpecialActionInfoCaptain,
		&charsSpecialActionInfoKirby,
		&charsSpecialActionInfoPikachu,
		&charsSpecialActionInfoPurin,
		&charsSpecialActionInfoNess
	};

	if ((action_type == charsActionKindSpecialHi) || (action_type == charsActionKindSpecialN) || (action_type == charsActionKindSpecialLw))
	{
		*info = special_actions[ft_kind]->info[action_type][track];

		return info;
	}
	else
	{
		if (ft_kind == nFTKindKirby)
		{
			if ((action_type == 9) || (action_type == 10))
			{
				*info = D_ovl33_80135CD0[track];

				return info;
			}
			else if ((action_type >= 0x1A) && (action_type < 0x1F) && (track == 1))
			{
				*info = D_ovl33_80135D30;

				return info;
			}
		}

		if (ft_kind == nFTKindPurin)
		{
			if ((action_type == 9) || (action_type == 10))
			{
				*info = D_ovl33_80135D3C[track];

				return info;
			}
			else if ((action_type >= 0x1A) && (action_type < 0x1F) && (track == 1))
			{
				*info = D_ovl33_80135D9C;

				return info;
			}
		}

		if (action_type == 0x12)
		{
			*info = D_ovl33_80135DA8[ft_kind][track];

			return info;
		}
		else
		{
			*info = D_ovl33_80134E30[action_type][track];

			return info;
		}
	}

	return info;
}

// 80132768
sb32 mnCharsIsAnimComplete(GObj* fighter_gobj)
{
	if (fighter_gobj->anim_frame == 0.0f)
		return TRUE;

	return FALSE;
}

// 80132794
void mnCharsInitRecentActionTypes()
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNCharsRecentActionTypes); i++)
		gMNCharsRecentActionTypes[i] = 39;

	gMNCharsRecentActionTypeIndex = 0;
}

// 801327C0
sb32 mnCharsIsRecentActionType(s32 action_type)
{
	s32 i;

	for (i = 0; i < ARRAY_COUNT(gMNCharsRecentActionTypes); i++)
	{
		if (action_type == gMNCharsRecentActionTypes[i])
			return TRUE;
	}

	return FALSE;
}

// 801327FC
s32 mnCharsGetRandomActionType()
{
	s32 action_type;

	do
	{
		action_type = mtTrigGetRandomTimeUCharRange(39);
	}
	while (mnCharsIsRecentActionType(action_type));

	gMNCharsRecentActionTypes[gMNCharsRecentActionTypeIndex] = action_type;

	if (gMNCharsRecentActionTypeIndex >= 2)
		gMNCharsRecentActionTypeIndex = 0;
	else
		gMNCharsRecentActionTypeIndex += 1;

	return action_type;
}

// 8013286C
charsActionInfo* mnCharsSetActionInfo(charsActionInfo* action_info, s32 action_type)
{
	charsActionInfo action_info_temp;

	mnCharsGetActionInfo(&action_info_temp, mnCharsGetFtKind(gMNCharsCurrentIndex), action_type, gMNCharsUnknown, gMNCharsCurrentActionTrack);

	if (action_info_temp.status_id == 0xA2C2A)
	{
		gMNCharsCurrentAnimFrame += 1;

		if (action_info_temp.anim_length == gMNCharsCurrentAnimFrame)
		{
			gMNCharsActionType = action_type = mnCharsGetRandomActionType();
			gMNCharsCurrentAnimFrame = 0;
		}
		gMNCharsCurrentActionTrack = 0;

		mnCharsGetActionInfo(&action_info_temp, mnCharsGetFtKind(gMNCharsCurrentIndex), action_type, gMNCharsUnknown, gMNCharsCurrentActionTrack);

		*action_info = action_info_temp;

		return action_info;
	}
	else
	{
		*action_info = action_info_temp;

		return action_info;
	}
}

// 80132984
charsActionInfo* mnCharsMoveToNextTrack(charsActionInfo* action_info, s32 arg1)
{
	charsActionInfo action_info_temp;

	gMNCharsCurrentActionTrack += 1;

	mnCharsSetActionInfo(&action_info_temp, gMNCharsActionType);

	*action_info = action_info_temp;

	return action_info;
}

// 801329E8
void mnCharsUpdateFighter(GObj* fighter_gobj)
{
	charsActionInfo new_action_info;
	charsActionInfo next_action_info;
	ftStruct* ft_struct;

	ft_struct = ftGetStruct(fighter_gobj);

	if (gMNCharsUseAnimFramesRemaining)
	{
		if (gMNCharsAnimFramesRemaining != 0)
			gMNCharsAnimFramesRemaining -= 1;
		else
		{
			mnCharsMoveToNextTrack(&new_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex));
			mnCharsGetActionInfo(&next_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack + 1);

			if (ft_struct->status_info.status_id == 0x31)
				ftParamResetFighterColAnim(fighter_gobj);

			ftMainSetFighterStatus(fighter_gobj, new_action_info.status_id, 0.0f, 1.0f, new_action_info.flags);

			if (new_action_info.status_id == 0x20031)
				ftParamCheckSetSkeletonColAnimID(fighter_gobj, 3);

			mnCharsUpdateMoveName(gMNCharsMoveNameGObj);

			if (new_action_info.anim_length != 0x29A)
			{
				if (next_action_info.status_id == 0xA2C2A)
					gMNCharsAnimFramesRemaining = new_action_info.anim_length + 0x14;
				else
					gMNCharsAnimFramesRemaining = new_action_info.anim_length;

				gMNCharsUseAnimFramesRemaining = TRUE;
			}
			else
			{
				gMNCharsAnimFramesRemaining = 0;
				gMNCharsUseAnimFramesRemaining = FALSE;
			}
		}
	}
	else if (mnCharsIsAnimComplete(fighter_gobj))
	{
		mnCharsGetActionInfo(&new_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack);
		mnCharsGetActionInfo(&next_action_info, mnCharsGetFtKind(gMNCharsCurrentIndex), gMNCharsActionType, gMNCharsUnknown, gMNCharsCurrentActionTrack + 1);

		if (next_action_info.status_id == 0xA2C2A)
			gMNCharsAnimFramesRemaining = 0x14;
		else
			gMNCharsAnimFramesRemaining = 0;

		gMNCharsUseAnimFramesRemaining = TRUE;
	}

	if (gMNCharsAutoRotateFighter)
	{
		DObjGetStruct(fighter_gobj)->rotate.vec.f.y += PI32 / 360.0f;

		if (DOUBLE_PI32 < DObjGetStruct(fighter_gobj)->rotate.vec.f.y)
			DObjGetStruct(fighter_gobj)->rotate.vec.f.y -= DOUBLE_PI32;
	}
}

// 80132C40
void mnCharsCreateFighter(s32 ft_kind)
{
	GObj* fighter_gobj;
	ftStruct* ft_struct;
	ftCreateDesc spawn_info = dFTManagerDefaultFighterDesc;
	charsActionInfo action_info;

	spawn_info.ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);
	spawn_info.costume = ftParamGetCostumeCommonID(mnCharsGetFtKind(gMNCharsCurrentIndex), 0);
	spawn_info.anim_heap = gMNCharsAnimHeap;
	gMNCharsFighterGObj = fighter_gobj = ftManagerMakeFighter(&spawn_info);

	gcAddGObjProcess(fighter_gobj, mnCharsUpdateFighter, 1, 1);

	ft_struct = ftGetStruct(fighter_gobj);
	ft_struct->is_playing_sfx = TRUE;

	mnCharsSetScale(fighter_gobj, ft_kind);
	mnCharsSetPosition(fighter_gobj, ft_kind);

	gMNCharsUnknown = 1;

	mnCharsInitRecentActionTypes();

	gMNCharsActionType = mnCharsGetRandomActionType();
	gMNCharsCurrentActionTrack = 0;
	gMNCharsCurrentAnimFrame = 0;

	mnCharsSetActionInfo(&action_info, gMNCharsActionType);

	ftMainSetFighterStatus(fighter_gobj, action_info.status_id, 0.0f, 1.0f, action_info.flags);

	if (action_info.anim_length != 0x29A)
	{
		gMNCharsUseAnimFramesRemaining = TRUE;
		gMNCharsAnimFramesRemaining = action_info.anim_length;
	}
	else
	{
		gMNCharsUseAnimFramesRemaining = FALSE;
		gMNCharsAnimFramesRemaining = 0;
	}

	mnCharsUpdateMoveName(gMNCharsMoveNameGObj);

	gMNCharsAutoRotateFighter = TRUE;
}

// 80132DD4
s32 mnCharsGetMoveType()
{
	switch (gMNCharsActionType)
	{
		case charsActionKindSpecialHi:
			return charsActionKindSpecialHi;
		case charsActionKindSpecialN:
			return charsActionKindSpecialN;
		case charsActionKindSpecialLw:
			return charsActionKindSpecialLw;
		default:
			return 3;
	}
}

// 80132E20
void mnCharsUpdateMoveName(GObj* move_name_gobj)
{
	SObj* move_name_sobj;
	intptr_t move_name_offsets[12][3] = {

		0x2D088, 0x2DE48, 0x2EC48,
		0x2D1C8, 0x2DF88, 0x2ED88,
		0x2D308, 0x2E0C8, 0x2EEC8,
		0x2D448, 0x2E208, 0x2F008,
		0x2D088, 0x2DE48, 0x2F148,
		0x2D588, 0x2E348, 0x2F288,
		0x2D6C8, 0x2E488, 0x2F3C8,
		0x2D808, 0x2E5C8, 0x2F508,
		0x2D948, 0x2E740, 0x2F648,
		0x2DA88, 0x2E888, 0x2F788,
		0x2DBC8, 0x2E9C8, 0x2F8C8,
		0x2DD08, 0x2EB08, 0x2FA08
	};
	intptr_t move_input_offsets[3] = {

		0x2CDA8, 0x2CE78, 0x2CF48
	};
	s32 move_type;
	s32 ft_kind;

	move_type = mnCharsGetMoveType();
	ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);
	gcRemoveSObjAll(move_name_gobj);

	if (move_type != 3)
	{
		move_name_sobj = lbCommonMakeSObjForGObj(move_name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], move_input_offsets[move_type]));
		move_name_sobj->sprite.attr &= ~SP_FASTCOPY;
		move_name_sobj->sprite.attr |= SP_TRANSPARENT;
		move_name_sobj->pos.x = 24.0f;
		move_name_sobj->pos.y = 199.0f;
		move_name_sobj->sprite.red = 0xE3;
		move_name_sobj->sprite.green = 0x7D;
		move_name_sobj->sprite.blue = 0xC;

		move_name_sobj = lbCommonMakeSObjForGObj(move_name_gobj, GetAddressFromOffset(gMNCharsFilesArray[0], move_name_offsets[ft_kind][move_type]));
		move_name_sobj->sprite.attr &= ~SP_FASTCOPY;
		move_name_sobj->sprite.attr |= SP_TRANSPARENT;
		move_name_sobj->pos.x = 24.0f;
		move_name_sobj->pos.y = 210.0f;
		move_name_sobj->sprite.red = 0xE3;
		move_name_sobj->sprite.green = 0x7D;
		move_name_sobj->sprite.blue = 0xC;
	}
}

// 80132FA0
void mnCharsCreateMoveName()
{
	GObj* move_name_gobj;

	gMNCharsMoveNameGObj = move_name_gobj = gcMakeGObjSPAfter(0, 0, 0x16, 0x80000000);
	gcAddGObjDisplay(move_name_gobj, lbCommonDrawSObjAttr, 0x1F, 0x80000000, -1);

	mnCharsUpdateMoveName(gMNCharsMoveNameGObj);
}

// 80133000
void mnCharsCreateBioViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x46, 0x04000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801330A0
void mnCharsCreateHeaderViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x3C, 0x08000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133140
void mnCharsCreateSeriesLogoViewport()
{
	Camera *cam;
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017DBC, 0x5A, 0x10000000, -1, 1, 1, 0, 1, 0);

	cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 1800.0F;
	cam->vec.at.x = 0.0F;
	cam->vec.at.y = 0.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
}

// 80133224
void mnCharsCreateNameViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x50, 0x20000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 801332C4
void mnCharsCreateWorksBackgroundViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x32, 0x40000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133364
void mnCharsCreateWorksViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, lbCommonScissorSpriteCamera, 0x28, 0x80000000, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 80133404
void mnCharsCreateFighterViewport()
{
	Camera *cam;

	gMNCharsFighterCameraGObj = gcMakeCameraGObj(0x401, NULL, 0x10, 0x80000000U, func_80017DBC, 0x1E, 0x00048600, -1, 1, 1, 0, 1, 0);

	cam = CameraGetStruct(gMNCharsFighterCameraGObj);
	cam->flags = 1;

	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 3000.0F;
	cam->vec.at.x = 700.0F;
	cam->vec.at.y = 370.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;
}

// 80133510
sb32 mnCharsIsUnlocked(s32 ft_kind)
{
	if ((ft_kind == nFTKindLuigi) ||
		(ft_kind == nFTKindCaptain) ||
		(ft_kind == nFTKindPurin) ||
		(ft_kind == nFTKindNess)
	)
	{
		if (gMNCharsUnlockedMask & gmSaveChrMask(ft_kind))
			return TRUE;
		else
			return FALSE;
	}
	else
		return TRUE;
}

// 80133568
void mnCharsInitVars()
{
	gMNCharsFramesElapsed = 0;

	gMNCharsSeriesLogoGObj = NULL;
	gMNCharsNameGObj = NULL;
	gMNCharsBioGObj = NULL;
	gMNCharsWorksGObj = NULL;
	gMNCharsFighterGObj = NULL;
	gMNCharsMoveNameGObj = NULL;

	gMNCharsActionType = 0;
	gMNCharsAnimFramesRemaining = 0;
	gMNCharsUseAnimFramesRemaining = FALSE;
	gMNCharsAutoRotateFighter = TRUE;
	gMNCharsUnknown = 1;
	gMNCharsCurrentActionTrack = 0;
	gMNCharsUnlockedMask = gSaveData.character_mask;

	if (gSceneData.scene_previous == nSCKindData)
	{
		gMNCharsCurrentIndex = mnCharsGetIndex(gSaveData.bio_ft_kind);
		gMNCharsIsDemoMode = FALSE;
	}
	else
	{
		gMNCharsIsDemoMode = TRUE;
		gMNCharsFirstFtKind = gSceneData.demo_ft_kind[0];
		gMNCharsSecondFtKind = gSceneData.demo_ft_kind[1];
		gMNCharsCurrentIndex = mnCharsGetIndex(gMNCharsFirstFtKind);
	}

	mnCharsInitRecentActionTypes();
}

// 8013366C
void mnCharsSaveFtKindToSRAM()
{
	gSaveData.bio_ft_kind = mnCharsGetFtKind(gMNCharsCurrentIndex);

	scBackupWrite();
}

// 8013369C
void mnCharsChangeFighter(s32 ft_kind)
{
	if (gMNCharsSeriesLogoGObj != NULL)
	{
		gcEjectGObj(gMNCharsSeriesLogoGObj);
		mnCharsCreateSeriesLogo(ft_kind);
	}
	if (gMNCharsNameGObj != NULL)
	{
		gcEjectGObj(gMNCharsNameGObj);
		mnCharsCreateName(ft_kind);
	}
	if (gMNCharsBioGObj != NULL)
	{
		gcEjectGObj(gMNCharsBioGObj);
		mnCharsCreateBio(ft_kind);
	}
	if (gMNCharsWorksGObj != NULL)
	{
		gcEjectGObj(gMNCharsWorksGObj);
		mnCharsCreateWorks(ft_kind);
	}
	if (gMNCharsFighterGObj != NULL)
	{
		ftManagerDestroyFighter(gMNCharsFighterGObj);
		mnCharsCreateFighter(ft_kind);
	}
}

// 80133754
void mnCharsMoveFighterCamera(Camera* fighter_cam, f32 angle, s32 arg2)
{
	f32 theta;
	f32 radians;

	radians = F_CLC_DTOR32(angle);
	fighter_cam->vec.eye.y = __sinf(radians) * 3000.0f;
	fighter_cam->vec.eye.z = cosf(radians) * 3000.0f;

	theta = atan2f(370.0f, 0) + radians;
	fighter_cam->vec.at.y = __sinf(theta) * 370.0f;
	fighter_cam->vec.at.z = cosf(theta) * 370.0f;

	theta = atan2f(1.0f, 0) + radians;
	fighter_cam->vec.up.y = __sinf(theta);
	fighter_cam->vec.up.z = cosf(theta);
}

// 80133840
void mnCharsResetFighterViewport()
{
	Camera *cam = CameraGetStruct(gMNCharsFighterCameraGObj);

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.y = 0.0F;
	cam->vec.eye.z = 3000.0F;
	cam->vec.at.x = 700.0F;
	cam->vec.at.y = 370.0F;
	cam->vec.at.z = 0.0F;
	cam->vec.up.x = 0.0F;
	cam->vec.up.y = 1.0F;
	cam->vec.up.z = 0.0F;

	gMNCharsHeldStickAngle = 0;
	gMNCharsHeldStickUnknown.f = 0;
}

// 801338AC
void mnCharsHandleInput()
{
	s32 z_held_port;
	s32 stick_range;
	s32 is_button;

	if (scSubsysControllerGetPlayerTapButtons(START_BUTTON | A_BUTTON))
	{
		// commented out?
	}

	if (scSubsysControllerGetPlayerTapButtons(B_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindData;

		mnCharsSaveFtKindToSRAM();
		leoInitUnit_atten();
	}

	z_held_port = scSubsysControllerGetPlayerHoldButtons(Z_TRIG);

	if (z_held_port != 0)
	{
		z_held_port--;

		if (gPlayerControllers[z_held_port].stick_range.x < -20)
		{
			DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(gPlayerControllers[z_held_port].stick_range.x / 60.0f);

			if (DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(360.0F);
			}

			gMNCharsAutoRotateFighter = FALSE;
		}

		if (gPlayerControllers[z_held_port].stick_range.x > 20)
		{
			DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(gPlayerControllers[z_held_port].stick_range.x / 60.0f);

			if (DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y > F_CLC_DTOR32(360.0F))
			{
				DObjGetStruct(gMNCharsFighterGObj)->rotate.vec.f.y -= F_CLC_DTOR32(360.0F);
			}

			gMNCharsAutoRotateFighter = FALSE;
		}

		if ((gPlayerControllers[z_held_port].stick_range.y > 20) && (gMNCharsHeldStickAngle < 45.0f))
		{
			gMNCharsHeldStickAngle += gPlayerControllers[z_held_port].stick_range.y / 60.0f;

			mnCharsMoveFighterCamera(CameraGetStruct(gMNCharsFighterCameraGObj), gMNCharsHeldStickAngle, gMNCharsHeldStickUnknown.s);

			gMNCharsAutoRotateFighter = FALSE;
		}

		if ((gPlayerControllers[z_held_port].stick_range.y < -20) && (gMNCharsHeldStickAngle > -45.0f))
		{
			gMNCharsHeldStickAngle += gPlayerControllers[z_held_port].stick_range.y / 60.0f;

			mnCharsMoveFighterCamera(CameraGetStruct(gMNCharsFighterCameraGObj), gMNCharsHeldStickAngle, gMNCharsHeldStickUnknown.s);

			gMNCharsAutoRotateFighter = FALSE;
		}
	}
	else
	{
		if (
			mnCommonCheckGetOptionButtonInput(gMNCharsChangeWait, is_button, L_JPAD | L_TRIG | L_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNCharsChangeWait, stick_range, -20, 0)
		)
		{
				do
				{
					if (gMNCharsCurrentIndex == 0)
						gMNCharsCurrentIndex = 11;
					else
						gMNCharsCurrentIndex -= 1;
				}
				while (!mnCharsIsUnlocked(mnCharsGetFtKind(gMNCharsCurrentIndex)));

				mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

				mnCommonSetOptionChangeWaitN(gMNCharsChangeWait, is_button, stick_range, 7);

				mnCharsResetFighterViewport();
		}

		if (
			mnCommonCheckGetOptionButtonInput(gMNCharsChangeWait, is_button, R_JPAD | R_TRIG | R_CBUTTONS) ||
			mnCommonCheckGetOptionStickInputLR(gMNCharsChangeWait, stick_range, 20, 1)
		)
		{
			do
			{
				if (gMNCharsCurrentIndex == 11)
					gMNCharsCurrentIndex = 0;
				else
					gMNCharsCurrentIndex += 1;
			}
			while (!mnCharsIsUnlocked(mnCharsGetFtKind(gMNCharsCurrentIndex)));

			mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

			mnCommonSetOptionChangeWaitP(gMNCharsChangeWait, is_button, stick_range, 7);

			mnCharsResetFighterViewport();
		}
	}
}

// 80133CB8
void mnCharsHandleInputDemoMode()
{
	if (scSubsysControllerGetPlayerTapButtons(START_BUTTON | A_BUTTON | B_BUTTON))
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindTitle;
		gSceneData.wait_longer_to_show_demo = TRUE;

		leoInitUnit_atten();
	}

	if (gMNCharsFramesElapsed == 300)
	{
		gMNCharsCurrentIndex = mnCharsGetIndex(gMNCharsSecondFtKind);
		mnCharsChangeFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));
	}

	if (gMNCharsFramesElapsed == 600)
	{
		gSceneData.scene_previous = gSceneData.scene_current;
		gSceneData.scene_current = nSCKindDemo;

		leoInitUnit_atten();
	}
}

// 80133D68
void mnCharsMain(GObj* arg0)
{

	gMNCharsFramesElapsed += 1;

	if (gMNCharsFramesElapsed >= 10)
	{
		if (gMNCharsChangeWait != 0)
			gMNCharsChangeWait -= 1;

		if ((scSubsysControllerGetPlayerStickInRangeLR(-0x14, 0x14)) &&
			(scSubsysControllerGetPlayerStickInRangeUD(-0x14, 0x14)) &&
			(!scSubsysControllerGetPlayerHoldButtons(R_JPAD | R_TRIG | R_CBUTTONS)) &&
			(!scSubsysControllerGetPlayerHoldButtons(L_JPAD | L_TRIG | L_CBUTTONS))
		)
		{
			gMNCharsChangeWait = 0;
		}

		if (!gMNCharsIsDemoMode)
			mnCharsHandleInput();
		else
			mnCharsHandleInputDemoMode();
	}
}

// 80133E28
void mnCharsInit()
{
	s32 i;
	rdSetup rldmSetup;

	rldmSetup.table_addr = &D_NF_001AC870;
	rldmSetup.table_files_num = &D_NF_00000854;
	rldmSetup.file_heap = 0;
	rldmSetup.file_heap_size = 0;
	rldmSetup.status_buf = (rdFileNode*) &D_ovl33_80136720;
	rldmSetup.status_buf_size = 0x64;
	rldmSetup.force_buf = (rdFileNode*) &D_ovl33_80136A40;
	rldmSetup.force_buf_size = 7;
	rdManagerInitSetup(&rldmSetup);
	rdManagerLoadFiles(D_ovl33_80136228, ARRAY_COUNT(D_ovl33_80136228), gMNCharsFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl33_80136228, ARRAY_COUNT(D_ovl33_80136228)), 0x10U));

	gcMakeGObjSPAfter(0, mnCharsMain, 0, 0x80000000);
	gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	efAllocInitParticleBank();
	mnCharsInitVars();
	efManagerInitEffects();
	ftManagerAllocFighter(3, 1);

	for (i = 0; i < 12; i++)
		ftManagerSetupFilesAllKind(i);

	gMNCharsAnimHeap = gsMemoryAlloc(gFTManagerAnimHeapSize, 0x10);
	mnCharsCreateBioViewport();
	mnCharsCreateHeaderViewport();
	mnCharsCreateSeriesLogoViewport();
	mnCharsCreateNameViewport();
	mnCharsCreateWorksBackgroundViewport();
	mnCharsCreateWorksViewport();
	mnCharsCreateFighterViewport();
	mnCharsCreateHeader();
	mnCharsCreateWorksBackground();
	mnCharsCreateWorks(mnCharsGetFtKind(gMNCharsCurrentIndex));
	mnCharsCreateBio(mnCharsGetFtKind(gMNCharsCurrentIndex));
	mnCharsCreateSeriesLogo(mnCharsGetFtKind(gMNCharsCurrentIndex));
	mnCharsCreateName(mnCharsGetFtKind(gMNCharsCurrentIndex));
	mnCharsCreateMoveName();
	mnCharsCreateFighter(mnCharsGetFtKind(gMNCharsCurrentIndex));

	scSubsysFighterSetLightParams(45.0f, 10.f, 0xFF, 0xFF, 0xFF, 0xFF);

	if (gSceneData.scene_previous == nSCKindData)
		auPlaySong(0, 0x2B);
}

// 801364FC
syDisplaySetup D_ovl33_801364FC = {

	gSCSubsysFramebuffer0,
	gSCSubsysFramebuffer1,
	gSCSubsysFramebuffer2,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99,
};

// 80136518
scRuntimeInfo D_ovl33_80136518 = {

	0x00000000, 0x8000A5E4,
	0x800A26B8, &lOverlay33ArenaLo,
	0x00000000, 0x00000001, 0x00000002, 0x00006000, 0x00001000,
	0x00000000, 0x00000000, 0x00008000, 0x00020000, 0x0000C000,
	mnCharsSetupDisplayList, update_contdata,
	0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000,
	0x800D5CAC, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000088, 0x00000000, 0x0000006C,
	0x00000000, 0x00000090,
	mnCharsInit
};

// 80134050
void char_bkg_info_entry()
{
	D_ovl33_801364FC.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl33_801364FC);
	D_ovl33_80136518.arena_size = (u32) ((uintptr_t)&lOverlay33ArenaHi - (uintptr_t)&lOverlay33ArenaLo);
	func_800A2698(&D_ovl33_80136518);
}