#include <sys/develop.h>
#include <ft/ftdef.h>
#include <ft/fighter.h>
#include <gm/battle.h>
#include <gr/ground.h>
#include <ovl0/reloc_data_mgr.h>
#include <mnTitle.h>

// ovl10 stuff
extern intptr_t D_ovl10_801341F0[30];

extern u8 D_ovl10_80134318[8];
extern u8 D_ovl10_80134320[8];
extern u8 D_ovl10_80134328[8];

extern Lights1 D_ovl10_80134330 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

extern Gfx D_ovl10_80134348[/* */] =
{
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetLights1(D_ovl10_80134330),
    gsSPEndDisplayList()
};

extern s32 D_ovl10_80134450;

extern s32 D_ovl10_8013445C;
extern s32 D_ovl10_80134460;
extern u32 D_ovl10_80134464; // fire prim color

extern s32 D_ovl10_80134470;
extern s32 D_ovl10_80134474;
extern s32 D_ovl10_80134478;
extern f32 D_ovl10_8013447C;
extern f32 D_ovl10_80134480;
extern f32 D_ovl10_80134484;
extern f32 D_ovl10_80134488;
extern f32 D_ovl10_8013448C;
extern f32 D_ovl10_80134490;
extern s32 D_ovl10_80134494;

// 0x80134268
extern mnTitleTextureConfig dMNTitleTextureConfigs[10];


// extern RldmFileId D_ovl34_80134A20[8];

// Vec3f dMvOpeningFirstDestinationSpotlightPositions[12]; // 0x80134A70
// Vec3f dMvOpeningFirstDestinationSpotlightScales[12]; // 0x80134B00
// s32 dMvOpeningFirstDestinationFighterKinds[8]; // 0x80134B90
// s32 dMvOpeningFirstDestinationFighterKindsDuplicate[8]; // 0x80134BB0
// extern scUnkDataBounds D_ovl34_80134BD0;
// extern scRuntimeInfo D_ovl34_80134BEC;

// uintptr_t gMvOpeningFirstDestinationMasterHandAnimHeap; // 0x80134CD8
// uintptr_t gMvOpeningFirstDestinationPluckedFighterAnimHeap; // 0x80134CDC
// uintptr_t gMvOpeningFirstDestinationDroppedFighterAnimHeap; // 0x80134CE0
// extern s32 gMvOpeningFirstDestinationFramesElapsed; // 0x80134CE4
// extern GObj* gMvOpeningFirstDestinationMainCameraGObj; // 0x80134CE8
// extern GObj* gMvOpeningFirstDestinationFighterCameraGObj; // 0x80134CEC
// extern GObj* gMvOpeningFirstDestinationHALLogoCameraGObj; // 0x80134CF0
// extern GObj* gMvOpeningFirstDestinationMasterHandGObj; // 0x80134CF4
// extern GObj* gMvOpeningFirstDestinationPluckedFighterKind; // 0x80134CF8
// extern GObj* gMvOpeningFirstDestinationDroppedFighterKind; // 0x80134CFC
// extern GObj* gMvOpeningFirstDestinationHALLogoGObj; // 0x80134D00
// extern GObj* gMvOpeningFirstDestinationPluckedFighterGObj; // 0x80134D04
// extern GObj* gMvOpeningFirstDestinationDroppedFighterGObj; // 0x80134D08
// extern GObj* gMvOpeningFirstDestinationRoomGObj; // 0x80134D0C
// extern GObj* gMvOpeningFirstDestinationSunlightGObj; // 0x80134D10
// extern GObj* gMvOpeningFirstDestinationDeskGObj; // 0x80134D14
// extern GObj* gMvOpeningFirstDestinationOutsideGObj; // 0x80134D18
// extern GObj* gMvOpeningFirstDestinationOutsideHazeGObj; // 0x80134D1C
// extern GObj* gMvOpeningFirstDestinationBooksGObj; // 0x80134D20
// extern GObj* gMvOpeningFirstDestinationPencilHolderGObj; // 0x80134D24
// extern GObj* gMvOpeningFirstDestinationLampGObj; // 0x80134D28
// extern GObj* gMvOpeningFirstDestinationTissueBoxGObj; // 0x80134D2C
// extern GObj* gMvOpeningFirstDestinationMasterHandShadowGObj; // 0x80134D30

// extern s32 gMvOpeningFirstDestinationOverlayAlpha; // 0x80134D38
// extern GObj* gMvOpeningFirstDestinationOverlayGObj; // 0x80134D3C
// extern GObj* gMvOpeningFirstDestinationSpotlightGObj; // 0x80134D40
// extern GObj* gMvOpeningFirstDestinationBackgroundGObj; // 0x80134D44
// extern GObj* gMvOpeningFirstDestinationTransitionGFXOutlineGObj; // 0x80134D48
// extern GObj* gMvOpeningFirstDestinationTransitionGFXOverlayGObj; // 0x80134D4C
// extern GObj* gMvOpeningFirstDestinationCameraGObj; // 0x80134D50
// extern s32 gMvOpeningFirstDestinationUnusedCounter; // 0x80134D54
// extern rdFileNode D_ovl34_80134D58[100];
// extern rdFileNode D_ovl34_80135078[7];
// extern uintptr_t D_NF_001AC870;
// extern uintptr_t D_NF_00000854;

