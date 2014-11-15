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

#include "guiimage.h"
#include <IGUIImage.h>

void irr_IGUIImage_setImage(irr_IGUIImage* img, irr_ITexture* tex) {
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setImage(reinterpret_cast<irr::video::ITexture*>(tex));
}

irr_ITexture* irr_IGUIImage_getImage(irr_IGUIImage* img) {
	return reinterpret_cast<irr_ITexture*>(reinterpret_cast<irr::gui::IGUIImage*>(img)->getImage());
}

void irr_IGUIImage_setColor(irr_IGUIImage* img, irr_SColor col) {
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setColor(irr::video::SColor(col.a, col.b, col.g, col.r));
}

void irr_IGUIImage_setScaleImage(irr_IGUIImage* img, bool scale) {
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setScaleImage(scale);
}

void irr_IGUIImage_setUseAlphaChannel(irr_IGUIImage* img, bool use) {
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setUseAlphaChannel(use);
}

irr_SColor irr_IGUIImage_getColor(irr_IGUIImage* img) {
	irr::video::SColor temp = reinterpret_cast<irr::gui::IGUIImage*>(img)->getColor();
	irr_SColor col = {temp.getAlpha(), temp.getBlue(), temp.getGreen(), temp.getRed()};
	return col;
}

bool irr_IGUIImage_isImageScaled(irr_IGUIImage* img) {
	return reinterpret_cast<irr::gui::IGUIImage*>(img)->isImageScaled();
}

bool irr_IGUIImage_isAlphaChannelUsed(irr_IGUIImage* img) {
	return reinterpret_cast<irr::gui::IGUIImage*>(img)->isAlphaChannelUsed();
}

void irr_IGUIImage_setSourceRect(irr_IGUIImage* img, irr_recti sourceRect) {
	irr::core::recti temp = irr::core::recti(sourceRect.x, sourceRect.y, sourceRect.x1, sourceRect.y1);
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setSourceRect(temp);
}

irr_recti irr_IGUIImage_getSourceRect(irr_IGUIImage* img) {
	irr::core::recti temp = reinterpret_cast<irr::gui::IGUIImage*>(img)->getSourceRect();
	irr_recti rec = {temp.UpperLeftCorner.X, temp.UpperLeftCorner.Y, temp.LowerRightCorner.X, temp.LowerRightCorner.Y};
	return rec;
}

void irr_IGUIImage_setDrawBounds(irr_IGUIImage* img, irr_rectf drawBoundUVs) {
	irr::core::rectf temp = irr::core::rectf(drawBoundUVs.x, drawBoundUVs.y, drawBoundUVs.x1, drawBoundUVs.y1);
	reinterpret_cast<irr::gui::IGUIImage*>(img)->setDrawBounds(temp);
}

irr_rectf irr_IGUIImage_getDrawBounds(irr_IGUIImage* img) {
	irr::core::rectf temp = reinterpret_cast<irr::gui::IGUIImage*>(img)->getDrawBounds();
	irr_rectf rec = {temp.UpperLeftCorner.X, temp.UpperLeftCorner.Y, temp.LowerRightCorner.X, temp.LowerRightCorner.Y};
	return rec;
}
