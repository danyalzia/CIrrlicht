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

#include <IFileSystem.h>
#include "filesystem.h"

irr_IReadFile* irr_IFileSystem_createAndOpenFile(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr_IReadFile*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createAndOpenFile(filename));
}

irr_IReadFile* irr_IFileSystem_createMemoryReadFile(irr_IFileSystem* filesys, const void* memory, int len, const char* fileName, bool deleteMemoryWhenDropped) {
	return reinterpret_cast<irr_IReadFile*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createMemoryReadFile(memory, len, fileName, deleteMemoryWhenDropped));
}

irr_IReadFile* irr_IFileSystem_createLimitReadFile(irr_IFileSystem* filesys, const char* fileName, irr_IReadFile* alreadyOpenedFile, long pos, long areaSize) {
	return reinterpret_cast<irr_IReadFile*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createLimitReadFile(fileName, reinterpret_cast<irr::io::IReadFile*>(alreadyOpenedFile), pos, areaSize));
}

irr_IWriteFile* irr_IFileSystem_createMemoryWriteFile(irr_IFileSystem* filesys, void* memory, int len, const char* fileName, bool deleteMemoryWhenDropped) {
	return reinterpret_cast<irr_IWriteFile*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createMemoryWriteFile(memory, len, fileName, deleteMemoryWhenDropped));
}

irr_IWriteFile* irr_IFileSystem_createAndWriteFile(irr_IFileSystem* filesys, const char* filename, bool append) {
	return reinterpret_cast<irr_IWriteFile*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createAndWriteFile(filename, append));
}

bool irr_IFileSystem_addFileArchive(irr_IFileSystem* filesys, const char* filename, bool ignoreCase,
			bool ignorePaths,
			E_FILE_ARCHIVE_TYPE archiveType,
			const char* password,
			irr_IFileArchive** retArchive) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->addFileArchive(filename, ignoreCase, ignorePaths, irr::io::E_FILE_ARCHIVE_TYPE(archiveType), password, reinterpret_cast<irr::io::IFileArchive**>(retArchive));
}

bool irr_IFileSystem_addFileArchive2(irr_IFileSystem* filesys, irr_IReadFile* file, bool ignoreCase,
			bool ignorePaths,
			E_FILE_ARCHIVE_TYPE archiveType,
			const char* password,
			irr_IFileArchive** retArchive) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->addFileArchive(reinterpret_cast<irr::io::IReadFile*>(file), ignoreCase, ignorePaths, irr::io::E_FILE_ARCHIVE_TYPE(archiveType), password, reinterpret_cast<irr::io::IFileArchive**>(retArchive));
}

bool irr_IFileSystem_addFileArchive3(irr_IFileSystem* filesys, irr_IFileArchive* archive) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->addFileArchive(reinterpret_cast<irr::io::IFileArchive*>(archive));
}

unsigned int irr_IFileSystem_getFileArchiveCount(irr_IFileSystem* filesys) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->getFileArchiveCount();
}

bool irr_IFileSystem_removeFileArchive(irr_IFileSystem* filesys, unsigned int index) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->removeFileArchive(index);
}

bool irr_IFileSystem_removeFileArchive2(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->removeFileArchive(filename);
}

bool irr_IFileSystem_removeFileArchive3(irr_IFileSystem* filesys, const irr_IFileArchive* archive) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->removeFileArchive(reinterpret_cast<const irr::io::IFileArchive*>(archive));
}

bool irr_IFileSystem_moveFileArchive(irr_IFileSystem* filesys, unsigned int sourceIndex, int relative) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->moveFileArchive(sourceIndex, relative);
}

irr_IFileArchive* irr_IFileSystem_getFileArchive(irr_IFileSystem* filesys, unsigned int index) {
	return reinterpret_cast<irr_IFileArchive*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->getFileArchive(index));
}

void irr_IFileSystem_addArchiveLoader(irr_IFileSystem* filesys, irr_IArchiveLoader* loader) {
	reinterpret_cast<irr::io::IFileSystem*>(filesys)->addArchiveLoader(reinterpret_cast<irr::io::IArchiveLoader*>(loader));
}

unsigned int irr_IFileSystem_getArchiveLoaderCount(irr_IFileSystem* filesys) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->getArchiveLoaderCount();
}

irr_IArchiveLoader* irr_IFileSystem_getArchiveLoader(irr_IFileSystem* filesys, unsigned int index) {
	return reinterpret_cast<irr_IArchiveLoader*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->getArchiveLoader(index));
}

const char* irr_IFileSystem_getWorkingDirectory(irr_IFileSystem* filesys) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->getWorkingDirectory().c_str();
}