// extern uintptr_t gMvOpeningFirstDestinationFilesArray[9]; // 0x801350B0[8]
// // gMvOpeningFirstDestinationFilesArray[0] - D_ovl34_801350B0; // file 0x034 pointer
// // gMvOpeningFirstDestinationFilesArray[1] - D_ovl34_801350B4; // file 0x03F pointer
// // gMvOpeningFirstDestinationFilesArray[2] - D_ovl34_801350B8; // file 0x038 pointer
// // gMvOpeningFirstDestinationFilesArray[3] - D_ovl34_801350BC; // file 0x039 pointer
// // gMvOpeningFirstDestinationFilesArray[4] - D_ovl34_801350C0; // file 0x03A pointer
// // gMvOpeningFirstDestinationFilesArray[5] - D_ovl34_801350C4; // file 0x03B pointer
// // gMvOpeningFirstDestinationFilesArray[6] - D_ovl34_801350C8; // file 0x04B pointer - unused?
// // gMvOpeningFirstDestinationFilesArray[7] - D_ovl34_801350CC; // file 0x05A pointer

// // // Offsets
// extern intptr_t FILE_034_ROOM_OFFSET_1 = 0x42F8; // file 0x034 offset for First Destination room
// extern intptr_t FILE_034_ROOM_OFFSET_2 = 0x7E98; // file 0x034 offset for First Destination room
// extern intptr_t FILE_034_ROOM_OFFSET_3 = 0x8788; // file 0x034 offset for First Destination room
// extern intptr_t FILE_034_DESK_OBJECT_OFFSET = 0x8DF8; // file 0x034 offset for First Destination desk
// extern intptr_t FILE_034_OUTSIDE_HAZE_OBJECT_OFFSET = 0x98F8; // file 0x034 offset for First Destination outside haze in window
// extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_1 = 0xA6F8; // file 0x034 offset for First Destination books
// extern intptr_t FILE_034_BOOKS_OBJECT_OFFSET_2 = 0xA7B0; // file 0x034 offset for First Destination books
// extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_1 = 0xAEB8; // file 0x034 offset for First Destination pencil holder
// extern intptr_t FILE_034_PENCIL_HOLDER_OBJECT_OFFSET_2 = 0xAF70; // file 0x034 offset for First Destination pencil holder
// extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_1 = 0xBDC0; // file 0x034 offset for First Destination lamp
// extern intptr_t FILE_034_LAMP_OBJECT_OFFSET_2 = 0xBEA0; // file 0x034 offset for First Destination lamp
// extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_1 = 0xC690; // file 0x034 offset for First Destination tissue box
// extern intptr_t FILE_034_TISSUE_BOX_OBJECT_OFFSET_2 = 0xC884; // file 0x034 offset for First Destination tissue box
// extern intptr_t FILE_034_HAL_LOGO_OFFSET_1 = 0x1BC60; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_HAL_LOGO_OFFSET_2 = 0x1C4A8; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_HAL_LOGO_OFFSET_3 = 0x1C52C; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_1 = 0x1CA68; // file 0x034 offset for First Destination snap gfx
// extern intptr_t FILE_034_SNAP_GFX_OBJECT_OFFSET_2 = 0x1CAF0; // file 0x034 offset for First Destination snap gfx
// extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_1 = 0x1DCA0; // file 0x034 offset for First Destination close-up gfx air
// extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_2 = 0x1DF28; // file 0x034 offset for First Destination close-up gfx air
// extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_3 = 0x1DFD8; // file 0x034 offset for First Destination close-up gfx air
// extern intptr_t FILE_034_CLOSEUP_GFX_AIR_OFFSET_4 = 0x1E010; // file 0x034 offset for First Destination close-up gfx air
// extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_1 = 0x1F0F8; // file 0x034 offset for First Destination close-up gfx ground
// extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_2 = 0x1F270; // file 0x034 offset for First Destination close-up gfx ground
// extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_3 = 0x1F2F4; // file 0x034 offset for First Destination close-up gfx ground
// extern intptr_t FILE_034_CLOSEUP_GFX_GROUND_OFFSET_4 = 0x1F330; // file 0x034 offset for First Destination close-up gfx ground
// extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_1 = 0x1F790; // file 0x034 offset for First Destination Master Hand's shadow
// extern intptr_t FILE_034_MASTERHAND_SHADOW_OBJECT_OFFSET_2 = 0x1F924; // file 0x034 offset for First Destination Master Hand's shadow
// extern intptr_t FILE_034_DESK_STAGE_OFFSET_1 = 0x20480; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_DESK_STAGE_OFFSET_2 = 0x22440; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_DESK_STAGE_OFFSET_3 = 0x225CC; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_SPOTLIGHT_OFFSET_1 = 0x22C90; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_SPOTLIGHT_OFFSET_2 = 0x22E18; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_SPOTLIGHT_OFFSET_3 = 0x22F10; // file 0x034 offset for First Destination HAL logo
// extern intptr_t FILE_034_OUTSIDE_OBJECT_OFFSET = 0x24200; // file 0x034 offset for First Destination outside view through window
// extern intptr_t FILE_034_SUNLIGHT_OBJECT_OFFSET = 0x24708; // file 0x034 offset for First Destination sunlight

