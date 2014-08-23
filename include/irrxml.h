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

//! Enumeration of all supported source text file formats
enum ETEXT_FORMAT
{
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
enum EXML_NODE
{
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

int irr_IFileReadCallBack_read(irr_IFileReadCallBack* callback, void* buffer, int sizeToRead);
long irr_IFileReadCallBack_getSize(irr_IFileReadCallBack* callback);

struct irr_IIrrXMLReader;

bool irr_IIrrXMLReader_read(irr_IIrrXMLReader* reader);
EXML_NODE irr_IIrrXMLReader_getNodeType(irr_IIrrXMLReader* reader);
unsigned int irr_IIrrXMLReader_getAttributeCount(irr_IIrrXMLReader* reader);
const char* irr_IIrrXMLReader_getAttributeName(irr_IIrrXMLReader* reader, int idx);
const char* irr_IIrrXMLReader_getAttributeValue(irr_IIrrXMLReader* reader, int idx);
const char* irr_IIrrXMLReader_getAttributeValue(irr_IIrrXMLReader* reader, const char* name);
const char* irr_IIrrXMLReader_getAttributeValueSafe(irr_IIrrXMLReader* reader, const char* name);
int irr_IIrrXMLReader_getAttributeValueAsInt(irr_IIrrXMLReader* reader, const char* name);
int irr_IIrrXMLReader_getAttributeValueAsInt(irr_IIrrXMLReader* reader, int idx);
float irr_IIrrXMLReader_getAttributeValueAsFloat(irr_IIrrXMLReader* reader, const char* name);
float irr_IIrrXMLReader_getAttributeValueAsFloat(irr_IIrrXMLReader* reader, int idx);
const char* irr_IIrrXMLReader_getNodeName(irr_IIrrXMLReader* reader);
const char* irr_IIrrXMLReader_getNodeData(irr_IIrrXMLReader* reader);
bool irr_IIrrXMLReader_isEmptyElement(irr_IIrrXMLReader* reader);
ETEXT_FORMAT irr_IIrrXMLReader_getSourceFormat(irr_IIrrXMLReader* reader);
ETEXT_FORMAT irr_IIrrXMLReader_getParserFormat(irr_IIrrXMLReader* reader);
