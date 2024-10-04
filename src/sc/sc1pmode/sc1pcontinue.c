#include <ft/fighter.h>
#include <if/interface.h>
#include <mn/menu.h>
#include <sc/scene.h>
#include <sys/system_00.h>
#include <lb/library.h>

extern void func_800A26B8();

extern void func_80007080(Vp *vp, f32 arg1, f32 arg2, f32 arg3, f32 arg4);



// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern f32 dSCSubsysFighterScales[/* */];

extern uintptr_t D_NF_0000004F;                         // 0x0000004F
extern uintptr_t D_NF_00000050;							// 0x00000050
extern uintptr_t D_NF_00000051;							// 0x00000051
extern uintptr_t D_NF_000000A4;							// 0x000000A4
extern uintptr_t D_NF_00000025;							// 0x00000025
// // // // // // // // // // // //
//                               //
//             MACROS            //
//                               //
// // // // // // // // // // // //

#define sc1PContinueCheckGetOptionButtonInput(is_button, mask) mnCommonCheckGetOptionButtonInput(sSC1PContinueOptionChangeWait, is_button, mask)
#define sc1PContinueCheckGetOptionStickInputUD(stick_range, min, b) mnCommonCheckGetOptionStickInputUD(sSC1PContinueOptionChangeWait, stick_range, min, b)
#define sc1PContinueCheckGetOptionStickInputLR(stick_range, min, b) mnCommonCheckGetOptionStickInputLR(sSC1PContinueOptionChangeWait, stick_range, min, b)
#define sc1PContinueSetOptionChangeWaitP(stick_range) (sSC1PContinueOptionChangeWait = (160 - (stick_range)) / 5)
#define sc1PContinueSetOptionChangeWaitN(stick_range) (sSC1PContinueOptionChangeWait = ((stick_range) + 160) / 5)

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x801342F0
s32 sSC1PContinuePad0x801342F0[2];

// 0x801342F8
void *sSC1PContinueFighterAnimHeap;

// 0x801342FC
s32 sSC1PContinueTotalTimeTics;

// 0x80134300
GObj *sSC1PContinueFighterGObj;

// 0x80134304
GObj *sSC1PContinueContinueGObj;

// 0x80134308
GObj *sSC1PContinueShadowGObj;

// 0x8013430C
GObj *sSC1PContinueSpotlightGObj;

// 0x80134310
GObj *sSC1PContinueCursorGObj;

// 0x80134314
GObj *sSC1PContinueOptionGObj;

// 0x80134318
GObj *sSC1PContinueRoomGObj;

// 0x8013431C
s32 sSC1PContinueRoomFadeInAlpha;

// 0x80134320
GObj *sSC1PContinueRoomFadeInGObj;

// 0x80134324
s32 sSC1PContinueSpotlightFadeAlpha;

// 0x80134328
GObj *sSC1PContinueSpotlightFadeGObj;

// 0x8013432C
s32 sSC1PContinueRoomFadeOutAlpha;

// 0x80134330
GObj *sSC1PContinueRoomFadeOutGObj;

// 0x80134334
GObj *sSC1PContinueGameOverGObj;

// 0x80134338
s32 sSC1PContinueOptionSelect;

// 0x8013433C
s32 sSC1PContinueStatus;

// 0x80134340
f32 sSC1PContinueGameOverFadeOutScale;

// 0x80134344
f32 sSC1PContinueGameOverColorStep;

// 0x80134348
ftDemoDesc sSC1PContinueFighterDemoDesc;

// 0x80134354 - ??? set but never used?
s32 D_ovl55_80134354;

// 0x80134358
s32 sSC1PContinueOptionNoGameOverInputWait;

// 0x8013435C
s32 sSC1PContinueOptionYesRetryTic;

// 0x80134360
s32 sSC1PContinueIsSelectContinue;

// 0x80134364
s32 sSC1PContinueOptionNoGameOverAutoWait;

// 0x80134368
GObj *sSC1PContinueScoreGObj;

// 0x8013436C
s32 sSC1PContinueOptionChangeWait;

// 0x80134370
lbFileNode sSC1PContinueStatusBuffer[48];

// 0x801344F0
lbFileNode sSC1PContinueForceStatusBuffer[7];

// 0x80134528
void *sSC1PContinueFiles[5];

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80134160
u32 dSC1PContinueFileIDs[/* */] =
{
    &D_NF_0000004F,
    &D_NF_00000051,
    &D_NF_00000025,
    &D_NF_000000A4,
    &D_NF_00000050
};

// 0x80134178
Lights1 dSC1PContinueLights11 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x14, 0x14, 0x14);

