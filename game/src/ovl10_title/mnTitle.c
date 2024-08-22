#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mnTitle.h>

// ?
extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();
// extern s32 D_NF_8000030C; // osResetType

// Particle Bank Stuff
extern intptr_t D_NF_00B22C30;
extern intptr_t D_NF_00B22D40;
extern intptr_t D_NF_00B22D40_other;
extern intptr_t D_NF_00B277B0;

// ovl10 stuff

// 0x801341E0
extern intptr_t dMNTitleAnimatedLogoOffsets[3] = {
    0x00008FC8, // Full circle cutout
    0x000097E8, // Vertical rectangle
    0x00009B48 // Horizontal rectangle
};

// 0x801341EC
extern intptr_t dMNTitleLogoOffset = 0x0000BBB0;

// 0x801341F0
extern intptr_t dMNTitleFireTextureOffsets[30] = {
    0x00001018, 0x00002078, 0x000030D8, 0x00004138,
    0x00005198, 0x000061F8, 0x00007258, 0x000082B8,
    0x00009318, 0x0000A378, 0x0000B3D8, 0x0000C438,
    0x0000D498, 0x0000E4F8, 0x0000F558, 0x000105B8,
    0x00011618, 0x00012678, 0x000136D8, 0x00014738,
    0x00015798, 0x000167F8, 0x00017858, 0x000188B8,
    0x00019918, 0x0001A978, 0x0001B9D8, 0x0001CA38,
    0x0001DA98, 0x0001EAF8
};

// 0x80134268
extern mnTitleTextureConfig dMNTitleTextureConfigs[10] = {
    { 157, 94,  0x00011988 }, // Drop Shadow
    { 161, 88,  0x000245C8 }, // Smash
    { 55,  96,  0x00016728 }, // Super
    { 268, 96,  0x00025188 }, // Bros.
    { 270, 132, 0x00011AA8 }, // TM
    { 160, 208, 0x00015320 }, // Footer Text
    { 160, 15,  0x0000C208 }, // Border Top
    { 162, 177, 0x00015A48 }, // Press Start
    { 260, 60,  0x0000BBB0 }, // Smash Logo
    { 277, 157, 0x0000F398 }  // TM
};

// 0x80134318
extern u8 dMNTitleFireBGOverlayColorArrayRed[7] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0xFF, 0xFF };
// 0x80134320
extern u8 dMNTitleFireBGOverlayColorArrayGreen[7] = { 0xFF, 0xF0, 0xFF, 0xD1, 0xFF, 0xE2, 0xD2 };
// 0x80134328
extern u8 dMNTitleFireBGOverlayColorArrayBlue[7] = { 0xFF, 0x9B, 0x64, 0xD1, 0xE6, 0xB8, 0x94 };

// 0x80134330
extern Lights1 dMNTitleLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x80134348
extern Gfx dMNTitleDisplayList[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(dMNTitleLights1),
    gsSPEndDisplayList()
};

extern scUnkDataBounds D_ovl10_80134370;
extern scRuntimeInfo D_ovl10_8013438C;

extern RldmFileId D_ovl10_80134420[2] = { 0x0A7, 0x0A8 };

// 0x80134448
extern GObj* gMNTitleFireBGOverlayCameraGObj;

// 0x8013444C
extern s32 gMNTitleParticleBankId;

// 0x80134450
extern s32 gMNTitleLayout;

// 0x80134454
extern GObj *gMNTitleTransitionsGObj;

// 0x80134458
extern GObj *gMNTitleMainGObj;

// 0x8013445C
extern s32 gMNTitleTransitionFramesElapsed;

// 0x80134460
extern sb32 gMNTitleEnableMain;

// 0x80134464
extern u32 gMNTitleFireAlpha;
// 0x80134468
extern u32 gMNTitleFireAlphaUnused; // Maybe the two images had different alphas at some point

// 0x8013446C
extern s32 gMNTitleLogoAlpha;

// 0x80134470
extern sb32 gMNTitleChangeSceneInterrupt;

// 0x80134474
extern s32 gMNTitleChangeSceneTimer;

// 0x80134478
extern s32 gMNTitleFireBGOverlayTimer;

// 0x8013447C
extern f32 gMNTitleFireBGOverlayRed;
// 0x80134480
extern f32 gMNTitleFireBGOverlayGreen;
// 0x80134484
extern f32 gMNTitleFireBGOverlayBlue;

// 0x80134488
extern f32 gMNTitleFireBGOverlayDeltaRed;
// 0x8013448C
extern f32 gMNTitleFireBGOverlayDeltaGreen;
// 0x80134490
extern f32 gMNTitleFireBGOverlayDeltaBlue;

// 0x80134494
extern s32 gMNTitleFireBGOverlayIndex;

// 0x80134498
extern s32 gMNTitleMainMenuFramesToWait;

extern rdFileNode D_ovl10_801344A0[32];
extern uintptr_t D_NF_001AC870;
extern uintptr_t D_NF_00000854;

extern uintptr_t gMNTitleFilesArray[2]; // 0x801345A0[2]
// gMNTitleFilesArray[0] - D_ovl10_801345A0; // file 0x0A7 pointer
// gMNTitleFilesArray[1] - D_ovl10_801345A4; // file 0x0A8 pointer

// // // Offsets
extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_1 = 0x251D0; // file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_LOGO_OFFSET_2 = 0x26020; // file 0x0A7 offset for Animated Logo (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1 = 0x25350; // file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2 = 0x26130; // file 0x0A7 offset for Title, Header & Footer (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_1 = 0x258D0; // file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_ANIMATED_PRESS_START_OFFSET_2 = 0x262C0; // file 0x0A7 offset for Press Start (anim?)
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1 = 0x287D8; // file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2 = 0x28DA8; // file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3 = 0x25E70; // file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4 = 0x25F60; // file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1 = 0x28EB0; // file 0x0A7 offset for Slash Effect GFX
extern intptr_t FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2 = 0x29010; // file 0x0A7 offset for Slash Effect GFX

// extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1 = 0x5A0; // file 0x03F offset for First Destination transition gfx shaded overlay

// 0x80131B00
s32 mnTitleGetUnlockedCharsCountForMask(u16 mask)
{
    s32 i;
    s32 unlocked_chars;

    for(i = 0, unlocked_chars = 0; i < 16; i++, mask = mask >> 1)
    {
        if(mask & 1)
        {
            unlocked_chars++;
        }
    }
    return unlocked_chars;
}

// 0x80131B78
s32 mnTitleGetMissingFtKind(u16 mask_1, u16 mask_2, s32 missing_index)
{
    s32 ft_kind = -1;

    missing_index = missing_index + 1;

    do
    {
        ft_kind += 1;

        if ((mask_1 & gmSaveChrMask(ft_kind)) && !(mask_2 & gmSaveChrMask(ft_kind)))
        {
            missing_index -= 1;
        }
    }
    while (missing_index != 0);

    return ft_kind;
}

// 0x80131BC4
s32 mnTitleSetDemoFtKinds()
{
    u16 unlocked_mask;
    s32 unlocked_count;
    s32 non_recently_demoed_count;

    unlocked_mask = gSaveData.character_mask | GMSAVEINFO_CHARACTER_MASK_STARTER;

    if (~unlocked_mask & gSceneData.recently_demoed_mask)
    {
        gSceneData.recently_demoed_mask = 0;
    }

    unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

    if (unlocked_count <= mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask))
    {
        gSceneData.recently_demoed_mask = 0;
    }

    unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

    gSceneData.demo_ft_kind[0] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, lbRandom_GetIntRange(unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask)));

    if (!(gSceneData.recently_demoed_mask))
    {
        gSceneData.first_demo_ft_kind = gSceneData.demo_ft_kind[0];
    }
    gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[0]);

    unlocked_count = mnTitleGetUnlockedCharsCountForMask(unlocked_mask);

    non_recently_demoed_count = unlocked_count - mnTitleGetUnlockedCharsCountForMask(gSceneData.recently_demoed_mask);

    if (non_recently_demoed_count == 0)
    {
        gSceneData.demo_ft_kind[1] = gSceneData.first_demo_ft_kind;
    }
    else
    {
        gSceneData.demo_ft_kind[1] = mnTitleGetMissingFtKind(unlocked_mask, gSceneData.recently_demoed_mask, lbRandom_GetIntRange(non_recently_demoed_count));
        gSceneData.recently_demoed_mask |= gmSaveChrMask(gSceneData.demo_ft_kind[1]);
    }
}

// 0x80131CF4
void mnTitleInitVars()
{
    s32 index;

    if (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars)
    {
        gMNTitleLayout = nMNTitleLayoutIntro;
        gMNTitleTransitionFramesElapsed = 0;
        gMNTitleFireBGOverlayRed = gMNTitleFireBGOverlayGreen = gMNTitleFireBGOverlayBlue = 0.0f;
    }
    else
    {
        func_80020A74();
        func_800266A0();

        gMNTitleLayout = nMNTitleLayoutAnimate;
        gMNTitleTransitionFramesElapsed = 169;

        index = lbRandom_GetTimeByteRange(7);
        gMNTitleFireBGOverlayIndex = index;
        gMNTitleFireBGOverlayRed = dMNTitleFireBGOverlayColorArrayRed[index];
        gMNTitleFireBGOverlayGreen = dMNTitleFireBGOverlayColorArrayGreen[index];
        gMNTitleFireBGOverlayBlue = dMNTitleFireBGOverlayColorArrayBlue[index];
    }

    gMNTitleFireBGOverlayTimer = 0;
    gMNTitleChangeSceneInterrupt = FALSE;
    gMNTitleChangeSceneTimer = 3;
    gMNTitleEnableMain = FALSE;
    gMNTitleFireBGOverlayDeltaRed = 0.0f;
    gMNTitleFireBGOverlayDeltaGreen = 0.0f;
    gMNTitleFireBGOverlayDeltaBlue = 0.0f;
}

// 0x80131E68
void mnTitleSetFinalLogoPosition()
{
    GObj* smash_logo_gobj;
    SObj* smash_logo_sobj;

    smash_logo_gobj = gOMObjCommonLinks[10];

    if (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars)
    {
        func_8000B39C(smash_logo_gobj);
    }

    smash_logo_sobj = SObjGetStruct(smash_logo_gobj);

    mnTitleSetPosition(NULL, smash_logo_sobj, nMNTitleTextureIndexLogo);

    smash_logo_sobj->user_data.s = 0xFF;
    gMNTitleLogoAlpha = 0x4C;

    smash_logo_sobj->sprite.scalex = 1.0f;
    smash_logo_sobj->sprite.scaley = 1.0f;
}

// 0x80131EE4
void mnTitleSetFinalLayout()
{
    s32 i;
    GObj* texture_sobj;
    GObj* gobj;
    SObj* sobj;

    gobj = gOMObjCommonLinks[6];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == 5)
        {
            mnTitleShowFire(gobj);
        }

        gobj = gobj->link_next;
    }

    gobj = gOMObjCommonLinks[8];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == 8)
        {
            texture_sobj = gobj;
        }

        gobj = gobj->link_next;
    }

    // UB: texture_sobj may not be defined!
    func_8000B39C(texture_sobj);

    i = 0;
    sobj = SObjGetStruct(texture_sobj);
    texture_sobj->flags = 0;

    while (sobj != NULL)
    {
        mnTitleSetPosition(NULL, sobj, i);
        mnTitleSetColors(sobj, i);

        sobj->sprite.scaley = 1.0f;
        sobj->sprite.scalex = 1.0f;
        sobj = sobj->next;
        i += 1;
    }
}

