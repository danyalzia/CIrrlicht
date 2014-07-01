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

irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh)
{
    return reinterpret_cast<irr_IAnimatedMeshSceneNode*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->addAnimatedMeshSceneNode(reinterpret_cast<irr::scene::IAnimatedMesh*>(mesh)));
}

irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file)
{
	return reinterpret_cast<irr_IAnimatedMesh*>(reinterpret_cast<irr::scene::ISceneManager*>(smgr)->getMesh(file));
}
