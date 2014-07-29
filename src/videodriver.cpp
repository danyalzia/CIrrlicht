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

#include <irrlicht.h>
#include "core.h"
#include "videodriver.h"

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

void irr_IVideoDriver_setTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state, irr_matrix4 mat)
{
    irr::core::matrix4 temp;
    for (unsigned int i = 0; i < 16; i++)
    {
        temp[i] = mat.M[i];
    }
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setTransform(irr::video::E_TRANSFORMATION_STATE(state), temp);
}

irr_matrix4 irr_IVideoDriver_getTransform(irr_IVideoDriver* driver, E_TRANSFORMATION_STATE state)
{
    irr::core::matrix4 temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTransform(irr::video::E_TRANSFORMATION_STATE(state));
    irr_matrix4 mat;
    for (unsigned int i = 0; i < 16; i++)
    {
        mat.M[i] = temp[i];
    }

    return mat;
}

unsigned int irr_IVideoDriver_getImageLoaderCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getImageLoaderCount();
}

irr_IImageLoader* irr_IVideoDriver_getImageLoader(irr_IVideoDriver* driver, unsigned int n)
{
    return reinterpret_cast<irr_IImageLoader*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getImageLoader(n));
}

unsigned int irr_IVideoDriver_getImageWriterCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getImageWriterCount();
}

irr_IImageWriter* irr_IVideoDriver_getImageWriter(irr_IVideoDriver* driver, unsigned int n)
{
    return reinterpret_cast<irr_IImageWriter*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getImageWriter(n));
}

void irr_IVideoDriver_setMaterial(irr_IVideoDriver* driver, irr_SMaterial* material)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setMaterial(*reinterpret_cast<irr::video::SMaterial*>(material));
}

irr_ITexture* irr_IVideoDriver_getTexture(irr_IVideoDriver* driver, const char* file)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTexture(file));
}

irr_ITexture* irr_IVideoDriver_getTextureByIndex(irr_IVideoDriver* driver, unsigned int index)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTextureByIndex(index));
}

unsigned int irr_IVideoDriver_getTextureCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTextureCount();
}

void irr_IVideoDriver_renameTexture(irr_IVideoDriver* driver, irr_ITexture* texture, const char* newName)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->renameTexture(reinterpret_cast<irr::video::ITexture*>(texture), newName);
}

irr_ITexture* irr_IVideoDriver_addTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, ECOLOR_FORMAT format)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->addTexture(irr::core::dimension2du(size.Width, size.Height), name, irr::video::ECOLOR_FORMAT(format)));
}

//irr_ITexture* irr_IVideoDriver_addTexture(const char* name, irr_IImage* image, void* mipmapData);
irr_ITexture* irr_IVideoDriver_addRenderTargetTexture(irr_IVideoDriver* driver, irr_dimension2du size, const char* name, const ECOLOR_FORMAT format)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->addRenderTargetTexture(irr::core::dimension2du(size.Width, size.Height), name, irr::video::ECOLOR_FORMAT(format)));
}


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

void irr_IVideoDriver_runOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, bool visible)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->runOcclusionQuery(reinterpret_cast<irr::scene::ISceneNode*>(node), visible);
}

void irr_IVideoDriver_runAllOcclusionQueries(irr_IVideoDriver* driver, bool visible)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->runAllOcclusionQueries(visible);
}

void irr_IVideoDriver_updateOcclusionQuery(irr_IVideoDriver* driver, irr_ISceneNode* node, bool block)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->updateOcclusionQuery(reinterpret_cast<irr::scene::ISceneNode*>(node), block);
}

void irr_IVideoDriver_updateAllOcclusionQueries(irr_IVideoDriver* driver, bool block)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->updateAllOcclusionQueries(block);
}

unsigned int irr_IVideoDriver_getOcclusionQueryResult(irr_IVideoDriver* driver, irr_ISceneNode* node)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getOcclusionQueryResult(reinterpret_cast<irr::scene::ISceneNode*>(node));
}

