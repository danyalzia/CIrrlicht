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

#include <irrlicht.h>
#include "gui.h"

#ifdef __cplusplus
extern "C"
{
#endif
    void CIrrlichtDevice_addStaticText(irr_IGUIEnvironment* env, const wchar_t* text, const recti& rectangle, bool border)
    {
        reinterpret_cast<irr::gui::IGUIEnvironment*>(env)->addStaticText(text, irr::core::recti(rectangle.x, rectangle.y, rectangle.x1, rectangle.y1), border);
    }

    void irr_ICursorControl_setVisible(irr_ICursorControl* cursor, bool value)
    {
        reinterpret_cast<irr::gui::ICursorControl*>(cursor)->setVisible(value);
    }

    void irr_IGUIEnvironment_drawAll(irr_IGUIEnvironment* env)
    {
        reinterpret_cast<irr::gui::IGUIEnvironment*>(env)->drawAll();
    }
#ifdef __cplusplus
}
#endif // __cplusplus
