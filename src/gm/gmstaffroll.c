#include <sc/scene.h>
#include <gm/gmsound.h>
#include <sys/video.h>
#include <sys/thread6.h>

extern void hal_interpolation_cubic(Vec3f*, void*, f32);
extern void syMatrixTraRotRpyRScaF(Mtx44f mf,f32 dx,f32 dy,f32 dz,f32 r,f32 p,f32 h,f32 sx,f32 sy,f32 sz);
extern void syMatrixPerspFastF(Mtx44f a, u16* b, f32 c, f32 d, f32 e, f32 f, f32  g);
extern void syMatrixLookAtF(Mtx44f mf, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
extern void guMtxCatF(Mtx44f a, Mtx44f b, Mtx44f c);

extern void syRdpSetViewport(void*, f32, f32, f32, f32);

// // // // // // // // // // // //
//                               //
//       EXTERNAL VARIABLES      //
//                               //
// // // // // // // // // // // //

extern uintptr_t D_NF_000000C3;

// // // // // // // // // // // //
//                               //
//   GLOBAL / STATIC VARIABLES   //
//                               //
// // // // // // // // // // // //

// 0x8013A7D0
s32 sGMStaffrollPad0x8013A7D0[2];

// 0x8013A7D8
Gfx *sGMStaffrollNameAndJobDisplayLists[56];

// 0x8013A8B8
s32 sGMStaffrollNameID;

// 0x8013A8BC
f32 sGMStaffrollRollSpeed;

// 0x8013A8C0
s32 sGMStaffrollStatus;

// 0x8013A8C4
GMStaffrollName *sGMStaffrollNameAllocFree;

// 0x8013A8C8
GObj *sGMStaffrollScrollGObj;

// 0x8013A8CC
GObj *sGMStaffrollCrosshairGObj;

// 0x8013A8D0
sb32 sGMStaffrollIsPaused;

// 0x8013A8D4
f32 sGMStaffrollCrosshairPositionX;

// 0x8013A8D8
f32 sGMStaffrollCrosshairPositionY;

// 0x8013A8DC
AObjEvent32 *sGMStaffrollNameAnimJoint;

// 0x8013A8E0
void *sGMStaffrollNameInterpolation;

// 0x8013A8E4
CObj *sGMStaffrollCamera;

// 0x8013A8E8
void *sGMStaffrollDObjDesc;

// 0x8013A8EC
s32 sGMStaffrollHighlightSize;

// 0x8013A8F0
f32 sGMStaffrollHighlightPositionX;

// 0x8013A8F4
f32 sGMStaffrollHighlightPositionY;

// 0x8013A8F8
GObj *sGMStaffrollStaffRoleTextGObj;

// 0x8013A8FC
GObj *sGMStaffrollCompanyTextGObj;

// 0x8013A900
s32 sGMStaffrollRollBeginWait;

// 0x8013A904 - controller port to use for credits sequence
u8 sGMStaffrollPlayer;

// 0x8013A908
s32 sGMStaffrollRollEndWait;

// 0x8013A910
LBFileNode sGMStaffrollStatusBuffer[32];

// 0x8013AA10
void *sGMStaffrollFiles[1];

// 0x8013AA18
Mtx44f sGMStaffrollMatrix;

// // // // // // // // // // // //
//                               //
//       INITIALIZED DATA        //
//                               //
// // // // // // // // // // // //

// 0x80135260
s32 dGMStaffrollNameCharacters[/* */] =
{
	#include "credits/staff.credits.encoded"
};

// 0x801364F4
GMStaffrollText dGMStaffrollNameTextInfo[/* */] =
{
	#include "credits/staff.credits.metadata"
};

// 0x80136794
s32 dGMStaffrollUnused0x80136794[/* */] =
{
	0x000004A5, 0x00000000
};

// 0x8013679C
GMStaffrollJob dGMStaffrollJobDescriptions[/* */] =
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
s32 dGMStaffrollJobCharacters[/* */] =
{
	#include "credits/titles.credits.encoded"
};

// 0x80136B10
GMStaffrollText dGMStaffrollJobTextInfo[/* */] =
{
	#include "credits/titles.credits.metadata"
};

// 0x80136BA0
s32 dGMStaffrollStaffRoleCharacters[/* */] =
{
	#include "credits/info.credits.encoded"
};

// 0x80139B68
GMStaffrollText dGMStaffrollStaffRoleTextInfo[/* */] =
{
	#include "credits/info.credits.metadata"
};

// 0x80139E08
s32 dGMStaffrollCompanyCharacters[/* */] =
{
	#include "credits/companies.credits.encoded"
};

// 0x80139FD4
GMStaffrollText dGMStaffrollCompanyTextInfo[/* */] =
{
	#include "credits/companies.credits.metadata"
};

// 0x8013A02C - Empty word in company text info
s32 dGMStaffrollUnused0x8013A02C[/* */] = { 0x00000073, 0x00000000 };

// 0x8013A034
s32 dGMStaffrollCompanyIDs[/* */] =
{
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	-1,
	-1,
	-1,
	-1,
	-1,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	-1,
	nGMStaffrollCompanyARTSVISION,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyAONIProd,
	nGMStaffrollCompanyAONIProd,
	nGMStaffrollCompanyEZAKIProd,
	nGMStaffrollCompanyAONIProd,
	-1,
	nGMStaffrollCompanyMickeys,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	-1, 
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyGAMEFREAK,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyCreatures,
	-1,
	nGMStaffrollCompanyNOA,
	nGMStaffrollCompanyNOA,
	nGMStaffrollCompanyNOA,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyCreatures,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	-1,
	-1,
	-1,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyHAL,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	nGMStaffrollCompanyNINTENDO,
	-1,
	-1
};

// 0x8013A184
u32 dGMStaffrollFileIDs[/* */] = { &D_NF_000000C3 };

// 0x8013A188
GMStaffrollSprite dGMStaffrollNameAndJobSpriteInfo[/* */] =
{
	{ 20, 22, &lGMStaffrollNameAndJobAUpperSprite },
	{ 15, 22, &lGMStaffrollNameAndJobBUpperSprite },
	{ 15, 22, &lGMStaffrollNameAndJobCUpperSprite },
	{ 18, 22, &lGMStaffrollNameAndJobDUpperSprite },
	{ 13, 22, &lGMStaffrollNameAndJobEUpperSprite },
	{ 13, 22, &lGMStaffrollNameAndJobFUpperSprite },
	{ 19, 22, &lGMStaffrollNameAndJobGUpperSprite },
	{ 18, 22, &lGMStaffrollNameAndJobHUpperSprite },
	{  7, 22, &lGMStaffrollNameAndJobIUpperSprite },
	{ 11, 22, &lGMStaffrollNameAndJobJUpperSprite },
	{ 18, 22, &lGMStaffrollNameAndJobKUpperSprite },
	{ 13, 22, &lGMStaffrollNameAndJobLUpperSprite },
	{ 23, 22, &lGMStaffrollNameAndJobMUpperSprite },
	{ 19, 22, &lGMStaffrollNameAndJobNUpperSprite },
	{ 22, 22, &lGMStaffrollNameAndJobOUpperSprite },
	{ 15, 22, &lGMStaffrollNameAndJobPUpperSprite },
	{ 23, 22, &lGMStaffrollNameAndJobQUpperSprite },
	{ 16, 22, &lGMStaffrollNameAndJobRUpperSprite },
	{ 15, 22, &lGMStaffrollNameAndJobSUpperSprite },
	{ 15, 22, &lGMStaffrollNameAndJobTUpperSprite },
	{ 16, 22, &lGMStaffrollNameAndJobUUpperSprite },
	{ 18, 22, &lGMStaffrollNameAndJobVUpperSprite },
	{ 25, 22, &lGMStaffrollNameAndJobWUpperSprite },
	{ 19, 22, &lGMStaffrollNameAndJobXUpperSprite },
	{ 16, 22, &lGMStaffrollNameAndJobYUpperSprite },
	{ 19, 22, &lGMStaffrollNameAndJobZUpperSprite },
	{ 14, 18, &lGMStaffrollNameAndJobALowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobBLowerSprite },
	{ 14, 18, &lGMStaffrollNameAndJobCLowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobDLowerSprite },
	{ 16, 18, &lGMStaffrollNameAndJobELowerSprite },
	{ 11, 22, &lGMStaffrollNameAndJobFLowerSprite },
	{ 15, 22, &lGMStaffrollNameAndJobGLowerSprite },
	{ 15, 22, &lGMStaffrollNameAndJobHLowerSprite },
	{  6, 22, &lGMStaffrollNameAndJobILowerSprite },
	{  8, 26, &lGMStaffrollNameAndJobJLowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobKLowerSprite },
	{  6, 22, &lGMStaffrollNameAndJobLLowerSprite },
	{ 20, 18, &lGMStaffrollNameAndJobMLowerSprite },
	{ 15, 18, &lGMStaffrollNameAndJobNLowerSprite },
	{ 18, 18, &lGMStaffrollNameAndJobOLowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobPLowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobQLowerSprite },
	{ 11, 18, &lGMStaffrollNameAndJobRLowerSprite },
	{ 13, 18, &lGMStaffrollNameAndJobSLowerSprite },
	{ 11, 22, &lGMStaffrollNameAndJobTLowerSprite },
	{ 15, 18, &lGMStaffrollNameAndJobULowerSprite },
	{ 14, 18, &lGMStaffrollNameAndJobVLowerSprite },
	{ 21, 18, &lGMStaffrollNameAndJobWLowerSprite },
	{ 15, 18, &lGMStaffrollNameAndJobXLowerSprite },
	{ 16, 22, &lGMStaffrollNameAndJobYLowerSprite },
	{ 14, 17, &lGMStaffrollNameAndJobZLowerSprite },
	{  7,  7, &lGMStaffrollNameAndJobPeriodSprite },
	{  8, 11, &lGMStaffrollNameAndJobCommaSprite },
	{  8, 11, &lGMStaffrollNameAndJobApostropheSprite },
	{ 16, 22, &lGMStaffrollNameAndJob4Sprite }
};

// 0x8013A348
GMStaffrollSprite dGMStaffrollTextBoxSpriteInfo[/* */] =
{
	{ 12, 14, &lGMStaffrollTextBoxAUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxBUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxCUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxDUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxEUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxFUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxGUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxHUpperSprite },
	{  5, 14, &lGMStaffrollTextBoxIUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxJUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxKUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxLUpperSprite },
	{ 14, 14, &lGMStaffrollTextBoxMUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxNUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxOUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxPUpperSprite },
	{ 13, 14, &lGMStaffrollTextBoxQUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxRUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxSUpperSprite },
	{ 13, 14, &lGMStaffrollTextBoxTUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxUUpperSprite },
	{ 14, 14, &lGMStaffrollTextBoxVUpperSprite },
	{ 14, 14, &lGMStaffrollTextBoxWUpperSprite },
	{ 12, 14, &lGMStaffrollTextBoxXUpperSprite },
	{ 13, 14, &lGMStaffrollTextBoxYUpperSprite },
	{ 14, 14, &lGMStaffrollTextBoxZUpperSprite },
	{ 10, 11, &lGMStaffrollTextBoxALowerSprite },
	{ 10, 13, &lGMStaffrollTextBoxBLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxCLowerSprite },
	{ 10, 13, &lGMStaffrollTextBoxDLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxELowerSprite },
	{  9, 13, &lGMStaffrollTextBoxFLowerSprite },
	{ 10, 12, &lGMStaffrollTextBoxGLowerSprite },
	{ 10, 13, &lGMStaffrollTextBoxHLowerSprite },
	{ 04, 13, &lGMStaffrollTextBoxILowerSprite },
	{ 06, 14, &lGMStaffrollTextBoxJLowerSprite },
	{ 10, 13, &lGMStaffrollTextBoxKLowerSprite },
	{ 04, 13, &lGMStaffrollTextBoxLLowerSprite },
	{ 12, 11, &lGMStaffrollTextBoxMLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxNLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxOLowerSprite },
	{ 10, 12, &lGMStaffrollTextBoxPLowerSprite },
	{ 10, 12, &lGMStaffrollTextBoxQLowerSprite },
	{  9, 11, &lGMStaffrollTextBoxRLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxSLowerSprite },
	{  9, 13, &lGMStaffrollTextBoxTLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxULowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxVLowerSprite },
	{ 12, 11, &lGMStaffrollTextBoxWLowerSprite },
	{ 12, 11, &lGMStaffrollTextBoxXLowerSprite },
	{ 10, 12, &lGMStaffrollTextBoxYLowerSprite },
	{ 10, 11, &lGMStaffrollTextBoxZLowerSprite },
	{  5, 11, &lGMStaffrollTextBoxColonSprite },
	{ 13, 14, &lGMStaffrollTextBox9Sprite },
	{ 13, 14, &lGMStaffrollTextBox8Sprite },
	{ 13, 14, &lGMStaffrollTextBox7Sprite },
	{ 13, 14, &lGMStaffrollTextBox6Sprite },
	{ 13, 14, &lGMStaffrollTextBox5Sprite },
	{ 13, 14, &lGMStaffrollTextBox4Sprite },
	{ 13, 14, &lGMStaffrollTextBox3Sprite },
	{ 13, 14, &lGMStaffrollTextBox2Sprite },
	{  9, 14, &lGMStaffrollTextBox1Sprite },
	{ 13, 14, &lGMStaffrollTextBox0Sprite },
	{  5,  5, &lGMStaffrollTextBoxPeriodSprite },
	{  9, 04, &lGMStaffrollTextBoxDashSprite },
	{  5,  5, &lGMStaffrollTextBoxCommaSprite },
	{ 16, 14, &lGMStaffrollTextBoxAmpersSprite },
	{  5,  5, &lGMStaffrollTextBoxQuoteSprite },
	{ 06, 12, &lGMStaffrollTextBoxSlashSprite },
	{  5,  5, &lGMStaffrollTextBoxApostropheSprite },
	{ 12, 14, &lGMStaffrollTextBoxQuestionSprite },
	{  7, 14, &lGMStaffrollTextBoxBracketOpenSprite },
	{  7, 14, &lGMStaffrollTextBoxBracketCloseSprite },
	{ 10, 13, &lGMStaffrollTextBoxEAccentSprite }
};

// 0x8013A598
Gfx dGMStaffrollTextBoxDisplayList[/* */] =
{
	gsDPPipeSync(),
	gsDPSetCycleType(G_CYC_FILL),
	gsDPSetRenderMode(G_RM_NOOP, G_RM_NOOP2),
	gsDPSetFillColor(GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x42, 0x3A, 0x31, 0x01))),
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

