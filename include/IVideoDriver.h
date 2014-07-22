/*
    CIrrlicht - C Bindings for Irrlicht Engine

    Copyright (C) 2014- Danyal Zia (catofdanyal@yahoo.com)

    This software is provided 'as-is', without any express or
    implied warranty. In no event will the authors be held
    liable for any damages arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute
    it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented;
       you must not claim that you wrote the original software.
       If you use this software in a product, an acknowledgment
       in the product documentation would be appreciated but
       is not required.

    2. Altered source versions must be plainly marked as such,
       and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any
       source distribution.
*/

#pragma once

#include "CompileConfig.h"
#include "core.h"
#include "EDriverFeatures.h"
#include "EDriverTypes.h"
#include "SColor.h"
#include "ITexture.h"
#include "S3DVertex.h"
#include "SVertexIndex.h"
#include "EPrimitiveTypes.h"

//! enumeration for geometry transformation states
enum E_TRANSFORMATION_STATE
{
    //! View transformation
    ETS_VIEW = 0,
    //! World transformation
    ETS_WORLD,
    //! Projection transformation
    ETS_PROJECTION,
    //! Texture transformation
    ETS_TEXTURE_0,
    //! Texture transformation
    ETS_TEXTURE_1,
    //! Texture transformation
    ETS_TEXTURE_2,
    //! Texture transformation
    ETS_TEXTURE_3,
    //! Texture transformation
    ETS_TEXTURE_4,
    //! Texture transformation
    ETS_TEXTURE_5,
    //! Texture transformation
    ETS_TEXTURE_6,
    //! Texture transformation
    ETS_TEXTURE_7,
    //! Not used
    ETS_COUNT
};

//! enumeration for signaling resources which were lost after the last render cycle
/** These values can be signaled by the driver, telling the app that some resources
were lost and need to be recreated. Irrlicht will sometimes recreate the actual objects,
but the content needs to be recreated by the application. */
enum E_LOST_RESOURCE
{
    //! The whole device/driver is lost
    ELR_DEVICE = 1,
    //! All texture are lost, rare problem
    ELR_TEXTURES = 2,
    //! The Render Target Textures are lost, typical problem for D3D
    ELR_RTTS = 4,
    //! The HW buffers are lost, will be recreated automatically, but might require some more time this frame
    ELR_HW_BUFFERS = 8
};

//! Special render targets, which usually map to dedicated hardware
/** These render targets (besides 0 and 1) need not be supported by gfx cards */
enum E_RENDER_TARGET
{
    //! Render target is the main color frame buffer
    ERT_FRAME_BUFFER=0,
    //! Render target is a render texture
    ERT_RENDER_TEXTURE,
    //! Multi-Render target textures
    ERT_MULTI_RENDER_TEXTURES,
    //! Render target is the main color frame buffer
    ERT_STEREO_LEFT_BUFFER,
    //! Render target is the right color buffer (left is the main buffer)
    ERT_STEREO_RIGHT_BUFFER,
    //! Render to both stereo buffers at once
    ERT_STEREO_BOTH_BUFFERS,
    //! Auxiliary buffer 0
    ERT_AUX_BUFFER0,
    //! Auxiliary buffer 1
    ERT_AUX_BUFFER1,
    //! Auxiliary buffer 2
    ERT_AUX_BUFFER2,
    //! Auxiliary buffer 3
    ERT_AUX_BUFFER3,
    //! Auxiliary buffer 4
    ERT_AUX_BUFFER4
};

//! Enum for the types of fog distributions to choose from
enum E_FOG_TYPE
{
    EFT_FOG_EXP=0,
    EFT_FOG_LINEAR,
    EFT_FOG_EXP2
};

const char* const FogTypeNames[] =
{
    "FogExp",
    "FogLinear",
    "FogExp2",
    0
};

typedef struct irr_SOverrideMaterial irr_SOverrideMaterial;
typedef struct irr_IRenderTarget irr_IRenderTarget;

struct irr_ITexture;
typedef struct irr_ITexture irr_ITexture;

struct irr_IVideoModeList;
typedef struct irr_IVideoModeList irr_IVideoModeList;

