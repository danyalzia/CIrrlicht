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


#ifndef _CIRRLICHT_IO_
#define _CIRRLICHT_IO_

#include "core.h"
#include "video.h"
#include "scene.h"
#include "gui.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    struct irr_IFileSystem;
    typedef struct irr_IFileSystem irr_IFileSystem;

    void irr_IFileSystem_addFileArchive(irr_IFileSystem* filesystem, const char* text);

    struct irr_IAttributes;
    typedef struct irr_IAttributes irr_IAttributes;

    struct irr_SAttributeReadWriteOptions;
    typedef struct irr_SAttributeReadWriteOptions irr_SAttributeReadWriteOptions;
#ifdef __cplusplus
}
#endif // __cplusplus


#endif // _CIRRLICHT_IO_
