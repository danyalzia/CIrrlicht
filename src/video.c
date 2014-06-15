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
#include "video.h"

#ifdef __cplusplus
extern "C"
{
#endif
    bool irr_IVideoDriver_beginScene(irr_IVideoDriver* driver, bool backBuffer, bool zBuffer, irr_SColor color)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->beginScene(backBuffer, zBuffer, irr::video::SColor(color.a, color.b, color.g, color.r));
    }

    bool irr_IVideoDriver_endScene(irr_IVideoDriver* driver)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->endScene();
    }

    bool irr_IVideoDriver_queryFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->queryFeature(irr::video::E_VIDEO_DRIVER_FEATURE(feature));
    }

    void irr_IVideoDriver_disableFeature(irr_IVideoDriver* driver, E_VIDEO_DRIVER_FEATURE feature, bool flag)
    {
        reinterpret_cast<irr::video::IVideoDriver*>(driver)->disableFeature(irr::video::E_VIDEO_DRIVER_FEATURE(feature), flag);
    }

    const irr_Attributes& irr_IVideoDriver_getDriverAttributes(irr_IVideoDriver* driver)
    {
        return reinterpret_cast<const irr_Attributes&>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getDriverAttributes());
    }

    bool irr_IVideoDriver_checkDriverReset(irr_IVideoDriver* driver)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->checkDriverReset();
    }

    irr_ITexture* irr_IVideoDriver_getTexture(irr_IVideoDriver* driver, const char* file)
    {
        return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::video::IVideoDriver*>(driver)->getTexture(file));
    }

    int irr_IVideoDriver_getFPS(irr_IVideoDriver* driver)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getFPS();
    }

    const wchar_t* irr_IVideoDriver_getName(irr_IVideoDriver* driver)
    {
        return reinterpret_cast<irr::video::IVideoDriver*>(driver)->getName();
    }
#ifdef __cplusplus
}
#endif // __cplusplus
