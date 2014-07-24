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

#pragma once

#include "compileconfig.h"

typedef struct irr_IMeshSceneNode irr_IMeshSceneNode;

struct irr_IMesh;
struct irr_IShadowVolumeSceneNode;

CIRRLICHT_API void irr_IMeshSceneNode_setMesh(irr_IMeshSceneNode* node, irr_IMesh* mesh);
CIRRLICHT_API irr_IMesh* irr_IMeshSceneNode_getMesh(irr_IMeshSceneNode* node);
CIRRLICHT_API irr_IShadowVolumeSceneNode* irr_IMeshSceneNode_addShadowVolumeSceneNode(irr_IMeshSceneNode* node, const irr_IMesh* shadowMesh=0, int id=-1, bool zfailmethod=true, float infinity=1000.0f);
CIRRLICHT_API void irr_IMeshSceneNode_setReadOnlyMaterials(irr_IMeshSceneNode* node, bool readonly);
CIRRLICHT_API bool irr_IMeshSceneNode_isReadOnlyMaterials(irr_IMeshSceneNode* node);