// 0x80134190
Lights1 dSC1PContinueLights12 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x00, 0x14, 0x00);

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
void sc1PContinueProcLights(Gfx **dls)
{
    gSPSetGeometryMode(dls[0]++, G_LIGHTING);

    ftDisplayLightsDrawReflect(dls, scSubsysFighterGetLightAngleX(), scSubsysFighterGetLightAngleY());
}

// 0x80131B58
s32 sc1PContinueGetPowerOf(s32 base, s32 exp)
{
	s32 raised = base;
	s32 i;

	if (exp == 0)
	{
		return 1;
	}
	i = exp;

	while (i > 1)
	{
		i--;
		raised *= base;
	}
	return raised;
}

// 0x80131BF8
void sc1PContinueScoreDigitInitSprite(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xEC;
    sobj->sprite.blue = 0x00;
}

// 0x80131C30
s32 sc1PContinueGetScoreDigitCount(s32 points, s32 digit_count_max)
{
    s32 digit_count_current = digit_count_max;

    while (digit_count_current > 0)
    {
        s32 digit = (sc1PContinueGetPowerOf(10, digit_count_current - 1) != 0) ? points / sc1PContinueGetPowerOf(10, digit_count_current - 1) : 0;

        if (digit != 0)
        {
            return digit_count_current;
        }
        else digit_count_current--;
    }
    return 0;
}

// 0x80131CDC
Sprite* sc1PContinueScoreDigitGetSprite(s32 digit)
{
    // 0x80134534
    intptr_t offsets[/* */] =
    {
        &lSC1PStageClearScoreDigit0,
        &lSC1PStageClearScoreDigit1,
        &lSC1PStageClearScoreDigit2,
        &lSC1PStageClearScoreDigit3,
        &lSC1PStageClearScoreDigit4,
        &lSC1PStageClearScoreDigit5,
        &lSC1PStageClearScoreDigit6,
        &lSC1PStageClearScoreDigit7,
        &lSC1PStageClearScoreDigit8,
        &lSC1PStageClearScoreDigit9
    };
    return lbGetDataFromFile(Sprite*, sSC1PContinueFiles[3], offsets[digit]);
}

// 0x80131D40
void sc1PContinueMakeScoreDigits
(
    GObj *gobj,
    s32 points,
    f32 x,
    f32 y,
    f32 offset_x,
    s32 sub,
    s32 digit_count,
    sb32 is_fixed_digit_count
)
{
    SObj *sobj;
    f32 calc_x;
    s32 digit;
    s32 i;

    if (points < 0)
    {
        points = 0;
    }
    sobj = lbCommonMakeSObjForGObj(gobj, sc1PContinueScoreDigitGetSprite(points % 10));
    sc1PContinueScoreDigitInitSprite(sobj);

    calc_x = (sub != 0) ? x - sub : x - (sobj->sprite.width + offset_x);

    sobj->pos.x = calc_x;
    sobj->pos.y = y;

    for (i = 1; i < ((is_fixed_digit_count != FALSE) ? digit_count : sc1PContinueGetScoreDigitCount(points, digit_count)); i++)
    {
        digit = (sc1PContinueGetPowerOf(10, i) != 0) ? points / sc1PContinueGetPowerOf(10, i) : 0;

        sobj = lbCommonMakeSObjForGObj(gobj, sc1PContinueScoreDigitGetSprite(digit % 10));
        sc1PContinueScoreDigitInitSprite(sobj);

        calc_x = (sub != 0) ? calc_x - sub : calc_x - (sobj->sprite.width + offset_x);

        sobj->pos.x = calc_x;
        sobj->pos.y = y;
    }
}

// 0x80131F98
void sc1PContinueMakeScoreDisplay(s32 points)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueScoreGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[1], &lSC1PContinueTextScore));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->envcolor.r = 0xFF;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xC8;
    sobj->sprite.blue = 0x00;

    sobj->pos.x = 90.0F;
    sobj->pos.y = 200.0F;

    sc1PContinueMakeScoreDigits(gobj, points, 295.0F, 197.0F, 0.0F, 16, 8, TRUE);
}

// 0x80132094 - Unused?
void func_ovl55_80132094(void)
{
    return;
}

// 0x8013209C
void sc1PContinueSetFighterScale(GObj *gobj, s32 ft_kind)
{
    DObjGetStruct(gobj)->scale.vec.f.x = dSCSubsysFighterScales[ft_kind];
    DObjGetStruct(gobj)->scale.vec.f.y = dSCSubsysFighterScales[ft_kind];
    DObjGetStruct(gobj)->scale.vec.f.z = dSCSubsysFighterScales[ft_kind];
}

