#ifndef _MPCOLL_H_
#define _MPCOLL_H_

#include "mptypes.h"
#include "mpfunctions.h"

extern mpEdgeBounds gMapEdgeBounds;
extern mpRoomDObj *gMapRooms;
extern mpLineGroup gMapLineTypeGroups[/* */];
extern mpGeometryInfo *gMapGeometry;
extern mpVertexInfoContainer *gMapVertexInfo;
extern mpVertexArray *gMapVertexID;
extern mpVertexLinks *gMapVertexLinks;   //
extern mpVertexPosContainer *gMapVertexData; // Vertex positions
extern Vec3f *gMapDynamicCollisions;
extern mpMPointContainer *gMapPoints;
extern s32 gMapLineCount;
extern gsColorRGBA gMapLightColor;
extern s32 gMapRoomCount;
extern f32 gMapLightAngleX;
extern f32 gMapLightAngleY;
extern u16 gMapCollUpdateFrame;
extern u32 gMusicIndexCurrent;
extern u32 gMusicIndexDefault;

#endif
