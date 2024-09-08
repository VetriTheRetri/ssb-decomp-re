#include <sys/develop.h>
#include <gr/ground.h>
#include <sc/scene.h>
#include <ovl0/reloc_data_mgr.h>
#include <sys/system_00.h>

// Externs
extern intptr_t D_NF_800A5240;      // 800A5240
extern intptr_t lOverlay11ArenaLo;  // 800D6B30
extern intptr_t lOverlay11ArenaHi;  // 80392A00
extern intptr_t FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET; // 0x8460, file 0x0A9 image offset for no controller texture
// ovl0
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();

extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);


// Forward declarations
void mnNoControllerLoadFiles();


// Data
syDisplaySetup D_ovl11_800D6700 = {

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
// 800D67C0
s32 D_ovl11_800D67C0[4];

// 800D67D0
s32 gMNNoControllerFilesArray[1];

// 800D67D8
u32 D_ovl11_800D67D8[200];

// 800D6AF8
rdFileNode D_ovl11_800D6AF8;


// 800D6490
GObj* mnNoControllerCreateViewport()
{
	GObj *camera_gobj = func_8000B93C(0x3E8, NULL, 0, 0x80000000U, func_ovl0_800CD2CC, 0x64, 0x00000001, -1, 0, 1, 0, 1, 0);
	Camera *cam = CameraGetStruct(camera_gobj);
	func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

	return camera_gobj;
}

// 800D6538
void mnNoControllerCreateNoControllerImage()
{
	GObj* gobj;
	SObj* sobj;

	gobj = gcMakeGObjSPAfter(0x3E9, 0, 1, 0x80000000);
	gcAddGObjDisplay(gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);

	sobj = lbCommonMakeSObjForGObj(gobj, GetAddressFromOffset(gMNNoControllerFilesArray[0], &FILE_0A9_NO_CONTROLLER_IMAGE_OFFSET));
	sobj->pos.x = 10.0f;
	sobj->pos.y = 10.0f;
}

// 800D65B8
void mnNoControllerInit()
{
	mnNoControllerLoadFiles();
	func_8000B9FC(0, 0x80000000, 0x64, 0, 0xFF);
	mnNoControllerCreateViewport();
	mnNoControllerCreateNoControllerImage();
}

// 800D6604 - n64_entry
void mnNoControllerStartScene()
{
	D_ovl11_800D6700.zbuffer = syDisplayGetZBuffer(6400);
	func_80007024(&D_ovl11_800D6700);
	D_ovl11_800D671C.arena_size = (u32) ((uintptr_t)&lOverlay11ArenaHi - (uintptr_t)&lOverlay11ArenaLo);
	gsGTLSceneInit(&D_ovl11_800D671C);
}