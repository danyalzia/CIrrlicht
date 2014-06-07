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

    //! Material flags
    enum E_MATERIAL_FLAG
	{
		//! Draw as wireframe or filled triangles? Default: false
		EMF_WIREFRAME = 0x1,

		//! Draw as point cloud or filled triangles? Default: false
		EMF_POINTCLOUD = 0x2,

		//! Flat or Gouraud shading? Default: true
		EMF_GOURAUD_SHADING = 0x4,

		//! Will this material be lighted? Default: true
		EMF_LIGHTING = 0x8,

		//! Is the ZBuffer enabled? Default: true
		EMF_ZBUFFER = 0x10,

		//! May be written to the zbuffer or is it readonly. Default: true
		/** This flag is ignored, if the material type is a transparent type. */
		EMF_ZWRITE_ENABLE = 0x20,

		//! Is backface culling enabled? Default: true
		EMF_BACK_FACE_CULLING = 0x40,

		//! Is frontface culling enabled? Default: false
		/** Overrides EMF_BACK_FACE_CULLING if both are enabled. */
		EMF_FRONT_FACE_CULLING = 0x80,

		//! Is bilinear filtering enabled? Default: true
		EMF_BILINEAR_FILTER = 0x100,

		//! Is trilinear filtering enabled? Default: false
		/** If the trilinear filter flag is enabled,
		the bilinear filtering flag is ignored. */
		EMF_TRILINEAR_FILTER = 0x200,

		//! Is anisotropic filtering? Default: false
		/** In Irrlicht you can use anisotropic texture filtering in
		conjunction with bilinear or trilinear texture filtering
		to improve rendering results. Primitives will look less
		blurry with this flag switched on. */
		EMF_ANISOTROPIC_FILTER = 0x400,

		//! Is fog enabled? Default: false
		EMF_FOG_ENABLE = 0x800,

		//! Normalizes normals. Default: false
		/** You can enable this if you need to scale a dynamic lighted
		model. Usually, its normals will get scaled too then and it
		will get darker. If you enable the EMF_NORMALIZE_NORMALS flag,
		the normals will be normalized again, and the model will look
		as bright as it should. */
		EMF_NORMALIZE_NORMALS = 0x1000,

		//! Access to all layers texture wrap settings. Overwrites separate layer settings.
		EMF_TEXTURE_WRAP = 0x2000,

		//! AntiAliasing mode
		EMF_ANTI_ALIASING = 0x4000,

		//! ColorMask bits, for enabling the color planes
		EMF_COLOR_MASK = 0x8000,

		//! ColorMaterial enum for vertex color interpretation
		EMF_COLOR_MATERIAL = 0x10000,

		//! Flag for enabling/disabling mipmap usage
		EMF_USE_MIP_MAPS = 0x20000,

		//! Flag for blend operation
		EMF_BLEND_OPERATION = 0x40000,

		//! Flag for polygon offset
		EMF_POLYGON_OFFSET = 0x80000,

        //! Flag for blend factor
		EMF_BLEND_FACTOR = 0x160000
	};

    //! Types of standard md2 animations
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
        //! Not an animation, but amount of animation types.
        EMAT_COUNT,
    };

    //! An enumeration for all types of built-in scene nodes
	/** A scene node type is represented by a four character code
	such as 'cube' or 'mesh' instead of simple numbers, to avoid
	name clashes with external scene nodes.*/
	enum ESCENE_NODE_TYPE
	{
		//! of type CSceneManager (note that ISceneManager is not(!) an ISceneNode)
		ESNT_SCENE_MANAGER  = MAKE_IRR_ID('s','m','n','g'),

		//! simple cube scene node
		ESNT_CUBE           = MAKE_IRR_ID('c','u','b','e'),

		//! Sphere scene node
		ESNT_SPHERE         = MAKE_IRR_ID('s','p','h','r'),

		//! Text Scene Node
		ESNT_TEXT           = MAKE_IRR_ID('t','e','x','t'),

		//! Water Surface Scene Node
		ESNT_WATER_SURFACE  = MAKE_IRR_ID('w','a','t','r'),

		//! Terrain Scene Node
		ESNT_TERRAIN        = MAKE_IRR_ID('t','e','r','r'),

		//! Sky Box Scene Node
		ESNT_SKY_BOX        = MAKE_IRR_ID('s','k','y','_'),

		//! Sky Dome Scene Node
		ESNT_SKY_DOME       = MAKE_IRR_ID('s','k','y','d'),

		//! Shadow Volume Scene Node
		ESNT_SHADOW_VOLUME  = MAKE_IRR_ID('s','h','d','w'),

		//! Octree Scene Node
		ESNT_OCTREE         = MAKE_IRR_ID('o','c','t','r'),

		//! Mesh Scene Node
		ESNT_MESH           = MAKE_IRR_ID('m','e','s','h'),

		//! Light Scene Node
		ESNT_LIGHT          = MAKE_IRR_ID('l','g','h','t'),

		//! Empty Scene Node
		ESNT_EMPTY          = MAKE_IRR_ID('e','m','t','y'),

		//! Dummy Transformation Scene Node
		ESNT_DUMMY_TRANSFORMATION = MAKE_IRR_ID('d','m','m','y'),

		//! Camera Scene Node
		ESNT_CAMERA         = MAKE_IRR_ID('c','a','m','_'),

		//! Billboard Scene Node
		ESNT_BILLBOARD      = MAKE_IRR_ID('b','i','l','l'),

		//! Animated Mesh Scene Node
		ESNT_ANIMATED_MESH  = MAKE_IRR_ID('a','m','s','h'),

		//! Particle System Scene Node
		ESNT_PARTICLE_SYSTEM = MAKE_IRR_ID('p','t','c','l'),

		//! Quake3 Shader Scene Node
		ESNT_Q3SHADER_SCENE_NODE  = MAKE_IRR_ID('q','3','s','h'),

		//! Quake3 Model Scene Node ( has tag to link to )
		ESNT_MD3_SCENE_NODE  = MAKE_IRR_ID('m','d','3','_'),

		//! Volume Light Scene Node
		ESNT_VOLUME_LIGHT  = MAKE_IRR_ID('v','o','l','l'),

		//! Maya Camera Scene Node
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_MAYA    = MAKE_IRR_ID('c','a','m','M'),

		//! First Person Shooter Camera
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_FPS     = MAKE_IRR_ID('c','a','m','F'),

		//! Unknown scene node
		ESNT_UNKNOWN        = MAKE_IRR_ID('u','n','k','n'),

		//! Will match with any scene node when checking types
		ESNT_ANY            = MAKE_IRR_ID('a','n','y','_')
	};

    struct irr_IMesh;
    typedef struct irr_IMesh irr_IMesh;

    struct irr_IAnimatedMesh;
    typedef struct irr_IAnimatedMesh irr_IAnimatedMesh;

    struct irr_ISceneNode;
    typedef struct irr_ISceneNode irr_ISceneNode;

    struct irr_IAnimatedMeshSceneNode;
    typedef struct irr_IAnimatedMeshSceneNode irr_IAnimatedMeshSceneNode;

    struct irr_ICameraSceneNode;
    typedef struct irr_ICameraSceneNode irr_ICameraSceneNode;

    struct irr_ISceneManager;
    typedef struct irr_ISceneManager irr_ISceneManager;

    struct irr_ITriangleSelector;
    typedef struct irr_ITriangleSelector irr_ITriangleSelector;

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

    struct irr_IAttributes;
    struct irr_SAttributeReadWriteOptions;

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
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_SCENE_
