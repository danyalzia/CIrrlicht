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

#include "CompileConfig.h"
#include "core.h"
#include "EMaterialFlags.h"
#include "EHardwareBufferFlags.h"

struct irr_IMesh;
typedef struct irr_IMesh irr_IMesh;

struct irr_IMeshBuffer;
struct irr_SMaterial;

CIRRLICHT_API unsigned int irr_IMesh_getMeshBufferCount(irr_IMesh* mesh);
CIRRLICHT_API irr_IMeshBuffer* irr_IMesh_getMeshBuffer(irr_IMesh* mesh, unsigned int nr);
CIRRLICHT_API irr_IMeshBuffer* irr_IMesh_getMeshBufferByMaterial(irr_IMesh* mesh, const irr_SMaterial* material);
CIRRLICHT_API irr_aabbox3df irr_IMesh_getBoundingBox(irr_IMesh* mesh);
CIRRLICHT_API void irr_IMesh_setBoundingBox(irr_IMesh* mesh, const irr_aabbox3df& box);
CIRRLICHT_API void irr_IMesh_setMaterialFlag(irr_IMesh* mesh, E_MATERIAL_FLAG flag, bool newvalue);
CIRRLICHT_API void irr_IMesh_setHardwareMappingHint(irr_IMesh* mesh, E_HARDWARE_MAPPING newMappingHint, E_BUFFER_TYPE buffer=EBT_VERTEX_AND_INDEX);
CIRRLICHT_API void irr_IMesh_setDirty(irr_IMesh* mesh, E_BUFFER_TYPE buffer=EBT_VERTEX_AND_INDEX);
