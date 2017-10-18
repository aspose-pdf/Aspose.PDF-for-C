#ifndef _Aspose_Pdf_Facades_FieldType_h_
#define _Aspose_Pdf_Facades_FieldType_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
    Text,
    ComboBox,
    ListBox,
    Radio,
    CheckBox,
    PushButton,
    MultiLineText,
    Barcode,
    InvalidNameOrType,
    Signature,
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