// extern intptr_t FILE_038_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x038 offset for camera parameters for scene 1

// extern intptr_t FILE_039_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x039 offset for camera parameters for scene 2

// extern intptr_t FILE_03A_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x03A offset for camera parameters for scene 3

// extern intptr_t FILE_03B_CAMERA_PARAMETERS_OFFSET = 0x0; // file 0x03B offset for camera parameters for scene 4

// extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_1 = 0x5A0; // file 0x03F offset for First Destination transition gfx shaded overlay
// extern intptr_t FILE_03F_TRANSITION_GFX_OVERLAY_OBJECT_OFFSET_2 = 0x714; // file 0x03F offset for First Destination transition gfx shaded overlay
// extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_1 = 0xF40; // file 0x03F offset for First Destination transition gfx red outline
// extern intptr_t FILE_03F_TRANSITION_GFX_OUTLINE_OBJECT_OFFSET_2 = 0x11C4; // file 0x03F offset for First Destination transition gfx red outline

// extern intptr_t FILE_05A_BACKGROUND_IMAGE_OFFSET = 0x26C88; // file 0x05A offset for background image footer

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
void func_ovl10_80131CF4()
{
    s32 index;

    if (gSceneData.scene_previous == 0x2E)
    {
        D_ovl10_80134450 = 0;
        D_ovl10_8013445C = 0;
        D_ovl10_80134484 = 0.0f;
        D_ovl10_80134480 = D_ovl10_80134484;
        D_ovl10_8013447C = D_ovl10_80134480;
    }
    else
    {
        func_80020A74();
        func_800266A0();

        D_ovl10_80134450 = 1;
        D_ovl10_8013445C = 0xA9;

        index = lbRandom_GetTimeByteRange(7);
        D_ovl10_80134494 = index;
        D_ovl10_8013447C = D_ovl10_80134318[index];
        D_ovl10_80134480 = D_ovl10_80134320[index];
        D_ovl10_80134484 = D_ovl10_80134328[index];
    }

    D_ovl10_80134478 = 0;
    D_ovl10_80134470 = 0;
    D_ovl10_80134474 = 3;
    D_ovl10_80134460 = 0;
    D_ovl10_80134488 = 0.0f;
    D_ovl10_8013448C = 0.0f;
    D_ovl10_80134490 = 0.0f;
}

// 0x80131E68
void func_ovl10_80131E68()
{
    GObj* smash_logo_gobj;
    SObj* smash_logo_sobj;

    smash_logo_gobj = gOMObjCommonLinks[10];

    if (gSceneData.scene_previous == 0x2E)
    {
        func_8000B39C(smash_logo_gobj);
    }

    smash_logo_sobj = SObjGetStruct(smash_logo_gobj);

    func_ovl10_80132764(NULL, smash_logo_sobj, 8);

    smash_logo_sobj->user_data.s = 0xFF;
    D_ovl10_8013446C = 0x4C;

    smash_logo_sobj->sprite.scalex = 1.0f;
    smash_logo_sobj->sprite.scaley = 1.0f;
}

// func_ovl10_80131EE4
void func_ovl10_80131EE4()
{
    s32 i;
    GObj* sp28;
    GObj* gobj;
    SObj* sobj;

    gobj = gOMObjCommonLinks[6];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == 5)
        {
            func_ovl10_80132A58(gobj);
        }

        gobj = gobj->link_next;
    }

    gobj = gOMObjCommonLinks[8];

    while (gobj != NULL)
    {
        if (gobj->gobj_id == 8)
        {
            sp28 = gobj;
        }

        gobj = gobj->link_next;
    }

    // UB: sp28 may not be defined!
    func_8000B39C(sp28);

    i = 0;
    sobj = SObjGetStruct(sp28);
    sp28->flags = 0;

    while (sobj != NULL)
    {
        func_ovl10_80132764(NULL, sobj, i);
        func_ovl10_8013282C(sobj, i);

        sobj->sprite.scaley = 1.0f;
        sobj->sprite.scalex = 1.0f;
        sobj = sobj->next;
        i += 1;
    }
}

