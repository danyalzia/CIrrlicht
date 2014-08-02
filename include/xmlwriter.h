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
#include "core.h"

struct irr_XMLWriter;

CIRRLICHT_API void irr_XMLWriter_writeXMLHeader(irr_XMLWriter* writer);
CIRRLICHT_API void irr_XMLWriter_writeElement(irr_XMLWriter* writer, const wchar_t* name, bool empty=false,
			const wchar_t* attr1Name = 0, const wchar_t* attr1Value = 0,
			const wchar_t* attr2Name = 0, const wchar_t* attr2Value = 0,
			const wchar_t* attr3Name = 0, const wchar_t* attr3Value = 0,
			const wchar_t* attr4Name = 0, const wchar_t* attr4Value = 0,
			const wchar_t* attr5Name = 0, const wchar_t* attr5Value = 0);
CIRRLICHT_API void irr_XMLWriter_writeElement2(irr_XMLWriter* writer, const wchar_t* name, bool empty,
				irr_array* names, irr_array* values);
CIRRLICHT_API void irr_XMLWriter_writeComment(irr_XMLWriter* writer, const wchar_t* comment);
CIRRLICHT_API void irr_XMLWriter_writeClosingTag(irr_XMLWriter* writer, const wchar_t* name);
CIRRLICHT_API void irr_XMLWriter_writeText(irr_XMLWriter* writer, const wchar_t* text);
CIRRLICHT_API void irr_XMLWriter_writeLineBreak(irr_XMLWriter* writer);
