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

#include <IFileArchive.h>
#include "filearchive.h"

/// IFileArchive
irr_IReadFile* irr_IFileArchive_createAndOpenFile(irr_IFileArchive* filearchive, const char* filename) {
	return reinterpret_cast<irr_IReadFile*>(reinterpret_cast<irr::io::IFileArchive*>(filearchive)->createAndOpenFile(filename));
}

irr_IReadFile* irr_IFileArchive_createAndOpenFile2(irr_IFileArchive* filearchive, unsigned int index) {
	return reinterpret_cast<irr_IReadFile*>(reinterpret_cast<irr::io::IFileArchive*>(filearchive)->createAndOpenFile(index));
}

const irr_IFileList* irr_IFileArchive_getFileList(irr_IFileArchive* filearchive) {
	return reinterpret_cast<const irr_IFileList*>(reinterpret_cast<irr::io::IFileArchive*>(filearchive)->getFileList());
}

E_FILE_ARCHIVE_TYPE irr_IFileArchive_getType(irr_IFileArchive* filearchive) {
	return E_FILE_ARCHIVE_TYPE(reinterpret_cast<irr::io::IFileArchive*>(filearchive)->getType());	
}

const char* irr_IFileArchive_getArchiveName(irr_IFileArchive* filearchive) {
	auto temp = reinterpret_cast<irr::io::IFileArchive*>(filearchive)->getArchiveName();
	return temp.c_str();
}

void irr_IFileArchive_setPassword(irr_IFileArchive* filearchive, const char* pass) {
	reinterpret_cast<irr::io::IFileArchive*>(filearchive)->Password = pass;
}

const char* irr_IFileArchive_getPassword(irr_IFileArchive* filearchive) {
	return reinterpret_cast<irr::io::IFileArchive*>(filearchive)->Password.c_str();
}

/// IArchiveLoader
bool irr_IArchiveLoader_isALoadableFileFormat(irr_IArchiveLoader* loader, const char* filename) {
	return reinterpret_cast<irr::io::IArchiveLoader*>(loader)->isALoadableFileFormat(filename);
}

bool irr_IArchiveLoader_isALoadableFileFormat2(irr_IArchiveLoader* loader, irr_IReadFile* file) {
	return reinterpret_cast<irr::io::IArchiveLoader*>(loader)->isALoadableFileFormat(reinterpret_cast<irr::io::IReadFile*>(file));
}

bool irr_IArchiveLoader_isALoadableFileFormat3(irr_IArchiveLoader* loader, E_FILE_ARCHIVE_TYPE fileType) {
	return reinterpret_cast<irr::io::IArchiveLoader*>(loader)->isALoadableFileFormat(irr::io::E_FILE_ARCHIVE_TYPE(fileType));
}

irr_IFileArchive* irr_IArchiveLoader_createArchive(irr_IArchiveLoader* loader, const char* filename, bool ignoreCase, bool ignorePaths) {
	return reinterpret_cast<irr_IFileArchive*>(reinterpret_cast<irr::io::IArchiveLoader*>(loader)->createArchive(filename, ignoreCase, ignorePaths));
}

irr_IFileArchive* irr_IArchiveLoader_createArchive2(irr_IArchiveLoader* loader, irr_IReadFile* file, bool ignoreCase, bool ignorePaths) {
	return reinterpret_cast<irr_IFileArchive*>(reinterpret_cast<irr::io::IArchiveLoader*>(loader)->createArchive(reinterpret_cast<irr::io::IReadFile*>(file), ignoreCase, ignorePaths));
}

