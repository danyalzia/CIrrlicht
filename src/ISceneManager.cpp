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
#include "ISceneManager.h"

irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file)
{
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMesh(file));
}

irr_IMeshCache* irr_ISceneManager_getMeshCache(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IMeshCache*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMeshCache());
}

irr_IVideoDriver* irr_ISceneManager_getVideoDriver(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IVideoDriver*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getVideoDriver());
}

irr_IGUIEnvironment* irr_ISceneManager_getGUIEnvironment(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IGUIEnvironment*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getGUIEnvironment());
}

irr_IFileSystem* irr_ISceneManager_getFileSystem(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IFileSystem*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getFileSystem());
}

irr_IVolumeLightSceneNode* irr_ISceneManager_addVolumeLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent, int id, unsigned int subdivU, unsigned int subdivV, irr_SColor foot, irr_SColor tail, irr_vector3df position, irr_vector3df rotation, irr_vector3df scale)
{
    auto tempfoot = irr::video::SColor(foot.a, foot.b, foot.g, foot.r);
    auto temptail = irr::video::SColor(tail.a, tail.b, tail.g, tail.r);
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IVolumeLightSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addVolumeLightSceneNode(reinterpret_cast<irr::scene::ISceneNode*>(parent), id, subdivU, subdivV, tempfoot, temptail, tempposition, temprotation, tempscale));
}

irr_IMeshSceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr, float size, irr_ISceneNode* parent, int id, irr_vector3df position, irr_vector3df rotation, irr_vector3df scale)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCubeSceneNode(size, reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale));
}

irr_IMeshSceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr, float radius, int polyCount, irr_ISceneNode* parent, int id, irr_vector3df position, irr_vector3df rotation, irr_vector3df scale)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addSphereSceneNode(radius, polyCount, reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale));
}

irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent, int id, irr_vector3df position, irr_vector3df rotation, irr_vector3df scale, bool alsoAddIfMeshPointerZero)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IAnimatedMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addAnimatedMeshSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale, alsoAddIfMeshPointerZero));
}

irr_IMeshSceneNode* irr_ISceneManager_addMeshSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent, int id, irr_vector3df position, irr_vector3df rotation, irr_vector3df scale, bool alsoAddIfMeshPointerZero)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addMeshSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale, alsoAddIfMeshPointerZero));
}

irr_ISceneNode* irr_ISceneManager_addWaterSurfaceSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh,
        float waveHeight, float waveSpeed, float waveLength,
        irr_ISceneNode* parent, int id,
        irr_vector3df position,
        irr_vector3df rotation,
        irr_vector3df scale)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addWaterSurfaceSceneNode(reinterpret_cast<irr::scene::IMesh*>(mesh), waveHeight, waveSpeed, waveLength, reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale));
}

irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent,
        int id, int minimalPolysPerNode, bool alsoAddIfMeshPointerZero)
{
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addOctreeSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(parent), id, minimalPolysPerNode, alsoAddIfMeshPointerZero));
}

irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode2(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent,
        int id, int minimalPolysPerNode, bool alsoAddIfMeshPointerZero)
{
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addOctreeSceneNode(reinterpret_cast<irr::scene::IMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(parent), id, minimalPolysPerNode, alsoAddIfMeshPointerZero));
}

irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent, irr_vector3df pos, irr_vector3df lookAt, int id, bool makeActive);
irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeMaya(irr_ISceneManager* smgr, irr_ISceneNode* parent,
        float rotateSpeed, float zoomSpeed,
        float translationSpeed, int id, float distance,
        bool makeActive);

irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr, irr_ISceneNode* parent,
        float rotateSpeed, float moveSpeed, int id,
        irr_SKeyMap* keyMapArray, int keyMapSize, bool noVerticalMovement,
        float jumpSpeed, bool invertMouse,
        bool makeActive);

irr_ILightSceneNode* irr_ISceneManager_addLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent,
        irr_vector3df position,
        irr_SColorf color,
        float radius, int id);

