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

#ifndef _CIRRLICHT_SCENE_
#define _CIRRLICHT_SCENE_

#include "core.h"
#include "cirrlicht.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
    struct irr_IrrlichtDevice;

    enum E_MATERIAL_FLAG
    {
        EMF_WIREFRAME,
        EMF_POINTCLOUD,
        EMF_GOURAUD_SHADING,
        EMF_LIGHTING,
        EMF_ZBUFFER,
        EMF_ZWRITE_ENABLE,
        EMF_BACK_FACE_CULLING,
        EMF_FRONT_FACE_CULLING,
        EMF_BILINEAR_FILTER,
        EMF_TRILINEAR_FILTER,
        EMF_ANISOTROPIC_FILTER,
        EMF_FOG_ENABLE,
        EMF_NORMALIZE_NORMALS,
        EMF_TEXTURE_WRAP,
        EMF_ANTI_ALIASING,
        EMF_COLOR_MASK,
        EMF_COLOR_MATERIAL,
        EMF_USE_MIP_MAPS,
        EMF_BLEND_OPERATION,
        EMF_POLYGON_OFFSET
    };

    enum EMD2_ANIMATION_TYPE
    {
        EMAT_STAND,
        EMAT_RUN,
        EMAT_ATTACK,
        EMAT_PAIN_A,
        EMAT_PAIN_B,
        EMAT_PAIN_C,
        EMAT_JUMP,
        EMAT_FLIP,
        EMAT_SALUTE,
        EMAT_FALLBACK,
        EMAT_WAVE,
        EMAT_POINT,
        EMAT_CROUCH_STAND,
        EMAT_CROUCH_WALK,
        EMAT_CROUCH_ATTACK,
        EMAT_CROUCH_PAIN,
        EMAT_CROUCH_DEATH,
        EMAT_DEATH_FALLBACK,
        EMAT_DEATH_FALLFORWARD,
        EMAT_DEATH_FALLBACKSLOW,
        EMAT_BOOM,
        EMAT_COUNT,
    };

    typedef struct
    {

    } irr_IAnimatedMesh;

    typedef struct
    {

    } irr_IAnimatedMeshSceneNode;

    typedef struct
    {

    } irr_ICameraSceneNode;

    struct irr_ISceneManager;
    typedef struct irr_ISceneManager irr_ISceneManager;
    irr_ISceneManager* irr_IrrlichtDevice_getSceneManager(irr_IrrlichtDevice* device);
    irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
    irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh);
    void irr_ISceneNode_setMaterialFlag(irr_IAnimatedMeshSceneNode* node, E_MATERIAL_FLAG flag, bool newvalue);
    void irr_IAnimatedMeshSceneNode_setMD2Animation(irr_IAnimatedMeshSceneNode* node, EMD2_ANIMATION_TYPE value);

    struct irr_ITexture;
    void irr_ISceneNode_setMaterialTexture(irr_IAnimatedMeshSceneNode* node, int c, irr_ITexture* texture);

    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* parent, vector3df pos, vector3df lookAt);
    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr);

    void irr_ISceneNode_setPosition(irr_IAnimatedMeshSceneNode* node, vector3df pos);
    void irr_ISceneManager_drawAll(irr_ISceneManager* smgr);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_SCENE_