// 0x80131FD0
void func_ovl10_80131FD0()
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
        case 0x7:
        case 0x3D:
            gSceneData.scene_current = scMajor_Kind_N64;
            break;
        default:
            gSceneData.scene_current = scMajor_Kind_HowToPlay;
            break;
    }

    gSceneData.unk3F = 1;
    D_ovl10_80134470 = 1;
}

// 0x80132090
void func_ovl10_80132090()
{
    func_8000B9FC(2, 0x80000000, 0, 2, 0xFF);

    gSceneData.scene_previous = gSceneData.scene_current;
    gSceneData.scene_current = 7;

    func_800266A0();
    func_800269C0(0x9D);

    D_ovl10_80134470 = 1;
}

// 0x801320F0
void func_ovl10_801320F0(s32 arg0)
{
    s32 i;
    u16 buttonPressed;

    if (D_ovl10_80134460 == 0)
    {
        D_ovl10_80134460++;
        return;
    }

    if (D_ovl10_80134470 != 0)
    {
        D_ovl10_80134474--;

        if (D_ovl10_80134474 == 0)
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
                if (D_ovl10_80134450 != 0)
                {
                    if (((gSceneData.unk44 != 0) || (D_NF_8000030C != 0)) && !(buttonPressed & B_BUTTON))
                    {
                        func_ovl10_80132090();
                        break;
                    }
                }
                else
                {
                    D_ovl10_8013445C = 0xA9;
                    D_ovl10_80134450 = 1;

                    func_ovl10_80132320();
                    func_80020A74();
                    func_800266A0();
                    break;
                }
            }

        }
    }
}

// 0x80132210
void func_ovl10_80132210()
{
    s32 temp_v0 = lbRandom_GetTimeByteRange(7);

    D_ovl10_80134494 = temp_v0;

    D_ovl10_8013447C = D_ovl10_80134480 = D_ovl10_80134484 = 0.0f;

    D_ovl10_80134488 = (D_ovl10_80134318[temp_v0] - D_ovl10_8013447C) / 80.0f;
    D_ovl10_8013448C = (D_ovl10_80134320[temp_v0] - D_ovl10_80134480) / 80.0f;
    D_ovl10_80134490 = (D_ovl10_80134328[temp_v0] - D_ovl10_80134484) / 80.0f;
}

// 0x80132320
void func_ovl10_80132320()
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
    func_ovl10_80132210();
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
void func_ovl10_801323DC()
{
    if ((D_ovl10_80134450 == 0) && (gSceneData.scene_previous == 0x2E))
    {
        gSceneData.unk3F = 0;
    }

    D_ovl10_80134450++;
}

// 0x80132414
void func_ovl10_80132414()
{
    if (D_ovl10_80134450 == 2)
    {
        D_ovl10_80134498 = 0x118;
    }
    else D_ovl10_80134498 = 0x16C;
}

