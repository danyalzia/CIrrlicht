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

typedef struct irr_IReadFile irr_IReadFile;

CIRRLICHT_API int irr_IReadFile_read(irr_IReadFile* file, void* buffer, unsigned int sizeToRead);
CIRRLICHT_API bool irr_IReadFile_seek(irr_IReadFile* file, long finalPos, bool relativeMovement = false);
CIRRLICHT_API long irr_IReadFile_getSize(irr_IReadFile* file);
CIRRLICHT_API long irr_IReadFile_getPos(irr_IReadFile* file);
CIRRLICHT_API const char* irr_IReadFile_getFileName(irr_IReadFile* file);
