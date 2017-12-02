#ifndef _Aspose_Pdf_ExcelSaveOptions_h_
#define _Aspose_Pdf_ExcelSaveOptions_h_

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Excel format
/// </summary>
class ASPOSE_PDF_SHARED_API ExcelSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef ExcelSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Set true if you need to minimize the number of worksheets in resultant workbook.
    /// Default value is false; it means save of each PDF page as separated worksheet.
    /// </summary>
    bool get_MinimizeTheNumberOfWorksheets();
    /// <summary>
    /// Set true if you need to minimize the number of worksheets in resultant workbook.
    /// Default value is false; it means save of each PDF page as separated worksheet.
    /// </summary>
    void set_MinimizeTheNumberOfWorksheets(bool value);
    /// <summary>
    /// Set false if you need suppress inserting of blank column as the first column of worksheet.
    /// Default value is true; it means that blank column will be inserted.
    /// </summary>
    bool get_InsertBlankColumnAtFirst();
    /// <summary>
    /// Set false if you need suppress inserting of blank column as the first column of worksheet.
    /// Default value is true; it means that blank column will be inserted.
    /// </summary>
    void set_InsertBlankColumnAtFirst(bool value);
    /// <summary>
    /// Set true for using uniform columns division through the document. 
    /// Default value is false; it means that columns division will independent for each page.
    /// </summary>
    bool get_UniformWorksheets();
    /// <summary>
    /// Set true for using uniform columns division through the document. 
    /// Default value is false; it means that columns division will independent for each page.
    /// </summary>
    void set_UniformWorksheets(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ExcelSaveOptions();
    
private:

    bool _minimizeTheNumberOfWorksheets;
    bool _insertBlankColumnAtFirst;
    bool _uniformWorksheets;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ExcelSaveOptions_h_

