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
#include <stdio.h>

//! Enumeration of all supported source text file formats
enum ETEXT_FORMAT {
	//! ASCII, file without byte order mark, or not a text file
	ETF_ASCII,

	//! UTF-8 format
	ETF_UTF8,

	//! UTF-16 format, big endian
	ETF_UTF16_BE,

	//! UTF-16 format, little endian
	ETF_UTF16_LE,

	//! UTF-32 format, big endian
	ETF_UTF32_BE,

	//! UTF-32 format, little endian
	ETF_UTF32_LE
};


//! Enumeration for all xml nodes which are parsed by IrrXMLReader
enum EXML_NODE {
	//! No xml node. This is usually the node if you did not read anything yet.
	EXN_NONE,

	//! An xml element such as &lt;foo&gt;
	EXN_ELEMENT,

	//! End of an xml element such as &lt;/foo&gt;
	EXN_ELEMENT_END,

	//! Text within an xml element: &lt;foo&gt; this is the text. &lt;/foo&gt;
	//! Also text between 2 xml elements: &lt;/foo&gt; this is the text. &lt;foo&gt;
	EXN_TEXT,

	//! An xml comment like &lt;!-- I am a comment --&gt; or a DTD definition.
	EXN_COMMENT,

	//! An xml cdata section like &lt;![CDATA[ this is some CDATA ]]&gt;
	EXN_CDATA,

	//! Unknown element.
	EXN_UNKNOWN
};

struct irr_IFileReadCallBack;

CIRRLICHT_API int irr_IFileReadCallBack_read(irr_IFileReadCallBack* callback, void* buffer, int sizeToRead);
CIRRLICHT_API long irr_IFileReadCallBack_getSize(irr_IFileReadCallBack* callback);

struct irr_IrrXMLReader;
struct irr_IrrXMLReaderUTF16;
struct irr_IrrXMLReaderUTF32;

