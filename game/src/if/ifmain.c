#include "interface.h"

#include <ft/fighter.h>
#include <it/item.h>
#include <gr/ground.h>
#include <gm/battle.h>

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //


extern void *gCommonSpriteFiles[]; // Might actually be exclusive to interface elements

extern intptr_t D_NF_00000030;
extern intptr_t D_NF_00000050;
extern intptr_t D_NF_00000057;
extern intptr_t D_NF_00000068;
extern intptr_t D_NF_00000148;
extern intptr_t D_NF_00000188;
extern intptr_t D_NF_00000270;
extern intptr_t D_NF_000002C8;
extern intptr_t D_NF_00020990;
extern intptr_t D_NF_00021760;
extern intptr_t D_NF_00021878;

extern s32 gCurrScreenWidth;
extern s32 gPixelComponentSize;
extern s32 gZBuffer;
extern GObj *D_80046A58; // Some kind of camera GObj

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x80131598
ifPlayerDamage gPlayerDamageInterface[GMMATCH_PLAYERS_MAX];

// 0x80131748
ifPlayerMagnify gPlayerMagnifyInterface[GMMATCH_PLAYERS_MAX];

// 0x801317C8 - Values of digits displayed on the match timer
u8 gTimerDigitsInterface[4];

// 0x801317CC - This might be part of another struct
s8 gPlayerStocksInterface[GMMATCH_PLAYERS_MAX];

// 0x801317D0
GObj *gPlayerStocksGObj[GMMATCH_PLAYERS_MAX];

// 0x801317E0 - Identical to gBattleState->match_time_remain; the countdown timer adds one second once it has begun decrementing
s32 gTimerLimitInterface; 

// 0x801317F0 - Sprite of red arrow indicator for grabbable items
Sprite *gItemArrowSprite; 

// 0x80131838
ifPlayerSteal gPlayerStealInterface[GMMATCH_PLAYERS_MAX];

// 0x80131858
u8 gPlayerMagnifySoundWait;


// // // // // // // // // // // //
//                               //
// CONSTANTS / DATA DECLARATIONS //
//                               //
// // // // // // // // // // // //


// 0x8012EBF0 - Width of each digit?
s32 ifPlayer_Damage_DigitWidths[/* */] =
{
    14,  9, 15, 14,
    15, 13, 15, 14,
    15, 15, 17, 20
};

// 0x8012EC20 -> 0x8012EC38 - Player HUD digit colors
u8 ifPlayer_Damage_DigitColorsR[/* */] = { 0xFF, 0xF0, 0xF0, 0xFF, 0xFF }; // Hope the padding works here
u8 ifPlayer_Damage_DigitColorsG[/* */] = { 0xF0, 0xFF, 0xF0, 0xFF, 0xFF };
u8 ifPlayer_Damage_DigitColorsB[/* */] = { 0xF0, 0xF0, 0xFF, 0xFF, 0xFF };

// 0x8012EC38 - Player HUD position X offsets
s32 ifPlayer_Damage_PositionOffsetsX[/* */] = { 55, 125, 195, 265 };

// 0x8012EC58 - Player emblem position X offsets
s32 ifPlayer_Damage_EmblemOffsetsX[/* */] = { 3, 3, 3, 3 };

// 0x8012EC68 - Player emblem position Y offsets
s32 ifPlayer_Damage_EmblemOffsetsY[/* */] = { -3, -3, -3, -3 };

// 0x8012EC78 - Player emblem scale values
f32 ifPlayer_Damage_EmblemScales[/* */] = { 1.0F, 1.0F, 1.0F, 1.0F };

// 0x8012EC88 - Player stock icon X offsets (when stock count <= 6)
s32 ifPlayer_Stocks_IconOffsetsX[/* */] = { -4, -4, -4 ,-4 };

// 0x8012EC98 - Player stock digit X offsets (when stock count > 6)
s32 ifPlayer_Stocks_DigitOffsetsX[/* */] = { 4, 4, 4, 4 };

// 0x8012ECA8
u8 ifStart_TrafficLamp_SpriteColorsR[/* */] = { 0xFE, 0xFF, 0x4B, 0xFF, 0xFF, 0x22, 0xFF, 0xFF, 0xFF };

// 0x8012ECB4
u8 ifStart_TrafficLamp_SpriteColorsG[/* */] = { 0x0C, 0xA2, 0x64, 0x38, 0xA2, 0x66, 0xFF, 0xFF, 0xFF };

// 0x8012ECC0
u8 ifStart_TrafficLamp_SpriteColorsB[/* */] = { 0x0C, 0x00, 0xFF, 0x38, 0x00, 0xFE, 0xFF, 0xFF, 0xFF };

// 0x8012ECCC
u8 ifStart_TrafficLamp_GoBacklightR[2] = { 0x00, 0x6A };

// 0x8012ECD0
u8 ifStart_TrafficLamp_GoBacklightG[2] = { 0x00, 0x6A };

// 0x8012ECD4
u8 ifStart_TrafficLamp_GoBacklightB[2] = { 0x00, 0x95 };

// 0x8012ECD8
u8 ifStart_TrafficLamp_GoShadowR[2] = { 0x00, 0x12 };

// 0x8012ECDC
u8 ifStart_TrafficLamp_GoShadowG[2] = { 0x00, 0x12 };

// 0x8012ECE0
u8 ifStart_TrafficLamp_GoShadowB[2] = { 0x00, 0x2E };

// 0x8012ECE4
ifStartLamp ifStart_TrafficLamp_SpriteData[/* */] =
{
    { 123, -13, 0x00 },
    { 140, -11, 0x01 },
    { 166, -11, 0x01 },
    { 180, -15, 0x02 },
    { 107, -33, 0x03 },
    { 119,  21, 0x04 },
    { 132,  21, 0x04 },
    { 145,  21, 0x04 },
    { 162,  20, 0x05 },
    { 115, -26, 0x06 },
    { 131,  32, 0x07 },
    { 144,  32, 0x07 },
    { 157,  32, 0x07 },
    { 167,  23, 0x08 }
};

// 0x8012ED40
intptr_t ifStart_TrafficLamp_SpriteOffsets[/* */] =
{
    0x21950, 0x21A10, 0x21BA8, 
    0x23A28, 0x24620, 0x25290,
    0x22128, 0x22588, 0x22F18
};

// 0x8012ED64 - Announcer text: "GO!"
ifACharacter ifAnnounce_Go_SpriteData[/* */] =
{
    {  82, 93, 0x4D78 },
    { 144, 93, 0xA730 },
    { 214, 93, 0xC370 }
};

// 0x8012ED7C
ifACharacter ifAnnounce_SuddenDeath_SpriteData[/* */] =
{
    {  74,  67, 0x57F0 },
    { 102,  67, 0x60D8 },
    { 132,  67, 0x1268 },
    { 163,  67, 0x1268 },
    { 193,  67, 0x1628 },
    { 217,  67, 0x3E88 },
    {  83, 113, 0x1268 },
    { 113, 113, 0x1628 },
    { 135, 113, 0x05E0 },
    { 165, 113, 0x5BD0 },
    { 192, 113, 0x2408 },
    { 227, 113, 0x7D98 }
};

// 0x8012EDDC
u8 ifAnnounce_SuddenDeath_SpriteColors[/* */] = { 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00 };

// 0x8012EDE4
ifACharacter ifAnnounce_TimeUp_SpriteData[/* */] =
{
    {  45, 95, 0x0E4A8 },
    {  82, 95, 0x0F740 },
    { 100, 95, 0x127E0 },
    { 151, 95, 0x144E0 },
    { 195, 95, 0x16EB8 },
    { 238, 95, 0x18FE8 }
};

// 0x8012EE4C
u16 D_ovl2_8012EE4C[/* */] =
{
    0x0016,
    0x000F,
    0x003C
};

// 0x8012EE54
s32 ifTimer_Digits_SpritePositionsX[/* */] =
{
    232, 247, 273, 288
};

// 0x8012EE64 - Offset of twelve digits: numbers 0 through 9, % sign and H.P. text
intptr_t ifPlayer_Damage_DigitSpriteOffsets[/* */] =
{
    0x0148, 0x02D8, 0x0500, 0x0698,
    0x08C0, 0x0A58, 0x0C80, 0x0E18,
    0x1040, 0x1270, 0x1458, 0x15D8
};

// 0x8012EE94
intptr_t ifTimer_Digits_SpriteOffsets[/* */] = 
{
    0x0138, 0x0228, 
    0x03A8, 0x0528, 
    0x06A8, 0x0828, 
    0x09A8, 0x0B28, 
    0x0CA8, 0x0E28, 
    0x0F08, 0x1140,
    0x1238
};

// 0x8012EEC8
intptr_t ifPlayer_Stocks_DigitSpriteOffsets[/* */] =
{
    0x0068, 0x0118, 0x01C8, 0x0278,
    0x0328, 0x03D8, 0x0488, 0x0538,
    0x05E8, 0x0698, 0x0828
};

// 0x8012EEF8
Gfx ifPlayer_Magnify_WarnArrowsGfx[/* */] =
{
    gsSPClearGeometryMode(G_ZBUFFER),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPSetBlendColor(0x00, 0x00, 0x00, 0x08),
    gsDPSetPrimColor(0, 0, 0xFF, 0x00, 0x00, 0x80),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPEndDisplayList()
};

