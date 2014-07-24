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

#include "irrlichtdevice.h"

//! enumeration for key actions. Used for example in the FPS Camera.
enum EKEY_ACTION
{
	EKA_MOVE_FORWARD = 0,
	EKA_MOVE_BACKWARD,
	EKA_STRAFE_LEFT,
	EKA_STRAFE_RIGHT,
	EKA_JUMP_UP,
	EKA_CROUCH,
	EKA_COUNT,

	//! This value is not used. It only forces this enumeration to compile in 32 bit.
	EKA_FORCE_32BIT = 0x7fffffff
};
	
typedef struct
{
    EKEY_ACTION Action;
    EKEY_CODE KeyCode;
} irr_SKeyMap;
