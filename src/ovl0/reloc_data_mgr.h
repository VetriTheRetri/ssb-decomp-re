#ifndef OVL0_RELOC_DATA_MGR_H
#define OVL0_RELOC_DATA_MGR_H

#include <ssb_types.h>
#include <macros.h>
#include <PR/ultratypes.h>

typedef u32 RldmFileId;

typedef struct rdFileNode 
{
    /* 0x00 */ u32 id;
    /* 0x04 */ void *addr;
} rdFileNode; // size == 8

typedef struct rdSetup
{
    /* 0x00 */ s32 tableRomAddr;
    /* 0x04 */ u32 tableFileCount;
    /* 0x08 */ u8 *fileHeap;
    /* 0x0C */ u32 fileHeapSize;
    /* 0x10 */ rdFileNode *statusBuf;
    /* 0x14 */ s32 statusBufSize;
    /* 0x18 */ rdFileNode *forceBuf;
    /* 0x1C */ s32 forceBufSize;
} rdSetup; // size == 0x20    
    
typedef struct RldmFileSize
{
    u32 file_size;
    u32 largest_size1;
    u32 largest_size2;

} RldmFileSize;

// functions
extern void rdManagerInitSetup(struct rdSetup *setup);
extern void *rldm_get_file_standard(RldmFileId id);
extern void *rldm_get_file_force(RldmFileId id);
extern u32 rdManagerGetFileSize(RldmFileId id);
extern void *rdManagerGetFileWithExternHeap(RldmFileId id, u8 *fileHeap);
extern void *rldm_get_file_external_force(RldmFileId id, u8 *heapAddr);
extern uintptr_t rdManagerLoadFiles(RldmFileId *ids, u32 len, void **filePtrs, u8 *heapAddr);
extern uintptr_t rldm_load_files(RldmFileId *ids, u32 len, void **filePtrs);
extern u32 rdManagerGetAllocSize(RldmFileId *ids, u32 len);

#endif /* OVL0_RELOC_DATA_MGR_H */
