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

#include <include/IGUIStaticText.h>
#include <include/SColor.h>
#include "IGUIStaticText.h"

#ifdef __cplusplus
extern "C"
{
#endif

    void irr_IGUIStaticText_setOverrideFont(irr_IGUIStaticText* txt, irr_IGUIFont* font)
    {
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setOverrideFont(reinterpret_cast<irr::gui::IGUIFont*>(font));
    }

	irr_IGUIFont* irr_IGUIStaticText_getOverrideFont(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr_IGUIFont*>(reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getOverrideFont());
	}

	irr_IGUIFont* irr_IGUIStaticText_getActiveFont(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr_IGUIFont*>(reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getActiveFont());
	}

	void irr_IGUIStaticText_setOverrideColor(irr_IGUIStaticText* txt, irr_SColor col)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setOverrideColor(irr::video::SColor(col.a, col.b, col.g, col.r));
	}

	irr_SColor irr_IGUIStaticText_getOverrideColor(irr_IGUIStaticText* txt)
	{
        irr::video::SColor temp = reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getOverrideColor();
        irr_SColor col = {temp.getAlpha(), temp.getBlue(), temp.getGreen(), temp.getRed()};
        return col;
	}

	void irr_IGUIStaticText_enableOverrideColor(irr_IGUIStaticText* txt, bool enable)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->enableOverrideColor(enable);
	}

	bool irr_IGUIStaticText_isOverrideColorEnabled(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isOverrideColorEnabled();
	}

	void irr_IGUIStaticText_setBackgroundColor(irr_IGUIStaticText* txt, irr_SColor color)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setBackgroundColor(irr::video::SColor(color.a, color.b, color.g, color.r));
	}

	void irr_IGUIStaticText_setDrawBackground(irr_IGUIStaticText* txt, bool draw)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setDrawBackground(draw);
	}

	bool irr_IGUIStaticText_isDrawBackgroundEnabled(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isDrawBackgroundEnabled();
	}

	irr_SColor irr_IGUIStaticText_getBackgroundColor(irr_IGUIStaticText* txt)
	{
        irr::video::SColor temp = reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getBackgroundColor();
        irr_SColor col = {temp.getAlpha(), temp.getBlue(), temp.getGreen(), temp.getRed()};
        return col;
	}

	void irr_IGUIStaticText_setDrawBorder(irr_IGUIStaticText* txt, bool draw)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setDrawBorder(draw);
	}

	bool irr_IGUIStaticText_isDrawBorderEnabled(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isDrawBorderEnabled();
	}

	void irr_IGUIStaticText_setTextAlignment(irr_IGUIStaticText* txt, EGUI_ALIGNMENT horizontal, EGUI_ALIGNMENT vertical)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setTextAlignment(irr::gui::EGUI_ALIGNMENT(horizontal), irr::gui::EGUI_ALIGNMENT(vertical));
	}

	void irr_IGUIStaticText_setWordWrap(irr_IGUIStaticText* txt, bool enable)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setWordWrap(enable);
	}

	bool irr_IGUIStaticText_isWordWrapEnabled(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isWordWrapEnabled();
	}

	int irr_IGUIStaticText_getTextHeight(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getTextHeight();
	}

	int irr_IGUIStaticText_getTextWidth(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->getTextWidth();
	}

	bool irr_IGUIStaticText_isTextRestrainedInside(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isTextRestrainedInside();
	}

	void irr_IGUIStaticText_setRightToLeft(irr_IGUIStaticText* txt, bool rtl)
	{
        reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->setRightToLeft(rtl);
	}

	bool irr_IGUIStaticText_isRightToLeft(irr_IGUIStaticText* txt)
	{
        return reinterpret_cast<irr::gui::IGUIStaticText*>(txt)->isRightToLeft();
	}

#ifdef __cplusplus
}
#endif // __cplusplus
