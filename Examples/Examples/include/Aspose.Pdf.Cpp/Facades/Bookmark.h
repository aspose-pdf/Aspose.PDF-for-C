#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsToPdfConverter; } }
namespace Aspose { namespace Pdf { namespace Facades { class Bookmarks; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfBookmarkEditor; } } }
namespace Aspose { namespace Pdf { class OutlineItemCollection; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class ExplicitDestination; } } }
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
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Facades::Bookmarks;
    friend class Aspose::Pdf::Facades::PdfBookmarkEditor;
    
public:

    /// <summary>
    /// Gets or sets the action bound with the bookmark.
    /// If PageNumber is presented the action can not be specified.
    /// The action type includes: "GoTo", "GoToR", "Launch", "Named".
    /// </summary>
    System::String get_Action();
    /// <summary>
    /// Gets or sets the action bound with the bookmark.
    /// If PageNumber is presented the action can not be specified.
    /// The action type includes: "GoTo", "GoToR", "Launch", "Named".
    /// </summary>
    void set_Action(System::String value);
    /// <summary>
    /// Gets or sets the bold flag of bookmark's title.
    /// </summary>
    bool get_BoldFlag();
    /// <summary>
    /// Gets or sets the bold flag of bookmark's title.
    /// </summary>
    void set_BoldFlag(bool value);
    /// <summary>
    /// Gets or sets bookmark's children.
    /// </summary>
    System::SharedPtr<Bookmarks> get_ChildItem();
    /// <summary>
    /// Gets or sets bookmark's children.
    /// </summary>
    void set_ChildItem(System::SharedPtr<Bookmarks> value);
    /// <summary>
    /// Gets or sets bookmark's children.
    /// </summary>
    System::SharedPtr<Bookmarks> get_ChildItems();
    /// <summary>
    /// Gets or sets bookmark's children.
    /// </summary>
    void set_ChildItems(System::SharedPtr<Bookmarks> value);
    /// <summary>
    /// Gets or sets bookmark's destination page. Required if action is set as string.Empty.
    /// </summary>
    System::String get_Destination();
    /// <summary>
    /// Gets or sets bookmark's destination page. Required if action is set as string.Empty.
    /// </summary>
    void set_Destination(System::String value);
    /// <summary>
    /// Gets or sets the italic flag of bookmark's title.
    /// </summary>
    bool get_ItalicFlag();
    /// <summary>
    /// Gets or sets the italic flag of bookmark's title.
    /// </summary>
    void set_ItalicFlag(bool value);
    /// <summary>
    /// Gets or sets bookmark's hierarchy level.
    /// </summary>
    int32_t get_Level();
    /// <summary>
    /// Gets or sets bookmark's hierarchy level.
    /// </summary>
    void set_Level(int32_t value);
    /// <summary>
    /// Gets or sets the type of display bookmark's destination page.
    /// </summary>
    System::String get_PageDisplay();
    /// <summary>
    /// Gets or sets the type of display bookmark's destination page.
    /// </summary>
    void set_PageDisplay(System::String value);
    /// <summary>
    /// Gets or sets the bottom coordinate of page display.
    /// </summary>
    int32_t get_PageDisplay_Bottom();
    /// <summary>
    /// Gets or sets the bottom coordinate of page display.
    /// </summary>
    void set_PageDisplay_Bottom(int32_t value);
    /// <summary>
    /// Gets or sets the left coordinate of page display.
    /// </summary>
    int32_t get_PageDisplay_Left();
    /// <summary>
    /// Gets or sets the left coordinate of page display.
    /// </summary>
    void set_PageDisplay_Left(int32_t value);
    /// <summary>
    /// Gets or sets the right coordinate of page display.
    /// </summary>
    int32_t get_PageDisplay_Right();
    /// <summary>
    /// Gets or sets the right coordinate of page display.
    /// </summary>
    void set_PageDisplay_Right(int32_t value);
    /// <summary>
    /// Gets or sets the top coordinate of page display.
    /// </summary>
    int32_t get_PageDisplay_Top();
    /// <summary>
    /// Gets or sets the top coordinate of page display.
    /// </summary>
    void set_PageDisplay_Top(int32_t value);
    /// <summary>
    /// Gets or sets the zoom factor of page display.
    /// </summary>
    int32_t get_PageDisplay_Zoom();
    /// <summary>
    /// Gets or sets the zoom factor of page display.
    /// </summary>
    void set_PageDisplay_Zoom(int32_t value);
    /// <summary>
    /// Gets or sets the number of bookmark's destination page. 
    /// </summary>
    int32_t get_PageNumber();
    /// <summary>
    /// Gets or sets the number of bookmark's destination page. 
    /// </summary>
    void set_PageNumber(int32_t value);
    /// <summary>
    /// Gets or sets the file (path) which is required for "GoToR" action of bookmark.
    /// </summary>
    System::String get_RemoteFile();
    /// <summary>
    /// Gets or sets the file (path) which is required for "GoToR" action of bookmark.
    /// </summary>
    void set_RemoteFile(System::String value);
    /// <summary>
    /// Gets or sets bookmark's title.
    /// </summary>
    System::String get_Title();
    /// <summary>
    /// Gets or sets bookmark's title.
    /// </summary>
    void set_Title(System::String value);
    /// <summary>
    /// Gets or sets the color of bookmark's title.
    /// </summary>
    System::Drawing::Color get_TitleColor();
    /// <summary>
    /// Gets or sets the color of bookmark's title.
    /// </summary>
    void set_TitleColor(System::Drawing::Color value);
    /// <summary>
    /// Gets or sets bookmark state (open, close).
    /// </summary>
    bool get_Open();
    /// <summary>
    /// Gets or sets bookmark state (open, close).
    /// </summary>
    void set_Open(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Bookmark"/> class.
    /// </summary>
    Bookmark();
    
    int32_t CompareTo(System::SharedPtr<Bookmark> const &value);
    
protected:

    static System::SharedPtr<Bookmark> Create(System::SharedPtr<OutlineItemCollection> item);
    System::SharedPtr<OutlineItemCollection> ToOutlineItemCollection(System::SharedPtr<Document> doc);
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    
    System::SharedPtr<Aspose::Pdf::Annotations::ExplicitDestination> CreateDestination(System::SharedPtr<Page> page);
    System::SharedPtr<Aspose::Pdf::Annotations::ExplicitDestination> CreateDestination(int32_t page);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


