#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ilist.h>
#include <system/array.h>

#include "UnifiedSaveOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to TeX format
/// </summary>
class ASPOSE_PDF_SHARED_API LaTeXSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef LaTeXSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Property for <see cref="_outDirectoryPath"/> parameter.
    /// </summary>
    System::String get_OutDirectoryPath();
    /// <summary>
    /// Property for <see cref="_outDirectoryPath"/> parameter.
    /// </summary>
    void set_OutDirectoryPath(System::String value);
    int32_t get_PagesCount();
    void set_PagesCount(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="LaTeXSaveOptions"/> class. 
    /// </summary>
    LaTeXSaveOptions();
    
    /// <summary>
    /// Adds a font ancoding to the font encoding list
    /// </summary>
    /// <param name="fontEncs">The font encs.</param>
    void AddFontEncs(const System::ArrayPtr<System::String>& fontEncs);
    /// <summary>
    /// Clears the font encoding list
    /// </summary>
    void ClearFontEncs();
    
protected:

    System::String ApsFileForNormalizedAPS;
    System::String XpsFileForNormalizedXPS;
    System::String PngFileForNormalizedAPS;
    int32_t _pagesCount;
    
    /// <summary>
    /// Gets font encodings list
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> GetFontEncs();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _outDirectoryPath;
    System::SharedPtr<System::Collections::Generic::IList<System::String>> _fontEncList;
    
};

} // namespace Pdf
} // namespace Aspose