irr_IBillboardSceneNode* irr_ISceneManager_addBillboardSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent,
        irr_dimension2df size,
        irr_vector3df position, int id,
        irr_SColor colorTop, irr_SColor colorBottom);

irr_ISceneNode* irr_ISceneManager_addSkyBoxSceneNode(irr_ISceneManager* smgr, irr_ITexture* top, irr_ITexture* bottom,
        irr_ITexture* left, irr_ITexture* right, irr_ITexture* front,
        irr_ITexture* back, irr_ISceneNode* parent, int id);

irr_ISceneNode* irr_ISceneManager_addSkyDomeSceneNode(irr_ISceneManager* smgr, irr_ITexture* texture,
        unsigned int horiRes, unsigned int vertRes,
        float texturePercentage, float spherePercentage,float radius,
        irr_ISceneNode* parent, int id);

irr_IParticleSystemSceneNode* irr_ISceneManager_addParticleSystemSceneNode(irr_ISceneManager* smgr,
        bool withDefaultEmitter, irr_ISceneNode* parent, int id,
        irr_vector3df position,
        irr_vector3df rotation,
        irr_vector3df scale)
{
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_IParticleSystemSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addParticleSystemSceneNode(withDefaultEmitter, reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale));
}

irr_ITerrainSceneNode* irr_ISceneManager_addTerrainSceneNode(irr_ISceneManager* smgr,
        const char* heightMapFileName,
        irr_ISceneNode* parent, int id,
        irr_vector3df position,
        irr_vector3df rotation,
        irr_vector3df scale,
        irr_SColor vertexColor,
        int maxLOD, E_TERRAIN_PATCH_SIZE patchSize, int smoothFactor,
        bool addAlsoIfHeightmapEmpty)
{
    auto tempvertexColor = irr::video::SColor(vertexColor.a, vertexColor.b, vertexColor.g, vertexColor.r);
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto temprotation = irr::core::vector3df(rotation.x, rotation.y, rotation.z);
    auto tempscale = irr::core::vector3df(scale.x, scale.y, scale.z);
	return reinterpret_cast<irr_ITerrainSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addTerrainSceneNode(reinterpret_cast<irr::io::IReadFile*>(const_cast<char*>(heightMapFileName)), reinterpret_cast<irr::scene::ISceneNode*>(parent), id, tempposition, temprotation, tempscale, tempvertexColor, maxLOD, irr::scene::E_TERRAIN_PATCH_SIZE(patchSize), smoothFactor, addAlsoIfHeightmapEmpty));
}

irr_IMeshSceneNode* irr_ISceneManager_addQuake3SceneNode(irr_ISceneManager* smgr, const irr_IMeshBuffer* meshBuffer, const irr_IShader * shader,
        irr_ISceneNode* parent, int id)
{
	return reinterpret_cast<irr_IMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addQuake3SceneNode(reinterpret_cast<const irr::scene::IMeshBuffer*>(meshBuffer), reinterpret_cast<const irr::scene::quake3::IShader*>(shader), reinterpret_cast<irr::scene::ISceneNode*>(parent), id));
}

irr_ISceneNode* irr_ISceneManager_addEmptySceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent, int id)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addEmptySceneNode(reinterpret_cast<irr::scene::ISceneNode*>(parent), id));
}

irr_IDummyTransformationSceneNode* irr_ISceneManager_addDummyTransformationSceneNode(irr_ISceneManager* smgr,
        irr_ISceneNode* parent, int id)
{
	return reinterpret_cast<irr_IDummyTransformationSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addDummyTransformationSceneNode(reinterpret_cast<irr::scene::ISceneNode*>(parent), id));
}

irr_ITextSceneNode* irr_ISceneManager_addTextSceneNode(irr_ISceneManager* smgr, irr_IGUIFont* font, const wchar_t* text,
        irr_SColor color,
        irr_ISceneNode* parent, irr_vector3df position,
        int id)
{
    auto tempcolor = irr::video::SColor(color.a, color.b, color.g, color.r);
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
	return reinterpret_cast<irr_ITextSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addTextSceneNode(reinterpret_cast<irr::gui::IGUIFont*>(font), text, tempcolor, reinterpret_cast<irr::scene::ISceneNode*>(parent), tempposition, id));
}

