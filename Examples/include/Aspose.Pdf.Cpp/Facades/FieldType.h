#ifndef _Aspose_Pdf_Facades_FieldType_h_
#define _Aspose_Pdf_Facades_FieldType_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Enumeration of possible field types.
/// </summary>
enum class FieldType
{
    /// <summary>
    /// Text field.
    /// </summary>
    Text,
    /// <summary>
    /// Combo box field.
    /// </summary>
    ComboBox,
    /// <summary>
    /// List box field.
    /// </summary>
    ListBox,
    /// <summary>
    /// Radio button field.
    /// </summary>
    Radio,
    /// <summary>
    /// Check box field.
    /// </summary>
    CheckBox,
    /// <summary>
    /// Push button field.
    /// </summary>
    PushButton,
    /// <summary>
    /// Multiline text field.
    /// </summary>
    MultiLineText,
    /// <summary>
    /// Barcode field.
    /// </summary>
    Barcode,
    /// <summary>
    /// Invalid field type.
    /// </summary>
    InvalidNameOrType,
    /// <summary>
    /// Signature field.
    /// </summary>
    Signature,
    /// <summary>
    /// Image field.
    /// </summary>
    Image
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Facades::FieldType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Facades::FieldType, const char_t*>, 11>& values();
};


#endif // _Aspose_Pdf_Facades_FieldType_h_

