#ifndef OVL0_RELOC_DATA_MGR_H
#define OVL0_RELOC_DATA_MGR_H

#include <ssb_types.h>
#include <macros.h>
#include <PR/ultratypes.h>

typedef u32 rdFileID;

typedef struct rdFileNode 
{
    /* 0x00 */ u32 id;
    /* 0x04 */ void *addr;
} rdFileNode; // size == 8

typedef struct rdSetup
{
    /* 0x00 */ uintptr_t table_addr;        // ROM address
    /* 0x04 */ u32 table_files_num;         // Total number of files in table?
    /* 0x08 */ void *file_heap;         
    /* 0x0C */ size_t file_heap_size;
    /* 0x10 */ rdFileNode *status_buf;
    /* 0x14 */ size_t status_buf_size;
    /* 0x18 */ rdFileNode *force_buf;
    /* 0x1C */ size_t force_buf_size;
} rdSetup; // size == 0x20

#define GetAddressFromOffset(file_ptr, offset) ((int*)((intptr_t)(file_ptr) + (intptr_t)(offset)))

// Can't actually use this in a matching build, newline memes :(
#define rdManagerSetupCommonFiles(status_buf, force_buf)                    \
{                                                                           \
    rdSetup rd_setup;                                                       \
    rd_setup.table_addr = (uintptr_t)&lRDManagerTableAddr;                  \
    rd_setup.table_files_num = (uintptr_t)&lRDManagerTableFilesNum;         \
    rd_setup.file_heap = NULL;                                              \
    rd_setup.file_heap_size = 0;                                            \
    rd_setup.status_buf = status_buf;                                       \
    rd_setup.status_buf_size = (status_buf) ? ARRAY_COUNT(status_buf) : 0;  \
    rd_setup.force_buf = force_buf;                                         \
    rd_setup.force_buf_size = (force_buf) ? ARRAY_COUNT(force_buf) : 0;     \
    rdManagerInitSetup(&rd_setup);                                          \
    rdManagerLoadFiles                                                      \
    (                                                                       \
        dGMCommonFileIDs,                                                   \
        ARRAY_COUNT(dGMCommonFileIDs),                                      \
        gGMCommonFiles,                                                     \
        gsMemoryAlloc                                                       \
        (                                                                   \
            rdManagerGetAllocSize                                           \
            (                                                               \
                dGMCommonFileIDs,                                           \
                ARRAY_COUNT(dGMCommonFileIDs)                               \
            ),                                                              \
            0x10                                                            \
        )                                                                   \
    );                                                                      \
}

extern uintptr_t lRDManagerTableFilesNum;   // 0x00000854
extern uintptr_t lRDManagerTableAddr;       // 0x001AC870

// functions
extern void rdManagerInitSetup(struct rdSetup *setup);
extern void *rldm_get_file_standard(rdFileID id);
extern void *rldm_get_file_force(rdFileID id);
extern u32 rdManagerGetFileSize(rdFileID id);
extern void *rdManagerGetFileWithExternHeap(rdFileID id, u8 *file_heap);
extern void *rldm_get_file_external_force(rdFileID id, u8 *heapAddr);
extern uintptr_t rdManagerLoadFiles(rdFileID *ids, u32 len, void **filePtrs, u8 *heapAddr);
extern uintptr_t rldm_load_files(rdFileID *ids, u32 len, void **filePtrs);
extern u32 rdManagerGetAllocSize(rdFileID *ids, u32 len);

#endif /* OVL0_RELOC_DATA_MGR_H */
