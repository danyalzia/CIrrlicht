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

#ifndef _CIRRLICHT_IVIDEODRIVER_
#define _CIRRLICHT_IVIDEODRIVER_

#include "core.h"
#include "EDriverFeatures.h"
#include "SColor.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

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
struct irr_IMeshBuffer;
struct irr_IImage;
struct irr_SMaterial;
struct irr_ISceneNode;
struct irr_IMesh;

bool irr_IVideoDriver_beginScene(irr_IVideoDriver* driver, bool backBuffer, bool zBuffer, irr_SColor color);
bool irr_IVideoDriver_endScene(irr_IVideoDriver* driver);
bool irr_IVideoDriver_queryFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature);
void irr_IVideoDriver_disableFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature, bool flag=true);
const irr_Attributes& irr_IVideoDriver_getDriverAttributes(irr_IVideoDriver* driver);
bool irr_IVideoDriver_checkDriverReset(irr_IVideoDriver* driver);
void irr_IVideoDriver_setTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state, irr_matrix4 mat);
irr_matrix4 irr_IVideoDriver_getTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state);
unsigned int irr_IVideoDriver_getImageLoaderCount(irr_IVideoDriver* driver);
irr_IImageLoader* irr_IVideoDriver_getImageLoader(irr_IVideoDriver* driver, unsigned int n);
unsigned int irr_IVideoDriver_getImageWriterCount(irr_IVideoDriver* driver);
irr_IImageWriter* irr_IVideoDriver_getImageWriter(irr_IVideoDriver* driver, unsigned int n);
void irr_IVideoDriver_setMaterial(irr_IVideoDriver* driver, irr_SMaterial* material);
irr_ITexture* irr_IVideoDriver_getTexture(irr_IVideoDriver* driver, const char* file);
irr_ITexture* irr_IVideoDriver_getTextureByIndex(irr_IVideoDriver* driver, unsigned int index);
unsigned int irr_IVideoDriver_getTextureCount(irr_IVideoDriver* driver);
void irr_IVideoDriver_renameTexture(irr_IVideoDriver* driver, irr_ITexture* texture, const char* newName);
irr_ITexture* irr_IVideoDriver_addTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, ECOLOR_FORMAT format = ECF_A8R8G8B8);
//irr_ITexture* irr_IVideoDriver_addTexture(const char* name, irr_IImage* image, void* mipmapData);
irr_ITexture* irr_IVideoDriver_addRenderTargetTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name = "rt", const ECOLOR_FORMAT format = ECF_UNKNOWN);
void irr_IVideoDriver_removeTexture(irr_IVideoDriver* driver, irr_ITexture* texture);
void irr_IVideoDriver_removeAllTextures(irr_IVideoDriver* driver);
void irr_IVideoDriver_removeHardwareBuffer(irr_IVideoDriver* driver, irr_IMeshBuffer* mb);
void irr_IVideoDriver_removeAllHardwareBuffers(irr_IVideoDriver* driver);
void irr_IVideoDriver_addOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, irr_IMesh* mesh=0);
void irr_IVideoDriver_removeOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node);
void irr_IVideoDriver_removeAllOcclusionQueries(irr_IVideoDriver* driver);

int irr_IVideoDriver_getFPS(irr_IVideoDriver* driver);
const wchar_t* irr_IVideoDriver_getName(irr_IVideoDriver* driver);

irr_SMaterial* irr_IVideoDriver_getMaterial2D(irr_IVideoDriver* driver);
void irr_IVideoDriver_enableMaterial2D(irr_IVideoDriver* driver, bool enable=true);
const char* irr_IVideoDriver_getVendorInfo(irr_IVideoDriver* driver);
void irr_IVideoDriver_setAmbientLight(irr_IVideoDriver* driver, irr_SColorf color);
void irr_IVideoDriver_setAllowZWriteOnTransparent(irr_IVideoDriver* driver, bool flag);
irr_dimension2du irr_IVideoDriver_getMaxTextureSize(irr_IVideoDriver* driver);
void irr_IVideoDriver_convertColor(irr_IVideoDriver* driver, const void* sP, ECOLOR_FORMAT sF, int sN, void* dP, ECOLOR_FORMAT dF);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_IVIDEODRIVER_
