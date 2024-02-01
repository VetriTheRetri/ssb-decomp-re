#include <sys/develop.h>
#include <gm/battle.h>
#include <css-vs.h>

extern mnCharSelPanelVS gPanelVS[GMMATCH_PLAYERS_MAX]; // D_ovl26_8013BA88[GMMATCH_PLAYERS_MAX];
extern sb32 gIsTeamBattle; // D_ovl26_8013BDA8

// 0x80131B20
void func_ovl26_80131B20(Gfx **display_list)
{
    gSPSetGeometryMode(display_list[0]++, G_LIGHTING);
    ftRender_Lights_DisplayLightReflect(display_list, func_ovl1_8039051C(), func_ovl1_80390528());
    return;
}

// 0x80131B78
s32 mnVS_GetShade(s32 arg0)
{
    sb32 used_shade[GMMATCH_PLAYERS_MAX];
    s32 i;

    if (gIsTeamBattle == FALSE)
    {
        return 0;
    }

    for (i = 0; i < ARRAY_COUNT(used_shade); i++)
    {
        used_shade[i] = 0;
    }

    if (gIsTeamBattle == TRUE)
    {
        for (i = 0; i < ARRAY_COUNT(gPanelVS); i++)
        {
            if (arg0 != i)
            {
                if
                (
                    gPanelVS[arg0].char_id == gPanelVS[i].char_id &&
                    gPanelVS[arg0].team == gPanelVS[i].team
                )
                {
                    used_shade[gPanelVS[i].shade] = TRUE;
                }
            }
        }
        for(i = 0; i < ARRAY_COUNT(used_shade); i++)
        {
            if(used_shade[i] == FALSE)
            {
                return i;
            }
        }
    }
    // WARNING: Undefined behavior. If D_ovl26_8013BDA8 is FALSE, returned value is indeterminate.
}

// 0x80131C74

// 0x80131DC4

// 0x80131ED8

// 0x80131EE4

// 0x80131F54

// 0x80131FB0

// 0x80132044

// 0x80132118

// 0x80132168

// 0x801321B8

// 0x80132278

// 0x80132520

// 0x801326DC

// 0x8013271C

// 0x80132824

// 0x80132878

// 0x801328AC

// 0x80132904

// 0x8013295C

// 0x80132A14

// 0x80132BF4

// 0x80132C6C

// 0x80132D1C

// 0x80132DBC

// 0x80132E5C

// 0x80132EFC

// 0x80132F9C

// 0x8013303C

// 0x801330DC

// 0x8013317C

// 0x801331C8

// 0x80133214

// 0x80133260

// 0x801332AC

// 0x80133378

// 0x801334A8

// 0x8013365C

// 0x80133A1C
// # Maybe start of new file
// # Maybe start of new file
// # Maybe start of new file

// 0x80133ABC

// 0x80133B04

// 0x80133BB0

// 0x80133E28

// 0x80133FAC

// 0x80134094

// 0x80134198

// 0x80134284

// 0x801343B0

// 0x80134608

// 0x80134674

// 0x8013473C

// 0x8013487C

// 0x801348EC
// 0x8013490C

// 0x80134918

// 0x80134924

// 0x80134930

// 0x8013493C

// 0x8013494C

// 0x80134A8C

// 0x80134C64

// 0x80134D54

// 0x80134F64

// 0x8013502C

// 0x801350FC

// 0x80135270

// 0x80135334

// 0x80135554

// 0x80135634

// 0x801357A4

// 0x801358F8

// 0x801359D8

// 0x80135AB8

// 0x80135B98

// 0x80135C84

// 0x80136038

// 0x80136128

// 0x801361F8

// 0x80136300

// 0x80136388

// 0x801363DC
// # Maybe start of new file

// 0x8013647C

// 0x801365D0

// 0x8013676C

// 0x801367F0

// 0x801368C4

// 0x80136910

// 0x80136998

// 0x801369E4
// # Maybe start of new file

// 0x80136C18

// 0x80136C8C

// 0x80136E90

// 0x80137004

// 0x801370F8

// 0x80137120

// 0x80137148

// 0x8013718C

// 0x80137234

// 0x80137390

// 0x801375A8

// 0x8013760C

// 0x801376D0

// 0x8013782C

// 0x801379B8

// 0x80137D4C

// 0x80137EFC

// 0x80137F9C

// 0x80137FF8

// 0x801380F4

// 0x80138140

// 0x80138218

// 0x801382E0

// 0x801386E4

// 0x80138798

// 0x80138848

// 0x801388A4

// 0x801388F8

// 0x80138B6C

// 0x80138C0C

// 0x80138CAC

// 0x80138D4C

// 0x80138DEC

// 0x80138FA0

// 0x80139098

// 0x801392A8

// 0x80139320

// 0x80139460

// 0x8013961C

// 0x801397CC

// 0x801398B8

// 0x8013992C

// 0x80139970

// 0x801399E8

// 0x80139A2C

// 0x80139B4C

// 0x80139B90

// 0x80139C84

// 0x80139DE0

// 0x80139E60

// 0x8013A0DC

// 0x8013A2A4

// 0x8013A30C

// 0x8013A3AC

// 0x8013A40C

// 0x8013A470

// 0x8013A534

// 0x8013A5E4

// 0x8013A664

// 0x8013A8B8

// 0x8013A920

// 0x8013AAF8

// 0x8013ABDC

// 0x8013AC7C

// 0x8013ADE0

// 0x8013AEC8

// 0x8013AFC0

// 0x8013B090

// 0x8013B0C8

// vs_css_entry