// 0x8012EF38 - Length of time units in order: minute tens, minute ones, second tens, second ones (in frames)
u16 ifTimer_Digits_UnitLengths[/* */] = { I_GETIME_TO_FRAMES(10, GETIME_MIN), I_GETIME_TO_FRAMES(1, GETIME_MIN), I_GETIME_TO_FRAMES(10, GETIME_SEC), I_GETIME_TO_FRAMES(1, GETIME_SEC) };

// 0x8012EF64
u8 ifPlayer_Magnify_CommonColorsR[/* */] = { 0xEF, 0x00, 0xFF, 0x00, 0xFF };

// 0x8012EF6C
u8 ifPlayer_Magnify_CommonColorsG[/* */] = { 0x0D, 0x00, 0xE1, 0xFF, 0xFF };

// 0x8012EF74
u8 ifPlayer_Magnify_CommonColorsB[/* */] = { 0x17, 0xFF, 0x00, 0x00, 0xFF };

// 0x8012EF7C
u8 ifPlayer_Tag_SpriteColorsR[/* */] = { 0xED, 0x4E, 0xFF, 0x4E, 0xAC };

// 0x8012EF84
u8 ifPlayer_Tag_SpriteColorsG[/* */] = { 0x36, 0x4E, 0xDF, 0xB9, 0xAC };

// 0x8012EF8C
u8 ifPlayer_Tag_SpriteColorsB[/* */] = { 0x36, 0xE9, 0x1A, 0x4E, 0xAC };

// 0x8012EF94
u8 ifPlayer_Tag_ShadowColorsR[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EF9C
u8 ifPlayer_Tag_ShadowColorsG[/* */] = { 0x00, 0x00, 0x00, 0x00, 0x00 };

// 0x8012EFA4
u8 ifPlayer_Tag_ShadowColorsB[/* */] = { 0x00, 0x00, 0x00, 0x00 ,0x00 };

// 0x8012EFAC
intptr_t ifPlayer_Tag_SpriteOffsets[/* */] =
{
    0x0258, 0x04F8, 
    0x0798, 0x0A38,
    0x0CD8, 0x0EB8
};

// 0x8010E690
void ifPlayer_Damage_InitInterface(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gPlayerDamageInterface); i++)
    {
        if (gPlayerDamageInterface[i].interface_gobj != NULL)
        {
            gPlayerDamageInterface[i].is_display_interface = TRUE;
        }
    }
}

// 0x8010E700 - Gets position of special character (% or H.P.) in damage display character array?
s32 ifPlayer_Damage_GetSpecialArrayID(s32 damage, u8 *digits)
{
    u8 *digits_start = digits;
    s32 digit_update = 1;

    if (damage >= 10)
    {
        do
        {
            digit_update *= 10;
        } 
        while ((damage / digit_update) >= 10);
    }
    do
    {
        *digits++ = damage / digit_update;

        damage %= digit_update;

        digit_update /= 10;

    } 
    while (digit_update != 0);

    return digits - digits_start;
}

// 0x8010E7D4
s32 ifPlayer_Damage_GetPercentArrayID(s32 damage, u8 *digits)
{
    s32 id = ifPlayer_Damage_GetSpecialArrayID(damage, digits);

    digits[id] = 0xA;

    return id + 1;
}

// 0x8010E808
s32 ifPlayer_Damage_GetHitPointsArrayID(s32 damage, u8 *digits)
{
    s32 id = ifPlayer_Damage_GetSpecialArrayID(damage, digits);

    digits[id] = 0xB;

    return id + 1;
}

// 0x8010E83C
s32 func_ovl2_8010E83C(s32 digit_count, u8 *arg1)
{
    s32 i, j = 0;

    for (i = 0; i < digit_count; i++)
    {
        j += ifPlayer_Damage_DigitWidths[arg1[i]];
    }
    return j;
}

// 0x8010E8F4
void ifPlayer_Damage_UpdateDigits(GObj *interface_gobj)
{
    s32 player;
    ifDCharacter *ifchar;
    SObj *sobj;
    s32 damage_scale;
    s32 start_damage;
    s32 char_count;
    s32 hitpoints;
    s32 digit_id;
    s32 color_id; // I don't know
    s32 pos_adjust_wait;
    s32 flash_reset_wait;
    s32 unused[2];
    f32 scale;
    u8 digits[4];
    s32 sprite_id;
    f32 offset;
    s32 damage;
    f32 pos_x;

    player = ifGetPlayer(interface_gobj);
    damage = start_damage = gBattleState->player_block[player].stock_damage_all;

    if (damage > 999)
    {
        damage = 999;
    }
    scale = gPlayerDamageInterface[player].scale;
    damage_scale = start_damage - gPlayerDamageInterface[player].damage;

    if (damage_scale == 0)
    {
        if (scale == 1.0F)
        {
            return;
        }
    }
    else if (damage_scale < 0)
    {
        scale = 1.0F;
    }
    else
    {
        gPlayerDamageInterface[player].pos_adjust_wait = 4;
        gPlayerDamageInterface[player].flash_reset_wait = 1;

        scale = (damage_scale / 300.0F) + 1.0F;
    }
    pos_adjust_wait = gPlayerDamageInterface[player].pos_adjust_wait;
    flash_reset_wait = gPlayerDamageInterface[player].flash_reset_wait;

    if (flash_reset_wait != 0)
    {
        color_id = GMMATCH_PLAYERS_MAX;
    }
    else color_id = player;

    if (gBattleState->player_block[player].character_kind == Ft_Kind_MasterHand)
    {
        hitpoints = 300 - damage;

        if (hitpoints < 0)
        {
            hitpoints = 0;
        }
        gPlayerDamageInterface[player].char_display_count = char_count = ifPlayer_Damage_GetHitPointsArrayID(hitpoints, digits);
    }
    else gPlayerDamageInterface[player].char_display_count = char_count = ifPlayer_Damage_GetPercentArrayID(damage, digits);

    pos_x = (func_ovl2_8010E83C(char_count, digits) * scale * 0.5F);

    pos_x = gPlayerCommonInterface.ifplayers_pos_x[player] + pos_x;

    if ((scale > 1.0F) && (pos_adjust_wait == 0))
    {
        scale -= 0.05F;

        if (scale < 1.0F)
        {
            scale = 1.0F;
        }
    }
    digit_id = char_count - 1;

    sobj = SObjGetStruct(interface_gobj)->unk_sobj_0x8;

    while (sobj != NULL)
    {
        if (digit_id < 0)
        {
            sobj->sprite.attr |= SP_HIDDEN;
        }
        else
        {
            sprite_id = digits[digit_id];
            ifchar = sobj->sobj_user_data;

            ifchar->image_id = sprite_id;

            offset = ifPlayer_Damage_DigitWidths[sprite_id] * scale;

            ifchar->pos.x = (pos_x - (offset * 0.5F));
            ifchar->pos.y = gPlayerCommonInterface.ifplayers_pos_y;

            pos_x -= offset;

            sobj->sprite.attr &= ~SP_HIDDEN;
        }
        sobj = sobj->unk_sobj_0x8;

        digit_id--;
    }
    if (pos_adjust_wait > 0)
    {
        pos_adjust_wait--;
    }
    if (flash_reset_wait > 0)
    {
        flash_reset_wait--;
    }
    gPlayerDamageInterface[player].damage = start_damage;
    gPlayerDamageInterface[player].scale = scale;
    gPlayerDamageInterface[player].color_id = color_id;

    gPlayerDamageInterface[player].pos_adjust_wait = pos_adjust_wait;
    gPlayerDamageInterface[player].flash_reset_wait = flash_reset_wait;
}

// 0x8010EC50
void ifPlayer_Damage_UpdateAnim(GObj *interface_gobj)
{
    s32 player;
    s32 char_id;
    s32 random;
    s32 modulo;
    s32 i, j;
    ifDCharacter *ifchar;
    SObj *sobj;

    player = ifGetPlayer(interface_gobj);

    if (gPlayerDamageInterface[player].break_anim_frame < 0x13)
    {
        modulo = gPlayerDamageInterface[player].break_anim_frame / 6;

        if (!(gPlayerDamageInterface[player].break_anim_frame - modulo * 6))
        {
            char_id = gPlayerDamageInterface[player].char_display_count - modulo;

            if (char_id > 0)
            {
                random = lbRandom_GetIntRange(char_id);

                for (i = j = 0; i < gPlayerDamageInterface[player].char_display_count; i++)
                {
                    if (gPlayerDamageInterface[player].chars[i].is_lock_movement == FALSE)
                    {
                        if (j == random)
                        {
                            break;
                        }
                        else j++;
                    }
                }
                gPlayerDamageInterface[player].chars[i].is_lock_movement = TRUE;
            }
        }
        gPlayerDamageInterface[player].break_anim_frame++;
    }
    sobj = SObjGetStruct(interface_gobj)->unk_sobj_0x8;

    while (sobj != NULL)
    {
        if (!(sobj->sprite.attr & SP_HIDDEN))
        {
            ifchar = sobj->sobj_user_data;

            if (ifchar->is_lock_movement != FALSE)
            {
                ifchar->vel.y++;

                ifchar->pos.x += ifchar->vel.x;
                ifchar->pos.y += ifchar->vel.y;
            }
        }
        sobj = sobj->unk_sobj_0x8;
    }
}

// 0x8010EE18
void func_ovl2_8010EE18(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);

    if (gBattleState->player_block[player].stock_count == -1)
    {
        if (gPlayerDamageInterface[player].dead_stopupdate_wait != 0)
        {
            if (gPlayerDamageInterface[player].is_update_anim != FALSE)
            {
                ifPlayer_Damage_UpdateAnim(interface_gobj);
            }
            gPlayerDamageInterface[player].dead_stopupdate_wait--;
        }
    }
    else if (gPlayerDamageInterface[player].is_update_anim != FALSE)
    {
        ifPlayer_Damage_UpdateAnim(interface_gobj);
    }
    else ifPlayer_Damage_UpdateDigits(interface_gobj);
}

