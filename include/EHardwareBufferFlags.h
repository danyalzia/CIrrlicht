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

#ifndef _CIRRLICHT_EHARDWAREBUFFERFLAGS_
#define _CIRRLICHT_EHARDWAREBUFFERFLAGS_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    enum E_HARDWARE_MAPPING
	{
		//! Don't store on the hardware
		EHM_NEVER=0,

		//! Rarely changed, usually stored completely on the hardware
		EHM_STATIC,

		//! Sometimes changed, driver optimized placement
		EHM_DYNAMIC,

		//! Always changed, cache optimizing on the GPU
		EHM_STREAM
	};

	enum E_BUFFER_TYPE
	{
		//! Does not change anything
		EBT_NONE=0,
		//! Change the vertex mapping
		EBT_VERTEX,
		//! Change the index mapping
		EBT_INDEX,
		//! Change both vertex and index mapping to the same value
		EBT_VERTEX_AND_INDEX
	};

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_EHARDWAREBUFFERFLAGS_
