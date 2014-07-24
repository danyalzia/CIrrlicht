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

//! Types of attributes available for IAttributes
enum E_ATTRIBUTE_TYPE
{
    // integer attribute
    EAT_INT = 0,

    // float attribute
    EAT_FLOAT,

    // string attribute
    EAT_STRING,

    // boolean attribute
    EAT_BOOL,

    // enumeration attribute
    EAT_ENUM,

    // color attribute
    EAT_COLOR,

    // floating point color attribute
    EAT_COLORF,

    // 3d vector attribute
    EAT_VECTOR3D,

    // 2d position attribute
    EAT_POSITION2D,

    // vector 2d attribute
    EAT_VECTOR2D,

    // rectangle attribute
    EAT_RECT,

    // matrix attribute
    EAT_MATRIX,

    // quaternion attribute
    EAT_QUATERNION,

    // 3d bounding box
    EAT_BBOX,

    // plane
    EAT_PLANE,

    // 3d triangle
    EAT_TRIANGLE3D,

    // line 2d
    EAT_LINE2D,

    // line 3d
    EAT_LINE3D,

    // array of stringws attribute
    EAT_STRINGWARRAY,

    // array of float
    EAT_FLOATARRAY,

    // array of int
    EAT_INTARRAY,

    // binary data attribute
    EAT_BINARY,

    // texture reference attribute
    EAT_TEXTURE,

    // user pointer void*
    EAT_USER_POINTER,

    // dimension attribute
    EAT_DIMENSION2D,

    // known attribute type count
    EAT_COUNT,

    // unknown attribute
    EAT_UNKNOWN
};