// 0x80131FD0
void mnTitleGoToNextDemo()
{
    u8 scene_previous = gSceneData.scene_previous;

    func_8000B9FC(2, 0x80000000, 0, 2, 0xFF);
    mnTitleSetDemoFtKinds();
    func_800266A0();

    gSceneData.scene_previous = gSceneData.scene_current;

    switch (scene_previous)
    {
        case scMajor_Kind_HowToPlay:
            gSceneData.scene_current = scMajor_Kind_Characters;

            func_80020AB4(0, 0x22);

            break;
        case scMajor_Kind_MainMenu:
        case scMajor_Kind_Demo:
            gSceneData.scene_current = scMajor_Kind_N64;
            break;
        default:
            gSceneData.scene_current = scMajor_Kind_HowToPlay;
            break;
    }

    gSceneData.wait_longer_to_show_demo = TRUE;
    gMNTitleChangeSceneInterrupt = TRUE;
}

// 0x80132090
void mnTitleGoToMainMenu()
{
    func_8000B9FC(2, 0x80000000, 0, 2, 0xFF);

    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = scMajor_Kind_MainMenu;

    func_800266A0();
    func_800269C0(0x9D);

    gMNTitleChangeSceneInterrupt = TRUE;
}

// 0x801320F0
void mnTitleMain(GObj* arg0)
{
    s32 i;
    u16 buttonPressed;

    if (gMNTitleEnableMain == FALSE)
    {
        gMNTitleEnableMain++;
        return;
    }

    if (gMNTitleChangeSceneInterrupt != FALSE)
    {
        gMNTitleChangeSceneTimer--;

        if (gMNTitleChangeSceneTimer == 0)
        {
            func_80005C74();
        }
    }
    else
    {
        for (i = 0; i < ARRAY_COUNT(gPlayerControllers); i++)
        {
            buttonPressed = gPlayerControllers[i].button_new;

            if (gPlayerControllers[i].button_new & (A_BUTTON | B_BUTTON | START_BUTTON))
            {
                if (gMNTitleLayout != nMNTitleLayoutIntro)
                {
                    if (((gSceneData.main_title_animation_viewed != FALSE) || (osResetType != 0 /*if not cold reset */)) && !(buttonPressed & B_BUTTON))
                    {
                        mnTitleGoToMainMenu();
                        break;
                    }
                }
                else
                {
                    gMNTitleTransitionFramesElapsed = 169;
                    gMNTitleLayout = nMNTitleLayoutAnimate;

                    mnTitleTransitionFromFireLogo();
                    func_80020A74();
                    func_800266A0();
                    break;
                }
            }

        }
    }
}

// 0x80132210
void mnTitleUpdateFireBGOverlayVars()
{
    s32 index = lbRandom_GetTimeByteRange(7);

    gMNTitleFireBGOverlayIndex = index;

    gMNTitleFireBGOverlayRed = gMNTitleFireBGOverlayGreen = gMNTitleFireBGOverlayBlue = 0.0f;

    gMNTitleFireBGOverlayDeltaRed = (dMNTitleFireBGOverlayColorArrayRed[index] - gMNTitleFireBGOverlayRed) / 80.0f;
    gMNTitleFireBGOverlayDeltaGreen = (dMNTitleFireBGOverlayColorArrayGreen[index] - gMNTitleFireBGOverlayGreen) / 80.0f;
    gMNTitleFireBGOverlayDeltaBlue = (dMNTitleFireBGOverlayColorArrayBlue[index] - gMNTitleFireBGOverlayBlue) / 80.0f;
}

// 0x80132320
void mnTitleTransitionFromFireLogo()
{
    GObj* var_v0;
    GObj* temp_v1;

    var_v0 = gOMObjCommonLinks[7];

    if (var_v0 != NULL)
    {
        do
        {
            temp_v1 = var_v0->link_next;

            if (var_v0->gobj_id == 6)
            {
                var_v0->flags = 1;
            }

            var_v0 = temp_v1;
        }
        while (temp_v1 != NULL);
    }

    if (gOMObjCommonLinks[4] != NULL)
    {
        omEjectGObj(gOMObjCommonLinks[4]);
    }

    if (gOMObjCommonLinks[14] != NULL)
    {
        omEjectGObj(gOMObjCommonLinks[14]);
    }

    mnTitleEnableAllInGroup(6);
    mnTitleUpdateFireBGOverlayVars();
}

// 0x801323AC
void mnTitleEnableAllInGroup(s32 link_id)
{
    GObj* gobj = gOMObjCommonLinks[link_id];

    while (gobj != NULL)
    {
        gobj->flags = 0;

        gobj = gobj->link_next;
    }
}

// 0x801323DC
void mnTitleNextLayout()
{
    if ((gMNTitleLayout == nMNTitleLayoutIntro) && (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars))
    {
        gSceneData.wait_longer_to_show_demo = FALSE;
    }

    gMNTitleLayout++;
}

// 0x80132414
void mnTitleSetMainMenuFramesToWait()
{
    if (gMNTitleLayout == nMNTitleLayoutFinal)
    {
        gMNTitleMainMenuFramesToWait = 280;
    }
    else gMNTitleMainMenuFramesToWait = 364;
}

