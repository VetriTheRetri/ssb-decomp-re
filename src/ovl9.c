#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <lb/library.h>

#include "debug.h"

// Externs
extern s32 sSYTaskmanCount;

// ovl8
extern dbMenuPosition* func_ovl8_803749BC(s32);
extern void func_ovl8_80374A54(s32, dbMenuPosition*);
extern void func_ovl8_80377AEC(dbMenuPosition*, dbMenuPosition*, u32, s32);
extern void func_ovl8_8037DD60(dbMenuPosition*, char*);
extern void func_ovl8_80386BE0(char*, const char*);
extern void func_ovl8_8037DFCC(s32, s16);


// DATA
// 0x80369F60
u32 D_ovl9_80369F60 = 0xFFFFFFFF;

// 0x80369F64
u32 dMNDebugMenuBGColor = 0x0000FFFF;

// 0x80369F68
u32 dMNDebugMenuBorderColor = 0x80FFFFFF;

// 0x80369F6C
u32 dMNDebugMenuTextColor = 0xFFFFFFFF;

// 0x80369F70
u32 dMNDebugMenuTextBGColor[] = { 0x0000FFFF, 0x0000FFFF, 0xFFFFFFFF };

// 0x80369F7C
dbMenuPosition gMNDebugMenuMenuPosition = { 0 };

// 0x80369F84
u16 D_ovl9_80369F84[] = {

	0xFFFF,	0xFFFF,
	0x0000,	0xFFFF,
	0x0001,	0x0000,
	0x4257,	0x494E,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000,
	0x0000,	0x0000
}; 

// 0x80369FCC
u16 gMNDebugMenuPreviousInputs = 0;

// 0x80369FD0
u16 gMNDebugMenuNewInputs = 0;

// 0x80369FD4
u16 gMNDebugMenuStickInputs = 0;

// 0x80369FD8
s32 gMNDebugMenuRapidScrollWait = 30;

// 0x80369FDC
s32 D_ovl9_80369FDC = 0;

// 0x80369FE0
s32 D_ovl9_80369FE0[48] = {

	0x00040006, 0x00040002,
	0x00020000, 0x00000006,
	0x00040004, 0x00020002,
	0x00050003, 0x00060003,
	0x00020005, 0x00020002,
	0x00020002, 0x00020002,
	0x00020002, 0x00060005,
	0x00040002, 0x00040003,
	0x00000002, 0x00020002,
	0x00020003, 0x00030002,
	0x00020006, 0x00020002,
	0x00030000, 0x00020002,
	0x00020002, 0x00020002,
	0x00020002, 0x00020000,
	0x00020002, 0x00030005,
	0x00030005, 0x00050001,
	0x00040003, 0x00030003,
	0x00030003, 0x00030003,
	0x00030005, 0x00040003,
	0x00050000, 0x00030003,
	0x00030003, 0x00030003,
	0x00040003, 0x00020000,
	0x00020003, 0x00030004,
	0x00060004, 0x00020000
};

