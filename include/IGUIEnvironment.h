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

#ifndef _CIRRLICHT_IGUIENVIRONMENT_
#define _CIRRLICHT_IGUIENVIRONMENT_

#include "core.h"
#include "cirrlicht.h"
#include "IVideoDriver.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
struct irr_IGUIEnvironment;
typedef struct irr_IGUIEnvironment irr_IGUIEnvironment;

struct irr_IGUIStaticText;
struct irr_IGUIImage;

irr_IGUIStaticText* irr_IGUIEnvironment_addStaticText(irr_IGUIEnvironment* env, const wchar_t* text, const irr_recti& rectangle, bool border=false);
irr_IGUIImage* irr_IGUIEnvironment_addImage(irr_IGUIEnvironment* env, irr_ITexture* textures, irr_vector2di pos);

struct irr_SColor;
void irr_IGUIEnvironment_drawAll(irr_IGUIEnvironment* env);

//! Enumeration for all events which are sendable by the gui system
enum EGUI_EVENT_TYPE
{
    //! A gui element has lost its focus.
    /** GUIEvent.Caller is losing the focus to GUIEvent.Element.
    If the event is absorbed then the focus will not be changed. */
    EGET_ELEMENT_FOCUS_LOST = 0,

    //! A gui element has got the focus.
    /** If the event is absorbed then the focus will not be changed. */
    EGET_ELEMENT_FOCUSED,

    //! The mouse cursor hovered over a gui element.
    /** If an element has sub-elements you also get this message for the subelements */
    EGET_ELEMENT_HOVERED,

    //! The mouse cursor left the hovered element.
    /** If an element has sub-elements you also get this message for the subelements */
    EGET_ELEMENT_LEFT,

    //! An element would like to close.
    /** Windows and context menus use this event when they would like to close,
    this can be cancelled by absorbing the event. */
    EGET_ELEMENT_CLOSED,

    //! A button was clicked.
    EGET_BUTTON_CLICKED,

    //! A scrollbar has changed its position.
    EGET_SCROLL_BAR_CHANGED,

    //! A checkbox has changed its check state.
    EGET_CHECKBOX_CHANGED,

    //! A new item in a listbox was selected.
    /** NOTE: You also get this event currently when the same item was clicked again after more than 500 ms. */
    EGET_LISTBOX_CHANGED,

    //! An item in the listbox was selected, which was already selected.
    /** NOTE: You get the event currently only if the item was clicked again within 500 ms or selected by "enter" or "space". */
    EGET_LISTBOX_SELECTED_AGAIN,

    //! A file has been selected in the file dialog
    EGET_FILE_SELECTED,

    //! A directory has been selected in the file dialog
    EGET_DIRECTORY_SELECTED,

    //! A file open dialog has been closed without choosing a file
    EGET_FILE_CHOOSE_DIALOG_CANCELLED,

    //! 'Yes' was clicked on a messagebox
    EGET_MESSAGEBOX_YES,

    //! 'No' was clicked on a messagebox
    EGET_MESSAGEBOX_NO,

    //! 'OK' was clicked on a messagebox
    EGET_MESSAGEBOX_OK,

    //! 'Cancel' was clicked on a messagebox
    EGET_MESSAGEBOX_CANCEL,

    //! In an editbox 'ENTER' was pressed
    EGET_EDITBOX_ENTER,

    //! The text in an editbox was changed. This does not include automatic changes in text-breaking.
    EGET_EDITBOX_CHANGED,

    //! The marked area in an editbox was changed.
    EGET_EDITBOX_MARKING_CHANGED,

    //! The tab was changed in an tab control
    EGET_TAB_CHANGED,

    //! A menu item was selected in a (context) menu
    EGET_MENU_ITEM_SELECTED,

    //! The selection in a combo box has been changed
    EGET_COMBO_BOX_CHANGED,

    //! The value of a spin box has changed
    EGET_SPINBOX_CHANGED,

    //! A table has changed
    EGET_TABLE_CHANGED,
    EGET_TABLE_HEADER_CHANGED,
    EGET_TABLE_SELECTED_AGAIN,

    //! A tree view node lost selection. See IGUITreeView::getLastEventNode().
    EGET_TREEVIEW_NODE_DESELECT,

    //! A tree view node was selected. See IGUITreeView::getLastEventNode().
    EGET_TREEVIEW_NODE_SELECT,

    //! A tree view node was expanded. See IGUITreeView::getLastEventNode().
    EGET_TREEVIEW_NODE_EXPAND,

    //! A tree view node was collapsed. See IGUITreeView::getLastEventNode().
    EGET_TREEVIEW_NODE_COLLAPSE,

    //! deprecated - use EGET_TREEVIEW_NODE_COLLAPSE instead. This
    //! may be removed by Irrlicht 1.9
    EGET_TREEVIEW_NODE_COLLAPS = EGET_TREEVIEW_NODE_COLLAPSE,

    //! No real event. Just for convenience to get number of events
    EGET_COUNT
};
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _CIRRLICHT_IGUIENVIRONMENT_
