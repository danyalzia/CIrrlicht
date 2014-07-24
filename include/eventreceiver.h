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
#include "keycodes.h"

enum EEVENT_TYPE
{
	EET_GUI_EVENT = 0,
	EET_MOUSE_INPUT_EVENT,
	EET_KEY_INPUT_EVENT,
	EET_JOYSTICK_INPUT_EVENT,
	EET_LOG_TEXT_EVENT,
	EET_USER_EVENT

};

enum EMOUSE_INPUT_EVENT
{
	EMIE_LMOUSE_PRESSED_DOWN = 0,
	EMIE_RMOUSE_PRESSED_DOWN,
	EMIE_MMOUSE_PRESSED_DOWN,
	EMIE_LMOUSE_LEFT_UP,
	EMIE_RMOUSE_LEFT_UP,
	EMIE_MMOUSE_LEFT_UP,
	EMIE_MOUSE_MOVED,
	EMIE_MOUSE_WHEEL,
	EMIE_LMOUSE_DOUBLE_CLICK,
	EMIE_RMOUSE_DOUBLE_CLICK,
	EMIE_MMOUSE_DOUBLE_CLICK,
	EMIE_LMOUSE_TRIPLE_CLICK,
	EMIE_RMOUSE_TRIPLE_CLICK,
	EMIE_MMOUSE_TRIPLE_CLICK,
	EMIE_COUNT
};

enum E_MOUSE_BUTTON_STATE_MASK
{
	EMBSM_LEFT    = 0x01,
	EMBSM_RIGHT   = 0x02,
	EMBSM_MIDDLE  = 0x04,
	EMBSM_EXTRA1  = 0x08,
	EMBSM_EXTRA2  = 0x10,
	EMBSM_FORCE_32_BIT = 0x7fffffff
};


struct irr_IGUIElement;

enum EGUI_EVENT_TYPE
{
	EGET_ELEMENT_FOCUS_LOST = 0,
	EGET_ELEMENT_FOCUSED,
	EGET_ELEMENT_HOVERED,
	EGET_ELEMENT_LEFT,
	EGET_ELEMENT_CLOSED,
	EGET_BUTTON_CLICKED,
	EGET_SCROLL_BAR_CHANGED,
	EGET_CHECKBOX_CHANGED,
	EGET_LISTBOX_CHANGED,
	EGET_LISTBOX_SELECTED_AGAIN,
	EGET_FILE_SELECTED,
	EGET_DIRECTORY_SELECTED,
	EGET_FILE_CHOOSE_DIALOG_CANCELLED,
	EGET_MESSAGEBOX_YES,
	EGET_MESSAGEBOX_NO,
	EGET_MESSAGEBOX_OK,
	EGET_MESSAGEBOX_CANCEL,
	EGET_EDITBOX_ENTER,
	EGET_EDITBOX_CHANGED,
	EGET_EDITBOX_MARKING_CHANGED,
	EGET_TAB_CHANGED,
	EGET_MENU_ITEM_SELECTED,
	EGET_COMBO_BOX_CHANGED,
	EGET_SPINBOX_CHANGED,
	EGET_TABLE_CHANGED,
	EGET_TABLE_HEADER_CHANGED,
	EGET_TABLE_SELECTED_AGAIN,
	EGET_TREEVIEW_NODE_DESELECT,
	EGET_TREEVIEW_NODE_SELECT,
	EGET_TREEVIEW_NODE_EXPAND,
	EGET_TREEVIEW_NODE_COLLAPSE,
	EGET_TREEVIEW_NODE_COLLAPS = EGET_TREEVIEW_NODE_COLLAPSE,
	EGET_COUNT
};


struct irr_SEvent
{
	struct irr_SGUIEvent
	{
		irr_IGUIElement* Caller;
		irr_IGUIElement* Element;
		EGUI_EVENT_TYPE EventType;

	};

	struct irr_SMouseInput
	{
		int X;
		int Y;
		float Wheel;
		bool Shift:1;
		bool Control:1;
		unsigned int ButtonStates;
		bool isLeftPressed() const { return 0 != ( ButtonStates & EMBSM_LEFT ); }
		bool isRightPressed() const { return 0 != ( ButtonStates & EMBSM_RIGHT ); }
		bool isMiddlePressed() const { return 0 != ( ButtonStates & EMBSM_MIDDLE ); }
		EMOUSE_INPUT_EVENT Event;
	};

	struct irr_SKeyInput
	{
		wchar_t Char;
		EKEY_CODE Key;
		bool PressedDown:1;
		bool Shift:1;
		bool Control:1;
	};

	struct irr_SJoystickEvent
	{
		enum
		{
			NUMBER_OF_BUTTONS = 32,

			AXIS_X = 0,	// e.g. analog stick 1 left to right
			AXIS_Y,		// e.g. analog stick 1 top to bottom
			AXIS_Z,		// e.g. throttle, or analog 2 stick 2 left to right
			AXIS_R,		// e.g. rudder, or analog 2 stick 2 top to bottom
			AXIS_U,
			AXIS_V,
			NUMBER_OF_AXES
		};

		unsigned int ButtonStates;
		short Axis[NUMBER_OF_AXES];
		short POV;
		char Joystick;
		bool IsButtonPressed(unsigned int button) const
		{
			if(button >= (unsigned int)NUMBER_OF_BUTTONS)
				return false;

			return (ButtonStates & (1 << button)) ? true : false;
		}
	};

	struct irr_SLogEvent
	{
		const char* Text;
		int Level;
	};

	struct irr_SUserEvent
	{
		int UserData1;
		int UserData2;
	};

	EEVENT_TYPE EventType;
	union
	{
		struct irr_SGUIEvent GUIEvent;
		struct irr_SMouseInput MouseInput;
		struct irr_SKeyInput KeyInput;
		struct irr_SJoystickEvent JoystickEvent;
		struct irr_SLogEvent LogEvent;
		struct irr_SUserEvent UserEvent;
	};

};

typedef struct irr_IEventReceiver irr_IEventReceiver;

struct irr_SEvent;

CIRRLICHT_API bool irr_IEventReceiver_OnEvent(irr_IEventReceiver* receiver, irr_SEvent event);