s32 D_ovl9_8036A0A0[190] = {

	0x00000000, 0x00000000, 0x80808080,
	0x80008000, 0xA0A00000, 0x00000000,
	0x0050F850, 0xF8500000, 0x2078A0F0,
	0x28A87020, 0x6192946E, 0x19294600,
	0x30485020, 0x54889462, 0x80800000,
	0x00000000, 0x20408080, 0x80804020,
	0x80402020, 0x20204080, 0x005020F8,
	0x20500000, 0x002020F8, 0x20200000,
	0x00000000, 0x00404080, 0x000000F0,
	0x00000000, 0x00000000, 0x00008000,
	0x10102020, 0x40408080, 0x708898A8,
	0xC8887000, 0x40C04040, 0x40404000,
	0x70880810, 0x2040F800, 0xF8102070,
	0x08887000, 0x10305090, 0xF8101000,
	0xF880F008, 0x08887000, 0x304080F0,
	0x88887000, 0xF8081010, 0x20202000,
	0x70888870, 0x88887000, 0x70888878,
	0x08106000, 0x00008000, 0x00800000,
	0x00004000, 0x00404080, 0x00204080,
	0x40200000, 0x0000F800, 0xF8000000,
	0x00804020, 0x40800000, 0x60901020,
	0x40004000, 0x38449AAA, 0xAA9C4038,
	0x20205050, 0xF8888800, 0xF08888F0,
	0x8888F000, 0x70888080, 0x80887000,
	0xE0908888, 0x8890E000, 0xF08080E0,
	0x8080F000, 0xF08080E0, 0x80808000,
	0x70888098, 0x88887000, 0x888888F8,
	0x88888800, 0x80808080, 0x80808000,
	0x08080808, 0x88887000, 0x8890A0C0,
	0xA0908800, 0x80808080, 0x8080F000,
	0x82C6AA92, 0x82828200, 0xC8C8A8A8,
	0x98988800, 0x70888888, 0x88887000,
	0xF08888F0, 0x80808000, 0x70888888,
	0x88A87010, 0xF08888F0, 0xA0908800,
	0x70888070, 0x08887000, 0xF8202020,
	0x20202000, 0x88888888, 0x88887000,
	0x88888850, 0x50202000, 0x82825454,
	0x28282800, 0x88885020, 0x50888800,
	0x88885020, 0x20202000, 0xF0102040,
	0x8080F000, 0xC0808080, 0x808080C0,
	0x80804040, 0x20201010, 0xC0404040,
	0x404040C0, 0x80400000, 0x00000000,
	0x00000000, 0x0000FC00, 0x00000000,
	0x00000000, 0x00006010, 0x70907000,
	0x8080E090, 0x9090E000, 0x00006090,
	0x80906000, 0x10107090, 0x90907000,
	0x00006090, 0xF0806000, 0x3040E040,
	0x40404000, 0x00709090, 0x90701060,
	0x8080E090, 0x90909000, 0x4000C040,
	0x40404000, 0x20006020, 0x202020C0,
	0x808090A0, 0xC0A09000, 0xC0404040,
	0x40404000, 0x0000EC92, 0x92929200,
	0x0000E090, 0x90909000, 0x00006090,
	0x90906000, 0x00E09090, 0x90E08080,
	0x00709090, 0x90701010, 0x0000B0C0,
	0x80808000, 0x00007080, 0x6010E000,
	0x004040E0, 0x40404020, 0x00009090,
	0x90907000, 0x00008850, 0x50202000,
	0x00008254, 0x54282800, 0x00008850,
	0x20508800, 0x00909090, 0x90701060,
	0x0000F020, 0x4080F000, 0x20404080,
	0x40404020, 0x80808080, 0x80808080,
	0x80404020, 0x40404080, 0x68B00000,
	0x00000000
};

// TODO - some struct, maybe 0x14 size
uintptr_t D_ovl9_8036A398[] = {

	0x00000008,
	0x00080000,
	0x80369FE0,
	0x01000000,
	0x8036A0A0
};


// BSS
// 0x8036A400
s32 D_ovl9_8036A400[7168];

// 0x80371400
s32 gMNDebugMenuCursorIndexWhenExited;

// 0x80371404
s32 D_ovl9_80371404; // TODO - some struct, pretty important!

// 0x80371408
GObj* gMNDebugMenuMenuGObj;

// 0x8037140C
dbMenuItem *gMNDebugMenuMenuItems;

// 0x80371410
s32 gMNDebugMenuMenuItemsCount;

// 0x80371414
s32 gMNDebugMenuCursorIndex;

// 0x80371418
void (*gMNDebugMenuDefaultMenuRenderProc)(GObj*);

// 0x8037141C
s32 gMNDebugMenuRedrawInterrupt;

// 0x80371420
sb32 gMNDebugMenuIsMenuOpen;

// 0x80371424
s32 gMNDebugMenuOriginalGSGTLNumTasks;

// 0x80371428
char gMNDebugMenuStringBuffer[0x38];


