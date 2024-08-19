#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/system_00.h>
#include <sys/thread6.h>
#include <ovl0/reloc_data_mgr.h>

extern void hal_interpolation_cubic(Vec3f*, void*, f32);
extern void syMatrixTraRotRpyRScaF(Mtx44f mf,f32 dx,f32 dy,f32 dz,f32 r,f32 p,f32 h,f32 sx,f32 sy,f32 sz);
extern void syMatrixPerspFastF(Mtx44f a, u16* b, f32 c, f32 d, f32 e, f32 f, f32  g);
extern void syMatrixLookAtF(Mtx44f mf, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
extern void guMtxCatF(Mtx44f a, Mtx44f b, Mtx44f c);

extern void func_ovl0_800CCF00();
extern void func_ovl0_800CD2CC();
extern void func_80007080(void*, f32, f32, f32, f32);
extern GObj* func_8000B93C(u32, void*, s32, u32, void*, s32, s64, s32, s32, s32, s32, s32, s32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_000000C3;

extern intptr_t lGMCreditsNameAndJobAUpperSprite;	    // 0x00000008
extern intptr_t lGMCreditsNameAndJobBUpperSprite;	    // 0x00000218
extern intptr_t lGMCreditsNameAndJobCUpperSprite;	    // 0x00000398
extern intptr_t lGMCreditsNameAndJobDUpperSprite;	    // 0x000004F8
extern intptr_t lGMCreditsNameAndJobEUpperSprite;	    // 0x00000728
extern intptr_t lGMCreditsNameAndJobFUpperSprite;	    // 0x00000888
extern intptr_t lGMCreditsNameAndJobGUpperSprite;	    // 0x00000A08
extern intptr_t lGMCreditsNameAndJobHUpperSprite;	    // 0x00000C38
extern intptr_t lGMCreditsNameAndJobIUpperSprite;	    // 0x00000E68
extern intptr_t lGMCreditsNameAndJobJUpperSprite;	    // 0x00000FE8
extern intptr_t lGMCreditsNameAndJobKUpperSprite;	    // 0x00001188
extern intptr_t lGMCreditsNameAndJobLUpperSprite;	    // 0x000013B8
extern intptr_t lGMCreditsNameAndJobMUpperSprite;	    // 0x00001538
extern intptr_t lGMCreditsNameAndJobNUpperSprite;	    // 0x000017D8
extern intptr_t lGMCreditsNameAndJobOUpperSprite;	    // 0x000019E8
extern intptr_t lGMCreditsNameAndJobPUpperSprite;	    // 0x00001C88
extern intptr_t lGMCreditsNameAndJobQUpperSprite;	    // 0x00001E08
extern intptr_t lGMCreditsNameAndJobRUpperSprite;	    // 0x00002038
extern intptr_t lGMCreditsNameAndJobSUpperSprite;	    // 0x00002198
extern intptr_t lGMCreditsNameAndJobTUpperSprite;	    // 0x000022F8
extern intptr_t lGMCreditsNameAndJobUUpperSprite;	    // 0x00002478
extern intptr_t lGMCreditsNameAndJobVUpperSprite;	    // 0x000025D8
extern intptr_t lGMCreditsNameAndJobWUpperSprite;	    // 0x000027E8
extern intptr_t lGMCreditsNameAndJobXUpperSprite;	    // 0x00002A88
extern intptr_t lGMCreditsNameAndJobYUpperSprite;	    // 0x00002C98
extern intptr_t lGMCreditsNameAndJobZUpperSprite;	    // 0x00002E18

extern intptr_t lGMCreditsNameAndJobALowerSprite;	    // 0x00000178
extern intptr_t lGMCreditsNameAndJobBLowerSprite;	    // 0x000002D8
extern intptr_t lGMCreditsNameAndJobCLowerSprite;	    // 0x00000458
extern intptr_t lGMCreditsNameAndJobDLowerSprite;	    // 0x00000668
extern intptr_t lGMCreditsNameAndJobELowerSprite;	    // 0x000007E8
extern intptr_t lGMCreditsNameAndJobFLowerSprite;	    // 0x00000948
extern intptr_t lGMCreditsNameAndJobGLowerSprite;	    // 0x00000B78
extern intptr_t lGMCreditsNameAndJobHLowerSprite;	    // 0x00000DA8
extern intptr_t lGMCreditsNameAndJobILowerSprite;	    // 0x00000F28
extern intptr_t lGMCreditsNameAndJobJLowerSprite;	    // 0x000010A8
extern intptr_t lGMCreditsNameAndJobKLowerSprite;	    // 0x000012F8
extern intptr_t lGMCreditsNameAndJobLLowerSprite;	    // 0x00001478
extern intptr_t lGMCreditsNameAndJobMLowerSprite;	    // 0x000016A8
extern intptr_t lGMCreditsNameAndJobNLowerSprite;	    // 0x00001948
extern intptr_t lGMCreditsNameAndJobOLowerSprite;	    // 0x00001B58
extern intptr_t lGMCreditsNameAndJobPLowerSprite;	    // 0x00001D48
extern intptr_t lGMCreditsNameAndJobQLowerSprite;	    // 0x00001F78
extern intptr_t lGMCreditsNameAndJobRLowerSprite;	    // 0x000020F8
extern intptr_t lGMCreditsNameAndJobSLowerSprite;	    // 0x00002258
extern intptr_t lGMCreditsNameAndJobTLowerSprite;	    // 0x000023B8
extern intptr_t lGMCreditsNameAndJobULowerSprite;	    // 0x00002538
extern intptr_t lGMCreditsNameAndJobVLowerSprite;	    // 0x00002748
extern intptr_t lGMCreditsNameAndJobWLowerSprite;	    // 0x00002958
extern intptr_t lGMCreditsNameAndJobXLowerSprite;	    // 0x00002BF8
extern intptr_t lGMCreditsNameAndJobYLowerSprite;	    // 0x00002D58
extern intptr_t lGMCreditsNameAndJobZLowerSprite;		// 0x00002F88
extern intptr_t lGMCreditsNameAndJobCommaSprite;		// 0x00003018
extern intptr_t lGMCreditsNameAndJobPeriodSprite;		// 0x00003078
extern intptr_t lGMCreditsNameAndJobApostropheSprite;	// 0x000030B8
extern intptr_t lGMCreditsNameAndJob4Sprite;			// 0x00003118

extern intptr_t lGMCreditsTextBoxAUpperSprite;	        // 0x00003258
extern intptr_t lGMCreditsTextBoxBUpperSprite;	        // 0x000033E8
extern intptr_t lGMCreditsTextBoxCUpperSprite;	        // 0x00003588
extern intptr_t lGMCreditsTextBoxDUpperSprite;	        // 0x00003718
extern intptr_t lGMCreditsTextBoxEUpperSprite;	        // 0x000038B8
extern intptr_t lGMCreditsTextBoxFUpperSprite;	        // 0x00003A48
extern intptr_t lGMCreditsTextBoxGUpperSprite;	        // 0x00003BE8
extern intptr_t lGMCreditsTextBoxHUpperSprite;	        // 0x00003D78
extern intptr_t lGMCreditsTextBoxIUpperSprite;	        // 0x00003F18
extern intptr_t lGMCreditsTextBoxJUpperSprite;	        // 0x000040B8
extern intptr_t lGMCreditsTextBoxKUpperSprite;	        // 0x00004258
extern intptr_t lGMCreditsTextBoxLUpperSprite;	        // 0x000043F8
extern intptr_t lGMCreditsTextBoxMUpperSprite;	        // 0x00004598
extern intptr_t lGMCreditsTextBoxNUpperSprite;	        // 0x00004728
extern intptr_t lGMCreditsTextBoxOUpperSprite;	        // 0x000048B8
extern intptr_t lGMCreditsTextBoxPUpperSprite;	        // 0x00004A48
extern intptr_t lGMCreditsTextBoxQUpperSprite;	        // 0x00004BD8
extern intptr_t lGMCreditsTextBoxRUpperSprite;	        // 0x00004D68
extern intptr_t lGMCreditsTextBoxSUpperSprite;	        // 0x00004EF8
extern intptr_t lGMCreditsTextBoxTUpperSprite;	        // 0x00005088
extern intptr_t lGMCreditsTextBoxUUpperSprite;	        // 0x00005228
extern intptr_t lGMCreditsTextBoxVUpperSprite;	        // 0x000053B8
extern intptr_t lGMCreditsTextBoxWUpperSprite;	        // 0x00005548
extern intptr_t lGMCreditsTextBoxXUpperSprite;	        // 0x000056D8
extern intptr_t lGMCreditsTextBoxYUpperSprite;	        // 0x00005868
extern intptr_t lGMCreditsTextBoxZUpperSprite;	        // 0x000059F8

extern intptr_t lGMCreditsTextBoxALowerSprite;	        // 0x00003310
extern intptr_t lGMCreditsTextBoxBLowerSprite;	        // 0x000034B0
extern intptr_t lGMCreditsTextBoxCLowerSprite;	        // 0x00003640
extern intptr_t lGMCreditsTextBoxDLowerSprite;	        // 0x000037E0
extern intptr_t lGMCreditsTextBoxELowerSprite;	        // 0x00003970
extern intptr_t lGMCreditsTextBoxFLowerSprite;	        // 0x00003B10
extern intptr_t lGMCreditsTextBoxGLowerSprite;	        // 0x00003CA8
extern intptr_t lGMCreditsTextBoxHLowerSprite;	        // 0x00003E40
extern intptr_t lGMCreditsTextBoxILowerSprite;	        // 0x00003FE0
extern intptr_t lGMCreditsTextBoxJLowerSprite;	        // 0x00004188
extern intptr_t lGMCreditsTextBoxKLowerSprite;	        // 0x00004320
extern intptr_t lGMCreditsTextBoxLLowerSprite;	        // 0x000044C0
extern intptr_t lGMCreditsTextBoxMLowerSprite;	        // 0x00004650
extern intptr_t lGMCreditsTextBoxNLowerSprite;	        // 0x000047E0
extern intptr_t lGMCreditsTextBoxOLowerSprite;	        // 0x00004970
extern intptr_t lGMCreditsTextBoxPLowerSprite;	        // 0x00004B08
extern intptr_t lGMCreditsTextBoxQLowerSprite;	        // 0x00004C98
extern intptr_t lGMCreditsTextBoxRLowerSprite;	        // 0x00004E20
extern intptr_t lGMCreditsTextBoxSLowerSprite;	        // 0x00004FB0
extern intptr_t lGMCreditsTextBoxTLowerSprite;	        // 0x00005150
extern intptr_t lGMCreditsTextBoxULowerSprite;	        // 0x000052E0
extern intptr_t lGMCreditsTextBoxVLowerSprite;	        // 0x00005470
extern intptr_t lGMCreditsTextBoxWLowerSprite;	        // 0x00005600
extern intptr_t lGMCreditsTextBoxXLowerSprite;	        // 0x00005790
extern intptr_t lGMCreditsTextBoxYLowerSprite;	        // 0x00005928
extern intptr_t lGMCreditsTextBoxZLowerSprite;	        // 0x00005AB0

extern intptr_t lGMCreditsTextBoxColonSprite;			// 0x00005B70
extern intptr_t lGMCreditsTextBoxCommaSprite;			// 0x00005C00
extern intptr_t lGMCreditsTextBoxPeriodSprite;			// 0x00005C90
extern intptr_t lGMCreditsTextBoxDashSprite;			// 0x00005D18
extern intptr_t lGMCreditsTextBox1Sprite;				// 0x00005DE8
extern intptr_t lGMCreditsTextBox2Sprite;				// 0x00005EB8
extern intptr_t lGMCreditsTextBox3Sprite;				// 0x00005F88
extern intptr_t lGMCreditsTextBox4Sprite;				// 0x00006058
extern intptr_t lGMCreditsTextBox5Sprite;				// 0x00006128
extern intptr_t lGMCreditsTextBox6Sprite;				// 0x000061F8
extern intptr_t lGMCreditsTextBox7Sprite;				// 0x000062C8
extern intptr_t lGMCreditsTextBox8Sprite;				// 0x00006398
extern intptr_t lGMCreditsTextBox9Sprite;				// 0x00006468
extern intptr_t lGMCreditsTextBox0Sprite;				// 0x00006538
extern intptr_t lGMCreditsTextBoxQuoteSprite;			// 0x000065C0
extern intptr_t lGMCreditsTextBoxAmpersSprite;			// 0x00006698
extern intptr_t lGMCreditsTextBoxSlashSprite;			// 0x00006758
extern intptr_t lGMCreditsTextBoxApostropheSprite;	    // 0x000067E0
extern intptr_t lGMCreditsTextBoxQuestionSprite;	    // 0x000068B8
extern intptr_t lGMCreditsTextBoxBracketOpenSprite;	    // 0x00006988
extern intptr_t lGMCreditsTextBoxBracketCloseSprite;	// 0x00006A58
extern intptr_t lGMCreditsTextBoxEAccentSprite;			// 0x00006B20

extern intptr_t lGMCreditsInterpolation;      			// 0x00007304
extern intptr_t lGMCreditsAnimJoint;         			// 0x00007338
extern intptr_t lGMCreditsDObjDesc;           			// 0x000078C0
extern intptr_t lGMCreditsCrosshairSprite;    			// 0x00006D58
extern intptr_t lGMCreditsTextBoxBracketLeft; 			// 0x00006F98
extern intptr_t lGMCreditsTextBoxBracketRight;	        // 0x000071D8

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8013A7D0
s32 sGMCreditsPad0x8013A7D0[2];

// 0x8013A7D8
Gfx *sGMCreditsNameAndJobDisplayLists[56];

// 0x8013A8B8
s32 sGMCreditsNameID;

// 0x8013A8BC
f32 sGMCreditsRollSpeed;

// 0x8013A8C0
s32 sGMCreditsStatus;

// 0x8013A8C4
gmCreditsName *sGMCreditsNameAllocFree;

// 0x8013A8C8
GObj *sGMCreditsStaffRollGObj;

// 0x8013A8CC
GObj *sGMCreditsCrosshairGObj;

// 0x8013A8D0
sb32 sGMCreditsIsPaused;

// 0x8013A8D4
f32 sGMCreditsCrosshairPositionX;

// 0x8013A8D8
f32 sGMCreditsCrosshairPositionY;

// 0x8013A8DC
AObjStream *sGMCreditsNameAnimJoint;

// 0x8013A8E0
void *sGMCreditsNameInterpolation;

// 0x8013A8E4
Camera *sGMCreditsCamera;

// 0x8013A8E8
void *sGMCreditsDObjDesc;

// 0x8013A8EC
s32 sGMCreditsHighlightSize;

// 0x8013A8F0
f32 sGMCreditsHighlightPositionX;

// 0x8013A8F4
f32 sGMCreditsHighlightPositionY;

// 0x8013A8F8
GObj *sGMCreditsStaffRoleTextGObj;

// 0x8013A8FC
GObj *sGMCreditsCompanyTextGObj;

// 0x8013A900
s32 sGMCreditsRollBeginWait;

// 0x8013A904 - controller port to use for credits sequence
u8 sGMCreditsPlayer;

// 0x8013A908
s32 sGMCreditsRollEndWait;

// 0x8013A910
rdFileNode sGMCreditsStatusBuf[32];

// 0x8013AA10
void *sGMCreditsFiles[1];

// 0x8013AA18
Mtx44f sGMCreditsMatrix;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80135260
s32 dGMCreditsNameCharacters[/* */] =
{
	#include "credits/staff.credits.encoded"
};

// 0x801364F4
gmCreditsText dGMCreditsNameTextInfo[/* */] =
{
	#include "credits/staff.credits.metadata"
};

// 0x80136794
s32 dGMCreditsUnused0x80136794[/* */] =
{
	0x000004A5, 0x00000000
};

// 0x8013679C
gmCreditsJob dGMCreditsJobDescriptions[/* */] =
{
	// Director
	{ 
		-1,			// Prefix ID
		0, 			// Job string ID
		1 			// Show next job from this staff member in order
	},
	
	// Chief Programmer
	{ 
		1,			// Prefix ID
		16, 		// Job string ID
		2 			// Show next job from this staff member in order
	},

	// Programmers
	{
		-1,			// Prefix ID
		2, 			// Job string ID
		7 			// Show next job from this staff member in order
	},
	
	// Chief Designer
	{
		1,			// Prefix ID
		17, 		// Job string ID
		8 			// Show next job from this staff member in order
	},

	// Designers
	{
		-1,			// Prefix ID
		3, 			// Job string ID
		27 			// Show next job from this staff member in order
	},

	// Sound Composer
	{
		-1,			// Prefix ID
		4, 			// Job string ID
		28 			// Show next job from this staff member in order
	},

	// Support
	{
		-1,			// Prefix ID
		5, 			// Job string ID
		29 			// Show next job from this staff member in order
	},

	// Voice Actors
	{
		-1,			// Prefix ID
		6, 			// Job string ID
		38 			// Show next job from this staff member in order
	},

	// Original Game Staff
	{
		-1,			// Prefix ID
		8, 			// Job string ID
		56 			// Show next job from this staff member in order
	},

	// NOA Staff
	{
		-1,			// Prefix ID
		15, 		// Job string ID
		59 			// Show next job from this staff member in order
	},

	// Special Thanks
	{
		-1,			// Prefix ID
		7, 			// Job string ID
		75 			// Show next job from this staff member in order
	},

	// Project Manager
	{
		9,			// Prefix ID
		10, 		// Job string ID
		76 			// Show next job from this staff member in order
	},

	// Progress Manager
	{
		11,			// Prefix ID
		10, 		// Job string ID
		77 			// Show next job from this staff member in order
	},

	// Producer
	{
		-1,			// Prefix ID
		12, 		// Job string ID
		81 			// Show next job from this staff member in order
	},

	// Executive Producer
	{
		13,			// Prefix ID
		12, 		// Job string ID
		82 			// Show next job from this staff member in order
	},

	// Presents
	{
		-1,			// Prefix ID
		14, 		// Job string ID
		-1 			// Show next job from this staff member in order
	}
};

// 0x8013685C
s32 dGMCreditsJobCharacters[/* */] =
{
	#include "credits/titles.credits.encoded"
};

// 0x80136B10
gmCreditsText dGMCreditsJobTextInfo[/* */] =
{
	#include "credits/titles.credits.metadata"
};

// 0x80136BA0
s32 dGMCreditsStaffRoleCharacters[/* */] =
{
	#include "credits/info.credits.encoded"
};

// 0x80139B68
gmCreditsText dGMCreditsStaffRoleTextInfo[/* */] =
{
	#include "credits/info.credits.metadata"
};

// 0x80139E08
s32 dGMCreditsCompanyCharacters[/* */] =
{
	#include "credits/companies.credits.encoded"
};

// 0x80139FD4
gmCreditsText dGMCreditsCompanyTextInfo[/* */] =
{
	#include "credits/companies.credits.metadata"
};

// 0x8013A02C - Empty word in company text info
s32 dGMCreditsUnused0x8013A02C[/* */] = { 0x00000073, 0x00000000 };

// 0x8013A034
s32 dGMCreditsCompanyIDs[/* */] =
{
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	-1,
	-1,
	-1,
	-1,
	-1,
	nGMCreditsCompanyCreatures,
	nGMCreditsCompanyCreatures,
	nGMCreditsCompanyCreatures,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	-1,
	nGMCreditsCompanyARTSVISION,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyAONIProd,
	nGMCreditsCompanyAONIProd,
	nGMCreditsCompanyEZAKIProd,
	nGMCreditsCompanyAONIProd,
	-1,
	nGMCreditsCompanyMickeys,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	-1, 
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyGAMEFREAK,
	nGMCreditsCompanyCreatures,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyCreatures,
	-1,
	nGMCreditsCompanyNOA,
	nGMCreditsCompanyNOA,
	nGMCreditsCompanyNOA,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyCreatures,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	-1,
	-1,
	-1,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyHAL,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	nGMCreditsCompanyNINTENDO,
	-1,
	-1
};

// 0x8013A184
u32 dGMCreditsFileIDs[/* */] = { &D_NF_000000C3 };

// 0x8013A188
gmCreditsSprite dGMCreditsNameAndJobSpriteInfo[/* */] =
{
	{ 20, 22, &lGMCreditsNameAndJobAUpperSprite },
	{ 15, 22, &lGMCreditsNameAndJobBUpperSprite },
	{ 15, 22, &lGMCreditsNameAndJobCUpperSprite },
	{ 18, 22, &lGMCreditsNameAndJobDUpperSprite },
	{ 13, 22, &lGMCreditsNameAndJobEUpperSprite },
	{ 13, 22, &lGMCreditsNameAndJobFUpperSprite },
	{ 19, 22, &lGMCreditsNameAndJobGUpperSprite },
	{ 18, 22, &lGMCreditsNameAndJobHUpperSprite },
	{  7, 22, &lGMCreditsNameAndJobIUpperSprite },
	{ 11, 22, &lGMCreditsNameAndJobJUpperSprite },
	{ 18, 22, &lGMCreditsNameAndJobKUpperSprite },
	{ 13, 22, &lGMCreditsNameAndJobLUpperSprite },
	{ 23, 22, &lGMCreditsNameAndJobMUpperSprite },
	{ 19, 22, &lGMCreditsNameAndJobNUpperSprite },
	{ 22, 22, &lGMCreditsNameAndJobOUpperSprite },
	{ 15, 22, &lGMCreditsNameAndJobPUpperSprite },
	{ 23, 22, &lGMCreditsNameAndJobQUpperSprite },
	{ 16, 22, &lGMCreditsNameAndJobRUpperSprite },
	{ 15, 22, &lGMCreditsNameAndJobSUpperSprite },
	{ 15, 22, &lGMCreditsNameAndJobTUpperSprite },
	{ 16, 22, &lGMCreditsNameAndJobUUpperSprite },
	{ 18, 22, &lGMCreditsNameAndJobVUpperSprite },
	{ 25, 22, &lGMCreditsNameAndJobWUpperSprite },
	{ 19, 22, &lGMCreditsNameAndJobXUpperSprite },
	{ 16, 22, &lGMCreditsNameAndJobYUpperSprite },
	{ 19, 22, &lGMCreditsNameAndJobZUpperSprite },
	{ 14, 18, &lGMCreditsNameAndJobALowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobBLowerSprite },
	{ 14, 18, &lGMCreditsNameAndJobCLowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobDLowerSprite },
	{ 16, 18, &lGMCreditsNameAndJobELowerSprite },
	{ 11, 22, &lGMCreditsNameAndJobFLowerSprite },
	{ 15, 22, &lGMCreditsNameAndJobGLowerSprite },
	{ 15, 22, &lGMCreditsNameAndJobHLowerSprite },
	{  6, 22, &lGMCreditsNameAndJobILowerSprite },
	{  8, 26, &lGMCreditsNameAndJobJLowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobKLowerSprite },
	{  6, 22, &lGMCreditsNameAndJobLLowerSprite },
	{ 20, 18, &lGMCreditsNameAndJobMLowerSprite },
	{ 15, 18, &lGMCreditsNameAndJobNLowerSprite },
	{ 18, 18, &lGMCreditsNameAndJobOLowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobPLowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobQLowerSprite },
	{ 11, 18, &lGMCreditsNameAndJobRLowerSprite },
	{ 13, 18, &lGMCreditsNameAndJobSLowerSprite },
	{ 11, 22, &lGMCreditsNameAndJobTLowerSprite },
	{ 15, 18, &lGMCreditsNameAndJobULowerSprite },
	{ 14, 18, &lGMCreditsNameAndJobVLowerSprite },
	{ 21, 18, &lGMCreditsNameAndJobWLowerSprite },
	{ 15, 18, &lGMCreditsNameAndJobXLowerSprite },
	{ 16, 22, &lGMCreditsNameAndJobYLowerSprite },
	{ 14, 17, &lGMCreditsNameAndJobZLowerSprite },
	{  7,  7, &lGMCreditsNameAndJobPeriodSprite },
	{  8, 11, &lGMCreditsNameAndJobCommaSprite },
	{  8, 11, &lGMCreditsNameAndJobApostropheSprite },
	{ 16, 22, &lGMCreditsNameAndJob4Sprite }
};

// 0x8013A348
gmCreditsSprite dGMCreditsTextBoxSpriteInfo[/* */] =
{
	{ 12, 14, &lGMCreditsTextBoxAUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxBUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxCUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxDUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxEUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxFUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxGUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxHUpperSprite },
	{  5, 14, &lGMCreditsTextBoxIUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxJUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxKUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxLUpperSprite },
	{ 14, 14, &lGMCreditsTextBoxMUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxNUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxOUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxPUpperSprite },
	{ 13, 14, &lGMCreditsTextBoxQUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxRUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxSUpperSprite },
	{ 13, 14, &lGMCreditsTextBoxTUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxUUpperSprite },
	{ 14, 14, &lGMCreditsTextBoxVUpperSprite },
	{ 14, 14, &lGMCreditsTextBoxWUpperSprite },
	{ 12, 14, &lGMCreditsTextBoxXUpperSprite },
	{ 13, 14, &lGMCreditsTextBoxYUpperSprite },
	{ 14, 14, &lGMCreditsTextBoxZUpperSprite },
	{ 10, 11, &lGMCreditsTextBoxALowerSprite },
	{ 10, 13, &lGMCreditsTextBoxBLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxCLowerSprite },
	{ 10, 13, &lGMCreditsTextBoxDLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxELowerSprite },
	{  9, 13, &lGMCreditsTextBoxFLowerSprite },
	{ 10, 12, &lGMCreditsTextBoxGLowerSprite },
	{ 10, 13, &lGMCreditsTextBoxHLowerSprite },
	{ 04, 13, &lGMCreditsTextBoxILowerSprite },
	{ 06, 14, &lGMCreditsTextBoxJLowerSprite },
	{ 10, 13, &lGMCreditsTextBoxKLowerSprite },
	{ 04, 13, &lGMCreditsTextBoxLLowerSprite },
	{ 12, 11, &lGMCreditsTextBoxMLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxNLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxOLowerSprite },
	{ 10, 12, &lGMCreditsTextBoxPLowerSprite },
	{ 10, 12, &lGMCreditsTextBoxQLowerSprite },
	{  9, 11, &lGMCreditsTextBoxRLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxSLowerSprite },
	{  9, 13, &lGMCreditsTextBoxTLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxULowerSprite },
	{ 10, 11, &lGMCreditsTextBoxVLowerSprite },
	{ 12, 11, &lGMCreditsTextBoxWLowerSprite },
	{ 12, 11, &lGMCreditsTextBoxXLowerSprite },
	{ 10, 12, &lGMCreditsTextBoxYLowerSprite },
	{ 10, 11, &lGMCreditsTextBoxZLowerSprite },
	{  5, 11, &lGMCreditsTextBoxColonSprite },
	{ 13, 14, &lGMCreditsTextBox9Sprite },
	{ 13, 14, &lGMCreditsTextBox8Sprite },
	{ 13, 14, &lGMCreditsTextBox7Sprite },
	{ 13, 14, &lGMCreditsTextBox6Sprite },
	{ 13, 14, &lGMCreditsTextBox5Sprite },
	{ 13, 14, &lGMCreditsTextBox4Sprite },
	{ 13, 14, &lGMCreditsTextBox3Sprite },
	{ 13, 14, &lGMCreditsTextBox2Sprite },
	{  9, 14, &lGMCreditsTextBox1Sprite },
	{ 13, 14, &lGMCreditsTextBox0Sprite },
	{  5,  5, &lGMCreditsTextBoxPeriodSprite },
	{  9, 04, &lGMCreditsTextBoxDashSprite },
	{  5,  5, &lGMCreditsTextBoxCommaSprite },
	{ 16, 14, &lGMCreditsTextBoxAmpersSprite },
	{  5,  5, &lGMCreditsTextBoxQuoteSprite },
	{ 06, 12, &lGMCreditsTextBoxSlashSprite },
	{  5,  5, &lGMCreditsTextBoxApostropheSprite },
	{ 12, 14, &lGMCreditsTextBoxQuestionSprite },
	{  7, 14, &lGMCreditsTextBoxBracketOpenSprite },
	{  7, 14, &lGMCreditsTextBoxBracketCloseSprite },
	{ 10, 13, &lGMCreditsTextBoxEAccentSprite }
};

// 0x8013A598
Gfx dGMCreditsTextBoxDisplayList[/* */] =
{
	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_FILL),
	gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
	gsDPSetFillColor(GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x42, 0x3A, 0x31, 0x1))),
	gsDPFillRectangle(346, 35, 348, 164),
	gsDPFillRectangle(346, 35, 584,  37),
	gsDPFillRectangle(582, 35, 584, 164),
	gsDPFillRectangle(346, 162, 584, 164),
	gsSPEndDisplayList()
};

