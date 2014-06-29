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

#ifndef _CIRRLICHT_EGUIALIGNMENT_
#define _CIRRLICHT_EGUIALIGNMENT_

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

enum EGUI_ALIGNMENT
{
    //! Aligned to parent's top or left side (default)
    EGUIA_UPPERLEFT=0,
    //! Aligned to parent's bottom or right side
    EGUIA_LOWERRIGHT,
    //! Aligned to the center of parent
    EGUIA_CENTER,
    //! Stretched to fit parent
    EGUIA_SCALE
};

//! Names for alignments
const char* const GUIAlignmentNames[] =
{
    "upperLeft",
    "lowerRight",
    "center",
    "scale",
    0
};

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_EGUIALIGNMENT_