struct irr_IrrlichtDevice;
struct irr_IVideoDriver;
typedef struct irr_IVideoDriver irr_IVideoDriver;

struct irr_Attributes;
struct irr_IImageLoader;
struct irr_IImageWriter;
struct irr_IReadFile;
struct irr_IMeshBuffer;
struct irr_IImage;
struct irr_SMaterial;
struct irr_ISceneNode;
struct irr_IMesh;
struct irr_SLight;
struct irr_IWriteFile;
struct irr_IImage;
struct irr_IMaterialRenderer;
struct irr_SExposedVideoData;
struct irr_IGPUProgrammingServices;
struct irr_IMeshManipulator;
struct irr_IAttributes;
struct irr_SAttributeReadWriteOptions;
struct irr_S3DVertex2TCoords;
struct irr_S3DVertexTangents;

CIRRLICHT_API bool irr_IVideoDriver_beginScene(irr_IVideoDriver* driver, bool backBuffer, bool zBuffer, irr_SColor color);
CIRRLICHT_API bool irr_IVideoDriver_endScene(irr_IVideoDriver* driver);
CIRRLICHT_API bool irr_IVideoDriver_queryFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature);
CIRRLICHT_API void irr_IVideoDriver_disableFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature, bool flag=true);
CIRRLICHT_API const irr_Attributes& irr_IVideoDriver_getDriverAttributes(irr_IVideoDriver* driver);
CIRRLICHT_API bool irr_IVideoDriver_checkDriverReset(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_setTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state, irr_matrix4 mat);
CIRRLICHT_API irr_matrix4 irr_IVideoDriver_getTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state);
CIRRLICHT_API unsigned int irr_IVideoDriver_getImageLoaderCount(irr_IVideoDriver* driver);
CIRRLICHT_API irr_IImageLoader* irr_IVideoDriver_getImageLoader(irr_IVideoDriver* driver, unsigned int n);
CIRRLICHT_API unsigned int irr_IVideoDriver_getImageWriterCount(irr_IVideoDriver* driver);
CIRRLICHT_API irr_IImageWriter* irr_IVideoDriver_getImageWriter(irr_IVideoDriver* driver, unsigned int n);
CIRRLICHT_API void irr_IVideoDriver_setMaterial(irr_IVideoDriver* driver, irr_SMaterial* material);
CIRRLICHT_API irr_ITexture* irr_IVideoDriver_getTexture(irr_IVideoDriver* driver, const char* file);
irr_ITexture* irr_IVideoDriver_getTextureByFile(irr_IVideoDriver* driver, irr_IReadFile* file);

CIRRLICHT_API irr_ITexture* irr_IVideoDriver_getTextureByIndex(irr_IVideoDriver* driver, unsigned int index);
CIRRLICHT_API unsigned int irr_IVideoDriver_getTextureCount(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_renameTexture(irr_IVideoDriver* driver, irr_ITexture* texture, const char* newName);
CIRRLICHT_API irr_ITexture* irr_IVideoDriver_addTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, ECOLOR_FORMAT format = ECF_A8R8G8B8);
irr_ITexture* irr_IVideoDriver_addTexture2(const char* name, irr_IImage* image, void* mipmapData);
CIRRLICHT_API irr_ITexture* irr_IVideoDriver_addRenderTargetTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name = "rt", const ECOLOR_FORMAT format = ECF_UNKNOWN);
CIRRLICHT_API void irr_IVideoDriver_removeTexture(irr_IVideoDriver* driver, irr_ITexture* texture);
CIRRLICHT_API void irr_IVideoDriver_removeAllTextures(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_removeHardwareBuffer(irr_IVideoDriver* driver, irr_IMeshBuffer* mb);
CIRRLICHT_API void irr_IVideoDriver_removeAllHardwareBuffers(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_addOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, irr_IMesh* mesh=0);
CIRRLICHT_API void irr_IVideoDriver_removeOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node);
CIRRLICHT_API void irr_IVideoDriver_removeAllOcclusionQueries(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_runOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, bool visible=false);
CIRRLICHT_API void irr_IVideoDriver_runAllOcclusionQueries(irr_IVideoDriver* driver, bool visible=false);
CIRRLICHT_API void irr_IVideoDriver_updateOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, bool block=true);
CIRRLICHT_API void irr_IVideoDriver_updateAllOcclusionQueries(irr_IVideoDriver* driver, bool block=true);
CIRRLICHT_API unsigned int irr_IVideoDriver_getOcclusionQueryResult(irr_IVideoDriver* driver, irr_ISceneNode* node);
CIRRLICHT_API void irr_IVideoDriver_makeColorKeyTexture(irr_IVideoDriver* driver, irr_ITexture* texture, irr_SColor color, bool zeroTexels = false);
CIRRLICHT_API void irr_IVideoDriver_makeColorKeyTexture2(irr_IVideoDriver* driver, irr_ITexture* texture, irr_vector2di colorKeyPixelPos, bool zeroTexels = false);