void irr_IVideoDriver_makeColorKeyTexture(irr_IVideoDriver* driver, irr_ITexture* texture, irr_SColor color, bool zeroTexels)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->makeColorKeyTexture(reinterpret_cast<irr::video::ITexture*>(texture), irr::video::SColor(color.a, color.b, color.g, color.r), zeroTexels);
}

void irr_IVideoDriver_makeColorKeyTexture2(irr_IVideoDriver* driver, irr_ITexture* texture, irr_vector2di colorKeyPixelPos, bool zeroTexels)
{
	reinterpret_cast<irr::video::IVideoDriver*>(driver)->makeColorKeyTexture(reinterpret_cast<irr::video::ITexture*>(texture), irr::core::vector2di(colorKeyPixelPos.x, colorKeyPixelPos.y), zeroTexels);
}

void irr_IVideoDriver_makeNormalMapTexture(irr_IVideoDriver* driver, irr_ITexture* texture, float amplitude)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->makeColorKeyTexture(reinterpret_cast<irr::video::ITexture*>(texture), amplitude);
}

bool irr_IVideoDriver_setRenderTarget(irr_IVideoDriver* driver, irr_ITexture* texture, bool clearBackBuffer, bool clearZBuffer, irr_SColor color)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->setRenderTarget(reinterpret_cast<irr::video::ITexture*>(texture), clearBackBuffer, clearZBuffer, irr::video::SColor(color.a, color.b, color.g, color.r));
}

