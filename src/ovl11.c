#include <sys/develop.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <lb/library.h>
#include <sys/video.h>

// Externs
extern intptr_t D_NF_800A5240;      // 0x800A5240
extern intptr_t lOverlay11ArenaLo;  // 0x800D6B30
extern intptr_t lOverlay11ArenaHi;  // 0x80392A00
extern intptr_t FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET; // 0x8460, file 0x0A9 image offset for no controller texture

extern void syRdpSetViewport(void*, f32, f32, f32, f32);



// Forward declarations
void mnNoControllerLoadFiles();


// Data
SYVideoSetup D_ovl11_800D6700 = {

	0x80392A00,
	0x803B6900,
	0x803DA800,
	0x00000000,
	0x00000140,
	0x000000F0,
	0x00016A99
};

scRuntimeInfo D_ovl11_800D671C = {

	0x00000000, 0x8000A5E4, 0x8000A340, 0x800D6B30, 0x00000000,
	0x00000001, 0x00000002, 0x00007000, 0x00002800, 0x00000000,
	0x00000000, 0x00001000, 0x00020000, 0x00001000, 0x00000000,
	0x80004310, 0x00000000, 0x00000600, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000088, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000088,
	0x00000000, 0x0000006C, 0x00000000, 0x00000090, 0x800D65B8
};


// BSS
// 0x800D67C0
s32 D_ovl11_800D67C0[4];

// 0x800D67D0
s32 gMNNoControllerFiles[1];

// 0x800D67D8
u32 D_ovl11_800D67D8[200];

// 0x800D6AF8
LBFileNode D_ovl11_800D6AF8;


// 0x800D6490
GObj* mnNoControllerCreateViewport()
{
	GObj *camera_gobj = gcMakeCameraGObj(0x3E8, NULL, 0, 0x80000000U, lbCommonDrawSprite, 0x64, 0x00000001, -1, 0, 1, 0, 1, 0);
	CObj *cobj = CObjGetStruct(camera_gobj);
	syRdpSetViewport(&cobj->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	return camera_gobj;
}

// 0x800D6538
void mnNoControllerCreateNoControllerImage()
{
	GObj* gobj;
	SObj* sobj;

	gobj = gcMakeGObjSPAfter(0x3E9, 0, 1, 0x80000000);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 0, GOBJ_PRIORITY_DEFAULT, ~0);

	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNNoControllerFiles[0], &FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET));
	sobj->pos.x = 10.0f;
	sobj->pos.y = 10.0f;
}

// 0x800D65B8
void mnNoControllerInit()
{
	mnNoControllerLoadFiles();
	gcMakeDefaultCameraGObj(0, GOBJ_PRIORITY_DEFAULT, 100, 0, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
	mnNoControllerCreateViewport();
	mnNoControllerCreateNoControllerImage();
}

// 0x800D6604 - n64_entry
void mnNoControllerStartScene()
{
	D_ovl11_800D6700.zbuffer = syVideoGetZBuffer(6400);
	syVideoInit(&D_ovl11_800D6700);
	D_ovl11_800D671C.arena_size = (u32) ((uintptr_t)&lOverlay11ArenaHi - (uintptr_t)&lOverlay11ArenaLo);
	syTaskmanRun(&D_ovl11_800D671C);
}