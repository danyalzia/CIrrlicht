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

//! An enumeration for all types of built-in scene node animators
enum ESCENE_NODE_ANIMATOR_TYPE
{
    //! Fly circle scene node animator
    ESNAT_FLY_CIRCLE = 0,

    //! Fly straight scene node animator
    ESNAT_FLY_STRAIGHT,

    //! Follow spline scene node animator
    ESNAT_FOLLOW_SPLINE,

    //! Rotation scene node animator
    ESNAT_ROTATION,

    //! Texture scene node animator
    ESNAT_TEXTURE,

    //! Deletion scene node animator
    ESNAT_DELETION,

    //! Collision respose scene node animator
    ESNAT_COLLISION_RESPONSE,

    //! FPS camera animator
    ESNAT_CAMERA_FPS,

    //! Maya camera animator
    ESNAT_CAMERA_MAYA,

    //! Amount of built-in scene node animators
    ESNAT_COUNT,

    //! Unknown scene node animator
    ESNAT_UNKNOWN,

    //! This enum is never used, it only forces the compiler to compile this enumeration to 32 bit.
    ESNAT_FORCE_32_BIT = 0x7fffffff
};
