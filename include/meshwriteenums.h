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

//! An enumeration for all supported types of built-in mesh writers
/** A scene mesh writers is represented by a four character code
such as 'irrm' or 'coll' instead of simple numbers, to avoid
name clashes with external mesh writers.*/
enum EMESH_WRITER_TYPE
{
	//! Irrlicht native mesh writer, for static .irrmesh files.
	EMWT_IRR_MESH     = MAKE_CIRR_ID('i','r','r','m'),

	//! COLLADA mesh writer for .dae and .xml files
	EMWT_COLLADA      = MAKE_CIRR_ID('c','o','l','l'),

	//! STL mesh writer for .stl files
	EMWT_STL          = MAKE_CIRR_ID('s','t','l',0),

	//! OBJ mesh writer for .obj files
	EMWT_OBJ          = MAKE_CIRR_ID('o','b','j',0),

	//! PLY mesh writer for .ply files
	EMWT_PLY          = MAKE_CIRR_ID('p','l','y',0)
};


//! flags configuring mesh writing
enum E_MESH_WRITER_FLAGS
{
    //! no writer flags
    EMWF_NONE = 0,

    //! write lightmap textures out if possible
    EMWF_WRITE_LIGHTMAPS = 0x1,

    //! write in a way that consumes less disk space
    EMWF_WRITE_COMPRESSED = 0x2,

    //! write in binary format rather than text
    EMWF_WRITE_BINARY = 0x4
};