// 0x80131B00 - Resume staff roll on button press, return bool for if paused or not
sb32 gmStaffrollGetPauseStatusResume(void)
{
	sb32 is_paused = TRUE;
	u16 button_tap = gSYControllerDevices[sGMStaffrollPlayer].button_tap;

	if (button_tap & (A_BUTTON | B_BUTTON | Z_TRIG | START_BUTTON))
	{
		GObj *name_gobj;
		GObj *job_gobj;

		if (sGMStaffrollScrollGObj != NULL)
		{
			gcResumeGObjProcessAll(sGMStaffrollScrollGObj);
		}
		name_gobj = gGCCommonLinks[3];

		while (name_gobj != NULL)
		{
			gcResumeGObjProcessAll(name_gobj);

			name_gobj = name_gobj->link_next;
		}
		job_gobj = gGCCommonLinks[4];

		while (job_gobj != NULL)
		{
			gcResumeGObjProcessAll(job_gobj);

			job_gobj = job_gobj->link_next;
		}
		is_paused = FALSE;
	}
	return is_paused;
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
void func_ovl59_80131C88(CObj *cobj)
{
	Mtx44f m, n;

	syMatrixPerspFastF(n, &cobj->projection.persp.norm, cobj->projection.persp.fovy, cobj->projection.persp.aspect, cobj->projection.persp.near, cobj->projection.persp.far, cobj->projection.persp.scale);
	syMatrixLookAtF(m, cobj->vec.eye.x, cobj->vec.eye.y, cobj->vec.eye.z, cobj->vec.at.x, cobj->vec.at.y, cobj->vec.at.z, cobj->vec.up.x, cobj->vec.up.y, cobj->vec.up.z);
	guMtxCatF(m, n, sGMStaffrollMatrix);
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
	guMtxCatF(m, sGMStaffrollMatrix, r);
	func_ovl59_80131BB0(r, vec, width, height);
}

// 0x80131DD0
void func_ovl59_80131DD0(GObj *gobj, GMStaffrollProjection *proj)
{
	GMStaffrollMatrix *credits = gobj->user_data.p;

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
sb32 gmStaffrollCheckCursorNameOverlap(Vec3f *vec)
{
	SObj *sobj = SObjGetStruct(sGMStaffrollCrosshairGObj);
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
	GMStaffrollMatrix *credits = ugobj->user_data.p;

	if ((credits->unk_gmcreditsmtx_0x14 + sGMStaffrollRollSpeed) >= 1.0F)
	{
		gcEjectGObj(NULL);
		gcEjectGObj(sGMStaffrollStaffRoleTextGObj);
		gcEjectGObj(sGMStaffrollCompanyTextGObj);
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
	GObj *gobj = gGCCommonLinks[nGCCommonLinkID02];
	GObj *ugobj = arg0->user_data.p;

	if (gobj == NULL)
	{
		gobj = gcMakeGObjSPAfter(8, NULL, nGCCommonLinkID02, GOBJ_PRIORITY_DEFAULT);
		gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 3, GOBJ_PRIORITY_DEFAULT, ~0);
		gcSetupCustomDObjs(gobj, sGMStaffrollDObjDesc, NULL, nGCMatrixKindTraRotRpyRSca, nGCMatrixKindNull, nGCMatrixKindNull);
		gcAddGObjProcess(gobj, func_ovl59_80131F34, nGCProcessKindFunc, 1);

		gobj->user_data.p = arg0;
		ugobj->unk_gobj_0x1C = gobj;
	}
	else
	{
		gobj->user_data.p = arg0;
		ugobj->unk_gobj_0x1C = gobj;
	}
}

// 0x801320F4
s32 gmStaffrollGetLockOnPositionX(s32 pos_x)
{
	s32 bound_x = pos_x;

	if (pos_x < 20)
	{
		bound_x = 20;
	}
	if (pos_x > 620)
	{
		bound_x = 620;
	}
	return bound_x;
}

// 0x8013211C
s32 gmStaffrollGetLockOnPositionY(s32 pos_y)
{
	s32 bound_y = pos_y;

	if (pos_y < 20)
	{
		bound_y = 20;
	}
	if (pos_y > 460)
	{
		bound_y = 460;
	}
	return bound_y;
}

// 0x80132144
void gmStaffrollHighlightFuncDisplay(GObj *gobj)
{
	s32 unused;

	gDPPipeSync(gSYTaskmanDLHeads[0]++);
	gDPSetCycleType(gSYTaskmanDLHeads[0]++, G_CYC_FILL);
	gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_NOOP, G_RM_NOOP2);
	gDPSetFillColor(gSYTaskmanDLHeads[0]++, GCOMBINE32_RGBA5551(GPACK_RGBA5551(0x80, 0x00, 0x00, 0x01)));
	gDPFillRectangle
	(
		gSYTaskmanDLHeads[0]++,
		gmStaffrollGetLockOnPositionX((sGMStaffrollHighlightSize * -30) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY((sGMStaffrollHighlightSize * -25) + sGMStaffrollHighlightPositionY),
		gmStaffrollGetLockOnPositionX(((sGMStaffrollHighlightSize * -30) + 2) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY(((sGMStaffrollHighlightSize * 45) + 2) + sGMStaffrollHighlightPositionY)
	);
	gDPFillRectangle
	(
		gSYTaskmanDLHeads[0]++,
		gmStaffrollGetLockOnPositionX((sGMStaffrollHighlightSize * -30) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY((sGMStaffrollHighlightSize * -25) + sGMStaffrollHighlightPositionY),
		gmStaffrollGetLockOnPositionX(((sGMStaffrollHighlightSize * 65) + 2) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY(((sGMStaffrollHighlightSize * -25) + 2) + sGMStaffrollHighlightPositionY)
	);
	gDPFillRectangle
	(
		gSYTaskmanDLHeads[0]++,
		gmStaffrollGetLockOnPositionX((sGMStaffrollHighlightSize * -30) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY((sGMStaffrollHighlightSize * 45) + sGMStaffrollHighlightPositionY),
		gmStaffrollGetLockOnPositionX(((sGMStaffrollHighlightSize * 65) + 2) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY(((sGMStaffrollHighlightSize * 45) + 2) + sGMStaffrollHighlightPositionY)
	);
	gDPFillRectangle
	(
		gSYTaskmanDLHeads[0]++,
		gmStaffrollGetLockOnPositionX((sGMStaffrollHighlightSize * 65) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY((sGMStaffrollHighlightSize * -25) + sGMStaffrollHighlightPositionY),
		gmStaffrollGetLockOnPositionX(((sGMStaffrollHighlightSize * 65) + 2) + sGMStaffrollHighlightPositionX),
		gmStaffrollGetLockOnPositionY(((sGMStaffrollHighlightSize * 45) + 2) + sGMStaffrollHighlightPositionY)
	);
}

// 0x8013270C
void gmStaffrollHighlightThreadUpdate(GObj *gobj)
{
	s32 i;

	for (i = 0; i < 3; i++)
	{
		sGMStaffrollHighlightSize = 6;

		while (sGMStaffrollHighlightSize != 0)
		{
			sGMStaffrollHighlightSize--;
			gcStopCurrentGObjThread(1);
		}
	}
	gcEjectGObj(NULL);
	gcStopCurrentGObjThread(1);
}

// 0x801327A4
void gmStaffrollMakeHighlightGObj(GObj *gobj)
{
	GObj *highlight_gobj = gGCCommonLinks[nGCCommonLinkIDHighlight];
	s32 unused;
	SObj *sobj = SObjGetStruct(sGMStaffrollCrosshairGObj);

	if (highlight_gobj == NULL)
	{
		highlight_gobj = gcMakeGObjSPAfter(9, NULL, 9, GOBJ_PRIORITY_DEFAULT);

		gcAddGObjDisplay(highlight_gobj, gmStaffrollHighlightFuncDisplay, 8, GOBJ_PRIORITY_DEFAULT, ~0);
		gcAddGObjProcess(highlight_gobj, gmStaffrollHighlightThreadUpdate, nGCProcessKindThread, 1);

		sGMStaffrollHighlightPositionX = sobj->pos.x + 8.0F;
		sGMStaffrollHighlightPositionY = sobj->pos.y + 20.0F;
	}
}

// 0x80132860
void gmStaffrollSetTextQuetions(s32 *characters, s32 character_count)
{
	s32 i, j, k;
	s32 *cadd, *cbase = &dGMStaffrollStaffRoleCharacters[0];

	for (i = 0; i < ARRAY_COUNT(dGMStaffrollStaffRoleTextInfo) - 1; i++)
	{
		for (cadd = cbase, j = 0, k = 0; j < dGMStaffrollStaffRoleTextInfo[i].character_count; j++, cbase++)
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
					*cadd++ = GMSTAFFROLL_QUESTION_MARK_PARA_FONT_INDEX;

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
void gmStaffrollTryHideUnlocks(void)
{
	s32 unused[5];

	// 0x8013A5E0
	s32 luigi[/* */] =
	{	
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('L'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i')
	};

	// 0x8013A5F4
	s32 purin[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('J'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('p'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('f'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('f')
	};

	// 0x8013A61C
	s32 captain[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('C'),
		GMSTAFFROLL_PERIOD_PARA_FONT_INDEX,
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('F'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('c'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('n')
	};

	// 0x8013A63C
	s32 ness[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('N'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('e'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s')
	};

	// 0x8013A64C
	s32 earthbound[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('E'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('t'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('h'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('B'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('n'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('d')
	};

	// 0x8013A674
	s32 fzero[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('F'),
		GMSTAFFROLL_DASH_PARA_FONT_INDEX,
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('Z'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('E'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('R'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('O'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' '),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('X')
	};

	// 0x8013A694
	s32 classicmario[/* */] =
	{
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('C'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('l'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('c'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('M'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i'),
		GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o')
	};

	if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_LUIGI))
	{
		gmStaffrollSetTextQuetions(luigi, ARRAY_COUNT(luigi));
	}
	if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_PURIN))
	{
		gmStaffrollSetTextQuetions(purin, ARRAY_COUNT(purin));
	}
	if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_CAPTAIN))
	{
		gmStaffrollSetTextQuetions(captain, ARRAY_COUNT(captain));
		gmStaffrollSetTextQuetions(fzero, ARRAY_COUNT(fzero));
	}
	if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_NESS))
	{
		gmStaffrollSetTextQuetions(ness, ARRAY_COUNT(ness));
		gmStaffrollSetTextQuetions(earthbound, ARRAY_COUNT(earthbound));
	}
	if (!(gSCManagerBackupData.unlock_mask & LBBACKUP_UNLOCK_MASK_INISHIE))
	{
		gmStaffrollSetTextQuetions(classicmario, ARRAY_COUNT(classicmario));
	}
}

// 0x80132BB8
void gmStaffrollMakeStaffRoleTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
	s32 character_id;
	SObj *sobj;
	s32 i;
	f32 hvar;
	s32 character_count;
	f32 wbase;
	f32 hbase;
	GMStaffrollName *staff = staff_gobj->user_data.p;

	wbase = 350.0F;
	hbase = 40.0F;

	character_count = dGMStaffrollStaffRoleTextInfo[staff->name_id].character_count;

	for (i = 0, character_id = dGMStaffrollStaffRoleTextInfo[staff->name_id].character_start; i < character_count; i++, character_id++)
	{
		if
		(
			(dGMStaffrollStaffRoleCharacters[character_id] != GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' ')) &&
			(dGMStaffrollStaffRoleCharacters[character_id] != GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('\n'))
		)
		{
			hvar = 0.0F;

			sobj = lbCommonMakeSObjForGObj(text_gobj, lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], dGMStaffrollTextBoxSpriteInfo[dGMStaffrollStaffRoleCharacters[character_id]].offset));

			sobj->sprite.attr = SP_TRANSPARENT;

			sobj->sprite.red   = 0xB7;
			sobj->sprite.green = 0xBC;
			sobj->sprite.blue  = 0xEC;

			sobj->pos.x = wbase;

			sobj->sprite.scalex = sobj->sprite.scaley = 1;

			if (dGMStaffrollStaffRoleCharacters[character_id] >= GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'))
			{
				hvar = 3.0F;

				if
				(
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('b')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('d')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('f')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('h')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('j')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('k')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('l')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('t')      ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_COLON_PARA_FONT_INDEX                ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('9') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('8') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('7') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('6') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('5') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('4') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('3') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('2') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('1') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('0') ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_AMPERSAND_PARA_FONT_INDEX            ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_QUESTION_MARK_PARA_FONT_INDEX        ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_E_ACCENT_PARA_FONT_INDEX             ||
					dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_DOUBLE_QUOTES_PARA_FONT_INDEX
				)
				{
					hvar = 1.0F;
				}
			}
			if (dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_PERIOD_PARA_FONT_INDEX)
			{
				hvar += 6.0F;
			}
			if (dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_DASH_PARA_FONT_INDEX)
			{
				hvar += 2.0F;
			}
			if (dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_COMMA_PARA_FONT_INDEX)
			{
				hvar += 7.0F;
			}
			sobj->pos.y = hbase + hvar;

			wbase += dGMStaffrollTextBoxSpriteInfo[dGMStaffrollStaffRoleCharacters[character_id]].width;
		}
		else if (dGMStaffrollStaffRoleCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' '))
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
void gmStaffrollMakeStaffRoleTextGObj(GObj *staff_gobj)
{
	GObj *text_gobj;

	if (gGCCommonLinks[10] != NULL)
	{
		gcEjectGObj(gGCCommonLinks[10]);
	}
	text_gobj = gcMakeGObjSPAfter(6, NULL, 10, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(text_gobj, lbCommonDrawSObjAttr, 5, GOBJ_PRIORITY_DEFAULT, ~0);

	sGMStaffrollStaffRoleTextGObj = text_gobj;

	gmStaffrollMakeStaffRoleTextSObjs(text_gobj, staff_gobj);
}

// 0x80132EF0
void gmStaffrollMakeCompanyTextSObjs(GObj *text_gobj, GObj *staff_gobj)
{
	SObj *sobj;
	f32 hvar;
	f32 wbase;
	s32 character_id;
	s32 character_count;
	GMStaffrollName *staff = staff_gobj->user_data.p;
	s32 i;

	if (dGMStaffrollCompanyIDs[staff->name_id] != -1)
	{
		wbase = 350.0F;

		character_count = dGMStaffrollCompanyTextInfo[dGMStaffrollCompanyIDs[staff->name_id]].character_count;
		character_id = dGMStaffrollCompanyTextInfo[dGMStaffrollCompanyIDs[staff->name_id]].character_start;

		for (i = 0; i < character_count; i++, character_id++)
		{
			if (dGMStaffrollCompanyCharacters[character_id] != GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' '))
			{
				sobj = lbCommonMakeSObjForGObj(text_gobj, lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], dGMStaffrollTextBoxSpriteInfo[dGMStaffrollCompanyCharacters[character_id]].offset));

				hvar = 0.0F;

				sobj->sprite.attr = SP_TRANSPARENT;

				sobj->sprite.scalex = sobj->sprite.scaley = 1;

				sobj->sprite.red   = 0x80;
				sobj->sprite.green = 0x40;
				sobj->sprite.blue  = 0x80;

				sobj->pos.x = wbase;

				if (dGMStaffrollCompanyCharacters[character_id] >= GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a'))
				{
					hvar = 3.0F;

					if
					(
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('b')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('d')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('f')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('h')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('i')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('j')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('l')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('t')) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_COLON_PARA_FONT_INDEX) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_AMPERSAND_PARA_FONT_INDEX) ||
						(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_DOUBLE_QUOTES_PARA_FONT_INDEX)
					)
					{
						hvar = 1.0F;
					}
				}
				if ((dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_OPEN_PARENTHESIS_PARA_FONT_INDEX) ||
					(dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_CLOSE_PARENTHESIS_PARA_FONT_INDEX))
				{
					hvar = 0.0F;
				}
				if (dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_PERIOD_PARA_FONT_INDEX)
				{
					hvar += 6.0F;
				}
				if (dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_DASH_PARA_FONT_INDEX)
				{
					hvar += 2.0F;
				}
				if (dGMStaffrollCompanyCharacters[character_id] == GMSTAFFROLL_COMMA_PARA_FONT_INDEX)
				{
					hvar += 7.0F;
				}
				sobj->pos.y = 140.0F + hvar;

				wbase += dGMStaffrollTextBoxSpriteInfo[dGMStaffrollCompanyCharacters[character_id]].width;
			}
			else wbase += 3.0F;
		}
	}
	if (text_gobj); // idk just take it
}

// 0x80133184
void gmStaffrollMakeCompanyTextGObj(GObj *staff_gobj)
{
	GObj *text_gobj;

	if (gGCCommonLinks[11] != NULL)
	{
		gcEjectGObj(gGCCommonLinks[11]);
	}
	text_gobj = gcMakeGObjSPAfter(7, NULL, 0xB, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(text_gobj, lbCommonDrawSObjAttr, 6, GOBJ_PRIORITY_DEFAULT, ~0);

	sGMStaffrollCompanyTextGObj = text_gobj;

	gmStaffrollMakeCompanyTextSObjs(text_gobj, staff_gobj);
}

// 0x80133200
sb32 gmStaffrollCheckCursorHighlightPrompt(GObj *gobj, GMStaffrollProjection *proj)
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
		(gmStaffrollCheckCursorNameOverlap(&sp4C) == FALSE) && 
		(gmStaffrollCheckCursorNameOverlap(&sp40) != FALSE) && 
		(gmStaffrollCheckCursorNameOverlap(&sp34) != FALSE) && 
		(gmStaffrollCheckCursorNameOverlap(&sp28) == FALSE)
	)
	{
		func_800269C0_275C0(nSYAudioFGMTrainingSel);

		b = FALSE;

		func_ovl59_8013202C(gobj);
		gmStaffrollMakeHighlightGObj(gobj);
		gmStaffrollMakeStaffRoleTextGObj(gobj);
		gmStaffrollMakeCompanyTextGObj(gobj);
	}
	return b;
}

// 0x8013330C
void func_ovl59_8013330C(void)
{
	GObj *gobj;
	DObj *dobj;
	GMStaffrollProjection proj;
	sb32 b;

	func_ovl59_80131C88(sGMStaffrollCamera);

	gobj = gGCCommonLinks[3];

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

			b = gmStaffrollCheckCursorHighlightPrompt(gobj, &proj);

			gobj = gobj->link_next;
		} 
		while ((gobj != NULL) && (b != FALSE));
	}
}

// 0x8013341C - Highlight staff member if A is pressed and/or pause if B is pressed, get bool for if paused or not
sb32 gmStaffrollGetPauseStatusHighlight(void)
{
	GObj *gobj;
	u16 button_tap = gSYControllerDevices[sGMStaffrollPlayer].button_tap;
	sb32 is_paused = FALSE;

	if (button_tap & (A_BUTTON | B_BUTTON))
	{
		func_ovl59_8013330C();

		if (button_tap & B_BUTTON)
		{
			if (sGMStaffrollScrollGObj != NULL)
			{
				gcPauseGObjProcessAll(sGMStaffrollScrollGObj);
			}
			gobj = gGCCommonLinks[3];

			while (gobj != NULL)
			{
				gcPauseGObjProcessAll(gobj);

				gobj = gobj->link_next;
			}
			gobj = gGCCommonLinks[4];

			while (gobj != NULL)
			{
				gcPauseGObjProcessAll(gobj);

				gobj = gobj->link_next;
			}
			is_paused = TRUE;
		}
	}
	return is_paused;
}

// 0x801334E4
void gmStaffrollFuncRun(GObj *gobj)
{
	sb32 is_paused;
	u16 button_tap;

	if ((sGMStaffrollRollEndWait == 0) || (sGMStaffrollStatus != -1) && (sGMStaffrollStatus != -2))
	{
		button_tap = gSYControllerDevices[sGMStaffrollPlayer].button_tap;

		if (sGMStaffrollStatus == 1)
		{
			if (sGMStaffrollRollBeginWait < 120)
			{
				sGMStaffrollRollBeginWait++;
			}
			else
			{
				gmStaffrollMakeTextBoxBracketSObjs();
				gmStaffrollMakeTextBoxGObj();
				sGMStaffrollStatus = 0;
			}
		}
		is_paused = sGMStaffrollIsPaused;

		if (sGMStaffrollIsPaused == FALSE)
		{
			is_paused = gmStaffrollGetPauseStatusHighlight();
		}
		if (sGMStaffrollIsPaused == TRUE)
		{
			is_paused = gmStaffrollGetPauseStatusResume();
		}
		sGMStaffrollIsPaused = is_paused;

		if (button_tap & START_BUTTON)
		{
			if (sGMStaffrollRollSpeed == 0.0037500001F)
			{
				sGMStaffrollRollSpeed = 0.049999997F;
			}
			else sGMStaffrollRollSpeed = 0.0037500001F;
		}
	}
}

// 0x80133618
GMStaffrollName* GMStaffrollNameUpdateAlloc(GObj *gobj)
{
	GMStaffrollName *cn;

	if (sGMStaffrollNameAllocFree == NULL)
	{
		cn = syTaskmanMalloc(sizeof(GMStaffrollName), 0x4);
	}
	else
	{
		cn = sGMStaffrollNameAllocFree;
		sGMStaffrollNameAllocFree = cn->next;
	}
	cn->offset_x = cn->unkgmcreditsstruct0x10 = cn->interpolation = cn->status = 0;

	gobj->user_data.p = cn;

	return cn;
}

// 0x80133684
void GMStaffrollNameSetPrevAlloc(GMStaffrollName *cn)
{
	cn->next = sGMStaffrollNameAllocFree;
	sGMStaffrollNameAllocFree = cn;
}

// 0x8013369C
void GMStaffrollJobAndNameThreadUpdate(GObj *gobj)
{
	GMStaffrollName *cn;
	Vec3f pos;
	DObj *dobj;
	s32 unused[3];

	cn = gobj->user_data.p;
	dobj = gobj->obj;

	cn->interpolation = 0.0F;

	gobj->flags = GOBJ_FLAG_HIDDEN;

	while (sGMStaffrollStatus != 0)
	{
		gcStopCurrentGObjThread(1);
	}
	gobj->flags = GOBJ_FLAG_NONE;

	while (cn->interpolation != 1.0F)
	{
		gcAddDObjAnimJoint(dobj, sGMStaffrollNameAnimJoint, cn->interpolation * 99.0F);

		hal_interpolation_cubic(&pos, sGMStaffrollNameInterpolation, cn->interpolation);

		dobj->translate.vec.f.x = pos.x + cn->offset_x;
		dobj->translate.vec.f.y = pos.y + 12.0F;
		dobj->translate.vec.f.z = pos.z;

		cn->interpolation += sGMStaffrollRollSpeed;

		if (cn->interpolation > 1.0F)
		{
			cn->interpolation = 1.0F;
		}
		gcPlayAnimAll(gobj);
		gcStopCurrentGObjThread(1);
	}
	if (cn->status == -1)
	{
		sGMStaffrollStatus = -1;
	}
	GMStaffrollNameSetPrevAlloc(cn);
	gcEjectGObj(NULL);
	gcStopCurrentGObjThread(1);
}

// 0x80133854
void GMStaffrollJobFuncDisplay(GObj *gobj)
{
	if (gobj == gGCCommonLinks[4])
	{
		gSPTexture(gSYTaskmanDLHeads[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
		gSPClearGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER);
		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x7F, 0x7F, 0x89, 0xFF);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
	}
	gcDrawDObjTreeForGObj(gobj);
}

// 0x80133930
void GMStaffrollNameFuncDisplay(GObj *gobj)
{
	if (gobj == gGCCommonLinks[3])
	{
		gSPTexture(gSYTaskmanDLHeads[0]++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
		gDPSetRenderMode(gSYTaskmanDLHeads[0]++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
		gSPClearGeometryMode(gSYTaskmanDLHeads[0]++, G_ZBUFFER);
		gDPSetPrimColor(gSYTaskmanDLHeads[0]++, 0, 0, 0x88, 0x93, 0xFF, 0xFF);
		gDPSetCombineLERP(gSYTaskmanDLHeads[0]++, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0);
	}
	gcDrawDObjTreeForGObj(gobj);
}

// 0x80133A0C
void GMStaffrollJobAndNameInitStruct(GObj *gobj, DObj *first_dobj, DObj *second_dobj, sb32 job_or_name)
{
	GMStaffrollName *cn = GMStaffrollNameUpdateAlloc(gobj);

	cn->offset_x = (first_dobj->translate.vec.f.x - second_dobj->translate.vec.f.x) * 0.5F;

	cn->unkgmcreditsstruct0x10 = 26.0F;

	cn->name_id = sGMStaffrollNameID;
	cn->job_or_name = job_or_name;
}

// 0x80133A78
GMStaffrollSetup* gmStaffrollMakeJobDObjs(GMStaffrollSetup *name_setup, DObj *dobj, s32 name_id, f32 wbase)
{
	GMStaffrollSetup local_setup;
	DObj *new_dobj;
	f32 width;
	f32 height;
	s32 job_character_id;
	s32 character_id;
	s32 i;

	for
	(
		i = 0, character_id = dGMStaffrollJobTextInfo[name_id].character_start, job_character_id = -1;
		i < dGMStaffrollJobTextInfo[name_id].character_count;
		job_character_id = character_id, i++, character_id++
	)
	{
		if (dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' '))
		{
			wbase += 16.0F;

			continue;
		}
		else
		{
			Gfx *dl = sGMStaffrollNameAndJobDisplayLists[dGMStaffrollJobCharacters[character_id]];

			width = dGMStaffrollNameAndJobSpriteInfo[dGMStaffrollJobCharacters[character_id]].width;
			height = dGMStaffrollNameAndJobSpriteInfo[dGMStaffrollJobCharacters[character_id]].height;

			new_dobj = gcAddChildForDObj(dobj, dl);

			gcAddXObjForDObjFixed(new_dobj, nGCMatrixKindTra, 1);

			if (job_character_id != -1)
			{
				if
				(
					(
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('K')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('T')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('V')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('W')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('Y'))
					)
					&&
					(
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('c')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('m')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('n')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('p')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('q')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('v')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('w')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('x')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('z'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y'))
					)
					&&
					(
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o')) &&
				    (dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s'))
				)
				{
					wbase -= 4.0F;
				}
				else if
				(
					(dGMStaffrollJobCharacters[job_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('S')) &&
					(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u'))
				)
				{
					wbase -= 4.0F;
				}
			}
			new_dobj->translate.vec.f.x = wbase + width;
			new_dobj->translate.vec.f.y = height - 22.0F;

			wbase = new_dobj->translate.vec.f.x + width;

			if (dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('z'))
			{
				new_dobj->translate.vec.f.y += 1.0F;
			}
			if (dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('j'))
			{
				new_dobj->translate.vec.f.y = 22.0F - height;
			}
			if (dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('8'))
			{
				new_dobj->translate.vec.f.y += 22.0F;
			}
			if
			(
				(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g')) ||
				(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('p')) ||
				(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('q')) ||
				(dGMStaffrollJobCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y'))
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
GObj* gmStaffrollMakeJobGObj(GMStaffrollJob *job)
{
	GMStaffrollSetup job_setup;
	s32 unused;
	GObj *gobj;
	DObj *dobj;
	f32 wbase;

	wbase = 0.0F;

	gobj = gcMakeGObjSPAfter(1, NULL, 4, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, GMStaffrollJobFuncDisplay, 2, GOBJ_PRIORITY_DEFAULT, ~0);

	dobj = gcAddDObjForGObj(gobj, NULL);

	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);

	if (job->prefix_id != -1)
	{
		gmStaffrollMakeJobDObjs(&job_setup, dobj, job->prefix_id, 0.0F);
		wbase = 16.0F + job_setup.spacing;
	}
	gmStaffrollMakeJobDObjs(&job_setup, dobj, job->job_id, wbase);
	GMStaffrollJobAndNameInitStruct(gobj, dobj, job_setup.dobj, 0);
	gcAddGObjProcess(gobj, GMStaffrollJobAndNameThreadUpdate, nGCProcessKindThread, 1);

	return gobj;
}

// 0x80133F68
GObj* gmStaffrollMakeNameGObjAndDObjs(void)
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

	gobj = gcMakeGObjSPAfter(1, NULL, 3, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, GMStaffrollNameFuncDisplay, 1, GOBJ_PRIORITY_DEFAULT, ~0);

	new_dobj = dobj = gcAddDObjForGObj(gobj, NULL);

	gcAddXObjForDObjFixed(dobj, nGCMatrixKindTraRotRpyRSca, 0);

	wbase = 0.0F;

	for
	(
		i = 0, character_id = dGMStaffrollNameTextInfo[sGMStaffrollNameID].character_start;
		i < dGMStaffrollNameTextInfo[sGMStaffrollNameID].character_count;
		name_character_id = character_id, i++, character_id++
	)
	{
		if (dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(' '))
		{
			wbase += 16.0F;

			continue;
		}
		else
		{
			dl = sGMStaffrollNameAndJobDisplayLists[dGMStaffrollNameCharacters[character_id]];

			width = dGMStaffrollNameAndJobSpriteInfo[dGMStaffrollNameCharacters[character_id]].width;
			height = dGMStaffrollNameAndJobSpriteInfo[dGMStaffrollNameCharacters[character_id]].height;

			new_dobj = gcAddChildForDObj(dobj, dl);

			gcAddXObjForDObjFixed(new_dobj, nGCMatrixKindTra, 1);

			if (name_character_id != -1)
			{
				if
				(
					(
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('K')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('T')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('V')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('W')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('Y'))
					)
					&&
					(
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('c')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('m')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('n')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('p')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('q')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('v')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('w')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('x')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('z'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if
				(
					(
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('k')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('r')) ||
						(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y'))
					)
					&&
					(
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('a')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('e')) ||
						(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o'))
					)
				)
				{
					wbase -= 6.0F;
				}
				else if 
				(
					(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('o')) &&
					(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('s'))
				)
				{
					wbase -= 4.0F;
				}
				else if
				(
					(dGMStaffrollNameCharacters[name_character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('S')) &&
					(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('u'))
				)
				{
					wbase -= 4.0F;
				}
			}
			new_dobj->translate.vec.f.x = wbase + width;
			new_dobj->translate.vec.f.y = height - 22.0F;

			wbase = new_dobj->translate.vec.f.x + width;

			if (dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('z'))
			{
				new_dobj->translate.vec.f.y += 1.0F;
			}
			if (dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('j'))
			{
				new_dobj->translate.vec.f.y = 22.0F - height;
			}
			if
			(
				(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('g')) ||
				(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('p')) ||
				(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('q')) ||
				(dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX('y'))
			)
			{
				new_dobj->translate.vec.f.y = -8.0F;
			}
			if (dGMStaffrollNameCharacters[character_id] == GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX('9'))
			{
				new_dobj->translate.vec.f.y -= 4.0F;
			}
		}

	}
	GMStaffrollJobAndNameInitStruct(gobj, dobj, new_dobj, 1);
	gcAddGObjProcess(gobj, GMStaffrollJobAndNameThreadUpdate, 0, 1);

	return gobj;
}

// 0x801343AC
void gmStaffrollCrosshairThreadUpdate(GObj *gobj)
{
	SObj *sobj = SObjGetStruct(gobj);
	s32 crosshair_center_wait = 19;

	sobj->pos.x = 291.0F;
	sobj->pos.y = 0.0F;

	do
	{
		sobj->pos.y += 10.5F;

		gcStopCurrentGObjThread(1);
	} 
	while (crosshair_center_wait--);

	sGMStaffrollStatus = 1;

	while (TRUE)
	{
		s32 stick_x = gSYControllerDevices[sGMStaffrollPlayer].stick_range.x;
		s32 stick_y = gSYControllerDevices[sGMStaffrollPlayer].stick_range.y;

		f32 base_x = sobj->pos.x;
		f32 base_y = sobj->pos.y;

		sobj->pos.x += (ABS(stick_x) > 16) ? stick_x * 0.125F : 0.0F;
		sobj->pos.y -= (ABS(stick_y) > 16) ? stick_y * 0.125F : 0.0F;

		sobj->pos.x = (sobj->pos.x < 32.0F) ? 32.0F : (sobj->pos.x > 540.0F) ? 540.0F : sobj->pos.x;
		sobj->pos.y = (sobj->pos.y < 36.0F) ? 36.0F : (sobj->pos.y > 400.0F) ? 400.0F : sobj->pos.y;

		sGMStaffrollCrosshairPositionX = sobj->pos.x - base_x;
		sGMStaffrollCrosshairPositionY = sobj->pos.y - base_y;

		gcStopCurrentGObjThread(1);
	}
}

// 0x801345FC
void gmStaffrollMakeCrosshairGObj(void)
{
	GObj *gobj;
	SObj *sobj;

	gobj = gcMakeGObjSPAfter(3, NULL, 6, GOBJ_PRIORITY_DEFAULT);
	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 4, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddGObjProcess(gobj, gmStaffrollCrosshairThreadUpdate, nGCProcessKindThread, 1);

	sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], &lGMStaffrollCrosshairSprite));

	sGMStaffrollCrosshairGObj = gobj;

	sobj->sprite.attr = SP_TRANSPARENT;

	sobj->sprite.red   = 0xFF;
	sobj->sprite.green = 0x00;
	sobj->sprite.blue  = 0x00;

	sobj->sprite.scalex = 2.0F;
	sobj->sprite.scaley = 2.0F;
}

// 0x801346B4
void gmStaffrollMakeTextBoxBracketSObjs(void)
{
	GObj *gobj;
	SObj *left_sobj;
	SObj *right_sobj;

	gobj = gcMakeGObjSPAfter(3, NULL, 8, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 7, GOBJ_PRIORITY_DEFAULT, ~0);

	left_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], &lGMStaffrollTextBoxBracketLeftSprite));

	gobj = gcMakeGObjSPAfter(3, NULL, 8, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, lbCommonDrawSObjAttr, 7, GOBJ_PRIORITY_DEFAULT, ~0);

	right_sobj = lbCommonMakeSObjForGObj(gobj, lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], &lGMStaffrollTextBoxBracketRightSprite));

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
void gmStaffrollMakeTextBoxGObj(void)
{
	GObj *gobj = gcMakeGObjSPAfter(4, NULL, 7, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjDisplay(gobj, gcDrawDObjTreeForGObj, 9, GOBJ_PRIORITY_DEFAULT, ~0);
	gcAddDObjForGObj(gobj, dGMStaffrollTextBoxDisplayList);
}

// 0x80134854
void gmStaffrollScrollThreadUpdate(GObj *gobj)
{
	GObj *name_gobj;
	GMStaffrollJob *job;
	GMStaffrollName *name;
	sb32 is_queued_name;    // Whether next block of rolling text is job or name
	f32 interpolation;

	is_queued_name = TRUE;
	job = dGMStaffrollJobDescriptions;
	name = gmStaffrollMakeJobGObj(job)->user_data.p;

	while (sGMStaffrollNameID < ARRAY_COUNT(dGMStaffrollStaffRoleTextInfo))
	{
		interpolation = (is_queued_name != FALSE) ? 0.15F : 0.3F;

		if (name->interpolation > interpolation)
		{
			if (is_queued_name != FALSE)
			{
				name_gobj = gmStaffrollMakeNameGObjAndDObjs();

				name = name_gobj->user_data.p;

				if (++sGMStaffrollNameID == job->staff_count)
				{
					is_queued_name = FALSE;
				}
			}
			else
			{
				job++;

				name = gmStaffrollMakeJobGObj(job)->user_data.p;

				is_queued_name = TRUE;
			}
		}
		gcStopCurrentGObjThread(1);
	}
	name = name_gobj->user_data.p;
	name->status = -1;

	sGMStaffrollScrollGObj = NULL;

	gcEjectGObj(NULL);
	gcStopCurrentGObjThread(1);
}

// 0x8013498C
void gmStaffrollMakeScrollGObj(void)
{
	GObj *gobj = gcMakeGObjSPAfter(0, NULL, 1, GOBJ_PRIORITY_DEFAULT);

	gcAddGObjProcess(gobj, gmStaffrollScrollThreadUpdate, nGCProcessKindThread, 1);

	sGMStaffrollScrollGObj = gobj;
}

// 0x801349DC
void GMStaffrollSetupFiles(void)
{
	LBRelocSetup rl_setup;

	rl_setup.table_addr = (uintptr_t)&lLBRelocTableAddr;
	rl_setup.table_files_num = (u32)&lLBRelocTableFilesNum;
	rl_setup.file_heap = NULL;
	rl_setup.file_heap_size = 0;
	rl_setup.status_buffer = sGMStaffrollStatusBuffer;
	rl_setup.status_buffer_size = ARRAY_COUNT(sGMStaffrollStatusBuffer);
	rl_setup.force_status_buffer = NULL;
	rl_setup.force_status_buffer_size = 0;

	lbRelocInitSetup(&rl_setup);
	lbRelocLoadFilesExtern(dGMStaffrollFileIDs, ARRAY_COUNT(dGMStaffrollFileIDs), sGMStaffrollFiles, syTaskmanMalloc(lbRelocGetAllocSize(dGMStaffrollFileIDs, ARRAY_COUNT(dGMStaffrollFileIDs)), 0x10));
}

// 0x80134A70
void gmStaffrollInitNameAndJobDisplayLists(void)
{
	Gfx *dl;
	Vtx *vtx_base, *vtx_curr;
	s32 i, j;

	for (i = 0; i < (ARRAY_COUNT(sGMStaffrollNameAndJobDisplayLists) + ARRAY_COUNT(dGMStaffrollNameAndJobSpriteInfo)) / 2; i++)
	{
		vtx_base = vtx_curr = syTaskmanMalloc(sizeof(Vtx) * 4, 0x8);

		for (j = 0; j < 4; j++, vtx_curr++)
		{
			vtx_curr->v.ob[0] = (j & 2) ? -dGMStaffrollNameAndJobSpriteInfo[i].width : dGMStaffrollNameAndJobSpriteInfo[i].width;
			vtx_curr->v.ob[1] = (j == 0) ? dGMStaffrollNameAndJobSpriteInfo[i].height : (j < 3) ? -dGMStaffrollNameAndJobSpriteInfo[i].height : dGMStaffrollNameAndJobSpriteInfo[i].height;
			vtx_curr->v.ob[2] = 0;

			vtx_curr->v.flag = 0;

			vtx_curr->v.tc[0] = (j & 2) ? 0 : dGMStaffrollNameAndJobSpriteInfo[i].width * 32;
			vtx_curr->v.tc[1] = (j == 0) ? 0 : (j < 3) ? dGMStaffrollNameAndJobSpriteInfo[i].height * 32 : 0;

			vtx_curr->v.cn[0] = 0x00;
			vtx_curr->v.cn[1] = 0x00;
			vtx_curr->v.cn[2] = 0x7F;
			vtx_curr->v.cn[3] = 0x00;
		}
		sGMStaffrollNameAndJobDisplayLists[i] = dl = syTaskmanMalloc(sizeof(Gfx) * 12, 0x8);

		gDPPipeSync(dl++);
		gDPLoadTextureBlock_4b
		(
			dl++, // pkt
			lbRelocGetFileData(Sprite*, sGMStaffrollFiles[0], dGMStaffrollNameAndJobSpriteInfo[i].offset), // timg
			G_IM_FMT_I, // fmt
			((dGMStaffrollNameAndJobSpriteInfo[i].width + 15) / 16) * 16, // width
			dGMStaffrollNameAndJobSpriteInfo[i].height, // height
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
void gmStaffrollInitVars(void)
{
	sGMStaffrollStatus = 2;
	sGMStaffrollNameID = 0;
	sGMStaffrollRollSpeed = 0.0037500001F;
	sGMStaffrollNameAllocFree = NULL;
	sGMStaffrollIsPaused = FALSE;
	sGMStaffrollNameInterpolation = lbRelocGetFileData(void*, sGMStaffrollFiles[0], &lGMStaffrollInterpolation);
	sGMStaffrollNameAnimJoint = lbRelocGetFileData(AObjEvent32*, sGMStaffrollFiles[0], &lGMStaffrollAnimJoint);
	sGMStaffrollDObjDesc = lbRelocGetFileData(DObjDesc*, sGMStaffrollFiles[0], &lGMStaffrollDObjDesc);
	sGMStaffrollRollBeginWait = 0;
	sGMStaffrollPlayer = gSCManagerSceneData.player;
	sGMStaffrollRollEndWait = 60;
}

// 0x80134EA8
void gmStaffrollUpdateCameraAt(GObj *gobj)
{
	CObj *cobj = CObjGetStruct(gobj);

	cobj->vec.at.x += (sGMStaffrollCrosshairPositionX * 0.25F);
	cobj->vec.at.y -= (sGMStaffrollCrosshairPositionY * 0.25F);
}

// 0x80134EE8
void gmStaffrollMakeCamera(void)
{
	CObj *cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			5,
			NULL,
			12,
			GOBJ_PRIORITY_DEFAULT,
			lbCommonDrawSprite,
			30,
			COBJ_MASK_DLLINK(7) | COBJ_MASK_DLLINK(6) | 
			COBJ_MASK_DLLINK(5) | COBJ_MASK_DLLINK(4),
			-1,
			0,
			1,
			NULL,
			1,
			0
		)
	);
	syRdpSetViewport(&cobj->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

	sGMStaffrollCamera = cobj = CObjGetStruct
	(
		gcMakeCameraGObj
		(
			5,
			NULL,
			12,
			GOBJ_PRIORITY_DEFAULT,
			func_80017EC0,
			50,
			COBJ_MASK_DLLINK(9) | COBJ_MASK_DLLINK(8) | 
			COBJ_MASK_DLLINK(3) | COBJ_MASK_DLLINK(2) |
			COBJ_MASK_DLLINK(1),
			-1,
			1,
			1,
			gmStaffrollUpdateCameraAt,
			1,
			0
		)
	);
	syRdpSetViewport(&cobj->viewport, 20.0F, 20.0F, 620.0F, 460.0F);

	cobj->vec.eye.y = cobj->vec.at.x = cobj->vec.at.y = cobj->vec.at.z = 0.0F;

	cobj->vec.eye.x = 0.0F;
	cobj->vec.eye.z = 580.0F;

	cobj->projection.persp.fovy = 50.0F;
}

// 0x8013505C
void gmStaffrollFuncStart(void)
{
	gcMakeGObjSPAfter(0, gmStaffrollFuncRun, 1, GOBJ_PRIORITY_DEFAULT);
	gcMakeDefaultCameraGObj(12, GOBJ_PRIORITY_DEFAULT, 100, COBJ_FLAG_FILLCOLOR, GPACK_RGBA8888(0x00, 0x00, 0x00, 0xFF));

	GMStaffrollSetupFiles();
	gmStaffrollInitNameAndJobDisplayLists();
	gmStaffrollTryHideUnlocks();
	gmStaffrollInitVars();
	gmStaffrollMakeCrosshairGObj();
	gmStaffrollMakeScrollGObj();
	gmStaffrollMakeCamera();

	auStopBGM();
	auPlaySong(0, nSYAudioBGMStaffroll);
}

// 0x8013A6C8
Lights1 dGMStaffrollLights1 = gdSPDefLights1(0x20, 0x20, 0x20, 0xFF, 0xFF, 0xFF, 0x0A, 0x32, 0x32);

// 0x8013A6E0
Gfx dGMStaffrollDisplayList[/* */] =
{
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPSetLights1(dGMStaffrollLights1),
	gsSPEndDisplayList()
};

// 0x801350F4
void gmStaffrollFuncLights(Gfx **dls)
{
	gSPDisplayList(dls[0]++, dGMStaffrollDisplayList);
}

// 0x80135118
void gmStaffrollFuncDraw(void)
{
	gcDrawAll();

	if (sGMStaffrollRollEndWait != 0)
	{
		if ((sGMStaffrollStatus == -1) || (sGMStaffrollStatus == -2))
		{
			sGMStaffrollRollEndWait--;
		}
	}
	if (sGMStaffrollRollEndWait == 0)
	{
		syTaskmanSetLoadScene();
	}
	if (sGMStaffrollStatus == -1)
	{
		gSCManagerSceneData.scene_curr = nSCKindStartup;

		auStopBGM();
		syVideoSetFlags(SYVIDEO_FLAG_BLACKOUT);

		sGMStaffrollStatus = -2;
	}
}

// 0x8013A708
SYVideoSetup dGMStaffrollVideoSetup =
{
	SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(640, 480, 0, 0, u16, 0),
	SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(640, 480, 0, 0, u16, 1),
	SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(640, 480, 0, 0, u16, 2),
	NULL,
	640,
	480,
	SYVIDEO_FLAG_DIVOT        | SYVIDEO_FLAG_DITHERFILTER | SYVIDEO_FLAG_GAMMADITHER | 
	0x400                     | SYVIDEO_FLAG_NOBLACKOUT   | SYVIDEO_FLAG_NOGAMMA     |
    SYVIDEO_FLAG_COLORDEPTH16 | SYVIDEO_FLAG_SERRATE      | 0x2
};

// 0x8013A724
SYTaskmanSetup dGMStaffrollTaskmanSetup =
{
    // Task Manager Buffer Setup
    {
        0,                          // ???
        gcRunAll,              		// Update function
        gmStaffrollFuncDraw,        // Frame draw function
        &ovl59_BSS_END,             // Allocatable memory pool start
        0,                          // Allocatable memory pool size
        1,                          // ???
        2,                          // Number of contexts?
        sizeof(Gfx) * 2048,         // Display List Buffer 0 Size
        sizeof(Gfx) * 128,          // Display List Buffer 1 Size
        0,                          // Display List Buffer 2 Size
        0,                          // Display List Buffer 3 Size
        0x1000,                     // Graphics Heap Size
        2,                          // ???
        0x1000,                     // RDP Output Buffer Size
        gmStaffrollFuncLights,     	// Pre-render function
        syControllerFuncRead,            // Controller I/O function
    },

    16,                             // Number of GObjThreads
    sizeof(u64) * 192,              // Thread stack size
    16,                             // Number of thread stacks
    0,                              // ???
    64,                             // Number of GObjProcesses
    64,                             // Number of GObjs
    sizeof(GObj),                   // GObj size
    256,                            // Number of XObjs
    NULL,                           // Matrix function list
    NULL,                           // Function for ejecting DObjVec?
    32,                             // Number of AObjs
    16,                             // Number of MObjs
    1024,                           // Number of DObjs
    sizeof(DObj),                   // DObj size
    256,                            // Number of SObjs
    sizeof(SObj),                   // SObj size
    8,                              // Number of Cameras
    sizeof(CObj),                 	// CObj size
    
    gmStaffrollFuncStart            // Task start function
};

// 0x801351B8
void gmStaffrollStartScene(void)
{
	/* 
	 * This is really weird. The function will only match if arena32 is assigned a hardcoded constant value.
	 * One would assume they did this for the default 320x230 framebuffers as well, but that is not the case.
	 * The default framebuffers effectively start at ovl1_BSS_END, at 0x80392A00, which is 0x1900 bytes behind
	 * where it would start if they had calculated the address with SYVIDEO_DEFINE_FRAMEBUFFER_ADDR.
	 * Does this and the fact that the default framebuffer start only match when used with its extern variable
	 * suggest that they truly start at ovl1_BSS_END and have a definitive location in VRAM, rather than
	 * being only a concept as seen here with the custom 640x480 framebuffer?
	 */

	u32 *arena32 = (u32*)SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(640, 480, 0, 0, u16, 0);
	u16 *arena16;

	while ((uintptr_t)arena32 < 0x80400000) { *arena32++ = 0x00000000; }

	dGMStaffrollVideoSetup.zbuffer = syVideoGetZBuffer(12800);
	syVideoInit(&dGMStaffrollVideoSetup);

	dGMStaffrollTaskmanSetup.buffer_setup.arena_size = (size_t) ((uintptr_t)SYVIDEO_DEFINE_FRAMEBUFFER_ADDR(640, 480, 0, 0, u16, 0) - (uintptr_t)&ovl59_BSS_END);
	syTaskmanRun(&dGMStaffrollTaskmanSetup);

	arena16 = gSCSubsysFramebuffer0;

	while ((uintptr_t)arena16 < 0x80400000) { *arena16++ = GPACK_RGBA5551(0x00, 0x00, 0x00, 0x01); }
}