// 0x801320D4
void sc1PContinueMakeFighter(s32 ft_kind)
{
    GObj *fighter_gobj;
    ftCreateDesc ft_desc;

    ft_desc = dFTManagerDefaultFighterDesc;

    ft_desc.ft_kind = ft_kind;

    ft_desc.pos.x = 90.0F;

    ft_desc.costume = sSC1PContinueFighterDemoDesc.costume;
    ft_desc.shade = sSC1PContinueFighterDemoDesc.shade;
    ft_desc.figatree_heap = sSC1PContinueFighterAnimHeap;

    ft_desc.pos.y = 2070.0F;
    ft_desc.pos.z = 0.0F;

    sSC1PContinueFighterGObj = fighter_gobj = ftManagerMakeFighter(&ft_desc);

    scSubsysFighterSetStatus(fighter_gobj, 0x10009);
    sc1PContinueSetFighterScale(fighter_gobj, sSC1PContinueFighterDemoDesc.ft_kind);
}

// 0x801321A8
void sc1PContinueRoomFadeOutProcDisplay(GObj *gobj)
{
    if (sSC1PContinueRoomFadeOutAlpha < 0xFF)
    {
        sSC1PContinueRoomFadeOutAlpha += 5;

        if (sSC1PContinueRoomFadeOutAlpha > 0xFF)
        {
            sSC1PContinueRoomFadeOutAlpha = 0xFF;
        }
    }
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, sSC1PContinueRoomFadeOutAlpha);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x801322DC
void sc1PContinueMakeRoomFadeOut(void)
{
    GObj *gobj;

    sSC1PContinueRoomFadeOutAlpha = 0x00;
    sSC1PContinueRoomFadeOutGObj = gobj = gcMakeGObjSPAfter(0, NULL, 23, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, sc1PContinueRoomFadeOutProcDisplay, 32, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
}

// 0x80132338
void sc1PContinueRoomFadeInProcDisplay(GObj *gobj)
{
    if (sSC1PContinueRoomFadeInAlpha > 0x00)
    {
        sSC1PContinueRoomFadeInAlpha -= 0x05;

        if (sSC1PContinueRoomFadeInAlpha < 0x00)
        {
            sSC1PContinueRoomFadeInAlpha = 0x00;
        }
    }
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, sSC1PContinueRoomFadeInAlpha);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80132460
void sc1PContinueMakeRoomFadeIn(void)
{
    GObj *gobj;

    sSC1PContinueRoomFadeInAlpha = 0xFF;
    sSC1PContinueRoomFadeInGObj = gobj = gcMakeGObjSPAfter(0, NULL, 17, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, sc1PContinueRoomFadeInProcDisplay, 26, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
}

// 0x801324C0
void sc1PContinueSpotlightFadeProcDisplay(GObj *gobj)
{
    if (sSC1PContinueSpotlightFadeAlpha > 0x00)
    {
        sSC1PContinueSpotlightFadeAlpha -= 0x05;

        if (sSC1PContinueSpotlightFadeAlpha < 0x00)
        {
            sSC1PContinueSpotlightFadeAlpha = 0x00;
        }
    }
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetCycleType(gSYTasklogDLHeads[0]++, G_CYC_1CYCLE);
    gDPSetPrimColor(gSYTasklogDLHeads[0]++, 0, 0, 0x00, 0x00, 0x00, sSC1PContinueSpotlightFadeAlpha);
    gDPSetCombineMode(gSYTasklogDLHeads[0]++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);
    gDPFillRectangle(gSYTasklogDLHeads[0]++, 10, 10, 310, 230);
    gDPPipeSync(gSYTasklogDLHeads[0]++);
    gDPSetRenderMode(gSYTasklogDLHeads[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x801325E8
void sc1PContinueMakeSpotlightFadeSObjs(void)
{
    GObj *gobj;

    sSC1PContinueSpotlightFadeAlpha = 0xFF;
    sSC1PContinueSpotlightFadeGObj = gobj = gcMakeGObjSPAfter(0, NULL, 22, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, sc1PContinueSpotlightFadeProcDisplay, 31, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
}

// 0x80132648
void sc1PContinueMakeRoom(void)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueRoomGObj = gobj = gcMakeGObjSPAfter(0, NULL, 19, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 29, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueRoom));

    sobj->pos.x = 30.0F;
    sobj->pos.y = 28.0F;
}

// 0x801326D4
void sc1PContinueMakeSpotlightSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueShadowGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 30, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueShadow));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xBE;
    sobj->sprite.green = 0xBE;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 80.0F;
    sobj->pos.y = 156.0F;

    sSC1PContinueSpotlightGObj = gobj = gcMakeGObjSPAfter(0, NULL, 21, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 30, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueSpotlight));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->sprite.red = 0xBE;
    sobj->sprite.green = 0xBE;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 80.0F;
    sobj->pos.y = 28.0F;
}

