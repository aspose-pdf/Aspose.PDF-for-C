#ifndef _Aspose_Pdf_InteractiveFeatures_PredefinedAction_h_
#define _Aspose_Pdf_InteractiveFeatures_PredefinedAction_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

/// <summary>
/// Defines different actions which can be triggered from a PDF file.
/// </summary>
enum class PredefinedAction
{
    FirstPage,
    LastPage,
    NextPage,
    PrevPage,
    PrintDialog,
    Bookmarks_ExpanCurrentBookmark,
    Bookmarks_HightlightCurrentBookmark,
    Document_AttachFile,
    Document_CropPages,
    Document_DeletePages,
    Document_ExtractPages,
    Document_InsertPages,
    Document_ReplacePages,
    Document_RotatePages,
    Edit_CheckSpelling_InComFieldEdit,
    Edit_Find,
    Edit_Preferences,
    Edit_Search,
    File_AttachToEmail,
    File_Close,
    File_CreatePDF_FromScanner,
    File_CreatePDF_FromWebPage,
    File_Exit,
    File_Organizer_OpenOrganizer,
    File_Print,
    File_Properties,
    File_SaveAs,
    Miscellaneous_ZoomIn,
    Miscellaneous_ZoomOut,
    PageImages_PrintPages,
    View_GoTo_NextView,
    View_GoTo_Page,
    View_GoTo_PreDocument,
    View_GoTo_PreView,
    View_NavigationPanels_Articles,
    View_NavigationPanels_Attachments,
    View_NavigationPanels_Boomarks,
    View_NavigationPanels_Comments,
    View_NavigationPanels_Fields,
    View_NavigationPanels_Layers,
    View_NavigationPanels_ModelTree,
    View_NavigationPanels_Pages,
    View_NavigationPanels_Signatures,
    View_PageDisplay_SinglePage,
    View_PageDisplay_SinglePageContinuous,
    View_PageDisplay_TwoUp,
    View_PageDisplay_TwoUpContinuous,
    View_Toolbars_AdvanceEditing,
    View_Toolbars_CommentMarkup,
    View_Toolbars_Edit,
    View_Toolbars_File,
    View_Toolbars_Find,
    View_Toolbars_Forms,
    View_Toolbars_Measuring,
    View_Toolbars_ObjectData,
    View_Toolbars_PageDisplay,
    View_Toolbars_PageNavigation,
    View_Toolbars_PrintProduction,
    View_Toolbars_PropertiesBar,
    View_Toolbars_Redaction,
    View_Toolbars_SelectZoom,
    View_Toolbars_Tasks,
    View_Toolbars_Typewriter,
    View_Zoom_ActualSize,
    View_Zoom_FitHeight,
    View_Zoom_FitPage,
    View_Zoom_FitVisible,
    View_Zoom_FitWidth,
    View_Zoom_ZoomTo,
    Window_FullScreenMode
};

class ASPOSE_PDF_SHARED_API PredefinedActionConverter : public System::Object
{
    typedef PredefinedActionConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(PredefinedAction value);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PredefinedActionConverter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_PredefinedAction_h_

