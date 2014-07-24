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

irr::SEvent convertEvent(irr_SEvent event)
{
	irr::SEvent temp;
	temp.EventType = irr::EEVENT_TYPE(event.EventType);
	auto tempgui = temp.GUIEvent;
    tempgui.Caller = reinterpret_cast<irr::gui::IGUIElement*>(event.GUIEvent.Caller);
    tempgui.Element = reinterpret_cast<irr::gui::IGUIElement*>(event.GUIEvent.Element);
    tempgui.EventType = irr::gui::EGUI_EVENT_TYPE(event.GUIEvent.EventType);

	auto tempjoystick = temp.JoystickEvent;
//    tempjoystick.NUMBER_OF_BUTTONS = event.JoystickEvent.NUMBER_OF_BUTTONS;
//    tempjoystick.AXIS_X = event.JoystickEvent.AXIS_X;
//    tempjoystick.AXIS_Y = event.JoystickEvent.AXIS_Y;
//    tempjoystick.AXIS_Z = event.JoystickEvent.AXIS_Z;
//    tempjoystick.AXIS_R = event.JoystickEvent.AXIS_R;
//    tempjoystick.AXIS_U = event.JoystickEvent.AXIS_U;
//    tempjoystick.AXIS_V = event.JoystickEvent.AXIS_V;
//    tempjoystick.NUMBER_OF_AXES = event.JoystickEvent.NUMBER_OF_AXES;

    tempjoystick.ButtonStates = event.JoystickEvent.ButtonStates;
    tempjoystick.Axis[tempjoystick.NUMBER_OF_AXES] = event.JoystickEvent.Axis[event.JoystickEvent.NUMBER_OF_AXES];
	tempjoystick.POV = event.JoystickEvent.POV;
	tempjoystick.Joystick = event.JoystickEvent.Joystick;
	//tempjoystick.IsButtonPressed = event.JoystickEvent.IsButtonPressed;

	auto tempkeyinput = temp.KeyInput;
	tempkeyinput.Char = temp.KeyInput.Char;
	tempkeyinput.Key = temp.KeyInput.Key;
	tempkeyinput.PressedDown = temp.KeyInput.PressedDown;
	tempkeyinput.Shift = temp.KeyInput.Shift;
	tempkeyinput.Control = temp.KeyInput.Control;

	temp.KeyInput = tempkeyinput;
	return temp;
}