// 0x80132824
void sc1PContinueMakeContinueSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueContinueGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueTextContinue));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;

    sobj->pos.x = 64.0F;
    sobj->pos.y = 64.0F;
}

// 0x801328D8
void sc1PContinueOptionSetHighlightColors(GObj *gobj, s32 option)
{
    SObj *sobj;

    // 0x801341D0
    syColorRGBPair not = { { 0x00, 0x00, 0x00 }, { 0xFF, 0x00, 0x00 } };

    // 0x801341D8
    syColorRGBPair highlight = { { 0x00, 0x00, 0x00 }, { 0x4C, 0x47, 0x5F } };

    syColorRGBPair *color;

    sobj = SObjGetStruct(gobj);

    color = (option == nSC1PContinueOptionYes) ? &not : &highlight;

    sobj->envcolor.r = color->prim.r;
    sobj->envcolor.g = color->prim.g;
    sobj->envcolor.b = color->prim.b;

    sobj->sprite.red = color->env.r;
    sobj->sprite.green = color->env.g;
    sobj->sprite.blue = color->env.b;

    sobj = SObjGetStruct(gobj)->next;

    color = (option == nSC1PContinueOptionNo) ? &not : &highlight;

    sobj->envcolor.r = color->prim.r;
    sobj->envcolor.g = color->prim.g;
    sobj->envcolor.b = color->prim.b;

    sobj->sprite.red = color->env.r;
    sobj->sprite.green = color->env.g;
    sobj->sprite.blue = color->env.b;
}

// 0x801329AC
void sc1PContinueOptionProcUpdate(GObj *gobj)
{
    sc1PContinueOptionSetHighlightColors(gobj, sSC1PContinueOptionSelect);
}

// 0x801329D0
void sc1PContinueMakeOptionSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueOptionGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddGObjProcess(gobj, sc1PContinueOptionProcUpdate, nOMObjProcessKindProc, 1);

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueTextYes));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 84.0F;
    sobj->pos.y = 129.0F;

    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueTextNo));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->pos.x = 189.0F;
    sobj->pos.y = 129.0F;

    sc1PContinueOptionSetHighlightColors(gobj, sSC1PContinueOptionSelect);
}

// 0x80132AE8
void sc1PContinueCursorSetPosition(GObj *gobj, s32 option)
{
    SObj *sobj = SObjGetStruct(gobj);

    if (option == nSC1PContinueOptionYes)
    {
        sobj->pos.x = 76.0F;
        sobj->pos.y = 120.0F;
    }
    else
    {
        sobj->pos.x = 177.0F;
        sobj->pos.y = 120.0F;
    }
}

// 0x80132B2C
void sc1PContinueCursorProcUpdate(GObj *gobj)
{
    sc1PContinueCursorSetPosition(gobj, sSC1PContinueOptionSelect);
}

// 0x80132B50
void sc1PContinueMakeCursorSObj(void)
{
    GObj *gobj;
    SObj *sobj;

    sSC1PContinueCursorGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddGObjProcess(gobj, sc1PContinueCursorProcUpdate, nOMObjProcessKindProc, 1);
    sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[0], &lSC1PContinueCursor));

    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->envcolor.r = 0x00;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0x00;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0x00;
    sobj->sprite.blue = 0x00;

    sc1PContinueCursorSetPosition(gobj, sSC1PContinueOptionSelect);
}

// 0x80132C1C
void sc1PContinueGameOverInitSprites(SObj *sobj)
{
    sobj->sprite.attr &= ~SP_FASTCOPY;
    sobj->sprite.attr |= SP_TRANSPARENT;

    sobj->envcolor.r = 0x1A;
    sobj->envcolor.g = 0x00;
    sobj->envcolor.b = 0xE6;

    sobj->sprite.red = 0xFF;
    sobj->sprite.green = 0xFF;
    sobj->sprite.blue = 0xFF;
}

// 0x80132C58
void sc1PContinueGameOverStepColors(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(gobj);

    // 0x801341E0
    f32 values[/* */] = { 26.0F, 0.0F, 230.0F, 255.0F, 255.0F, 255.0F };

    if (sSC1PContinueGameOverColorStep < 1.0F)
    {
        sSC1PContinueGameOverColorStep += F_PCT_TO_DEC(1.0F);

        if (sSC1PContinueGameOverColorStep > 1.0F)
        {
            sSC1PContinueGameOverColorStep = 1.0F;
        }
        while (sobj != NULL)
        {
            sobj->envcolor.r = values[0] * sSC1PContinueGameOverColorStep;
            sobj->envcolor.g = values[1] * sSC1PContinueGameOverColorStep;
            sobj->envcolor.b = values[2] * sSC1PContinueGameOverColorStep;

            sobj->sprite.red = values[3] * sSC1PContinueGameOverColorStep;
            sobj->sprite.green = values[4] * sSC1PContinueGameOverColorStep;
            sobj->sprite.blue = values[5] * sSC1PContinueGameOverColorStep;

            sobj = sobj->next;
        }
    }
}

