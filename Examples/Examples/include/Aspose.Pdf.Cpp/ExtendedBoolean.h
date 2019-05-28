#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents boolean type that supports Undefined value.
/// </summary>
enum class ExtendedBoolean
{
    /// <summary>
    /// Undefined value value of ExtendnedBoolean.
    /// </summary>
    Undefined,
    /// <summary>
    /// False value of ExtendnedBoolean.
    /// </summary>
    False,
    /// <summary>
    /// True value of ExtendnedBoolean.
    /// </summary>
    True
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::ExtendedBoolean>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::ExtendedBoolean, const char_t*>, 3>& values();
};



