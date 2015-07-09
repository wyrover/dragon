#include "stdafx.h"
#include "UISDK\Kernel\Inc\Interface\iuires.h"
#include "UISDK\Kernel\Src\Resource\colormanager.h"
#include "UISDK\Kernel\Src\Resource\colorres.h"
#include "UISDK\Kernel\Src\Resource\imagemanager.h"
#include "UISDK\Kernel\Src\Resource\imageres.h"
#include "UISDK\Kernel\Src\Resource\fontmanager.h"
#include "UISDK\Kernel\Src\Resource\fontres.h"
#include "UISDK\Kernel\Src\Resource\stylemanager.h"
#include "UISDK\Kernel\Src\Resource\styleres.h"
#include "UISDK\Kernel\Src\Resource\layoutmanager.h"
#include "UISDK\Kernel\Src\Resource\skinres.h"
#include "UISDK\Kernel\Src\Resource\skinmanager.h"

using namespace UI;


IColorManager::IColorManager(ColorManager* p) 
{
    m_pImpl = p;
}
ColorManager*  IColorManager::GetImpl()
{
    return m_pImpl;
}

IColorRes*  IColorManager::GetColorRes()
{
	return m_pImpl->GetColorRes().GetIColorRes(); 
}

//////////////////////////////////////////////////////////////////////////


IImageManager::IImageManager(ImageManager* p) 
{ 
    m_pImpl = p; 
}
ImageManager*  IImageManager::GetImpl() 
{
    return m_pImpl; 
}

IImageRes*   IImageManager::GetImageRes() 
{
    return m_pImpl->GetImageRes().GetIImageRes();
}
ICursorRes*  IImageManager::GetCursorRes()
{
    return m_pImpl->GetCursorRes().GetICursorRes();
}
IGifRes*     IImageManager::GetGifRes() 
{ 
    return m_pImpl->GetGifRes().GetIGifRes(); 
}
IUIElement*  IImageManager::GetImageXmlElem(LPCTSTR szId)  
{ 
    return m_pImpl->GetImageXmlElem(szId); 
}

IImageResItem*  IImageManager::InsertImageItem(IMAGE_ITEM_TYPE eType, LPCTSTR szID, LPCTSTR szPath) 
{ 
    return m_pImpl->InsertImageItem(eType, szID, szPath);
}
bool  IImageManager::ModifyImageItem(LPCTSTR szID, LPCTSTR szPath)
{ 
    return m_pImpl->ModifyImageItem(szID, szPath);
}
bool  IImageManager::RemoveImageItem(LPCTSTR szID)
{ 
    return m_pImpl->RemoveImageItem(szID);
}

bool  IImageManager::ModifyImageItemInRunTime(LPCTSTR szID, LPCTSTR szPath) 
{ 
    return m_pImpl->ModifyImageItemInRunTime(szID, szPath); 
}
bool  IImageManager::ModifyImageItemAlpha(LPCTSTR szID, byte nAlphaPercent) 
{ 
    return m_pImpl->ModifyImageItemAlpha(szID, nAlphaPercent); 
}

//////////////////////////////////////////////////////////////////////////

IFontManager::IFontManager(FontManager* p)
{ 
    m_pImpl = p; 
} 
FontManager*  IFontManager::GetImpl()
{
    return m_pImpl;
}

IFontRes*  IFontManager::GetFontRes() 
{ 
    return m_pImpl->GetFontRes().GetIFontRes(); 
}


//////////////////////////////////////////////////////////////////////////

IStyleManager::IStyleManager(StyleManager* p)
{ 
    m_pImpl = p;
}
StyleManager*  IStyleManager::GetImpl()
{ 
    return m_pImpl;
}

IStyleRes*  IStyleManager::GetStyleRes() 
{
    return m_pImpl->GetStyleRes().GetIStyleRes(); 
}

IUIElement*  IStyleManager::GetStyleXmlElem(LPCTSTR szId)
{
    return m_pImpl->GetStyleXmlElem(szId);
}

