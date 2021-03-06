#ifndef _UI_CTRL_XMLDEFINE_H_
#define _UI_CTRL_XMLDEFINE_H_

namespace UI
{

// UICtrl中的xml属性定义

#define XML_RENDER_TYPE_THEME_HSCROLLBAR_THUMB_BUTTON       TEXT("theme.hscrollbar.thumb")
#define XML_RENDER_TYPE_THEME_VSCROLLBAR_THUMB_BUTTON       TEXT("theme.vscrollbar.thumb")
#define XML_RENDER_TYPE_THEME_SCROLLBAR_LINE_RIGHT_BUTTON   TEXT("theme.hscrollbar.right")
#define XML_RENDER_TYPE_THEME_SCROLLBAR_LINE_LEFT_BUTTON    TEXT("theme.hscrollbar.left")
#define XML_RENDER_TYPE_THEME_SCROLLBAR_LINE_UP_BUTTON      TEXT("theme.vscrollbar.up")
#define XML_RENDER_TYPE_THEME_SCROLLBAR_LINE_DOWN_BUTTON    TEXT("theme.vscrollbar.down")
#define XML_RENDER_TYPE_THEME_VSCROLLBARBACKGND             TEXT("theme.vscrollbar.bkg")
#define XML_RENDER_TYPE_THEME_HSCROLLBARBACKGND             TEXT("theme.hscrollbar.bkg")
#define XML_RENDER_TYPE_THEME_SCROLLBAR_SIZEBOX             TEXT("theme.scrollbar.sizebox")

#define XML_RENDER_TYPE_THEME_BUTTON_BKGND                  TEXT("theme.button")
#define XML_RENDER_TYPE_THEME_RADIO_BUTTON                  TEXT("theme.radiobutton")
#define XML_RENDER_TYPE_THEME_CHECK_BUTTON                  TEXT("theme.checkbutton")
#define XML_RENDER_TYPE_THEME_EDIT_BKGND                    TEXT("theme.edit")
#define XML_RENDER_TYPE_THEME_GROUPBOX_BKGND                TEXT("theme.groupbox.bkg")
#define XML_RENDER_TYPE_THEME_SLIDER_BKG                    TEXT("theme.slider.bkg")
#define XML_RENDER_TYPE_THEME_SLIDER_BTN_BKG                TEXT("theme.slider.btn.bkg")
#define XML_RENDER_TYPE_THEME_PROGRESS_FOREGND              TEXT("theme.progress.foregnd")
#define XML_RENDER_TYPE_THEME_PROGRESS_BKGND                TEXT("theme.progress.bkgnd")
#define XML_RENDER_TYPE_THEME_COMBOBOX_BUTTON               TEXT("theme.combobox.btn")
#define XML_RENDER_TYPE_THEME_COMBOBOX_BKGND                TEXT("theme.combobox.bkg")
#define XML_RENDER_TYPE_THEME_LISTBOX_BKG                   TEXT("theme.listbox.bkg")
#define XML_RENDER_TYPE_THEME_TREEVIEW_EXPANDCOLLAPSE_ICON  TEXT("theme.treeview.expandcollpase.icon")
#define XML_RENDER_TYPE_THEME_LISTVIEW_ITEM                 TEXT("theme.listview.item")
#define XML_RENDER_TYPE_THEME_HEADER_ITEM                   TEXT("theme.header.item")
#define XML_RENDER_TYPE_THEME_HEADER_BKG                    TEXT("theme.header.bkg")
#define XML_RENDER_TYPE_THEME_TABCTRL_BUTTON_BKGND          TEXT("theme.tab.button")

#define XML_RENDER_TYPE_THEME_MENU_BKGND                    TEXT("theme.menu.bkg")
#define XML_RENDER_TYPE_THEME_MENUSEPERATOR                 TEXT("theme.menu.separator")
#define XML_RENDER_TYPE_THEME_MENUSTRINGITEM                TEXT("theme.menu.stringitem")
#define XML_RENDER_TYPE_THEME_MENUPOPUPTRIANGLE             TEXT("theme.menu.triangle")
#define XML_RENDER_TYPE_THEME_MENURADIOICON                 TEXT("theme.menu.radioicon")
#define XML_RENDER_TYPE_THEME_MENURADIOCHECKICONBK          TEXT("theme.menu.radiocheckicon.bkg")

enum THEME_RENDER_TYPE
{
	// RENDER_TYPE_THEME_FIRST = 1000,
	RENDER_TYPE_THEME_BUTTON_BKGND = 2001,
	RENDER_TYPE_THEME_SLIDER_TRACK_BUTTON,
	RENDER_TYPE_THEME_COMBOBOX_BUTTON,
	RENDER_TYPE_THEME_RADIO_BUTTON,
	RENDER_TYPE_THEME_CHECK_BUTTON,
	RENDER_TYPE_THEME_EDIT_BKGND,
	RENDER_TYPE_THEME_GROUPBOX_BKGND,
	RENDER_TYPE_THEME_COMBOBOX_BKGND,
	RENDER_TYPE_THEME_COMBOBOX_LISTBOX_BKGND,
	RENDER_TYPE_THEME_LISTBOX_BKGND,
	RENDER_TYPE_THEME_LISTVIEW_ITEM,
	RENDER_TYPE_THEME_LISTVIEW_FOCUS,
	RENDER_TYPE_THEME_TREEVIEW_EXPANDCOLLAPSE_ICON,

