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
#include "core.h"
#include "videodriver.h"
#include "scenemanager.h"
#include "guienvironment.h"
#include "filesystem.h"

struct irr_IrrlichtDevice;
typedef struct irr_IrrlichtDevice irr_IrrlichtDevice;

struct irr_ILogger;
typedef struct irr_ILogger irr_ILogger;

struct irr_IVideoDriver;
struct irr_IFileSystem;
struct irr_IGUIEnvironment;
struct irr_ISceneManager;
struct irr_ICursorControl;
struct irr_IVideoModeList;

struct irr_IOSOperator;
typedef struct irr_IOSOperator irr_IOSOperator;

struct irr_ITimer;
typedef struct irr_ITimer irr_ITimer;

struct irr_IRandomizer;
typedef struct irr_IRandomizer irr_IRandomizer;

struct irr_SEvent;
typedef struct irr_SEvent irr_SEvent;

enum E_DEVICE_TYPE
{
    EIDT_WIN32,
    EIDT_WINCE,
    EIDT_X11,
    EIDT_OSX,
    EIDT_SDL,
    EIDT_FRAMEBUFFER,
    EIDT_CONSOLE,
    EIDT_BEST
};

CIRRLICHT_API irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, irr_dimension2du res, unsigned bits = 16, bool fullscreen = false, bool stencilbuffer = false, bool vsync = false, irr_IEventReceiver* receiver=0);
CIRRLICHT_API bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_yield(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_sleep(irr_IrrlichtDevice* device, unsigned int timeMs, bool pauseTimer=false);
CIRRLICHT_API irr_IVideoDriver* irr_IrrlichtDevice_getVideoDriver(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_IFileSystem* irr_IrrlichtDevice_getFileSystem(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_IGUIEnvironment* irr_IrrlichtDevice_getGUIEnvironment(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_ISceneManager* irr_IrrlichtDevice_getSceneManager(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_ICursorControl* irr_IrrlichtDevice_getCursorControl(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_ILogger* irr_IrrlichtDevice_getLogger(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_IVideoModeList* irr_IrrlichtDevice_getVideoModeList(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_IOSOperator* irr_IrrlichtDevice_getOSOperator(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_ITimer* irr_IrrlichtDevice_getTimer(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_IRandomizer* irr_IrrlichtDevice_getRandomizer(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_setRandomizer(irr_IrrlichtDevice* device, irr_IRandomizer* randomizer);
CIRRLICHT_API irr_IRandomizer* irr_IrrlichtDevice_createDefaultRandomizer(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_setWindowCaption(irr_IrrlichtDevice* device, const wchar_t* text);
CIRRLICHT_API bool irr_IrrlichtDevice_isWindowActive(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_isWindowFocused(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_isWindowMinimized(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_isFullscreen(irr_IrrlichtDevice* device);
CIRRLICHT_API ECOLOR_FORMAT irr_IrrlichtDevice_getColorFormat(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_closeDevice(irr_IrrlichtDevice* device);
CIRRLICHT_API const char* irr_IrrlichtDevice_getVersion(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_setEventReceiver(irr_IrrlichtDevice* device, irr_IEventReceiver* receiver);
CIRRLICHT_API irr_IEventReceiver* irr_IrrlichtDevice_getEventReceiver(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_postEventFromUser(irr_IrrlichtDevice* device, irr_SEvent event);
CIRRLICHT_API void irr_IrrlichtDevice_setInputReceivingSceneManager(irr_IrrlichtDevice* device, irr_ISceneManager* smgr);
CIRRLICHT_API void irr_IrrlichtDevice_setResizable(irr_IrrlichtDevice* device, bool value = false);
CIRRLICHT_API void irr_IrrlichtDevice_setWindowSize(irr_IrrlichtDevice* device, irr_dimension2du size);
CIRRLICHT_API void irr_IrrlichtDevice_minimizeWindow(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_maximizeWindow(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_restoreWindow(irr_IrrlichtDevice* device);
CIRRLICHT_API irr_vector2di irr_IrrlichtDevice_getWindowPosition(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_activateJoysticks(irr_IrrlichtDevice* device, irr_array* joystickInfo);
CIRRLICHT_API bool irr_IrrlichtDevice_setGammaRamp(irr_IrrlichtDevice* device, float red, float green, float blue, float relativebrightness, float relativecontrast);
CIRRLICHT_API bool irr_IrrlichtDevice_getGammaRamp(irr_IrrlichtDevice* device, float& red, float& green, float& blue, float& relativebrightness, float& relativecontrast);
CIRRLICHT_API void irr_IrrlichtDevice_setDoubleClickTime(irr_IrrlichtDevice* device, unsigned timeMs);
CIRRLICHT_API unsigned irr_IrrlichtDevice_getDoubleClickTime(irr_IrrlichtDevice* device);
CIRRLICHT_API void irr_IrrlichtDevice_clearSystemMessages(irr_IrrlichtDevice* device);
CIRRLICHT_API E_DEVICE_TYPE irr_IrrlichtDevice_getType(irr_IrrlichtDevice* device);
CIRRLICHT_API bool irr_IrrlichtDevice_isDriverSupported(irr_IrrlichtDevice* device, E_DRIVER_TYPE type);
CIRRLICHT_API void irr_IrrlichtDevice_drop(irr_IrrlichtDevice* device);