CIRRLICHT_API bool irr_IrrXMLReader_read(irr_IrrXMLReader* reader);
CIRRLICHT_API EXML_NODE irr_IrrXMLReader_getNodeType(irr_IrrXMLReader* reader);
CIRRLICHT_API unsigned int irr_IrrXMLReader_getAttributeCount(irr_IrrXMLReader* reader);
CIRRLICHT_API const char* irr_IrrXMLReader_getAttributeName(irr_IrrXMLReader* reader, int idx);
CIRRLICHT_API const char* irr_IrrXMLReader_getAttributeValue(irr_IrrXMLReader* reader, int idx);
CIRRLICHT_API const char* irr_IrrXMLReader_getAttributeValue2(irr_IrrXMLReader* reader, const char* name);
CIRRLICHT_API const char* irr_IrrXMLReader_getAttributeValueSafe(irr_IrrXMLReader* reader, const char* name);
CIRRLICHT_API int irr_IrrXMLReader_getAttributeValueAsInt(irr_IrrXMLReader* reader, const char* name);
CIRRLICHT_API int irr_IrrXMLReader_getAttributeValueAsInt2(irr_IrrXMLReader* reader, int idx);
CIRRLICHT_API float irr_IrrXMLReader_getAttributeValueAsFloat(irr_IrrXMLReader* reader, const char* name);
CIRRLICHT_API float irr_IrrXMLReader_getAttributeValueAsFloat2(irr_IrrXMLReader* reader, int idx);
CIRRLICHT_API const char* irr_IrrXMLReader_getNodeName(irr_IrrXMLReader* reader);
CIRRLICHT_API const char* irr_IrrXMLReader_getNodeData(irr_IrrXMLReader* reader);
CIRRLICHT_API bool irr_IrrXMLReader_isEmptyElement(irr_IrrXMLReader* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReader_getSourceFormat(irr_IrrXMLReader* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReader_getParserFormat(irr_IrrXMLReader* reader);

CIRRLICHT_API bool irr_IrrXMLReaderUTF16_read(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API EXML_NODE irr_IrrXMLReaderUTF16_getNodeType(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF16_getAttributeCount(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getAttributeName(irr_IrrXMLReaderUTF16* reader, int idx);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getAttributeValue(irr_IrrXMLReaderUTF16* reader, int idx);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getAttributeValue2(irr_IrrXMLReaderUTF16* reader, unsigned short name);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getAttributeValueSafe(irr_IrrXMLReaderUTF16* reader, unsigned short name);
CIRRLICHT_API int irr_IrrXMLReaderUTF16_getAttributeValueAsInt(irr_IrrXMLReaderUTF16* reader, unsigned short name);
CIRRLICHT_API int irr_IrrXMLReaderUTF16_getAttributeValueAsInt2(irr_IrrXMLReaderUTF16* reader, int idx);
CIRRLICHT_API float irr_IrrXMLReaderUTF16_getAttributeValueAsFloat(irr_IrrXMLReaderUTF16* reader, unsigned short name);
CIRRLICHT_API float irr_IrrXMLReaderUTF16_getAttributeValueAsFloat2(irr_IrrXMLReaderUTF16* reader, int idx);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getNodeName(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API unsigned short irr_IrrXMLReaderUTF16_getNodeData(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API bool irr_IrrXMLReaderUTF16_isEmptyElement(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReaderUTF16_getSourceFormat(irr_IrrXMLReaderUTF16* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReaderUTF16_getParserFormat(irr_IrrXMLReaderUTF16* reader);

CIRRLICHT_API bool irr_IrrXMLReaderUTF32_read(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API EXML_NODE irr_IrrXMLReaderUTF32_getNodeType(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getAttributeCount(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getAttributeName(irr_IrrXMLReaderUTF32* reader, int idx);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getAttributeValue(irr_IrrXMLReaderUTF32* reader, int idx);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getAttributeValue2(irr_IrrXMLReaderUTF32* reader, unsigned int name);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getAttributeValueSafe(irr_IrrXMLReaderUTF32* reader, unsigned int name);
CIRRLICHT_API int irr_IrrXMLReaderUTF32_getAttributeValueAsInt(irr_IrrXMLReaderUTF32* reader, unsigned int name);
CIRRLICHT_API int irr_IrrXMLReaderUTF32_getAttributeValueAsInt2(irr_IrrXMLReaderUTF32* reader, int idx);
CIRRLICHT_API float irr_IrrXMLReaderUTF32_getAttributeValueAsFloat(irr_IrrXMLReaderUTF32* reader, unsigned int name);
CIRRLICHT_API float irr_IrrXMLReaderUTF32_getAttributeValueAsFloat2(irr_IrrXMLReaderUTF32* reader, int idx);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getNodeName(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API unsigned int irr_IrrXMLReaderUTF32_getNodeData(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API bool irr_IrrXMLReaderUTF32_isEmptyElement(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReaderUTF32_getSourceFormat(irr_IrrXMLReaderUTF32* reader);
CIRRLICHT_API ETEXT_FORMAT irr_IrrXMLReaderUTF32_getParserFormat(irr_IrrXMLReaderUTF32* reader);

CIRRLICHT_API irr_IrrXMLReader* irr_createIrrXMLReader(const char* filename);
CIRRLICHT_API irr_IrrXMLReader* irr_createIrrXMLReader_2(FILE* file);
CIRRLICHT_API irr_IrrXMLReader* irr_createIrrXMLReader_3(irr_IFileReadCallBack* callback, bool deleteCallback = false);
CIRRLICHT_API irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16(const char* filename);
CIRRLICHT_API irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16_2(FILE* file);
CIRRLICHT_API irr_IrrXMLReaderUTF16* irr_createIrrXMLReaderUTF16_3(irr_IFileReadCallBack* callback, bool deleteCallback = false);
CIRRLICHT_API irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32(const char* filename);
CIRRLICHT_API irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32_2(FILE* file);
CIRRLICHT_API irr_IrrXMLReaderUTF32* irr_createIrrXMLReaderUTF32_3(irr_IFileReadCallBack* callback, bool deleteCallback = false);