irr_IBillboardTextSceneNode* irr_ISceneManager_addBillboardTextSceneNode(irr_ISceneManager* smgr, irr_IGUIFont* font, const wchar_t* text,
        irr_ISceneNode* parent,
        irr_dimension2df size,
        irr_vector3df position, int id,
        irr_SColor colorTop, irr_SColor colorBottom)
{
    auto tempsize = irr::core::dimension2df(size.Width, size.Height);
    auto tempposition = irr::core::vector3df(position.x, position.y, position.z);
    auto tempcolorTop = irr::video::SColor(colorTop.a, colorTop.b, colorTop.g, colorTop.r);
    auto tempcolorBottom = irr::video::SColor(colorBottom.a, colorBottom.b, colorBottom.g, colorBottom.r);

	return reinterpret_cast<irr_IBillboardTextSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addBillboardTextSceneNode(reinterpret_cast<irr::gui::IGUIFont*>(font), text, reinterpret_cast<irr::scene::ISceneNode*>(parent), tempsize, tempposition, id, tempcolorTop, tempcolorBottom));
}

irr_IAnimatedMesh* irr_ISceneManager_addHillPlaneMesh(irr_ISceneManager* smgr, const char* name,
        irr_dimension2df tileSize, irr_dimension2du tileCount,
        irr_SMaterial* material, float hillHeight,
        irr_dimension2df countHills,
        irr_dimension2df textureRepeatCount)
{
    auto temptileSize = irr::core::dimension2df(tileSize.Width, tileSize.Height);
    auto temptileCount = irr::core::dimension2du(tileCount.Width, tileCount.Height);
    auto tempcountHills = irr::core::dimension2df(countHills.Width, countHills.Height);
    auto temptextureRepeatCount = irr::core::dimension2df(textureRepeatCount.Width, textureRepeatCount.Height);
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addHillPlaneMesh(name, temptileSize, temptileCount, reinterpret_cast<irr::video::SMaterial*>(material), hillHeight, tempcountHills, temptextureRepeatCount));
}

irr_IAnimatedMesh* irr_ISceneManager_addTerrainMesh(irr_ISceneManager* smgr, const char* meshname,
        irr_IImage* texture, irr_IImage* heightmap,
        irr_dimension2df stretchSize,
        float maxHeight,
        irr_dimension2du defaultVertexBlockSize)
{
    auto tempstretchSize = irr::core::dimension2df(stretchSize.Width, stretchSize.Height);
    auto tempdefaultVertexBlockSize = irr::core::dimension2du(defaultVertexBlockSize.Width, defaultVertexBlockSize.Height);
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addTerrainMesh(meshname, reinterpret_cast<irr::video::IImage*>(texture), reinterpret_cast<irr::video::IImage*>(heightmap), tempstretchSize, maxHeight, tempdefaultVertexBlockSize));
}

irr_IAnimatedMesh* irr_ISceneManager_addArrowMesh(irr_ISceneManager* smgr, const char* name,
        irr_SColor vtxColorCylinder,
        irr_SColor vtxColorCone,
        unsigned int tesselationCylinder, unsigned int tesselationCone,
        float height, float cylinderHeight,
        float widthCylinder, float widthCone)
{
    auto tempvtxColorCylinder = irr::video::SColor(vtxColorCylinder.a, vtxColorCylinder.b, vtxColorCylinder.g, vtxColorCylinder.r);
    auto tempvtxColorCone = irr::video::SColor(vtxColorCone.a, vtxColorCone.b, vtxColorCone.g, vtxColorCone.r);
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addArrowMesh(name, tempvtxColorCylinder, tempvtxColorCone, tesselationCylinder, tesselationCone, height, cylinderHeight, widthCylinder, widthCone));
}

irr_IAnimatedMesh* irr_ISceneManager_addSphereMesh(irr_ISceneManager* smgr, const char* name,
        float radius, unsigned int polyCountX,
        unsigned int polyCountY)
{
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addSphereMesh(name, radius, polyCountX, polyCountY));
}

