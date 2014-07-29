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

#include <IWriteFile.h>
#include "writefile.h"

int irr_IWriteFile_write(irr_IWriteFile* file, const void* buffer, unsigned int sizeToWrite)  {
	return reinterpret_cast<irr::io::IWriteFile*>(file)->write(buffer, sizeToWrite);
}

bool irr_IWriteFile_seek(irr_IWriteFile* file, long finalPos, bool relativeMovement) {
	return reinterpret_cast<irr::io::IWriteFile*>(file)->seek(finalPos, relativeMovement);
}

long irr_IWriteFile_getPos(irr_IWriteFile* file) {
	return reinterpret_cast<irr::io::IWriteFile*>(file)->getPos();
}

const char* irr_IWriteFile_getFileName(irr_IWriteFile* file) {
	auto temp = reinterpret_cast<irr::io::IWriteFile*>(file)->getFileName();
	return temp.c_str();
}
