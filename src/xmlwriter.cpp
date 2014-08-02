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

#include <IXMLWriter.h>
#include "xmlwriter.h"

void irr_IXMLWriter_writeXMLHeader(irr_IXMLWriter* writer) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeXMLHeader();
}

void irr_IXMLWriter_writeElement(irr_IXMLWriter* writer, const wchar_t* name, bool empty,
			const wchar_t* attr1Name, const wchar_t* attr1Value,
			const wchar_t* attr2Name, const wchar_t* attr2Value,
			const wchar_t* attr3Name, const wchar_t* attr3Value,
			const wchar_t* attr4Name, const wchar_t* attr4Value,
			const wchar_t* attr5Name, const wchar_t* attr5Value) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeElement(name, empty, attr1Name, attr1Value, attr2Name, attr2Value, attr3Name, attr3Value, attr4Name, attr4Value, attr5Name, attr5Value);
}

void irr_IXMLWriter_writeElement2(irr_IXMLWriter* writer, const wchar_t* name, bool empty,
				irr_array* names, irr_array* values) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeElement(name, empty, *reinterpret_cast<irr::core::array<irr::core::stringw>*>(names->data), *reinterpret_cast<irr::core::array<irr::core::stringw>*>(values->data));
}

void irr_IXMLWriter_writeComment(irr_IXMLWriter* writer, const wchar_t* comment) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeComment(comment);
}

void irr_IXMLWriter_writeClosingTag(irr_IXMLWriter* writer, const wchar_t* name) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeClosingTag(name);
}

void irr_IXMLWriter_writeText(irr_IXMLWriter* writer, const wchar_t* text) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeText(text);
}

void irr_IXMLWriter_writeLineBreak(irr_IXMLWriter* writer) {
	reinterpret_cast<irr::io::IXMLWriter*>(writer)->writeLineBreak();
}