// // // // // // // // // // // //
//                               //
//           FUNCTIONS           //
//                               //
// // // // // // // // // // // //

// 0x80131B00
sb32 gmCreditsCheckUnpause(void)
{
	sb32 var_v1 = TRUE;
	u16 button_tap = gPlayerControllers[sGMCreditsPlayer].button_tap;

	if (button_tap & (A_BUTTON | B_BUTTON | Z_TRIG | START_BUTTON))
	{
		GObj *name_gobj;
		GObj *job_gobj;

		if (sGMCreditsStaffRollGObj != NULL)
		{
			func_8000B2B8(sGMCreditsStaffRollGObj);
		}
		name_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDCreditsName];

		while (name_gobj != NULL)
		{
			func_8000B2B8(name_gobj);

			name_gobj = name_gobj->link_next;
		}
		job_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDCreditsJob];

		while (job_gobj != NULL)
		{
			func_8000B2B8(job_gobj);
			job_gobj = job_gobj->link_next;
		}
		var_v1 = FALSE;
	}
	return var_v1;
}

// 0x80131BB0
void func_ovl59_80131BB0(Mtx44f mtx, Vec3f *vec, f32 *width, f32 *height)
{
	f32 x = vec->x;
	f32 y = vec->y;
	f32 z = vec->z;

	f32 w = (mtx[0][0] * x) + (mtx[1][0] * y) + (mtx[2][0] * z) + mtx[3][0];
	f32 h = (mtx[0][1] * x) + (mtx[1][1] * y) + (mtx[2][1] * z) + mtx[3][1];
	f32 i = (mtx[0][3] * x) + (mtx[1][3] * y) + (mtx[2][3] * z) + mtx[3][3];

	i = (1.0F / i);

	*width = w * i * 640.0F * 0.5F;
	*height = h * i * 480.0F * 0.5F;
}