irr_IAnimatedMesh* irr_ISceneManager_addVolumeLightMesh(irr_ISceneManager* smgr, const char* name,
        const unsigned int SubdivideU, const unsigned int SubdivideV,
        irr_SColor FootColor,
        irr_SColor TailColor)
{
    auto tempFootColor = irr::video::SColor(FootColor.a, FootColor.b, FootColor.g, FootColor.r);
    auto tempTailColor = irr::video::SColor(TailColor.a, TailColor.b, TailColor.g, TailColor.r);
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addVolumeLightMesh(name, SubdivideU, SubdivideV, tempFootColor, tempTailColor));
}

irr_ISceneNode* irr_ISceneManager_getRootSceneNode(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getRootSceneNode());
}

irr_ISceneNode* irr_ISceneManager_getSceneNodeFromId(irr_ISceneManager* smgr, unsigned int id, irr_ISceneNode* start)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeFromId(id, reinterpret_cast<irr::scene::ISceneNode*>(start)));
}

irr_ISceneNode* irr_ISceneManager_getSceneNodeFromName(irr_ISceneManager* smgr, const char* name, irr_ISceneNode* start)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeFromName(name, reinterpret_cast<irr::scene::ISceneNode*>(start)));
}

irr_ISceneNode* irr_ISceneManager_getSceneNodeFromType(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type, irr_ISceneNode* start)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeFromType(irr::scene::ESCENE_NODE_TYPE(type), reinterpret_cast<irr::scene::ISceneNode*>(start)));
}

void irr_ISceneManager_getSceneNodesFromType(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type,
        irr_array* outNodes,
        irr_ISceneNode* start)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodesFromType(irr::scene::ESCENE_NODE_TYPE(type), reinterpret_cast<irr::core::array<irr::scene::ISceneNode* > &>(outNodes->data), reinterpret_cast<irr::scene::ISceneNode*>(start));
}

irr_ICameraSceneNode* irr_ISceneManager_getActiveCamera(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ICameraSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getActiveCamera());
}

void irr_ISceneManager_setActiveCamera(irr_ISceneManager* smgr, irr_ICameraSceneNode* camera)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->setActiveCamera(reinterpret_cast<irr::scene::ICameraSceneNode*>(camera));
}

void irr_ISceneManager_setShadowColor(irr_ISceneManager* smgr, irr_SColor color)
{
    auto temp = irr::video::SColor(color.a, color.b, color.g, color.r);
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->setShadowColor(temp);
}

irr_SColor irr_ISceneManager_getShadowColor(irr_ISceneManager* smgr)
{
    auto temp = reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getShadowColor();
    irr_SColor col = {temp.getAlpha(), temp.getBlue(), temp.getGreen(), temp.getRed()};
    return col;
}

unsigned int irr_ISceneManager_registerNodeForRendering(irr_ISceneManager* smgr, irr_ISceneNode* node,
        E_SCENE_NODE_RENDER_PASS pass)
{
    return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->registerNodeForRendering(reinterpret_cast<irr::scene::ISceneNode*>(node), irr::scene::E_SCENE_NODE_RENDER_PASS(pass));
}

void irr_ISceneManager_drawAll(irr_ISceneManager* smgr)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->drawAll();
}

irr_ISceneNodeAnimator* irr_ISceneManager_createRotationAnimator(irr_ISceneManager* smgr, irr_vector3df rotationSpeed)
{
    auto temprotationSpeed = irr::core::vector3df(rotationSpeed.x, rotationSpeed.y, rotationSpeed.z);

	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createRotationAnimator(temprotationSpeed));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr,
        irr_vector3df center,
        float radius, float speed,
        irr_vector3df direction,
        float startPosition ,
        float radiusEllipsoid)
{
    auto tempcenter = irr::core::vector3df(center.x, center.y, center.z);
    auto tempdirection = irr::core::vector3df(direction.x, direction.y, direction.z);

	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createFlyCircleAnimator(tempcenter, radius, speed, tempdirection, startPosition, radiusEllipsoid));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, irr_vector3df startPoint, irr_vector3df endPoint, unsigned int timeForWay, bool loop, bool pingpong)
{
    auto tempstartPoint = irr::core::vector3df(startPoint.x, startPoint.y, startPoint.z);
    auto tempendPoint = irr::core::vector3df(endPoint.x, endPoint.y, endPoint.z);

	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createFlyStraightAnimator(tempstartPoint, tempendPoint, timeForWay, loop, pingpong));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createTextureAnimator(irr_ISceneManager* smgr, irr_array* textures, int timePerFrame, bool loop)
{
	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createTextureAnimator(reinterpret_cast<const irr::core::array< irr::video::ITexture* > &>(textures->data), timePerFrame, loop));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createDeleteAnimator(irr_ISceneManager* smgr, unsigned int timeMs)
{
	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createDeleteAnimator(timeMs));
}

