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

#ifndef _CIRRLICHT_ECULLINGTYPES_
#define _CIRRLICHT_ECULLINGTYPES_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

//! An enumeration for all types of automatic culling for built-in scene nodes
enum E_CULLING_TYPE
{
    EAC_OFF = 0,
    EAC_BOX = 1,
    EAC_FRUSTUM_BOX = 2,
    EAC_FRUSTUM_SPHERE = 4,
    EAC_OCC_QUERY = 8
};

//! Names for culling type
const char* const AutomaticCullingNames[] =
{
    "false",
    "box",			// camera box against node box
    "frustum_box",		// camera frustum against node box
    "frustum_sphere",	// camera frustum against node sphere
    "occ_query",		// occlusion query
    0
};

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_ECULLINGTYPES_
