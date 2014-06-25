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

#ifndef _CIRRLICHT_ISCENENODE_
#define _CIRRLICHT_ISCENENODE_

#include "core.h"
#include "EMaterialFlags.h"
#include "EMaterialTypes.h"
#include "ESceneNodeTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
    struct irr_ISceneNode;
    struct irr_ISceneNodeAnimator;
    struct irr_SMaterial;
    struct irr_ITriangleSelector;
    struct irr_ITexture;
    struct irr_IAttributes;
    struct irr_SAttributeReadWriteOptions;
    struct irr_ISceneManager;
    struct irr_IAnimatedMesh;

	void irr_ISceneNode_addAnimator(irr_ISceneNode* node, irr_ISceneNodeAnimator* animator);
    const irr_list& irr_ISceneNode_getAnimators(irr_ISceneNode* node);
    void irr_ISceneNode_removeAnimator(irr_ISceneNode* node, irr_ISceneNodeAnimator* animator);
    void irr_ISceneNode_removeAnimators(irr_ISceneNode* node);
    irr_SMaterial& irr_ISceneNode_getMaterial(irr_ISceneNode* node, unsigned int num);
    unsigned int irr_ISceneNode_getMaterialCount(irr_ISceneNode* node);
    void irr_ISceneNode_setMaterialFlag(irr_ISceneNode* node, E_MATERIAL_FLAG flag, bool newvalue);
    void irr_ISceneNode_setMaterialTexture(irr_ISceneNode* node, int c, irr_ITexture* texture);
    void irr_ISceneNode_setMaterialType(irr_ISceneNode* node, E_MATERIAL_TYPE newType);
    const irr_vector3df& irr_ISceneNode_getScale(irr_ISceneNode* node);
    void irr_ISceneNode_setScale(irr_ISceneNode* node, const irr_vector3df& scale);
    const irr_vector3df& irr_ISceneNode_getRotation(irr_ISceneNode* node);
    void irr_ISceneNode_setRotation(irr_ISceneNode* node, const irr_vector3df& rotation);
    const irr_vector3df& irr_ISceneNode_getPosition(irr_ISceneNode* node);
    void irr_ISceneNode_setPosition(irr_ISceneNode* node, const irr_vector3df& newpos);
    irr_vector3df irr_ISceneNode_getAbsolutePosition(irr_ISceneNode* node);
    void irr_ISceneNode_setAutomaticCulling(irr_ISceneNode* node, unsigned state);
    unsigned irr_ISceneNode_getAutomaticCulling(irr_ISceneNode* node);
    void irr_ISceneNode_setDebugDataVisible(irr_ISceneNode* node, unsigned state);
    unsigned int irr_ISceneNode_isDebugDataVisible(irr_ISceneNode* node);
    void irr_ISceneNode_setIsDebugObject(irr_ISceneNode* node, bool debugObject);
    bool irr_ISceneNode_isDebugObject(irr_ISceneNode* node);
    const irr_list& irr_ISceneNode_getChildren(irr_ISceneNode* node);
    void irr_ISceneNode_setParent(irr_ISceneNode* node, irr_ISceneNode* newParent);
    irr_ITriangleSelector* irr_ISceneNode_getTriangleSelector(irr_ISceneNode* node);
    void irr_ISceneNode_setTriangleSelector(irr_ISceneNode* node, irr_ITriangleSelector* selector);
    void irr_ISceneNode_updateAbsolutePosition(irr_ISceneNode* node);
    irr_ISceneNode* irr_ISceneNode_getParent(irr_ISceneNode* node);
    ESCENE_NODE_TYPE irr_ISceneNode_getType(irr_ISceneNode* node);
    void irr_ISceneNode_serializeAttributes(irr_ISceneNode* node, irr_IAttributes* out, irr_SAttributeReadWriteOptions* options=0);
    void irr_ISceneNode_deserializeAttributes(irr_ISceneNode* node, irr_IAttributes* in, irr_SAttributeReadWriteOptions* options=0);
    irr_ISceneNode* irr_ISceneNode_clone(irr_ISceneNode* node, irr_ISceneNode* newParent=0, irr_ISceneManager* newManager=0);
    irr_ISceneManager* irr_ISceneNode_getSceneManager(irr_ISceneNode* node);
    irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_ISCENENODE_