// 0x80131C88
void func_ovl59_80131C88(Camera *cam)
{
	Mtx44f m, n;

	syMatrixPerspFastF(n, &cam->projection.persp.norm, cam->projection.persp.fovy, cam->projection.persp.aspect, cam->projection.persp.near, cam->projection.persp.far, cam->projection.persp.scale);
	syMatrixLookAtF(m, cam->vec.eye.x, cam->vec.eye.y, cam->vec.eye.z, cam->vec.at.x, cam->vec.at.y, cam->vec.at.z, cam->vec.up.x, cam->vec.up.y, cam->vec.up.z);
	guMtxCatF(m, n, sGMCreditsMatrix);
}

// 0x80131D30
void func_ovl59_80131D30(DObj *dobj, Vec3f *vec, f32 *width, f32 *height)
{
	Mtx44f m, r;

	syMatrixTraRotRpyRScaF
	(
		m,
		dobj->translate.vec.f.x,
		dobj->translate.vec.f.y,
		dobj->translate.vec.f.z,
		dobj->rotate.vec.f.x,
		dobj->rotate.vec.f.y,
		dobj->rotate.vec.f.z,
		dobj->scale.vec.f.x,
		dobj->scale.vec.f.y,
		dobj->scale.vec.f.z
	);
	guMtxCatF(m, sGMCreditsMatrix, r);
	func_ovl59_80131BB0(r, vec, width, height);
}

