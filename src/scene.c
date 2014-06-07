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
    irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file)
    {
        return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMesh(file));
    }

    irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh)
    {
        return reinterpret_cast<irr_IAnimatedMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addAnimatedMeshSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh)));
    }

    void irr_ISceneNode_setMaterialFlag(irr_IAnimatedMeshSceneNode* node, E_MATERIAL_FLAG flag, bool newvalue)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setMaterialFlag(irr::video::E_MATERIAL_FLAG(flag), newvalue);
    }

    void irr_IAnimatedMeshSceneNode_setMD2Animation(irr_IAnimatedMeshSceneNode* node, EMD2_ANIMATION_TYPE value)
    {
        reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setMD2Animation(irr::scene::EMD2_ANIMATION_TYPE(value));
    }

    void irr_ISceneNode_setMaterialTexture(irr_IAnimatedMeshSceneNode* node, int c, irr_ITexture* texture)
    {
        reinterpret_cast<irr::scene::ISceneNode*>(node)->setMaterialTexture(c, reinterpret_cast<irr::video::ITexture*>(texture));
    }

    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* parent, vector3df pos, vector3df lookAt)
    {
        return reinterpret_cast<irr_ICameraSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCameraSceneNode(reinterpret_cast<irr::scene::ISceneNode*>(parent), irr::core::vector3df(pos.x, pos.y, pos.z), irr::core::vector3df(lookAt.x, lookAt.y, lookAt.z)));
    }

    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr)
    {
        return reinterpret_cast<irr_ICameraSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addCameraSceneNodeFPS());
    }

    void irr_ISceneNode_setPosition(irr_IAnimatedMeshSceneNode* node, vector3df pos)
    {
        reinterpret_cast<irr::scene::IAnimatedMeshSceneNode*>(node)->setPosition(irr::core::vector3df(pos.x, pos.y, pos.z));
    }

    void irr_ISceneManager_drawAll(irr_ISceneManager* smgr)
    {
        reinterpret_cast<irr::scene::ISceneManager*>(smgr)->drawAll();
    }
#ifdef __cplusplus
}
#endif // __cplusplus
