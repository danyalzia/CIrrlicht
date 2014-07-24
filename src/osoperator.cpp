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

#include "osoperator.h"
#include <IOSOperator.h>

const char* irr_IOSOperator_getOperatingSystemVersion(irr_IOSOperator* op)
{
	auto str = reinterpret_cast<irr::IOSOperator*>(op)->getOperatingSystemVersion();
	return str.c_str();
}

void irr_IOSOperator_copyToClipboard(irr_IOSOperator* op, const char* text)
{
	reinterpret_cast<irr::IOSOperator*>(op)->copyToClipboard(text);
}

const char* irr_IOSOperator_getTextFromClipboard(irr_IOSOperator* op)
{
	return reinterpret_cast<irr::IOSOperator*>(op)->getTextFromClipboard();
}

bool irr_IOSOperator_getProcessorSpeedMHz(irr_IOSOperator* op, unsigned int* MHz)
{
	return reinterpret_cast<irr::IOSOperator*>(op)->getProcessorSpeedMHz(MHz);
}

bool irr_IOSOperator_getSystemMemory(irr_IOSOperator* op, unsigned int* Total, unsigned int* Avail)
{
	return reinterpret_cast<irr::IOSOperator*>(op)->getSystemMemory(Total, Avail);
}
