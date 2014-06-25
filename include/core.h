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

#ifndef _CIRRLICHT_CORE_
#define _CIRRLICHT_CORE_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
    // irr::core::vector2di
    typedef struct
    {
        int x;
        int y;
    } irr_vector2di;

    // irr::core::irr_vector2df
    typedef struct
    {
        float x;
        float y;
    } irr_vector2df;

    // irr::core::irr_vector3di
    typedef struct
    {
        int x;
        int y;
        int z;
    } irr_vector3di;

    // irr::core::vector3df
    typedef struct
    {
        float x;
        float y;
        float z;
    } irr_vector3df;

    // irr::core::recti
    typedef struct
    {
        int x;
        int y;
        int x1;
        int y1;
    } irr_recti;

    // irr::core::dimension2du
    typedef struct
    {
        unsigned int Width;
        unsigned int Height;
    } irr_dimension2du;

    // irr::core::irr_dimension2df
    typedef struct
    {
        unsigned int Width;
        unsigned int Height;
    } irr_dimension2df;

    // irr::core::triangle3di
    typedef struct
    {
        irr_vector3di pointA;
        irr_vector3di pointB;
        irr_vector3di pointC;
    } irr_triangle3di;

    // irr::core::triangle3df
    typedef struct
    {
        irr_vector3df pointA;
        irr_vector3df pointB;
        irr_vector3df pointC;
    } irr_triangle3df;

    struct irr_list
    {
        void* data;
    };
    typedef struct irr_list irr_list;
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_CORE_