// 0x8010EEFC
void func_ovl2_8010EEFC(GObj *interface_gobj)
{
    f32 pos_x;
    f32 scale;
    f32 pos_y;
    f32 damage_scale;
    s32 player;
    s32 color_id;
    u8 color_r;
    u8 color_g;
    u8 color_b;
    SObj *sobj, *sub_sobj;
    ifDCharacter *ifchar;

    sobj = SObjGetStruct(interface_gobj);

    func_ovl0_800CC118(gDisplayListHead, sobj);
    func_ovl0_800CC818(gDisplayListHead, sobj);

    func_ovl0_800CCED8(&sobj->sprite);

    player = ifGetPlayer(interface_gobj);

    if ((gPlayerDamageInterface[player].is_display_interface != FALSE) && ((gBattleState->player_block[player].stock_count >= 0) || (gPlayerDamageInterface[player].dead_stopupdate_wait != 0)))
    {
        color_id = gPlayerDamageInterface[player].color_id;
        scale = gPlayerDamageInterface[player].scale;

        if (color_id == GMMATCH_PLAYERS_MAX)
        {
            color_r = ifPlayer_Damage_DigitColorsR[color_id];
            color_g = ifPlayer_Damage_DigitColorsG[color_id];
            color_b = ifPlayer_Damage_DigitColorsB[color_id];
        }
        else
        {
            damage_scale = 1.0F - (gPlayerDamageInterface[player].damage / 300.0F);

            if (damage_scale < 0.0F)
            {
                damage_scale = 0.0F;
            }
            color_r = (s32)((ifPlayer_Damage_DigitColorsR[color_id] - 0x64) * damage_scale) + 0x64;
            color_g = (s32)((ifPlayer_Damage_DigitColorsG[color_id] - 0x14) * damage_scale) + 0x14;
            color_b = (s32)((ifPlayer_Damage_DigitColorsB[color_id] - 0x14) * damage_scale) + 0x14;
        }
        sobj = sobj->unk_sobj_0x8;
        ifchar = sobj->sobj_user_data;

        sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[2] + (intptr_t)ifPlayer_Damage_DigitSpriteOffsets[ifchar->image_id]);

        sobj->pos.x = (ifchar->pos.x - (sobj->sprite.width * 0.5F * scale));
        sobj->pos.y = (ifchar->pos.y - (sobj->sprite.height * 0.5F * scale));

        sobj->sprite.scalex = scale;
        sobj->sprite.scaley = scale;

        sobj->sprite.red = color_r;
        sobj->sprite.green = color_g;
        sobj->sprite.blue = color_b;

        func_ovl0_800CC118(gDisplayListHead, sobj);

        if (color_id == GMMATCH_PLAYERS_MAX)
        {
            gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
        }
        func_ovl0_800CC818(gDisplayListHead, sobj);

        sobj = sobj->unk_sobj_0x8;

        while (sobj != NULL)
        {
            if (!(sobj->sprite.attr & SP_HIDDEN))
            {
                ifchar = sobj->sobj_user_data;

                sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[2] + (intptr_t)ifPlayer_Damage_DigitSpriteOffsets[ifchar->image_id]);

                pos_x = ifchar->pos.x - (sobj->sprite.width * 0.5F * scale);
                pos_y = ifchar->pos.y - (sobj->sprite.height * 0.5F * scale);

                if ((scale == 1.0F) && (gPlayerDamageInterface[player].is_update_anim == FALSE))
                {
                    sobj->pos.x = (s32)pos_x;
                    sobj->pos.y = (s32)pos_y;
                }
                else
                {
                    sobj->pos.x = pos_x;
                    sobj->pos.y = pos_y;
                }
                sobj->sprite.scalex = sobj->sprite.scaley = scale;

                func_ovl0_800CC818(gDisplayListHead, sobj);
            }
            sobj = sobj->unk_sobj_0x8;
        }
        func_ovl0_800CCEAC();
    }
}

// 0x8010F334
void func_ovl2_8010F334(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(ifPlayer_Damage_DigitSpriteOffsets); i++)
    {
        ((Sprite*) ((uintptr_t)gCommonSpriteFiles[2] + (intptr_t)ifPlayer_Damage_DigitSpriteOffsets[i]))->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8010F3A0
void func_ovl2_8010F3A0(void)
{
    gPlayerCommonInterface.ifplayers_pos_x = ifPlayer_Damage_PositionOffsetsX;
    gPlayerCommonInterface.ifplayers_pos_y = 0xD2;
}

// 0x8010F3C0
void func_ovl2_8010F3C0(void)
{
    ftStruct *fp;
    ftSprites *ft_sprites;
    GObj *interface_gobj;
    SObj *sobj;
    s32 player;
    s32 emblem;

    func_ovl2_8010F334();

    for (player = 0; player < ARRAY_COUNT(gPlayerDamageInterface); player++)
    {
        if (gBattleState->player_block[player].player_kind == 2)
        {
            gPlayerDamageInterface[player].interface_gobj = NULL;
        }
        else
        {
            interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

            gPlayerDamageInterface[player].interface_gobj = interface_gobj;

            func_80009DF4(interface_gobj, func_ovl2_8010EEFC, 0x17, 0x80000000U, -1);

            fp = ftGetStruct(gBattleState->player_block[player].fighter_gobj);

            ft_sprites = fp->attributes->sprites;

            if ((ft_sprites != NULL) && (ft_sprites->emblem != NULL))
            {
                sobj = func_ovl0_800CCFDC(interface_gobj, ft_sprites->emblem);

                sobj->pos.x = (s32)(((f32)gPlayerCommonInterface.ifplayers_pos_x[player] - ((f32)sobj->sprite.width  * ifPlayer_Damage_EmblemScales[player] * 0.5F)) + (f32)ifPlayer_Damage_EmblemOffsetsX[player]);
                sobj->pos.y = (s32)(((f32)gPlayerCommonInterface.ifplayers_pos_y         - ((f32)sobj->sprite.height * ifPlayer_Damage_EmblemScales[player] * 0.5F)) + (f32)ifPlayer_Damage_EmblemOffsetsY[player]);

                sobj->sprite.scalex = sobj->sprite.scaley = ifPlayer_Damage_EmblemScales[player];

                emblem = gBattleState->player_block[player].team_color_index;

                sobj->sprite.red = gGroundInfo->emblem_colors[emblem].r;
                sobj->sprite.green = gGroundInfo->emblem_colors[emblem].g;
                sobj->sprite.blue = gGroundInfo->emblem_colors[emblem].b;

                sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
            }
            else
            {
                func_80009614(interface_gobj, NULL)->sprite.attr = SP_HIDDEN;
            }
            func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[2] + (intptr_t)&D_NF_00000148)->sobj_user_data = &gPlayerDamageInterface[player].chars[0];
            func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[2] + (intptr_t)&D_NF_00000148)->sobj_user_data = &gPlayerDamageInterface[player].chars[1];
            func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[2] + (intptr_t)&D_NF_00000148)->sobj_user_data = &gPlayerDamageInterface[player].chars[2];
            func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[2] + (intptr_t)&D_NF_00000148)->sobj_user_data = &gPlayerDamageInterface[player].chars[3];

            // The above functions should all return SObj*

            gPlayerDamageInterface[player].damage = gBattleState->player_block[player].stock_damage_all;
            gPlayerDamageInterface[player].pos_adjust_wait = 0;
            gPlayerDamageInterface[player].flash_reset_wait = 0;
            gPlayerDamageInterface[player].scale = 1.04F;
            gPlayerDamageInterface[player].is_update_anim = FALSE;
            gPlayerDamageInterface[player].dead_stopupdate_wait = 180;
            gPlayerDamageInterface[player].is_display_interface = FALSE;

            interface_gobj->user_data = (void*)player; // Cast is probably redundant but I don't want any compilers screaming at me

            func_ovl2_8010EE18(interface_gobj);
            omAddGObjCommonProc(interface_gobj, func_ovl2_8010EE18, 1, 0);
        }
    }
}

// 0x8010F76C
void ifPlayer_Damage_StartBreakAnim(ftStruct *fp)
{
    s32 player = fp->player;
    s32 i;

    for (i = 0; i < gPlayerDamageInterface[player].char_display_count; i++)
    {
        gPlayerDamageInterface[player].chars[i].vel.x = (lbRandom_GetFloat() * 2) + (-1.0F);
        gPlayerDamageInterface[player].chars[i].vel.y = -10.0F;

        gPlayerDamageInterface[player].chars[i].is_lock_movement = FALSE;
    }
    gPlayerDamageInterface[player].break_anim_frame = 0;
    gPlayerDamageInterface[player].is_update_anim = TRUE;
}

// 0x8010F840
void ifPlayer_Damage_StopBreakAnim(ftStruct *fp)
{
    s32 player = fp->player;

    gPlayerDamageInterface[player].is_update_anim = FALSE;
    gPlayerDamageInterface[player].scale = 1.04F;
}

