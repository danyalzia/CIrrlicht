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

//! An enum for all types of drivers the Irrlicht Engine supports.
enum E_DRIVER_TYPE
{
    //! Null driver, useful for applications to run the engine without visualisation.
    /** The null device is able to load textures, but does not
    render and display any graphics. */
    EDT_NULL,

    //! The Irrlicht Engine Software renderer.
    /** Runs on all platforms, with every hardware. It should only
    be used for 2d graphics, but it can also perform some primitive
    3d functions. These 3d drawing functions are quite fast, but
    very inaccurate, and don't even support clipping in 3D mode. */
    EDT_SOFTWARE,

    //! The Burning's Software Renderer, an alternative software renderer
    /** Basically it can be described as the Irrlicht Software
    renderer on steroids. It rasterizes 3D geometry perfectly: It
    is able to perform correct 3d clipping, perspective correct
    texture mapping, perspective correct color mapping, and renders
    sub pixel correct, sub texel correct primitives. In addition,
    it does bilinear texel filtering and supports more materials
    than the EDT_SOFTWARE driver. This renderer has been written
    entirely by Thomas Alten, thanks a lot for this huge
    contribution. */
    EDT_BURNINGSVIDEO,

    //! Direct3D8 device, only available on Win32 platforms.
    /** Performs hardware accelerated rendering of 3D and 2D
    primitives. */
    EDT_DIRECT3D8,

    //! Direct3D 9 device, only available on Win32 platforms.
    /** Performs hardware accelerated rendering of 3D and 2D
    primitives. */
    EDT_DIRECT3D9,

    //! OpenGL device, available on most platforms.
    /** Performs hardware accelerated rendering of 3D and 2D
    primitives. */
    EDT_OPENGL,

    //! No driver, just for counting the elements
    EDT_COUNT
};
