#ifndef _MAP_H_
#define _MAP_H_

#include "mptypes.h"
#include "mpfunctions.h"

extern f32 dMPCollisionMaterialFrictions[/* */];

extern mpGroundData* gMPCollisionGroundData; // TO DO: move this to the correct file (is this the correct
								  // file? NO, this is Patrick!)
extern mpEdgeBounds gMPCollisionEdgeBounds;
extern mpYakumonoDObj *gMPCollisionYakumonoDObjs;
extern mpLineGroup gMPCollisionLineGroups[/* */];
extern mpGeometryInfo *gMPCollisionGeometry;
extern mpVertexInfoContainer *gMPCollisionVertexInfo;
extern mpVertexArray *gMPCollisionVertexIDs;
extern mpVertexLinks *gMPCollisionVertexLinks;   //
extern mpVertexPosContainer *gMPCollisionVertexData; // Vertex positions
extern Vec3f *gMPCollisionDynamics;
extern mpMapObjContainer *gMPCollisionMapObjs;
extern s32 gMPCollisionLinesNum;
extern gsColorRGBA gMPCollisionLightColor;
extern s32 gMPCollisionYakumonosNum;
extern f32 gMPCollisionLightAngleX;
extern f32 gMPCollisionLightAngleY;
extern u16 gMPCollisionUpdateFrame;
extern u32 gMPCollisionBGMCurrent;
extern u32 gMPCollisionBGMDefault;

#endif
