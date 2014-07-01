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

#ifndef _CIRRLICHT_ISCENEMANAGER_
#define _CIRRLICHT_ISCENEMANAGER_

#include "CompileConfig.h"
#include "core.h"
#include "SColor.h"
#include "cirrlicht.h"

struct irr_IrrlichtDevice;

struct irr_ISceneManager;
typedef struct irr_ISceneManager irr_ISceneManager;

struct irr_ITexture;
struct irr_IMeshCache;
struct irr_IVideoDriver;
struct irr_IGUIEnvironment;
struct irr_IFileSystem;
struct irr_IVolumeLightSceneNode;
struct irr_IMeshSceneNode;
struct irr_ISceneNode;
struct irr_IAnimatedMeshSceneNode;
struct irr_ICameraSceneNode;
struct irr_SKeyMap;
struct irr_ILightSceneNode;
struct irr_IBillboardSceneNode;

CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
irr_IMeshCache* irr_ISceneManager_getMeshCache(irr_ISceneManager* smgr);
irr_IVideoDriver* irr_ISceneManager_getVideoDriver(irr_ISceneManager* smgr);
irr_IGUIEnvironment* irr_ISceneManager_getGUIEnvironment(irr_ISceneManager* smgr);
irr_IFileSystem* irr_ISceneManager_getFileSystem(irr_ISceneManager* smgr);
irr_IVolumeLightSceneNode* irr_ISceneManager_addVolumeLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent=0, int id=-1, unsigned int subdivU = 32, unsigned int subdivV = 32, irr_SColor foot = {51, 0, 230, 180}, irr_SColor tail = {0, 0, 0, 0}, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
irr_IMeshSceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr, float size=10.0f, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
irr_IMeshSceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr, float radius=5.0f, int polyCount=16, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f});
irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f}, bool alsoAddIfMeshPointerZero=false);
irr_IMeshSceneNode* irr_ISceneManager_addMeshSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent=0, int id=-1, irr_vector3df position = {0,0,0}, irr_vector3df rotation = {0,0,0}, irr_vector3df scale = {1.0f, 1.0f, 1.0f}, bool alsoAddIfMeshPointerZero=false);
irr_ISceneNode* irr_ISceneManager_addWaterSurfaceSceneNode(irr_ISceneManager* smgr, irr_IMesh* mesh,
			float waveHeight=2.0f, float waveSpeed=300.0f, float waveLength=10.0f,
			irr_ISceneNode* parent=0, int id=-1,
			irr_vector3df position = {0,0,0},
			irr_vector3df rotation = {0,0,0},
			irr_vector3df scale = {1.0f, 1.0f, 1.0f});
irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh, irr_ISceneNode* parent=0,
			int id=-1, int minimalPolysPerNode=512, bool alsoAddIfMeshPointerZero=false);
irr_IMeshSceneNode* irr_ISceneManager_addOctreeSceneNode2(irr_ISceneManager* smgr, irr_IMesh* mesh, irr_ISceneNode* parent=0,
			int id=-1, int minimalPolysPerNode=256, bool alsoAddIfMeshPointerZero=false);
				
CIRRLICHT_API irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent, irr_vector3df pos, irr_vector3df lookAt, int id=-1, bool makeActive=true);
irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeMaya(irr_ISceneManager* smgr, irr_ISceneNode* parent=0,
			float rotateSpeed=-1500.f, float zoomSpeed=200.f,
			float translationSpeed=1500.f, int id=-1, float distance=70.f,
			bool makeActive=true);
			
irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
			float rotateSpeed = 100.0f, float moveSpeed = 0.5f, int id=-1,
			irr_SKeyMap* keyMapArray=0, int keyMapSize=0, bool noVerticalMovement=false,
			float jumpSpeed = 0.f, bool invertMouse=false,
			bool makeActive=true);
			
irr_ILightSceneNode* irr_ISceneManager_addLightSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
			irr_vector3df position = {0,0,0},
			irr_SColorf color = {1.0f, 1.0f, 1.0f},
			float radius=100.0f, int id=-1);
			
irr_IBillboardSceneNode* irr_ISceneManager_addBillboardSceneNode(irr_ISceneManager* smgr, irr_ISceneNode* parent = 0,
			irr_dimension2df size = {10.0f, 10.0f},
			irr_vector3df position = {0,0,0}, int id=-1,
			irr_SColor colorTop = {0xFFFFFFFF}, irr_SColor colorBottom = {0xFFFFFFFF});

irr_ISceneNode* irr_ISceneManager_addSkyBoxSceneNode(irr_ISceneManager* smgr, irr_ITexture* top, irr_ITexture* bottom,
			irr_ITexture* left, irr_ITexture* right, irr_ITexture* front,
			irr_ITexture* back, irr_ISceneNode* parent = 0, int id=-1);

irr_ISceneNode* irr_ISceneManager_addSkyDomeSceneNode(irr_ISceneManager* smgr, irr_ITexture* texture,
			unsigned int horiRes=16, unsigned int vertRes=8,
			float texturePercentage=0.9, float spherePercentage=2.0,float radius = 1000.f,
			irr_ISceneNode* parent=0, int id=-1);
			
CIRRLICHT_API void irr_ISceneManager_drawAll(irr_ISceneManager* smgr);


typedef struct irr_ISceneNodeAnimator irr_ISceneNodeAnimator;

CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr, const irr_vector3df& center, float radius=100.f);
CIRRLICHT_API irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, const irr_vector3df& startPoint, const irr_vector3df& endPoint, unsigned int timeForWay, bool loop=false, bool pingpong = false);

struct irr_IAttributes;
struct irr_SAttributeReadWriteOptions;
struct irr_ISceneNodeAnimator;
typedef struct irr_ISceneNodeAnimator irr_ISceneNodeAnimator;
typedef struct irr_IShadowVolumeSceneNode irr_IShadowVolumeSceneNode;
typedef struct irr_IBoneSceneNode irr_IBoneSceneNode;
typedef struct irr_IAnimationEndCallBack irr_IAnimationEndCallBack;
typedef struct irr_SMD3QuaternionTag irr_SMD3QuaternionTag;

#endif // _CIRRLICHT_ISCENEMANAGER_