// 0x8010F878
void func_ovl2_8010F878(GObj *interface_gobj)
{
    s32 player;
    ftStruct *fp;
    s32 unused;
    s32 stock_count;
    s32 digit_count;
    SObj *gt_sobj;
    SObj *lt_sobj;
    s32 stock_order, digit_order;
    s32 trunc_pos_x;
    u8 digits[3];

    player = ifGetPlayer(interface_gobj);
    stock_count = gBattleState->player_block[player].stock_count;
    fp = ftGetStruct(gBattleState->player_block[player].fighter_gobj);

    if (stock_count >= 0)
    {
        stock_count++;

        if (stock_count != gPlayerStocksInterface[player])
        {
            if (TRUE)
            {
                // Bruh... well, at least it doesn't sound too unreasonable to have this here... I guess?
            }
            if (stock_count <= 6)
            {
                stock_order = 0;

                lt_sobj = SObjGetStruct(interface_gobj);

                while (lt_sobj != NULL)
                {
                    if (stock_order < stock_count)
                    {
                        lt_sobj->sprite = *fp->attributes->sprites->stock_spr;

                        lt_sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

                        lt_sobj->pos.x = ((gPlayerCommonInterface.ifplayers_pos_x[player] + ifPlayer_Stocks_IconOffsetsX[player] + (stock_order * 10)) - (lt_sobj->sprite.width * 0.5F));
                        lt_sobj->pos.y = ((gPlayerCommonInterface.ifplayers_pos_y - (s32)(lt_sobj->sprite.height * 0.5F)) - 20);

                        lt_sobj->sprite.attr &= ~SP_HIDDEN;
                    }
                    else lt_sobj->sprite.attr |= SP_HIDDEN;

                    lt_sobj = lt_sobj->unk_sobj_0x8;

                    stock_order++;
                }
            }
            else
            {
                digit_count = ifPlayer_Damage_GetSpecialArrayID(stock_count, digits);

                trunc_pos_x = gPlayerCommonInterface.ifplayers_pos_x[player] + ifPlayer_Stocks_DigitOffsetsX[player];

                gt_sobj = SObjGetStruct(interface_gobj);

                gt_sobj->sprite = *fp->attributes->sprites->stock_spr;

                gt_sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

                gt_sobj->pos.x = ((trunc_pos_x - 22) - (gt_sobj->sprite.width * 0.5F));
                gt_sobj->pos.y = ((gPlayerCommonInterface.ifplayers_pos_y - (s32)(gt_sobj->sprite.height * 0.5F)) - 20);

                gt_sobj->sprite.attr &= ~SP_HIDDEN;

                gt_sobj = gt_sobj->unk_sobj_0x8;

                gt_sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[4] + (intptr_t)ifPlayer_Stocks_DigitSpriteOffsets[10]);

                gt_sobj->pos.x = ((trunc_pos_x + -10.5F) - (gt_sobj->sprite.width * 0.5F));
                gt_sobj->pos.y = ((gPlayerCommonInterface.ifplayers_pos_y - 20) - (gt_sobj->sprite.height * 0.5F));

                gt_sobj->sprite.attr &= ~SP_HIDDEN;

                gt_sobj = gt_sobj->unk_sobj_0x8;

                digit_order = 0;

                while (gt_sobj != NULL)
                {
                    if (digit_order < digit_count)
                    {
                        gt_sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[4] + (intptr_t)ifPlayer_Stocks_DigitSpriteOffsets[digits[digit_order]]);

                        gt_sobj->pos.x = ((trunc_pos_x + (digit_order * 8)) - (gt_sobj->sprite.width * 0.5F));
                        gt_sobj->pos.y = ((gPlayerCommonInterface.ifplayers_pos_y - 20) - (gt_sobj->sprite.height * 0.5F));

                        gt_sobj->sprite.attr &= ~SP_HIDDEN;
                    }
                    else gt_sobj->sprite.attr |= SP_HIDDEN;

                    gt_sobj = gt_sobj->unk_sobj_0x8;

                    digit_order++;
                }
            }
            gPlayerStocksInterface[player] = stock_count;
        }
        func_ovl0_800CCF00(interface_gobj);
    }
}

// 0x8010FD2C
void func_ovl2_8010FD2C(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(ifPlayer_Stocks_DigitSpriteOffsets); i++)
    {
        ((Sprite*) ((uintptr_t)gCommonSpriteFiles[4] + (intptr_t)ifPlayer_Stocks_DigitSpriteOffsets[i]))->attr = SP_TEXSHUF | SP_TRANSPARENT;
    }
}

// 0x8010FDD4
void func_ovl2_8010FDD4(s32 player)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[player].fighter_gobj);
    Sprite *sprite;

    if ((fp->attributes->sprites != NULL) && (fp->attributes->sprites->stock_spr != NULL))
    {
        GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);
        func_80009DF4(interface_gobj, func_ovl2_8010F878, 0x17, 0x80000000U, -1);

        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);
        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);
        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);
        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);
        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);
        func_ovl0_800CCFDC(interface_gobj, (uintptr_t)gCommonSpriteFiles[4] + (intptr_t)&D_NF_00000068);

        gPlayerStocksInterface[player] = S8_MAX;

        sprite = fp->attributes->sprites->stock_spr;
        sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

        interface_gobj->user_data = (void*)player;
    }
}

// 0x8010FF24
void func_ovl2_8010FF24(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);
    s32 stocks = gBattleState->player_block[player].stock_count;

    if (stocks != -1)
    {
        func_ovl0_800CCF00();
    }
}

// 0x8010FF78
void func_ovl2_8010FF78(s32 player, s32 lut_id, ftAttributes *attributes)
{
    SObjGetStruct(gPlayerStocksGObj[player])->sprite.LUT = attributes->sprites->stock_lut[lut_id];
}

// 0x8010FFA8
void func_ovl2_8010FFA8(s32 player)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[player].fighter_gobj);
    GObj *interface_gobj;
    SObj *sobj;

    if ((fp->attributes->sprites != NULL) && (fp->attributes->sprites->stock_spr != NULL))
    {
        gPlayerStocksGObj[player] = interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

        func_80009DF4(interface_gobj, func_ovl2_8010FF24, 0x17, 0x80000000U, -1);

        sobj = func_ovl0_800CCFDC(interface_gobj, fp->attributes->sprites->stock_spr);

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
        sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

        sobj->pos.x = ((gPlayerCommonInterface.ifplayers_pos_x[player] + ifPlayer_Stocks_IconOffsetsX[player]) - (s32)(sobj->sprite.width * 0.5F));
        sobj->pos.y = ((gPlayerCommonInterface.ifplayers_pos_y - (s32)(sobj->sprite.height * 0.5F)) - 20);

        interface_gobj->user_data = (void *)player;
    }
}

// 0x80110138
void func_ovl2_80110138(GObj *interface_gobj)
{
    f32 dist_x;
    f32 vel_x;
    f32 vel_y;
    SObj *sobj;
    ifPlayerSteal *s_steal = &gPlayerStealInterface[ifGetPlayer(interface_gobj)];

    s_steal->anim_frames--;

    if (s_steal->anim_frames == 0)
    {
        func_ovl2_801039B4(gPlayerCommonInterface.ifplayers_pos_x[ifGetPlayer(interface_gobj)] + ifPlayer_Stocks_IconOffsetsX[ifGetPlayer(interface_gobj)], gPlayerCommonInterface.ifplayers_pos_y - 20);
        omEjectGObjCommon(interface_gobj);

        return;
    }
    sobj = SObjGetStruct(interface_gobj);

    dist_x = (s_steal->steal_pos_x - s_steal->target_pos_x);

    vel_x = (s_steal->anim_frames * dist_x) / 30.0F;

    if (vel_x < (dist_x * 0.5F))
    {
        vel_y = -(vel_x - (dist_x * 0.5F));
    }
    else vel_y = (vel_x - (dist_x * 0.5F));

    sobj->pos.x = (s_steal->target_pos_x + vel_x);
    sobj->pos.y = ((s_steal->steal_pos_y + ((15.0F / SQUARE(dist_x * 0.5F)) * vel_y * vel_y)) - 15.0F);
}

// 0x801102B0
void func_ovl2_801102B0(s32 thief, s32 stolen)
{
    ftStruct *fp = ftGetStruct(gBattleState->player_block[stolen].fighter_gobj);
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

    if (interface_gobj != NULL)
    {
        SObj *check_sobj, *sobj;

        func_80009DF4(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000U, -1);

        omAddGObjCommonProc(interface_gobj, func_ovl2_80110138, 1, 0);

        check_sobj = func_ovl0_800CCFDC(interface_gobj, fp->attributes->sprites->stock_spr);

        if (check_sobj == NULL)
        {
            omEjectGObjCommon(interface_gobj);

            return;
        }
        else
        {
            sobj = check_sobj;

            sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;
            sobj->sprite.LUT = fp->attributes->sprites->stock_lut[fp->costume];

            gPlayerStealInterface[thief].steal_pos_x = ((gPlayerCommonInterface.ifplayers_pos_x[stolen] + ifPlayer_Stocks_IconOffsetsX[stolen]) - (s32)(sobj->sprite.width * 0.5F));
            gPlayerStealInterface[thief].steal_pos_y = ((gPlayerCommonInterface.ifplayers_pos_y - (s32)(sobj->sprite.height * 0.5F)) - 20);

            gPlayerStealInterface[thief].target_pos_x = ((gPlayerCommonInterface.ifplayers_pos_x[thief] + ifPlayer_Stocks_IconOffsetsX[thief]) - (s32)(sobj->sprite.width * 0.5F));

            sobj->pos.x = gPlayerStealInterface[thief].steal_pos_x;
            sobj->pos.y = gPlayerStealInterface[thief].steal_pos_y;

            gPlayerStealInterface[thief].anim_frames = 30;

            interface_gobj->user_data = (void*)thief;

            func_ovl2_80103994(gPlayerCommonInterface.ifplayers_pos_x[stolen] + ifPlayer_Stocks_IconOffsetsX[stolen], gPlayerCommonInterface.ifplayers_pos_y - 20);
        }
    }
}

