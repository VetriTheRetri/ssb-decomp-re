#ifndef _CMDEF_H_
#define _CMDEF_H_

#define CAMERA_FLAG_BOUND_LEFT   (1 << nCMDirectionBoundLeft)
#define CAMERA_FLAG_BOUND_RIGHT  (1 << nCMDirectionBoundRight)
#define CAMERA_FLAG_BOUND_BOTTOM (1 << nCMDirectionBoundBottom)
#define CAMERA_FLAG_BOUND_TOP    (1 << nCMDirectionBoundTop)

// Enums
typedef enum cmDirectionBounds
{
    nCMDirectionBoundLeft,
    nCMDirectionBoundRight,
    nCMDirectionBoundBottom,
    nCMDirectionBoundTop
} 
cmDirectionBounds;

// Structs
typedef struct cmStruct                 cmStruct;

#endif