CIRRLICHT_API void irr_IVideoDriver_makeNormalMapTexture(irr_IVideoDriver* driver, irr_ITexture* texture, float amplitude=1.0f);
CIRRLICHT_API bool irr_IVideoDriver_setRenderTarget(irr_IVideoDriver* driver, irr_ITexture* texture, bool clearBackBuffer=true, bool clearZBuffer=true, irr_SColor color={0,0,0,0});
CIRRLICHT_API bool irr_IVideoDriver_setRenderTargetByEnum(irr_IVideoDriver* driver, E_RENDER_TARGET target, bool clearTarget=true, bool clearZBuffer=true, irr_SColor color={0,0,0,0});
bool irr_IVideoDriver_setMultipleRenderTarget(irr_IVideoDriver* driver, irr_array target, bool clearBackBuffer=true, bool clearZBuffer=true, irr_SColor color={0,0,0,0});

CIRRLICHT_API void irr_IVideoDriver_setViewPort(irr_IVideoDriver* driver, irr_recti area);
CIRRLICHT_API irr_recti irr_IVideoDriver_getViewPort(irr_IVideoDriver* driver);

CIRRLICHT_API void irr_IVideoDriver_drawVertexPrimitiveList(irr_IVideoDriver* driver, const void* vertices, unsigned int vertexCount,
				const void* indexList, unsigned int primCount,
				E_VERTEX_TYPE vType=EVT_STANDARD,
                E_PRIMITIVE_TYPE pType=EPT_TRIANGLES,
				E_INDEX_TYPE iType=EIT_16BIT);

CIRRLICHT_API void irr_IVideoDriver_draw2DVertexPrimitiveList(irr_IVideoDriver* driver, const void* vertices, unsigned int vertexCount,
				const void* indexList, unsigned int primCount,
				E_VERTEX_TYPE vType=EVT_STANDARD,
				E_PRIMITIVE_TYPE pType=EPT_TRIANGLES,
				E_INDEX_TYPE iType=EIT_16BIT);

//void irr_IVideoDriver_drawIndexedTriangleList_1(irr_IVideoDriver* driver, const irr_S3DVertex* vertices,
//			unsigned int vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_STANDARD, EPT_TRIANGLES, EIT_16BIT);
//};
//
//void irr_IVideoDriver_drawIndexedTriangleList_2(irr_IVideoDriver* driver, const irr_S3DVertex2TCoords* vertices,
//			unsigned int vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_2TCOORDS, EPT_TRIANGLES, EIT_16BIT);
//};
//
//void irr_IVideoDriver_drawIndexedTriangleList_3(irr_IVideoDriver* driver, const irr_S3DVertexTangents* vertices,
//			unsigned int vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_TANGENTS, EPT_TRIANGLES, EIT_16BIT);
//};
//
//void irr_IVideoDriver_drawIndexedTriangleFan_1(irr_IVideoDriver* driver, const irr_S3DVertex* vertices,
//			unsigned int vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_STANDARD, EPT_TRIANGLE_FAN, EIT_16BIT);
//};
//
//void irr_IVideoDriver_drawIndexedTriangleFan_2(irr_IVideoDriver* driver, const irr_S3DVertex2TCoords* vertices,
//			unsigned int vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_2TCOORDS, EPT_TRIANGLE_FAN, EIT_16BIT);
//};
//
//void irr_IVideoDriver_drawIndexedTriangleFan_3(irr_IVideoDriver* driver, const irr_S3DVertexTangents* vertices,
//			unsigned int  vertexCount, const unsigned short int* indexList, unsigned int triangleCount)
//{
//    irr_IVideoDriver_drawVertexPrimitiveList(driver, vertices, vertexCount, indexList, triangleCount, EVT_TANGENTS, EPT_TRIANGLE_FAN, EIT_16BIT);
//};

