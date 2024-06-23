#ifndef _MPCOLL_H_
#define _MPCOLL_H_

#include "mptypes.h"
#include "mpfunctions.h"

extern mpEdgeBounds gMPEdgeBounds;
extern mpRoomDObj *gMPRooms;
extern mpLineGroup gMPLineTypeGroups[/* */];
extern mpGeometryInfo *gMPGeometry;
extern mpVertexInfoContainer *gMPVertexInfo;
extern mpVertexArray *gMPVertexID;
extern mpVertexLinks *gMPVertexLinks;   //
extern mpVertexPosContainer *gMPVertexData; // Vertex positions
extern Vec3f *gMPDynamicCollisions;
extern mpMPointContainer *gMPPoints;
extern s32 gMPLineCount;
extern gsColorRGBA gMPLightColor;
extern s32 gMPRoomCount;
extern f32 gMPLightAngleX;
extern f32 gMPLightAngleY;
extern u16 gMPCollUpdateFrame;
extern u32 gMusicIndexCurrent;
extern u32 gMusicIndexDefault;

#endif