bool irr_IVideoDriver_setRenderTargetByEnum(irr_IVideoDriver* driver, E_RENDER_TARGET target, bool clearTarget, bool clearZBuffer, irr_SColor color)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->setRenderTarget(irr::video::E_RENDER_TARGET(target), clearTarget, clearZBuffer, irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_setViewPort(irr_IVideoDriver* driver, irr_recti area)
{
    irr::core::recti temp = irr::core::recti(area.x, area.y, area.x1, area.y1);
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setViewPort(temp);
}

irr_recti irr_IVideoDriver_getViewPort(irr_IVideoDriver* driver)
{
    irr::core::recti temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getViewPort();
    irr_recti size = {temp.UpperLeftCorner.X, temp.UpperLeftCorner.Y, temp.LowerRightCorner.X, temp.LowerRightCorner.Y};
    return size;
}

void irr_IVideoDriver_draw3DLine(irr_IVideoDriver* driver, irr_vector3df start, irr_vector3df end, irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw3DLine(irr::core::vector3df(start.x, start.y, start.z), irr::core::vector3df(end.x, end.y, end.z), irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_draw3DTriangle(irr_IVideoDriver* driver, irr_triangle3df triangle, irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw3DTriangle(irr::core::triangle3df(irr::core::vector3df(triangle.pointA.x, triangle.pointA.y, triangle.pointA.z), irr::core::vector3df(triangle.pointB.x, triangle.pointB.y, triangle.pointB.z), irr::core::vector3df(triangle.pointC.x, triangle.pointC.y, triangle.pointC.z)), irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_draw3DBox(irr_IVideoDriver* driver, irr_aabbox3df box, irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw3DBox(irr::core::aabbox3df(irr::core::vector3df(box.MaxEdge.x, box.MaxEdge.y, box.MaxEdge.z), irr::core::vector3df(box.MinEdge.x, box.MinEdge.y, box.MinEdge.z)), irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_draw2DImage1(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_vector2di destPos)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DImage(reinterpret_cast<const irr::video::ITexture*>(texture), irr::core::vector2di(destPos.x, destPos.y));
}

//void irr_IVideoDriver_draw2DImage2(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_vector2di destPos, irr_recti sourceRect, const irr_recti* clipRect, irr_SColor color, bool useAlphaChannelOfTexture)
//{
//    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DImage(reinterpret_cast<const irr::video::ITexture*>(texture), irr::core::vector2di(destPos.x, destPos.y), irr::core::recti(sourceRect.x, sourceRect.y, sourceRect.x1, sourceRect.y1), irr::core::recti(clipRect->x, clipRect->y, clipRect->x1, clipRect->y1), irr::video::SColor(color.a, color.b, color.g, color.r), useAlphaChannelOfTexture);
//}

void irr_IVideoDriver_draw2DImageBatch(irr_IVideoDriver* driver, const irr_ITexture* texture,
				irr_vector2di pos,
				irr_array* sourceRects,
				irr_array* indices,
				int kerningWidth,
				const irr_recti* clipRect,
				irr_SColor color,
				bool useAlphaChannelOfTexture);
void irr_IVideoDriver_draw2DImageBatch(irr_IVideoDriver* driver, const irr_ITexture* texture,
				irr_array* positions,
				irr_array* sourceRects,
				irr_recti* clipRect,
				irr_SColor color,
				bool useAlphaChannelOfTexture);
void irr_IVideoDriver_draw2DImage3(irr_IVideoDriver* driver, const irr_ITexture* texture, irr_recti destRect,
			irr_recti sourceRect, const irr_recti* clipRect,
			const irr_SColor* colors, bool useAlphaChannelOfTexture);
void irr_IVideoDriver_draw2DRectangle1(irr_IVideoDriver* driver, irr_SColor color, irr_recti pos,
			const irr_recti* clip);
//void irr_IVideoDriver_draw2DRectangle2(irr_IVideoDriver* driver, irr_recti pos,
//				irr_SColor colorLeftUp, irr_SColor colorRightUp,
//				irr_SColor colorLeftDown, irr_SColor colorRightDown,
//				const irr_recti* clip)
//{
//    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DRectangle(irr::core::recti(pos.x, pos.y, pos.x1, pos.y1), irr::video::SColor(colorLeftUp.a, colorLeftUp.b, colorLeftUp.g, colorLeftUp.r), irr::video::SColor(colorRightUp.a, colorRightUp.b, colorRightUp.g, colorRightUp.r), irr::video::SColor(colorLeftDown.a, colorLeftDown.b, colorLeftDown.g, colorLeftDown.r), irr::video::SColor(colorRightDown.a, colorRightDown.b, colorRightDown.g, colorRightDown.r), irr::core::recti(clip->x, clip->y, clip->x1, clip->y1));
//}

void irr_IVideoDriver_draw2DRectangleOutline(irr_IVideoDriver* driver, irr_recti pos,
				irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DRectangleOutline(irr::core::recti(pos.x, pos.y, pos.x1, pos.y1), irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_draw2DLine(irr_IVideoDriver* driver, irr_vector2di start,
					irr_vector2di end,
					irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DLine(irr::core::vector2di(start.x, start.y), irr::core::vector2di(end.x, end.y), irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_drawPixel(irr_IVideoDriver* driver, unsigned int x, unsigned int y, irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->drawPixel(x, y, irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_draw2DPolygon(irr_IVideoDriver* driver, irr_vector2di center,
				float radius,
				irr_SColor color,
				int vertexCount)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->draw2DPolygon(irr::core::vector2di(center.x, center.y), radius, irr::video::SColor(color.a, color.b, color.g, color.r), vertexCount);
}

void irr_IVideoDriver_drawStencilShadowVolume(irr_IVideoDriver* driver, irr_array* triangles, bool zfail, unsigned int debugDataVisible)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->drawStencilShadowVolume(reinterpret_cast<irr::core::array<irr::core::vector3df> &>(triangles->data), zfail, debugDataVisible);
}

void irr_IVideoDriver_drawStencilShadow(irr_IVideoDriver* driver, bool clearStencilBuffer,
			irr_SColor leftUpEdge,
			irr_SColor rightUpEdge,
			irr_SColor leftDownEdge,
			irr_SColor rightDownEdge)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->drawStencilShadow(clearStencilBuffer, irr::video::SColor(leftUpEdge.a, leftUpEdge.b, leftUpEdge.g, leftUpEdge.r),  irr::video::SColor(rightUpEdge.a, rightUpEdge.b, rightUpEdge.g, rightUpEdge.r),  irr::video::SColor(leftDownEdge.a, leftDownEdge.b, leftDownEdge.g, leftDownEdge.r),  irr::video::SColor(rightDownEdge.a, rightDownEdge.b, rightDownEdge.g, rightDownEdge.r));
}

void irr_IVideoDriver_drawMeshBuffer(irr_IVideoDriver* driver, irr_IMeshBuffer* mb)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->drawMeshBuffer(reinterpret_cast<irr::scene::IMeshBuffer*>(mb));
}

void irr_IVideoDriver_drawMeshBufferNormals(irr_IVideoDriver* driver, irr_IMeshBuffer* mb, float length, irr_SColor color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->drawMeshBufferNormals(reinterpret_cast<irr::scene::IMeshBuffer*>(mb), length, irr::video::SColor(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_setFog(irr_IVideoDriver* driver, irr_SColor color, E_FOG_TYPE fogType, float start, float end, float density, bool pixelFog, bool rangeFog)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setFog(irr::video::SColor(color.a, color.b, color.g, color.r), irr::video::E_FOG_TYPE(fogType), start, end, density, pixelFog, rangeFog);
}

void irr_IVideoDriver_getFog(irr_IVideoDriver* driver, irr_SColor& color, E_FOG_TYPE& fogType, float& start, float& end, float& density, bool& pixelFog, bool& rangeFog)
{
    irr::video::SColor tempcol = irr::video::SColor(color.a, color.b, color.g, color.r);
    irr::video::E_FOG_TYPE tempfog = irr::video::E_FOG_TYPE(fogType);
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->getFog(tempcol, tempfog, start, end, density, pixelFog, rangeFog);
}

ECOLOR_FORMAT irr_IVideoDriver_getColorFormat(irr_IVideoDriver* driver)
{
    return ECOLOR_FORMAT(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getColorFormat());
}

irr_dimension2du irr_IVideoDriver_getScreenSize(irr_IVideoDriver* driver)
{
    irr::core::dimension2du temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getScreenSize();
    irr_dimension2du size = {temp.Width, temp.Height};
    return size;
}

irr_dimension2du irr_IVideoDriver_getCurrentRenderTargetSize(irr_IVideoDriver* driver)
{
    irr::core::dimension2du temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getCurrentRenderTargetSize();
    irr_dimension2du size = {temp.Width, temp.Height};
    return size;
}

int irr_IVideoDriver_getFPS(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getFPS();
}

unsigned int irr_IVideoDriver_getPrimitiveCountDrawn(irr_IVideoDriver* driver, unsigned int mode)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getPrimitiveCountDrawn(mode);
}

void irr_IVideoDriver_deleteAllDynamicLights(irr_IVideoDriver* driver)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->deleteAllDynamicLights();
}

int irr_IVideoDriver_addDynamicLight(irr_IVideoDriver* driver, irr_SLight* light)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->addDynamicLight(*reinterpret_cast<irr::video::SLight*>(light));
}

unsigned int irr_IVideoDriver_getMaximalDynamicLightAmount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaximalDynamicLightAmount();
}

unsigned int irr_IVideoDriver_getDynamicLightCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getDynamicLightCount();
}

irr_SLight* irr_IVideoDriver_getDynamicLight(irr_IVideoDriver* driver, unsigned int idx)
{
    return reinterpret_cast<irr_SLight*>(const_cast<irr::video::SLight*>(&reinterpret_cast<irr::video::IVideoDriver*>(driver)->getDynamicLight(idx)));
}

void irr_IVideoDriver_turnLightOn(irr_IVideoDriver* driver, int lightIndex, bool turnOn)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->turnLightOn(lightIndex, turnOn);
}

const wchar_t* irr_IVideoDriver_getName(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getName();
}

void irr_IVideoDriver_addExternalImageLoader(irr_IVideoDriver* driver, irr_IImageLoader* loader)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->addExternalImageLoader(reinterpret_cast<irr::video::IImageLoader*>(loader));
}

void irr_IVideoDriver_addExternalImageWriter(irr_IVideoDriver* driver, irr_IImageWriter* writer)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->addExternalImageWriter(reinterpret_cast<irr::video::IImageWriter*>(writer));
}

unsigned int irr_IVideoDriver_getMaximalPrimitiveCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaximalPrimitiveCount();
}

void irr_IVideoDriver_setTextureCreationFlag(irr_IVideoDriver* driver, E_TEXTURE_CREATION_FLAG flag, bool enabled)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setTextureCreationFlag(irr::video::E_TEXTURE_CREATION_FLAG(flag), enabled);
}

