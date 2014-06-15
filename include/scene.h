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
		ESNT_SCENE_MANAGER,

		//! simple cube scene node
		ESNT_CUBE,

		//! Sphere scene node
		ESNT_SPHERE,

		//! Text Scene Node
		ESNT_TEXT,

		//! Water Surface Scene Node
		ESNT_WATER_SURFACE,

		//! Terrain Scene Node
		ESNT_TERRAIN,

		//! Sky Box Scene Node
		ESNT_SKY_BOX,

		//! Sky Dome Scene Node
		ESNT_SKY_DOME,

		//! Shadow Volume Scene Node
		ESNT_SHADOW_VOLUME,

		//! Octree Scene Node
		ESNT_OCTREE,

		//! Mesh Scene Node
		ESNT_MESH,

		//! Light Scene Node
		ESNT_LIGHT,

		//! Empty Scene Node
		ESNT_EMPTY,

		//! Dummy Transformation Scene Node
		ESNT_DUMMY_TRANSFORMATION,

		//! Camera Scene Node
		ESNT_CAMERA,

		//! Billboard Scene Node
		ESNT_BILLBOARD,

		//! Animated Mesh Scene Node
		ESNT_ANIMATED_MESH,

		//! Particle System Scene Node
		ESNT_PARTICLE_SYSTEM,

		//! Quake3 Shader Scene Node
		ESNT_Q3SHADER_SCENE_NODE,

		//! Quake3 Model Scene Node ( has tag to link to )
		ESNT_MD3_SCENE_NODE,

		//! Volume Light Scene Node
		ESNT_VOLUME_LIGHT,

		//! Maya Camera Scene Node
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_MAYA,

		//! First Person Shooter Camera
		/** Legacy, for loading version <= 1.4.x .irr files */
		ESNT_CAMERA_FPS,

		//! Unknown scene node
		ESNT_UNKNOWN,

		//! Will match with any scene node when checking types
		ESNT_ANY,
	};

    //! Abstracted and easy to use fixed function/programmable pipeline material modes.
	enum E_MATERIAL_TYPE
	{
		//! Standard solid material.
		/** Only first texture is used, which is supposed to be the
		diffuse material. */
		EMT_SOLID = 0,

		//! Solid material with 2 texture layers.
		/** The second is blended onto the first using the alpha value
		of the vertex colors. This material is currently not implemented in OpenGL.
		*/
		EMT_SOLID_2_LAYER,

		//! Material type with standard lightmap technique
		/** There should be 2 textures: The first texture layer is a
		diffuse map, the second is a light map. Dynamic light is
		ignored. */
		EMT_LIGHTMAP,

		//! Material type with lightmap technique like EMT_LIGHTMAP.
		/** But lightmap and diffuse texture are added instead of modulated. */
		EMT_LIGHTMAP_ADD,

		//! Material type with standard lightmap technique
		/** There should be 2 textures: The first texture layer is a
		diffuse map, the second is a light map. Dynamic light is
		ignored. The texture colors are effectively multiplied by 2
		for brightening. Like known in DirectX as D3DTOP_MODULATE2X. */
		EMT_LIGHTMAP_M2,

		//! Material type with standard lightmap technique
		/** There should be 2 textures: The first texture layer is a
		diffuse map, the second is a light map. Dynamic light is
		ignored. The texture colors are effectively multiplyied by 4
		for brightening. Like known in DirectX as D3DTOP_MODULATE4X. */
		EMT_LIGHTMAP_M4,

		//! Like EMT_LIGHTMAP, but also supports dynamic lighting.
		EMT_LIGHTMAP_LIGHTING,

		//! Like EMT_LIGHTMAP_M2, but also supports dynamic lighting.
		EMT_LIGHTMAP_LIGHTING_M2,

		//! Like EMT_LIGHTMAP_4, but also supports dynamic lighting.
		EMT_LIGHTMAP_LIGHTING_M4,

		//! Detail mapped material.
		/** The first texture is diffuse color map, the second is added
		to this and usually displayed with a bigger scale value so that
		it adds more detail. The detail map is added to the diffuse map
		using ADD_SIGNED, so that it is possible to add and substract
		color from the diffuse map. For example a value of
		(127,127,127) will not change the appearance of the diffuse map
		at all. Often used for terrain rendering. */
		EMT_DETAIL_MAP,

		//! Look like a reflection of the environment around it.
		/** To make this possible, a texture called 'sphere map' is
		used, which must be set as the first texture. */
		EMT_SPHERE_MAP,

		//! A reflecting material with an optional non reflecting texture layer.
		/** The reflection map should be set as first texture. */
		EMT_REFLECTION_2_LAYER,

		//! A transparent material.
		/** Only the first texture is used. The new color is calculated
		by simply adding the source color and the dest color. This
		means if for example a billboard using a texture with black
		background and a red circle on it is drawn with this material,
		the result is that only the red circle will be drawn a little
		bit transparent, and everything which was black is 100%
		transparent and not visible. This material type is useful for
		particle effects. */
		EMT_TRANSPARENT_ADD_COLOR,

		//! Makes the material transparent based on the texture alpha channel.
		/** The final color is blended together from the destination
		color and the texture color, using the alpha channel value as
		blend factor. Only first texture is used. If you are using
		this material with small textures, it is a good idea to load
		the texture in 32 bit mode
		(video::IVideoDriver::setTextureCreationFlag()). Also, an alpha
		ref is used, which can be manipulated using
		SMaterial::MaterialTypeParam. This value controls how sharp the
		edges become when going from a transparent to a solid spot on
		the texture. */
		EMT_TRANSPARENT_ALPHA_CHANNEL,

		//! Makes the material transparent based on the texture alpha channel.
		/** If the alpha channel value is greater than 127, a
		pixel is written to the target, otherwise not. This
		material does not use alpha blending and is a lot faster
		than EMT_TRANSPARENT_ALPHA_CHANNEL. It is ideal for drawing
		stuff like leafes of plants, because the borders are not
		blurry but sharp. Only first texture is used. If you are
		using this material with small textures and 3d object, it
		is a good idea to load the texture in 32 bit mode
		(video::IVideoDriver::setTextureCreationFlag()). */
		EMT_TRANSPARENT_ALPHA_CHANNEL_REF,

		//! Makes the material transparent based on the vertex alpha value.
		EMT_TRANSPARENT_VERTEX_ALPHA,

		//! A transparent reflecting material with an optional additional non reflecting texture layer.
		/** The reflection map should be set as first texture. The
		transparency depends on the alpha value in the vertex colors. A
		texture which will not reflect can be set as second texture.
		Please note that this material type is currently not 100%
		implemented in OpenGL. */
		EMT_TRANSPARENT_REFLECTION_2_LAYER,

		//! A solid normal map renderer.
		/** First texture is the color map, the second should be the
		normal map. Note that you should use this material only when
		drawing geometry consisting of vertices of type
		S3DVertexTangents (EVT_TANGENTS). You can convert any mesh into
		this format using IMeshManipulator::createMeshWithTangents()
		(See SpecialFX2 Tutorial). This shader runs on vertex shader
		1.1 and pixel shader 1.1 capable hardware and falls back to a
		fixed function lighted material if this hardware is not
		available. Only two lights are supported by this shader, if
		there are more, the nearest two are chosen. */
		EMT_NORMAL_MAP_SOLID,

		//! A transparent normal map renderer.
		/** First texture is the color map, the second should be the
		normal map. Note that you should use this material only when
		drawing geometry consisting of vertices of type
		S3DVertexTangents (EVT_TANGENTS). You can convert any mesh into
		this format using IMeshManipulator::createMeshWithTangents()
		(See SpecialFX2 Tutorial). This shader runs on vertex shader
		1.1 and pixel shader 1.1 capable hardware and falls back to a
		fixed function lighted material if this hardware is not
		available. Only two lights are supported by this shader, if
		there are more, the nearest two are chosen. */
		EMT_NORMAL_MAP_TRANSPARENT_ADD_COLOR,

		//! A transparent (based on the vertex alpha value) normal map renderer.
		/** First texture is the color map, the second should be the
		normal map. Note that you should use this material only when
		drawing geometry consisting of vertices of type
		S3DVertexTangents (EVT_TANGENTS). You can convert any mesh into
		this format using IMeshManipulator::createMeshWithTangents()
		(See SpecialFX2 Tutorial). This shader runs on vertex shader
		1.1 and pixel shader 1.1 capable hardware and falls back to a
		fixed function lighted material if this hardware is not
		available.  Only two lights are supported by this shader, if
		there are more, the nearest two are chosen. */
		EMT_NORMAL_MAP_TRANSPARENT_VERTEX_ALPHA,

		//! Just like EMT_NORMAL_MAP_SOLID, but uses parallax mapping.
		/** Looks a lot more realistic. This only works when the
		hardware supports at least vertex shader 1.1 and pixel shader
		1.4. First texture is the color map, the second should be the
		normal map. The normal map texture should contain the height
		value in the alpha component. The
		IVideoDriver::makeNormalMapTexture() method writes this value
		automatically when creating normal maps from a heightmap when
		using a 32 bit texture. The height scale of the material
		(affecting the bumpiness) is being controlled by the
		SMaterial::MaterialTypeParam member. If set to zero, the
		default value (0.02f) will be applied. Otherwise the value set
		in SMaterial::MaterialTypeParam is taken. This value depends on
		with which scale the texture is mapped on the material. Too
		high or low values of MaterialTypeParam can result in strange
		artifacts. */
		EMT_PARALLAX_MAP_SOLID,

		//! A material like EMT_PARALLAX_MAP_SOLID, but transparent.
		/** Using EMT_TRANSPARENT_ADD_COLOR as base material. */
		EMT_PARALLAX_MAP_TRANSPARENT_ADD_COLOR,

		//! A material like EMT_PARALLAX_MAP_SOLID, but transparent.
		/** Using EMT_TRANSPARENT_VERTEX_ALPHA as base material. */
		EMT_PARALLAX_MAP_TRANSPARENT_VERTEX_ALPHA,

		//! BlendFunc = source * sourceFactor + dest * destFactor ( E_BLEND_FUNC )
		/** Using only first texture. Generic blending method. */
		EMT_ONETEXTURE_BLEND,

		//! This value is not used. It only forces this enumeration to compile to 32 bit.
		EMT_FORCE_32BIT = 0x7fffffff
	};

    enum E_JOINT_UPDATE_ON_RENDER
    {
        EJUOR_NONE = 0,
        EJUOR_READ,
        EJUOR_CONTROL
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

    struct irr_SMaterial;
    typedef struct irr_SMaterial irr_SMaterial;

    struct irr_ITexture;

    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMeshSceneNode* parent, irr_vector3df pos, irr_vector3df lookAt);
    irr_ICameraSceneNode* irr_ISceneManager_addCameraSceneNodeFPS(irr_ISceneManager* smgr);
    irr_ISceneNode* irr_ISceneManager_addSphereSceneNode(irr_ISceneManager* smgr);
    irr_ISceneNode* irr_ISceneManager_addCubeSceneNode(irr_ISceneManager* smgr);
    void irr_ISceneManager_drawAll(irr_ISceneManager* smgr);

    struct irr_ISceneNodeAnimator;
    typedef struct irr_ISceneNodeAnimator irr_ISceneNodeAnimator;

    irr_ISceneNodeAnimator* irr_ISceneManager_createFlyCircleAnimator(irr_ISceneManager* smgr, const irr_vector3df& center, float radius=100.f);
    irr_ISceneNodeAnimator* irr_ISceneManager_createFlyStraightAnimator(irr_ISceneManager* smgr, const irr_vector3df& startPoint, const irr_vector3df& endPoint, unsigned int timeForWay, bool loop=false, bool pingpong = false);

    struct irr_IAttributes;
    struct irr_SAttributeReadWriteOptions;

    struct irr_ISceneNodeAnimator;
    typedef irr_ISceneNodeAnimator irr_ISceneNodeAnimator;

    struct irr_IShadowVolumeSceneNode;
    typedef irr_IShadowVolumeSceneNode irr_IShadowVolumeSceneNode;

    struct irr_IBoneSceneNode;
    typedef irr_IBoneSceneNode irr_IBoneSceneNode;

    struct irr_IAnimationEndCallBack;
    typedef irr_IAnimationEndCallBack irr_IAnimationEndCallBack;

    struct irr_SMD3QuaternionTag;
    typedef irr_SMD3QuaternionTag irr_SMD3QuaternionTag;

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

    void irr_IAnimatedMeshSceneNode_addAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator);
    const irr_list& irr_IAnimatedMeshSceneNode_getAnimators(irr_IAnimatedMeshSceneNode* node);
    void irr_IAnimatedMeshSceneNode_removeAnimator(irr_IAnimatedMeshSceneNode* node, irr_ISceneNodeAnimator* animator);
    irr_IAnimatedMesh* irr_ISceneManager_getMesh(irr_ISceneManager* smgr, const char* file);
    irr_IAnimatedMeshSceneNode* irr_ISceneManager_addAnimatedMeshSceneNode(irr_ISceneManager* smgr, irr_IAnimatedMesh* mesh);
    void irr_IAnimatedMeshSceneNode_setPosition(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& newpos);
    void irr_IAnimatedMeshSceneNode_setMaterialFlag(irr_IAnimatedMeshSceneNode* node, E_MATERIAL_FLAG flag, bool newvalue);
    void irr_IAnimatedMeshSceneNode_setMaterialTexture(irr_IAnimatedMeshSceneNode* node, int c, irr_ITexture* texture);
    void irr_IAnimatedMeshSceneNode_setScale(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& scale);
    void irr_IAnimatedMeshSceneNode_setRotation(irr_IAnimatedMeshSceneNode* node, const irr_vector3df& rotation);

    void irr_IAnimatedMeshSceneNode_setCurrentFrame(irr_IAnimatedMeshSceneNode* node, float frame);
    void irr_IAnimatedMeshSceneNode_setFrameLoop(irr_IAnimatedMeshSceneNode* node, int begin, int end);
    void irr_IAnimatedMeshSceneNode_setAnimationSpeed(irr_IAnimatedMeshSceneNode* node, float framesPerSecond);
    float irr_IAnimatedMeshSceneNode_getAnimationSpeed(irr_IAnimatedMeshSceneNode* node);
    irr_IShadowVolumeSceneNode* irr_IAnimatedMeshSceneNode_addShadowVolumeSceneNode(irr_IAnimatedMeshSceneNode* node, const irr_IMesh* shadowMesh=0, int id=-1, bool zfailmethod=true, float infinity=1000.0f);
    irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNode(irr_IAnimatedMeshSceneNode* node, const char* jointName);
    irr_IBoneSceneNode* irr_IAnimatedMeshSceneNode_getJointNodeByID(irr_IAnimatedMeshSceneNode* node, unsigned int jointID);
    unsigned int irr_IAnimatedMeshSceneNode_getJointCount(irr_IAnimatedMeshSceneNode* node);
    void irr_IAnimatedMeshSceneNode_setMD2Animation(irr_IAnimatedMeshSceneNode* node, EMD2_ANIMATION_TYPE value);
    bool irr_IAnimatedMeshSceneNode_setMD2AnimationByName(irr_IAnimatedMeshSceneNode* node, const char* animationName);
    float irr_IAnimatedMeshSceneNode_getFrameNr(irr_IAnimatedMeshSceneNode* node);
    int irr_IAnimatedMeshSceneNode_getStartFrame(irr_IAnimatedMeshSceneNode* node);
    int irr_IAnimatedMeshSceneNode_getEndFrame(irr_IAnimatedMeshSceneNode* node);
    void irr_IAnimatedMeshSceneNode_setLoopMode(irr_IAnimatedMeshSceneNode* node, bool playAnimationLooped);
    bool irr_IAnimatedMeshSceneNode_getLoopMode(irr_IAnimatedMeshSceneNode* node);
    void irr_IAnimatedMeshSceneNode_setAnimationEndCallback(irr_IAnimatedMeshSceneNode* node, irr_IAnimationEndCallBack* callback=0);
    void irr_IAnimatedMeshSceneNode_setReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node, bool readonly);
    bool irr_IAnimatedMeshSceneNode_isReadOnlyMaterials(irr_IAnimatedMeshSceneNode* node);
    void irr_IAnimatedMeshSceneNode_setMesh(irr_IAnimatedMeshSceneNode* node, irr_IAnimatedMesh* mesh);
    irr_IAnimatedMesh* irr_IAnimatedMeshSceneNode_getMesh(irr_IAnimatedMeshSceneNode* node);
    const irr_SMD3QuaternionTag* irr_IAnimatedMeshSceneNode_getMD3TagTransformation(irr_IAnimatedMeshSceneNode* node, const char* tagname);
    void irr_IAnimatedMeshSceneNode_setJointMode(irr_IAnimatedMeshSceneNode* node, E_JOINT_UPDATE_ON_RENDER mode);
    void irr_IAnimatedMeshSceneNode_setTransitionTime(irr_IAnimatedMeshSceneNode* node, float Time);
    void irr_IAnimatedMeshSceneNode_animateJoints(irr_IAnimatedMeshSceneNode* node, bool CalculateAbsolutePositions=true);
    void irr_IAnimatedMeshSceneNode_setRenderFromIdentity(irr_IAnimatedMeshSceneNode* node, bool On);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_SCENE_
