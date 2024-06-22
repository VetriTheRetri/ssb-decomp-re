#include <ssb_types.h>

typedef struct gmCreditsMatrix
{
	u8 filler_0x0[0xC];
	f32 unk_gmcreditsmtx_0xC;
	f32 unk_gmcreditsmtx_0x10;
	f32 unk_gmcreditsmtx_0x14;

} gmCreditsMatrix;

typedef struct gmCreditsText
{
	s32 character_start;        // Where to begin reading text from in main character array
	s32 character_count;        // Number of characters in credits role card to display

} gmCreditsText;

typedef struct gmCreditsSprite
{
	u8 width;
	u8 height;
	intptr_t offset;

} gmCreditsSprite;

typedef struct gmCreditsStaff
{
	u8 filler_0x0[0x4];
	s32 staff_id;

} gmCreditsStaff;

typedef enum gmCreditsCompany
{
	gmCredits_Company_Null = -1,
	gmCredits_Company_HAL,
	gmCredits_Company_NINTENDO,
	gmCredits_Company_Creatures,
	gmCredits_Company_GAMEFREAK,
	gmCredits_Company_Rare,
	gmCredits_Company_Mickeys,
	gmCredits_Company_KENProd,
	gmCredits_Company_AONIProd,
	gmCredits_Company_ARTSVISION,
	gmCredits_Company_EZAKIProd,
	gmCredits_Company_NOA

} gmCreditsCompany;

typedef struct gmCreditsName gmCreditsName;

struct gmCreditsName
{
	gmCreditsName *next;
	s32 name_id;
	sb32 job_or_name;   // 0 = job (e.g. Director), 1 = name (e.g. Masahiro Sakurai)
	f32 offset_x;
	f32 unkgmcreditsstruct0x10;
	f32 interpolation;
	s32 status;
	s32 unkgmcreditsstruct0x1C;
};

typedef struct gmCreditsJob
{
	s32 prefix_id;    // e.g. "Chief" -> Chief Programmers
	s32 job_id;       // Job text to use
	s32 staff_count;  // Number of staff members with this job assignment

} gmCreditsJob;

typedef struct gmCreditsSetup
{
	f32 unk_gmcreditsunk_0x0;
	DObj *dobj;
	f32 spacing;
	f32 unk_gmcreditsunk_0xC;
	f32 unk_gmcreditsunk_0x10;

} gmCreditsSetup;

typedef struct gmCreditsProjection
{
	Vec3f pv0;
	Vec3f pv1;
	Vec3f pv2;
	Vec3f pv3;
	f32 px0;
	f32 py0;
	f32 px1;
	f32 py1;
	f32 px2;
	f32 py2;
	f32 px3;
	f32 py3;

} gmCreditsProjection;


extern void hal_perspective_fast_f(Mtx44f a, u16* b, f32 c, f32 d, f32 e, f32 f, f32  g);
extern void hal_look_at_f(Mtx44f mf, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
extern void guMtxCatF(Mtx44f a, Mtx44f b, Mtx44f c);