// 0x8013307C
void sc1PContinueMakeGameOverSObjs(void)
{
    GObj *gobj;
    SObj *sobj;

    // 0x801341F8
    intptr_t letters[/* */] =
    { 
        &lIFCommonAnnounceCommonLetterG,
        &lIFCommonAnnounceCommonLetterA,
        &lIFCommonAnnounceCommonLetterM,
        &lIFCommonAnnounceCommonLetterE,
        &lIFCommonAnnounceCommonLetterO,
        &lIFCommonAnnounceCommonLetterV,
        &lIFCommonAnnounceCommonLetterE,
        &lIFCommonAnnounceCommonLetterR
    };

    // 0x80134218
    f32 positions_x[/* */] = { 30.0F, 60.0F, 95.0F, 133.0F, 166.0F, 200.0F, 230.0F, 254.0F };

    s32 i;

    sSC1PContinueGameOverColorStep = 0.0F;

    sSC1PContinueGameOverGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);
    gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 28, GOBJ_DLLINKORDER_DEFAULT, GOBJ_CAMTAG_DEFAULT);
    gcAddGObjProcess(gobj, sc1PContinueGameOverStepColors, nOMObjProcessKindProc, 1);

    for (i = 0; i < (ARRAY_COUNT(letters) + ARRAY_COUNT(positions_x)) / 2; i++)
    {
        sobj = lbCommonMakeSObjForGObj(gobj, lbGetDataFromFile(Sprite*, sSC1PContinueFiles[2], letters[i]));

        sobj->pos.x = positions_x[i];
        sobj->pos.y = 50.0F;

        sc1PContinueGameOverInitSprites(sobj);
    }
}

// 0x80133210
void sc1PContinueGameOverProcUpdate(GObj *gobj)
{
    SObj *sobj = SObjGetStruct(sSC1PContinueRoomGObj);

    if (sSC1PContinueGameOverFadeOutScale > F_PCT_TO_DEC(1.0F))
    {
        sSC1PContinueGameOverFadeOutScale -= F_PCT_TO_DEC(1.0F);

        if (sSC1PContinueGameOverFadeOutScale < F_PCT_TO_DEC(1.0F))
        {
            sSC1PContinueGameOverFadeOutScale = F_PCT_TO_DEC(1.0F);
        }
        sobj->sprite.scalex = sSC1PContinueGameOverFadeOutScale;
        sobj->sprite.scaley = sSC1PContinueGameOverFadeOutScale;

        sobj->pos.x = 160.0F - ((260.0F * sSC1PContinueGameOverFadeOutScale) / 2);
        sobj->pos.y = 120.0F - ((184.0F * sSC1PContinueGameOverFadeOutScale) / 2);

        DObjGetStruct(sSC1PContinueFighterGObj)->translate.vec.f.y += 3.0F;

        DObjGetStruct(sSC1PContinueFighterGObj)->scale.vec.f.x = dSCSubsysFighterScales[sSC1PContinueFighterDemoDesc.ft_kind] * sSC1PContinueGameOverFadeOutScale;
        DObjGetStruct(sSC1PContinueFighterGObj)->scale.vec.f.y = dSCSubsysFighterScales[sSC1PContinueFighterDemoDesc.ft_kind] * sSC1PContinueGameOverFadeOutScale;
        DObjGetStruct(sSC1PContinueFighterGObj)->scale.vec.f.z = dSCSubsysFighterScales[sSC1PContinueFighterDemoDesc.ft_kind] * sSC1PContinueGameOverFadeOutScale;
    }
}

// 0x80133368
void sc1PContinueMakeGameOver(void)
{
    GObj *gobj;

    sSC1PContinueGameOverFadeOutScale = 1.0F;
    sSC1PContinueGameOverGObj = gobj = gcMakeGObjSPAfter(0, NULL, 20, GOBJ_LINKORDER_DEFAULT);

    gcAddGObjProcess(gobj, sc1PContinueGameOverProcUpdate, nOMObjProcessKindProc, 1);
}

// 0x801333C4
void sc1PContinueMakeLink26Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            80,
            CAMERA_MASK_DLLINK(26),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133474
void sc1PContinueMakeLink31Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            60,
            CAMERA_MASK_DLLINK(31),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133524