// 0x80132448
void mnTitleHandleTransitions(s32 arg0)
{
    gMNTitleTransitionFramesElapsed++;

    if (gMNTitleTransitionFramesElapsed == gMNTitleMainMenuFramesToWait)
    {
        gSceneData.main_title_animation_viewed = TRUE;
    }

    switch (gMNTitleTransitionFramesElapsed)
    {
        case 111:
            mnTitleTransitionFromFireLogo();
            break;
        case 170:
            mnTitleSetFinalLogoPosition();
            mnTitleEnableAllInGroup(8);
            mnTitleNextLayout();
            mnTitleSetMainMenuFramesToWait();
            break;
        case 220:
            mnTitleSetFinalLayout();
            break;
        case 280:
            mnTitleEnableAllInGroup(9);
            break;
        case 35:
        case 65:
            func_800269C0(0x98);
            break;
        case 200:
            if (gMNTitleLayout == nMNTitleLayoutAnimate)
            {
                func_800269C0(0x96);
            }
            break;
        case 214:
        case 240:
            // Maybe something from J version?
            break;
        case 650:
            if (gSceneData.wait_longer_to_show_demo == FALSE)
            {
                mnTitleGoToNextDemo();
            }
            break;
        case 1190:
            if (gSceneData.wait_longer_to_show_demo != FALSE)
            {
                mnTitleGoToNextDemo();
            }
            break;
    }
}

// 0x801325D4
void mnTitleAnimateGObj(GObj* gobj)
{
    GObj* effect_gobj;
    SObj* sobj;
    DObj* dobj;

    effect_gobj = gobj->user_data.p;
    sobj = SObjGetStruct(gobj);
    dobj = DObjGetStruct(effect_gobj);

    func_8000DF34(effect_gobj);

    dobj = dobj->child;

    while (sobj != NULL)
    {
        sobj->sprite.scalex = dobj->scale.vec.f.x;
        sobj->sprite.scaley = dobj->scale.vec.f.y;
        sobj->pos.x = ((dobj->translate.vec.f.x + 160.0f) - (sobj->sprite.width * sobj->sprite.scalex * 0.5f));
        sobj->pos.y = ((120.0f - dobj->translate.vec.f.y) - (sobj->sprite.height * sobj->sprite.scaley * 0.5f));

        sobj = sobj->next;
        dobj = dobj->sib_next;
    }
}

// 0x801326A4
void mnTitleAnimatePressStart(GObj* press_start_gobj)
{
    if (press_start_gobj->flags != 1)
    {
        mnTitleAnimateGObj(press_start_gobj);
    }
}

// 0x801326D4
void mnTitleAnimateTitle(GObj* title_gobj)
{
    if (title_gobj->flags != 1)
    {
        mnTitleAnimateGObj(title_gobj);
    }
}

// 0x80132704
void mnTitleUpdateHeaderAndFooterPosition(GObj* header_footer_gobj)
{
    SObj* header_footer_sobj = SObjGetStruct(header_footer_gobj);

    if ((gMNTitleLayout != nMNTitleLayoutIntro) || (gSceneData.scene_previous != scMajor_Kind_IntroHiddenChars))
    {
        mnTitleSetPosition(NULL, header_footer_sobj, nMNTitleTextureIndexFooter);
        mnTitleSetPosition(NULL, header_footer_sobj->next, nMNTitleTextureIndexHeader);
    }
}

// 0x80132764
void mnTitleSetPosition(DObj* dobj, SObj* sobj, s32 index)
{
    mnTitleTextureConfig* texture_config;

    if (dobj != NULL)
    {
        texture_config = &dMNTitleTextureConfigs[index];
        dobj->translate.vec.f.x = texture_config->x - 160.0f;
        dobj->translate.vec.f.y = -(texture_config->y - 120.0f);
    }

    texture_config = &dMNTitleTextureConfigs[index];
    sobj->pos.x = (texture_config->x - (sobj->sprite.width * 0.5f));
    sobj->pos.y = (texture_config->y - (sobj->sprite.height * 0.5f));
}

// 0x8013282C
void mnTitleSetColors(SObj* sobj, s32 index)
{
    if (index < nMNTitleTextureIndexFooter)
    {
        if ((index == nMNTitleTextureIndexDropShadow) || (index == nMNTitleTextureIndexTM))
        {
            sobj->sprite.red = 0;
            sobj->sprite.green = 0;
            sobj->sprite.blue = 0;
        }
        else
        {
            sobj->sprite.red = 0xFF;
            sobj->sprite.green = 0xFE;
            sobj->sprite.blue = 0x2A;
            sobj->shadow_color.r = 0;
            sobj->shadow_color.g = 0;
            sobj->shadow_color.b = 0;
        }
    }
    else switch (index) {
        case nMNTitleTextureIndexFooter:
            sobj->sprite.red = 0xB7;
            sobj->sprite.green = 0xAE;
            sobj->sprite.blue = 0x7C;
            sobj->shadow_color.r = 0x14;
            sobj->shadow_color.g = 0x12;
            sobj->shadow_color.b = 6;
            break;
        case nMNTitleTextureIndexHeader:
            sobj->sprite.red = 0x14;
            sobj->sprite.green = 0x12;
            sobj->sprite.blue = 6;
            break;
        case nMNTitleTextureIndexPressStart:
            sobj->sprite.red = 0xFF;
            sobj->sprite.green = 0xFF;
            sobj->sprite.blue = 0xFF;
            sobj->shadow_color.r = 0x17;
            sobj->shadow_color.g = 0x10;
            sobj->shadow_color.b = 0xA4;
            break;
        case nMNTitleTextureIndexTM2:
            sobj->sprite.red = 0x15;
            sobj->sprite.green = 0x13;
            sobj->sprite.blue = 6;
            break;
    }
}

