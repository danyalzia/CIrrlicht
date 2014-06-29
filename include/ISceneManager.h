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

#ifndef _CIRRLICHT_SCENE_
#define _CIRRLICHT_SCENE_

#include "core.h"
#include "cirrlicht.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
struct irr_IrrlichtDevice;

struct irr_IMesh;
typedef struct irr_IMesh irr_IMesh;

struct irr_IAnimatedMesh;
typedef struct irr_IAnimatedMesh irr_IAnimatedMesh;

struct irr_ISceneNode;
typedef struct irr_ISceneNode irr_ISceneNode;

struct irr_IAnimatedMeshSceneNode;
typedef struct irr_IAnimatedMeshSceneNode irr_IAnimatedMeshSceneNode;

struct irr_ICameraSceneNode;
typedef struct irr_ICameraSceneNode irr_ICameraSceneNode;

struct irr_ISceneManager;
typedef struct irr_ISceneManager irr_ISceneManager;

struct irr_ITriangleSelector;
typedef struct irr_ITriangleSelector irr_ITriangleSelector;

struct irr_SMaterial;
typedef struct irr_SMaterial irr_SMaterial;

struct irr_ITexture;

irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* parent, irr_vector3df pos, irr_vector3df lookAt);
irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr);
irr_ISceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr);
irr_ISceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr);
void irr_ISceneManager_drawAll(irr_ISceneManager* smgr);
irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
struct irr_ISceneNodeAnimator;
typedef struct irr_ISceneNodeAnimator irr_ISceneNodeAnimator;

irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr, const irr_vector3df& center, float radius=100.f);
irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, const irr_vector3df& startPoint, const irr_vector3df& endPoint, unsigned int timeForWay, bool loop=false, bool pingpong = false);

struct irr_IAttributes;
struct irr_SAttributeReadWriteOptions;

struct irr_ISceneNodeAnimator;
typedef irr_ISceneNodeAnimator irr_ISceneNodeAnimator;

struct irr_IShadowVolumeSceneNode;
typedef irr_IShadowVolumeSceneNode irr_IShadowVolumeSceneNode;

struct irr_IBoneSceneNode;
typedef irr_IBoneSceneNode irr_IBoneSceneNode;

struct irr_IAnimationEndCallBack;
typedef irr_IAnimationEndCallBack irr_IAnimationEndCallBack;

struct irr_SMD3QuaternionTag;
typedef irr_SMD3QuaternionTag irr_SMD3QuaternionTag;
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_SCENE_