// 0x80131DD0
void func_ovl59_80131DD0(GObj *gobj, gmCreditsProjection *proj)
{
	gmCreditsMatrix *credits = gobj->user_data.p;

	proj->pv0.z = proj->pv1.z = proj->pv2.z = proj->pv3.z = 0.0F;
	proj->pv0.y = proj->pv2.y = 28.0F;

	proj->pv1.y = proj->pv3.y = -(credits->unk_gmcreditsmtx_0x10 + 4.0F);
	proj->pv0.x = proj->pv1.x = -22.0F;

	proj->pv2.x = proj->pv3.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
}

// 0x80131E70
void func_ovl59_80131E70(Vec3f *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
	arg0->x = arg2 - arg4;
	arg0->y = arg3 - arg1;
	arg0->z = (arg1 * arg4) - (arg3 * arg2);
}

// 0x80131EB8
sb32 gmCreditsCheckCursorNameOverlap(Vec3f *vec)
{
	SObj *sobj = SObjGetStruct(sGMCreditsCrosshairGObj);
	f32 x = (sobj->pos.x + 29.0F) - 320.0F;
	f32 y = 240.0F - (sobj->pos.y + 29.0F);
	f32 v = (vec->x * x) + (vec->y * y) + vec->z;
	sb32 ret = TRUE;

	if (v < 0.0F)
	{
		ret = FALSE;
	}
	return ret;
}

// 0x80131F34
void func_ovl59_80131F34(GObj *arg0)
{
	GObj *ugobj = arg0->user_data.p;
	gmCreditsMatrix *credits = ugobj->user_data.p;

	if ((credits->unk_gmcreditsmtx_0x14 + sGMCreditsRollSpeed) >= 1.0F)
	{
		gcEjectGObj(NULL);
		gcEjectGObj(sGMCreditsStaffRoleTextGObj);
		gcEjectGObj(sGMCreditsCompanyTextGObj);
	}
	else
	{
		DObj *dobj = DObjGetStruct(arg0)->child;

		DObjGetStruct(arg0)->translate.vec.f = DObjGetStruct(ugobj)->translate.vec.f;
		DObjGetStruct(arg0)->rotate.vec.f = DObjGetStruct(ugobj)->rotate.vec.f;

		dobj->translate.vec.f.x = (ABS(credits->unk_gmcreditsmtx_0xC) * 2) + 18.0F;
	}
}

// 0x8013202C
void func_ovl59_8013202C(GObj *arg0)
{
	GObj *gobj = gOMObjCommonLinks[nOMObjCommonLinkID02];
	GObj *ugobj = arg0->user_data.p;

	if (gobj == NULL)
	{
		gobj = gcMakeGObjSPAfter(8, NULL, nOMObjCommonLinkID02, GOBJ_LINKORDER_DEFAULT);
		gcAddGObjRenderProc(gobj, gcDrawDObjTreeForGObj, 3, GOBJ_DLLINKORDER_DEFAULT, -1);
		gcSetupCustomDObjs(gobj, sGMCreditsDObjDesc, NULL, nOMTransformTraRotRpyRSca, nOMTransformNull, nOMTransformNull);
		gcAddGObjCommonProc(gobj, func_ovl59_80131F34, nOMObjProcessKindProc, 1);

		gobj->user_data.p = arg0;
		ugobj->unk_0x1C = gobj;
	}
	else
	{
		gobj->user_data.p = arg0;
		ugobj->unk_0x1C = gobj;
	}
}

// 0x801320F4
s32 gmCreditsGetLockOnPositionX(s32 posx)
{
	s32 boundx = posx;

	if (posx < 20)
	{
		boundx = 20;
	}
	if (posx > 620)
	{
		boundx = 620;
	}
	return boundx;
}

// 0x8013211C
s32 gmCreditsGetLockOnPositionY(s32 posy)
{
	s32 boundy = posy;

	if (posy < 20)
	{
		boundy = 20;
	}
	if (posy > 460)
	{
		boundy = 460;
	}
	return boundy;
}

