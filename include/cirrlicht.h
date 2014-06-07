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
#include "io.h"

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

    enum ECOLOR_FORMAT
    {
        ECF_A1R5G5B5,
        ECF_R5G6B5,
        ECF_R8G8B8,
        ECF_A8R8G8B8,
        ECF_R16F,
        ECF_G16R16F,
        ECF_A16B16G16R16F,
        ECF_R32F,
        ECF_G32R32F,
        ECF_A32B32G32R32F,
        ECF_UNKNOWN
    };

    struct irr_IEventReceiver;
    typedef struct irr_IEventReceiver irr_IEventReceiver;

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

    irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, dimension2du res, unsigned bits = 16, bool fullscreen = false, bool stencilbuffer = false, bool vsync = false);
    bool irr_IrrlichtDevice_run(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_yield(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_sleep(irr_IrrlichtDevice* device, unsigned int timeMs, bool pauseTimer=false);
    irr_IVideoDriver* irr_IrrlichtDevice_getVideoDriver(irr_IrrlichtDevice* device);
    irr_IFileSystem* irr_IrrlichtDevice_getFileSystem(irr_IrrlichtDevice* device);
    irr_IGUIEnvironment* irr_IrrlichtDevice_getGUIEnvironment(irr_IrrlichtDevice* device);
    irr_ISceneManager* irr_IrrlichtDevice_getSceneManager(irr_IrrlichtDevice* device);
    irr_ICursorControl* irr_IrrlichtDevice_getCursorControl(irr_IrrlichtDevice* device);
    irr_ILogger* irr_IrrlichtDevice_getLogger(irr_IrrlichtDevice* device);
    irr_IVideoModeList* irr_IrrlichtDevice_getVideoModeList(irr_IrrlichtDevice* device);
    irr_IOSOperator* irr_IrrlichtDevice_getOSOperator(irr_IrrlichtDevice* device);
    irr_ITimer* irr_IrrlichtDevice_getTimer(irr_IrrlichtDevice* device);
    irr_IRandomizer* irr_IrrlichtDevice_getRandomizer(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_setRandomizer(irr_IrrlichtDevice* device, irr_IRandomizer* randomizer);
    irr_IRandomizer* irr_IrrlichtDevice_createDefaultRandomizer(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_setWindowCaption(irr_IrrlichtDevice* device, const wchar_t* text);
    bool irr_IrrlichtDevice_isWindowActive(irr_IrrlichtDevice* device);
    bool irr_IrrlichtDevice_isWindowFocused(irr_IrrlichtDevice* device);
    bool irr_IrrlichtDevice_isWindowMinimized(irr_IrrlichtDevice* device);
    bool irr_IrrlichtDevice_isFullscreen(irr_IrrlichtDevice* device);
    ECOLOR_FORMAT irr_IrrlichtDevice_getColorFormat(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_closeDevice(irr_IrrlichtDevice* device);
    const char* irr_IrrlichtDevice_getVersion(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_setEventReceiver(irr_IrrlichtDevice* device, irr_IEventReceiver* receiver);
    irr_IEventReceiver* irr_IrrlichtDevice_getEventReceiver(irr_IrrlichtDevice* device);
    bool irr_IrrlichtDevice_postEventFromUser(irr_IrrlichtDevice* device, irr_SEvent* event);
    void irr_IrrlichtDevice_setInputReceivingSceneManager(irr_IrrlichtDevice* device, irr_ISceneManager* smgr);
    void irr_IrrlichtDevice_setResizable(irr_IrrlichtDevice* device, bool value = false);
    void irr_IrrlichtDevice_setWindowSize(irr_IrrlichtDevice* device, dimension2du* size);
    void irr_IrrlichtDevice_minimizeWindow(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_maximizeWindow(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_restoreWindow(irr_IrrlichtDevice* device);
    vector2di irr_IrrlichtDevice_getWindowPosition(irr_IrrlichtDevice* device);
    //bool activateJoysticks
    bool irr_IrrlichtDevice_setGammaRamp(irr_IrrlichtDevice* device, float red, float green, float blue, float relativebrightness, float relativecontrast);
    bool irr_IrrlichtDevice_getGammaRamp(irr_IrrlichtDevice* device, float& red, float& green, float& blue, float& relativebrightness, float& relativecontrast);
    void irr_IrrlichtDevice_setDoubleClickTime(irr_IrrlichtDevice* device, unsigned timeMs);
    unsigned irr_IrrlichtDevice_getDoubleClickTime(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_clearSystemMessages(irr_IrrlichtDevice* device);
    E_DEVICE_TYPE irr_IrrlichtDevice_getType(irr_IrrlichtDevice* device);
#ifdef __cplusplus
}
#endif // __cplusplus


#endif // _CIRRLICHT_IRRLICHT_
