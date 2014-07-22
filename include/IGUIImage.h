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
#include "SColor.h"
#include "core.h"

typedef struct irr_IGUIImage irr_IGUIImage;

struct irr_ITexture;

CIRRLICHT_API void irr_IGUIImage_setImage(irr_IGUIImage* img, irr_ITexture* tex);
CIRRLICHT_API irr_ITexture* irr_IGUIImage_getImage(irr_IGUIImage* img);
CIRRLICHT_API void irr_IGUIImage_setColor(irr_IGUIImage* img, irr_SColor col);
CIRRLICHT_API void irr_IGUIImage_setScaleImage(irr_IGUIImage* img, bool scale);
CIRRLICHT_API void irr_IGUIImage_setUseAlphaChannel(irr_IGUIImage* img, bool use);
CIRRLICHT_API irr_SColor irr_IGUIImage_getColor(irr_IGUIImage* img);
CIRRLICHT_API bool irr_IGUIImage_isImageScaled(irr_IGUIImage* img);
CIRRLICHT_API bool irr_IGUIImage_isAlphaChannelUsed(irr_IGUIImage* img);
CIRRLICHT_API void irr_IGUIImage_setSourceRect(irr_IGUIImage* img, irr_recti sourceRect);
CIRRLICHT_API irr_recti irr_IGUIImage_getSourceRect(irr_IGUIImage* img);
CIRRLICHT_API void irr_IGUIImage_setDrawBounds(irr_IGUIImage* img, irr_rectf drawBoundUVs = {0.f, 0.f, 1.f, 1.f});
CIRRLICHT_API irr_rectf irr_IGUIImage_getDrawBounds(irr_IGUIImage* img);