bool  IStyleManager::LoadStyle(
                               LPCTSTR szTagName, 
                               LPCTSTR szStyleClass,
                               LPCTSTR szID, 
                               IMapAttribute* pMapStyle)
{ 
    return m_pImpl->LoadStyle(szTagName, szStyleClass, szID, pMapStyle); 
}
bool  IStyleManager::ParseStyle(IMapAttribute* pMapAttrib)
{ 
    return m_pImpl->ParseStyle(pMapAttrib); 
}
bool  IStyleManager::ReverseParseStyle(IListAttribute* pListAttrib)
{
    return m_pImpl->ReverseParseStyle(pListAttrib);
}

//////////////////////////////////////////////////////////////////////////

ILayoutManager::ILayoutManager(LayoutManager* p) 
{ 
    m_pImpl = p; 
}
LayoutManager*  ILayoutManager::GetImpl() 
{
    return m_pImpl; 
}

ILayoutRes*  ILayoutManager::GetLayoutRes()
{ 
    return m_pImpl->GetLayoutRes().GetILayoutRes(); 
}
bool  ILayoutManager::LoadWindowNodeList(ILayoutWindowNodeList** pp) 
{ 
    return m_pImpl->LoadWindowNodeList(pp); 
}
IObject*  ILayoutManager::LoadLayout(LPCTSTR szWndName, LPCTSTR szWndId)
{
    return m_pImpl->LoadLayout(szWndName, szWndId);
}
IObject*  ILayoutManager::ParseElement(IUIElement* pUIElement, IObject* pParent)
{
    return m_pImpl->ParseElement(pUIElement, pParent);
}
bool  ILayoutManager::FindWindowElement(LPCTSTR szTagName, LPCTSTR szId, IUIElement** ppElem)
{
    return m_pImpl->FindWindowElement(szTagName, szId, ppElem);
}
//////////////////////////////////////////////////////////////////////////

IImageRes::IImageRes(ImageRes* p) 
{ 
    m_pImpl = p; 
}
ImageRes*  IImageRes::GetImpl()   
{ 
    return m_pImpl; 
}

long  IImageRes::GetImageCount() 
{ 
    return m_pImpl->GetImageCount(); 
}
IImageResItem*  IImageRes::GetImageResItem(long lIndex) 
{ 
    return m_pImpl->GetImageResItem(lIndex);
}
IImageResItem*  IImageRes::GetImageResItem(LPCTSTR szID) 
{ 
    return m_pImpl->GetImageResItem(szID); 
}
bool  IImageRes::ModifyImage(LPCTSTR szId, LPCTSTR szPath)
{ 
    return m_pImpl->ModifyImage(szId, szPath);
}
bool  IImageRes::GetBitmap(LPCTSTR szImageID, GRAPHICS_RENDER_LIBRARY_TYPE eRenderType, __out IRenderBitmap** ppRenderBitmap)
{ 
    return m_pImpl->GetBitmap(szImageID, eRenderType, ppRenderBitmap);
}
HBITMAP  IImageRes::LoadBitmap(LPCTSTR szId)  
{ 
    return m_pImpl->LoadBitmap(szId);
}
LPCTSTR  IImageRes::GetRenderBitmapId(IRenderBitmap* pBitmap)
{
    return m_pImpl->GetRenderBitmapId(pBitmap);
}
//////////////////////////////////////////////////////////////////////////

IImageResItem::IImageResItem(ImageResItem* p) 
{ 
    m_pImpl = p;
}
ImageResItem*  IImageResItem::GetImpl() 
{ 
    return m_pImpl; 
}

void  IImageResItem::SetId(LPCTSTR szText)
{ 
    m_pImpl->SetId(szText); 
}
void  IImageResItem::SetPath(LPCTSTR szText) 
{
    m_pImpl->SetPath(szText); 
}
LPCTSTR  IImageResItem::GetId() 
{ 
    return m_pImpl->GetId(); 
}
LPCTSTR  IImageResItem::GetPath() 
{ 
    return m_pImpl->GetPath();
}
bool  IImageResItem::ModifyImage(LPCTSTR  szPath)
{ 
    return m_pImpl->ModifyImage(szPath); }