// 0x80132448
void func_ovl10_80132448(s32 arg0)
{
    D_ovl10_8013445C++;

    if (D_ovl10_8013445C == D_ovl10_80134498)
    {
        gSceneData.unk44 = 1;
    }

    switch (D_ovl10_8013445C)
    {
        case 111:
            func_ovl10_80132320();
            break;
        case 170:
            func_ovl10_80131E68();
            mnTitleEnableAllInGroup(8);
            func_ovl10_801323DC();
            func_ovl10_80132414();
            break;
        case 220:
            func_ovl10_80131EE4();
            break;
        case 280:
            mnTitleEnableAllInGroup(9);
            break;
        case 35:
        case 65:
            func_800269C0(0x98);
            break;
        case 200:
            if (D_ovl10_80134450 == 1)
            {
                func_800269C0(0x96);
            }
            break;
        case 214:
        case 240:
            // Maybe a FGM call in J version?
            break;
        case 650:
            if (gSceneData.unk3F == 0)
            {
                func_ovl10_80131FD0();
            }
            break;
        case 1190:
            if (gSceneData.unk3F != 0)
            {
                func_ovl10_80131FD0();
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
void func_ovl10_80132704(GObj* header_footer_gobj)
{
    SObj* header_footer_sobj = SObjGetStruct(header_footer_gobj);

    if ((D_ovl10_80134450 != 0) || (gSceneData.scene_previous != 0x2E))
    {
        func_ovl10_80132764(NULL, header_footer_sobj, 5);
        func_ovl10_80132764(NULL, header_footer_sobj->next, 6);
    }
}

// 0x80132764
void func_ovl10_80132764(DObj* dobj, SObj* sobj, s32 index)
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
void func_ovl10_8013282C(SObj* sobj, s32 index)
{
    if (index < 5)
    {
        if ((index == 0) || (index == 4))
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
    else switch (index) {                                 /* irregular */
        case 5:
            sobj->sprite.red = 0xB7;
            sobj->sprite.green = 0xAE;
            sobj->sprite.blue = 0x7C;
            sobj->shadow_color.r = 0x14;
            sobj->shadow_color.g = 0x12;
            sobj->shadow_color.b = 6;
            break;
        case 6:
            sobj->sprite.red = 0x14;
            sobj->sprite.green = 0x12;
            sobj->sprite.blue = 6;
            break;
        case 7:
            sobj->sprite.red = 0xFF;
            sobj->sprite.green = 0xFF;
            sobj->sprite.blue = 0xFF;
            sobj->shadow_color.r = 0x17;
            sobj->shadow_color.g = 0x10;
            sobj->shadow_color.b = 0xA4;
            break;
        case 9:
            sobj->sprite.red = 0x15;
            sobj->sprite.green = 0x13;
            sobj->sprite.blue = 6;
            break;
    }
}

// 0x80132940
void func_ovl10_80132940(GObj* fire_gobj)
{
    s32 i;
    SObj* fire_sobj = SObjGetStruct(fire_gobj);

    for (i = 0; i < 2; i++)
    {
        func_ovl0_800CC118(gDisplayListHead, fire_sobj);

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0, 0, 0, D_ovl10_80134464);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, TEXEL0,  TEXEL0, 0, PRIMITIVE, 0);

        func_ovl0_800CC818(gDisplayListHead, fire_sobj);
        func_ovl0_800CCEAC();

        fire_sobj = fire_sobj->next;
    }
}

// 0x80132A20
void func_ovl10_80132A20(GObj* fire_gobj)
{
    if (fire_gobj->flags != 1)
    {
        D_ovl10_80134464 += 0xD;

        if (D_ovl10_80134464 >= 0x100)
        {
            D_ovl10_80134464 = 0xFF;
        }
    }
}

// 0x80132A58
void func_ovl10_80132A58(GObj* fire_gobj)
{
    D_ovl10_80134464 = 0xFF;
    fire_gobj->flags = 0;
}

// 0x80132A6C
void func_ovl10_80132A6C(SObj* fire_sobj, s32 arg1)
{
    Sprite *offset = GetAddressFromOffset(D_ovl10_801345A4, D_ovl10_801341F0[fire_sobj->user_data.s]);

    fire_sobj->sprite = *offset;
    fire_sobj->sprite.attr = SP_TRANSPARENT;

    if (arg1 != 0)
    {
        fire_sobj->sprite.scalex = 9.5f;
    }
    else
    {
        fire_sobj->sprite.scalex = 12.0f;
    }

    if (arg1 != 0)
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
void func_ovl10_80132B38(GObj* fire_gobj)
{
    SObj *fire_sobj_1 = SObjGetStruct(fire_gobj), *fire_sobj_2 = fire_sobj_1->next;

    func_ovl10_80132A6C(fire_sobj_1, 0);
    func_ovl10_80132A6C(fire_sobj_2, 1);
}

// 0x80132B70
void mnTitleCreateFire()
{
    s32 i;
    s32 var_s1;
    GObj* fire_gobj;
    SObj* fire_sobj;

    fire_gobj = omMakeGObjSPAfter(5, func_ovl10_80132A20, 6, 0x80000000);

    if (fire_gobj != NULL)
    {
        omAddGObjRenderProc(fire_gobj, func_ovl10_80132940, 0, 0x80000000, -1);
        omAddGObjCommonProc(fire_gobj, func_ovl10_80132B38, 1, 1);

        for (i = 0; i < 2; i++)
        {
            if (i != 0)
            {
                var_s1 = 0;
            }
            else var_s1 = 12;

            fire_sobj = gcAppendSObjWithSprite(fire_gobj, GetAddressFromOffset(D_ovl10_801345A0[1], D_ovl10_801341F0[var_s1]));

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

        D_ovl10_80134464 = D_ovl10_80134468 = 0;
        fire_gobj->flags = 1;

        if (gSceneData.scene_previous != 0x2E)
        {
            func_ovl10_80132A58(fire_gobj);
        }
    }
}

// 0x80132D5C
void func_ovl10_80132D5C(GObj* arg0)
{
    GObj *effect_gobj = arg0->user_data.p;
    SObj *temp_v1 = SObjGetStruct(arg0);
    DObj *temp_a1 = DObjGetStruct(effect_gobj)->child->sib_next->sib_next->sib_next;

    temp_v1->sprite.scalex = temp_a1->scale.vec.f.x;
    temp_v1->sprite.scaley = temp_a1->scale.vec.f.y;
    temp_v1->pos.x = ((temp_a1->translate.vec.f.x + 160.0f) - (temp_v1->sprite.width * temp_v1->sprite.scalex * 0.5f));
    temp_v1->pos.y = ((120.0f - temp_a1->translate.vec.f.y) - (temp_v1->sprite.height * temp_v1->sprite.scaley * 0.5f));
}

// 0x80132DFC
void mnTitleRenderLogoNoIntro(GObj* logo_gobj)
{
    SObj* logo_sobj = SObjGetStruct(logo_gobj);

    if (!(logo_sobj->sprite.scalex < D_ovl10_80134438) && !(logo_sobj->sprite.scaley < D_ovl10_80134438))
    {
        func_ovl0_800CC118(gDisplayListHead, logo_sobj);

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, logo_sobj->sprite.red, logo_sobj->sprite.green, logo_sobj->sprite.blue, D_ovl10_8013446C);
        gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0,  0, 0, 0, PRIMITIVE,  TEXEL0, 0, PRIMITIVE, 0);

        func_ovl0_800CCF74(logo_gobj, logo_sobj);
    }
}

// 0x80132EDC
void func_ovl10_80132EDC(GObj* logo_gobj)
{
    SObj* logo_sobj = SObjGetStruct(logo_gobj);

    if (!(logo_sobj->sprite.scalex < D_ovl10_8013443C) && !(logo_sobj->sprite.scaley < D_ovl10_8013443C))
    {
        D_ovl10_8013446C -= 4;

        if (D_ovl10_8013446C < 0x4D)
        {
            D_ovl10_8013446C = 0x4C;
        }
    }
}

// 0x80132F3C
void mnTitleCreateLogoNoIntro()
{
    GObj *logo_gobj = func_ovl0_800CD050(0xB, 0, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, D_ovl10_801342D0 + D_ovl10_801345A0, 1, 0, 1);
    SObj *logo_sobj = SObjGetStruct(logo_gobj);

    logo_sobj->sprite.attr = SP_TRANSPARENT;
    logo_sobj->sprite.red = 0xFF;
    logo_sobj->sprite.green = 0;
    logo_sobj->sprite.blue = 0;

    func_ovl10_80132764(0, logo_sobj, 8);
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

    if (gSceneData.scene_previous != 0x2E)
    {
        mnTitleCreateLogoNoIntro();
    }
    else
    {
        animated_logo_gobj = omMakeGObjSPAfter(7, 0, 7, 0x80000000);
        func_8000F120(animated_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00026020), 0);
        func_8000BD8C(animated_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000251D0), 0);
        func_8000DF34(animated_logo_gobj);

        fire_logo_gobj = omMakeGObjSPAfter(6, 0, 7, 0x80000000);
        omAddGObjRenderProc(fire_logo_gobj, func_ovl0_800CCF00, 0, 0x80000000, -1);
        omAddGObjCommonProc(fire_logo_gobj, mnTitleAnimateGObj, 1, 1);

        fire_logo_gobj->user_data.p = animated_logo_gobj;
        fire_logo_dobj = DObjGetStruct(animated_logo_gobj)->child;

        for (i = 0; i < ARRAY_COUNT(D_ovl10_801341E0); i++)
        {
            fire_logo_sobj = gcAppendSObjWithSprite(fire_logo_gobj, GetAddressFromOffset(D_ovl10_801345A0, D_ovl10_801341E0[i]));
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

        logo_gobj = func_ovl0_800CD050(0xB, func_ovl10_80132EDC, 0xA, 0x80000000, mnTitleRenderLogoNoIntro, 0, 0x80000000, -1, D_ovl10_801341EC + D_ovl10_801345A0, 1, func_ovl10_80132D5C, 1);

        logo_sobj = SObjGetStruct(logo_gobj);
        logo_sobj->sprite.attr = SP_TRANSPARENT;
        logo_sobj->sprite.red = 0xFF;
        logo_sobj->sprite.green = 0;
        logo_sobj->sprite.blue = 0;

        fire_logo_dobj->translate.vec.f.x = 0;
        fire_logo_dobj->translate.vec.f.y = 0;

        logo_gobj->user_data.p = animated_logo_gobj;

        D_ovl10_8013446C = 0xFF;
    }
}

// 0x801331FC - Unused?
void func_ovl10_801331FC()
{
    GObj* gobj;
    SObj* sobj;
    s32 i;

    gobj = omMakeGObjSPAfter(8, 0, 8, 0x80000000);
    omAddGObjRenderProc(gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);

    for (i = 0; i < 7; i++)
    {
        sobj = gcAppendSObjWithSprite(gobj, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
        sobj->sprite.attr = SP_TRANSPARENT;

        func_ovl10_80132764(0, sobj, i);
        func_ovl10_8013282C(sobj, i);
    }
}

// 0x801332E4
void func_ovl10_801332E4()
{
    s32 i;
    GObj* temp_v0;
    GObj* temp_v0_2;
    SObj* temp_v0_3;
    DObj* var_s3;

    temp_v0 = omMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
    func_8000F120(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00026130), 0);
    func_8000BD8C(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025350), 0);
    func_8000DF34(temp_v0);

    temp_v0_2 = omMakeGObjSPAfter(8, 0, 8, 0x80000000);
    omAddGObjRenderProc(temp_v0_2, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(temp_v0_2, mnTitleAnimateTitle, 1, 1);

    temp_v0_2->user_data.p = temp_v0;

    var_s3 = DObjGetStruct(temp_v0)->child;
    for (i = 0; i < 5; i++)
    {
        temp_v0_3 = gcAppendSObjWithSprite(temp_v0_2, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
        temp_v0_3->sprite.attr = SP_TRANSPARENT;

        func_ovl10_80132764(var_s3, temp_v0_3, i);
        func_ovl10_8013282C(temp_v0_3, i);

        var_s3 = var_s3->sib_next;
    }

    temp_v0_2->flags = 1;

    temp_v0_2 = omMakeGObjSPAfter(9, 0, 8, 0x80000000);
    omAddGObjRenderProc(temp_v0_2, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(temp_v0_2, func_ovl10_80132704, 1, 1);

    temp_v0_2->user_data.p = temp_v0;

    for (i = 5; i < 7; i++)
    {
        temp_v0_3 = gcAppendSObjWithSprite(temp_v0_2, GetAddressFromOffset(D_ovl10_801345A0, dMNTitleTextureConfigs[i].offset));
        temp_v0_3->sprite.attr = SP_TRANSPARENT;

        func_ovl10_80132764(var_s3, temp_v0_3, i);
        func_ovl10_8013282C(temp_v0_3, i);

        var_s3 = var_s3->sib_next;
    }

    temp_v0_2->flags = 1;
}

// 0x80133504
void func_ovl10_80133504()
{
    GObj* press_start_anim_gobj;
    GObj* press_start_gobj;
    DObj* press_start_anim_dobj;
    SObj* press_start_sobj;

    press_start_anim_gobj = omMakeGObjSPAfter(0xA, 0, 8, 0x80000000);
    func_8000F120(press_start_anim_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000262C0), 0);
    func_8000BD8C(press_start_anim_gobj, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000258D0), 0);
    func_8000DF34(press_start_anim_gobj);

    press_start_anim_dobj = DObjGetStruct(press_start_anim_gobj)->child;

    press_start_gobj = omMakeGObjSPAfter(8, 0, 9, 0x80000000);
    omAddGObjRenderProc(press_start_gobj, func_ovl0_800CCF00, 1, 0x80000000, -1);
    omAddGObjCommonProc(press_start_gobj, mnTitleAnimatePressStart, 1, 1);

    press_start_gobj->user_data.p = press_start_anim_gobj;

    press_start_sobj = gcAppendSObjWithSprite(press_start_gobj, GetAddressFromOffset(D_ovl10_801342C4, D_ovl10_801345A0));
    press_start_sobj->sprite.attr = SP_TRANSPARENT;

    func_ovl10_80132764(press_start_anim_dobj, press_start_sobj, 7);
    func_ovl10_8013282C(press_start_sobj, 7);

    press_start_gobj->flags = 1;
}

// 0x80133634
void func_ovl10_80133634()
{
    return;
}

// 0x8013363C - Unused?
void func_ovl10_8013363C(GObj* arg0)
{
    if (arg0->flags != 1)
    {
        func_8000DF34(arg0);
    }
}

// 0x8013366C
void func_ovl10_8013366C()
{
    GObj* temp_v0;

    if (gSceneData.scene_previous == 0x2E)
    {
        temp_v0 = omMakeGObjSPAfter(0xC, 0, 0xE, 0x80000000);
        omAddGObjRenderProc(temp_v0, odRenderDObjTreeDLLinksForGObj, 2, 0x80000000, -1);
        func_8000F720(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00028DA8), GetAddressFromOffset(D_ovl10_801345A0, &D_NF_000287D8), 0, 0x1C, 0, 0);
        func_8000BD8C(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025E70), 0.0f);
        func_8000BE28(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00025F60), 0.0f);
        func_8000DF34(temp_v0);
        omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);
    }
}

