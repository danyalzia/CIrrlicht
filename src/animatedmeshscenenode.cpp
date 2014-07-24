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

#include <IAnimatedMeshSceneNode.h>
#include "cirrlicht.h"

void irr_IAnimatedMeshSceneNode_addAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->addAnimator(reinterpret_cast<irr::scene::ISceneNodeAnimator*>(animator));
}

const irr_list& irr_IAnimatedMeshSceneNode_getAnimators(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<const irr_list&>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getAnimators());
}

void irr_IAnimatedMeshSceneNode_removeAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->removeAnimator(reinterpret_cast<irr::scene::ISceneNodeAnimator*>(animator));
}

void irr_IAnimatedMeshSceneNode_setPosition(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& newpos)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setPosition(irr::core::vector3df(newpos.x, newpos.y, newpos.z));
}

void irr_IAnimatedMeshSceneNode_setMaterialFlag(irr_IAnimatedMeshSceneNode* node, E_MATERIAL_FLAG flag, bool newvalue)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMaterialFlag(irr::video::E_MATERIAL_FLAG(flag), newvalue);
}

void irr_IAnimatedMeshSceneNode_setMaterialTexture(irr_IAnimatedMeshSceneNode* node, int c, irr_ITexture* texture)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMaterialTexture(c, reinterpret_cast<irr::video::ITexture*>(texture));
}

void irr_IAnimatedMeshSceneNode_setScale(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& scale)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setScale(irr::core::vector3df(scale.x, scale.y, scale.z));
}

void irr_IAnimatedMeshSceneNode_setRotation(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& rotation)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setRotation(irr::core::vector3df(rotation.x, rotation.y, rotation.z));
}

void irr_IAnimatedMeshSceneNode_setCurrentFrame(irr_IAnimatedMeshSceneNode* node, float frame)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setCurrentFrame(frame);
}

bool irr_IAnimatedMeshSceneNode_setFrameLoop(irr_IAnimatedMeshSceneNode* node, int begin, int end)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setFrameLoop(begin, end);
}

void irr_IAnimatedMeshSceneNode_setAnimationSpeed(irr_IAnimatedMeshSceneNode* node, float framesPerSecond)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setAnimationSpeed(framesPerSecond);
}

float irr_IAnimatedMeshSceneNode_getAnimationSpeed(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getAnimationSpeed();
}

irr_IShadowVolumeSceneNode* irr_IAnimatedMeshSceneNode_addShadowVolumeSceneNode(irr_IAnimatedMeshSceneNode* node, const irr_IMesh* shadowMesh, int id, bool zfailmethod, float infinity)
{
    return reinterpret_cast<irr_IShadowVolumeSceneNode*>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->addShadowVolumeSceneNode(reinterpret_cast<const irr::scene::IMesh*>(shadowMesh), id, zfailmethod, infinity));
}

irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNode(irr_IAnimatedMeshSceneNode* node, const char* jointName)
{
    return reinterpret_cast<irr_IBoneSceneNode*>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getJointNode(jointName));
}

irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNodeByID(irr_IAnimatedMeshSceneNode* node, unsigned int jointID)
{
    return reinterpret_cast<irr_IBoneSceneNode*>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getJointNode(jointID));
}

unsigned int irr_IAnimatedMeshSceneNode_getJointCount(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getJointCount();
}

void irr_IAnimatedMeshSceneNode_setMD2Animation(irr_IAnimatedMeshSceneNode* node, EMD2_ANIMATION_TYPE value)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMD2Animation(irr::scene::EMD2_ANIMATION_TYPE(value));
}

bool irr_IAnimatedMeshSceneNode_setMD2AnimationByName(irr_IAnimatedMeshSceneNode* node, const char* animationName)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMD2Animation(animationName);
}

float irr_IAnimatedMeshSceneNode_getFrameNr(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getFrameNr();
}

int irr_IAnimatedMeshSceneNode_getStartFrame(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getStartFrame();
}

int irr_IAnimatedMeshSceneNode_getEndFrame(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getEndFrame();
}

void irr_IAnimatedMeshSceneNode_setLoopMode(irr_IAnimatedMeshSceneNode* node, bool playAnimationLooped)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setLoopMode(playAnimationLooped);
}

bool irr_IAnimatedMeshSceneNode_getLoopMode(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getLoopMode();
}

void irr_IAnimatedMeshSceneNode_setAnimationEndCallback(irr_IAnimatedMeshSceneNode* node, irr_IAnimationEndCallBack* callback)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setAnimationEndCallback(reinterpret_cast<irr::scene::IAnimationEndCallBack*>(callback));
}

void irr_IAnimatedMeshSceneNode_setReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node, bool readonly)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setReadOnlyMaterials(readonly);
}

bool irr_IAnimatedMeshSceneNode_isReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->isReadOnlyMaterials();
}

void irr_IAnimatedMeshSceneNode_setMesh(irr_IAnimatedMeshSceneNode* node, irr_IAnimatedMesh* mesh)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMesh(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh));
}

irr_IAnimatedMesh* irr_IAnimatedMeshSceneNode_getMesh(irr_IAnimatedMeshSceneNode* node)
{
    return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getMesh());
}

const irr_SMD3QuaternionTag* irr_IAnimatedMeshSceneNode_getMD3TagTransformation(irr_IAnimatedMeshSceneNode* node, const char* tagname)
{
    return reinterpret_cast<const irr_SMD3QuaternionTag*>(reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->getMD3TagTransformation(irr::core::stringc(tagname)));
}

void irr_IAnimatedMeshSceneNode_setJointMode(irr_IAnimatedMeshSceneNode* node, E_JOINT_UPDATE_ON_RENDER mode)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setJointMode(irr::scene::E_JOINT_UPDATE_ON_RENDER(mode));
}

void irr_IAnimatedMeshSceneNode_setTransitionTime(irr_IAnimatedMeshSceneNode* node, float Time)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setTransitionTime(Time);
}

void irr_IAnimatedMeshSceneNode_animateJoints(irr_IAnimatedMeshSceneNode* node, bool CalculateAbsolutePositions)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->animateJoints(CalculateAbsolutePositions);
}

void irr_IAnimatedMeshSceneNode_setRenderFromIdentity(irr_IAnimatedMeshSceneNode* node, bool On)
{
    reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setRenderFromIdentity(On);
}
