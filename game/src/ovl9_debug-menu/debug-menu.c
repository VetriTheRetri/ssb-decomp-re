#include <sys/develop.h>
#include <ft/fighter.h>
#include <gm/gmsound.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <debug-menu.h>

// // ?
extern s32 sGSGTLNumTasks;

// ovl8
dbMenuPosition* func_ovl8_803749BC();                           /* extern */
void func_ovl8_80374A54(s32, dbMenuPosition*);                      /* extern */
void func_ovl8_80377AEC(dbMenuPosition*, dbMenuPosition*, dbMenuPosition*, s32);            /* extern */
extern void func_ovl8_8037DD60(dbMenuPosition*, char*);                      /* extern */
extern void func_ovl8_80386BE0(char*, const char*);                       /* extern */

// // ovl9 stuff

// 0x80369F64
extern u32 dMNDebugMenuBGColor;

// 0x80369F68
extern u32 dMNDebugMenuBorderColor;

// 0x80369F6C
extern u32 dMNDebugMenuTextColor;

// 0x80369F70
extern u32 dMNDebugMenuTextBGColor;

// 0x80369F7C
extern dbMenuPosition gMNDebugMenuMenuPosition;

// 0x80369FCC
extern u16 gMNDebugMenuPreviousInputs;

// 0x80369FD0
extern u16 gMNDebugMenuNewInputs;

// 0x80369FD4
extern u16 gMNDebugMenuStickInputs;

// 0x80369FD8
extern s32 gMNDebugMenuRapidScrollWait;

extern void *D_ovl9_8036A398; // TODO - some struct, maybe 0x14 size

// 0x8036A3B0
extern char dMNDebugMenuCursorChr[] = ">";

// 0x8036A400
extern void *D_ovl9_8036A400; // TODO - ?

// 0x80371400
extern s32 gMNDebugMenuCursorIndexWhenExited;

// 0x80371404
extern s32 D_ovl9_80371404; // TODO - some struct, pretty important!

// 0x80371408
extern GObj* gMNDebugMenuMenuGObj;

// 0x8037140C
extern dbMenuItem *gMNDebugMenuMenuItems;

// 0x80371410
extern s32 gMNDebugMenuMenuItemsCount;

// 0x80371414
extern s32 gMNDebugMenuCursorIndex;

// 0x80371418
extern void (*gMNDebugMenuDefaultMenuRenderProc)(GObj*);

// 0x8037141C
extern s32 gMNDebugMenuRedrawInterrupt;

// 0x80371420
extern sb32 gMNDebugMenuIsMenuOpen;

// 0x80371424
extern s32 gMNDebugMenuOriginalGSGTLNumTasks;

// 0x80371428
extern char gMNDebugMenuStringBuffer[0x38];

// 0x80369240
void mnDebugMenuUpdateMenuInputs()
{
    u16 inputs = 0;
    gsController *controller = &gSysController;

    if (gSysController.stick_range.x > 40)
    {
        inputs |= R_JPAD;
    }

    if (gSysController.stick_range.x < -40)
    {
        inputs |= L_JPAD;
    }

    if (controller->stick_range.y > 40)
    {
        inputs |= U_JPAD;
    }

    if (controller->stick_range.y < -40)
    {
        inputs |= D_JPAD;
    }

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
void mnDebugMenuDrawString(dbMenuPosition *arg0, const char *str, ...)
{
    func_ovl8_80386BE0(gMNDebugMenuStringBuffer, &str);
    func_ovl8_8037DD60(arg0, gMNDebugMenuStringBuffer);
}

// 0x80369358
void mnDebugMenuDrawBorder(s32 arg0, u32 color)
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
void mnDebugMenuDrawBackground(s32 arg0, s32 color)
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
void mnDebugMenuDrawMenuItem(void* arg0, dbMenuItem* menu_item)
{
    switch (menu_item->type)
    {
        case nDBMenuItemKindExitLabel:
        case nDBMenuItemKindLabel:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label);
            break;
        case nDBMenuItemKindNumeric:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.s);
            break;
        case nDBMenuItemKindNumericByte:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, *menu_item->value.b);
            break;
        case nDBMenuItemKindDouble:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), menu_item->label, (f64) *menu_item->value.f);
            break;
        case nDBMenuItemKindString:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.s]);
            break;
        case nDBMenuItemKindStringByte:
            mnDebugMenuDrawString(func_ovl8_803749BC(arg0), ((uintptr_t*) menu_item->label)[*menu_item->value.b]);
            break;
    }
}

// 0x80369600
void mnDebugMenuDrawMenuItems(void* arg0, dbMenuItem *menu_item, s32 arg2)
{
    s32 i;

    for (i = 0; i < arg2; i++, menu_item++)
    {
        func_ovl8_8037DFCC(12, 2 + 9 * i);
        mnDebugMenuDrawMenuItem(arg0, menu_item);
    }
}

