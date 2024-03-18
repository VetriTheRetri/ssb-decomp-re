#include <ft/fighter.h>
#include <gm/battle.h>

// 0x80131A40
caStruct gScreenFlashColAnim; 

// 0x80131AA4
u8 gScreenFlashAlpha;

// 0x80115BF0
void ifScreenFlash_SetColAnim(s32 colanim_id, s32 colanim_duration)
{
    caCheckSetColAnimIndex(&gScreenFlashColAnim, colanim_id, colanim_duration);
}

// 0x80115C20
void func_ovl2_80115C20(GObj *gobj)
{
    caStruct *ca = &gScreenFlashColAnim;
    s32 alpha;

    if (ca->is_use_maincolor)
    {
        gDPPipeSync(gDisplayListHead[0]++);

        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

        gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

        alpha = (ca->maincolor.a * gScreenFlashAlpha) / 0xFF;

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, ca->maincolor.r, ca->maincolor.g, ca->maincolor.b, alpha);

        gDPFillRectangle(gDisplayListHead[0]++, 10, 10, 310, 230);

        gDPPipeSync(gDisplayListHead[0]++);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);

        gDPPipeSync(gDisplayListHead[0]++);
    }
}

// 0x80115DA8
void func_ovl2_80115DA8(GObj *fighter_gobj)
{
    if (ftMain_UpdateColAnim(&gScreenFlashColAnim, fighter_gobj, FALSE, FALSE) != FALSE)
    {
        caResetColAnim(&gScreenFlashColAnim);
    }
}

// 0x80115DE8
void ifScreenFlash_InitInterfaceVars(u8 alpha)
{
    gScreenFlashAlpha = alpha;

    caResetColAnim(&gScreenFlashColAnim);

    if (gSaveData.is_allow_screenflash != FALSE)
    {
        GObj *interface_gobj = omMakeGObjCommon(GObj_Kind_Interface, NULL, 0xB, 0x80000000U);

        omAddGObjRenderProc(interface_gobj, func_ovl2_80115C20, 0x16, 0x80000000U, -1);
        omAddGObjCommonProc(interface_gobj, func_ovl2_80115DA8, 1, 1);
    }
}
