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

#include "irrtypes.h"

//! An enumeration for all types of built-in scene nodes
/** A scene node type is represented by a four character code
such as 'cube' or 'mesh' instead of simple numbers, to avoid
name clashes with external scene nodes.*/
enum ESCENE_NODE_TYPE
{
	//! of type CSceneManager (note that ISceneManager is not(!) an ISceneNode)
	ESNT_SCENE_MANAGER  = MAKE_CIRR_ID('s','m','n','g'),

	//! simple cube scene node
	ESNT_CUBE           = MAKE_CIRR_ID('c','u','b','e'),

	//! Sphere scene node
	ESNT_SPHERE         = MAKE_CIRR_ID('s','p','h','r'),

	//! Text Scene Node
	ESNT_TEXT           = MAKE_CIRR_ID('t','e','x','t'),

	//! Water Surface Scene Node
	ESNT_WATER_SURFACE  = MAKE_CIRR_ID('w','a','t','r'),

	//! Terrain Scene Node
	ESNT_TERRAIN        = MAKE_CIRR_ID('t','e','r','r'),

	//! Sky Box Scene Node
	ESNT_SKY_BOX        = MAKE_CIRR_ID('s','k','y','_'),

	//! Sky Dome Scene Node
	ESNT_SKY_DOME       = MAKE_CIRR_ID('s','k','y','d'),

	//! Shadow Volume Scene Node
	ESNT_SHADOW_VOLUME  = MAKE_CIRR_ID('s','h','d','w'),

	//! Octree Scene Node
	ESNT_OCTREE         = MAKE_CIRR_ID('o','c','t','r'),

	//! Mesh Scene Node
	ESNT_MESH           = MAKE_CIRR_ID('m','e','s','h'),

	//! Light Scene Node
	ESNT_LIGHT          = MAKE_CIRR_ID('l','g','h','t'),

	//! Empty Scene Node
	ESNT_EMPTY          = MAKE_CIRR_ID('e','m','t','y'),

	//! Dummy Transformation Scene Node
	ESNT_DUMMY_TRANSFORMATION = MAKE_CIRR_ID('d','m','m','y'),

	//! Camera Scene Node
	ESNT_CAMERA         = MAKE_CIRR_ID('c','a','m','_'),

	//! Billboard Scene Node
	ESNT_BILLBOARD      = MAKE_CIRR_ID('b','i','l','l'),

	//! Animated Mesh Scene Node
	ESNT_ANIMATED_MESH  = MAKE_CIRR_ID('a','m','s','h'),

	//! Particle System Scene Node
	ESNT_PARTICLE_SYSTEM = MAKE_CIRR_ID('p','t','c','l'),

	//! Quake3 Shader Scene Node
	ESNT_Q3SHADER_SCENE_NODE  = MAKE_CIRR_ID('q','3','s','h'),

	//! Quake3 Model Scene Node ( has tag to link to )
	ESNT_MD3_SCENE_NODE  = MAKE_CIRR_ID('m','d','3','_'),

	//! Volume Light Scene Node
	ESNT_VOLUME_LIGHT  = MAKE_CIRR_ID('v','o','l','l'),

	//! Maya Camera Scene Node
	/** Legacy, for loading version <= 1.4.x .irr files */
	ESNT_CAMERA_MAYA    = MAKE_CIRR_ID('c','a','m','M'),

	//! First Person Shooter Camera
	/** Legacy, for loading version <= 1.4.x .irr files */
	ESNT_CAMERA_FPS     = MAKE_CIRR_ID('c','a','m','F'),

	//! Unknown scene node
	ESNT_UNKNOWN        = MAKE_CIRR_ID('u','n','k','n'),

	//! Will match with any scene node when checking types
	ESNT_ANY            = MAKE_CIRR_ID('a','n','y','_')
};
