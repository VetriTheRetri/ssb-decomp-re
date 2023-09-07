#include "fighter.h"
#include "battle.h"

// 0x80131A40 - Apparently this is used in the DK VS Samus intro scene, but it is initailized as all 0s
caStruct gIntroJungleColAnim; 

// 0x80131AA4 - Alpha blend value of weird intro color animation
u8 gIntroJungleAlpha;

// 0x80115BF0
void func_ovl2_80115BF0(s32 colanim_id, s32 colanim_duration)
{
    caCheckSetColAnimIndex(&gIntroJungleColAnim, colanim_id, colanim_duration);
}

// 0x80115C20
void func_ovl2_80115C20(GObj *gobj)
{
    caStruct *ca = &gIntroJungleColAnim;
    s32 alpha;

    if (ca->is_use_maincolor)
    {
        gDPPipeSync(gDisplayListHead[0]++);

        gDPSetCycleType(gDisplayListHead[0]++, G_CYC_1CYCLE);

        gDPSetCombineMode(gDisplayListHead[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

        alpha = (ca->maincolor.a * gIntroJungleAlpha) / 255;

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
    if (caMain_UpdateColAnim(&gIntroJungleColAnim, fighter_gobj, 0, 0) != FALSE)
    {
        caResetColAnim(&gIntroJungleColAnim);
    }
}

// 0x80115DE8
void func_ovl2_80115DE8(u8 alpha)
{
    gIntroJungleAlpha = alpha;

    caResetColAnim(&gIntroJungleColAnim);

    if (gSaveData.unk450 != FALSE)
    {
        GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

        func_80009DF4(interface_gobj, func_ovl2_80115C20, 0x16, 0x80000000U, -1);
        omAddGObjCommonProc(interface_gobj, func_ovl2_80115DA8, 1, 1);
    }
}
