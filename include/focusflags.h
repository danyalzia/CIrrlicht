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

//! Bitflags for defining the the focus behavior of the gui
// (all names start with SET as we might add REMOVE flags later to control that behavior as well)
enum EFOCUS_FLAG
{
    //! When set the focus changes when the left mouse-button got clicked while over an element
    EFF_SET_ON_LMOUSE_DOWN = 0x1,

    //! When set the focus changes when the right mouse-button got clicked while over an element
    //! Note that elements usually don't care about right-click and that won't change with this flag
    //! This is mostly to allow taking away focus from elements with right-mouse additionally.
    EFF_SET_ON_RMOUSE_DOWN = 0x2,

    //! When set the focus changes when the mouse-cursor is over an element
    EFF_SET_ON_MOUSE_OVER = 0x4,

    //! When set the focus can be changed with TAB-key combinations.
    EFF_SET_ON_TAB = 0x8,

    //! When set it's possible to set the focus to disabled elements.
    EFF_CAN_FOCUS_DISABLED = 0x16
};
