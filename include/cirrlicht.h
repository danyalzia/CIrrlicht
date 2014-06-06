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


#ifndef _CIRRLICHT_IRRLICHT_
#define _CIRRLICHT_IRRLICHT_

#include "core.h"
#include "video.h"
#include "scene.h"
#include "gui.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

    enum E_DRIVER_TYPE
	{
		EDT_NULL,
		EDT_SOFTWARE,
		EDT_BURNINGSVIDEO,
		EDT_DIRECT3D8,
		EDT_DIRECT3D9,
		EDT_OPENGL,
		EDT_COUNT
	};

    struct irr_IrrlichtDevice;
    typedef struct irr_IrrlichtDevice irr_IrrlichtDevice;
    irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, dimension2du res, unsigned bits = 16, bool fullscreen = false, bool stencilbuffer = false, bool vsync = false);
    bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_setWindowCaption(irr_IrrlichtDevice* device, const wchar_t* text);
    void irr_IrrlichtDevice_setResizable(irr_IrrlichtDevice* device, bool value = false);

#ifdef __cplusplus
}
#endif // __cplusplus


#endif // _CIRRLICHT_IRRLICHT_