// 0x80110514
void func_ovl2_80110514(void)
{
    s32 player;

    func_ovl2_8010FD2C();

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (gBattleState->player_block[player].player_kind != Pl_Kind_None)
        {
            switch (gBattleState->player_block[player].is_permanent_stock)
            {
            case FALSE:
                func_ovl2_8010FDD4(player);
                break;

            case TRUE:
                func_ovl2_8010FFA8(player);
                break;
            }
        }
    }
}

// 0x801105CC - Get magnifying glass position / arrow point direction?
void func_ovl2_801105CC(f32 player_pos_x, f32 player_pos_y, Vec2f *magnify_pos)
{
    f32 left;
    f32 right;
    f32 up;
    f32 down;
    f32 bak_right;
    f32 bak_up;
    f32 diag_hz;
    f32 diag_vt;
    f32 div_xy;

    left = (-gCameraStruct.unk_0x38.x / 2) + (20 * gPlayerCommonInterface.ifmagnify_scale) + 5;
    bak_right = right = (+gCameraStruct.unk_0x38.x / 2) - (20 * gPlayerCommonInterface.ifmagnify_scale) - 5;
    bak_up = up = (+gCameraStruct.unk_0x38.y / 2) - (20 * gPlayerCommonInterface.ifmagnify_scale);
    down = (-gCameraStruct.unk_0x38.y / 2) + (20 * gPlayerCommonInterface.ifmagnify_scale);

    if (player_pos_x == 0.0F)
    {
        up = bak_up;

        if (player_pos_y > 0.0F)
        {
            magnify_pos->y = up;
        }
        else magnify_pos->y = down;

        magnify_pos->x = 0.0F;
    }
    else
    {
        div_xy = player_pos_y / player_pos_x;

        if (((up / right) < div_xy) || (-(up / right) > div_xy))
        {
            up = bak_up;

            if (player_pos_y > 0.0F)
            {
                magnify_pos->y = up;
            }
            else magnify_pos->y = down;

            diag_hz = (magnify_pos->y * player_pos_x) / player_pos_y;

            right = bak_right;

            if (diag_hz < left)
            {
                magnify_pos->x = left;
            }
            else if (diag_hz > right)
            {
                magnify_pos->x = right;
            }
            else magnify_pos->x = diag_hz;
        }
        else
        {
            right = bak_right;

            if (player_pos_x > 0.0F)
            {
                magnify_pos->x = right;
            }
            else magnify_pos->x = left;

            diag_vt = (magnify_pos->x * player_pos_y) / player_pos_x;

            up = bak_up;

            if (diag_vt < down)
            {
                magnify_pos->y = down;
            }
            else if (diag_vt > up)
            {
                magnify_pos->y = up;
            }
            else magnify_pos->y = diag_vt;
        }
    }
}

// 0x801107F0
void func_ovl2_801107F0(Gfx **display_list, s32 color_id, f32 arg2, f32 arg3)
{
    Gfx *dl = display_list[0];
    GfxColorAlpha *color;
    f32 temp_f0;
    s32 sp0;
    s32 var_a0;
    s32 var_t5;
    s32 var_v1;
    s32 temp_t0;
    s32 temp_t1;

    gDPPipeSync(dl++);

    gDPSetColorImage(dl++, G_IM_FMT_RGBA, G_IM_SIZ_16b, gCurrScreenWidth, gZBuffer);

    gDPSetRenderMode(dl++, G_RM_OPA_SURF, G_RM_OPA_SURF2);

    gDPSetCombineMode(dl++, G_CC_DECALRGBA, G_CC_DECALRGBA);

    gDPSetAlphaCompare(dl++, G_AC_NONE);

    gDPSetTexturePersp(dl++, G_TP_NONE);

    gSPClearGeometryMode(dl++, G_ZBUFFER);

    // This is a compound macro but I cannot find anything that would correspond to this
    gDPSetTextureImage(dl++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, (void*)((uintptr_t)gCommonSpriteFiles[0] + (intptr_t)&D_NF_000002C8));

    // NEEDS TO BE ALL ON THE SAME LINE OR IT DOESN'T MATCH
    gDPSetTile(dl++, G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD); gDPLoadSync(dl++); gDPLoadBlock(dl++, G_TX_LOADTILE, 0, 0, 127, 1024); gDPPipeSync(dl++);

    // SAME HERE
    gDPSetTile(dl++, G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD, G_TX_MIRROR | G_TX_WRAP, 4, G_TX_NOLOD); gDPSetTileSize(dl++, G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C);

    temp_f0 = (s32)((1024.0F / gPlayerCommonInterface.ifmagnify_scale) + 0.5F);

    var_t5 = arg2;
    sp0 = arg3;

    var_a0 = ((arg2 == var_t5) ? 0 : 1) + (s32)(arg2 + (32.0F * gPlayerCommonInterface.ifmagnify_scale));

    var_v1 = ((arg3 == sp0) ? 0 : 1) + (s32)(arg3 + (32.0F * gPlayerCommonInterface.ifmagnify_scale));

    if (var_t5 < gCameraStruct.scissor_ulx)
    {
        var_t5 = gCameraStruct.scissor_ulx;
    }
    else if (var_a0 >= gCameraStruct.scissor_lrx)
    {
        var_a0 = gCameraStruct.scissor_lrx - 1;
    }
    if (sp0 < gCameraStruct.scissor_uly)
    {
        sp0 = gCameraStruct.scissor_uly;
    }
    else if (var_v1 >= gCameraStruct.scissor_lry)
    {
        var_v1 = gCameraStruct.scissor_lry - 1;
    }
    temp_t0 = ((s32)((var_t5 - arg2) * temp_f0) + 16) >> 5;
    temp_t1 = ((s32)((sp0 - arg3) * temp_f0) + 16) >> 5;

    gSPTextureRectangle
    (
        dl++,
        var_t5 * 4, sp0 * 4, var_a0 * 4, var_v1 * 4,
        G_TX_RENDERTILE,
        temp_t0, temp_t1,
        temp_f0, temp_f0
    );

    gDPPipeSync(dl++);

    gDPSetColorImage(dl++, G_IM_FMT_RGBA, gPixelComponentSize, gCurrScreenWidth, 0x0F000000);

    gDPSetRenderMode(dl++, G_RM_AA_XLU_SURF, G_RM_AA_XLU_SURF2);

    gDPSetAlphaCompare(dl++, G_AC_THRESHOLD);

    gDPSetBlendColor(dl++, 0, 0, 0, 0x8);

    color = &gGroundInfo->fog_color;

    gDPSetPrimColor(dl++, 0, 0, color->r, color->g, color->b, 0xFF);

    gDPSetEnvColor(dl++, ifPlayer_Magnify_CommonColorsR[color_id], ifPlayer_Magnify_CommonColorsG[color_id], ifPlayer_Magnify_CommonColorsB[color_id], 0xFF);

    gDPSetCombineMode(dl++, G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA);

    gSPTextureRectangle
    (
        dl++,
        var_t5 * 4, sp0 * 4, var_a0 * 4, var_v1 * 4,
        G_TX_RENDERTILE,
        temp_t0, temp_t1,
        temp_f0, temp_f0
    );

    gDPPipeSync(dl++);

    gDPSetAlphaCompare(dl++, G_AC_NONE);

    gDPSetTexturePersp(dl++, G_TP_PERSP);

    gSPSetGeometryMode(dl++, G_ZBUFFER);

    display_list[0] = dl;
}