// 0x80369240
void dbMenuUpdateMenuInputs()
{
	u16 inputs = 0;
	SYController *controller = &gSysController;

	if (gSysController.stick_range.x > 40)
		inputs |= R_JPAD;

	if (gSysController.stick_range.x < -40)
		inputs |= L_JPAD;

	if (controller->stick_range.y > 40)
		inputs |= U_JPAD;

	if (controller->stick_range.y < -40)
		inputs |= D_JPAD;

	gMNDebugMenuNewInputs = (inputs ^ gMNDebugMenuPreviousInputs) & inputs;

	if ((inputs ^ gMNDebugMenuPreviousInputs) != 0)
	{
		gMNDebugMenuStickInputs = gMNDebugMenuNewInputs;
		gMNDebugMenuRapidScrollWait = 30;
	}
	else
	{
		gMNDebugMenuRapidScrollWait--;

		if (gMNDebugMenuRapidScrollWait > 0)
		{
			gMNDebugMenuStickInputs = 0;
		}
		else
		{
			gMNDebugMenuStickInputs = inputs;
			gMNDebugMenuRapidScrollWait = 5;
		}
	}

	gMNDebugMenuPreviousInputs = inputs;
}

// 0x80369310
void dbMenuDrawString(dbMenuPosition *arg0, const char *str, ...)
{
	func_ovl8_80386BE0(gMNDebugMenuStringBuffer, &str);
	func_ovl8_8037DD60(arg0, gMNDebugMenuStringBuffer);
}

// 0x80369358
void dbMenuDrawBorder(s32 arg0, u32 color)
{
	dbMenuPosition* temp_s0;
	dbMenuPosition menu_position;

	temp_s0 = func_ovl8_803749BC(arg0);

	func_ovl8_80374A54(arg0, &gMNDebugMenuMenuPosition);

	// draw top border
	menu_position.x = 0;
	menu_position.y = 0;
	menu_position.w = 1;
	menu_position.h = gMNDebugMenuMenuPosition.h;
	func_ovl8_80377AEC(temp_s0, &menu_position, color, 4);

	// draw left border
	menu_position.w = gMNDebugMenuMenuPosition.w;
	menu_position.h = 1;
	func_ovl8_80377AEC(temp_s0, &menu_position, color, 4);

	// draw bottom border
	menu_position.y = gMNDebugMenuMenuPosition.h - 1;
	menu_position.h = 1;
	func_ovl8_80377AEC(temp_s0, &menu_position, color, 4);

	// draw right border
	menu_position.x = gMNDebugMenuMenuPosition.w - 1;
	menu_position.y = 0;
	menu_position.w = 1;
	menu_position.h = gMNDebugMenuMenuPosition.h;
	func_ovl8_80377AEC(temp_s0, &menu_position, color, 4);
}

// 0x8036944C
void dbMenuDrawBackground(s32 arg0, s32 color)
{
	dbMenuPosition *sp24;
	dbMenuPosition sp1C;

	sp24 = func_ovl8_803749BC(arg0);

	func_ovl8_80374A54(arg0, &gMNDebugMenuMenuPosition);

	// draw bg
	sp1C.x = 1;
	sp1C.y = 1;
	sp1C.w = gMNDebugMenuMenuPosition.w - 2;
	sp1C.h = gMNDebugMenuMenuPosition.h - 2;
	func_ovl8_80377AEC(sp24, &sp1C, color, 4);
}

// 0x803694C8
void dbMenuDrawMenuItem(void* arg0, dbMenuItem* menu_item)
{
	switch (menu_item->type)
	{
		case dbMenuItemKindExitLabel:
		case dbMenuItemKindLabel:
			dbMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label);
			break;
		case dbMenuItemKindNumeric:
			dbMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.s);
			break;
		case dbMenuItemKindNumericByte:
			dbMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.b);
			break;
		case dbMenuItemKindDouble:
			dbMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, (f64) *menu_item->value.f);
			break;
		case dbMenuItemKindString:
			dbMenuDrawString(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.s]);
			break;
		case dbMenuItemKindStringByte:
			dbMenuDrawString(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.b]);
			break;
	}
}