// 0x80369680
void mnDebugMenuDrawCursor(void* arg0, s32 cursor_index)
{
    func_ovl8_8037DFCC(3, (cursor_index * 9) + 2, cursor_index);
    mnDebugMenuDrawString(func_ovl8_803749BC(arg0), &dMNDebugMenuCursorChr);
}

// 0x803696D4
void gMNDebugMenuRenderMenu(s32 arg0)
{
    if (gMNDebugMenuRedrawInterrupt != 0)
    {
        gMNDebugMenuRedrawInterrupt = 0;

        mnDebugMenuDrawBackground(D_ovl9_80371404, dMNDebugMenuBGColor);
        mnDebugMenuDrawMenuItems(D_ovl9_80371404, gMNDebugMenuMenuItems, gMNDebugMenuMenuItemsCount);
        mnDebugMenuDrawCursor(D_ovl9_80371404, gMNDebugMenuCursorIndex);
    }

    gMNDebugMenuDefaultMenuRenderProc(arg0);
}

// 0x8036975C
void mnDebugMenuHandleInputs(GObj *gobj)
{
    gsController *controller = &gSysController;
    s32 stick_x;
    f32 temp;

    mnDebugMenuUpdateMenuInputs();

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
            case nDBMenuItemKindNumeric:
            case nDBMenuItemKindString:
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

            case nDBMenuItemKindNumericByte:
            case nDBMenuItemKindStringByte:
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

            case nDBMenuItemKindDouble:
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
            case nDBMenuItemKindNumeric:
            case nDBMenuItemKindString:
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

            case nDBMenuItemKindNumericByte:
            case nDBMenuItemKindStringByte:
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

            case nDBMenuItemKindDouble:
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
        if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type == nDBMenuItemKindDouble)
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

    if (controller->button_new & A_BUTTON)
    {
        if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].type == nDBMenuItemKindExitLabel)
        {
            gMNDebugMenuCursorIndexWhenExited = gMNDebugMenuCursorIndex;
            func_ovl8_8037488C(D_ovl9_80371404);

            gMNDebugMenuIsMenuOpen = FALSE;

            sGSGTLNumTasks = gMNDebugMenuOriginalGSGTLNumTasks;
        }

        if (gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].proc_a != NULL)
        {
            gMNDebugMenuMenuItems[gMNDebugMenuCursorIndex].proc_a();

            gMNDebugMenuRedrawInterrupt = 1;
        }
    }
    if (controller->button_new & B_BUTTON)
    {
        func_ovl8_8037488C(D_ovl9_80371404);

        gMNDebugMenuIsMenuOpen = FALSE;

        sGSGTLNumTasks = gMNDebugMenuOriginalGSGTLNumTasks;
    }
}

// 0x80369D78
void mnDebugMenuCreateMenu(s32 x, s32 y, s32 w, dbMenuItem *menu_items, s32 menu_items_count)
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

        mnDebugMenuDrawBorder(D_ovl9_80371404, dMNDebugMenuBorderColor);
        mnDebugMenuDrawMenuItems(D_ovl9_80371404, menu_items, menu_items_count);
        mnDebugMenuDrawCursor(D_ovl9_80371404, gMNDebugMenuCursorIndex);

        gMNDebugMenuDefaultMenuRenderProc = gMNDebugMenuMenuGObj->proc_render;
        gMNDebugMenuMenuGObj->proc_render = gMNDebugMenuRenderMenu;

        omAddGObjCommonProc(gMNDebugMenuMenuGObj, mnDebugMenuHandleInputs, 1, 1);

        gMNDebugMenuOriginalGSGTLNumTasks = sGSGTLNumTasks;
        sGSGTLNumTasks = 1;
    }
}

// 0x80369EC0
void mnDebugMenuDestroyMenu()
{
    func_ovl8_8037BB78();
}

// 0x80369EE0
void mnDebugMenuInitMenu()
{
    dbUnk80369EE0_1 sp2C;
    s32 sp18[5];

    sp2C.unk_80369EE0_1_0x0 = &D_ovl9_8036A400;
    sp2C.unk_80369EE0_1_0x4 = 0x7000;
    sp2C.unk_80369EE0_1_0x8 = 0;

    func_ovl8_8037B98C(&sp2C);

    func_ovl8_8037D6D4(&D_ovl9_8036A398);
    func_ovl8_8037D9D0(&dMNDebugMenuTextColor);
    func_ovl8_8037D9B4(&dMNDebugMenuTextBGColor);

    func_ovl8_8037D95C(sp18);

    sp18[0] = 4;

    func_ovl8_8037D908(sp18);

    gMNDebugMenuIsMenuOpen = FALSE;
}
