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

#ifndef _CIRRLICHT_IANIMATEDMESHSCENENODE_
#define _CIRRLICHT_IANIMATEDMESHSCENENODE_

#include "ISceneManager.h"

enum E_JOINT_UPDATE_ON_RENDER
{
    EJUOR_NONE = 0,
    EJUOR_READ,
    EJUOR_CONTROL
};

typedef struct irr_IAnimatedMeshSceneNode irr_IAnimatedMeshSceneNode;
typedef struct irr_IAnimatedMeshSceneNode irr_IAnimatedMeshSceneNode;
typedef struct irr_IAnimatedMesh irr_IAnimatedMesh;

struct irr_ISceneNodeAnimator;
struct irr_ISceneManager;
struct irr_IShadowVolumeSceneNode;
struct irr_IMesh;
struct irr_IBoneSceneNode;
struct irr_IAnimationEndCallBack;
struct irr_SMD3QuaternionTag;
struct irr_ITexture;

CIRRLICHT_API void irr_IAnimatedMeshSceneNode_addAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator);
CIRRLICHT_API const irr_list& irr_IAnimatedMeshSceneNode_getAnimators(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_removeAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator);
CIRRLICHT_API irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setPosition(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& newpos);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setMaterialFlag(irr_IAnimatedMeshSceneNode* node, E_MATERIAL_FLAG flag, bool newvalue);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setMaterialTexture(irr_IAnimatedMeshSceneNode* node, int c, irr_ITexture* texture);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setScale(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& scale);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setRotation(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& rotation);

CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setCurrentFrame(irr_IAnimatedMeshSceneNode* node, float frame);
CIRRLICHT_API bool irr_IAnimatedMeshSceneNode_setFrameLoop(irr_IAnimatedMeshSceneNode* node, int begin, int end);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setAnimationSpeed(irr_IAnimatedMeshSceneNode* node, float framesPerSecond);
CIRRLICHT_API float irr_IAnimatedMeshSceneNode_getAnimationSpeed(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API irr_IShadowVolumeSceneNode* irr_IAnimatedMeshSceneNode_addShadowVolumeSceneNode(irr_IAnimatedMeshSceneNode* node, const irr_IMesh* shadowMesh=0, int id=-1, bool zfailmethod=true, float infinity=1000.0f);
CIRRLICHT_API irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNode(irr_IAnimatedMeshSceneNode* node, const char* jointName);
CIRRLICHT_API irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNodeByID(irr_IAnimatedMeshSceneNode* node, unsigned int jointID);
CIRRLICHT_API unsigned int irr_IAnimatedMeshSceneNode_getJointCount(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setMD2Animation(irr_IAnimatedMeshSceneNode* node, EMD2_ANIMATION_TYPE value);
CIRRLICHT_API bool irr_IAnimatedMeshSceneNode_setMD2AnimationByName(irr_IAnimatedMeshSceneNode* node, const char* animationName);
CIRRLICHT_API float irr_IAnimatedMeshSceneNode_getFrameNr(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API int irr_IAnimatedMeshSceneNode_getStartFrame(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API int irr_IAnimatedMeshSceneNode_getEndFrame(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setLoopMode(irr_IAnimatedMeshSceneNode* node, bool playAnimationLooped);
CIRRLICHT_API bool irr_IAnimatedMeshSceneNode_getLoopMode(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setAnimationEndCallback(irr_IAnimatedMeshSceneNode* node, irr_IAnimationEndCallBack* callback=0);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node, bool readonly);
CIRRLICHT_API bool irr_IAnimatedMeshSceneNode_isReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setMesh(irr_IAnimatedMeshSceneNode* node, irr_IAnimatedMesh* mesh);
CIRRLICHT_API irr_IAnimatedMesh* irr_IAnimatedMeshSceneNode_getMesh(irr_IAnimatedMeshSceneNode* node);
CIRRLICHT_API const irr_SMD3QuaternionTag* irr_IAnimatedMeshSceneNode_getMD3TagTransformation(irr_IAnimatedMeshSceneNode* node, const char* tagname);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setJointMode(irr_IAnimatedMeshSceneNode* node, E_JOINT_UPDATE_ON_RENDER mode);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setTransitionTime(irr_IAnimatedMeshSceneNode* node, float Time);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_animateJoints(irr_IAnimatedMeshSceneNode* node, bool CalculateAbsolutePositions=true);
CIRRLICHT_API void irr_IAnimatedMeshSceneNode_setRenderFromIdentity(irr_IAnimatedMeshSceneNode* node, bool On);

#endif // _CIRRLICHT_IANIMATEDMESHSCENENODE_
