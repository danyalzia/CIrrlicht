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

#include <IFileList.h>
#include "filelist.h"

unsigned int irr_IFileList_getFileCount(irr_IFileList* filelist) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getFileCount();
}

const char* irr_IFileList_getFileName(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getFileName(index).c_str();
}

const char* irr_IFileList_getFullFileName(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getFullFileName(index).c_str();
}

unsigned int irr_IFileList_getFileSize(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getFileSize(index);
}

unsigned int irr_IFileList_getFileOffset(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getFileOffset(index);
}

unsigned int irr_IFileList_getID(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getID(index);
}

bool irr_IFileList_isDirectory(irr_IFileList* filelist, unsigned int index) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->isDirectory(index);
}

int irr_IFileList_findFile(irr_IFileList* filelist, const char* filename, bool isFolder) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->findFile(filename, isFolder);
}

const char* irr_IFileList_getPath(irr_IFileList* filelist) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->getPath().c_str();
}

unsigned int irr_IFileList_addItem(irr_IFileList* filelist, const char* fullPath, unsigned int offset, unsigned int size, bool isDirectory, unsigned int id) {
	return reinterpret_cast<irr::io::IFileList*>(filelist)->addItem(fullPath, offset, size, isDirectory, id);
}

void irr_IFileList_sort(irr_IFileList* filelist) {
	reinterpret_cast<irr::io::IFileList*>(filelist)->sort();
}
