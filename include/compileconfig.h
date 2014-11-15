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
#if defined _WIN32 || defined _WIN64 || defined __CYGWIN__ || defined _MSC_VER
#ifdef BUILDING_DLL
#ifdef __GNUC__
#define CIRRLICHT_API __attribute__ ((dllexport))
#else
#define CIRRLICHT_API __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
#endif
#else
#ifdef __GNUC__
#define DLL_PUBLIC __attribute__ ((dllimport))
#else
#define CIRRLICHT_API __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
#endif
#endif
#else
#if __GNUC__ >= 4
#define CIRRLICHT_API __attribute__ ((visibility ("default")))
#else
#define CIRRLICHT_API
#endif
#endif