bool irr_IVideoDriver_getTextureCreationFlag(irr_IVideoDriver* driver, E_TEXTURE_CREATION_FLAG flag)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTextureCreationFlag(irr::video::E_TEXTURE_CREATION_FLAG(flag));
}

irr_IImage* irr_IVideoDriver_createImageFromFile(irr_IVideoDriver* driver, const char* file)
{
    return reinterpret_cast<irr_IImage*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createImageFromFile(file));
}

bool irr_IVideoDriver_writeImageToFile(irr_IVideoDriver* driver, irr_IImage* image, const char* filename, unsigned int param)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->writeImageToFile(reinterpret_cast<irr::video::IImage*>(image), filename, param);
}

irr_IImage* irr_IVideoDriver_createImageFromData(irr_IVideoDriver* driver, ECOLOR_FORMAT format, irr_dimension2du size, void *data, bool ownForeignMemory, bool deleteMemory)
{
    return reinterpret_cast<irr_IImage*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createImageFromData(irr::video::ECOLOR_FORMAT(format), irr::core::dimension2du(size.Width, size.Height), data, ownForeignMemory, deleteMemory));
}

irr_IImage* irr_IVideoDriver_createEmptyImage(irr_IVideoDriver* driver, ECOLOR_FORMAT format, irr_dimension2du size)
{
    return reinterpret_cast<irr_IImage*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createImage(irr::video::ECOLOR_FORMAT(format), irr::core::dimension2du(size.Width, size.Height)));
}

