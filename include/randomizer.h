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

#include "compileconfig.h"

typedef struct irr_IRandomizer irr_IRandomizer;

CIRRLICHT_API void irr_IRandomizer_reset(irr_IRandomizer* randomizer, int value=0x0f0f0f0f);
CIRRLICHT_API int irr_IRandomizer_rand(irr_IRandomizer* randomizer);
CIRRLICHT_API float irr_IRandomizer_frand(irr_IRandomizer* randomizer);
CIRRLICHT_API int irr_IRandomizer_randMax(irr_IRandomizer* randomizer);
