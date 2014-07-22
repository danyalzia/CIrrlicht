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

#include "CompileConfig.h"

//! Types of standard md2 animations
enum EMD2_ANIMATION_TYPE
{
    EMAT_STAND,
    EMAT_RUN,
    EMAT_ATTACK,
    EMAT_PAIN_A,
    EMAT_PAIN_B,
    EMAT_PAIN_C,
    EMAT_JUMP,
    EMAT_FLIP,
    EMAT_SALUTE,
    EMAT_FALLBACK,
    EMAT_WAVE,
    EMAT_POINT,
    EMAT_CROUCH_STAND,
    EMAT_CROUCH_WALK,
    EMAT_CROUCH_ATTACK,
    EMAT_CROUCH_PAIN,
    EMAT_CROUCH_DEATH,
    EMAT_DEATH_FALLBACK,
    EMAT_DEATH_FALLFORWARD,
    EMAT_DEATH_FALLBACKSLOW,
    EMAT_BOOM,
    //! Not an animation, but amount of animation types.
    EMAT_COUNT,
};

typedef struct irr_IAnimatedMeshMD2 irr_IAnimatedMeshMD2;

CIRRLICHT_API void irr_IAnimatedMeshMD2_getFrameLoop(irr_IAnimatedMeshMD2* mesh, EMD2_ANIMATION_TYPE l, int& outBegin, int& outEnd, int& outFPS);
CIRRLICHT_API bool irr_IAnimatedMeshMD2_getFrameLoopByName(irr_IAnimatedMeshMD2* mesh, const char* name, int& outBegin, int& outEnd, int& outFPS);
CIRRLICHT_API int irr_IAnimatedMeshMD2_getAnimationCount(irr_IAnimatedMeshMD2* mesh);
CIRRLICHT_API const char* irr_IAnimatedMeshMD2_getAnimationName(irr_IAnimatedMeshMD2* mesh, int nr);
