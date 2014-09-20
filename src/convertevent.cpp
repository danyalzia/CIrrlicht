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

#include "convertevent.h"

irr_SEvent convertEvent(irr::SEvent event) {
	irr_SEvent temp;
	temp.EventType = EEVENT_TYPE(event.EventType);
	
	auto tempgui = temp.GUIEvent;
	tempgui.Caller = reinterpret_cast<irr_IGUIElement*>(event.GUIEvent.Caller);
    tempgui.Element = reinterpret_cast<irr_IGUIElement*>(event.GUIEvent.Element);
    tempgui.EventType = EGUI_EVENT_TYPE(event.GUIEvent.EventType);
    temp.GUIEvent = tempgui;
    
    auto tempmouse = temp.MouseInput;
    tempmouse.X = event.MouseInput.X;
    tempmouse.Y = event.MouseInput.Y;
    tempmouse.Wheel = event.MouseInput.Wheel;
    tempmouse.Shift = event.MouseInput.Shift;
    tempmouse.Control = event.MouseInput.Control;
	tempmouse.ButtonStates = event.MouseInput.ButtonStates;
	// isLeftPressed
	// isRightPressed
	// isMiddlePressed
	tempmouse.Event = EMOUSE_INPUT_EVENT(event.MouseInput.Event);
	
	temp.MouseInput = tempmouse;
	
	auto tempkeyinput = temp.KeyInput;
	tempkeyinput.Char = event.KeyInput.Char;
	tempkeyinput.Key = EKEY_CODE(event.KeyInput.Key);
	tempkeyinput.PressedDown = event.KeyInput.PressedDown;
	tempkeyinput.Shift = event.KeyInput.Shift;
	tempkeyinput.Control = event.KeyInput.Control;

	temp.KeyInput = tempkeyinput;
	
    auto tempjoystick = temp.JoystickEvent;
    tempjoystick.ButtonStates = event.JoystickEvent.ButtonStates;
    tempjoystick.Axis[tempjoystick.NUMBER_OF_AXES] = event.JoystickEvent.Axis[event.JoystickEvent.NUMBER_OF_AXES];
	tempjoystick.POV = event.JoystickEvent.POV;
	tempjoystick.Joystick = event.JoystickEvent.Joystick;
	// IsButtonPressed
	temp.JoystickEvent = tempjoystick;
	
	auto templog = temp.LogEvent;
	templog.Text = event.LogEvent.Text;
	templog.Level = event.LogEvent.Level;
	temp.LogEvent = templog;
	
	auto tempuser = temp.UserEvent;
	tempuser.UserData1 = event.UserEvent.UserData1;
	tempuser.UserData2 = event.UserEvent.UserData2;
	temp.UserEvent = tempuser;
	
	return temp;
}
