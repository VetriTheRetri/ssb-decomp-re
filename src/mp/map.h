#ifndef _MAP_H_
#define _MAP_H_

#include "mptypes.h"
#include "mpfunctions.h"

extern mpEdgeBounds gMPEdgeBounds;
extern mpYakumonoDObj *gMPYakumonoDObjs;
extern mpLineGroup gMPLineTypeGroups[/* */];
extern mpGeometryInfo *gMPGeometry;
extern mpVertexInfoContainer *gMPVertexInfo;
extern mpVertexArray *gMPVertexID;
extern mpVertexLinks *gMPVertexLinks;   //
extern mpVertexPosContainer *gMPVertexData; // Vertex positions
extern Vec3f *gMPDynamicCollisions;
extern mpMapObjContainer *gMPMapObjs;
extern s32 gMPLineCount;
extern gsColorRGBA gMPLightColor;
extern s32 gMPYakumonoCount;
extern f32 gMPLightAngleX;
extern f32 gMPLightAngleY;
extern u16 gMPCollUpdateFrame;
extern u32 gMPMusicIDCurrent;
extern u32 gMPMusicIDDefault;

#endif