irr_IImage* irr_IVideoDriver_createImage(irr_IVideoDriver* driver, irr_ITexture* texture, irr_vector2di pos, irr_dimension2du size)
{
    return reinterpret_cast<irr_IImage*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createImage(reinterpret_cast<irr::video::ITexture*>(texture), irr::core::vector2di(pos.x, pos.y), irr::core::dimension2du(size.Width, size.Height)));
}

void irr_IVideoDriver_OnResize(irr_IVideoDriver* driver, irr_dimension2du size)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->OnResize(irr::core::dimension2du(size.Width, size.Height));
}

int irr_IVideoDriver_addMaterialRenderer(irr_IVideoDriver* driver, irr_IMaterialRenderer* renderer, const char* name)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->addMaterialRenderer(reinterpret_cast<irr::video::IMaterialRenderer*>(renderer), name);
}

irr_IMaterialRenderer* irr_IVideoDriver_getMaterialRenderer(irr_IVideoDriver* driver, unsigned int idx)
{
    return reinterpret_cast<irr_IMaterialRenderer*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaterialRenderer(idx));
}

unsigned int irr_IVideoDriver_getMaterialRendererCount(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaterialRendererCount();
}

const char* irr_IVideoDriver_getMaterialRendererName(irr_IVideoDriver* driver, unsigned int idx)
{
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaterialRendererName(idx);
}

void irr_IVideoDriver_setMaterialRendererName(irr_IVideoDriver* driver, int idx, const char* name)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setMaterialRendererName(idx, name);
}

irr_IAttributes* irr_IVideoDriver_createAttributesFromMaterial(irr_IVideoDriver* driver, irr_SMaterial* material, irr_SAttributeReadWriteOptions* options)
{
	irr::io::SAttributeReadWriteOptions tempattr;
	tempattr.Flags = options->Flags;
	tempattr.Filename = options->Filename;
    return reinterpret_cast<irr_IAttributes*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createAttributesFromMaterial(*reinterpret_cast<irr::video::SMaterial*>(material), &tempattr));
}

void irr_IVideoDriver_fillMaterialStructureFromAttributes(irr_IVideoDriver* driver, irr_SMaterial* outMaterial, irr_IAttributes* attributes)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->fillMaterialStructureFromAttributes(*reinterpret_cast<irr::video::SMaterial*>(outMaterial), reinterpret_cast<irr::io::IAttributes*>(attributes));
}

