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

#include "IMesh.h"
#include <include/irrlicht.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    unsigned int irr_IMesh_getMeshBufferCount(irr_IMesh* mesh)
    {
        return reinterpret_cast<irr::scene::IMesh*>(mesh)->getMeshBufferCount();
    }

    irr_IMeshBuffer* irr_IMesh_getMeshBuffer(irr_IMesh* mesh, unsigned int nr)
    {
        return reinterpret_cast<irr_IMeshBuffer*>(reinterpret_cast<irr::scene::IMesh*>(mesh)->getMeshBuffer(nr));
    }

    irr_IMeshBuffer* irr_IMesh_getMeshBufferByMaterial(irr_IMesh* mesh, const irr_SMaterial* material)
    {
        return reinterpret_cast<irr_IMeshBuffer*>(reinterpret_cast<irr::scene::IMesh*>(mesh)->getMeshBuffer(reinterpret_cast<const irr::video::SMaterial&>(material)));
    }

    irr_aabbox3df irr_IMesh_getBoundingBox(irr_IMesh* mesh)
    {
        irr::core::aabbox3df box = reinterpret_cast<irr::scene::IMesh*>(mesh)->getBoundingBox();
        irr_vector3df min = {box.MinEdge.X, box.MinEdge.Y, box.MinEdge.Z};
        irr_vector3df max = {box.MaxEdge.X, box.MaxEdge.Y, box.MaxEdge.Z};
        irr_aabbox3df temp = {min, max};
        return temp;
    }

    void irr_IMesh_setBoundingBox(irr_IMesh* mesh, const irr_aabbox3df& box)
    {
        irr::core::vector3df min = irr::core::vector3df(box.MinEdge.x, box.MinEdge.y, box.MinEdge.z);
        irr::core::vector3df max = irr::core::vector3df(box.MaxEdge.x, box.MaxEdge.y, box.MaxEdge.z);
        irr::core::aabbox3df temp = irr::core::aabbox3df(min, max);
        reinterpret_cast<irr::scene::IMesh*>(mesh)->setBoundingBox(temp);
    }

    void irr_IMesh_setMaterialFlag(irr_IMesh* mesh, E_MATERIAL_FLAG flag, bool newvalue)
    {
        reinterpret_cast<irr::scene::IMesh*>(mesh)->setMaterialFlag(irr::video::E_MATERIAL_FLAG(flag), newvalue);
    }

    void irr_IMesh_setHardwareMappingHint(irr_IMesh* mesh, E_HARDWARE_MAPPING newMappingHint, E_BUFFER_TYPE buffer)
    {
        reinterpret_cast<irr::scene::IMesh*>(mesh)->setHardwareMappingHint(irr::scene::E_HARDWARE_MAPPING(newMappingHint), irr::scene::E_BUFFER_TYPE(buffer));
    }

    void irr_IMesh_setDirty(irr_IMesh* mesh, E_BUFFER_TYPE buffer)
    {
        reinterpret_cast<irr::scene::IMesh*>(mesh)->setDirty(irr::scene::E_BUFFER_TYPE(buffer));
    }

#ifdef __cplusplus
}
#endif // __cplusplus
