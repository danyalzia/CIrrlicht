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

#include <include/irrlicht.h>
#include "core.h"
#include "IrrlichtDevice.h"

irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, irr_dimension2du res, unsigned bits, bool fullscreen, bool stencilbuffer, bool vsync, irr_IEventReceiver* receiver)
{
    return reinterpret_cast<irr_IrrlichtDevice*>(irr::createDevice(static_cast<irr::video::E_DRIVER_TYPE>(driver), irr::core::dimension2du(res.Width, res.Height), bits, fullscreen, stencilbuffer, vsync, reinterpret_cast<irr::IEventReceiver*>(receiver)));
}

bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->run();
}

void irr_IrrlichtDevice_yield(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->yield();
}

void irr_IrrlichtDevice_sleep(irr_IrrlichtDevice* device, unsigned int timeMs, bool pauseTimer)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->sleep(timeMs, pauseTimer);
}

irr_IVideoDriver* irr_IrrlichtDevice_getVideoDriver(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IVideoDriver*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getVideoDriver());
}

irr_IFileSystem* irr_IrrlichtDevice_getFileSystem(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IFileSystem*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getFileSystem());
}

irr_IGUIEnvironment* irr_IrrlichtDevice_getGUIEnvironment(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IGUIEnvironment*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getGUIEnvironment());
}

irr_ISceneManager* irr_IrrlichtDevice_getSceneManager(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_ISceneManager*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getSceneManager());
}

irr_ICursorControl* irr_IrrlichtDevice_getCursorControl(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_ICursorControl*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getCursorControl());
}

irr_ILogger* irr_IrrlichtDevice_getLogger(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_ILogger*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getLogger());
}

irr_IVideoModeList* irr_IrrlichtDevice_getVideoModeList(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IVideoModeList*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getVideoModeList());
}

irr_IOSOperator* irr_IrrlichtDevice_getOSOperator(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IOSOperator*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getOSOperator());
}

irr_ITimer* irr_IrrlichtDevice_getTimer(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_ITimer*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getTimer());
}

irr_IRandomizer* irr_IrrlichtDevice_getRandomizer(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IRandomizer*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getRandomizer());
}

void irr_IrrlichtDevice_setRandomizer(irr_IrrlichtDevice* device, irr_IRandomizer* randomizer)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setRandomizer(reinterpret_cast<irr::IRandomizer*>(randomizer));
}

irr_IRandomizer* irr_IrrlichtDevice_createDefaultRandomizer(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IRandomizer*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->createDefaultRandomizer());
}

void irr_IrrlichtDevice_setWindowCaption(irr_IrrlichtDevice* device, const wchar_t* text)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setWindowCaption(text);
}

bool irr_IrrlichtDevice_isWindowActive(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->isWindowActive();
}

bool irr_IrrlichtDevice_isWindowFocused(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->isWindowFocused();
}

bool irr_IrrlichtDevice_isWindowMinimized(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->isWindowMinimized();
}

bool irr_IrrlichtDevice_isFullscreen(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->isFullscreen();
}

ECOLOR_FORMAT irr_IrrlichtDevice_getColorFormat(irr_IrrlichtDevice* device)
{
    return *reinterpret_cast<ECOLOR_FORMAT*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getColorFormat());
}

void irr_IrrlichtDevice_closeDevice(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->closeDevice();
}

const char* irr_IrrlichtDevice_getVersion(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->getVersion();
}

void irr_IrrlichtDevice_setEventReceiver(irr_IrrlichtDevice* device, irr_IEventReceiver* receiver)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setEventReceiver(reinterpret_cast<irr::IEventReceiver*>(receiver));
}

irr_IEventReceiver* irr_IrrlichtDevice_getEventReceiver(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr_IEventReceiver*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getEventReceiver());
}

bool irr_IrrlichtDevice_postEventFromUser(irr_IrrlichtDevice* device, irr_SEvent* event)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->postEventFromUser(*reinterpret_cast<irr::SEvent*>(event));
}

void irr_IrrlichtDevice_setInputReceivingSceneManager(irr_IrrlichtDevice* device, irr_ISceneManager* smgr)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setInputReceivingSceneManager(reinterpret_cast<irr::scene::ISceneManager*>(smgr));
}

void irr_IrrlichtDevice_setResizable(irr_IrrlichtDevice* device, bool value)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setResizable(value);
}

void irr_IrrlichtDevice_setWindowSize(irr_IrrlichtDevice* device, irr_dimension2du* size)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setWindowSize(irr::core::dimension2du(size->Width, size->Height));
}

void irr_IrrlichtDevice_minimizeWindow(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->minimizeWindow();
}

void irr_IrrlichtDevice_maximizeWindow(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->maximizeWindow();
}

void irr_IrrlichtDevice_restoreWindow(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->restoreWindow();
}

irr_vector2di irr_IrrlichtDevice_getWindowPosition(irr_IrrlichtDevice* device)
{
    irr::core::vector2di temp = reinterpret_cast<irr::IrrlichtDevice*>(device)->getWindowPosition();
    irr_vector2di pos = {temp.X, temp.Y};
    return pos;
}

bool irr_IrrlichtDevice_setGammaRamp(irr_IrrlichtDevice* device, float red, float green, float blue, float relativebrightness, float relativecontrast)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->setGammaRamp(red, green, blue, relativebrightness, relativecontrast);
}

bool irr_IrrlichtDevice_getGammaRamp(irr_IrrlichtDevice* device, float& red, float& green, float& blue, float& relativebrightness, float& relativecontrast)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->getGammaRamp(red, green, blue, relativebrightness, relativecontrast);
}

void irr_IrrlichtDevice_setDoubleClickTime(irr_IrrlichtDevice* device, unsigned timeMs)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->setDoubleClickTime(timeMs);
}

unsigned irr_IrrlichtDevice_getDoubleClickTime(irr_IrrlichtDevice* device)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->getDoubleClickTime();
}

void irr_IrrlichtDevice_clearSystemMessages(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->clearSystemMessages();
}

E_DEVICE_TYPE irr_IrrlichtDevice_getType(irr_IrrlichtDevice* device)
{
    return *reinterpret_cast<E_DEVICE_TYPE*>(reinterpret_cast<irr::IrrlichtDevice*>(device)->getType());
}

bool irr_IrrlichtDevice_isDriverSupported(irr_IrrlichtDevice* device, E_DRIVER_TYPE type)
{
    return reinterpret_cast<irr::IrrlichtDevice*>(device)->isDriverSupported(irr::video::E_DRIVER_TYPE(type));
}

void irr_IrrlichtDevice_drop(irr_IrrlichtDevice* device)
{
    reinterpret_cast<irr::IrrlichtDevice*>(device)->drop();
}
