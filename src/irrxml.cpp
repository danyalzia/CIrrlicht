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
bool irr_IrrXMLReader_read(irr_IrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->read();
}

EXML_NODE irr_IrrXMLReader_getNodeType(irr_IrrXMLReader* reader) {
	return EXML_NODE(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeType());
}

unsigned int irr_IrrXMLReader_getAttributeCount(irr_IrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeCount();
}

const char* irr_IrrXMLReader_getAttributeName(irr_IrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeName(idx);
}

const char* irr_IrrXMLReader_getAttributeValue(irr_IrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValue(idx);
}

const char* irr_IrrXMLReader_getAttributeValue2(irr_IrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValue(name);
}

const char* irr_IrrXMLReader_getAttributeValueSafe(irr_IrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueSafe(name);
}

int irr_IrrXMLReader_getAttributeValueAsInt(irr_IrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsInt(name);
}

int irr_IrrXMLReader_getAttributeValueAsInt2(irr_IrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsInt(idx);
}

float irr_IrrXMLReader_getAttributeValueAsFloat(irr_IrrXMLReader* reader, const char* name) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsFloat(name);
}

float irr_IrrXMLReader_getAttributeValueAsFloat2(irr_IrrXMLReader* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getAttributeValueAsFloat(idx);
}

const char* irr_IrrXMLReader_getNodeName(irr_IrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeName();
}

const char* irr_IrrXMLReader_getNodeData(irr_IrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getNodeData();
}

bool irr_IrrXMLReader_isEmptyElement(irr_IrrXMLReader* reader) {
	return reinterpret_cast<irr::io::IrrXMLReader*>(reader)->isEmptyElement();
}

ETEXT_FORMAT irr_IrrXMLReader_getSourceFormat(irr_IrrXMLReader* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getSourceFormat());
}

ETEXT_FORMAT irr_IrrXMLReader_getParserFormat(irr_IrrXMLReader* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReader*>(reader)->getParserFormat());
}


/// irr_IIrrXMLReaderUTF16
bool irr_IrrXMLReaderUTF16_read(irr_IrrXMLReaderUTF16* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->read();
}

EXML_NODE irr_IrrXMLReaderUTF16_getNodeType(irr_IrrXMLReaderUTF16* reader) {
	return EXML_NODE(reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getNodeType());
}

unsigned int irr_IrrXMLReaderUTF16_getAttributeCount(irr_IrrXMLReaderUTF16* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeCount();
}

unsigned short irr_IrrXMLReaderUTF16_getAttributeName(irr_IrrXMLReaderUTF16* reader, int idx) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeName(idx);
	return temp->c;
}

unsigned short irr_IrrXMLReaderUTF16_getAttributeValue(irr_IrrXMLReaderUTF16* reader, int idx) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValue(idx);
	return temp->c;
}

unsigned short irr_IrrXMLReaderUTF16_getAttributeValue2(irr_IrrXMLReaderUTF16* reader, unsigned short name) {
	const irr::io::char16* c;
	c = new irr::io::char16(name);
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValue(c);
	return temp->c;
}

unsigned short irr_IrrXMLReaderUTF16_getAttributeValueSafe(irr_IrrXMLReaderUTF16* reader, unsigned short name) {
	const irr::io::char16* c;
	c = new irr::io::char16(name);
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValueSafe(c);
	return temp->c;
}

int irr_IrrXMLReaderUTF16_getAttributeValueAsInt(irr_IrrXMLReaderUTF16* reader, unsigned short name) {
	const irr::io::char16* c;
	c = new irr::io::char16(name);
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValueAsInt(c);
}

int irr_IrrXMLReaderUTF16_getAttributeValueAsInt2(irr_IrrXMLReaderUTF16* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValueAsInt(idx);
}

float irr_IrrXMLReaderUTF16_getAttributeValueAsFloat(irr_IrrXMLReaderUTF16* reader, unsigned short name) {
	const irr::io::char16* c;
	c = new irr::io::char16(name);
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValueAsFloat(c);
}

float irr_IrrXMLReaderUTF16_getAttributeValueAsFloat2(irr_IrrXMLReaderUTF16* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getAttributeValueAsFloat(idx);
}

unsigned short irr_IrrXMLReaderUTF16_getNodeName(irr_IrrXMLReaderUTF16* reader) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getNodeName();
	return temp->c;
}

unsigned short irr_IrrXMLReaderUTF16_getNodeData(irr_IrrXMLReaderUTF16* reader) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getNodeData();
	return temp->c;
}

bool irr_IrrXMLReaderUTF16_isEmptyElement(irr_IrrXMLReaderUTF16* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->isEmptyElement();
}

ETEXT_FORMAT irr_IrrXMLReaderUTF16_getSourceFormat(irr_IrrXMLReaderUTF16* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getSourceFormat());
}

ETEXT_FORMAT irr_IrrXMLReaderUTF16_getParserFormat(irr_IrrXMLReaderUTF16* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReaderUTF16*>(reader)->getParserFormat());
}


/// irr_IIrrXMLReaderUTF32
bool irr_IrrXMLReaderUTF32_read(irr_IrrXMLReaderUTF32* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->read();
}