// 0x80133770
void func_ovl10_80133770(GObj* arg0)
{
    Camera* cam = CameraGetStruct(D_ovl10_80134448);

    if (D_ovl10_8013445C >= 0x28)
    {
        if (D_ovl10_8013445C < 0x6F)
        {
            D_ovl10_8013447C += 4.0f;

            TAKE_MIN(D_ovl10_8013447C, 255);
        }
        else
        {
            if (D_ovl10_80134478 == 0)
            {
                s32 var_v1;

                D_ovl10_80134478 = 0x104;

                var_v1 = lbRandom_GetTimeByteRange(7);

                if (var_v1 == D_ovl10_80134494)
                {
                    var_v1++;

                    if (var_v1 >= 7)
                    {
                        var_v1 = 0;
                    }
                }

                D_ovl10_80134494 = var_v1;

                D_ovl10_80134488 = (D_ovl10_80134318[var_v1] - D_ovl10_8013447C) / 80.0f;
                D_ovl10_8013448C = (D_ovl10_80134320[var_v1] - D_ovl10_80134480) / 80.0f;
                D_ovl10_80134490 = (D_ovl10_80134328[var_v1] - D_ovl10_80134484) / 80.0f;
            }

            if (D_ovl10_80134478 >= 0x50)
            {
                D_ovl10_8013447C += D_ovl10_80134488;
                D_ovl10_80134480 += D_ovl10_8013448C;
                D_ovl10_80134484 += D_ovl10_80134490;
            }

            D_ovl10_80134478--;
        }

        TAKE_MIN(D_ovl10_8013447C, 255.0f);
        TAKE_MIN(D_ovl10_80134480, 255.0f);
        TAKE_MIN(D_ovl10_80134484, 255.0f);

        TAKE_MAX(D_ovl10_8013447C, 0.0f);
        TAKE_MAX(D_ovl10_80134480, 0.0f);
        TAKE_MAX(D_ovl10_80134484, 0.0f);

        cam->color = (((s32) D_ovl10_8013447C << 0x18) | ((s32) D_ovl10_80134480 << 0x10) | ((s32) D_ovl10_80134484 << 8) | 0xFF);
    }
}

