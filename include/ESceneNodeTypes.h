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

#ifndef _CIRRLICHT_ESCENENODETYPES_
#define _CIRRLICHT_ESCENENODETYPES_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

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
    
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_ESCENENODETYPES_
