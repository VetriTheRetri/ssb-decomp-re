#ifndef _MN_TITLE_H_
#define _MN_TITLE_H_

typedef struct mnTitleTextureConfig
{
	s32 x;
	s32 y;
	intptr_t offset;

} mnTitleTextureConfig;

#define gmSaveChrMask(kind) (1 << (kind))

#define TAKE_MAX(a, b) \
if ((a) < (b)) (a) = (b) \

#define TAKE_MIN(a, b) \
if ((a) > (b)) (a) = (b) \

#endif