bool  IImageResItem::GetUseSkinHLS() 
{
    return m_pImpl->GetUseSkinHLS(); 
}
bool  IImageResItem::GetNeedAntiAliasing()
{
    return m_pImpl->GetNeedAntiAliasing();
}
void  IImageResItem::SetUseSkinHLS(bool b) 
{
    return m_pImpl->SetUseSkinHLS(b);
}
void  IImageResItem::SetNeedAntiAliasing(bool b)
{ 
    return m_pImpl->SetNeedAntiAliasing(b);
}
IMAGE_ITEM_TYPE  IImageResItem::GetImageItemType()
{
    return m_pImpl->GetImageItemType();
}
// void  IImageResItem::SetImageItemType(IMAGE_ITEM_TYPE e)
// {
//     m_pImpl->SetImageItemType(e);
// }

//////////////////////////////////////////////////////////////////////////

IImageListResItem::IImageListResItem(ImageListResItem* p):IImageResItem(static_cast<ImageResItem*>(p))
{
    m_pImpl = p; 
}
ImageListResItem*  IImageListResItem::GetImpl() { return m_pImpl; }

IMAGELIST_LAYOUT_TYPE  IImageListResItem::GetLayoutType()
{
    return m_pImpl->GetLayoutType();
}
int  IImageListResItem::GetItemCount()
{
    return m_pImpl->GetItemCount();
}
void  IImageListResItem::SetLayoutType(IMAGELIST_LAYOUT_TYPE e)
{
    m_pImpl->SetLayoutType(e);
}
void  IImageListResItem::SetItemCount(int n)
{
    m_pImpl->SetItemCount(n);
}

//////////////////////////////////////////////////////////////////////////

IImageIconResItem::IImageIconResItem(ImageIconResItem* p):IImageResItem(static_cast<ImageResItem*>(p))
{
    m_pImpl = p; 
}
ImageIconResItem*  IImageIconResItem::GetImpl() { return m_pImpl; }


//////////////////////////////////////////////////////////////////////////


ICursorRes::ICursorRes(CursorRes* p) { m_pImpl = p; }
CursorRes*  ICursorRes::GetImpl() { return m_pImpl; }

void ICursorRes::GetCursor(LPCTSTR  szCursorID, IUICursor** pp) 
{ 
    m_pImpl->GetCursor(szCursorID, pp); 
}
LPCTSTR  ICursorRes::GetCursorId(IUICursor* p)
{
    return m_pImpl->GetCursorId(p); 
}

ICursorResItem::ICursorResItem(CursorResItem* p) { m_pImpl = p; }
CursorResItem*  ICursorResItem::GetImpl()  { return m_pImpl; }

//////////////////////////////////////////////////////////////////////////

IColorRes::IColorRes(ColorRes* p)
{ 
    m_pImpl = p; 
}
ColorRes*  IColorRes::GetImpl() 
{ 
    return m_pImpl;
}

long  IColorRes::GetColorCount() 
{
    return m_pImpl->GetColorCount();
}
IColorResItem*  IColorRes::GetColorResItem(long lIndex)
{ 
    return m_pImpl->GetColorResItem(lIndex); 
}
void  IColorRes::GetColor(LPCTSTR szColorId, Color** pp) 
{ 
    return m_pImpl->GetColor(szColorId, pp); 
}
LPCTSTR  IColorRes::GetColorId(Color* p)
{
    return m_pImpl->GetColorId(p);
}

//////////////////////////////////////////////////////////////////////////

IColorResItem::IColorResItem(ColorResItem* p) { m_pImpl = p; }
ColorResItem*  IColorResItem::GetImpl() { return m_pImpl; }

LPCTSTR IColorResItem::GetID() { return m_pImpl->GetID(); }
LPCTSTR IColorResItem::GetColorString() { return m_pImpl->GetColorString(); }

//////////////////////////////////////////////////////////////////////////

