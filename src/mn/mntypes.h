#ifndef _MNTYPES_H_
#define _MNTYPES_H_

#include <ssb_types.h>
#include <macros.h>
#include <sys/obj.h>
#include <gm/generic.h>

#include <mn/mndef.h>

struct MNTitleSpriteDesc
{
	Vec2i pos;
	intptr_t offset;
};

struct MNCongraPicture
{
	u32 bottom_file_id;
	intptr_t bottom_offset;
	u32 top_file_id;
	intptr_t top_offset;
};

struct MNCharactersMotion
{
	s32 status_id;
	s32 anim_length;
	u32 flags;
};

struct MNCharactersSpecialMotion
{
	MNCharactersMotion motions[3][8];
};

struct MNVSResultsScore
{
	s32 score;
	s32 place;
	s32 player;
};

#endif