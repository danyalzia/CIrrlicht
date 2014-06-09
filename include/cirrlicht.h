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


/*! \mainpage CIrrlicht API documentation
 *
 * <div align="center"><img src="logobig.png" ></div>
 *
 * \section intro Introduction
 *
 * Welcome to the CIrrlicht API documentation!
 * Here you'll find any information you'll need to develop applications with
 * Using CIrrlicht with C is simple and straighforward.
 *
 */

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

    irr_IrrlichtDevice* irr_createDevice(E_DRIVER_TYPE driver, irr_dimension2du res, unsigned bits = 16, bool fullscreen = false, bool stencilbuffer = false, bool vsync = false, irr_IEventReceiver* receiver=0);
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
    void irr_IrrlichtDevice_setWindowSize(irr_IrrlichtDevice* device, irr_dimension2du* size);
    void irr_IrrlichtDevice_minimizeWindow(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_maximizeWindow(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_restoreWindow(irr_IrrlichtDevice* device);
    irr_vector2di irr_IrrlichtDevice_getWindowPosition(irr_IrrlichtDevice* device);
    //bool activateJoysticks
    bool irr_IrrlichtDevice_setGammaRamp(irr_IrrlichtDevice* device, float red, float green, float blue, float relativebrightness, float relativecontrast);
    bool irr_IrrlichtDevice_getGammaRamp(irr_IrrlichtDevice* device, float& red, float& green, float& blue, float& relativebrightness, float& relativecontrast);
    void irr_IrrlichtDevice_setDoubleClickTime(irr_IrrlichtDevice* device, unsigned timeMs);
    unsigned irr_IrrlichtDevice_getDoubleClickTime(irr_IrrlichtDevice* device);
    void irr_IrrlichtDevice_clearSystemMessages(irr_IrrlichtDevice* device);
    E_DEVICE_TYPE irr_IrrlichtDevice_getType(irr_IrrlichtDevice* device);
    bool irr_IrrlichtDevice_isDriverSupported(irr_IrrlichtDevice* device, E_DRIVER_TYPE type);
    void irr_IrrlichtDevice_drop(irr_IrrlichtDevice* device);

    enum EEVENT_TYPE
	{
		//! An event of the graphical user interface.
		/** GUI events are created by the GUI environment or the GUI elements in response
		to mouse or keyboard events. When a GUI element receives an event it will either
		process it and return true, or pass the event to its parent. If an event is not absorbed
		before it reaches the root element then it will then be passed to the user receiver. */
		EET_GUI_EVENT = 0,

		//! A mouse input event.
		/** Mouse events are created by the device and passed to IrrlichtDevice::postEventFromUser
		in response to mouse input received from the operating system.
		Mouse events are first passed to the user receiver, then to the GUI environment and its elements,
		then finally the input receiving scene manager where it is passed to the active camera.
		*/
		EET_MOUSE_INPUT_EVENT,

		//! A key input event.
		/** Like mouse events, keyboard events are created by the device and passed to
		IrrlichtDevice::postEventFromUser. They take the same path as mouse events. */
		EET_KEY_INPUT_EVENT,

		//! A joystick (joypad, gamepad) input event.
		/** Joystick events are created by polling all connected joysticks once per
		device run() and then passing the events to IrrlichtDevice::postEventFromUser.
		They take the same path as mouse events.
		Windows, SDL: Implemented.
		Linux: Implemented, with POV hat issues.
		MacOS / Other: Not yet implemented.
		*/
		EET_JOYSTICK_INPUT_EVENT,

		//! A log event
		/** Log events are only passed to the user receiver if there is one. If they are absorbed by the
		user receiver then no text will be sent to the console. */
		EET_LOG_TEXT_EVENT,

		//! A user event with user data.
		/** This is not used by Irrlicht and can be used to send user
		specific data though the system. The Irrlicht 'window handle'
		can be obtained from IrrlichtDevice::getExposedVideoData()
		The usage and behavior depends on the operating system:
		Windows: send a WM_USER message to the Irrlicht Window; the
			wParam and lParam will be used to populate the
			UserData1 and UserData2 members of the SUserEvent.
		Linux: send a ClientMessage via XSendEvent to the Irrlicht
			Window; the data.l[0] and data.l[1] members will be
			casted to s32 and used as UserData1 and UserData2.
		MacOS: Not yet implemented
		*/
		EET_USER_EVENT,

		//! This enum is never used, it only forces the compiler to
		//! compile these enumeration values to 32 bit.
		EGUIET_FORCE_32_BIT = 0x7fffffff

	};

	//! Enumeration for all mouse input events
	enum EMOUSE_INPUT_EVENT
	{
		//! Left mouse button was pressed down.
		EMIE_LMOUSE_PRESSED_DOWN = 0,

		//! Right mouse button was pressed down.
		EMIE_RMOUSE_PRESSED_DOWN,

		//! Middle mouse button was pressed down.
		EMIE_MMOUSE_PRESSED_DOWN,

		//! Left mouse button was left up.
		EMIE_LMOUSE_LEFT_UP,

		//! Right mouse button was left up.
		EMIE_RMOUSE_LEFT_UP,

		//! Middle mouse button was left up.
		EMIE_MMOUSE_LEFT_UP,

		//! The mouse cursor changed its position.
		EMIE_MOUSE_MOVED,

		//! The mouse wheel was moved. Use Wheel value in event data to find out
		//! in what direction and how fast.
		EMIE_MOUSE_WHEEL,

		//! Left mouse button double click.
		//! This event is generated after the second EMIE_LMOUSE_PRESSED_DOWN event.
		EMIE_LMOUSE_DOUBLE_CLICK,

		//! Right mouse button double click.
		//! This event is generated after the second EMIE_RMOUSE_PRESSED_DOWN event.
		EMIE_RMOUSE_DOUBLE_CLICK,

		//! Middle mouse button double click.
		//! This event is generated after the second EMIE_MMOUSE_PRESSED_DOWN event.
		EMIE_MMOUSE_DOUBLE_CLICK,

		//! Left mouse button triple click.
		//! This event is generated after the third EMIE_LMOUSE_PRESSED_DOWN event.
		EMIE_LMOUSE_TRIPLE_CLICK,

		//! Right mouse button triple click.
		//! This event is generated after the third EMIE_RMOUSE_PRESSED_DOWN event.
		EMIE_RMOUSE_TRIPLE_CLICK,

		//! Middle mouse button triple click.
		//! This event is generated after the third EMIE_MMOUSE_PRESSED_DOWN event.
		EMIE_MMOUSE_TRIPLE_CLICK,

		//! No real event. Just for convenience to get number of events
		EMIE_COUNT
	};

	//! Masks for mouse button states
	enum E_MOUSE_BUTTON_STATE_MASK
	{
		EMBSM_LEFT    = 0x01,
		EMBSM_RIGHT   = 0x02,
		EMBSM_MIDDLE  = 0x04,

		//! currently only on windows
		EMBSM_EXTRA1  = 0x08,

		//! currently only on windows
		EMBSM_EXTRA2  = 0x10,

		EMBSM_FORCE_32_BIT = 0x7fffffff
	};
#ifdef __cplusplus
}
#endif // __cplusplus


#endif // _CIRRLICHT_IRRLICHT_
