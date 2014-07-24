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

#include "logger.h"
#include <ILogger.h>

ELOG_LEVEL irr_ILogger_getLogLevel(irr_ILogger* logger)
{
	return ELOG_LEVEL(reinterpret_cast<irr::ILogger*>(logger)->getLogLevel());
}

void irr_ILogger_setLogLevel(irr_ILogger* logger, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->setLogLevel(irr::ELOG_LEVEL(ll));
}

void irr_ILogger_log1(irr_ILogger* logger, const char* text, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->log(text, irr::ELOG_LEVEL(ll));
}

void irr_ILogger_log2(irr_ILogger* logger, const char* text, const char* hint, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->log(text, hint, irr::ELOG_LEVEL(ll));
}

void irr_ILogger_log3(irr_ILogger* logger, const char* text, const wchar_t* hint, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->log(text, hint, irr::ELOG_LEVEL(ll));
}

void irr_ILogger_log4(irr_ILogger* logger, const wchar_t* text, const wchar_t* hint, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->log(text, hint, irr::ELOG_LEVEL(ll));
}

void irr_ILogger_log5(irr_ILogger* logger, const wchar_t* text, ELOG_LEVEL ll)
{
	reinterpret_cast<irr::ILogger*>(logger)->log(text, irr::ELOG_LEVEL(ll));
}