irr_ISceneNodeAnimatorCollisionResponse* irr_ISceneManager_createCollisionResponseAnimator(irr_ISceneManager* smgr,
        irr_ITriangleSelector* world, irr_ISceneNode* sceneNode,
        irr_vector3df ellipsoidRadius,
        irr_vector3df gravityPerSecond,
        irr_vector3df ellipsoidTranslation,
        float slidingValue)
{
    auto tempellipsoidRadius = irr::core::vector3df(ellipsoidRadius.x, ellipsoidRadius.y, ellipsoidRadius.z);
    auto tempgravityPerSecond = irr::core::vector3df(gravityPerSecond.x, gravityPerSecond.y, gravityPerSecond.z);
    auto tempellipsoidTranslation = irr::core::vector3df(ellipsoidTranslation.x, ellipsoidTranslation.y, ellipsoidTranslation.z);

	return reinterpret_cast<irr_ISceneNodeAnimatorCollisionResponse*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createCollisionResponseAnimator(reinterpret_cast<irr::scene::ITriangleSelector*>(world), reinterpret_cast<irr::scene::ISceneNode*>(sceneNode), tempellipsoidRadius, tempgravityPerSecond, tempellipsoidTranslation, slidingValue));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createFollowSplineAnimator(irr_ISceneManager* smgr, int startTime, irr_array* points, float speed, float tightness, bool loop, bool pingpong)
{
	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createFollowSplineAnimator(startTime, reinterpret_cast<const irr::core::array< irr::core::vector3df >&>(points->data), speed, tightness, loop, pingpong));
}

irr_ITriangleSelector* irr_ISceneManager_createTriangleSelector(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* node)
{
	return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createTriangleSelector(reinterpret_cast<irr::scene::IMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(node)));
}

irr_ITriangleSelector* irr_ISceneManager_createTriangleSelector2(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* node)
{
	return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createTriangleSelector(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)));
}

irr_ITriangleSelector* irr_ISceneManager_createTriangleSelectorFromBoundingBox(irr_ISceneManager* smgr, irr_ISceneNode* node)
{
	return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createTriangleSelectorFromBoundingBox(reinterpret_cast<irr::scene::ISceneNode*>(node)));
}

irr_ITriangleSelector* irr_ISceneManager_createOctreeTriangleSelector(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* node, int minimalPolysPerNode)
{
	return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createOctreeTriangleSelector(reinterpret_cast<irr::scene::IMesh*>(mesh), reinterpret_cast<irr::scene::ISceneNode*>(node), minimalPolysPerNode));
}

irr_IMetaTriangleSelector* irr_ISceneManager_createMetaTriangleSelector(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IMetaTriangleSelector*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createMetaTriangleSelector()));
}

irr_ITriangleSelector* irr_ISceneManager_createTerrainTriangleSelector(irr_ISceneManager* smgr, irr_ITerrainSceneNode* node, int LOD)
{
	return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createTerrainTriangleSelector(reinterpret_cast<irr::scene::ITerrainSceneNode*>(node), LOD)));
}

void irr_ISceneManager_addExternalMeshLoader(irr_ISceneManager* smgr, irr_IMeshLoader* externalLoader)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addExternalMeshLoader(reinterpret_cast<irr::scene::IMeshLoader*>(externalLoader));
}

