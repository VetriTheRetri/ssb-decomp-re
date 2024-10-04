#ifndef _MNCONGRA_H_
#define _MNCONGRA_H_

#include <ssb_types.h>
#include <sys/objdef.h>
#include <PR/gbi.h>
#include <mn/mndef.h>

extern uintptr_t lMNCongraKirbyBottomFileID;	// 0x000000AA
extern uintptr_t lMNCongraKirbyTopFileID;		// 0x000000AB
extern uintptr_t lMNCongraYoshiBottomFileID;	// 0x000000AC
extern uintptr_t lMNCongraYoshiTopFileID;		// 0x000000AD
extern uintptr_t lMNCongraPikachuBottomFileID;	// 0x000000AE
extern uintptr_t lMNCongraPikachuTopFileID;		// 0x000000AF
extern uintptr_t lMNCongraSamusBottomFileID;	// 0x000000B0
extern uintptr_t lMNCongraSamusTopFileID;		// 0x000000B1
extern uintptr_t lMNCongraLinkBottomFileID;		// 0x000000B2
extern uintptr_t lMNCongraLinkTopFileID;		// 0x000000B3
extern uintptr_t lMNCongraPurinBottomFileID;	// 0x000000B4
extern uintptr_t lMNCongraPurinTopFileID;		// 0x000000B5
extern uintptr_t lMNCongraCaptainBottomFileID;	// 0x000000B6
extern uintptr_t lMNCongraCaptainTopFileID;		// 0x000000B7
extern uintptr_t lMNCongraDonkeyBottomFileID;	// 0x000000B8
extern uintptr_t lMNCongraDonkeyTopFileID;		// 0x000000B9
extern uintptr_t lMNCongraMarioBottomFileID;	// 0x000000BA
extern uintptr_t lMNCongraMarioTopFileID;		// 0x000000BB
extern uintptr_t lMNCongraLuigiBottomFileID;	// 0x000000BC
extern uintptr_t lMNCongraLuigiTopFileID;		// 0x000000BD
extern uintptr_t lMNCongraFoxBottomFileID;		// 0x000000BE
extern uintptr_t lMNCongraFoxTopFileID;			// 0x000000BF
extern uintptr_t lMNCongraNessBottomFileID;		// 0x000000C0
extern uintptr_t lMNCongraNessTopFileID;		// 0x000000C1

extern intptr_t lMNCongraKirbyBottomSprite;		// 0x00020718
extern intptr_t lMNCongraKirbyTopSprite;		// 0x00020718
extern intptr_t lMNCongraYoshiBottomSprite;		// 0x00020718
extern intptr_t lMNCongraYoshiTopSprite;		// 0x00020718
extern intptr_t lMNCongraPikachuBottomSprite;	// 0x00020718
extern intptr_t lMNCongraPikachuTopSprite;		// 0x00020718
extern intptr_t lMNCongraSamusBottomSprite;		// 0x00020718
extern intptr_t lMNCongraSamusTopSprite;		// 0x00020718
extern intptr_t lMNCongraLinkBottomSprite;		// 0x00020718
extern intptr_t lMNCongraLinkTopSprite;			// 0x00020718
extern intptr_t lMNCongraPurinBottomSprite;		// 0x00020718
extern intptr_t lMNCongraPurinTopSprite;		// 0x00020718
extern intptr_t lMNCongraCaptainBottomSprite;	// 0x00020718
extern intptr_t lMNCongraCaptainTopSprite;		// 0x00020718
extern intptr_t lMNCongraDonkeyBottomSprite;	// 0x00020718
extern intptr_t lMNCongraDonkeyTopSprite;		// 0x00020718
extern intptr_t lMNCongraMarioBottomSprite;		// 0x00020718
extern intptr_t lMNCongraMarioTopSprite;		// 0x00020718
extern intptr_t lMNCongraLuigiBottomSprite;		// 0x00020718
extern intptr_t lMNCongraLuigiTopSprite;		// 0x00020718
extern intptr_t lMNCongraFoxBottomSprite;		// 0x00020718
extern intptr_t lMNCongraFoxTopSprite;			// 0x00020718
extern intptr_t lMNCongraNessBottomSprite;		// 0x00020718
extern intptr_t lMNCongraNessTopSprite;			// 0x00020718

extern sb32 mnCongraCheckPlayerControllerConnected(s32 player);
extern s32 mnCongraGetPlayerTapButtons(u32 buttons);
extern void mnCongraActorFuncRun(GObj *gobj);
extern void mnCongraFuncStart(void);
extern void mnCongraFuncDraw(void);
extern void mnCongraFuncLights(Gfx **dls);
extern void mnCongraStartScene(void);

#endif
