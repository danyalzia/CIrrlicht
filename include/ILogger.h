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

#ifndef _CIRRLICHT_IIMAGEWRITER_
#define _CIRRLICHT_IIMAGEWRITER_

#include "CompileConfig.h"

//! Possible log levels.
//! When used has filter ELL_DEBUG means => log everything and ELL_NONE means => log (nearly) nothing.
//! When used to print logging information ELL_DEBUG will have lowest priority while ELL_NONE
//! messages are never filtered and always printed.
enum ELOG_LEVEL
{
	//! Used for printing information helpful in debugging
	ELL_DEBUG,

	//! Useful information to print. For example hardware infos or something started/stopped.
	ELL_INFORMATION,

	//! Warnings that something isn't as expected and can cause oddities
	ELL_WARNING,

	//! Something did go wrong.
	ELL_ERROR,

	//! Logs with ELL_NONE will never be filtered.
	//! And used as filter it will remove all logging except ELL_NONE messages.
	ELL_NONE
};

typedef struct irr_ILogger irr_ILogger;

CIRRLICHT_API ELOG_LEVEL irr_ILogger_getLogLevel(irr_ILogger* logger);
CIRRLICHT_API void irr_ILogger_setLogLevel(irr_ILogger* logger, ELOG_LEVEL ll);
CIRRLICHT_API void irr_ILogger_log1(irr_ILogger* logger, const char* text, ELOG_LEVEL ll=ELL_INFORMATION);
CIRRLICHT_API void irr_ILogger_log2(irr_ILogger* logger, const char* text, const char* hint, ELOG_LEVEL ll=ELL_INFORMATION);
CIRRLICHT_API void irr_ILogger_log3(irr_ILogger* logger, const char* text, const wchar_t* hint, ELOG_LEVEL ll=ELL_INFORMATION);
CIRRLICHT_API void irr_ILogger_log4(irr_ILogger* logger, const wchar_t* text, const wchar_t* hint, ELOG_LEVEL ll=ELL_INFORMATION);
CIRRLICHT_API void irr_ILogger_log5(irr_ILogger* logger, const wchar_t* text, ELOG_LEVEL ll=ELL_INFORMATION);

#endif // _CIRRLICHT_IIMAGEWRITER_