CIRRLICHT_API void irr_IVideoDriver_draw3DLine(irr_IVideoDriver* driver, irr_vector3df start, irr_vector3df end, irr_SColor color = {255,255,255,255});
CIRRLICHT_API void irr_IVideoDriver_draw3DTriangle(irr_IVideoDriver* driver, irr_triangle3df triangle, irr_SColor color = {255,255,255,255});
CIRRLICHT_API void irr_IVideoDriver_draw3DBox(irr_IVideoDriver* driver, irr_aabbox3df box, irr_SColor color = {255,255,255,255});
CIRRLICHT_API void irr_IVideoDriver_draw2DImage1(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_vector2di destPos);
CIRRLICHT_API void irr_IVideoDriver_draw2DImage2(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_vector2di destPos, irr_recti sourceRect, const irr_recti* clipRect=0, irr_SColor color={255,255,255,255}, bool useAlphaChannelOfTexture=false);
CIRRLICHT_API void irr_IVideoDriver_draw2DImageBatch(irr_IVideoDriver* driver, const irr_ITexture* texture,
				irr_vector2di pos,
				irr_array* sourceRects,
				irr_array* indices,
				int kerningWidth=0,
				const irr_recti* clipRect=0,
				irr_SColor color={255,255,255,255},
				bool useAlphaChannelOfTexture=false);
CIRRLICHT_API void irr_IVideoDriver_draw2DImageBatch2(irr_IVideoDriver* driver, const irr_ITexture* texture,
				irr_array* positions,
				irr_array* sourceRects,
				irr_recti* clipRect=0,
				irr_SColor color={255,255,255,255},
				bool useAlphaChannelOfTexture=false);
CIRRLICHT_API void irr_IVideoDriver_draw2DImage3(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_recti destRect,
			irr_recti sourceRect, const irr_recti* clipRect =0,
			const irr_SColor* colors=0, bool useAlphaChannelOfTexture=false);
CIRRLICHT_API void irr_IVideoDriver_draw2DRectangle(irr_IVideoDriver* driver, irr_SColor color, irr_recti pos,
			const irr_recti* clip =0);
CIRRLICHT_API void irr_IVideoDriver_draw2DRectangle2(irr_IVideoDriver* driver, irr_recti pos,
				irr_SColor colorLeftUp, irr_SColor colorRightUp,
				irr_SColor colorLeftDown, irr_SColor colorRightDown,
				const irr_recti* clip =0);
CIRRLICHT_API void irr_IVideoDriver_draw2DRectangleOutline(irr_IVideoDriver* driver, irr_recti pos,
				irr_SColor color={255,255,255,255});
CIRRLICHT_API void irr_IVideoDriver_draw2DLine(irr_IVideoDriver* driver, irr_vector2di start,
					irr_vector2di end,
					irr_SColor color={255,255,255,255});
CIRRLICHT_API void irr_IVideoDriver_drawPixel(irr_IVideoDriver* driver, unsigned int x, unsigned int y, irr_SColor color);
CIRRLICHT_API void irr_IVideoDriver_draw2DPolygon(irr_IVideoDriver* driver, irr_vector2di center,
				float radius,
				irr_SColor color={100,255,255,255},
				int vertexCount=10);
CIRRLICHT_API void irr_IVideoDriver_drawStencilShadowVolume(irr_IVideoDriver* driver, irr_array* triangles, bool zfail=true, unsigned int debugDataVisible=0);
CIRRLICHT_API void irr_IVideoDriver_drawStencilShadow(irr_IVideoDriver* driver, bool clearStencilBuffer=false,
			irr_SColor leftUpEdge = {255,0,0,0},
			irr_SColor rightUpEdge = {255,0,0,0},
			irr_SColor leftDownEdge = {255,0,0,0},
			irr_SColor rightDownEdge = {255,0,0,0});
