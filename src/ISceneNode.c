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
#include "ISceneNode.h"

#ifdef __cplusplus
extern "C"
{
#endif

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
#ifdef __cplusplus
}
#endif // __cplusplus