void sc1PContinueMakeLink32Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            40,
            CAMERA_MASK_DLLINK(32),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x801335D4
void sc1PContinueSetupCamera(Camera *cam)
{
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.eye.y = 1000.0F;
    cam->vec.eye.z = 2000.0F;
    cam->vec.at.y = 400.0F;

    cam->vec.eye.x = 0.0F;
    cam->vec.at.x = 0.0F;
    cam->vec.at.z = 0.0F;
    cam->vec.up.x = 0.0F;
    cam->vec.up.z = 0.0F;

    cam->vec.up.y = 1.0F;

    cam->projection.persp.fovy = 30.0F;
    cam->projection.persp.near = 100.0F;
    cam->projection.persp.far = 15000.0F;

    cam->flags = 4;
}

// 0x80133694
void sc1PContinueMakeLinkMultiCamera(void)
{
    // 0x08048600
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            func_80017EC0,
            50,
            CAMERA_MASK_DLLINK(27) | CAMERA_MASK_DLLINK(18) | 
            CAMERA_MASK_DLLINK(15) | CAMERA_MASK_DLLINK(10) | 
            CAMERA_MASK_DLLINK(9),
            -1,
            1,
            1,
            NULL,
            1,
            0
        )
    );
    sc1PContinueSetupCamera(cam);
}

// 0x80133718
void sc1PContinueMakeLink29Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            90,
            CAMERA_MASK_DLLINK(29),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);
}

// 0x801337B8
void sc1PContinueMakeLink30Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            70,
            CAMERA_MASK_DLLINK(30),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133868
void sc1PContinueMakeLink28Camera(void)
{
    Camera *cam = CameraGetStruct
    (
        gcMakeCameraGObj
        (
            nOMObjCommonKindSceneCamera,
            NULL,
            16,
            GOBJ_LINKORDER_DEFAULT,
            lbCommonScissorSpriteCamera,
            30,
            CAMERA_MASK_DLLINK(28),
            -1,
            0,
            1,
            NULL,
            1,
            0
        )
    );
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->flags = 4;
}

// 0x80133918
void sc1PContinueInitVars(void)
{
    sSC1PContinueTotalTimeTics = 0;

    sSC1PContinueFighterDemoDesc.ft_kind = gSCManager1PGameBattleState.players[gSceneData.spgame_player].ft_kind;
    sSC1PContinueFighterDemoDesc.costume = gSCManager1PGameBattleState.players[gSceneData.spgame_player].costume;
    sSC1PContinueFighterDemoDesc.shade   = gSCManager1PGameBattleState.players[gSceneData.spgame_player].shade;

    sSC1PContinueOptionSelect = 0;
    sSC1PContinueStatus = 0;
    D_ovl55_80134354 = 0;
    sSC1PContinueOptionNoGameOverAutoWait = -1;
}

// 0x80133990 - real
void sc1PContinueUnused0x80133990(void)
{
    return;
}

