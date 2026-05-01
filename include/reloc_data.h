#ifndef RELOC_DATA_H
#define RELOC_DATA_H

/*
 * Selector shim — the actual symbol declarations live in
 * include/reloc_data.<version>.h, which is regenerated per-version by
 * tools/genRelocSymbols.py. Switching versions only invalidates the
 * version-specific header, not this shim, so .o files in build/us/ stay
 * valid across a build/jp/ build (and vice versa).
 *
 * REGION_US / REGION_JP are defined by the Makefile based on $(VERSION).
 */

#if defined(REGION_US)
#include "reloc_data.us.h"
#elif defined(REGION_JP)
#include "reloc_data.jp.h"
#else
#error "reloc_data.h included without REGION_US or REGION_JP defined"
#endif

#endif /* RELOC_DATA_H */