// 0x80132144
void gmCreditsHighlightProcRender(GObj *gobj)
{
	s32 unused;

	gDPPipeSync(gDisplayListHead[0]++);
	gDPSetCycleType(gDisplayListHead[0]++, G_CYC_FILL);
	gDPSetRenderMode(gDisplayListHead[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gDisplayListHead[0]++, GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x80, 0x00, 0x00, 0x01)));
	gDPFillRectangle
	(
		gDisplayListHead[0]++,
		gmCreditsGetLockOnPositionX((sGMCreditsHighlightSize * -30) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY((sGMCreditsHighlightSize * -25) + sGMCreditsHighlightPositionY),
		gmCreditsGetLockOnPositionX(((sGMCreditsHighlightSize * -30) + 2) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY(((sGMCreditsHighlightSize * 45) + 2) + sGMCreditsHighlightPositionY)
	);
	gDPFillRectangle
	(
		gDisplayListHead[0]++,
		gmCreditsGetLockOnPositionX((sGMCreditsHighlightSize * -30) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY((sGMCreditsHighlightSize * -25) + sGMCreditsHighlightPositionY),
		gmCreditsGetLockOnPositionX(((sGMCreditsHighlightSize * 65) + 2) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY(((sGMCreditsHighlightSize * -25) + 2) + sGMCreditsHighlightPositionY)
	);
	gDPFillRectangle
	(
		gDisplayListHead[0]++,
		gmCreditsGetLockOnPositionX((sGMCreditsHighlightSize * -30) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY((sGMCreditsHighlightSize * 45) + sGMCreditsHighlightPositionY),
		gmCreditsGetLockOnPositionX(((sGMCreditsHighlightSize * 65) + 2) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY(((sGMCreditsHighlightSize * 45) + 2) + sGMCreditsHighlightPositionY)
	);
	gDPFillRectangle
	(
		gDisplayListHead[0]++,
		gmCreditsGetLockOnPositionX((sGMCreditsHighlightSize * 65) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY((sGMCreditsHighlightSize * -25) + sGMCreditsHighlightPositionY),
		gmCreditsGetLockOnPositionX(((sGMCreditsHighlightSize * 65) + 2) + sGMCreditsHighlightPositionX),
		gmCreditsGetLockOnPositionY(((sGMCreditsHighlightSize * 45) + 2) + sGMCreditsHighlightPositionY)
	);
}

// 0x8013270C
void gmCreditsHighlightThreadUpdate(GObj *gobj)
{
	s32 i;

	for (i = 0; i < 3; i++)
	{
		sGMCreditsHighlightSize = 6;

		while (sGMCreditsHighlightSize != 0)
		{
			sGMCreditsHighlightSize--;
			gcStopCurrentProcess(1);
		}
	}
	gcEjectGObj(NULL);
	gcStopCurrentProcess(1);
}

// 0x801327A4
void gmCreditsMakeHighlightGObj(GObj *gobj)
{
	GObj *highlight_gobj = gOMObjCommonLinks[nOMObjCommonLinkIDHighlight];
	s32 unused;
	SObj *sobj = SObjGetStruct(sGMCreditsCrosshairGObj);

	if (highlight_gobj == NULL)
	{
		highlight_gobj = gcMakeGObjSPAfter(9, NULL, 9, GOBJ_LINKORDER_DEFAULT);

		gcAddGObjRenderProc(highlight_gobj, gmCreditsHighlightProcRender, 8, GOBJ_DLLINKORDER_DEFAULT, -1);
		gcAddGObjCommonProc(highlight_gobj, gmCreditsHighlightThreadUpdate, nOMObjProcessKindThread, 1);

		sGMCreditsHighlightPositionX = sobj->pos.x + 8.0F;
		sGMCreditsHighlightPositionY = sobj->pos.y + 20.0F;
	}
}

// 0x80132860
void gmCreditsSetTextQuetions(s32 *characters, s32 character_count)
{
	s32 i, j, k;
	s32 *cadd, *cbase = &dGMCreditsStaffRoleCharacters[0];

	for (i = 0; i < ARRAY_COUNT(dGMCreditsStaffRoleTextInfo) - 1; i++)
	{
		for (cadd = cbase, j = 0, k = 0; j < dGMCreditsStaffRoleTextInfo[i].character_count; j++, cbase++)
		{
			if (*cbase == characters[k])
			{
				if (k == 0)
				{
					cadd = cbase;
				}
				k++;
			}
			else k = 0;

			if (k == character_count)
			{
				while (k != 0)
				{
					*cadd++ = GMCREDITS_QUESTION_MARK_PARAGRAPH_FONT_INDEX;

					k--;

					continue;
				}
				cadd = cbase;
				k = 0;
			}
		}
	}
}

// 0x80132958
void gmCreditsTryHideUnlocks(void)
{
	s32 unused[5];

	// 0x8013A5E0
	s32 luigi[/* */] =
	{	
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('L'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i')
	};

	// 0x8013A5F4
	s32 purin[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('J'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f')
	};

	// 0x8013A61C
	s32 captain[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('C'),
		GMCREDITS_PERIOD_PARAGRAPH_FONT_INDEX,
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('F'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n')
	};

	// 0x8013A63C
	s32 ness[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('N'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s')
	};

	// 0x8013A64C
	s32 earthbound[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('E'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('t'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('h'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('B'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('d')
	};

	// 0x8013A674
	s32 fzero[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('F'),
		GMCREDITS_DASH_PARAGRAPH_FONT_INDEX,
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('Z'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('E'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('R'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('O'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('X')
	};

	// 0x8013A694
	s32 classicmario[/* */] =
	{
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('C'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('M'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')
	};

	if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_LUIGI))
	{
		gmCreditsSetTextQuetions(luigi, ARRAY_COUNT(luigi));
	}
	if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_PURIN))
	{
		gmCreditsSetTextQuetions(purin, ARRAY_COUNT(purin));
	}
	if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_CAPTAIN))
	{
		gmCreditsSetTextQuetions(captain, ARRAY_COUNT(captain));
		gmCreditsSetTextQuetions(fzero, ARRAY_COUNT(fzero));
	}
	if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_NESS))
	{
		gmCreditsSetTextQuetions(ness, ARRAY_COUNT(ness));
		gmCreditsSetTextQuetions(earthbound, ARRAY_COUNT(earthbound));
	}
	if (!(gSaveData.unlock_mask & SCBACKUP_UNLOCK_MASK_INISHIE))
	{
		gmCreditsSetTextQuetions(classicmario, ARRAY_COUNT(classicmario));
	}
}

// 0x80132BB8
void gmCreditsMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
	s32 character_id;
	SObj *sobj;
	s32 i;
	f32 hvar;
	s32 character_count;
	f32 wbase;
	f32 hbase;
	gmCreditsName *staff = staff_gobj->user_data.p;

	wbase = 350.0F;
	hbase = 40.0F;

	character_count = dGMCreditsStaffRoleTextInfo[staff->name_id].character_count;

	for (i = 0, character_id = dGMCreditsStaffRoleTextInfo[staff->name_id].character_start; i < character_count; i++, character_id++)
	{
		if ((dGMCreditsStaffRoleCharacters[character_id] != GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' ')) &&
			(dGMCreditsStaffRoleCharacters[character_id] != GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('\n')))
		{
			hvar = 0.0F;

			sobj = gcAppendSObjWithSprite(text_gobj, gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], dGMCreditsTextBoxSpriteInfo[dGMCreditsStaffRoleCharacters[character_id]].offset));

			sobj->sprite.attr = SP_TRANSPARENT;

			sobj->sprite.red   = 0xB7;
			sobj->sprite.green = 0xBC;
			sobj->sprite.blue  = 0xEC;

			sobj->pos.x = wbase;

			sobj->sprite.scalex = sobj->sprite.scaley = 1;

			if (dGMCreditsStaffRoleCharacters[character_id] >= GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'))
			{
				hvar = 3.0F;

				if
				(
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('b')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('d')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('h')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('j')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('k')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('t')           ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_COLON_PARAGRAPH_FONT_INDEX                ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('9') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('8') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('7') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('6') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('5') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('4') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('3') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('2') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('1') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('0') ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_AMPERSAND_PARAGRAPH_FONT_INDEX            ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_QUESTION_MARK_PARAGRAPH_FONT_INDEX        ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_E_ACCENT_PARAGRAPH_FONT_INDEX             ||
					dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_DOUBLE_QUOTES_PARAGRAPH_FONT_INDEX
				)
				{
					hvar = 1.0F;
				}
			}
			if (dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_PERIOD_PARAGRAPH_FONT_INDEX)
			{
				hvar += 6.0F;
			}
			if (dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_DASH_PARAGRAPH_FONT_INDEX)
			{
				hvar += 2.0F;
			}
			if (dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_COMMA_PARAGRAPH_FONT_INDEX)
			{
				hvar += 7.0F;
			}
			sobj->pos.y = hbase + hvar;

			wbase += dGMCreditsTextBoxSpriteInfo[dGMCreditsStaffRoleCharacters[character_id]].width;
		}
		else if (dGMCreditsStaffRoleCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '))
		{
			wbase += 3.0F;
		}
		else
		{
			wbase = 350.0F;
			hbase += 20.0F;
		}
	}
}

// 0x80132E74
void gmCreditsMakeStaffRoleTextGObj(GObj *staff_gobj)
{
	GObj *text_gobj;

	if (gOMObjCommonLinks[10] != NULL)
	{
		gcEjectGObj(gOMObjCommonLinks[10]);
	}
	text_gobj = gcMakeGObjSPAfter(6, NULL, 10, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(text_gobj, func_ovl0_800CCF00, 5, GOBJ_DLLINKORDER_DEFAULT, -1);

	sGMCreditsStaffRoleTextGObj = text_gobj;

	gmCreditsMakeStaffRoleTextSObjs(text_gobj, staff_gobj);
}

// 0x80132EF0
void gmCreditsMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
	SObj *sobj;
	f32 hvar;
	f32 wbase;
	s32 character_id;
	s32 character_count;
	gmCreditsName *staff = staff_gobj->user_data.p;
	s32 i;

	if (dGMCreditsCompanyIDs[staff->name_id] != -1)
	{
		wbase = 350.0F;

		character_count = dGMCreditsCompanyTextInfo[dGMCreditsCompanyIDs[staff->name_id]].character_count;
		character_id = dGMCreditsCompanyTextInfo[dGMCreditsCompanyIDs[staff->name_id]].character_start;

		for (i = 0; i < character_count; i++, character_id++)
		{
			if (dGMCreditsCompanyCharacters[character_id] != GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '))
			{
				sobj = gcAppendSObjWithSprite(text_gobj, gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], dGMCreditsTextBoxSpriteInfo[dGMCreditsCompanyCharacters[character_id]].offset));

				hvar = 0.0F;

				sobj->sprite.attr = SP_TRANSPARENT;

				sobj->sprite.scalex = sobj->sprite.scaley = 1;

				sobj->sprite.red   = 0x80;
				sobj->sprite.green = 0x40;
				sobj->sprite.blue  = 0x80;

				sobj->pos.x = wbase;

				if (dGMCreditsCompanyCharacters[character_id] >= GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a'))
				{
					hvar = 3.0F;

					if
					(
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('b')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('d')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('f')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('h')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('i')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('j')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('l')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('t')) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_COLON_PARAGRAPH_FONT_INDEX) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_AMPERSAND_PARAGRAPH_FONT_INDEX) ||
						(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_DOUBLE_QUOTES_PARAGRAPH_FONT_INDEX)
					)
					{
						hvar = 1.0F;
					}
				}
				if ((dGMCreditsCompanyCharacters[character_id] == GMCREDITS_OPEN_PARENTHESIS_PARAGRAPH_FONT_INDEX) ||
					(dGMCreditsCompanyCharacters[character_id] == GMCREDITS_CLOSE_PARENTHESIS_PARAGRAPH_FONT_INDEX))
				{
					hvar = 0.0F;
				}
				if (dGMCreditsCompanyCharacters[character_id] == GMCREDITS_PERIOD_PARAGRAPH_FONT_INDEX)
				{
					hvar += 6.0F;
				}
				if (dGMCreditsCompanyCharacters[character_id] == GMCREDITS_DASH_PARAGRAPH_FONT_INDEX)
				{
					hvar += 2.0F;
				}
				if (dGMCreditsCompanyCharacters[character_id] == GMCREDITS_COMMA_PARAGRAPH_FONT_INDEX)
				{
					hvar += 7.0F;
				}
				sobj->pos.y = 140.0F + hvar;

				wbase += dGMCreditsTextBoxSpriteInfo[dGMCreditsCompanyCharacters[character_id]].width;
			}
			else wbase += 3.0F;
		}
	}
	if (text_gobj); // idk just take it
}

// 0x80133184
void gmCreditsMakeCompanyTextGObj(GObj *staff_gobj)
{
	GObj *text_gobj;

	if (gOMObjCommonLinks[11] != NULL)
	{
		gcEjectGObj(gOMObjCommonLinks[11]);
	}
	text_gobj = gcMakeGObjSPAfter(7, NULL, 0xB, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(text_gobj, func_ovl0_800CCF00, 6, GOBJ_DLLINKORDER_DEFAULT, -1);

	sGMCreditsCompanyTextGObj = text_gobj;

	gmCreditsMakeCompanyTextSObjs(text_gobj, staff_gobj);
}

// 0x80133200
sb32 gmCreditsCheckCursorHighlightPrompt(GObj *gobj, gmCreditsProjection *proj)
{
	sb32 b;
	s32 unused;
	Vec3f sp4C;
	Vec3f sp40;
	Vec3f sp34;
	Vec3f sp28;

	b = TRUE;

	func_ovl59_80131E70(&sp4C, proj->px0, proj->py0, proj->px2, proj->py2);
	func_ovl59_80131E70(&sp40, proj->px1, proj->py1, proj->px3, proj->py3);
	func_ovl59_80131E70(&sp34, proj->px0, proj->py0, proj->px1, proj->py1);
	func_ovl59_80131E70(&sp28, proj->px2, proj->py2, proj->px3, proj->py3);

	if 
	(
		(gmCreditsCheckCursorNameOverlap(&sp4C) == FALSE) && 
		(gmCreditsCheckCursorNameOverlap(&sp40) != FALSE) && 
		(gmCreditsCheckCursorNameOverlap(&sp34) != FALSE) && 
		(gmCreditsCheckCursorNameOverlap(&sp28) == FALSE)
	)
	{
		func_800269C0_275C0(nSYAudioFGMTrainingSel);

		b = FALSE;

		func_ovl59_8013202C(gobj);
		gmCreditsMakeHighlightGObj(gobj);
		gmCreditsMakeStaffRoleTextGObj(gobj);
		gmCreditsMakeCompanyTextGObj(gobj);
	}
	return b;
}

// 0x8013330C
void func_ovl59_8013330C(void)
{
	GObj *gobj;
	DObj *dobj;
	gmCreditsProjection proj;
	sb32 b;

	func_ovl59_80131C88(sGMCreditsCamera);

	gobj = gOMObjCommonLinks[nOMObjCommonLinkIDCreditsName];

	if (gobj != NULL)
	{
		do
		{
			dobj = DObjGetStruct(gobj);

			func_ovl59_80131DD0(gobj, &proj);
			func_ovl59_80131D30(dobj, &proj.pv0, &proj.px0, &proj.py0);
			func_ovl59_80131D30(dobj, &proj.pv1, &proj.px1, &proj.py1);
			func_ovl59_80131D30(dobj, &proj.pv2, &proj.px2, &proj.py2);
			func_ovl59_80131D30(dobj, &proj.pv3, &proj.px3, &proj.py3);

			b = gmCreditsCheckCursorHighlightPrompt(gobj, &proj);

			gobj = gobj->link_next;
		} 
		while ((gobj != NULL) && (b != FALSE));
	}
}

// 0x8013341C
sb32 gmCreditsCheckPause(void)
{
	GObj *gobj;
	u16 button_tap = gPlayerControllers[sGMCreditsPlayer].button_tap;
	sb32 b = FALSE;

	if (button_tap & (A_BUTTON | B_BUTTON))
	{
		func_ovl59_8013330C();

		if (button_tap & B_BUTTON)
		{
			if (sGMCreditsStaffRollGObj != NULL)
			{
				func_8000B284(sGMCreditsStaffRollGObj);
			}
			gobj = gOMObjCommonLinks[nOMObjCommonLinkIDCreditsName];

			while (gobj != NULL)
			{
				func_8000B284(gobj);

				gobj = gobj->link_next;
			}
			gobj = gOMObjCommonLinks[nOMObjCommonLinkIDCreditsJob];

			while (gobj != NULL)
			{
				func_8000B284(gobj);

				gobj = gobj->link_next;
			}
			b = TRUE;
		}
	}
	return b;
}

// 0x801334E4
void func_ovl59_801334E4(GObj *gobj)
{
	sb32 is_paused;
	u16 button_tap;

	if ((sGMCreditsRollEndWait == 0) || (sGMCreditsStatus != -1) && (sGMCreditsStatus != -2))
	{
		button_tap = gPlayerControllers[sGMCreditsPlayer].button_tap;

		if (sGMCreditsStatus == 1)
		{
			if (sGMCreditsRollBeginWait < 120)
			{
				sGMCreditsRollBeginWait++;
			}
			else
			{
				gmCreditsMakeTextBoxBracketSObjs();
				gmCreditsMakeTextBoxGObj();
				sGMCreditsStatus = 0;
			}
		}
		is_paused = sGMCreditsIsPaused;

		if (sGMCreditsIsPaused == FALSE)
		{
			is_paused = gmCreditsCheckPause();
		}
		if (sGMCreditsIsPaused == TRUE)
		{
			is_paused = gmCreditsCheckUnpause();
		}
		sGMCreditsIsPaused = is_paused;

		if (button_tap & START_BUTTON)
		{
			if (sGMCreditsRollSpeed == 0.0037500001F)
			{
				sGMCreditsRollSpeed = 0.049999997F;
			}
			else sGMCreditsRollSpeed = 0.0037500001F;
		}
	}
}

// 0x80133618
gmCreditsName* gmCreditsNameUpdateAlloc(GObj *gobj)
{
	gmCreditsName *cn;

	if (sGMCreditsNameAllocFree == NULL)
	{
		cn = gsMemoryAlloc(sizeof(gmCreditsName), 0x4);
	}
	else
	{
		cn = sGMCreditsNameAllocFree;
		sGMCreditsNameAllocFree = cn->next;
	}
	cn->offset_x = cn->unkgmcreditsstruct0x10 = cn->interpolation = cn->status = 0;

	gobj->user_data.p = cn;

	return cn;
}

// 0x80133684
void gmCreditsNameSetPrevAlloc(gmCreditsName *cn)
{
	cn->next = sGMCreditsNameAllocFree;
	sGMCreditsNameAllocFree = cn;
}

// 0x8013369C
void gmCreditsJobAndNameThreadUpdate(GObj *gobj)
{
	gmCreditsName *cn;
	Vec3f pos;
	DObj *dobj;
	s32 unused[3];

	cn = gobj->user_data.p;
	dobj = gobj->obj;

	cn->interpolation = 0.0F;

	gobj->flags = GOBJ_FLAG_NORENDER;

	while (sGMCreditsStatus != 0)
	{
		gcStopCurrentProcess(1);
	}
	gobj->flags = GOBJ_FLAG_NONE;

	while (cn->interpolation != 1.0F)
	{
		gcAddDObjAnimJoint(dobj, sGMCreditsNameAnimJoint, cn->interpolation * 99.0F);

		hal_interpolation_cubic(&pos, sGMCreditsNameInterpolation, cn->interpolation);

		dobj->translate.vec.f.x = pos.x + cn->offset_x;
		dobj->translate.vec.f.y = pos.y + 12.0F;
		dobj->translate.vec.f.z = pos.z;

		cn->interpolation += sGMCreditsRollSpeed;

		if (cn->interpolation > 1.0F)
		{
			cn->interpolation = 1.0F;
		}
		gcPlayAnimAll(gobj);
		gcStopCurrentProcess(1);
	}
	if (cn->status == -1)
	{
		sGMCreditsStatus = -1;
	}
	gmCreditsNameSetPrevAlloc(cn);
	gcEjectGObj(NULL);
	gcStopCurrentProcess(1);
}

// 0x80133854
void gmCreditsJobProcRender(GObj *gobj)
{
	if (gobj == gOMObjCommonLinks[nOMObjCommonLinkIDCreditsJob])
	{
		gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
		gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
		gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x7F, 0x7F, 0x89, 0xFF);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
	}
	gcDrawDObjTreeForGObj(gobj);
}

// 0x80133930
void gmCreditsNameProcRender(GObj *gobj)
{
	if (gobj == gOMObjCommonLinks[nOMObjCommonLinkIDCreditsName])
	{
		gSPTexture(gDisplayListHead[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
		gDPSetRenderMode(gDisplayListHead[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
		gSPClearGeometryMode(gDisplayListHead[0]++, G_ZBUFFER);
		gDPSetPrimColor(gDisplayListHead[0]++, 0, 0, 0x88, 0x93, 0xFF, 0xFF);
		gDPSetCombineLERP(gDisplayListHead[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
	}
	gcDrawDObjTreeForGObj(gobj);
}

// 0x80133A0C
void gmCreditsJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name)
{
	gmCreditsName *cn = gmCreditsNameUpdateAlloc(gobj);

	cn->offset_x = (first_dobj->translate.vec.f.x - second_dobj->translate.vec.f.x) * 0.5F;

	cn->unkgmcreditsstruct0x10 = 26.0F;

	cn->name_id = sGMCreditsNameID;
	cn->job_or_name = job_or_name;
}

// 0x80133A78
gmCreditsSetup* gmCreditsMakeJobDObjs(gmCreditsSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase)
{
	gmCreditsSetup local_setup;
	DObj *new_dobj;
	f32 width;
	f32 height;
	s32 job_character_id;
	s32 character_id;
	s32 i;

	for
	(
		i = 0, character_id = dGMCreditsJobTextInfo[name_id].character_start, job_character_id = -1;
		i < dGMCreditsJobTextInfo[name_id].character_count;
		job_character_id = character_id, i++, character_id++
	)
	{
		if (dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '))
		{
			wbase += 16.0F;

			continue;
		}
		else
		{
			Gfx *dl = sGMCreditsNameAndJobDisplayLists[dGMCreditsJobCharacters[character_id]];

			width = dGMCreditsNameAndJobSpriteInfo[dGMCreditsJobCharacters[character_id]].width;
			height = dGMCreditsNameAndJobSpriteInfo[dGMCreditsJobCharacters[character_id]].height;

			new_dobj = gcAddChildForDObj(dobj, dl);

			gcAddOMMtxForDObjFixed(new_dobj, nOMTransformTra, 1);

			if (job_character_id != -1)
			{
				if
				(
					(
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('K')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('T')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('V')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('W')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('Y'))
					)
					&&
					(
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('m')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('q')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('v')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('w')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('x')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('z'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'))
					)
					&&
					(
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')) &&
				    (dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'))
				)
				{
					wbase -= 4.0F;
				}
				else if
				(
					(dGMCreditsJobCharacters[job_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('S')) &&
					(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'))
				)
				{
					wbase -= 4.0F;
				}
			}
			new_dobj->translate.vec.f.x = wbase + width;
			new_dobj->translate.vec.f.y = height - 22.0F;

			wbase = new_dobj->translate.vec.f.x + width;

			if (dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('z'))
			{
				new_dobj->translate.vec.f.y += 1.0F;
			}
			if (dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('j'))
			{
				new_dobj->translate.vec.f.y = 22.0F - height;
			}
			if (dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('8'))
			{
				new_dobj->translate.vec.f.y += 22.0F;
			}
			if
			(
				(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g')) ||
				(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p')) ||
				(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('q')) ||
				(dGMCreditsJobCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'))
			)
			{
				new_dobj->translate.vec.f.y = -8.0F;
			}
		}
	}
	local_setup.spacing = wbase;
	local_setup.dobj = new_dobj;

	*name_setup = local_setup;

	return name_setup;
}

// 0x80133E68
GObj* gmCreditsMakeJobGObj(gmCreditsJob *job)
{
	gmCreditsSetup job_setup;
	s32 unused;
	GObj *gobj;
	DObj *dobj;
	f32 wbase;

	wbase = 0.0F;

	gobj = gcMakeGObjSPAfter(1, NULL, nOMObjCommonLinkIDCreditsJob, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, gmCreditsJobProcRender, 2, GOBJ_DLLINKORDER_DEFAULT, -1);

	dobj = gcAddDObjForGObj(gobj, NULL);

	gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);

	if (job->prefix_id != -1)
	{
		gmCreditsMakeJobDObjs(&job_setup, dobj, job->prefix_id, 0.0F);
		wbase = 16.0F + job_setup.spacing;
	}
	gmCreditsMakeJobDObjs(&job_setup, dobj, job->job_id, wbase);
	gmCreditsJobAndNameInitStruct(gobj, dobj, job_setup.dobj, 0);
	gcAddGObjCommonProc(gobj, gmCreditsJobAndNameThreadUpdate, nOMObjProcessKindThread, 1);

	return gobj;
}

// 0x80133F68
GObj* gmCreditsMakeNameGObjAndDObjs(void)
{
	s32 unused;
	GObj *gobj;
	Gfx *dl;
	DObj *dobj;
	DObj *new_dobj;
	f32 width;
	f32 wbase;
	f32 height;
	s32 name_character_id;
	s32 character_id;
	s32 i;

	name_character_id = -1;

	gobj = gcMakeGObjSPAfter(1, NULL, nOMObjCommonLinkIDCreditsName, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, gmCreditsNameProcRender, 1, GOBJ_DLLINKORDER_DEFAULT, -1);

	new_dobj = dobj = gcAddDObjForGObj(gobj, NULL);

	gcAddOMMtxForDObjFixed(dobj, nOMTransformTraRotRpyRSca, 0);

	wbase = 0.0F;

	for
	(
		i = 0, character_id = dGMCreditsNameTextInfo[sGMCreditsNameID].character_start;
		i < dGMCreditsNameTextInfo[sGMCreditsNameID].character_count;
		name_character_id = character_id, i++, character_id++
	)
	{
		if (dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX(' '))
		{
			wbase += 16.0F;

			continue;
		}
		else
		{
			dl = sGMCreditsNameAndJobDisplayLists[dGMCreditsNameCharacters[character_id]];

			width = dGMCreditsNameAndJobSpriteInfo[dGMCreditsNameCharacters[character_id]].width;
			height = dGMCreditsNameAndJobSpriteInfo[dGMCreditsNameCharacters[character_id]].height;

			new_dobj = gcAddChildForDObj(dobj, dl);

			gcAddOMMtxForDObjFixed(new_dobj, nOMTransformTra, 1);

			if (name_character_id != -1)
			{
				if
				(
					(
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('K')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('T')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('V')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('W')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('Y'))
					)
					&&
					(
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('c')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('m')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('n')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('q')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('v')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('w')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('x')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('z'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'))
					)
					&&
					(
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if 
				(
					(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('o')) &&
					(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('s'))
				)
				{
					wbase -= 4.0F;
				}
				else if
				(
					(dGMCreditsNameCharacters[name_character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('S')) &&
					(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('u'))
				)
				{
					wbase -= 4.0F;
				}
			}
			new_dobj->translate.vec.f.x = wbase + width;
			new_dobj->translate.vec.f.y = height - 22.0F;

			wbase = new_dobj->translate.vec.f.x + width;

			if (dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('z'))
			{
				new_dobj->translate.vec.f.y += 1.0F;
			}
			if (dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('j'))
			{
				new_dobj->translate.vec.f.y = 22.0F - height;
			}
			if
			(
				(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('g')) ||
				(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('p')) ||
				(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('q')) ||
				(dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_LETTER_TO_FONT_INDEX('y'))
			)
			{
				new_dobj->translate.vec.f.y = -8.0F;
			}
			if (dGMCreditsNameCharacters[character_id] == GMCREDITS_ASCII_NUMBER_TO_PARAGRAPH_FONT_INDEX('9'))
			{
				new_dobj->translate.vec.f.y -= 4.0F;
			}
		}

	}
	gmCreditsJobAndNameInitStruct(gobj, dobj, new_dobj, 1);
	gcAddGObjCommonProc(gobj, gmCreditsJobAndNameThreadUpdate, 0, 1);

	return gobj;
}

// 0x801343AC
void gmCreditsCrosshairThreadUpdate(GObj *gobj)
{
	SObj *sobj = SObjGetStruct(gobj);
	s32 crosshair_center_wait = 19;

	sobj->pos.x = 291.0F;
	sobj->pos.y = 0.0F;

	do
	{
		sobj->pos.y += 10.5F;

		gcStopCurrentProcess(1);
	} 
	while (crosshair_center_wait--);

	sGMCreditsStatus = 1;

	while (TRUE)
	{
		s32 stick_x = gPlayerControllers[sGMCreditsPlayer].stick_range.x;
		s32 stick_y = gPlayerControllers[sGMCreditsPlayer].stick_range.y;

		f32 base_x = sobj->pos.x;
		f32 base_y = sobj->pos.y;

		sobj->pos.x += (ABS(stick_x) > 16) ? stick_x * 0.125F : 0.0F;
		sobj->pos.y -= (ABS(stick_y) > 16) ? stick_y * 0.125F : 0.0F;

		sobj->pos.x = (sobj->pos.x < 32.0F) ? 32.0F : (sobj->pos.x > 540.0F) ? 540.0F : sobj->pos.x;
		sobj->pos.y = (sobj->pos.y < 36.0F) ? 36.0F : (sobj->pos.y > 400.0F) ? 400.0F : sobj->pos.y;

		sGMCreditsCrosshairPositionX = sobj->pos.x - base_x;
		sGMCreditsCrosshairPositionY = sobj->pos.y - base_y;

		gcStopCurrentProcess(1);
	}
}

// 0x801345FC
void gmCreditsMakeCrosshairGObj(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(3, NULL, 6, GOBJ_LINKORDER_DEFAULT);
	gcAddGObjRenderProc(gobj, func_ovl0_800CCF00, 4, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddGObjCommonProc(gobj, gmCreditsCrosshairThreadUpdate, nOMObjProcessKindThread, 1);

	sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], &lGMCreditsCrosshairSprite));

	sGMCreditsCrosshairGObj = gobj;

	sobj->sprite.attr = SP_TRANSPARENT;

	sobj->sprite.red   = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue  = 0x00;

	sobj->sprite.scalex = 2.0F;
	sobj->sprite.scaley = 2.0F;
}

// 0x801346B4
void gmCreditsMakeTextBoxBracketSObjs(void)
{
	GObj *gobj;
	SObj *left_sobj;
	SObj *right_sobj;

	gobj = gcMakeGObjSPAfter(3, NULL, 8, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, func_ovl0_800CCF00, 7, GOBJ_DLLINKORDER_DEFAULT, -1);

	left_sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], &lGMCreditsTextBoxBracketLeft));

	gobj = gcMakeGObjSPAfter(3, NULL, 8, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, func_ovl0_800CCF00, 7, GOBJ_DLLINKORDER_DEFAULT, -1);

	right_sobj = gcAppendSObjWithSprite(gobj, gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], &lGMCreditsTextBoxBracketRight));

	left_sobj->sprite.attr = right_sobj->sprite.attr = SP_TRANSPARENT;

	left_sobj->sprite.scalex = right_sobj->sprite.scalex = 2.0F;
	left_sobj->sprite.scaley = right_sobj->sprite.scaley = 2.4F;

	left_sobj->sprite.red   = right_sobj->sprite.red   = 0x78;
	left_sobj->sprite.green = right_sobj->sprite.green = 0x6E;
	left_sobj->sprite.blue  = right_sobj->sprite.blue  = 0x40;

	left_sobj->pos.y = right_sobj->pos.y = 30.0F;

	left_sobj->pos.x = 328.0F;
	right_sobj->pos.x = 588.0F;
}

// 0x801347F4
void gmCreditsMakeTextBoxGObj(void)
{
	GObj *gobj = gcMakeGObjSPAfter(4, NULL, 7, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjRenderProc(gobj, gcDrawDObjTreeForGObj, 9, GOBJ_DLLINKORDER_DEFAULT, -1);
	gcAddDObjForGObj(gobj, dGMCreditsTextBoxDisplayList);
}

// 0x80134854
void gmCreditsStaffRollThreadUpdate(GObj *gobj)
{
	GObj *name_gobj;
	gmCreditsJob *job;
	gmCreditsName *name;
	sb32 is_queued_name;    // Whether next block of rolling text is job or name
	f32 interpolation;

	is_queued_name = TRUE;
	job = dGMCreditsJobDescriptions;
	name = gmCreditsMakeJobGObj(job)->user_data.p;

	while (sGMCreditsNameID < ARRAY_COUNT(dGMCreditsStaffRoleTextInfo))
	{
		interpolation = (is_queued_name != FALSE) ? 0.15F : 0.3F;

		if (name->interpolation > interpolation)
		{
			if (is_queued_name != FALSE)
			{
				name_gobj = gmCreditsMakeNameGObjAndDObjs();

				name = name_gobj->user_data.p;

				if (++sGMCreditsNameID == job->staff_count)
				{
					is_queued_name = FALSE;
				}
			}
			else
			{
				job++;

				name = gmCreditsMakeJobGObj(job)->user_data.p;

				is_queued_name = TRUE;
			}
		}
		gcStopCurrentProcess(1);
	}
	name = name_gobj->user_data.p;
	name->status = -1;

	sGMCreditsStaffRollGObj = NULL;

	gcEjectGObj(NULL);
	gcStopCurrentProcess(1);
}

// 0x8013498C
void gmCreditsMakeStaffRollGObj(void)
{
	GObj *gobj = gcMakeGObjSPAfter(0, NULL, 1, GOBJ_LINKORDER_DEFAULT);

	gcAddGObjCommonProc(gobj, gmCreditsStaffRollThreadUpdate, nOMObjProcessKindThread, 1);

	sGMCreditsStaffRollGObj = gobj;
}

// 0x801349DC
void gmCreditsSetupFiles(void)
{
	rdSetup rldm_setup;

	rldm_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;
	rldm_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;
	rldm_setup.file_heap = NULL;
	rldm_setup.file_heap_size = 0;
	rldm_setup.status_buf = sGMCreditsStatusBuf;
	rldm_setup.status_buf_size = ARRAY_COUNT(sGMCreditsStatusBuf);
	rldm_setup.force_buf = NULL;
	rldm_setup.force_buf_size = 0;

	rdManagerInitSetup(&rldm_setup);
	rdManagerLoadFiles(dGMCreditsFileIDs, ARRAY_COUNT(dGMCreditsFileIDs), sGMCreditsFiles, gsMemoryAlloc(rdManagerGetAllocSize(dGMCreditsFileIDs, ARRAY_COUNT(dGMCreditsFileIDs)), 0x10));
}

// 0x80134A70
void gmCreditsInitNameAndJobDisplayLists(void)
{
	Gfx *dl;
	Vtx *vtx_base, *vtx_current;
	s32 i, j;

	for (i = 0; i < (ARRAY_COUNT(sGMCreditsNameAndJobDisplayLists) + ARRAY_COUNT(dGMCreditsNameAndJobSpriteInfo)) / 2; i++)
	{
		vtx_base = vtx_current = gsMemoryAlloc(sizeof(Vtx) * 4, 0x8);

		for (j = 0; j < 4; j++, vtx_current++)
		{
			vtx_current->v.ob[0] = (j & 2) ? -dGMCreditsNameAndJobSpriteInfo[i].width : dGMCreditsNameAndJobSpriteInfo[i].width;
			vtx_current->v.ob[1] = (j == 0) ? dGMCreditsNameAndJobSpriteInfo[i].height : (j < 3) ? -dGMCreditsNameAndJobSpriteInfo[i].height : dGMCreditsNameAndJobSpriteInfo[i].height;
			vtx_current->v.ob[2] = 0;

			vtx_current->v.flag = 0;

			vtx_current->v.tc[0] = (j & 2) ? 0 : dGMCreditsNameAndJobSpriteInfo[i].width * 32;
			vtx_current->v.tc[1] = (j == 0) ? 0 : (j < 3) ? dGMCreditsNameAndJobSpriteInfo[i].height * 32 : 0;

			vtx_current->v.cn[0] = 0x00;
			vtx_current->v.cn[1] = 0x00;
			vtx_current->v.cn[2] = 0x7F;
			vtx_current->v.cn[3] = 0x00;
		}
		sGMCreditsNameAndJobDisplayLists[i] = dl = gsMemoryAlloc(sizeof(Gfx) * 12, 0x8);

		gDPPipeSync(dl++);
		gDPLoadTextureBlock_4b
		(
			dl++, // pkt
			gcGetDataFromFile(Sprite*, sGMCreditsFiles[0], dGMCreditsNameAndJobSpriteInfo[i].offset), // timg
			G_IM_FMT_I, // fmt
			((dGMCreditsNameAndJobSpriteInfo[i].width + 15) / 16) * 16, // width
			dGMCreditsNameAndJobSpriteInfo[i].height, // height
			0, // pal
			G_TX_NOMIRROR | G_TX_CLAMP, // cms
			G_TX_NOMIRROR | G_TX_CLAMP, // cmt
			5, // masks
			5, // maskt
			G_TX_NOLOD, // shifts
			G_TX_NOLOD // shiftt
		);
		gDPPipeSync(dl++);
		gSPVertex(dl++, vtx_base, 4, 0);
		gSP2Triangles(dl++, 3, 2, 1, 0, 0, 3, 1, 0);
		gSPEndDisplayList(dl++);
	}
}

// 0x80134E08
void gmCreditsInitVars(void)
{
	sGMCreditsStatus = 2;
	sGMCreditsNameID = 0;
	sGMCreditsRollSpeed = 0.0037500001F;
	sGMCreditsNameAllocFree = NULL;
	sGMCreditsIsPaused = FALSE;
	sGMCreditsNameInterpolation = gcGetDataFromFile(void*, sGMCreditsFiles[0], &lGMCreditsInterpolation);
	sGMCreditsNameAnimJoint = gcGetDataFromFile(AObjStream*, sGMCreditsFiles[0], &lGMCreditsAnimJoint);
	sGMCreditsDObjDesc = gcGetDataFromFile(DObjDesc*, sGMCreditsFiles[0], &lGMCreditsDObjDesc);
	sGMCreditsRollBeginWait = 0;
	sGMCreditsPlayer = gSceneData.spgame_player;
	sGMCreditsRollEndWait = 60;
}

// 0x80134EA8
void gmCreditsUpdateCameraAt(GObj *gobj)
{
	Camera *cam = CameraGetStruct(gobj);

	cam->vec.at.x += (sGMCreditsCrosshairPositionX * 0.25F);
	cam->vec.at.y -= (sGMCreditsCrosshairPositionY * 0.25F);
}

// 0x80134EE8
void gmCreditsMakeCamera(void)
{
	Camera *cam = CameraGetStruct
	(
		func_8000B93C
		(
			5,
			NULL,
			12,
			GOBJ_LINKORDER_DEFAULT,
			func_ovl0_800CD2CC,
			30,
			CAMERA_MASK_DLLINK(7) | CAMERA_MASK_DLLINK(6) | 
			CAMERA_MASK_DLLINK(5) | CAMERA_MASK_DLLINK(4),
			-1,
			0,
			1,
			NULL,
			1,
			0
		)
	);
	func_80007080(&cam->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

	sGMCreditsCamera = cam = CameraGetStruct
	(
		func_8000B93C
		(
			5,
			NULL,
			12,
			GOBJ_LINKORDER_DEFAULT,
			func_80017EC0,
			50,
			CAMERA_MASK_DLLINK(9) | CAMERA_MASK_DLLINK(8) | 
			CAMERA_MASK_DLLINK(3) | CAMERA_MASK_DLLINK(2) |
			CAMERA_MASK_DLLINK(1),
			-1,
			1,
			1,
			gmCreditsUpdateCameraAt,
			1,
			0
		)
	);
	func_80007080(&cam->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

	cam->vec.eye.y = cam->vec.at.x = cam->vec.at.y = cam->vec.at.z = 0.0F;

	cam->vec.eye.x = 0.0F;
	cam->vec.eye.z = 580.0F;

	cam->projection.persp.fovy = 50.0F;
}

// 0x8013505C
void gmCreditsProcStart(void)
{
	gcMakeGObjSPAfter(0, func_ovl59_801334E4, 1, GOBJ_LINKORDER_DEFAULT);
	func_8000B9FC(0xC, 0x80000000, 0x64, 2, 0xFF);
	gmCreditsSetupFiles();
	gmCreditsInitNameAndJobDisplayLists();
	gmCreditsTryHideUnlocks();
	gmCreditsInitVars();
	gmCreditsMakeCrosshairGObj();
	gmCreditsMakeStaffRollGObj();
	gmCreditsMakeCamera();
	auStopBGM();
	auPlaySong(0, nSYAudioBGMStaffRoll);
}

// 0x8013A6C8
Lights1 dGMCreditsLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x8013A6E0
Gfx dGMCreditsDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dGMCreditsLights1),
	gsSPEndDisplayList()
};

// 0x801350F4
void gmCreditsProcLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dGMCreditsDisplayList);
}

// 0x80135118
void func_ovl59_80135118(void)
{
	func_8000A340();

	if (sGMCreditsRollEndWait != 0)
	{
		if ((sGMCreditsStatus == -1) || (sGMCreditsStatus == -2))
		{
			sGMCreditsRollEndWait--;
		}
	}
	if (sGMCreditsRollEndWait == 0)
	{
		leoInitUnit_atten();
	}
	if (sGMCreditsStatus == -1)
	{
		gSceneData.scene_current = nSCKindN64;

		auStopBGM();
		func_80006E18(0x100);

		sGMCreditsStatus = -2;
	}
}

// 0x8013A708
syDisplaySetup dGMCreditsDisplaySetup =
{
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(640, 480, 0),
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(640, 480, 1),
	SYDISPLAY_DEFINE_FRAMEBUF_ADDR(640, 480, 2),
	NULL,
	640,
	480,
	0x15696
};

// 0x8013A724
scRuntimeInfo dGMCreditsGtlSetup =
{
	0x00000000,
	func_8000A5E4,
	func_ovl59_80135118,
	&ovl59_BSS_END,
	0x00000000,
	0x00000001,
	0x00000002,
	0x00004000,
	0x00000400,
	0x00000000,
	0x00000000,
	0x00001000,
	0x00020000,
	0x00001000,
	gmCreditsProcLights,
	0x80004310,
	0x00000010,
	0x00000600,
	0x00000010,
	0x00000000,
	0x00000040,
	0x00000040,
	0x00000088,
	0x00000100,
	0x00000000,
	0x00000000,
	0x00000020,
	0x00000010,
	0x00000400,
	0x00000088,
	0x00000100,
	0x0000006C,
	0x00000008,
	0x00000090,
	gmCreditsProcStart,
};

// 0x801351B8
void gmCreditsStartScene(void)
{
	/* 
	 * This is really weird. The function will only match if arena32 is assigned a hardcoded constant value.
	 * One would assume they did this for the default 320x230 framebuffers as well, but that is not the case.
	 * The default framebuffers effectively start at ovl1_BSS_END, at 0x80392A00, which is 0x1900 bytes behind
	 * where it would start if they had calculated the address with SYDISPLAY_DEFINE_FRAMEBUF_ADDR.
	 * Does this and the fact that the default framebuffer start only match when used with its extern variable
	 * suggest that they truly start at ovl1_BSS_END and have a definitive location in VRAM, rather than
	 * being only a concept as seen here with the custom 640x480 framebuffer?
	 */

	u32 *arena32 = (u32*)SYDISPLAY_DEFINE_FRAMEBUF_ADDR(640, 480, 0);
	u16 *arena16;

	while ((uintptr_t)arena32 < 0x80400000) { *arena32++ = 0x00000000; }

	dGMCreditsDisplaySetup.zbuffer = syDisplayGetZBuffer(12800);
	func_80007024(&dGMCreditsDisplaySetup);

	dGMCreditsGtlSetup.arena_size = (size_t) ((uintptr_t)SYDISPLAY_DEFINE_FRAMEBUF_ADDR(640, 480, 0) - (uintptr_t)&ovl59_BSS_END);
	gsGTLSceneInit(&dGMCreditsGtlSetup);

	arena16 = gSCSubsysFramebuffer0;

	while ((uintptr_t)arena16 < 0x80400000) { *arena16++ = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01); }
}