// 0x80133A94
s32 func_ovl10_80133A94()
{
    s32 unused[2];
    GObj *camera_gobj;
    Camera *cam;

    D_ovl10_80134448 = func_8000B9FC(2, 0x80000000, 0x64, 3, 0xFF);
    omAddGObjCommonProc(D_ovl10_80134448, func_ovl10_80133770, 1, 1);

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
void func_ovl10_80133CFC()
{
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2);

    func_ovl0_800D0D34();

    gDPSetTexturePersp(gDisplayListHead[0]++, G_TP_PERSP);
    gDPSetDepthSource(gDisplayListHead[0]++, G_ZS_PIXEL);
    gDPPipeSync(gDisplayListHead[0]++);
    gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2);
}

// 0x80133DDC
void func_ovl10_80133DDC()
{
    GObj* temp_v0;

    temp_v0 = omMakeGObjSPAfter(0xF, 0, 4, 0x80000000);
    omAddGObjRenderProc(temp_v0, func_ovl10_80133CFC, 3, 0x80000000, -1);

    temp_v0->ftparts_gobj_0x30 = 0x00000001;

    D_ovl10_8013444C = efAlloc_SetParticleBank(&D_NF_00B22C30, &D_NF_00B22D40, &D_NF_00B22D40_other, &D_NF_00B277B0);
}

