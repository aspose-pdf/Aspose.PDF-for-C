#pragma once

#include "SaveOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Allows to specify .xls/xml or .xlsx file format.
/// Default value is XMLSpreadSheet2003; 
/// </summary>
class ASPOSE_PDF_SHARED_API ExcelSaveOptions : public Aspose::Pdf::SaveOptions
{
    typedef ExcelSaveOptions ThisType;
    typedef Aspose::Pdf::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class ExcelFormat
    {
        /// <summary>
        /// Excel 2003 XML Format
        /// </summary>
        XMLSpreadSheet2003,
        /// <summary>
        /// Office Open XML (.xlsx) File Format
        /// </summary>
        XLSX
    };
    
    
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
    /// Gets or sets factor that will be applied to (virtual) scaling font size during conversion to Excel table.
    /// Setting of less value facilitates the search for columns and prevents merging of them for some documents.
    /// Default value is 0.9;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    double get_ScaleFactor();
    /// <summary>
    /// Gets or sets factor that will be applied to (virtual) scaling font size during conversion to Excel table.
    /// Setting of less value facilitates the search for columns and prevents merging of them for some documents.
    /// Default value is 0.9;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    void set_ScaleFactor(double value);
    /// <summary>
    /// Output format
    /// </summary>
    ExcelSaveOptions::ExcelFormat get_Format();
    /// <summary>
    /// Output format
    /// </summary>
    void set_Format(ExcelSaveOptions::ExcelFormat value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ExcelSaveOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _minimizeTheNumberOfWorksheets;
    bool _insertBlankColumnAtFirst;
    bool _uniformWorksheets;
    double _scaleFactor;
    ExcelSaveOptions::ExcelFormat format;
    
};

} // namespace Pdf
} // namespace Aspose