	RENDER_TYPE_THEME_MENU_BKGND,
	RENDER_TYPE_THEME_MENUSTRINGITEM,
	RENDER_TYPE_THEME_MENUSEPERATOR,
	RENDER_TYPE_THEME_MENUPOPUPTRIANGLE,
	RENDER_TYPE_THEME_MENUCHECKICON,
	RENDER_TYPE_THEME_MENURADIOICON,
	RENDER_TYPE_THEME_MENURADIOCHECKICONBK,

	RENDER_TYPE_THEME_HSCROLLBAR_THUMB_BUTTON,
	RENDER_TYPE_THEME_VSCROLLBAR_THUMB_BUTTON,
	RENDER_TYPE_THEME_SCROLLBAR_LINE_RIGHT_BUTTON,
	RENDER_TYPE_THEME_SCROLLBAR_LINE_LEFT_BUTTON,
	RENDER_TYPE_THEME_SCROLLBAR_LINE_UP_BUTTON,
	RENDER_TYPE_THEME_SCROLLBAR_LINE_DOWN_BUTTON,
	RENDER_TYPE_THEME_VSCROLLBARBACKGND,
	RENDER_TYPE_THEME_HSCROLLBARBACKGND,
	RENDER_TYPE_THEME_SCROLLBAR_SIZEBOX,

	RENDER_TYPE_THEME_PROGRESS_BKGND,
	RENDER_TYPE_THEME_PROGRESS_FOREGND,
	RENDER_TYPE_THEME_SLIDERCTRL_BKGND,
	HEADER_TYPE_THEME_HEADERCTRL_ITEM_BKGND,
	RENDER_TYPE_THEME_HEADERCTRL_RIGHT_BLANK,