// 0x80133E68
void func_ovl10_80133E68()
{
    GObj* temp_v0;
    efGenerator *efgen;

    if (gSceneData.scene_previous == 0x2E)
    {
        temp_v0 = omMakeGObjSPAfter(0xE, 0, 5, 0x80000000);
        func_8000F120(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00028EB0), 0);
        func_8000BD8C(temp_v0, GetAddressFromOffset(D_ovl10_801345A0, &D_NF_00029010), 0);
        func_8000DF34(temp_v0);
        omAddGObjCommonProc(temp_v0, func_8000DF34, 1, 1);

        efgen = func_ovl0_800D35DC(D_ovl10_8013444C, 0);
        if (efgen != NULL)
        {
            efgen->dobj = DObjGetStruct(temp_v0)->child->sib_next->child;
        }
    }
}

// 0x80133F3C
void func_ovl10_80133F3C()
{
    D_ovl10_80134458 = omMakeGObjSPAfter(0, func_ovl10_801320F0, 1, 0x80000000);
    D_ovl10_80134454 = omMakeGObjSPAfter(0, func_ovl10_80132448, 0xF, 0x80000000);
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
    func_ovl10_80133F3C();
    func_ovl2_80115890();
    func_ovl10_80133DDC();
    func_ovl10_80133A94();
    func_ovl10_80131CF4();
    mnTitleCreateFire();
    mnTitleCreateLogo();
    func_ovl10_801332E4();
    func_ovl10_80133634();
    func_ovl10_80133504();
    func_ovl10_8013366C();
    func_ovl10_80133E68();

    if (gSceneData.scene_previous == 0x2E)
    {
        while (func_8000092C() < 0x1077U) {
            // sleep
        }
    }
}

// 0x80134074
void mnTitleSetupDisplayList(Gfx **display_list)
{
    gSPDisplayList(display_list[0]++, D_ovl10_80134348);
}

// 0x80134098
void func_ovl10_80134098()
{
    func_8000A5E4();
}

// 0x801340B8
void mnTitleStartScene()
{
    D_ovl10_80134370.unk_scdatabounds_0xC = (uintptr_t)((uintptr_t)&D_NF_800A5240 - 0x1900);
    func_80007024(&D_ovl10_80134370);

    if ((gSceneData.unk44 == 0) && (gSaveData.unk5E3 < 0x100))
    {
        gSaveData.unk5E3++;
        lbMemory_SaveData_WriteSRAM();
    }

    D_ovl10_8013438C.arena_size = (u32) ((uintptr_t)&mnDebugMenuUpdateMenuInputs - (uintptr_t)&D_NF_801345B0);
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
    rdManagerLoadFiles(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420), D_ovl10_801345A0, gsMemoryAlloc(rdManagerGetAllocSize(D_ovl10_80134420, ARRAY_COUNT(D_ovl10_80134420)), 0x10));
}