bool irr_IFileSystem_changeWorkingDirectoryTo(irr_IFileSystem* filesys, const char* newDirectory) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->changeWorkingDirectoryTo(newDirectory);
}

char* irr_IFileSystem_getAbsolutePath(irr_IFileSystem* filesys, const char* filename) {
	irr::io::path filenametemp = filename;
	auto temp = reinterpret_cast<irr::io::IFileSystem*>(filesys)->getAbsolutePath(filenametemp).c_str();
	char* str = const_cast<char*>(temp);
	return str;
}

char* irr_IFileSystem_getFileDir(irr_IFileSystem* filesys, const char* filename) {
	irr::io::path filenametemp = filename;
	auto temp = reinterpret_cast<irr::io::IFileSystem*>(filesys)->getFileDir(filenametemp).c_str();
	char* str = const_cast<char*>(temp);
	return str;
}

char* irr_IFileSystem_getFileBasename(irr_IFileSystem* filesys, const char* filename, bool keepExtension) {
	irr::io::path filenametemp = filename;
	auto temp = reinterpret_cast<irr::io::IFileSystem*>(filesys)->getFileBasename(filenametemp, keepExtension).c_str();
	char* str = const_cast<char*>(temp);
	return str;
}

char* irr_IFileSystem_flattenFilename(irr_IFileSystem* filesys, char* directory, const char* root) {
	irr::io::path dirtemp = directory;
	irr::io::path roottemp = root;
	auto temp = reinterpret_cast<irr::io::IFileSystem*>(filesys)->flattenFilename(dirtemp, roottemp).c_str();
	char* str = const_cast<char*>(temp);
	return str;
}

char* irr_IFileSystem_getRelativeFilename(irr_IFileSystem* filesys, const char* filename, const char* directory) {
	auto temp = reinterpret_cast<irr::io::IFileSystem*>(filesys)->getRelativeFilename(filename, directory).c_str();
	char* str = const_cast<char*>(temp);
	return str;
}

irr_IFileList* irr_IFileSystem_createFileList(irr_IFileSystem* filesys) {
	return reinterpret_cast<irr_IFileList*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createFileList());
}

irr_IFileList* irr_IFileSystem_createEmptyFileList(irr_IFileSystem* filesys, const char* path, bool ignoreCase, bool ignorePaths) {
	return reinterpret_cast<irr_IFileList*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createEmptyFileList(path, ignoreCase, ignorePaths));
}

EFileSystemType irr_IFileSystem_setFileListSystem(irr_IFileSystem* filesys, EFileSystemType listType) {
	return EFileSystemType(reinterpret_cast<irr::io::IFileSystem*>(filesys)->setFileListSystem(irr::io::EFileSystemType(listType)));
}

bool irr_IFileSystem_existFile(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr::io::IFileSystem*>(filesys)->existFile(filename);
}

irr_IXMLReader* irr_IFileSystem_createXMLReader(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr_IXMLReader*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLReader(filename));
}

irr_IXMLReader* irr_IFileSystem_createXMLReader2(irr_IFileSystem* filesys, irr_IReadFile* file) {
	return reinterpret_cast<irr_IXMLReader*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLReader(reinterpret_cast<irr::io::IReadFile*>(file)));
}

irr_IXMLReaderUTF8* irr_IFileSystem_createXMLReaderUTF8(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr_IXMLReaderUTF8*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLReaderUTF8(filename));
}

irr_IXMLReaderUTF8* irr_IFileSystem_createXMLReaderUTF82(irr_IFileSystem* filesys, irr_IReadFile* file) {
	return reinterpret_cast<irr_IXMLReaderUTF8*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLReaderUTF8(reinterpret_cast<irr::io::IReadFile*>(file)));
}

irr_IXMLWriter* irr_IFileSystem_createXMLWriter(irr_IFileSystem* filesys, const char* filename) {
	return reinterpret_cast<irr_IXMLWriter*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLWriter(filename));
}

irr_IXMLWriter* irr_IFileSystem_createXMLWriter2(irr_IFileSystem* filesys, irr_IWriteFile* file) {
	return reinterpret_cast<irr_IXMLWriter*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createXMLWriter(reinterpret_cast<irr::io::IWriteFile*>(file)));
}

irr_IAttributes* irr_IFileSystem_createEmptyAttributes(irr_IFileSystem* filesys, irr_IVideoDriver* driver) {
	return reinterpret_cast<irr_IAttributes*>(reinterpret_cast<irr::io::IFileSystem*>(filesys)->createEmptyAttributes(reinterpret_cast<irr::video::IVideoDriver*>(driver)));
}