IFontResItem::IFontResItem(FontResItem* p) { m_pImpl = p; }
FontResItem*  IFontResItem::GetImpl(){ return m_pImpl; }

LPCTSTR  IFontResItem::GetId()  { return m_pImpl->GetId(); }
LOGFONT*  IFontResItem::GetLogFont() { return m_pImpl->GetLogFont(); }

//////////////////////////////////////////////////////////////////////////

IGifRes::IGifRes(GifRes* p) { m_pImpl = p; }
GifRes*  IGifRes::GetImpl()  { return m_pImpl; }

HRESULT  IGifRes::GetGifImage(LPCTSTR  szId, __out IGifImage** ppGifImage) { return m_pImpl->GetGifImage(szId, ppGifImage); }

IGifResItem::IGifResItem(GifResItem* p) { m_pImpl = p; }
GifResItem*  IGifResItem::GetImpl()  { return m_pImpl; }

//////////////////////////////////////////////////////////////////////////


IFontRes::IFontRes(FontRes* p) 
{
    m_pImpl = p;
}
FontRes*  IFontRes::GetImpl() 
{
    return m_pImpl; 
}

long  IFontRes::GetFontCount()
{ 
    return m_pImpl->GetFontCount();
}
bool  IFontRes::GetFontResItem(long lIndex, IFontResItem** ppResItem) 
{ 
    return m_pImpl->GetFontResItem(lIndex, ppResItem); 
}
bool  IFontRes::GetFont(LPCTSTR szFontId, GRAPHICS_RENDER_LIBRARY_TYPE eRenderType, __out IRenderFont** ppOut) 
{
    return m_pImpl->GetFont(szFontId, eRenderType, ppOut); 
}
bool  IFontRes::GetDefaultFont(GRAPHICS_RENDER_LIBRARY_TYPE eRenderType, __out IRenderFont** ppFont)
{
    return m_pImpl->GetDefaultFont(eRenderType, ppFont); 
}
LPCTSTR  IFontRes::GetDefaultFontId()
{
    return m_pImpl->GetDefaultFontId();
}
LPCTSTR  IFontRes::GetRenderFontId(IRenderFont* pFont)
{
    return m_pImpl->GetRenderFontId(pFont);
}


//////////////////////////////////////////////////////////////////////////

IStyleResItem::IStyleResItem(StyleResItem* p) 
{ 
    m_pImpl = p;
}
StyleResItem*  IStyleResItem::GetImpl()   
{
    return m_pImpl;
}

STYLE_SELECTOR_TYPE  IStyleResItem::GetSelectorType() 
{ 
    return m_pImpl->GetSelectorType(); 
}
LPCTSTR  IStyleResItem::GetId()      
{
    return m_pImpl->GetId(); 
}
LPCTSTR  IStyleResItem::GetInherits()
{
    return m_pImpl->GetInherits(); 
}
LPCTSTR  IStyleResItem::GetAttribute(LPCTSTR szKey)
{
	return m_pImpl->GetAttribute(szKey);
}
// void  IStyleResItem::SetInherits(LPCTSTR sz)
// {
// 	return m_pImpl->SetInherits(sz);
// }
// void  IStyleResItem::SetSelectorType(STYLE_SELECTOR_TYPE type)
// {
// 	m_pImpl->SetSelectorType(type);
// }
// void  IStyleResItem::SetId(LPCTSTR szId)
// {
// 	m_pImpl->SetId(szId);
// }
// void  IStyleResItem::SetAttribute(LPCTSTR key, LPCTSTR value)
// {
// 	m_pImpl->SetAttribute(key, value);
// }
// 
// void  IStyleResItem::RemoveAttribute(LPCTSTR key)
// {
// 	m_pImpl->RemoveAttribute(key);
// }


void  IStyleResItem::GetAttributeMap(IMapAttribute** ppMapAttrib)
{ 
    m_pImpl->GetAttributeMap(ppMapAttrib);
}


