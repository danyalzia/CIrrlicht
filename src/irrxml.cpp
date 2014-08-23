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

#include "irrxml.h"
#include <irrXML.h>

int irr_IFileReadCallBack_read(irr_IFileReadCallBack* callback, void* buffer, int sizeToRead) {
	return reinterpret_cast<irr::io::IFileReadCallBack*>(callback)->read(buffer, sizeToRead);
}

long irr_IFileReadCallBack_getSize(irr_IFileReadCallBack* callback) {
	return reinterpret_cast<irr::io::IFileReadCallBack*>(callback)->getSize();
}

/// irr_IIrrXMLReader
bool irr_IIrrXMLReader_read(irr_IIrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->read();
}

EXML_NODE irr_IIrrXMLReader_getNodeType(irr_IIrrXMLReader* reader) {
	return EXML_NODE(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeType());
}

unsigned int irr_IIrrXMLReader_getAttributeCount(irr_IIrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeCount();
}

const char* irr_IIrrXMLReader_getAttributeName(irr_IIrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeName(idx);
}

const char* irr_IIrrXMLReader_getAttributeValue(irr_IIrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValue(idx);
}

const char* irr_IIrrXMLReader_getAttributeValue(irr_IIrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValue(name);
}

const char* irr_IIrrXMLReader_getAttributeValueSafe(irr_IIrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueSafe(name);
}

int irr_IIrrXMLReader_getAttributeValueAsInt(irr_IIrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsInt(name);
}

int irr_IIrrXMLReader_getAttributeValueAsInt(irr_IIrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsInt(idx);
}

float irr_IIrrXMLReader_getAttributeValueAsFloat(irr_IIrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsFloat(name);
}

float irr_IIrrXMLReader_getAttributeValueAsFloat(irr_IIrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsFloat(idx);
}

const char* irr_IIrrXMLReader_getNodeName(irr_IIrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeName();
}

const char* irr_IIrrXMLReader_getNodeData(irr_IIrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeData();
}

bool irr_IIrrXMLReader_isEmptyElement(irr_IIrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->isEmptyElement();
}

ETEXT_FORMAT irr_IIrrXMLReader_getSourceFormat(irr_IIrrXMLReader* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getSourceFormat());
}

ETEXT_FORMAT irr_IIrrXMLReader_getParserFormat(irr_IIrrXMLReader* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getParserFormat());
}
