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

#include "IAnimatedMeshMD2.h"
#include <include/IAnimatedMeshMD2.h>

void irr_IAnimatedMeshMD2_getFrameLoop(irr_IAnimatedMeshMD2* mesh, EMD2_ANIMATION_TYPE l, int& outBegin, int& outEnd, int& outFPS)
{
	reinterpret_cast<irr::scene::IAnimatedMeshMD2*>(mesh)->getFrameLoop(irr::scene::EMD2_ANIMATION_TYPE(l), outBegin, outEnd, outFPS);
}

bool irr_IAnimatedMeshMD2_getFrameLoopByName(irr_IAnimatedMeshMD2* mesh, const char* name, int& outBegin, int& outEnd, int& outFPS)
{
	return reinterpret_cast<irr::scene::IAnimatedMeshMD2*>(mesh)->getFrameLoop(name, outBegin, outEnd, outFPS);
}

int irr_IAnimatedMeshMD2_getAnimationCount(irr_IAnimatedMeshMD2* mesh)
{
	return reinterpret_cast<irr::scene::IAnimatedMeshMD2*>(mesh)->getAnimationCount();
}

const char* irr_IAnimatedMeshMD2_getAnimationName(irr_IAnimatedMeshMD2* mesh, int nr)
{
	return reinterpret_cast<irr::scene::IAnimatedMeshMD2*>(mesh)->getAnimationName(nr);
}
