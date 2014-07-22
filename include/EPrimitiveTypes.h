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

//! Enumeration for all primitive types there are.
enum E_PRIMITIVE_TYPE
{
    //! All vertices are non-connected points.
    EPT_POINTS=0,

    //! All vertices form a single connected line.
    EPT_LINE_STRIP,

    //! Just as LINE_STRIP, but the last and the first vertex is also connected.
    EPT_LINE_LOOP,

    //! Every two vertices are connected creating n/2 lines.
    EPT_LINES,

    //! After the first two vertices each vertex defines a new triangle.
    //! Always the two last and the new one form a new triangle.
    EPT_TRIANGLE_STRIP,

    //! After the first two vertices each vertex defines a new triangle.
    //! All around the common first vertex.
    EPT_TRIANGLE_FAN,

    //! Explicitly set all vertices for each triangle.
    EPT_TRIANGLES,

    //! After the first two vertices each further tw vetices create a quad with the preceding two.
    EPT_QUAD_STRIP,

    //! Every four vertices create a quad.
    EPT_QUADS,

    //! Just as LINE_LOOP, but filled.
    EPT_POLYGON,

    //! The single vertices are expanded to quad billboards on the GPU.
    EPT_POINT_SPRITES
};