void  IStyleResItem::SetXmlElement(IUIElement* p)
{
    m_pImpl->SetXmlElement(p);
}
IUIElement*  IStyleResItem::GetXmlElement()
{
    return m_pImpl->GetXmlElement();
}
bool  IStyleResItem::GetXmlElement2(IUIElement** pp)
{
    return m_pImpl->GetXmlElement2(pp);
}

//////////////////////////////////////////////////////////////////////////

IStyleRes::IStyleRes(StyleRes* p)
{ 
    m_pImpl = p;
}
StyleRes*  IStyleRes::GetImpl()   
{ 
    return m_pImpl;
}

IStyleResItem* IStyleRes::Add(STYLE_SELECTOR_TYPE type, LPCTSTR szId, LPCTSTR szInherit)
{
    StyleResItem* p = m_pImpl->Add(type, szId, szInherit);
    if (!p)
        return NULL;

    return p->GetIStyleResItem();
}

IStyleResItem*  IStyleRes::Insert(STYLE_SELECTOR_TYPE type, LPCTSTR szId, long lPos)
{
	StyleResItem* p = m_pImpl->Insert(type, szId, lPos);
	if (!p)
		return NULL;

	return p->GetIStyleResItem();
}

bool  IStyleRes::Modify(IStyleResItem* pItem, STYLE_SELECTOR_TYPE type, LPCTSTR szId, LPCTSTR szInherit)
{
	if (!pItem)
		return false;

	return m_pImpl->Modify(pItem->GetImpl(), type, szId, szInherit);
}

long  IStyleRes::GetItemPos(IStyleResItem* p)
{
	if (!p)
		return -1;

	return m_pImpl->GetItemPos(p->GetImpl());	
}

bool  IStyleRes::Remove(STYLE_SELECTOR_TYPE type, LPCTSTR szId)
{
    return m_pImpl->Remove(type, szId);
}

bool  IStyleRes::Remove(IStyleResItem* pItem)
{
	if (!pItem)
		return false;

	return m_pImpl->Remove(pItem->GetImpl());
}

bool  IStyleRes::AddAttribute(IStyleResItem* pItem, LPCTSTR szKey, LPCTSTR szValue)
{
	if (!pItem)
		return false;

	return m_pImpl->AddAttribute(pItem->GetImpl(), szKey, szValue);
}
bool  IStyleRes::ModifyAttribute(IStyleResItem* pItem, LPCTSTR szKey, LPCTSTR szValue)
{
	if (!pItem)
		return false;

	return m_pImpl->ModifyAttribute(pItem->GetImpl(), szKey, szValue);
}
bool  IStyleRes::RemoveAttribute(IStyleResItem* pItem, LPCTSTR szKey)
{
	if (!pItem)
		return false;

	return m_pImpl->RemoveAttribute(pItem->GetImpl(), szKey);
}

long  IStyleRes::GetStyleCount()
{ 
    return m_pImpl->GetCount(); 
}

IStyleResItem*  IStyleRes::GetItem(long lIndex) 
{
    StyleResItem* p = m_pImpl->GetItem(lIndex); 
    if (!p)
        return NULL;

    return p->GetIStyleResItem();
}

IStyleResItem*  IStyleRes::FindItem(STYLE_SELECTOR_TYPE type, LPCTSTR szId)
{ 
    StyleResItem* p = m_pImpl->GetItem(type, szId); 
    if (!p)
        return NULL;

    return p->GetIStyleResItem();
}

ILayoutRes::ILayoutRes(LayoutRes* p) { m_pImpl = p;}
LayoutRes*  ILayoutRes::GetImpl()    { return m_pImpl; }

//////////////////////////////////////////////////////////////////////////


ISkinRes::ISkinRes(SkinRes* p)
{
    m_pImpl = p;
}
SkinRes*  ISkinRes::GetImpl()
{
    return m_pImpl;
}

