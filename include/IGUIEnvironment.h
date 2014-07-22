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

#include "core.h"
#include "cirrlicht.h"
#include "IVideoDriver.h"

typedef struct irr_IGUIEnvironment irr_IGUIEnvironment;

struct irr_IGUIStaticText;
struct irr_IGUIImage;

CIRRLICHT_API irr_IGUIStaticText* irr_IGUIEnvironment_addStaticText(irr_IGUIEnvironment* env, const wchar_t* text, irr_recti rectangle, bool border=false);
CIRRLICHT_API irr_IGUIImage* irr_IGUIEnvironment_addImage(irr_IGUIEnvironment* env, irr_ITexture* textures, irr_vector2di pos);

struct irr_SColor;
CIRRLICHT_API void irr_IGUIEnvironment_drawAll(irr_IGUIEnvironment* env);
