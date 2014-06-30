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

#ifndef _CIRRLICHT_SCOLOR_
#define _CIRRLICHT_SCOLOR_

//! An enum for the color format of textures used by the Irrlicht Engine.
/** A color format specifies how color information is stored. */
enum ECOLOR_FORMAT
{
	//! 16 bit color format used by the software driver.
	/** It is thus preferred by all other irrlicht engine video drivers.
	There are 5 bits for every color component, and a single bit is left
	for alpha information. */
	ECF_A1R5G5B5 = 0,

	//! Standard 16 bit color format.
	ECF_R5G6B5,

	//! 24 bit color, no alpha channel, but 8 bit for red, green and blue.
	ECF_R8G8B8,

	//! Default 32 bit color format. 8 bits are used for every component: red, green, blue and alpha.
	ECF_A8R8G8B8,

	/** Compressed image formats. **/

	//! DXT1 color format.
	ECF_DXT1,

	//! DXT2 color format.
	ECF_DXT2,

	//! DXT3 color format.
	ECF_DXT3,

	//! DXT4 color format.
	ECF_DXT4,

	//! DXT5 color format.
	ECF_DXT5,

	/** Floating Point formats. The following formats may only be used for render target textures. */

	//! 16 bit floating point format using 16 bits for the red channel.
	ECF_R16F,

	//! 32 bit floating point format using 16 bits for the red channel and 16 bits for the green channel.
	ECF_G16R16F,

	//! 64 bit floating point format 16 bits are used for the red, green, blue and alpha channels.
	ECF_A16B16G16R16F,

	//! 32 bit floating point format using 32 bits for the red channel.
	ECF_R32F,

	//! 64 bit floating point format using 32 bits for the red channel and 32 bits for the green channel.
	ECF_G32R32F,

	//! 128 bit floating point format. 32 bits are used for the red, green, blue and alpha channels.
	ECF_A32B32G32R32F,

	//! Unknown color format:
	ECF_UNKNOWN
};

struct irr_SColor
{
    unsigned int a;
    unsigned int b;
    unsigned int g;
    unsigned int r;
};
typedef struct irr_SColor irr_SColor;

struct irr_SColorf
{
    float a;
    float b;
    float g;
    float r;
};
typedef struct irr_SColorf irr_SColorf;

#endif // _CIRRLICHT_SCOLOR_