// 0x80132940
void mnTitleRenderFire(GObj* fire_gobj)
{
    s32 i;
    SObj* fire_sobj = SObjGetStruct(fire_gobj);

    for (i = 0; i < 2; i++)
    {
        func_ovl0_800CC118(gDisplayListHead, fire_sobj);

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, gMNTitleFireAlpha);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0);

        func_ovl0_800CC818(gDisplayListHead, fire_sobj);
        func_ovl0_800CCEAC();

        fire_sobj = fire_sobj->next;
    }
}

// 0x80132A20
void mnTitleFadeInFire(GObj* fire_gobj)
{
    if (fire_gobj->flags != 1)
    {
        gMNTitleFireAlpha += 0xD;

        if (gMNTitleFireAlpha >= 0x100)
        {
            gMNTitleFireAlpha = 0xFF;
        }
    }
}

// 0x80132A58
void mnTitleShowFire(GObj* fire_gobj)
{
    gMNTitleFireAlpha = 0xFF;
    fire_gobj->flags = 0;
}

// 0x80132A6C
void mnTitleChangeFireTexture(SObj* fire_sobj, s32 index)
{
    Sprite *offset = GetAddressFromOffset(gMNTitleFilesArray[1], dMNTitleFireTextureOffsets[fire_sobj->user_data.s]);

    fire_sobj->sprite = *offset;
    fire_sobj->sprite.attr = SP_TRANSPARENT;

    if (index != 0)
    {
        fire_sobj->sprite.scalex = 9.5f;
    }
    else
    {
        fire_sobj->sprite.scalex = 12.0f;
    }

    if (index != 0)
    {
        fire_sobj->sprite.scaley = 7.0f;
    }
    else
    {
        fire_sobj->sprite.scaley = 8.5f;
    }

    fire_sobj->user_data.s += 1;

    if (fire_sobj->user_data.s >= 0x1E)
    {
        fire_sobj->user_data.s = 0;
    }
}

// 0x80132B38
void mnTitleAnimateFire(GObj* fire_gobj)
{
    SObj *fire_sobj_1 = SObjGetStruct(fire_gobj), *fire_sobj_2 = fire_sobj_1->next;

    mnTitleChangeFireTexture(fire_sobj_1, 0);
    mnTitleChangeFireTexture(fire_sobj_2, 1);
}

// 0x80132B70
void mnTitleCreateFire()
{
    s32 i;
    s32 var_s1;
    GObj* fire_gobj;
    SObj* fire_sobj;

    fire_gobj = omMakeGObjSPAfter(5, mnTitleFadeInFire, 6, 0x80000000);

    if (fire_gobj != NULL)
    {
        omAddGObjRenderProc(fire_gobj, mnTitleRenderFire, 0, 0x80000000, -1);
        omAddGObjCommonProc(fire_gobj, mnTitleAnimateFire, 1, 1);

        for (i = 0; i < 2; i++)
        {
            if (i != 0)
            {
                var_s1 = 0;
            }
            else var_s1 = 12;

            fire_sobj = gcAppendSObjWithSprite(fire_gobj, GetAddressFromOffset(gMNTitleFilesArray[1], dMNTitleFireTextureOffsets[var_s1]));

            fire_sobj->sprite.attr = SP_TRANSPARENT;

            if (i != 0)
            {
                fire_sobj->pos.x = 8.0f;
            }
            else
            {
                fire_sobj->pos.x = -32.0f;
            }

            if (i != 0)
            {
                fire_sobj->pos.y = 8.0f;
            }
            else
            {
                fire_sobj->pos.y = -16.0f;
            }

            if (i != 0)
            {
                fire_sobj->sprite.scalex = 9.5f;
            }
            else
            {
                fire_sobj->sprite.scalex = 12.0f;
            }
            if (i != 0)
            {
                fire_sobj->sprite.scaley = 7.0f;
            }
            else
            {
                fire_sobj->sprite.scaley = 8.5f;
            }

            fire_sobj->user_data.s = var_s1;
        }

        gMNTitleFireAlpha = gMNTitleFireAlphaUnused = 0;
        fire_gobj->flags = 1;

        if (gSceneData.scene_previous != scMajor_Kind_IntroHiddenChars)
        {
            mnTitleShowFire(fire_gobj);
        }
    }
}

// 0x80132D5C
void mnTitleAnimateLogo(GObj* logo_gobj)
{
    GObj *effect_gobj = logo_gobj->user_data.p;
    SObj *logo_sobj = SObjGetStruct(logo_gobj);
    DObj *logo_animation_dobj = DObjGetStruct(effect_gobj)->child->sib_next->sib_next->sib_next;

    logo_sobj->sprite.scalex = logo_animation_dobj->scale.vec.f.x;
    logo_sobj->sprite.scaley = logo_animation_dobj->scale.vec.f.y;
    logo_sobj->pos.x = ((logo_animation_dobj->translate.vec.f.x + 160.0f) - (logo_sobj->sprite.width * logo_sobj->sprite.scalex * 0.5f));
    logo_sobj->pos.y = ((120.0f - logo_animation_dobj->translate.vec.f.y) - (logo_sobj->sprite.height * logo_sobj->sprite.scaley * 0.5f));
}

// 0x80132DFC
void mnTitleRenderLogoNoIntro(GObj* logo_gobj)
{
    SObj* logo_sobj = SObjGetStruct(logo_gobj);
    f32 min_scale = 0.0001F;

    if (!(logo_sobj->sprite.scalex < min_scale) && !(logo_sobj->sprite.scaley < min_scale))
    {
        func_ovl0_800CC118(gDisplayListHead, logo_sobj);

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, logo_sobj->sprite.red, logo_sobj->sprite.green, logo_sobj->sprite.blue, gMNTitleLogoAlpha);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0);

        func_ovl0_800CCF74(logo_gobj, logo_sobj);
    }
}