// 0x80369600
void dbMenuDrawMenuItems(void* arg0, dbMenuItem *menu_item, s32 arg2)
{
	s32 i;

	for (i = 0; i < arg2; i++, menu_item++)
	{
		func_ovl8_8037DFCC(12, 2 + 9 * i);
		dbMenuDrawMenuItem(arg0, menu_item);
	}
}

// 0x80369680
void dbMenuDrawCursor(void* arg0, s32 cursor_index)
{
	func_ovl8_8037DFCC(3, (cursor_index * 9) + 2);
	dbMenuDrawString(func_ovl8_803749BC(arg0), ">");
}

// 0x803696D4
void gMNDebugMenuRenderMenu(s32 arg0)
{
	if (gMNDebugMenuRedrawInterrupt != 0)
	{
		gMNDebugMenuRedrawInterrupt = 0;

		dbMenuDrawBackground(D_ovl9_80371404, &dMNDebugMenuBGColor);
		dbMenuDrawMenuItems(D_ovl9_80371404, gMNDebugMenuMenuItems, gMNDebugMenuMenuItemsCount);
		dbMenuDrawCursor(D_ovl9_80371404, gMNDebugMenuCursorIndex);
	}

	gMNDebugMenuDefaultMenuRenderProc(arg0);
}

// 0x8036975C
void dbMenuHandleInputs(GObj *gobj)
{
	SYController *controller = &gSysController;
	s32 stick_x;
	f32 temp;

	dbMenuUpdateMenuInputs();

	if ((controller->button_update & U_JPAD) || (gMNDebugMenuStickInputs & U_JPAD))
	{
		gMNDebugMenuCursorIndex = (gMNDebugMenuCursorIndex > 0) ? gMNDebugMenuCursorIndex - 1 : gMNDebugMenuMenuItemsCount - 1;

		gMNDebugMenuRedrawInterrupt = 1;
	}

	if ((controller->button_update & D_JPAD) || (gMNDebugMenuStickInputs & D_JPAD))
	{
		gMNDebugMenuCursorIndex = (gMNDebugMenuCursorIndex < (gMNDebugMenuMenuItemsCount - 1)) ? gMNDebugMenuCursorIndex + 1 : 0;

		gMNDebugMenuRedrawInterrupt = 1;
	}

	if ((controller->button_update & L_JPAD) || (gMNDebugMenuStickInputs & L_JPAD))
	{
		switch (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type)
		{
			case dbMenuItemKindNumeric:
			case dbMenuItemKindString:
				if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min < *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s)
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s -= 1;
				}
				else
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max;
				}
				gMNDebugMenuRedrawInterrupt = 1;
				break;

			case dbMenuItemKindNumericByte:
			case dbMenuItemKindStringByte:
				if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min < *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b)
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b -= 1;
				}
				else
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max;
				}
				gMNDebugMenuRedrawInterrupt = 1;
				break;

			case dbMenuItemKindDouble:
				if (controller->button_update & L_JPAD)
				{
					if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min < *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f + -1.0F)
					{
						*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f += -1.0F;
					}
					else *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min;

					gMNDebugMenuRedrawInterrupt = 1;
				}
				break;

			default:
				break;
		}
	}

	if ((controller->button_update & R_JPAD) || (gMNDebugMenuStickInputs & R_JPAD))
	{
		switch (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type)
		{
			case dbMenuItemKindNumeric:
			case dbMenuItemKindString:
				if (*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s < gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max)
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s += 1;
				}
				else
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.s = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min;
				}
				gMNDebugMenuRedrawInterrupt = 1;
				break;

			case dbMenuItemKindNumericByte:
			case dbMenuItemKindStringByte:
				if (*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b < gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max)
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b += 1;
				}
				else
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.b = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min;
				}
				gMNDebugMenuRedrawInterrupt = 1;
				break;

			case dbMenuItemKindDouble:
				if (controller->button_update & R_JPAD)
				{
					if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max > *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f + 1.0F)
					{
						*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f += 1.0F;
					}
					else
					{
						*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max;
					}
					gMNDebugMenuRedrawInterrupt = 1;
				}
				break;

			default:
				break;
		}
	}

	stick_x = controller->stick_range.x;

	if (ABS(stick_x) > 20)
	{
		if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type == dbMenuItemKindDouble)
		{
			temp = (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].unknown18 * stick_x);

			if (stick_x > 0)
			{
				if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max > *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f + temp)
				{
					*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f += temp;
				}
				else *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].max;
			}
			else if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min < *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f + temp)
			{
				*gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f += temp;
			}
			else *gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].value.f = gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].min;

			gMNDebugMenuRedrawInterrupt = 1;
		}
	}

	if (controller->button_tap & A_BUTTON)
	{
		if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type == dbMenuItemKindExitLabel)
		{
			gMNDebugMenuCursorIndexWhenExited = gMNDebugMenuCursorIndex;
			func_ovl8_8037488C(D_ovl9_80371404);

			gMNDebugMenuIsMenuOpen = FALSE;

			sSYTaskmanCount = gMNDebugMenuOriginalGSGTLNumTasks;
		}

		if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].proc_a != NULL)
		{
			gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].proc_a();

			gMNDebugMenuRedrawInterrupt = 1;
		}
	}
	if (controller->button_tap & B_BUTTON)
	{
		func_ovl8_8037488C(D_ovl9_80371404);

		gMNDebugMenuIsMenuOpen = FALSE;

		sSYTaskmanCount = gMNDebugMenuOriginalGSGTLNumTasks;
	}
}

