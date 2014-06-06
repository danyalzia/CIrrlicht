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

#include <irrlicht.h>
#include "core.h"
#include "cirrlicht.h"

#ifdef __cplusplus
extern "C"
{
#endif
    irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, dimension2du res, unsigned bits, bool fullscreen, bool stencilbuffer, bool vsync)
    {
        return reinterpret_cast<irr_IrrlichtDevice*>(irr::createDevice(static_cast<irr::video::E_DRIVER_TYPE>(driver), irr::core::dimension2du(res.Width, res.Height), bits, fullscreen, stencilbuffer, vsync));
    }

    bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device)
    {
        return reinterpret_cast<irr::IrrlichtDevice*>(device)->run();
    }

    void irr_IrrlichtDevice_setWindowCaption(irr_IrrlichtDevice* device, const wchar_t* text)
    {
        return reinterpret_cast<irr::IrrlichtDevice*>(device)->setWindowCaption(text);
    }

    void irr_IrrlichtDevice_setResizable(irr_IrrlichtDevice* device, bool value)
    {
        return reinterpret_cast<irr::IrrlichtDevice*>(device)->setResizable(value);
    }
#ifdef __cplusplus
}
#endif // __cplusplus
