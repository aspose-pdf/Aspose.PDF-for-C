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

    bool get_MinimizeTheNumberOfWorksheets();
    void set_MinimizeTheNumberOfWorksheets(bool value);
    bool get_InsertBlankColumnAtFirst();
    void set_InsertBlankColumnAtFirst(bool value);
    bool get_UniformWorksheets();
    void set_UniformWorksheets(bool value);
    
    ExcelSaveOptions();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ExcelSaveOptions"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool _minimizeTheNumberOfWorksheets;
    bool _insertBlankColumnAtFirst;
    bool _uniformWorksheets;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ExcelSaveOptions_h_