	RENDER_TYPE_THEME_TABCTRL_BUTTON_BKGND,
};

#define XML_LISTBOX_TEXT_INDENT   _T("textindent")    // 文本缩进
#pragma endregion

// Button

// 系统按钮类型
enum SYSTEM_BUTTON_TYPE
{
    SYSTEM_BUTTON_TYPE_UNKNOWN = 0,
    SYSTEM_BUTTON_TYPE_MINIMIZE = 1,
    SYSTEM_BUTTON_TYPE_MAXIMIZE = 2,
    SYSTEM_BUTTON_TYPE_RESTORE = 3,
    SYSTEM_BUTTON_TYPE_CLOSE = 4,
};
#define  XML_SYSTEM_BUTTON_TYPE_MINIMIZE  TEXT("minimize")
#define  XML_SYSTEM_BUTTON_TYPE_MAXIMIZE  TEXT("maximize")
#define  XML_SYSTEM_BUTTON_TYPE_RESTORE   TEXT("restore")
#define  XML_SYSTEM_BUTTON_TYPE_CLOSE     TEXT("close")

#define  XML_SYSTEM_BUTTON_TYPE           TEXT("type")

#pragma region  // SplitterBar属性定义
#define XML_SPLITTERBAR_OBJECTS_POS  _T("type")
#define XML_SPLITTERBAR_LEFT_RIGHT   _T("left_right")    // 横向拖拽条，控件上下分布
#define XML_SPLITTERBAR_UP_DOWN      _T("up_down")

enum SPLITTED_OBJECTS_POS
{
    SPLITTERBAR_LEFT_RIGHT,
    SPLITTERBAR_TOP_BOTTOM
};

#define XML_SPLITTERBAR_ALIGN           _T("align")       // 当窗口大小改变时，以哪个对象作为基准
#define XML_SPLITTERBAR_ALIGN_LEFT      _T("left")
#define XML_SPLITTERBAR_ALIGN_TOP       _T("top")
#define XML_SPLITTERBAR_ALIGN_RIGHT     _T("right")
#define XML_SPLITTERBAR_ALIGN_BOTTOM    _T("bottom")
#define XML_SPLITTERBAR_ALIGN_PERCENT   _T("percent")

enum SPLITTERBAR_ALIGN
{
    SPLITTERBAR_ALIGN_LEFT   = 0,
    SPLITTERBAR_ALIGN_TOP    = 0,
    SPLITTERBAR_ALIGN_RIGHT  = 1,
    SPLITTERBAR_ALIGN_BOTTOM = 1,
    SPLITTERBAR_ALIGN_PERCENT = 2,
};

#define XML_SPLITTERBAR_LEFT_PREFIX    _T("left.")
#define XML_SPLITTERBAR_RIGHT_PREFIX   _T("right.")
#define XML_SPLITTERBAR_TOP_PREFIX     _T("top.")
#define XML_SPLITTERBAR_BOTTOM_PREFIX  _T("bottom.")

#define XML_SPLITTERBAR_OBJ_ID       _T("id")       // 分隔条操纵的控件Id
#define XML_SPLITTERBAR_OBJ_MINSIZE  _T("minsize")  // 分隔条操纵的控件最小宽、高
#define XML_SPLITTERBAR_OBJ_MAXSIZE  _T("maxsize")  // 分隔条操纵的控件最大宽、高

// popup windwo
#define XML_POPUPWINDOW_PREFIX      _T("popupwnd.") // 弹出式窗口属性前缀，菜单、combobox控件中使用

// ie wrap
#define XML_IE_URL   _T("url")   // 需要打开的url地址

// richedit
#define XML_RICHEDIT_MSG_BUBBLE_PREFIX        _T("msgbubble.")  // 消息气泡定义
#define XML_RICHEDIT_MSG_BUBBLE_ENABLE        _T("enable")      // msgbubble.enable 是否启用气泡。只有开启了该项，才能在编辑器中设置气泡image
#define XML_RICHEDIT_MSG_BUBBLE_LEFT_PREFIX   _T("left.")       // 左侧气泡定义
#define XML_RICHEDIT_MSG_BUBBLE_RIGHT_PREFIX  _T("right.")      // 右侧气泡定义
#define XML_RICHEDIT_MSG_BUBBLE_IMAGE         _T("image")       // 气泡背景图片
#define XML_RICHEDIT_MSG_BUBBLE_IMAGE_9REGION _T("image.9region") // 气泡9宫定义

#define XML_RICHEDIT_OLE_PREFIX               _T("reole.")  
#define XML_REOLE_PICTURE_PREFIX              _T("picture.")  
#define XML_REOLE_PICTURE_LOADING_IMAGE       _T("loading.image")
#define XML_REOLE_PICTURE_FAILURE_IMAGE       _T("failure.image")
#define XML_REOLE_MAGNIFIER_PREFIX            _T("magnifier.")
#define XML_REOLE_NORMAL                      _T("normal")
#define XML_REOLE_HOVER                       _T("hover")
#define XML_REOLE_PRESS                       _T("press")

// richtext
#define XML_RICHTEXT_EDITABLE                 _T("editable")      // 编辑模式
#define XML_RICHTEXT_EDITABLE_DISABLE         _T("disable")
#define XML_RICHTEXT_EDITABLE_READONLY        _T("readonly")
#define XML_RICHTEXT_EDITABLE_ENABLE          _T("enable")

#define XML_RICHTEXT_PAGE_ALIGN_HORZ          _T("page.halign")   // page内容对齐方式
#define XML_RICHTEXT_PAGE_ALIGN_VERT          _T("page.valign")


}
#endif //_UI_CTRL_XMLDEFINE_H_