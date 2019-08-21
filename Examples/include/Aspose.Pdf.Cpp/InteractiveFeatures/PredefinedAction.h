#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Defines different actions which can be triggered from a PDF file.
/// </summary>
enum class PredefinedAction
{
    /// <summary>
    /// A named action to go to the first page.
    /// </summary>
    FirstPage,
    /// <summary>
    /// A named action to go to the last page.
    /// </summary>
    LastPage,
    /// <summary>
    /// A named action to go to the next page.
    /// </summary>
    NextPage,
    /// <summary>
    /// A named action to go to the previous page.
    /// </summary>
    PrevPage,
    /// <summary>
    /// A named action to open a print dialog (JavaScript).
    /// </summary>
    PrintDialog,
    /// <summary>
    /// A named action to open a print dialog.
    /// </summary>
    Print,
    /// <summary>
    /// A named action to find current bookmark.
    /// </summary>
    Bookmarks_ExpanCurrentBookmark,
    /// <summary>
    /// A named action to highlight current bookmark.
    /// </summary>
    Bookmarks_HightlightCurrentBookmark,
    /// <summary>
    /// A named action to add file attachment.
    /// </summary>
    Document_AttachFile,
    /// <summary>
    /// A named action to crop document pages.
    /// </summary>
    Document_CropPages,
    /// <summary>
    /// A named action to delete document pages.
    /// </summary>
    Document_DeletePages,
    /// <summary>
    /// A named action to exctract document pages.
    /// </summary>
    Document_ExtractPages,
    /// <summary>
    /// A named action to insert pages from a document.
    /// </summary>
    Document_InsertPages,
    /// <summary>
    /// A named action to replace document pages.
    /// </summary>
    Document_ReplacePages,
    /// <summary>
    /// A named action to rotate document pages.
    /// </summary>
    Document_RotatePages,
    /// <summary>
    /// A named action to check spelling in comments.
    /// </summary>
    Edit_CheckSpelling_InComFieldEdit,
    /// <summary>
    /// A named action to find.
    /// </summary>
    Edit_Find,
    /// <summary>
    /// A named action to edit preferences.
    /// </summary>
    Edit_Preferences,
    /// <summary>
    /// A named action for searching.
    /// </summary>
    Edit_Search,
    /// <summary>
    /// A named action for attaching current pdf document into email message.
    /// </summary>
    File_AttachToEmail,
    /// <summary>
    /// A named action to close the document.
    /// </summary>
    File_Close,
    /// <summary>
    /// A named action to create pdf document from scanner.
    /// </summary>
    File_CreatePDF_FromScanner,
    /// <summary>
    /// A named action to create pdf document from web page.
    /// </summary>
    File_CreatePDF_FromWebPage,
    /// <summary>
    /// A named action to exit pdf reader.
    /// </summary>
    File_Exit,
    /// <summary>
    /// A named action to open organizer.
    /// </summary>
    File_Organizer_OpenOrganizer,
    /// <summary>
    /// A named action to print the document.
    /// </summary>
    File_Print,
    /// <summary>
    /// A named action to open the document properties.
    /// </summary>
    File_Properties,
    /// <summary>
    /// A named action to save the document with another name.
    /// </summary>
    File_SaveAs,
    /// <summary>
    /// A named action to zoom in the document.
    /// </summary>
    Miscellaneous_ZoomIn,
    /// <summary>
    /// A named action to zoom out the document.
    /// </summary>
    Miscellaneous_ZoomOut,
    /// <summary>
    /// A named action to print the document pages.
    /// </summary>
    PageImages_PrintPages,
    /// <summary>
    /// A named action to go to the next view.
    /// </summary>
    View_GoTo_NextView,
    /// <summary>
    /// A named action to go to the certain page.
    /// </summary>
    View_GoTo_Page,
    /// <summary>
    /// A named action to go to the previous document.
    /// </summary>
    View_GoTo_PreDocument,
    /// <summary>
    /// A named action to go to the previous view.
    /// </summary>
    View_GoTo_PreView,
    /// <summary>
    /// A named action to show/hide articles panel.
    /// </summary>
    View_NavigationPanels_Articles,
    /// <summary>
    /// A named action to show/hide attachment panel.
    /// </summary>
    View_NavigationPanels_Attachments,
    /// <summary>
    /// A named action to show/hide bookmark panel.
    /// </summary>
    View_NavigationPanels_Boomarks,
    /// <summary>
    /// A named action to show/hide comments panel.
    /// </summary>
    View_NavigationPanels_Comments,
    /// <summary>
    /// A named action to show/hide fields panel.
    /// </summary>
    View_NavigationPanels_Fields,
    /// <summary>
    /// A named action to show/hide layers panel.
    /// </summary>
    View_NavigationPanels_Layers,
    /// <summary>
    /// A named action to show/hide model tree panel.
    /// </summary>
    View_NavigationPanels_ModelTree,
    /// <summary>
    /// A named action to show/hide pages panel.
    /// </summary>
    View_NavigationPanels_Pages,
    /// <summary>
    /// A named action to show/hide signatures panel.
    /// </summary>
    View_NavigationPanels_Signatures,
    /// <summary>
    /// A named action to display single page.
    /// </summary>
    View_PageDisplay_SinglePage,
    /// <summary>
    /// A named action to display single continious page.
    /// </summary>
    View_PageDisplay_SinglePageContinuous,
    /// <summary>
    /// A named action to display pages as Two-Up.
    /// </summary>
    View_PageDisplay_TwoUp,
    /// <summary>
    /// A named action to display pages as Two-Up continious.
    /// </summary>
    View_PageDisplay_TwoUpContinuous,
    /// <summary>
    /// A named action to show/hide advanced editing toolbar.
    /// </summary>
    View_Toolbars_AdvanceEditing,
    /// <summary>
    /// A named action to show/hide commenting toolbar.
    /// </summary>
    View_Toolbars_CommentMarkup,
    /// <summary>
    /// A named action to show/hide edit toolbar.
    /// </summary>
    View_Toolbars_Edit,
    /// <summary>
    /// A named action to show/hide file toolbar.
    /// </summary>
    View_Toolbars_File,
    /// <summary>
    /// A named action to show/hide find toolbar.
    /// </summary>
    View_Toolbars_Find,
    /// <summary>
    /// A named action to show/hide forms toolbar.
    /// </summary>
    View_Toolbars_Forms,
    /// <summary>
    /// A named action to show/hide measuring toolbar.
    /// </summary>
    View_Toolbars_Measuring,
    /// <summary>
    /// A named action to show/hide object data toolbar.
    /// </summary>
    View_Toolbars_ObjectData,
    /// <summary>
    /// A named action to show/hide page display toolbar.
    /// </summary>
    View_Toolbars_PageDisplay,
    /// <summary>
    /// A named action to show/hide navigation toolbar.
    /// </summary>
    View_Toolbars_PageNavigation,
    /// <summary>
    /// A named action to show/hide print production toolbar.
    /// </summary>
    View_Toolbars_PrintProduction,
    /// <summary>
    /// A named action to show/hide property toolbar.
    /// </summary>
    View_Toolbars_PropertiesBar,
    /// <summary>
    /// A named action to show/hide redaction toolbar.
    /// </summary>
    View_Toolbars_Redaction,
    /// <summary>
    /// A named action to show/hide select &amp; zoom toolbar.
    /// </summary>
    View_Toolbars_SelectZoom,
    /// <summary>
    /// A named action to show/hide tasks toolbar.
    /// </summary>
    View_Toolbars_Tasks,
    /// <summary>
    /// A named action to show/hide typewriter toolbar.
    /// </summary>
    View_Toolbars_Typewriter,
    /// <summary>
    /// A named action to view pages in actual size.
    /// </summary>
    View_Zoom_ActualSize,
    /// <summary>
    /// A named action to fit page on height.
    /// </summary>
    View_Zoom_FitHeight,
    /// <summary>
    /// A named action to fit page.
    /// </summary>
    View_Zoom_FitPage,
    /// <summary>
    /// A named action to fit page visibility.
    /// </summary>
    View_Zoom_FitVisible,
    /// <summary>
    /// A named action to fit page on width.
    /// </summary>
    View_Zoom_FitWidth,
    /// <summary>
    /// A named action to make zoom.
    /// </summary>
    View_Zoom_ZoomTo,
    /// <summary>
    /// A named action to view the document in the full screen mode.
    /// </summary>
    Window_FullScreenMode
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_API PredefinedActionConverter : public System::Object
{
    typedef PredefinedActionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(PredefinedAction value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


