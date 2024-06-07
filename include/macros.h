#ifndef SSB_C_MACROS_H
#define SSB_C_MACROS_H

/// Floating Point Constants
#define FLOAT_MAX 3.4028235e38
#define FLOAT_NEG_MAX -FLOAT_MAX
#define FLOAT_MAX_HALF (FLOAT_MAX / 2) // FLOAT_MAX_HALF

#define F32_MAX 3.40282346639e+38F
#define F32_MIN (-F32_MAX)
#define F32_HALF (F32_MAX / 2)

#define QUART_PI32 0.7853982F
#define HALF_PI32 1.5707964F
#define PI32 3.1415927F
#define DOUBLE_PI32 6.2831855F

#define PI64 3.14159265358979323846
#define DTOR64 (PI64 / 180)
#define RTOD64 (180 / PI64)

#define DTOR32 ((float)DTOR64)
#define RTOD32 ((float)RTOD64)

// Float convert degrees to radians
#define F_DEG_TO_RAD(x) ((float)((x)*DTOR32))

// Float convert radians to degrees
#define F_RAD_TO_DEG(x) ((float)((x) / RTOD32))

// Integer convert degrees to radians
#define I_DEG_TO_RAD(x) ((int)((x)*DTOR32))

// Integer convert radians to degrees
#define I_RAD_TO_DEG(x) ((int)((x) / RTOD32))

// Float convert percentage to decimal notation
#define F_PCT_TO_DEC(x) ((float)((x)*0.01F))

// Bitfield macros to set up in-game bytecode commands (e.g. colanim events, CPU input scripts)
#define GC_BITFIELD(n) (1 << (n))
#define GC_BITMASK(len) (GC_BITFIELD(len) - 1)
#define GC_FIELDMASK(start, len) (GC_BITMASK(len) << (start))
#define GC_FIELDPREP(x, start, len) (((x)&GC_BITMASK(len)) << (start))
#define GC_FIELDSET(x, start, len)                                                                                     \
	(0 & ~GC_FIELDMASK(start, len) | GC_FIELDPREP(x, start, len)) // I'm too dumb to do it without the 0

#define GS_FRAMERATE_DEFAULT (60)

#define GS_TIME_SEC (GS_FRAMERATE_DEFAULT * 1)
#define GS_TIME_MIN (GS_TIME_SEC * 60)
#define GS_TIME_HRS (GS_TIME_MIN * 60)

#define I_GS_TIME_TO_FRAMES(q, u) ((int)((q) * (u)))

#define I_SEC_TO_FRAMES(q) ((int)((q)*GS_TIME_SEC))
#define I_FRAMES_TO_SEC(q) ((int)((q) / GS_TIME_SEC))
#define I_MIN_TO_SEC(q) ((int)((q)*GS_TIME_SEC))
#define I_MIN_TO_FRAMES(q) ((int)((q)*GS_TIME_MIN))
#define I_HRS_TO_FRAMES(q) ((int)((q)*GS_TIME_HRS))

#define I_TIME_TO_FRAMES(h, m, s, f) (I_HRS_TO_FRAMES(h) + I_MIN_TO_FRAMES(m) + I_SEC_TO_FRAMES(s) + (f))

#define U8_MAX 0xFF
#define S8_MAX 0x7F
#define S8_MIN 0x80

#define U16_MAX 0xFFFF
#define S16_MAX 0x7FFF
#define S16_MIN 0x8000

#define U32_MAX 0xFFFFFFFF
#define S32_MAX 0x7FFFFFFF
#define S32_MIN 0x80000000

/// Get the number of elements in a static array
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))

/// Math Functions
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define ABSF(x) ((x) < 0.0F ? -(x) : (x))

// Helpful to have some defines that are explicitly float-sized
#define M_PI_F ((f32)M_PI)
#define M_DTOR_F(x) ((f32)((x) * (f32)M_DTOR))

/// Avoid compiler warnings for unused variables
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif

/// Apply compiler printf format checking to function
#ifdef __GNUC__
#define PRINTF_CHECK(fmtpos, vargpos) __attribute__((__format__(__printf__, (fmtpos), (vargpos))))
#else
#define PRINTF_CHECK(fmtpos, vargpos)
#endif

#define GLUE(a, b) a##b
#define GLUE2(a, b) GLUE(a, b)

/// Static assertions
#ifdef __GNUC__
#define STATIC_ASSERT(cond, msg) _Static_assert(cond, msg)
#else
#define STATIC_ASSERT(cond, msg) typedef char GLUE2(static_assertion_failed, __LINE__)[(cond) ? 1 : -1]
#endif

/// Convert from a physical addresss to a ROM (0xB0) address
#define PHYSICAL_TO_ROM(x) ((uintptr_t)(x) + 0xB0000000)

/// Turn off syntax check diagnostic
#ifdef __GNUC__
#define DO_PRAGMA(x) _Pragma(#x)
#define DIAGNOSTIC_SAVE() _Pragma("GCC diagnostic push")
#define DIAGNOSTIC_IGNORE(d) DO_PRAGMA(GCC diagnostic ignored d)
#define DIAGNOSTIC_RESTORE() _Pragma("GCC diagnostic pop")

#else
#define DIAGNOSTIC_SAVE()
#define DIAGNOSTIC_IGNORE(d)
#define DIAGNOSTIC_RESTORE()

#endif
#endif /* SSB_C_MACROS_H */
