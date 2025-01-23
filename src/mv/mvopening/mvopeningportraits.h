#ifndef _MVOPENINGPORTRAITS_H_
#define _MVOPENINGPORTRAITS_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>

extern u32 lMVOpeningPortraitsSet1FileID;					// 0x00000035
extern u32 lMVOpeningPortraitsSet2FileID;					// 0x00000036

extern intptr_t lMVOpeningPortraitsSet1SamusSprite;			// 0x00009960
extern intptr_t lMVOpeningPortraitsSet1MarioSprite;			// 0x00013310
extern intptr_t lMVOpeningPortraitsSet1FoxSprite;			// 0x0001CCC0
extern intptr_t lMVOpeningPortraitsSet1PikachuSprite;		// 0x00026670
extern intptr_t lMVOpeningPortraitsSet1CoverSprite; 		// 0x0002B2D0

extern intptr_t lMVOpeningPortraitsSet2LinkSprite;			// 0x00009960
extern intptr_t lMVOpeningPortraitsSet2KirbySprite;			// 0x00013310
extern intptr_t lMVOpeningPortraitsSet2DonkeySprite;		// 0x0001CCC0
extern intptr_t lMVOpeningPortraitsSet2YoshiSprite;			// 0x00026670

extern void mvOpeningPortraitsFuncLights(Gfx **dls);
extern void mvOpeningPortraitsMakeSet1(void);
extern void mvOpeningPortraitsMakeSet2(void);
extern void mvOpeningPortraitsBlockRow0(void);
extern void mvOpeningPortraitsBlockRow1(void);
extern void mvOpeningPortraitsBlockRow2(void);
extern void mvOpeningPortraitsBlockRow3(void);
extern void mvOpeningPortraitsBlockPartialRow(s32 row, s32 pos_x);
extern void mvOpeningPortraitsCoverProcDisplay(GObj *gobj);
extern void mvOpeningPortraitsCoverProcUpdate(GObj *gobj);
extern void mvOpeningPortraitsMakeCover(void);
extern void mvOpeningPortraitsMakePortraitsCamera(void);
extern void mvOpeningPortraitsMakeCoverCamera(void);
extern void mvOpeningPortraitsInitVars(void);
extern void mvOpeningPortraitsFuncStart(void);
extern void mvOpeningPortraitsStartScene(void);

#endif