CIRRLICHT_API void irr_IVideoDriver_drawMeshBuffer(irr_IVideoDriver* driver, irr_IMeshBuffer* mb);
CIRRLICHT_API void irr_IVideoDriver_drawMeshBufferNormals(irr_IVideoDriver* driver, irr_IMeshBuffer* mb, float length=10.f, irr_SColor color={0,0,0,0});

CIRRLICHT_API void irr_IVideoDriver_setFog(irr_IVideoDriver* driver, irr_SColor color={0,255,255,255}, E_FOG_TYPE fogType=EFT_FOG_LINEAR, float start=50.0f, float end=100.0f, float density=0.01f, bool pixelFog=false, bool rangeFog=false);
CIRRLICHT_API void irr_IVideoDriver_getFog(irr_IVideoDriver* driver, irr_SColor* color, E_FOG_TYPE& fogType, float& start, float& end, float& density, bool& pixelFog, bool& rangeFog);
CIRRLICHT_API ECOLOR_FORMAT irr_IVideoDriver_getColorFormat(irr_IVideoDriver* driver);
CIRRLICHT_API irr_dimension2du irr_IVideoDriver_getScreenSize(irr_IVideoDriver* driver);
CIRRLICHT_API irr_dimension2du irr_IVideoDriver_getCurrentRenderTargetSize(irr_IVideoDriver* driver);
CIRRLICHT_API int irr_IVideoDriver_getFPS(irr_IVideoDriver* driver);
CIRRLICHT_API unsigned int irr_IVideoDriver_getPrimitiveCountDrawn(irr_IVideoDriver* driver, unsigned int mode =0);
CIRRLICHT_API void irr_IVideoDriver_deleteAllDynamicLights(irr_IVideoDriver* driver);
CIRRLICHT_API int irr_IVideoDriver_addDynamicLight(irr_IVideoDriver* driver, irr_SLight* light);
CIRRLICHT_API unsigned int irr_IVideoDriver_getMaximalDynamicLightAmount(irr_IVideoDriver* driver);
CIRRLICHT_API unsigned int irr_IVideoDriver_getDynamicLightCount(irr_IVideoDriver* driver);
CIRRLICHT_API irr_SLight* irr_IVideoDriver_getDynamicLight(irr_IVideoDriver* driver, unsigned int idx);
CIRRLICHT_API void irr_IVideoDriver_turnLightOn(irr_IVideoDriver* driver, int lightIndex, bool turnOn);
CIRRLICHT_API const wchar_t* irr_IVideoDriver_getName(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_addExternalImageLoader(irr_IVideoDriver* driver, irr_IImageLoader* loader);
CIRRLICHT_API void irr_IVideoDriver_addExternalImageWriter(irr_IVideoDriver* driver, irr_IImageWriter* writer);
CIRRLICHT_API unsigned int irr_IVideoDriver_getMaximalPrimitiveCount(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_setTextureCreationFlag(irr_IVideoDriver* driver, E_TEXTURE_CREATION_FLAG flag, bool enabled=true);
CIRRLICHT_API bool irr_IVideoDriver_getTextureCreationFlag(irr_IVideoDriver* driver, E_TEXTURE_CREATION_FLAG flag);
CIRRLICHT_API irr_IImage* irr_IVideoDriver_createImageFromFile(irr_IVideoDriver* driver, const char* file);
irr_IImage* irr_IVideoDriver_createImageFromReadFile(irr_IVideoDriver* driver, irr_IReadFile* file);


CIRRLICHT_API bool irr_IVideoDriver_writeImageToFile(irr_IVideoDriver* driver, irr_IImage* image, const char* filename, unsigned int param = 0);
bool irr_IVideoDriver_writeImageToFile(irr_IVideoDriver* driver, irr_IImage* image, irr_IWriteFile* file, unsigned int param =0);


CIRRLICHT_API irr_IImage* irr_IVideoDriver_createImageFromData(irr_IVideoDriver* driver, ECOLOR_FORMAT format, irr_dimension2du size, void *data, bool ownForeignMemory=false, bool deleteMemory = true);
CIRRLICHT_API irr_IImage* irr_IVideoDriver_createEmptyImage(irr_IVideoDriver* driver, ECOLOR_FORMAT format, irr_dimension2du size);
CIRRLICHT_API irr_IImage* irr_IVideoDriver_createImage(irr_IVideoDriver* driver, irr_ITexture* texture, irr_vector2di pos, irr_dimension2du size);
CIRRLICHT_API void irr_IVideoDriver_OnResize(irr_IVideoDriver* driver, irr_dimension2du size);
CIRRLICHT_API int irr_IVideoDriver_addMaterialRenderer(irr_IVideoDriver* driver, irr_IMaterialRenderer* renderer, const char* name =0);
CIRRLICHT_API irr_IMaterialRenderer* irr_IVideoDriver_getMaterialRenderer(irr_IVideoDriver* driver, unsigned int idx);
CIRRLICHT_API unsigned int irr_IVideoDriver_getMaterialRendererCount(irr_IVideoDriver* driver);
CIRRLICHT_API const char* irr_IVideoDriver_getMaterialRendererName(irr_IVideoDriver* driver, unsigned int idx);
CIRRLICHT_API void irr_IVideoDriver_setMaterialRendererName(irr_IVideoDriver* driver, int idx, const char* name);
CIRRLICHT_API irr_IAttributes* irr_IVideoDriver_createAttributesFromMaterial(irr_IVideoDriver* driver, irr_SMaterial* material, irr_SAttributeReadWriteOptions* options=0);
CIRRLICHT_API void irr_IVideoDriver_fillMaterialStructureFromAttributes(irr_IVideoDriver* driver, irr_SMaterial* outMaterial, irr_IAttributes* attributes);
CIRRLICHT_API irr_SExposedVideoData* irr_IVideoDriver_getExposedVideoData(irr_IVideoDriver* driver);
CIRRLICHT_API E_DRIVER_TYPE irr_IVideoDriver_getDriverType(irr_IVideoDriver* driver);
CIRRLICHT_API irr_IGPUProgrammingServices* irr_IVideoDriver_getGPUProgrammingServices(irr_IVideoDriver* driver);
CIRRLICHT_API irr_IMeshManipulator* irr_IVideoDriver_getMeshManipulator(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_clearZBuffer(irr_IVideoDriver* driver);
CIRRLICHT_API irr_IImage* irr_IVideoDriver_createScreenShot(irr_IVideoDriver* driver, ECOLOR_FORMAT format=ECF_UNKNOWN, E_RENDER_TARGET target=ERT_FRAME_BUFFER);
CIRRLICHT_API irr_ITexture* irr_IVideoDriver_findTexture(irr_IVideoDriver* driver, const char* filename);
CIRRLICHT_API bool irr_IVideoDriver_setClipPlane(irr_IVideoDriver* driver, unsigned int index, irr_plane3df plane, bool enable=false);
CIRRLICHT_API void irr_IVideoDriver_enableClipPlane(irr_IVideoDriver* driver, unsigned int index, bool enable);
CIRRLICHT_API void irr_IVideoDriver_setMinHardwareBufferVertexCount(irr_IVideoDriver* driver, unsigned int count);
CIRRLICHT_API irr_SOverrideMaterial* irr_IVideoDriver_getOverrideMaterial(irr_IVideoDriver* driver);
CIRRLICHT_API irr_SMaterial* irr_IVideoDriver_getMaterial2D(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_enableMaterial2D(irr_IVideoDriver* driver, bool enable=true);
CIRRLICHT_API const char* irr_IVideoDriver_getVendorInfo(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_setAmbientLight(irr_IVideoDriver* driver, irr_SColorf color);
CIRRLICHT_API void irr_IVideoDriver_setAllowZWriteOnTransparent(irr_IVideoDriver* driver, bool flag);
CIRRLICHT_API irr_dimension2du irr_IVideoDriver_getMaxTextureSize(irr_IVideoDriver* driver);
CIRRLICHT_API void irr_IVideoDriver_convertColor(irr_IVideoDriver* driver, const void* sP, ECOLOR_FORMAT sF, int sN, void* dP, ECOLOR_FORMAT dF);