// 0x80133998
void sc1PContinueProcRun(GObj *gobj)
{
    s32 unused;
    s32 stick_range;

    sSC1PContinueTotalTimeTics++;

    if (sSC1PContinueTotalTimeTics >= 10)
    {
        if (sSC1PContinueTotalTimeTics == sSC1PContinueOptionYesRetryTic)
        {
            // Why though?
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

            sSC1PContinueIsSelectContinue = TRUE;

            syTasklogSetLoadScene();
        }
        if (D_ovl55_80134354 != 0)
        {
            D_ovl55_80134354--;
        }
        if (sSC1PContinueOptionChangeWait != 0)
        {
            sSC1PContinueOptionChangeWait--;
        }
		if
        (
            (scSubsysControllerGetPlayerStickInRangeLR(-15, 15) != FALSE) &&
            (scSubsysControllerGetPlayerStickInRangeUD(-15, 15) != FALSE)
        )
		{
            sSC1PContinueOptionChangeWait = 0;
        }
        if ((sSC1PContinueTotalTimeTics == I_SEC_TO_TICS(40)) && (sSC1PContinueStatus == 0))
        {
            gcEjectGObj(sSC1PContinueShadowGObj);
            gcEjectGObj(sSC1PContinueSpotlightGObj);
            gcEjectGObj(sSC1PContinueContinueGObj);
            gcEjectGObj(sSC1PContinueOptionGObj);
            gcEjectGObj(sSC1PContinueCursorGObj);

            sc1PContinueMakeRoomFadeOut();
            sc1PContinueMakeGameOverSObjs();
            sc1PContinueMakeGameOver();

            sSC1PContinueStatus = 2;
            sSC1PContinueOptionNoGameOverInputWait = sSC1PContinueTotalTimeTics + I_SEC_TO_TICS(1.5);
            sSC1PContinueOptionNoGameOverAutoWait = sSC1PContinueTotalTimeTics + I_SEC_TO_TICS(30);

			auPlaySong(0, nSYAudioBGM1PGameOver);
			func_800269C0_275C0(nSYAudioVoiceAnnounceGameOver);
		}
        if (sSC1PContinueStatus == 0)
        {
            if
            (
                (sSC1PContinueTotalTimeTics > I_SEC_TO_TICS(2.5)) && 
                (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
            )
            {
                switch (sSC1PContinueOptionSelect)
                {
                case nSC1PContinueOptionYes:
                    gcEjectGObj(sSC1PContinueShadowGObj);
                    gcEjectGObj(sSC1PContinueSpotlightGObj);
                    gcEjectGObj(sSC1PContinueContinueGObj);
                    gcEjectGObj(sSC1PContinueOptionGObj);
                    gcEjectGObj(sSC1PContinueCursorGObj);

                    gSceneData.spgame_score *= 0.5F;

                    gcEjectGObj(sSC1PContinueScoreGObj);
                    sc1PContinueMakeScoreDisplay(gSceneData.spgame_score);
					scSubsysFighterSetStatus(sSC1PContinueFighterGObj, 0x1000A);

					sSC1PContinueStatus = 1;
                    sSC1PContinueOptionYesRetryTic = sSC1PContinueTotalTimeTics + I_SEC_TO_TICS(4);

					func_800269C0_275C0(nSYAudioFGM1PGameContinue);
					break;

                case nSC1PContinueOptionNo:
                    gcEjectGObj(sSC1PContinueShadowGObj);
                    gcEjectGObj(sSC1PContinueSpotlightGObj);
                    gcEjectGObj(sSC1PContinueContinueGObj);
                    gcEjectGObj(sSC1PContinueOptionGObj);
                    gcEjectGObj(sSC1PContinueCursorGObj);
                    sc1PContinueMakeRoomFadeOut();
                    sc1PContinueMakeGameOverSObjs();
                    sc1PContinueMakeGameOver();

                    sSC1PContinueStatus = 2;
                    sSC1PContinueOptionNoGameOverInputWait = sSC1PContinueTotalTimeTics + I_SEC_TO_TICS(1.5);
                    sSC1PContinueOptionNoGameOverAutoWait = sSC1PContinueTotalTimeTics + I_SEC_TO_TICS(30);

                    auPlaySong(0, nSYAudioBGM1PGameOver);
                    func_800269C0_275C0(nSYAudioVoiceAnnounceGameOver);
                    break;
                }
            }
            if (sSC1PContinueTotalTimeTics > 120)
            {
                if
                (
                    (
                        (scSubsysControllerGetPlayerTapButtons(L_TRIG | L_JPAD | L_CBUTTONS) != FALSE) || 
                        sc1PContinueCheckGetOptionStickInputLR(stick_range, -15, FALSE)
                    ) 
                    &&
                    (sSC1PContinueOptionSelect == nSC1PContinueOptionNo)
                )
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    sSC1PContinueOptionSelect = nSC1PContinueOptionYes;
                    sc1PContinueSetOptionChangeWaitN(stick_range);
                }
                if
                (
                    (
                        (scSubsysControllerGetPlayerTapButtons(R_TRIG | R_JPAD | R_CBUTTONS) != FALSE) || 
                        sc1PContinueCheckGetOptionStickInputLR(stick_range, 15, TRUE)
                    )
                    &&
                    (sSC1PContinueOptionSelect == nSC1PContinueOptionYes)
                )
                {
                    func_800269C0_275C0(nSYAudioFGMMenuScroll1);
                    sSC1PContinueOptionSelect = nSC1PContinueOptionNo;
                    sc1PContinueSetOptionChangeWaitP(stick_range);
                }
            }
        }
        if
        (
            (sSC1PContinueStatus == 2)                                              && 
            (sSC1PContinueOptionNoGameOverInputWait < sSC1PContinueTotalTimeTics)   && 
            (scSubsysControllerGetPlayerTapButtons(A_BUTTON | START_BUTTON) != FALSE)
        )
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

        #if !defined(DAIRANTOU_OPT0)
            sc1PContinueUnused0x80133990();
        #endif
            sSC1PContinueIsSelectContinue = FALSE;
            syTasklogSetLoadScene();
        }
        if (sSC1PContinueTotalTimeTics == sSC1PContinueOptionNoGameOverAutoWait)
        {
            gSceneData.scene_previous = gSceneData.scene_current;
            gSceneData.scene_current = nSCKindTitle;

        #if !defined(DAIRANTOU_OPT0)
            sc1PContinueUnused0x80133990();
        #endif
            sSC1PContinueIsSelectContinue = FALSE;
            syTasklogSetLoadScene();
        }
        if (sSC1PContinueTotalTimeTics == 40)
        {
            sc1PContinueMakeSpotlightSObjs();
            sc1PContinueMakeSpotlightFadeSObjs();
        }
        if (sSC1PContinueTotalTimeTics == 60)
        {
            sc1PContinueMakeRoomFadeIn();
            sc1PContinueMakeRoom();
            sc1PContinueMakeContinueSObj();
            func_800269C0_275C0(nSYAudioVoiceAnnounceContinue);
        }
        if (sSC1PContinueTotalTimeTics == 120)
        {
            sc1PContinueMakeOptionSObjs();
            sc1PContinueMakeCursorSObj();
        }
    }
}

