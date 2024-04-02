#ifndef SYSTEM_DMA_H
#define SYSTEM_DMA_H

#include <ssb_types.h>

#include <PR/os.h>
#include <PR/ultratypes.h>

// loadovl.h? or a generic overlay header?
// all ends are exclusive (start..end)
typedef struct gsOverlay
{
    u32 romStart;
    u32 romEnd;
    void *ramLoadStart;
    void *ramTextStart;
    void *ramTextEnd;
    void *ramDataStart;
    void *ramDataEnd;
    void *ramNoloadStart;
    void *ramNoloadEnd;

} gsOverlay;

extern OSPiHandle *gRomPiHandle;

extern void gsCreateDmaMesgQueue(void);
extern void gsDmaCopy(OSPiHandle *handle, u32 physAddr, uintptr_t vAddr, u32 size, u8 direction);
extern void gsLoadOverlay(struct gsOverlay *ovl);
extern void gsDmaRomRead(u32 romSrc, void *ramDst, u32 nbytes);
extern void gsDmaRomWrite(void *ramSrc, u32 romDst, u32 nbytes);
extern OSPiHandle *gsSramPiInit(void);
extern void gsDmaSramRead(u32 romSrc, void *ramDst, u32 nbytes);
extern void gsDmaSramWrite(void *ramSrc, u32 romDst, u32 nbytes);
extern void gsReadVpkDma(u32 devAddr, void *ramDst);

#endif /* SYSTEM_DMA_H */
