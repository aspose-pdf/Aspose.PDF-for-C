#ifndef _Aspose_Pdf_Facades_Bookmark_h_
#define _Aspose_Pdf_Facades_Bookmark_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Bookmarks; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfBookmarkEditor; } } }
namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class ExplicitDestination; } } }
namespace Aspose { namespace Pdf { class Page; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a bookmark.
/// </summary>
class ASPOSE_PDF_SHARED_API Bookmark FINAL : public System::Object
{
    typedef Bookmark ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Bookmarks;
    friend class Aspose::Pdf::Facades::PdfBookmarkEditor;
    friend class Aspose::Pdf::ApsToPdfConverter;
    
public:

    System::String get_Action();
    void set_Action(System::String value);
    bool get_BoldFlag();
    void set_BoldFlag(bool value);
    System::SharedPtr<Bookmarks> get_ChildItem();
    void set_ChildItem(System::SharedPtr<Bookmarks> value);
    System::SharedPtr<Bookmarks> get_ChildItems();
    void set_ChildItems(System::SharedPtr<Bookmarks> value);
    System::String get_Destination();
    void set_Destination(System::String value);
    bool get_ItalicFlag();
    void set_ItalicFlag(bool value);
    int32_t get_Level();
    void set_Level(int32_t value);
    System::String get_PageDisplay();
    void set_PageDisplay(System::String value);
    int32_t get_PageDisplay_Bottom();
    void set_PageDisplay_Bottom(int32_t value);
    int32_t get_PageDisplay_Left();
    void set_PageDisplay_Left(int32_t value);
    int32_t get_PageDisplay_Right();
    void set_PageDisplay_Right(int32_t value);
    int32_t get_PageDisplay_Top();
    void set_PageDisplay_Top(int32_t value);
    int32_t get_PageDisplay_Zoom();
    void set_PageDisplay_Zoom(int32_t value);
    int32_t get_PageNumber();
    void set_PageNumber(int32_t value);
    System::String get_RemoteFile();
    void set_RemoteFile(System::String value);
    System::String get_Title();
    void set_Title(System::String value);
    System::Drawing::Color get_TitleColor();
    void set_TitleColor(System::Drawing::Color value);
    bool get_Open();
    void set_Open(bool value);
    
    Bookmark();
    
    int32_t CompareTo(System::SharedPtr<Bookmark> const &value);
    
protected:

    static System::SharedPtr<Bookmark> Create(System::SharedPtr<OutlineItemCollection> item);
    System::SharedPtr<OutlineItemCollection> ToOutlineItemCollection(System::SharedPtr<Document> doc);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Bookmark"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::String action;
    bool bold;
    System::SharedPtr<Bookmarks> childItems;
    bool italic;
    System::String destination;
    int32_t level;
    System::String pageDisplayMode;
    int32_t pageNumber;
    System::String remoteFile;
    System::String title;
    System::Drawing::Color color;
    int32_t left;
    int32_t bottom;
    int32_t right;
    int32_t top;
    int32_t zoom;
    bool open;
    
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::ExplicitDestination> CreateDestination(System::SharedPtr<Page> page);
    System::SharedPtr<Aspose::Pdf::InteractiveFeatures::ExplicitDestination> CreateDestination(int32_t page);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_Bookmark_h_