// 0x80133F58
void sc1PContinueProcStart(void)
{
    s32 unused;
    lbRelocSetup rl_setup;

    rl_setup.table_addr = &lLBRelocTableAddr;
    rl_setup.table_files_num = &lLBRelocTableFilesNum;
    rl_setup.file_heap = NULL;
    rl_setup.file_heap_size = 0;
    rl_setup.status_buffer = sSC1PContinueStatusBuffer;
    rl_setup.status_buffer_size = ARRAY_COUNT(sSC1PContinueStatusBuffer);
    rl_setup.force_status_buffer = sSC1PContinueForceStatusBuffer;
    rl_setup.force_status_buffer_size = ARRAY_COUNT(sSC1PContinueForceStatusBuffer);

    lbRelocInitSetup(&rl_setup);
    lbRelocLoadFilesExtern
    (
        dSC1PContinueFileIDs,
        ARRAY_COUNT(dSC1PContinueFileIDs),
        sSC1PContinueFiles,
        syTasklogMalloc
        (
            lbRelocGetAllocSize
            (
                dSC1PContinueFileIDs,
                ARRAY_COUNT(dSC1PContinueFileIDs)
            ),
            0x10
        )
    );
    gcMakeGObjSPAfter(0, sc1PContinueProcRun, 0, GOBJ_LINKORDER_DEFAULT);
    gcMakeDefaultCameraGObj(0, GOBJ_LINKORDER_DEFAULT, 100, 0x2 | 0x1, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));
    efAllocInitParticleBank();
    sc1PContinueInitVars();
    efManagerInitEffects();
    ftManagerAllocFighter(FTDATA_FLAG_SUBMOTION, 1);
    ftManagerSetupFilesAllKind(sSC1PContinueFighterDemoDesc.ft_kind);
    
    sSC1PContinueFighterAnimHeap = syTasklogMalloc(gFTManagerFigatreeHeapSize, 0x10);

    sc1PContinueMakeLinkMultiCamera();
    sc1PContinueMakeLink26Camera();
    sc1PContinueMakeLink31Camera();
    sc1PContinueMakeLink32Camera();
    sc1PContinueMakeLink29Camera();
    sc1PContinueMakeLink30Camera();
    sc1PContinueMakeLink28Camera();
    sc1PContinueMakeFighter(sSC1PContinueFighterDemoDesc.ft_kind);
    sc1PContinueMakeScoreDisplay(gSceneData.spgame_score);

    scSubsysFighterSetLightParams(45.0F, 45.0F, 0xFF, 0xFF, 0xFF, 0xFF);

    auStopBGM();
    auPlaySong(0, nSYAudioBGM1PGameEndChoice);
}

// 0x80134238
syDisplaySetup dSC1PContinueDisplaySetup = SYDISPLAY_DEFINE_DEFAULT();

// 0x80134254
scRuntimeInfo dSC1PContinueTasklogSetup =
{
	0x00000000,
	func_8000A5E4,
	func_800A26B8,
	&ovl55_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004E20,
	0x00001000,
	0x00000000,
	0x00000000,
	0x00008000,
	0x00020000,
	0x0000C000,
	sc1PContinueProcLights,
	update_contdata,
	0x00000000,
	0x00000600,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x800D5CAC,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000088,
	0x00000000,
	0x0000006C,
	0x00000000,
	0x00000090,
	sc1PContinueProcStart
};

// 0x801340FC
void sc1PContinueStartScene(void)
{
    dSC1PContinueDisplaySetup.zbuffer = syDisplayGetZBuffer(6400);

    func_80007024(&dSC1PContinueDisplaySetup);

    dSC1PContinueTasklogSetup.arena_size = (size_t) ((uintptr_t)&ovl1_VRAM - (uintptr_t)&ovl55_BSS_END);

    func_800A2698(&dSC1PContinueTasklogSetup);

    gSceneData.is_select_continue = sSC1PContinueIsSelectContinue;
}
