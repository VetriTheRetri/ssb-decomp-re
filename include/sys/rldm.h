#ifndef SYS_RLDM_H
#define SYS_RLDM_H

#include <ssb_types.h>

typedef u32 RldmFileId;

typedef struct RldmFileNode
{
	/* 0x00 */ u32 id;
	/* 0x04 */ void* addr;
} RldmFileNode; // size == 8

typedef struct RldmSetup
{
	/* 0x00 */ s32 tableRomAddr;
	/* 0x04 */ u32 tableFileCount;
	/* 0x08 */ u8* fileHeap;
	/* 0x0C */ u32 fileHeapSize;
	/* 0x10 */ RldmFileNode* statusBuf;
	/* 0x14 */ s32 statusBufSize;
	/* 0x18 */ RldmFileNode* forceBuf;
	/* 0x1C */ s32 forceBufSize;
} RldmSetup; // size == 0x20

extern u32 rldm_bytes_needed_to_load(u32);
extern void* rldm_get_file_with_external_heap(u32, u8*);

#endif /* SYS_RLDM_H */
