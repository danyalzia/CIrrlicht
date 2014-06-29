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

#include <include/irrlicht.h>
#include "core.h"
#include "IVideoDriver.h"

#ifdef __cplusplus
extern "C"
{
#endif

bool irr_IVideoDriver_beginScene(irr_IVideoDriver* driver, bool backBuffer, bool zBuffer, irr_SColor color)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->beginScene(backBuffer, zBuffer, irr::video::SColor(color.a, color.b, color.g, color.r));
}

bool irr_IVideoDriver_endScene(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->endScene();
}

bool irr_IVideoDriver_queryFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->queryFeature(irr::video::E_VIDEO_DRIVER_FEATURE(feature));
}

void irr_IVideoDriver_disableFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature, bool flag)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->disableFeature(irr::video::E_VIDEO_DRIVER_FEATURE(feature), flag);
}

const irr_Attributes& irr_IVideoDriver_getDriverAttributes(irr_IVideoDriver* driver)
{
    return reinterpret_cast<const irr_Attributes&>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getDriverAttributes());
}

bool irr_IVideoDriver_checkDriverReset(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->checkDriverReset();
}

bool irr_IVideoDriver_beginScene(irr_IVideoDriver* driver, bool backBuffer, bool zBuffer, irr_SColor color);
bool irr_IVideoDriver_endScene(irr_IVideoDriver* driver);
bool irr_IVideoDriver_queryFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature);
void irr_IVideoDriver_disableFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature, bool flag);
const irr_Attributes& irr_IVideoDriver_getDriverAttributes(irr_IVideoDriver* driver);
bool irr_IVideoDriver_checkDriverReset(irr_IVideoDriver* driver);
void irr_IVideoDriver_setTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state, irr_matrix4 mat);
irr_matrix4 irr_IVideoDriver_getTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state);
unsigned int irr_IVideoDriver_getImageLoaderCount(irr_IVideoDriver* driver);
irr_IImageLoader* irr_IVideoDriver_getImageLoader(irr_IVideoDriver* driver, unsigned int n);
unsigned int irr_IVideoDriver_getImageWriterCount(irr_IVideoDriver* driver);
irr_IImageWriter* irr_IVideoDriver_getImageWriter(irr_IVideoDriver* driver, unsigned int n);
void irr_IVideoDriver_setMaterial(irr_IVideoDriver* driver, irr_SMaterial* material);

irr_ITexture* irr_IVideoDriver_getTexture(irr_IVideoDriver* driver, const char* file)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTexture(file));
}

irr_ITexture* irr_IVideoDriver_getTextureByIndex(irr_IVideoDriver* driver, unsigned int index);
unsigned int irr_IVideoDriver_getTextureCount(irr_IVideoDriver* driver);
void irr_IVideoDriver_renameTexture(irr_IVideoDriver* driver, irr_ITexture* texture, const char* newName);
irr_ITexture* irr_IVideoDriver_addTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, ECOLOR_FORMAT format);
//irr_ITexture* irr_IVideoDriver_addTexture(const char* name, irr_IImage* image, void* mipmapData);
irr_ITexture* irr_IVideoDriver_addRenderTargetTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, const ECOLOR_FORMAT format);
void irr_IVideoDriver_removeTexture(irr_IVideoDriver* driver, irr_ITexture* texture)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeTexture(reinterpret_cast<irr::video::ITexture*>(texture));
}

void irr_IVideoDriver_removeAllTextures(irr_IVideoDriver* driver)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeAllTextures();
}

void irr_IVideoDriver_removeHardwareBuffer(irr_IVideoDriver* driver, irr_IMeshBuffer* mb)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeHardwareBuffer(reinterpret_cast<irr::scene::IMeshBuffer*>(mb));
}

void irr_IVideoDriver_removeAllHardwareBuffers(irr_IVideoDriver* driver)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeAllHardwareBuffers();
}

void irr_IVideoDriver_addOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, irr_IMesh* mesh)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->addOcclusionQuery(reinterpret_cast<irr::scene::ISceneNode*>(node), reinterpret_cast<irr::scene::IMesh*>(mesh));
}

void irr_IVideoDriver_removeOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeOcclusionQuery(reinterpret_cast<irr::scene::ISceneNode*>(node));
}

void irr_IVideoDriver_removeAllOcclusionQueries(irr_IVideoDriver* driver)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->removeAllOcclusionQueries();
}

int irr_IVideoDriver_getFPS(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getFPS();
}

const wchar_t* irr_IVideoDriver_getName(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getName();
}

#ifdef __cplusplus
}
#endif // __cplusplus
