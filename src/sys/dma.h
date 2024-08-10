#ifndef SYSTEM_DMA_H
#define SYSTEM_DMA_H

#include <ssb_types.h>
#include <PR/os.h>
#include <PR/ultratypes.h>

// loadovl.h? or a generic overlay header?
// all ends are exclusive (start..end)
typedef struct syOverlay
{
    uintptr_t rom_start;
    uintptr_t rom_end;
    void *ram_load_start;
    void *ram_text_start;
    void *ram_text_end;
    void *ram_data_start;
    void *ram_data_end;
    void *ram_bss_start;
    void *ram_bss_end;

} syOverlay;

typedef struct syHuffman
{
    struct syHuffman *left;
    struct syHuffman *right;
    s32 value;

} syHuffman;

extern OSPiHandle *gRomPiHandle;

extern void syCreateDmaMesgQueue(void);
extern void syDmaCopy(OSPiHandle *handle, uintptr_t physAddr, uintptr_t virtual, size_t size, u8 direction);
extern void syLoadOverlay(struct syOverlay *ovl);
extern void syDmaRomRead(uintptr_t rom_src, void *ram_src, u32 bytes_num);
extern void syDmaRomWrite(void *ram_src, uintptr_t rom_dst, u32 bytes_num);
extern OSPiHandle* sySramPiInit(void);
extern void syDmaSramRead(u32 romSrc, void *ram_dst, u32 bytes_num);
extern void syDmaSramWrite(void *ram_src, u32 rom_dst, u32 bytes_num);
extern void syDecodeVpk0(u16* data, u32 size, void (*update_stream)(void), u8* out_buf);
extern void syInitVpk0DmaStream(u32 dev_addr, void *ram_addr, u32 bytes_num);
extern void syFillVpk0DmaBuf(void);
extern void syReadVpk0DmaBuf(u32 dev_addr, void *ram_dst, void *ram_addr, u32 bytes_num);
extern void syReadVpk0Dma(u32 dev_addr, void *ram_dst);

#endif /* SYSTEM_DMA_H */