// 0x80132EDC
void mnTitleFadeOutLogo(GObj* logo_gobj)
{
    SObj* logo_sobj = SObjGetStruct(logo_gobj);
    f32 min_scale = 0.0001F;

    if (!(logo_sobj->sprite.scalex < min_scale) && !(logo_sobj->sprite.scaley < min_scale))
    {
        gMNTitleLogoAlpha -= 4;

        if (gMNTitleLogoAlpha < 0x4D)
        {
            gMNTitleLogoAlpha = 0x4C;
        }
    }
}

// 0x80132F3C
void mnTitleCreateLogoNoIntro()
{
    GObj *logo_gobj = func_ovl0_800CD050(0xB, 0, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleTextureConfigs[8].offset), 1, 0, 1);
    SObj *logo_sobj = SObjGetStruct(logo_gobj);

    logo_sobj->sprite.attr = SP_TRANSPARENT;
    logo_sobj->sprite.red = 0xFF;
    logo_sobj->sprite.green = 0;
    logo_sobj->sprite.blue = 0;

    mnTitleSetPosition(0, logo_sobj, nMNTitleTextureIndexLogo);
}

// 0x80132FD8
void mnTitleCreateLogo()
{
    s32 i;
    GObj* animated_logo_gobj;
    GObj* fire_logo_gobj;
    SObj* fire_logo_sobj;
    GObj* logo_gobj;
    SObj* logo_sobj;
    DObj* fire_logo_dobj;

    if (gSceneData.scene_previous != scMajor_Kind_IntroHiddenChars)
    {
        mnTitleCreateLogoNoIntro();
    }
    else
    {
        animated_logo_gobj = omMakeGObjSPAfter(7, 0, 7, 0x80000000);
        func_8000F120(animated_logo_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_LOGO_OFFSET_2), 0);
        func_8000BD8C(animated_logo_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_LOGO_OFFSET_1), 0);
        func_8000DF34(animated_logo_gobj);

        fire_logo_gobj = omMakeGObjSPAfter(6, 0, 7, 0x80000000);
        omAddGObjRenderProc(fire_logo_gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);
        omAddGObjCommonProc(fire_logo_gobj, mnTitleAnimateGObj, 1, 1);

        fire_logo_gobj->user_data.p = animated_logo_gobj;
        fire_logo_dobj = DObjGetStruct(animated_logo_gobj)->child;

        for (i = 0; i < ARRAY_COUNT(dMNTitleAnimatedLogoOffsets); i++)
        {
            fire_logo_sobj = gcAppendSObjWithSprite(fire_logo_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleAnimatedLogoOffsets[i]));
            fire_logo_sobj->sprite.attr = SP_TRANSPARENT;
            fire_logo_sobj->pos.x = 0.0f;
            fire_logo_sobj->pos.y = 0.0f;
            fire_logo_sobj->sprite.red = 0;
            fire_logo_sobj->sprite.green = 0;
            fire_logo_sobj->sprite.blue = 0;

            fire_logo_dobj->translate.vec.f.x = 0;
            fire_logo_dobj->translate.vec.f.y = 0;
            fire_logo_dobj = fire_logo_dobj->sib_next;
        };

        logo_gobj = func_ovl0_800CD050(0xB, mnTitleFadeOutLogo, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, GetAddressFromOffset(dMNTitleLogoOffset, gMNTitleFilesArray[0]), 1, mnTitleAnimateLogo, 1);

        logo_sobj = SObjGetStruct(logo_gobj);
        logo_sobj->sprite.attr = SP_TRANSPARENT;
        logo_sobj->sprite.red = 0xFF;
        logo_sobj->sprite.green = 0;
        logo_sobj->sprite.blue = 0;

        fire_logo_dobj->translate.vec.f.x = 0;
        fire_logo_dobj->translate.vec.f.y = 0;

        logo_gobj->user_data.p = animated_logo_gobj;

        gMNTitleLogoAlpha = 0xFF;
    }
}

// 0x801331FC - Unused?
void mnTitleCreateTextures()
{
    GObj* gobj;
    SObj* sobj;
    s32 i;

    gobj = omMakeGObjSPAfter(8, 0, 8, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    for (i = 0; i < 7; i++)
    {
        sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleTextureConfigs[i].offset));
        sobj->sprite.attr = SP_TRANSPARENT;

        mnTitleSetPosition(0, sobj, i);
        mnTitleSetColors(sobj, i);
    }
}

// 0x801332E4
void mnTitleCreateTitleHeaderAndFooter()
{
    s32 i;
    GObj* animation_gobj;
    GObj* gobj;
    SObj* texture_sobj;
    DObj* animation_dobj;

    animation_gobj = omMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
    func_8000F120(animation_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_2), 0);
    func_8000BD8C(animation_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_TITLE_HEADER_FOOTER_OFFSET_1), 0);
    func_8000DF34(animation_gobj);

    gobj = omMakeGObjSPAfter(8, 0, 8, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnTitleAnimateTitle, 1, 1);

    gobj->user_data.p = animation_gobj;

    animation_dobj = DObjGetStruct(animation_gobj)->child;
    for (i = 0; i < 5; i++)
    {
        texture_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleTextureConfigs[i].offset));
        texture_sobj->sprite.attr = SP_TRANSPARENT;

        mnTitleSetPosition(animation_dobj, texture_sobj, i);
        mnTitleSetColors(texture_sobj, i);

        animation_dobj = animation_dobj->sib_next;
    }

    gobj->flags = 1;

    gobj = omMakeGObjSPAfter(9, 0, 8, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(gobj, mnTitleUpdateHeaderAndFooterPosition, 1, 1);

    gobj->user_data.p = animation_gobj;

    for (i = 5; i < 7; i++)
    {
        texture_sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleTextureConfigs[i].offset));
        texture_sobj->sprite.attr = SP_TRANSPARENT;

        mnTitleSetPosition(animation_dobj, texture_sobj, i);
        mnTitleSetColors(texture_sobj, i);

        animation_dobj = animation_dobj->sib_next;
    }

    gobj->flags = 1;
}