int irr_ISceneManager_getMeshLoaderCount(irr_ISceneManager* smgr)
{
    return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMeshLoaderCount();
}

irr_IMeshLoader* irr_ISceneManager_getMeshLoader(irr_ISceneManager* smgr, int index)
{
	return reinterpret_cast<irr_IMeshLoader*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMeshLoader(index)));
}

void irr_ISceneManager_addExternalSceneLoader(irr_ISceneManager* smgr, irr_ISceneLoader* externalLoader)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addExternalSceneLoader(reinterpret_cast<irr::scene::ISceneLoader*>(externalLoader));
}

unsigned int irr_ISceneManager_getSceneLoaderCount(irr_ISceneManager* smgr)
{
    return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneLoaderCount();
}

irr_ISceneLoader* irr_ISceneManager_getSceneLoader(irr_ISceneManager* smgr, unsigned int index)
{
	return reinterpret_cast<irr_ISceneLoader*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneLoader(index)));
}

irr_ISceneCollisionManager* irr_ISceneManager_getSceneCollisionManager(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ISceneCollisionManager*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneCollisionManager()));
}

irr_IMeshManipulator* irr_ISceneManager_getMeshManipulator(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IMeshManipulator*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMeshManipulator()));
}

void irr_ISceneManager_addToDeletionQueue(irr_ISceneManager* smgr, irr_ISceneNode* node)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addToDeletionQueue(reinterpret_cast<irr::scene::ISceneNode*>(node));
}

bool irr_ISceneManager_postEventFromUser(irr_ISceneManager* smgr, irr_SEvent* event)
{
    return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->postEventFromUser(*reinterpret_cast<irr::SEvent*>(event));
}

void irr_ISceneManager_clear(irr_ISceneManager* smgr)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->clear();
}

irr_IAttributes* irr_ISceneManager_getParameters(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_IAttributes*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getParameters()));
}

E_SCENE_NODE_RENDER_PASS irr_ISceneManager_getSceneNodeRenderPass(irr_ISceneManager* smgr)
{
	return E_SCENE_NODE_RENDER_PASS(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeRenderPass());
}

irr_ISceneNodeFactory* irr_ISceneManager_getDefaultSceneNodeFactory(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ISceneNodeFactory*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getDefaultSceneNodeFactory()));
}

void irr_ISceneManager_registerSceneNodeFactory(irr_ISceneManager* smgr, irr_ISceneNodeFactory* factoryToAdd)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->registerSceneNodeFactory(reinterpret_cast<irr::scene::ISceneNodeFactory*>(factoryToAdd));
}

unsigned int irr_ISceneManager_getRegisteredSceneNodeFactoryCount(irr_ISceneManager* smgr)
{
    return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getRegisteredSceneNodeFactoryCount();
}

irr_ISceneNodeFactory* irr_ISceneManager_getSceneNodeFactory(irr_ISceneManager* smgr, unsigned int index)
{
	return reinterpret_cast<irr_ISceneNodeFactory*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeFactory(index)));
}

irr_ISceneNodeAnimatorFactory* irr_ISceneManager_getDefaultSceneNodeAnimatorFactory(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ISceneNodeAnimatorFactory*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getDefaultSceneNodeAnimatorFactory()));
}

void irr_ISceneManager_registerSceneNodeAnimatorFactory(irr_ISceneManager* smgr, irr_ISceneNodeAnimatorFactory* factoryToAdd)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->registerSceneNodeAnimatorFactory(reinterpret_cast<irr::scene::ISceneNodeAnimatorFactory*>(factoryToAdd));
}

unsigned int irr_ISceneManager_getRegisteredSceneNodeAnimatorFactoryCount(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getRegisteredSceneNodeAnimatorFactoryCount();
}

irr_ISceneNodeAnimatorFactory* irr_ISceneManager_getSceneNodeAnimatorFactory(irr_ISceneManager* smgr, unsigned int index)
{
	return reinterpret_cast<irr_ISceneNodeAnimatorFactory*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeAnimatorFactory(index)));
}