IUIApplication*  ISkinRes::GetUIApplication()  { return m_pImpl->GetUIApplication(); }
ISkinManager*    ISkinRes::GetSkinManager()    { return m_pImpl->GetISkinManager(); }
IImageManager*   ISkinRes::GetImageManager()   { return m_pImpl->GetIImageManager(); }
IColorManager*   ISkinRes::GetColorManager()   { return m_pImpl->GetIColorManager(); }
IFontManager*    ISkinRes::GetFontManager()    { return m_pImpl->GetIFontManager(); }
IStyleManager*   ISkinRes::GetStyleManager()   { return m_pImpl->GetIStyleManager(); }
ILayoutManager*  ISkinRes::GetLayoutManager()  { return m_pImpl->GetILayoutManager(); }

IImageRes*  ISkinRes::GetImageRes()            { return m_pImpl->GetIImageRes(); }
IFontRes*   ISkinRes::GetFontRes()             { return m_pImpl->GetIFontRes();  }
IColorRes*  ISkinRes::GetColorRes()            { return m_pImpl->GetIColorRes(); }
IStyleRes*  ISkinRes::GetStyleRes()            { return m_pImpl->GetIStyleRes(); }

LPCTSTR  ISkinRes::GetName()              
{ 
    return m_pImpl->GetName();
}
LPCTSTR  ISkinRes::GetPath()              
{ 
    return m_pImpl->GetPath();
}

bool  ISkinRes::Load()                        
{ 
    return m_pImpl->Load();
}
bool  ISkinRes::ChangeSkinHLS(short h, short l, short s, int nFlag) 
{ 
    return m_pImpl->ChangeSkinHLS(h,l,s,nFlag);
}
ISkinDataSource*  ISkinRes::GetDataSource()    
{
    return m_pImpl->GetDataSource(); 
}
UINT  ISkinRes::GetXmlDocCount()               
{ 
    return m_pImpl->GetXmlDocCount();
}
LPCTSTR  ISkinRes::GetXmlDoc(UINT nIndex, IUIDocument** pp)        
{
    return m_pImpl->GetXmlDoc(nIndex, pp); 
}
bool  ISkinRes::GetXmlDocByName(LPCTSTR szName, IUIDocument** pp)  
{ 
    return m_pImpl->GetXmlDocByName(szName, pp);
}

ISkinManager::ISkinManager(SkinManager* p)
{
    m_pImpl = p;
}
SkinManager*  ISkinManager::GetImpl()
{
    return m_pImpl;
}

IUIApplication*  ISkinManager::GetUIApplication() 
{
    return m_pImpl->GetUIApplication();
}
UINT  ISkinManager::GetSkinCount()
{
    return m_pImpl->GetSkinCount(); 
}
void  ISkinManager::GetSkinDirection(TCHAR*  szOut) 
{ 
    m_pImpl->GetSkinDirection(szOut); 
}
ISkinRes*  ISkinManager::AddSkin(LPCTSTR  szName) 
{
    return m_pImpl->AddSkin(szName); 
}
HRESULT  ISkinManager::ChangeSkin(ISkinRes*  pSkinRes, bool bSync)
{
    return m_pImpl->ChangeSkin(pSkinRes, bSync);
}
HRESULT  ISkinManager::ChangeSkinHLS(short h, short l, short s, int nFlag) 
{
    return m_pImpl->ChangeSkinHLS(h,l,s,nFlag);
}
HRESULT  ISkinManager::SetActiveSkin(ISkinRes* pSkin) 
{ 
    return m_pImpl->SetActiveSkin(pSkin); 
}
ISkinRes*  ISkinManager::GetActiveSkin() 
{
    SkinRes* p = m_pImpl->GetActiveSkin(); 
	if (p)
		return p->GetISkinRes();
	return NULL;
}
ISkinRes*  ISkinManager::GetSkinResByIndex(long lIndex)
{
    SkinRes* p = m_pImpl->GetSkinResByIndex(lIndex); 
    if (p)
        return p->GetISkinRes();
    return NULL;
}
bool  ISkinManager::Save(ISkinRes* pSkinRes) 
{
    if (NULL == pSkinRes)
        return m_pImpl->Save(NULL);
    else
        return m_pImpl->Save(pSkinRes->GetImpl()); 
}