// 0x80133504
void mnTitleCreatePressStart()
{
    GObj* press_start_anim_gobj;
    GObj* press_start_gobj;
    DObj* press_start_anim_dobj;
    SObj* press_start_sobj;

    press_start_anim_gobj = omMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
    func_8000F120(press_start_anim_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_PRESS_START_OFFSET_2), 0);
    func_8000BD8C(press_start_anim_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_ANIMATED_PRESS_START_OFFSET_1), 0);
    func_8000DF34(press_start_anim_gobj);

    press_start_anim_dobj = DObjGetStruct(press_start_anim_gobj)->child;

    press_start_gobj = omMakeGObjSPAfter(8, 0, 9, 0x80000000);
    omAddGObjRenderProc(press_start_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(press_start_gobj, mnTitleAnimatePressStart, 1, 1);

    press_start_gobj->user_data.p = press_start_anim_gobj;

    press_start_sobj = gcAppendSObjWithSprite(press_start_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], dMNTitleTextureConfigs[7].offset));
    press_start_sobj->sprite.attr = SP_TRANSPARENT;

    mnTitleSetPosition(press_start_anim_dobj, press_start_sobj, nMNTitleTextureIndexPressStart);
    mnTitleSetColors(press_start_sobj, nMNTitleTextureIndexPressStart);

    press_start_gobj->flags = 1;
}

// 0x80133634
void func_ovl10_80133634()
{
    return;
}

// 0x8013363C - Unused?
void mnTitleAnimateSlashEffectGFX(GObj* arg0)
{
    if (arg0->flags != 1)
    {
        func_8000DF34(arg0);
    }
}

// 0x8013366C
void mnTitleCreateSlashEffectGFX()
{
    GObj* slash_gfx_gobj;

    if (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars)
    {
        slash_gfx_gobj = omMakeGObjSPAfter(0xC, 0, 0xE, 0x80000000);
        omAddGObjRenderProc(slash_gfx_gobj, odRenderDObjTreeDLLinksForGObj, 2, 0x80000000, -1);
        func_8000F720(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_2), GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_1), 0, 0x1C, 0, 0);
        func_8000BD8C(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_3), 0.0f);
        func_8000BE28(slash_gfx_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_SLASH_EFFECT_GFX_OFFSET_4), 0.0f);
        func_8000DF34(slash_gfx_gobj);
        omAddGObjCommonProc(slash_gfx_gobj, func_8000DF34, 1, 1);
    }
}

// 0x80133770
void mnTitleUpdateFireBGOverlayColor(GObj* arg0)
{
    Camera* cam = CameraGetStruct(gMNTitleFireBGOverlayCameraGObj);

    if (gMNTitleTransitionFramesElapsed >= 0x28)
    {
        if (gMNTitleTransitionFramesElapsed < 0x6F)
        {
            gMNTitleFireBGOverlayRed += 4.0f;

            TAKE_MIN(gMNTitleFireBGOverlayRed, 255);
        }
        else
        {
            if (gMNTitleFireBGOverlayTimer == 0)
            {
                s32 index;

                gMNTitleFireBGOverlayTimer = 0x104;

                index = lbRandom_GetTimeByteRange(7);

                if (index == gMNTitleFireBGOverlayIndex)
                {
                    index++;

                    if (index >= 7)
                    {
                        index = 0;
                    }
                }

                gMNTitleFireBGOverlayIndex = index;

                gMNTitleFireBGOverlayDeltaRed = (dMNTitleFireBGOverlayColorArrayRed[index] - gMNTitleFireBGOverlayRed) / 80.0f;
                gMNTitleFireBGOverlayDeltaGreen = (dMNTitleFireBGOverlayColorArrayGreen[index] - gMNTitleFireBGOverlayGreen) / 80.0f;
                gMNTitleFireBGOverlayDeltaBlue = (dMNTitleFireBGOverlayColorArrayBlue[index] - gMNTitleFireBGOverlayBlue) / 80.0f;
            }

            if (gMNTitleFireBGOverlayTimer >= 0x50)
            {
                gMNTitleFireBGOverlayRed += gMNTitleFireBGOverlayDeltaRed;
                gMNTitleFireBGOverlayGreen += gMNTitleFireBGOverlayDeltaGreen;
                gMNTitleFireBGOverlayBlue += gMNTitleFireBGOverlayDeltaBlue;
            }

            gMNTitleFireBGOverlayTimer--;
        }

        TAKE_MIN(gMNTitleFireBGOverlayRed, 255.0f);
        TAKE_MIN(gMNTitleFireBGOverlayGreen, 255.0f);
        TAKE_MIN(gMNTitleFireBGOverlayBlue, 255.0f);

        TAKE_MAX(gMNTitleFireBGOverlayRed, 0.0f);
        TAKE_MAX(gMNTitleFireBGOverlayGreen, 0.0f);
        TAKE_MAX(gMNTitleFireBGOverlayBlue, 0.0f);

        cam->color = (((s32) gMNTitleFireBGOverlayRed << 0x18) | ((s32) gMNTitleFireBGOverlayGreen << 0x10) | ((s32) gMNTitleFireBGOverlayBlue << 8) | 0xFF);
    }
}

