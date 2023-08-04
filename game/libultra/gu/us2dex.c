/*---------------------------------------------------------------------
  $Id: us2dex.c,v 1.2 1997/03/19 12:54:10 yasu Exp $
  
  File : us2dex.c
  
  Coded     by Yoshitaka Yasumoto.   Mar 19, 1997.
  Copyright by Nintendo, Co., Ltd.           1997.
  ---------------------------------------------------------------------*/
#include	<ultra64.h>
#include	<PR/gs2dex.h>

/*
 *	Routines that support processing of S2DEX microcode 
 */

/*
 *	guS2DInitBG
 *		Set BG screen draw parameters
 *
 *	If called at time of initialization, then it only needs to be called again when
 *	changes made to imageFmt, imageSiz, imageLoad, imageW, frameW.
 *	However, if  imageLoad == G_BGLT_LOADBLOCK and only frameW is changed,
 *	another call is unnecessary.
 */
void	guS2DInitBg(uObjBg *bg)
{
  u16	tmemUse;
  u16	shift;
  
  /*
   *	Get the useable volume for TMEM
   *		If  imageFmt  is CI then TLUT will use half.
   */
  tmemUse = (bg->b.imageFmt == G_IM_FMT_CI) ? 256 : 512;
  
  /*
   *	Get shift volume for conversion to TMEM word.
   */
  shift = 6 - bg->b.imageSiz;
  
  /*
   *	Set other parameters for Load Mode.
   */
  if (bg->b.imageLoad == G_BGLT_LOADBLOCK){
    bg->b.tmemW      = bg->b.imageW >> shift;
    bg->b.tmemH      = (tmemUse / bg->b.tmemW) << 2;
    bg->b.tmemSizeW  = bg->b.tmemW << 1;
    bg->b.tmemSize   = bg->b.tmemH * bg->b.tmemSizeW;
    bg->b.tmemLoadSH = (bg->b.tmemSize>>1) - 1;
    bg->b.tmemLoadTH = GS_CALC_DXT(bg->b.tmemW);
  } else {
    bg->b.tmemW      = (bg->b.frameW >> shift) + 1;
    bg->b.tmemH      = (tmemUse / bg->b.tmemW) << 2;
    bg->b.tmemSizeW  = (bg->b.imageW >> shift) * 2;
    bg->b.tmemSize   = bg->b.tmemH * bg->b.tmemSizeW;
    bg->b.tmemLoadSH = (bg->b.tmemW<<4) - 1;
    bg->b.tmemLoadTH = bg->b.tmemH - 1;
  }
  return;
}

/*======== End of us2dex.c ========*/