// 0x80110DD4
void func_ovl2_80110DD4(Gfx **display_list, ftStruct *fp)
{
    Gfx *dl;
    f32 magnify_x;
    f32 magnify_y;
    ifPlayerMagnify *ifmag;
    OMCamera *cam;
    f32 scale;
    s32 vsub0;
    s32 vsub1;
    s32 vadd0;
    s32 vadd1;

    if (gPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        ifmag = &gPlayerMagnifyInterface[fp->player];

        magnify_x = fp->ifpos_x;
        magnify_y = fp->ifpos_y;

        func_ovl2_801105CC(magnify_x, magnify_y, &ifmag->pos);

        magnify_x = ifmag->pos.x + gCameraStruct.unk_cmstruct_0x30;
        magnify_y = gCameraStruct.unk_cmstruct_0x34 - ifmag->pos.y;

        gSPMatrix(display_list[0]++, &OMCameraGetStruct(D_80046A58)->om_mtx[0]->unk08, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

        if (gPlayerCommonInterface.ifmagnify_mode != 1)
        {
            cam = OMCameraGetStruct(gCameraGObj);

            gSPViewport(display_list[0]++, &cam->viewport);

            gDPSetScissor(display_list[0]++, G_SC_NON_INTERLACE, gCameraStruct.scissor_ulx, gCameraStruct.scissor_uly, gCameraStruct.scissor_lrx, gCameraStruct.scissor_lry);
        }
        else gPlayerCommonInterface.ifmagnify_mode = 2;

        scale = (16.0F * gPlayerCommonInterface.ifmagnify_scale);

        func_ovl2_801107F0(display_list, ifmag->color_id, magnify_x - scale, magnify_y - scale);

        dl = display_list[0];

        scale = (18.0F * gPlayerCommonInterface.ifmagnify_scale);

        magnify_x -= (scale / 2);
        magnify_y -= (scale / 2);

        func_80007080(&ifmag->viewport, magnify_x, magnify_y, scale + magnify_x, scale + magnify_y);

        gSPViewport(dl++, &ifmag->viewport);

        vsub0 = (ifmag->viewport.vp.vtrans[0] / 4) - (ifmag->viewport.vp.vscale[0] / 4);
        vsub1 = (ifmag->viewport.vp.vtrans[1] / 4) - (ifmag->viewport.vp.vscale[1] / 4);
        vadd0 = (ifmag->viewport.vp.vtrans[0] / 4) + (ifmag->viewport.vp.vscale[0] / 4);
        vadd1 = (ifmag->viewport.vp.vtrans[1] / 4) + (ifmag->viewport.vp.vscale[1] / 4);

        if (vsub0 < gCameraStruct.scissor_ulx)
        {
            vsub0 = gCameraStruct.scissor_ulx;
        }
        if (vadd0 > gCameraStruct.scissor_lrx)
        {
            vadd0 = gCameraStruct.scissor_lrx;
        }
        if (vsub1 < gCameraStruct.scissor_uly)
        {
            vsub1 = gCameraStruct.scissor_uly;
        }
        else if (vadd1 > gCameraStruct.scissor_lry)
        {
            vadd1 = gCameraStruct.scissor_lry;
        }
        gDPSetScissor(dl++, G_SC_NON_INTERLACE, vsub0, vsub1, vadd0, vadd1);

        display_list[0] = dl;
    }
}

// 0x801111A0
void func_ovl2_801111A0(ftStruct *fp)
{
    GObj *interface_gobj;
    DObj *dobj;
    ifPlayerMagnify *ifmag;
    OMCamera *cam;

    if (gPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        ifmag = &gPlayerMagnifyInterface[fp->player];

        interface_gobj = ifmag->interface_gobj;

        dobj = DObjGetStruct(interface_gobj);

        dobj->translate.vec.f.x = ifmag->pos.x;
        dobj->translate.vec.f.y = ifmag->pos.y;

        dobj->rotate.vec.f.z = atan2f(fp->ifpos_y, fp->ifpos_x) - F_DEG_TO_RAD(90.0F);

        dobj->scale.vec.f.x = dobj->scale.vec.f.y = gPlayerCommonInterface.ifmagnify_scale * 0.5F;

        cam = OMCameraGetStruct(gCameraGObj);

        gSPViewport(gDisplayListHead[0]++, &cam->viewport);

        gDPSetScissor(gDisplayListHead[0]++, G_SC_NON_INTERLACE, gCameraStruct.scissor_ulx, gCameraStruct.scissor_uly, gCameraStruct.scissor_lrx, gCameraStruct.scissor_lry);

        gSPMatrix(gDisplayListHead[0]++, &OMCameraGetStruct(D_80046A58)->om_mtx[1]->unk08, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);

        gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);

        gDPPipeSync(gDisplayListHead[0]++);

        gDPSetRenderMode(gDisplayListHead[0]++, G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2);

        gDPSetAlphaCompare(gDisplayListHead[0]++, G_AC_NONE);

        gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, ifPlayer_Magnify_CommonColorsR[ifmag->color_id], ifPlayer_Magnify_CommonColorsG[ifmag->color_id], ifPlayer_Magnify_CommonColorsB[ifmag->color_id], 0xFF);

        func_80013E68(interface_gobj);
    }
}

// 0x80111440
void func_ovl2_80111440(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);
        GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xC, 0x80000000U);

        func_80008CC0(func_800092D0(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[0] + (intptr_t)&D_NF_00000030)), 0x1C, 0);

        gPlayerMagnifyInterface[fp->player].interface_gobj = interface_gobj;
        gPlayerMagnifyInterface[fp->player].color_id = gBattleState->player_block[fp->player].team_color_index;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gPlayerCommonInterface.is_ifmagnify_display = FALSE;
}

// 0x80111554
void func_ovl2_80111554(GObj *interface_gobj)
{
    if (gPlayerCommonInterface.unk_80131580_0xE & 1)
    {
        func_80014038(interface_gobj);
    }
}

// 0x80111588
void func_ovl2_80111588(GObj *interface_gobj)
{
    if (gPlayerCommonInterface.unk_80131580_0xE & 2)
    {
        func_80014038(interface_gobj);
    }
}

// 0x801115BC
void func_ovl2_801115BC(GObj *interface_gobj)
{
    func_8000BD8C(interface_gobj, (ATrack*) ((uintptr_t)gCommonSpriteFiles[0] + (intptr_t)&D_NF_00000270), 0.0F);
    func_8000DF34(interface_gobj);
}

// 0x801115FC
void func_ovl2_801115FC(GObj *interface_gobj)
{
    switch (gPlayerCommonInterface.unk_80131580_0xF)
    {
    case 0:
        break;

    case 1:
        func_ovl2_801115BC();

        // Fallthrough

    default:
        func_8000DF34(interface_gobj);
        break;
    }
}

// 0x80111640
void func_ovl2_80111640(GObj *interface_gobj)
{
    switch (gPlayerCommonInterface.unk_80131580_0x10)
    {
    case 0:
        break;

    case 1:
        func_ovl2_801115BC();

        // Fallthrough

    default:
        func_8000DF34(interface_gobj);
        break;
    }
}

// 0x80111684
GObj* func_ovl2_80111684(void (*proc0)(GObj*), void (*proc1)(GObj*))
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

    func_80009DF4(interface_gobj, proc0, 8, 0x80000000U, -1);
    func_8000F590(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[0] + (intptr_t)&D_NF_00000188), NULL, 0x1B, 0, 0);
    omAddGObjCommonProc(interface_gobj, proc1, 1, 5);

    return interface_gobj;
}

// 0x8011171C
void func_ovl2_8011171C(GObj *interface_gobj)
{
    s32 lr_right = FALSE;
    s32 lr_left = FALSE;

    if (gPlayerCommonInterface.is_ifmagnify_display != FALSE)
    {
        GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

        while (fighter_gobj != NULL)
        {
            ftStruct *fp = ftGetStruct(fighter_gobj);

            if (!(fp->x18E_flag_b2) && !(fp->x18E_flag_b1) && (fp->x18D_flag_b5))
            {
                if (ABSF(fp->ifpos_x) > ABSF(fp->ifpos_y))
                {
                    if (fp->ifpos_x < 0.0F)
                    {
                        lr_left = TRUE;
                    }
                    else lr_right = TRUE;
                }
            }
            fighter_gobj = fighter_gobj->group_gobj_next;
        }
        if (lr_left == FALSE)
        {
            gPlayerCommonInterface.unk_80131580_0xF = 0;
        }
        else if (gPlayerCommonInterface.unk_80131580_0xF == 0)
        {
            gPlayerCommonInterface.unk_80131580_0xF = 1;
        }
        else gPlayerCommonInterface.unk_80131580_0xF = 2;

        if (lr_right == FALSE)
        {
            gPlayerCommonInterface.unk_80131580_0x10 = 0;
        }
        else if (gPlayerCommonInterface.unk_80131580_0x10 == 0)
        {
            gPlayerCommonInterface.unk_80131580_0x10 = 1;
        }
        else gPlayerCommonInterface.unk_80131580_0x10 = 2;
    }
    if ((lr_left != FALSE) || (lr_right != FALSE))
    {
        if (gPlayerMagnifySoundWait == 0)
        {
            func_800269C0(alSound_SFX_Magnify);

            gPlayerMagnifySoundWait = 30;
        }
        gPlayerMagnifySoundWait--;
    }
    else gPlayerMagnifySoundWait = 0;
}

// 0x801118B4
void func_ovl2_801118B4(GObj *interface_gobj)
{
    gSPDisplayList(gDisplayListHead[0]++, &ifPlayer_Magnify_WarnArrowsGfx);
}

// 0x801118E4
void func_ovl2_801118E4(void)
{
    DObj *dobj;

    func_80009DF4(omMakeGObjCommon(omGObj_Kind_Interface, func_ovl2_8011171C, 0xB, 0x80000000U), func_ovl2_801118B4, 8, 0x80000000U, -1);

    dobj = DObjGetStruct(func_ovl2_80111684(func_ovl2_80111554, func_ovl2_801115FC));

    dobj->translate.vec.f.x = -134.0F;
    dobj->translate.vec.f.y = 0.0F;

    gPlayerCommonInterface.unk_80131580_0xF = 0;

    dobj = DObjGetStruct(func_ovl2_80111684(func_ovl2_80111588, func_ovl2_80111640));

    dobj->translate.vec.f.x = 134.0F;
    dobj->translate.vec.f.y = 0.0F;
    dobj->rotate.vec.f.z = F_DEG_TO_RAD(180.0F);

    gPlayerCommonInterface.unk_80131580_0x10 = 0;

    gPlayerMagnifySoundWait = 0;
}

// 0x801119AC
void func_ovl2_801119AC(f32 x, f32 y)
{
    if (ABSF(x) > ABSF(y))
    {
        if (x > 0.0F)
        {
            gPlayerCommonInterface.unk_80131580_0xE |= 2;
        }
        else gPlayerCommonInterface.unk_80131580_0xE |= 1;
    }
}