EXML_NODE irr_IrrXMLReaderUTF32_getNodeType(irr_IrrXMLReaderUTF32* reader) {
	return EXML_NODE(reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getNodeType());
}

unsigned int irr_IrrXMLReaderUTF32_getAttributeCount(irr_IrrXMLReaderUTF32* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeCount();
}

unsigned int irr_IrrXMLReaderUTF32_getAttributeName(irr_IrrXMLReaderUTF32* reader, int idx) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeName(idx);
	return temp->c;
}

unsigned int irr_IrrXMLReaderUTF32_getAttributeValue(irr_IrrXMLReaderUTF32* reader, int idx) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValue(idx);
	return temp->c;
}

unsigned int irr_IrrXMLReaderUTF32_getAttributeValue2(irr_IrrXMLReaderUTF32* reader, unsigned int name) {
	const irr::io::char32* c;
	c = new irr::io::char32(name);
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValue(c);
	return temp->c;
}

unsigned int irr_IrrXMLReaderUTF32_getAttributeValueSafe(irr_IrrXMLReaderUTF32* reader, unsigned int name) {
	const irr::io::char32* c;
	c = new irr::io::char32(name);
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValueSafe(c);
	return temp->c;
}

int irr_IrrXMLReaderUTF32_getAttributeValueAsInt(irr_IrrXMLReaderUTF32* reader, unsigned int name) {
	const irr::io::char32* c;
	c = new irr::io::char32(name);
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValueAsInt(c);
}

int irr_IrrXMLReaderUTF32_getAttributeValueAsInt2(irr_IrrXMLReaderUTF32* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValueAsInt(idx);
}

float irr_IrrXMLReaderUTF32_getAttributeValueAsFloat(irr_IrrXMLReaderUTF32* reader, unsigned int name) {
	const irr::io::char32* c;
	c = new irr::io::char32(name);
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValueAsFloat(c);
}

float irr_IrrXMLReaderUTF32_getAttributeValueAsFloat2(irr_IrrXMLReaderUTF32* reader, int idx) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getAttributeValueAsFloat(idx);
}

unsigned int irr_IrrXMLReaderUTF32_getNodeName(irr_IrrXMLReaderUTF32* reader) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getNodeName();
	return temp->c;
}

unsigned int irr_IrrXMLReaderUTF32_getNodeData(irr_IrrXMLReaderUTF32* reader) {
	auto temp = reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getNodeData();
	return temp->c;
}

bool irr_IrrXMLReaderUTF32_isEmptyElement(irr_IrrXMLReaderUTF32* reader) {
	return reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->isEmptyElement();
}

ETEXT_FORMAT irr_IrrXMLReaderUTF32_getSourceFormat(irr_IrrXMLReaderUTF32* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getSourceFormat());
}

ETEXT_FORMAT irr_IrrXMLReaderUTF32_getParserFormat(irr_IrrXMLReaderUTF32* reader) {
	return ETEXT_FORMAT(reinterpret_cast<irr::io::IrrXMLReaderUTF32*>(reader)->getParserFormat());
}

// Functions
irr_IrrXMLReader* irr_createIrrXMLReader(const char* filename) {
	return reinterpret_cast<irr_IrrXMLReader*>(irr::io::createIrrXMLReader(filename));
}

irr_IrrXMLReader* irr_createIrrXMLReader_2(FILE* file) {
	return reinterpret_cast<irr_IrrXMLReader*>(irr::io::createIrrXMLReader(file));
}

irr_IrrXMLReader* irr_createIrrXMLReader_3(irr_IFileReadCallBack* callback, bool deleteCallback) {
	return reinterpret_cast<irr_IrrXMLReader*>(irr::io::createIrrXMLReader(reinterpret_cast<irr::io::IFileReadCallBack*>(callback), deleteCallback));
}

irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16(const char* filename) {
	return reinterpret_cast<irr_IrrXMLReaderUTF16*>(irr::io::createIrrXMLReaderUTF16(filename));
}

irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16_2(FILE* file) {
	return reinterpret_cast<irr_IrrXMLReaderUTF16*>(irr::io::createIrrXMLReaderUTF16(file));
}

irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16_3(irr_IFileReadCallBack* callback, bool deleteCallback) {
	return reinterpret_cast<irr_IrrXMLReaderUTF16*>(irr::io::createIrrXMLReaderUTF16(reinterpret_cast<irr::io::IFileReadCallBack*>(callback), deleteCallback));
}

irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32(const char* filename) {
	return reinterpret_cast<irr_IrrXMLReaderUTF32*>(irr::io::createIrrXMLReaderUTF32(filename));
}

irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32_2(FILE* file) {
	return reinterpret_cast<irr_IrrXMLReaderUTF32*>(irr::io::createIrrXMLReaderUTF32(file));
}

irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32_3(irr_IFileReadCallBack* callback, bool deleteCallback) {
	return reinterpret_cast<irr_IrrXMLReaderUTF32*>(irr::io::createIrrXMLReaderUTF32(reinterpret_cast<irr::io::IFileReadCallBack*>(callback), deleteCallback));
}