// 0x80133A94
s32 mnTitleCreateViewports()
{
    s32 unused[2];
    GObj *camera_gobj;
    Camera *cam;

    // fire bg overlay
    gMNTitleFireBGOverlayCameraGObj = func_8000B9FC(2, 0x80000000, 0x64, 3, 0xFF);
    omAddGObjCommonProc(gMNTitleFireBGOverlayCameraGObj, mnTitleUpdateFireBGOverlayColor, 1, 1);

    // most everything else
    camera_gobj = func_8000B93C(2, 0, 3, 0x80000000, func_ovl0_800CD2CC, 0x3C, 0x00000003, -1, 0, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    camera_gobj = func_8000B93C(3, 0, 3, 0x80000000, func_80017EC0, 0x28, 0x00000004, -1, 0, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    omAddOMMtxForCamera(cam, 5, 0);
    omAddOMMtxForCamera(cam, 6, 0);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.at.z = 0.0F;
    cam->vec.at.y = 0.0F;
    cam->vec.at.x = 0.0F;
    cam->vec.eye.z = 2000.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.x = 0.0F;

    camera_gobj = func_8000B93C(3, 0, 3, 0x80000000, func_80017EC0, 0x50, 0x00000008, -1, 1, 1, 0, 1, 0);
    cam = CameraGetStruct(camera_gobj);
    func_80007080(&cam->viewport, 10.0F, 10.0F, 310.0F, 230.0F);

    cam->vec.at.z = 0.0F;
    cam->vec.at.y = 0.0F;
    cam->vec.at.x = 0.0F;
    cam->vec.eye.z = 1000.0F;
    cam->vec.eye.y = 0.0F;
    cam->vec.eye.x = 0.0F;
    cam->projection.persp.fovy = 30.0F;

    return unused[0];
}

// 0x80133CFC
void mnTitleRenderLogoFireEffect(GObj* arg0)
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34(arg0);

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133DDC
void mnTitleCreateLogoFire()
{
    GObj* logo_fire_gobj;

    logo_fire_gobj = omMakeGObjSPAfter(0xF, 0, 4, 0x80000000);
    omAddGObjRenderProc(logo_fire_gobj, mnTitleRenderLogoFireEffect, 3, 0x80000000, -1);

    logo_fire_gobj->ftparts_gobj_0x30 = 0x00000001;

    gMNTitleParticleBankId = efAlloc_SetParticleBank(&D_NF_00B22C30, &D_NF_00B22D40, &D_NF_00B22D40_other, &D_NF_00B277B0);
}

// 0x80133E68
void mnTitleLogoFireMakeEffect()
{
    GObj* logo_fire_effect_gobj;
    efGenerator *efgen;

    if (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars)
    {
        logo_fire_effect_gobj = omMakeGObjSPAfter(0xE, 0, 5, 0x80000000);
        func_8000F120(logo_fire_effect_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_1), 0);
        func_8000BD8C(logo_fire_effect_gobj, GetAddressFromOffset(gMNTitleFilesArray[0], &FILE_0A7_LOGO_FIRE_EFFECT_OFFSET_2), 0);
        func_8000DF34(logo_fire_effect_gobj);
        omAddGObjCommonProc(logo_fire_effect_gobj, func_8000DF34, 1, 1);

        efgen = func_ovl0_800D35DC(gMNTitleParticleBankId, 0);
        if (efgen != NULL)
        {
            efgen->dobj = DObjGetStruct(logo_fire_effect_gobj)->child->sib_next->child;
        }
    }
}

// 0x80133F3C
void mnTitleCreateMainRoutines()
{
    gMNTitleMainGObj = omMakeGObjSPAfter(0, mnTitleMain, 1, 0x80000000);
    gMNTitleTransitionsGObj = omMakeGObjSPAfter(0, mnTitleHandleTransitions, 0xF, 0x80000000);
}

// 0x80133F90
void mnTitleInit()
{
    s32 i;

    for (i = 0; i < 4; i++)
    {
        func_80004494(i);
    }

    mnTitleLoadFiles();
    mnTitleCreateMainRoutines();
    func_ovl2_80115890();
    mnTitleCreateLogoFire();
    mnTitleCreateViewports();
    mnTitleInitVars();
    mnTitleCreateFire();
    mnTitleCreateLogo();
    mnTitleCreateTitleHeaderAndFooter();
    func_ovl10_80133634();
    mnTitleCreatePressStart();
    mnTitleCreateSlashEffectGFX();
    mnTitleLogoFireMakeEffect();

    if (gSceneData.scene_previous == scMajor_Kind_IntroHiddenChars)
    {
        while (func_8000092C() < 0x1077U) {
            // sleep
        }
    }
}

// 0x80134074
void mnTitleSetupDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, dMNTitleDisplayList);
}

// 0x80134098
void mnTitleAdvanceFrame()
{
    func_8000A5E4();
}

// 0x801340B8
void mnTitleStartScene()
{
    D_ovl10_80134370.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl10_80134370);

    if ((gSceneData.main_title_animation_viewed == FALSE) && (gSaveData.unk5E3 < 0x100))
    {
        gSaveData.unk5E3++;
        lbMemory_SaveData_WriteSRAM();
    }

    D_ovl10_8013438C.arena_size = (u32) ((uintptr_t)&lOverlay10ArenaHi - (uintptr_t)&lOverlay10ArenaLo);
    gsGTLSceneInit(&D_ovl10_8013438C);
}

// 0x80134140
void mnTitleLoadFiles()
{
    rdSetup rldmSetup;

    rldmSetup.tableRomAddr = &D_NF_001AC870;
    rldmSetup.tableFileCount = &D_NF_00000854;
    rldmSetup.fileHeap = 0;
    rldmSetup.fileHeapSize = 0;
    rldmSetup.statusBuf = (rdFileNode*) &D_ovl10_801344A0;
    rldmSetup.statusBufSize = 0x20;
    rldmSetup.forceBuf = 0;
    rldmSetup.forceBufSize = 0;
    rdManagerInitSetup(&rldmSetup);
    rdManagerLoadFiles(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420), gMNTitleFilesArray, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420)), 0x10));
}