// 0x80111A3C
void func_ovl2_80111A3C(GObj *interface_gobj)
{
    s32 player = ifGetPlayer(interface_gobj);
    ftStruct *fp;
    f32 x;
    f32 y;
    Vec3f pos;

    fp = ftGetStruct(gBattleState->player_block[player].fighter_gobj);

    if (!(fp->x18E_flag_b4) && !(fp->is_playertag_hide))
    {
        if ((fp->playertag_wait == 1) || (OMCameraGetStruct(gCameraGObj)->view.tilt.z > 6000.0F))
        {
            pos = fp->joint[ftParts_Joint_TopN]->translate.vec.f;

            pos.y += fp->attributes->cam_zoom_default;

            func_ovl2_800EB924(OMCameraGetStruct(gCameraGObj), gCameraMatrix, &pos, &x, &y);

            if (func_ovl2_8010E5F4(x, y) != 0)
            {
                SObjGetStruct(interface_gobj)->pos.x = (s32) ((gCameraStruct.unk_cmstruct_0x30 + x) - (SObjGetStruct(interface_gobj)->sprite.width * 0.5F));
                SObjGetStruct(interface_gobj)->pos.y = (s32) ((gCameraStruct.unk_cmstruct_0x34 - y) - SObjGetStruct(interface_gobj)->sprite.height);

                func_ovl0_800CCF00(interface_gobj);
            }
        }
    }
}

// 0x80111BE4
void func_ovl2_80111BE4(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 player;
    u8 color_id;

    for (player = 0; player < ARRAY_COUNT(gBattleState->player_block); player++)
    {
        if (gBattleState->player_block[player].player_kind != Pl_Kind_None)
        {
            interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

            func_80009DF4(interface_gobj, func_ovl2_80111A3C, 0x17, 0x80000000U, -1);

            sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[6] + (intptr_t)ifPlayer_Tag_SpriteOffsets[gBattleState->player_block[player].tag_kind]));

            sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

            color_id = gBattleState->player_block[player].team_color_index;

            sobj->sprite.red   = ifPlayer_Tag_SpriteColorsR[color_id];
            sobj->sprite.green = ifPlayer_Tag_SpriteColorsG[color_id];
            sobj->sprite.blue  = ifPlayer_Tag_SpriteColorsB[color_id];

            sobj->sobj_color.r = ifPlayer_Tag_ShadowColorsR[color_id];
            sobj->sobj_color.g = ifPlayer_Tag_ShadowColorsG[color_id];
            sobj->sobj_color.b = ifPlayer_Tag_ShadowColorsB[color_id];

            interface_gobj->user_data = (void*)player;
        }
    }
}

// 0x80111D64
void func_ovl2_80111D64(GObj *interface_gobj)
{
    itStruct *ip = itGetStruct(interface_gobj); // So I'm guessing this copies the corresponding item's user_data? Its classifier is 0x3F8.
    SObj *sobj;
    f32 x;
    f32 y;
    Vec3f pos;

    if ((ip->is_allow_pickup) && (ip->indicator_timer >= 15))
    {
        sobj = SObjGetStruct(interface_gobj);

        pos = DObjGetStruct(ip->item_gobj)->translate.vec.f;

        pos.y += ip->coll_data.object_coll.top + 100.0F;

        func_ovl2_800EB924(OMCameraGetStruct(gCameraGObj), gCameraMatrix, &pos, &x, &y);

        if (func_ovl2_8010E5F4(x, y) != 0)
        {
            sobj->pos.x = (s32) ((gCameraStruct.unk_cmstruct_0x30 + x) - (sobj->sprite.width * 0.5F));
            sobj->pos.y = (s32) ((gCameraStruct.unk_cmstruct_0x34 - y) - sobj->sprite.height);

            func_ovl0_800CCF00(interface_gobj);
        }
    }
}

// 0x80111EC0
GObj* ifItem_PickupArrow_MakeInterface(itStruct *ip)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

    if (interface_gobj != NULL)
    {
        func_80009DF4(interface_gobj, func_ovl2_80111D64, 0x17, 0x80000000U, -1);

        if (func_ovl0_800CCFDC(interface_gobj, gItemArrowSprite) != NULL)
        {
            interface_gobj->user_data = ip; // Give it up for... the GObj with the most flexible user_data assignments ever?

            if ((gSceneData.scene_current == 0x36) && (gBattleState->game_status == gmMatch_GameStatus_Pause))
            {
                interface_gobj->obj_renderflags = 1;
            }
            return interface_gobj;
        }
        else omEjectGObjCommon(interface_gobj);
    }
    return NULL;
}

// 0x80111F80
void func_ovl2_80111F80(void)
{
    Sprite *sprite = gItemArrowSprite =

    (Sprite*) ((uintptr_t)rldm_get_file_with_external_heap((intptr_t)&D_NF_00000057, hal_alloc(rldm_bytes_needed_to_load((intptr_t)&D_NF_00000057), 0x10)) + (intptr_t)&D_NF_00000050);

    sprite->attr = SP_TEXSHUF | SP_TRANSPARENT;

    sprite->red   = 0xFF;
    sprite->green = 0x00;
    sprite->blue  = 0x00;
}

// 0x80111FF0
void func_ovl2_80111FF0(GObj *interface_gobj)
{
    stop_current_process(0x3C);

    omEjectGObjCommon(NULL);

    stop_current_process(1);
}

// 0x80112024
void func_ovl2_80112024(GObj *interface_gobj, s32 file_id, ifACharacter *character, s32 sprite_count)
{
    SObj *sobj;
    void *sprite_head = gCommonSpriteFiles[file_id];
    s32 i;

    for (i = 0; i < sprite_count; i++)
    {
        sobj = func_ovl0_800CCFDC(interface_gobj, (Sprite*) ((uintptr_t)sprite_head + (intptr_t)character[i].offset));

        sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

        sobj->pos.x = character[i].pos.x;
        sobj->pos.y = character[i].pos.y;
    }
}

// 0x801120D4
void func_ovl2_801120D4(void)
{

    void *sprite_head = gCommonSpriteFiles[1];
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);
    s32 i;

    func_80009DF4(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000U, -1);

    omAddGObjCommonProc(interface_gobj, func_ovl2_80111FF0, 0, 5);

    for (i = 0; i < ARRAY_COUNT(ifAnnounce_Go_SpriteData); i++)
    {
        SObj *sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)sprite_head + (intptr_t)ifAnnounce_Go_SpriteData[i].offset));

        sobj->sprite.attr = 0x1000 | SP_TEXSHUF; // 0x1000 doesn't exist in base sp.h though?

        sobj->pos.x = ifAnnounce_Go_SpriteData[i].pos.x;
        sobj->pos.y = ifAnnounce_Go_SpriteData[i].pos.y;
    }
}

// 0x801121C4
void func_ovl2_801121C4(void)
{
    GObj *fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftStruct *fp = ftGetStruct(fighter_gobj);

        func_ovl2_800E7F68(fighter_gobj);

        fp->camera_mode = 0;

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    gBattleState->game_status = gmMatch_GameStatus_Go;

    gPlayerCommonInterface.is_ifmagnify_display = TRUE;
}

// 0x80112234
SObj* func_ovl2_80112234(GObj *interface_gobj, s32 index)
{
    SObj *sobj;
    s32 color_id;

    color_id = ifStart_TrafficLamp_SpriteData[index].color_id;

    sobj = func_ovl0_800CCFDC(interface_gobj, (Sprite*) ((uintptr_t)gCommonSpriteFiles[1] + (intptr_t)ifStart_TrafficLamp_SpriteOffsets[color_id]));

    sobj->sprite.attr = 0x1000 | SP_TEXSHUF;

    sobj->pos.x = ifStart_TrafficLamp_SpriteData[index].pos.x;
    sobj->pos.y = ifStart_TrafficLamp_SpriteData[index].pos.y;

    sobj->sprite.red   = ifStart_TrafficLamp_SpriteColorsR[color_id];
    sobj->sprite.green = ifStart_TrafficLamp_SpriteColorsG[color_id];
    sobj->sprite.blue  = ifStart_TrafficLamp_SpriteColorsB[color_id];

    return sobj;
}

