#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Text { class TextExtractionVerifier; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextAbsorber; } } }
namespace Aspose { namespace Pdf { class Point; } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents the location in the PDF document where text extraction error has appeared.
/// </summary>
class ASPOSE_PDF_SHARED_API TextExtractionErrorLocation FINAL : public System::Object
{
    typedef TextExtractionErrorLocation ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Text::TextExtractionVerifier;
    friend class Aspose::Pdf::Text::TextAbsorber;
    
public:

    /// <summary>
    /// Location of the PDF document where text extraction error has appeared.
    /// </summary>
    System::String get_Path();
    /// <summary>
    /// Number of the document page where text extraction error has located.
    /// </summary>
    int32_t get_PageNumber();
    /// <summary>
    /// Type of the PDF object (Page or xForm) in which contents stream text extraction error has located.
    /// </summary>
    System::String get_ObjectType();
    /// <summary>
    /// Key (name) of the PDF Form XObject in which contents stream text extraction error has located. Not empty if ObjectType == 'xForm'.
    /// </summary>
    System::String get_FormKey();
    /// <summary>
    /// Index of text showing operator in the contents stream (operator collection) that causes text extraction error.
    /// </summary>
    int32_t get_OperatorIndex();
    /// <summary>
    /// Text showing operator that causes text extraction error.
    /// </summary>
    System::String get_OperatorString();
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    System::String get_FontUsedKey();
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    System::SharedPtr<Point> get_TextStartPoint();
    
    virtual System::String ToString();
    
protected:

    /// <summary>
    /// Text showing operator that causes text extraction error.
    /// </summary>
    void set_OperatorString(System::String value);
    /// <summary>
    /// Key (name) of the PDF Font object that is used for showing of the operator that causes text extraction error.
    /// </summary>
    void set_TextStartPoint(System::SharedPtr<Point> value);
    
    TextExtractionErrorLocation(System::String path, int32_t pageNum, System::String objectType, System::String formKey, int32_t operatorIndex, System::String operatorString, System::String fontUsedKey);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _documentPath;
    int32_t _pageNum;
    System::String _objectType;
    System::String _formKey;
    int32_t _operatorIndex;
    System::String _operatorString;
    System::String _fontUsedKey;
    System::SharedPtr<Point> _textStartPoint;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


