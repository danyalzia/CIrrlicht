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
#include "filearchive.h"

struct irr_IFileSystem;
struct irr_IReadFile;
struct irr_IWriteFile;
struct irr_IFileArchive;
struct irr_IArchiveLoader;
struct irr_IFileList;
struct irr_IXMLReader;
struct irr_IXMLReaderUTF8;
struct irr_IXMLWriter;
struct irr_IAttributes;
struct irr_IVideoDriver;

CIRRLICHT_API irr_IReadFile* irr_IFileSystem_createAndOpenFile(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API irr_IReadFile* irr_IFileSystem_createMemoryReadFile(irr_IFileSystem* filesys, const void* memory, int len, const char* fileName, bool deleteMemoryWhenDropped=false);
CIRRLICHT_API irr_IReadFile* irr_IFileSystem_createLimitReadFile(irr_IFileSystem* filesys, const char* fileName, irr_IReadFile* alreadyOpenedFile, long pos, long areaSize);
CIRRLICHT_API irr_IWriteFile* irr_IFileSystem_createMemoryWriteFile(irr_IFileSystem* filesys, void* memory, int len, const char* fileName, bool deleteMemoryWhenDropped=false);
CIRRLICHT_API irr_IWriteFile* irr_IFileSystem_createAndWriteFile(irr_IFileSystem* filesys, const char* filename, bool append=false);
CIRRLICHT_API bool irr_IFileSystem_addFileArchive(irr_IFileSystem* filesys, const char* filename, bool ignoreCase=true,
			bool ignorePaths=true,
			E_FILE_ARCHIVE_TYPE archiveType=EFAT_UNKNOWN,
			const char* password="",
			irr_IFileArchive** retArchive=0);
CIRRLICHT_API bool irr_IFileSystem_addFileArchive2(irr_IFileSystem* filesys, irr_IReadFile* file, bool ignoreCase=true,
			bool ignorePaths=true,
			E_FILE_ARCHIVE_TYPE archiveType=EFAT_UNKNOWN,
			const char* password="",
			irr_IFileArchive** retArchive=0);
CIRRLICHT_API bool irr_IFileSystem_addFileArchive3(irr_IFileSystem* filesys, irr_IFileArchive* archive);
CIRRLICHT_API unsigned int irr_IFileSystem_getFileArchiveCount(irr_IFileSystem* filesys);
CIRRLICHT_API bool irr_IFileSystem_removeFileArchive(irr_IFileSystem* filesys, unsigned int index);
CIRRLICHT_API bool irr_IFileSystem_removeFileArchive2(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API bool irr_IFileSystem_removeFileArchive3(irr_IFileSystem* filesys, const irr_IFileArchive* archive);
CIRRLICHT_API bool irr_IFileSystem_moveFileArchive(irr_IFileSystem* filesys, unsigned int sourceIndex, int relative);
CIRRLICHT_API irr_IFileArchive* irr_IFileSystem_getFileArchive(irr_IFileSystem* filesys, unsigned int index);
CIRRLICHT_API void irr_IFileSystem_addArchiveLoader(irr_IFileSystem* filesys, irr_IArchiveLoader* loader);
CIRRLICHT_API unsigned int irr_IFileSystem_getArchiveLoaderCount(irr_IFileSystem* filesys);
CIRRLICHT_API irr_IArchiveLoader* irr_IFileSystem_getArchiveLoader(irr_IFileSystem* filesys, unsigned int index);
CIRRLICHT_API const char* irr_IFileSystem_getWorkingDirectory(irr_IFileSystem* filesys);
CIRRLICHT_API bool irr_IFileSystem_changeWorkingDirectoryTo(irr_IFileSystem* filesys, const char* newDirectory);
CIRRLICHT_API char* irr_IFileSystem_getAbsolutePath(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API char* irr_IFileSystem_getFileDir(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API char* irr_IFileSystem_getFileBasename(irr_IFileSystem* filesys, const char* filename, bool keepExtension=true);
CIRRLICHT_API char* irr_IFileSystem_flattenFilename(irr_IFileSystem* filesys, char* directory, const char* root="/");
CIRRLICHT_API char* irr_IFileSystem_getRelativeFilename(irr_IFileSystem* filesys, const char* filename, const char* directory);
CIRRLICHT_API irr_IFileList* irr_IFileSystem_createFileList(irr_IFileSystem* filesys);
CIRRLICHT_API irr_IFileList* irr_IFileSystem_createEmptyFileList(irr_IFileSystem* filesys, const char* path, bool ignoreCase, bool ignorePaths);
CIRRLICHT_API EFileSystemType irr_IFileSystem_setFileListSystem(irr_IFileSystem* filesys, EFileSystemType listType);
CIRRLICHT_API bool irr_IFileSystem_existFile(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API irr_IXMLReader* irr_IFileSystem_createXMLReader(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API irr_IXMLReader* irr_IFileSystem_createXMLReader2(irr_IFileSystem* filesys, irr_IReadFile* file);
CIRRLICHT_API irr_IXMLReaderUTF8* irr_IFileSystem_createXMLReaderUTF8(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API irr_IXMLReaderUTF8* irr_IFileSystem_createXMLReaderUTF82(irr_IFileSystem* filesys, irr_IReadFile* file);
CIRRLICHT_API irr_IXMLWriter* irr_IFileSystem_createXMLWriter(irr_IFileSystem* filesys, const char* filename);
CIRRLICHT_API irr_IXMLWriter* irr_IFileSystem_createXMLWriter2(irr_IFileSystem* filesys, irr_IWriteFile* file);
CIRRLICHT_API irr_IAttributes* irr_IFileSystem_createEmptyAttributes(irr_IFileSystem* filesys, irr_IVideoDriver* driver=0);
