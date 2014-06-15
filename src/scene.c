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
#include "scene.h"

#ifdef __cplusplus
extern "C"
{
#endif
    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* parent, irr_vector3df pos, irr_vector3df lookAt)
    {
        return reinterpret_cast<irr_ICameraSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCameraSceneNode(reinterpret_cast<irr::scene::ISceneNode*>(parent), irr::core::vector3df(pos.x, pos.y, pos.z), irr::core::vector3df(lookAt.x, lookAt.y, lookAt.z)));
    }

    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr)
    {
        return reinterpret_cast<irr_ICameraSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCameraSceneNodeFPS());
    }

    void irr_ISceneManager_drawAll(irr_ISceneManager* smgr)
    {
        reinterpret_cast<irr::scene::ISceneManager*>(smgr)->drawAll();
    }

    irr_ISceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr)
    {
        return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addSphereSceneNode());
    }

    irr_ISceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr)
    {
        return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCubeSceneNode());
    }

    irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr, const irr_vector3df& center, float radius)
    {
        return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createFlyCircleAnimator(irr::core::vector3df(center.x, center.y, center.z), radius));
    }

    irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, const irr_vector3df& startPoint, const irr_vector3df& endPoint, unsigned int timeForWay, bool loop, bool pingpong)
    {
        return reinterpret_cast<irr_ISceneNodeAnimator*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->createFlyStraightAnimator(irr::core::vector3df(startPoint.x, startPoint.y, startPoint.z), irr::core::vector3df(endPoint.x, endPoint.y, endPoint.z), timeForWay, loop, pingpong));
    }

    void irr_ISceneNode_addAnimator(irr_ISceneNode* node, irr_ISceneNodeAnimator* animator)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->addAnimator(reinterpret_cast<irr::scene::ISceneNodeAnimator*>(animator));
    }

    const irr_list& irr_ISceneNode_getAnimators(irr_ISceneNode* node)
    {
        return reinterpret_cast<const irr_list&>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getAnimators());
    }

    void irr_ISceneNode_removeAnimator(irr_ISceneNode* node, irr_ISceneNodeAnimator* animator)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->removeAnimator(reinterpret_cast<irr::scene::ISceneNodeAnimator*>(animator));
    }

    void irr_ISceneNode_removeAnimators(irr_ISceneNode* node)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->removeAnimators();
    }

    irr_SMaterial& irr_ISceneNode_getMaterial(irr_ISceneNode* node, unsigned int num)
    {
        return reinterpret_cast<irr_SMaterial&>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getMaterial(num));
    }

    unsigned int irr_ISceneNode_getMaterialCount(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr::scene::ISceneNode*>(node)->getMaterialCount();
    }

    void irr_ISceneNode_setMaterialFlag(irr_ISceneNode* node, E_MATERIAL_FLAG flag, bool newvalue)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setMaterialFlag(irr::video::E_MATERIAL_FLAG(flag), newvalue);
    }

    void irr_ISceneNode_setMaterialTexture(irr_ISceneNode* node, int c, irr_ITexture* texture)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setMaterialTexture(c, reinterpret_cast<irr::video::ITexture*>(texture));
    }

    void irr_ISceneNode_setMaterialType(irr_ISceneNode* node, E_MATERIAL_TYPE newType)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setMaterialType(irr::video::E_MATERIAL_TYPE(newType));
    }

    const irr_vector3df& irr_ISceneNode_getScale(irr_ISceneNode* node)
    {
        irr::core::vector3df scale = reinterpret_cast<irr::scene::ISceneNode*>(node)->getScale();
        const irr_vector3df& temp = {scale.X, scale.Y, scale.Z};
        return temp;
    }

    void irr_ISceneNode_setScale(irr_ISceneNode* node, const irr_vector3df& scale)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setScale(irr::core::vector3df(scale.x, scale.y, scale.z));
    }

    const irr_vector3df& irr_ISceneNode_getRotation(irr_ISceneNode* node)
    {
        irr::core::vector3df rot = reinterpret_cast<irr::scene::ISceneNode*>(node)->getRotation();
        const irr_vector3df& temp = {rot.X, rot.Y, rot.Z};
        return temp;
    }

    void irr_ISceneNode_setRotation(irr_ISceneNode* node, const irr_vector3df& rotation)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setRotation(irr::core::vector3df(rotation.x, rotation.y, rotation.z));
    }

    const irr_vector3df& irr_ISceneNode_getPosition(irr_ISceneNode* node)
    {
        irr::core::vector3df pos = reinterpret_cast<irr::scene::ISceneNode*>(node)->getPosition();
        const irr_vector3df& temp = {pos.X, pos.Y, pos.Z};
        return temp;
    }

    void irr_ISceneNode_setPosition(irr_ISceneNode* node, const irr_vector3df& newpos)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setPosition(irr::core::vector3df(newpos.x, newpos.y, newpos.z));
    }

    irr_vector3df irr_ISceneNode_getAbsolutePosition(irr_ISceneNode* node)
    {
        irr::core::vector3df pos = reinterpret_cast<irr::scene::ISceneNode*>(node)->getAbsolutePosition();
        irr_vector3df temp = {pos.X, pos.Y, pos.Z};
        return temp;

    }

    void irr_ISceneNode_setAutomaticCulling(irr_ISceneNode* node, unsigned state)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setAutomaticCulling(state);
    }

    unsigned irr_ISceneNode_getAutomaticCulling(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr::scene::ISceneNode*>(node)->getAutomaticCulling();
    }

    void irr_ISceneNode_setDebugDataVisible(irr_ISceneNode* node, unsigned state)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setDebugDataVisible(state);
    }

    unsigned int irr_ISceneNode_isDebugDataVisible(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr::scene::ISceneNode*>(node)->isDebugDataVisible();
    }

    void irr_ISceneNode_setIsDebugObject(irr_ISceneNode* node, bool debugObject)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setIsDebugObject(debugObject);
    }

    bool irr_ISceneNode_isDebugObject(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr::scene::ISceneNode*>(node)->isDebugObject();
    }

    const irr_list& irr_ISceneNode_getChildren(irr_ISceneNode* node)
    {
        return reinterpret_cast<const irr_list&>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getChildren());
    }

    void irr_ISceneNode_setParent(irr_ISceneNode* node, irr_ISceneNode* newParent)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setParent(reinterpret_cast<irr::scene::ISceneNode*>(newParent));
    }

    irr_ITriangleSelector* irr_ISceneNode_getTriangleSelector(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr_ITriangleSelector*>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getTriangleSelector());
    }

    void irr_ISceneNode_setTriangleSelector(irr_ISceneNode* node, irr_ITriangleSelector* selector)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setTriangleSelector(reinterpret_cast<irr::scene::ITriangleSelector*>(selector));
    }

    void irr_ISceneNode_updateAbsolutePosition(irr_ISceneNode* node)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->updateAbsolutePosition();
    }

    irr_ISceneNode* irr_ISceneNode_getParent(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getParent());
    }

    ESCENE_NODE_TYPE irr_ISceneNode_getType(irr_ISceneNode* node)
    {
        return *reinterpret_cast<ESCENE_NODE_TYPE*>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getType());
    }

    void irr_ISceneNode_serializeAttributes(irr_ISceneNode* node, irr_IAttributes* out, irr_SAttributeReadWriteOptions* options)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->serializeAttributes(reinterpret_cast<irr::io::IAttributes*>(out), reinterpret_cast<irr::io::SAttributeReadWriteOptions*>(options));
    }

    void irr_ISceneNode_deserializeAttributes(irr_ISceneNode* node, irr_IAttributes* in, irr_SAttributeReadWriteOptions* options)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->deserializeAttributes(reinterpret_cast<irr::io::IAttributes*>(in), reinterpret_cast<irr::io::SAttributeReadWriteOptions*>(options));
    }

    irr_ISceneNode* irr_ISceneNode_clone(irr_ISceneNode* node, irr_ISceneNode* newParent, irr_ISceneManager* newManager)
    {
        return reinterpret_cast<irr_ISceneNode*>(reinterpret_cast<irr::scene::ISceneNode*>(node)->clone(reinterpret_cast<irr::scene::ISceneNode*>(newParent), reinterpret_cast<irr::scene::ISceneManager*>(newManager)));
    }

    irr_ISceneManager* irr_ISceneNode_getSceneManager(irr_ISceneNode* node)
    {
        return reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::scene::ISceneNode*>(node)->getSceneManager());
    }

    irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file)
    {
        return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMesh(file));
    }

    irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh)
    {
        return reinterpret_cast<irr_IAnimatedMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addAnimatedMeshSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh)));
    }

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

    void irr_IAnimatedMeshSceneNode_setFrameLoop(irr_IAnimatedMeshSceneNode* node, int begin, int end)
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
#ifdef __cplusplus
}
#endif // __cplusplus