const char* irr_ISceneManager_getSceneNodeTypeName(irr_ISceneManager* smgr, ESCENE_NODE_TYPE type)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getSceneNodeTypeName(irr::scene::ESCENE_NODE_TYPE(type));
}

const char* irr_ISceneManager_getAnimatorTypeName(irr_ISceneManager* smgr, ESCENE_NODE_ANIMATOR_TYPE type)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getAnimatorTypeName(irr::scene::ESCENE_NODE_ANIMATOR_TYPE(type));
}

irr_ISceneNode* irr_ISceneManager_addSceneNode(irr_ISceneManager* smgr, const char* sceneNodeTypeName, irr_ISceneNode* parent)
{
	return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addSceneNode(sceneNodeTypeName, reinterpret_cast<irr::scene::ISceneNode*>(parent))));
}

irr_ISceneNodeAnimator* irr_ISceneManager_createSceneNodeAnimator(irr_ISceneManager* smgr, const char* typeName, irr_ISceneNode* target)
{
	return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createSceneNodeAnimator(typeName, reinterpret_cast<irr::scene::ISceneNode*>(target))));
}

irr_ISceneManager* irr_ISceneManager_createNewSceneManager(irr_ISceneManager* smgr, bool cloneContent)
{
	return reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createNewSceneManager(cloneContent)));
}

bool irr_ISceneManager_saveScene(irr_ISceneManager* smgr, const char* filename, irr_ISceneUserDataSerializer* userDataSerializer, irr_ISceneNode* node)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->saveScene(filename, reinterpret_cast<irr::scene::ISceneUserDataSerializer*>(userDataSerializer), reinterpret_cast<irr::scene::ISceneNode*>(node));
}

bool irr_ISceneManager_loadScene(irr_ISceneManager* smgr, const char* filename, irr_ISceneUserDataSerializer* userDataSerializer, irr_ISceneNode* rootNode)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->loadScene(filename, reinterpret_cast<irr::scene::ISceneUserDataSerializer*>(userDataSerializer), reinterpret_cast<irr::scene::ISceneNode*>(rootNode));
}

irr_IMeshWriter* irr_ISceneManager_createMeshWriter(irr_ISceneManager* smgr, EMESH_WRITER_TYPE type)
{
	return reinterpret_cast<irr_IMeshWriter*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createMeshWriter(irr::scene::EMESH_WRITER_TYPE(type)));
}

irr_ISkinnedMesh* irr_ISceneManager_createSkinnedMesh(irr_ISceneManager* smgr)
{
	return reinterpret_cast<irr_ISkinnedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createSkinnedMesh());
}

void irr_ISceneManager_setAmbientLight(irr_ISceneManager* smgr, irr_SColorf ambientColor)
{
    auto col = irr::video::SColorf(ambientColor.a, ambientColor.b, ambientColor.g, ambientColor.r);
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->setAmbientLight(col);
}

irr_SColorf irr_ISceneManager_getAmbientLight(irr_ISceneManager* smgr)
{
    auto temp = reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getAmbientLight();
    irr_SColorf light = {temp.getAlpha(), temp.getBlue(), temp.getGreen(), temp.getRed()};
    return light;
}

void irr_ISceneManager_setLightManager(irr_ISceneManager* smgr, irr_ILightManager* lightManager)
{
    reinterpret_cast<irr::scene::ISceneManager*>(smgr)->setLightManager(reinterpret_cast<irr::scene::ILightManager*>(lightManager));
}

E_SCENE_NODE_RENDER_PASS irr_ISceneManager_getCurrentRenderPass(irr_ISceneManager* smgr)
{
	return E_SCENE_NODE_RENDER_PASS(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getCurrentRenderPass());
}

const irr_IGeometryCreator* irr_ISceneManager_getGeometryCreator(irr_ISceneManager* smgr)
{
	return reinterpret_cast<const irr_IGeometryCreator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getGeometryCreator());
}

bool irr_ISceneManager_isCulled(irr_ISceneManager* smgr, const irr_ISceneNode* node)
{
	return reinterpret_cast<irr::scene::ISceneManager*>(smgr)->isCulled(reinterpret_cast<const irr::scene::ISceneNode*>(node));
}
