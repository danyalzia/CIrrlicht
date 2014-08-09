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

#include "irrtypes.h"

//! FileSystemType: which Filesystem should be used for e.g. browsing
enum EFileSystemType
{
	FILESYSTEM_NATIVE = 0,	// Native OS FileSystem
	FILESYSTEM_VIRTUAL	// Virtual FileSystem
};

//! Contains the different types of archives
enum E_FILE_ARCHIVE_TYPE
{
	//! A PKZIP archive
	EFAT_ZIP     = MAKE_CIRR_ID('Z','I','P', 0),

	//! A gzip archive
	EFAT_GZIP    = MAKE_CIRR_ID('g','z','i','p'),

	//! A virtual directory
	EFAT_FOLDER  = MAKE_CIRR_ID('f','l','d','r'),

	//! An ID Software PAK archive
	EFAT_PAK     = MAKE_CIRR_ID('P','A','K', 0),

	//! A Nebula Device archive
	EFAT_NPK     = MAKE_CIRR_ID('N','P','K', 0),

	//! A Tape ARchive
	EFAT_TAR     = MAKE_CIRR_ID('T','A','R', 0),

	//! A wad Archive, Quake2, Halflife
	EFAT_WAD     = MAKE_CIRR_ID('W','A','D', 0),

	//! The type of this archive is unknown
	EFAT_UNKNOWN = MAKE_CIRR_ID('u','n','k','n')
};