irr_SExposedVideoData* irr_IVideoDriver_getExposedVideoData(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr_SExposedVideoData*>(const_cast<irr::video::SExposedVideoData*>(&reinterpret_cast<irr::video::IVideoDriver*>(driver)->getExposedVideoData()));
}

E_DRIVER_TYPE irr_IVideoDriver_getDriverType(irr_IVideoDriver* driver)
{
    return E_DRIVER_TYPE(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getDriverType());
}

irr_IGPUProgrammingServices* irr_IVideoDriver_getGPUProgrammingServices(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr_IGPUProgrammingServices*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getGPUProgrammingServices());
}

irr_IMeshManipulator* irr_IVideoDriver_getMeshManipulator(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr_IMeshManipulator*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMeshManipulator());
}

void irr_IVideoDriver_clearZBuffer(irr_IVideoDriver* driver)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->clearZBuffer();
}

irr_IImage* irr_IVideoDriver_createScreenShot(irr_IVideoDriver* driver, ECOLOR_FORMAT format, E_RENDER_TARGET target)
{
    return reinterpret_cast<irr_IImage*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->createScreenShot(irr::video::ECOLOR_FORMAT(format), irr::video::E_RENDER_TARGET(target)));
}

irr_ITexture* irr_IVideoDriver_findTexture(irr_IVideoDriver* driver, const char* filename)
{
    return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->findTexture(filename));
}

bool irr_IVideoDriver_setClipPlane(irr_IVideoDriver* driver, unsigned int index, irr_plane3df plane, bool enable)
{
    irr::core::vector3df tempNormal = irr::core::vector3df(plane.Normal.x, plane.Normal.y, plane.Normal.z);
    return reinterpret_cast<irr::video::IVideoDriver*>(driver)->setClipPlane(index, irr::core::plane3df(tempNormal, plane.D), enable);
}

void irr_IVideoDriver_enableClipPlane(irr_IVideoDriver* driver, unsigned int index, bool enable)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->enableClipPlane(index, enable);
}

void irr_IVideoDriver_setMinHardwareBufferVertexCount(irr_IVideoDriver* driver, unsigned int count)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setMinHardwareBufferVertexCount(count);
}

irr_SOverrideMaterial* irr_IVideoDriver_getOverrideMaterial(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr_SOverrideMaterial*>(const_cast<irr::video::SOverrideMaterial*>(&reinterpret_cast<irr::video::IVideoDriver*>(driver)->getOverrideMaterial()));
}

irr_SMaterial* irr_IVideoDriver_getMaterial2D(irr_IVideoDriver* driver)
{
    return reinterpret_cast<irr_SMaterial*>(const_cast<irr::video::SMaterial*>(&reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaterial2D()));
}

void irr_IVideoDriver_enableMaterial2D(irr_IVideoDriver* driver, bool enable)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->enableMaterial2D(enable);
}

const char* irr_IVideoDriver_getVendorInfo(irr_IVideoDriver* driver)
{
    irr::core::stringc temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getVendorInfo();
    return temp.c_str();
}

void irr_IVideoDriver_setAmbientLight(irr_IVideoDriver* driver, irr_SColorf color)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setAmbientLight(irr::video::SColorf(color.a, color.b, color.g, color.r));
}

void irr_IVideoDriver_setAllowZWriteOnTransparent(irr_IVideoDriver* driver, bool flag)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->setAllowZWriteOnTransparent(flag);
}

irr_dimension2du irr_IVideoDriver_getMaxTextureSize(irr_IVideoDriver* driver)
{
    irr::core::dimension2du temp = reinterpret_cast<irr::video::IVideoDriver*>(driver)->getMaxTextureSize();
    irr_dimension2du size = {temp.Width, temp.Height};
    return size;
}

void irr_IVideoDriver_convertColor(irr_IVideoDriver* driver, const void* sP, ECOLOR_FORMAT sF, int sN, void* dP, ECOLOR_FORMAT dF)
{
    reinterpret_cast<irr::video::IVideoDriver*>(driver)->convertColor(sP, irr::video::ECOLOR_FORMAT(sF), sN, dP, irr::video::ECOLOR_FORMAT(dF));
}
