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

#ifndef _CIRRLICHT_SLIGHT_
#define _CIRRLICHT_SLIGHT_

//! Enumeration for different types of lights
enum E_LIGHT_TYPE
{
	//! point light, it has a position in space and radiates light in all directions
	ELT_POINT,
	//! spot light, it has a position in space, a direction, and a limited cone of influence
	ELT_SPOT,
	//! directional light, coming from a direction from an infinite distance
	ELT_DIRECTIONAL,

	//! Only used for counting the elements of this enum
	ELT_COUNT
};

//! Names for light types
const char* const LightTypeNames[] =
{
	"Point",
	"Spot",
	"Directional",
	0
};

typedef struct irr_SLight irr_SLight;

#endif // _CIRRLICHT_SLIGHT_
