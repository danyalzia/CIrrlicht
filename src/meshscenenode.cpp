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

#include "meshscenenode.h"
#include <irrlicht.h>

void irr_IMeshSceneNode_setMesh(irr_IMeshSceneNode* node, irr_IMesh* mesh)
{
	reinterpret_cast<irr::scene::IMeshSceneNode*>(node)->setMesh(reinterpret_cast<irr::scene::IMesh*>(mesh));
}

irr_IMesh* irr_IMeshSceneNode_getMesh(irr_IMeshSceneNode* node)
{
	auto mesh = reinterpret_cast<irr::scene::IMeshSceneNode*>(node)->getMesh();
	return reinterpret_cast<irr_IMesh*>(mesh);
}

irr_IShadowVolumeSceneNode* irr_IMeshSceneNode_addShadowVolumeSceneNode(irr_IMeshSceneNode* node, const irr_IMesh* shadowMesh, int id, bool zfailmethod, float infinity)
{
	auto shadow = reinterpret_cast<irr::scene::IMeshSceneNode*>(node)->addShadowVolumeSceneNode(reinterpret_cast<const irr::scene::IMesh*>(shadowMesh), id, zfailmethod, infinity);
	return reinterpret_cast<irr_IShadowVolumeSceneNode*>(shadow);
}

void irr_IMeshSceneNode_setReadOnlyMaterials(irr_IMeshSceneNode* node, bool readonly)
{
	reinterpret_cast<irr::scene::IMeshSceneNode*>(node)->setReadOnlyMaterials(readonly);
}

bool irr_IMeshSceneNode_isReadOnlyMaterials(irr_IMeshSceneNode* node)
{
	return reinterpret_cast<irr::scene::IMeshSceneNode*>(node)->isReadOnlyMaterials();
}