// 0x801122F4
void func_ovl2_801122F4(GObj *interface_gobj)
{
    SObj *sobj;
    SObj *other_sobj;
    SObj *new_sobj;
    s32 timer;
    f32 rscale;
    f32 scale;
    s32 main_status;
    s32 lamp_status;
    SObj *child_sobj;

    for (timer = 0; timer < 60; timer++)
    {
        sobj = SObjGetStruct(interface_gobj);

        while (sobj != NULL)
        {
            sobj->pos.y += 0.8833333F;

            sobj = sobj->unk_sobj_0x8;
        }
        stop_current_process(1);
    }
    sobj = (SObj*)interface_gobj->user_data;

    main_status = lamp_status = -1;

    child_sobj = sobj->unk_sobj_0x8->unk_sobj_0x8;

    while (TRUE)
    {
        switch (timer)
        {
        case 120:
            main_status = lamp_status = 6;

            func_800269C0(0x1D6);
            break;

        case 180:
            main_status = lamp_status = 7;

            func_800269C0(0x1D5);
            break;

        case 240:
            main_status = lamp_status = 8;

            func_800269C0(0x1D3);
            break;

        case 300:
            func_ovl2_801120D4();
            func_ovl2_801121C4();
            ifPlayer_Damage_InitInterface();

            main_status = lamp_status = 9;

            func_800269C0(0x1EA);

            break;

        case 360:
            goto finish;
        }
        if (lamp_status != -1)
        {
            if (main_status != -1)
            {
                func_800096EC(sobj->unk_sobj_0x8);
                func_800096EC(sobj);

                sobj = func_ovl2_80112234(interface_gobj, lamp_status);

                sobj->sprite.scalex = sobj->sprite.scaley = scale = 3.0F;

                new_sobj = func_ovl2_80112234(interface_gobj, lamp_status + 5);

                if (lamp_status == 9)
                {
                    other_sobj = child_sobj->unk_sobj_0xC;

                    child_sobj->sprite.red = ifStart_TrafficLamp_GoBacklightR[1];
                    child_sobj->sprite.green = ifStart_TrafficLamp_GoBacklightG[1];
                    child_sobj->sprite.blue = ifStart_TrafficLamp_GoBacklightB[1];

                    child_sobj->sobj_color.r = ifStart_TrafficLamp_GoShadowR[1];
                    child_sobj->sobj_color.g = ifStart_TrafficLamp_GoShadowG[1];
                    child_sobj->sobj_color.b = ifStart_TrafficLamp_GoShadowB[1];

                    if (other_sobj != NULL)
                    {
                        other_sobj->unk_sobj_0x8 = child_sobj->unk_sobj_0x8;
                    }
                    other_sobj = child_sobj->unk_sobj_0x8;

                    if (other_sobj != NULL)
                    {
                        other_sobj->unk_sobj_0xC = child_sobj->unk_sobj_0xC;
                    }
                    new_sobj->unk_sobj_0x8 = child_sobj;

                    child_sobj->unk_sobj_0xC = new_sobj;
                    child_sobj->unk_sobj_0x8 = NULL;
                }
            }
            if (scale != 1.0F)
            {
                scale -= 0.2F;

                if (scale < 1.0F)
                {
                    scale = 1;
                }
                sobj->sprite.scalex = sobj->sprite.scaley = scale;

                rscale = (scale - 1.0F) * 0.5F;

                sobj->pos.x = ifStart_TrafficLamp_SpriteData[lamp_status].pos.x - (rscale * sobj->sprite.width);
                sobj->pos.y = ifStart_TrafficLamp_SpriteData[lamp_status].pos.y - (rscale * sobj->sprite.height);
            }
        }
        timer++;

        stop_current_process(1);

        main_status = -1;
    }
finish:
    for (timer = timer; timer < 420; timer++)
    {
        sobj = SObjGetStruct(interface_gobj);

        while (sobj != NULL)
        {
            sobj->pos.y += (-0.8833333F);

            sobj = sobj->unk_sobj_0x8;
        }
        stop_current_process(1);
    }
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x80112668
void func_ovl2_80112668(void)
{
    GObj *interface_gobj;
    SObj *sobj;
    s32 i;

    interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000);

    func_80009DF4(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000, -1);

    omAddGObjCommonProc(interface_gobj, func_ovl2_801122F4, 0, 5);

    sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[1] + (intptr_t)&D_NF_00020990));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 103.0F;
    sobj->pos.y = -57.0F;

    sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[1] + (intptr_t)&D_NF_00021760));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 111.0F;
    sobj->pos.y = -23.0F;

    for (i = 0; i < 6; i++)
    {
        sobj = func_ovl2_80112234(interface_gobj, i);
    }
    interface_gobj->user_data = sobj;

    func_ovl2_80112234(interface_gobj, 10);

    sobj = func_ovl0_800CCFDC(interface_gobj, (void*) ((uintptr_t)gCommonSpriteFiles[1] + (intptr_t)&D_NF_00021878));

    sobj->sprite.attr = SP_TEXSHUF | SP_TRANSPARENT;

    sobj->pos.x = 182.0F;
    sobj->pos.y = -11.0F;

    sobj->sprite.red   = ifStart_TrafficLamp_GoBacklightR[0];
    sobj->sprite.green = ifStart_TrafficLamp_GoBacklightG[0];
    sobj->sprite.blue  = ifStart_TrafficLamp_GoBacklightB[0];
    sobj->sobj_color.r = ifStart_TrafficLamp_GoShadowR[0];
    sobj->sobj_color.g = ifStart_TrafficLamp_GoShadowG[0];
    sobj->sobj_color.b = ifStart_TrafficLamp_GoShadowB[0];
}

// 0x80112814
GObj* func_ovl2_80112814(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

    func_80009DF4(interface_gobj, func_ovl0_800CCF00, 0x17, 0x80000000U, -1);

    func_ovl2_80112024(interface_gobj, 1, ifAnnounce_TimeUp_SpriteData, ARRAY_COUNT(ifAnnounce_TimeUp_SpriteData));

    return interface_gobj;
}

// 0x80112880
void func_ovl2_80112880(GObj *interface_gobj)
{
    GObj *fighter_gobj;
    s32 index = (s32)interface_gobj->user_data;
    s32 process_id = D_ovl2_8012EE4C[index];
    s32 count;

    if (index == 1)
    {
        stop_current_process(0x5A);
    }
    count = gBattleState->pl_count + gBattleState->cp_count;

    if (count < 3)
    {
        stop_current_process(process_id);
    }
    fighter_gobj = gOMObjCommonLinks[gOMObjLinkIndexFighter];

    while (fighter_gobj != NULL)
    {
        ftCommon_Appear_SetStatus(fighter_gobj);

        if (index == 2)
        {
            stop_current_process(0x1E);

            func_ovl2_8010CF44(fighter_gobj, 0.0F, 0.0F, ftGetStruct(fighter_gobj)->attributes->vs_pause_zoom, 0.1F, 28.0F);
            stop_current_process(process_id - 0x1E);
        }
        else stop_current_process(process_id);

        fighter_gobj = fighter_gobj->group_gobj_next;
    }
    if (index == 2)
    {
        stop_current_process(0x1E);
        func_ovl2_8010CF20();
    }
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x801129DC
void func_ovl2_801129DC(s32 index)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xA, 0x80000000U);

    omAddGObjCommonProc(interface_gobj, func_ovl2_80112880, 0, 5);

    interface_gobj->user_data = (void*)index;
}

// 0x80112A34
void func_ovl2_80112A34(s32 arg0)
{
    stop_current_process(0x5A);
    func_ovl2_80112668();
    func_ovl2_801129DC(lbRandom_GetIntRange(3));
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x80112A80
void func_ovl2_80112A80(void)
{
    omAddGObjCommonProc(omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xA, 0x80000000U), func_ovl2_80112A34, 0, 5);

    gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 0x80112AD0
void func_ovl2_80112AD0(s32 arg0)
{
    stop_current_process(0x5A);
    func_ovl2_801120D4();
    ifPlayer_Damage_InitInterface();
    func_ovl2_801121C4();
    func_800269C0(0x1EA);
    omEjectGObjCommon(NULL);
    stop_current_process(1);
}

// 0x80112B24
void func_ovl2_80112B24(GObj *interface_gobj, u8 *colors)
{
    SObj *sobj = SObjGetStruct(interface_gobj);

    while (sobj != NULL)
    {
        sobj->sprite.red   = colors[0];
        sobj->sprite.green = colors[1];
        sobj->sprite.blue  = colors[2];
        sobj->sobj_color.r = colors[3];
        sobj->sobj_color.g = colors[4];
        sobj->sobj_color.b = colors[5];

        sobj = sobj->unk_sobj_0x8;
    }
}

// 0x80112B74
void func_ovl2_80112B74(void)
{
    GObj *interface_gobj = omMakeGObjCommon(omGObj_Kind_Interface, NULL, 0xB, 0x80000000U);

    func_80009DF4(interface_gobj, &func_ovl0_800CCF00, 0x17, 0x80000000U, -1);
    omAddGObjCommonProc(interface_gobj, func_ovl2_80112AD0, 0, 5);
    func_ovl2_80112024(interface_gobj, 7, ifAnnounce_SuddenDeath_SpriteData, 0xC);
    func_ovl2_80112B24(interface_gobj, ifAnnounce_SuddenDeath_SpriteColors);
    func_800269C0(0x202U);

    gBattleState->game_status = gmMatch_GameStatus_Wait;
}

// 0x80112C18
void func_ovl2_80112C18(GObj *interface_gobj)
{
    s32 digit;
    s32 i;
    s32 time;
    SObj *sobj;

    sobj = SObjGetStruct(interface_gobj);

    if (gBattleState->match_time_remain == 0)
    {
        sobj = sobj->unk_sobj_0x8->unk_sobj_0x8->unk_sobj_0x8;

        sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)ifTimer_Digits_SpriteOffsets[0]);

        sobj->pos.x = (s32)(ifTimer_Digits_SpritePositionsX[3] - (sobj->sprite.width * 0.5F));
        sobj->pos.y = (s32)(30.0F - (sobj->sprite.height * 0.5F));
    }
    else
    {
        if (gBattleState->match_time_remain == gTimerLimitInterface)
        {
            time = gBattleState->match_time_remain;
        }
        else time = gBattleState->match_time_remain + 59;

        for (i = 0; i < ARRAY_COUNT(gTimerDigitsInterface); i++, sobj = sobj->unk_sobj_0x8)
        {
            digit = time / ifTimer_Digits_UnitLengths[i];

            time -= (digit * ifTimer_Digits_UnitLengths[i]);

            if (gTimerDigitsInterface[i] != digit)
            {
                sobj->sprite = *(Sprite*) ((uintptr_t)gCommonSpriteFiles[3] + (intptr_t)ifTimer_Digits_SpriteOffsets[digit]);

                sobj->pos.x = (s32)(ifTimer_Digits_SpritePositionsX[i] - (sobj->sprite.width * 0.5F));
                sobj->pos.y = (s32)(30.0F - (sobj->sprite.height * 0.5F));

                gTimerDigitsInterface[i] = digit;
            }
        }
    }
    func_ovl0_800CCF00(interface_gobj);
}