// 0x80369D78
void dbMenuCreateMenu(s32 x, s32 y, s32 w, dbMenuItem* menu_items, s32 menu_items_count)
{
	if (gMNDebugMenuIsMenuOpen == FALSE)
	{
		gMNDebugMenuIsMenuOpen = TRUE;
		gMNDebugMenuMenuItems = menu_items;
		gMNDebugMenuMenuItemsCount = menu_items_count;
		gMNDebugMenuCursorIndex = gMNDebugMenuRedrawInterrupt = 0;
		gMNDebugMenuCursorIndexWhenExited = -1;

		gMNDebugMenuMenuPosition.x = x;
		gMNDebugMenuMenuPosition.y = y;
		gMNDebugMenuMenuPosition.w = w;
		gMNDebugMenuMenuPosition.h = (menu_items_count * 9) + 3;

		D_ovl9_80371404 = func_ovl8_80381C80(&gMNDebugMenuMenuPosition);
		gMNDebugMenuMenuGObj = func_ovl8_80374910(D_ovl9_80371404);

		dbMenuDrawBorder(D_ovl9_80371404, &dMNDebugMenuBorderColor);
		dbMenuDrawMenuItems(D_ovl9_80371404, menu_items, menu_items_count);
		dbMenuDrawCursor(D_ovl9_80371404, gMNDebugMenuCursorIndex);

		gMNDebugMenuDefaultMenuRenderProc = gMNDebugMenuMenuGObj->func_display;
		gMNDebugMenuMenuGObj->func_display = gMNDebugMenuRenderMenu;

		gcAddGObjProcess(gMNDebugMenuMenuGObj, dbMenuHandleInputs, 1, 1);

		gMNDebugMenuOriginalGSGTLNumTasks = sSYTaskmanCount;
		sSYTaskmanCount = 1;
	}
}

// 0x80369EC0
void dbMenuDestroyMenu()
{
	func_ovl8_8037BB78();
}

// 0x80369EE0
void dbMenuInitMenu()
{
	dbUnk80369EE0_1 sp2C;
	s32 sp18[5];

	sp2C.unk_80369EE0_1_0x0 = D_ovl9_8036A400;
	sp2C.unk_80369EE0_1_0x4 = 0x7000;
	sp2C.unk_80369EE0_1_0x8 = 0;

	func_ovl8_8037B98C(&sp2C);

	func_ovl8_8037D6D4(D_ovl9_8036A398);
	func_ovl8_8037D9D0(&dMNDebugMenuTextColor);
	func_ovl8_8037D9B4(dMNDebugMenuTextBGColor);

	func_ovl8_8037D95C(sp18);

	sp18[0] = 4;

	func_ovl8_8037D908(sp18);

	gMNDebugMenuIsMenuOpen = FALSE;
}