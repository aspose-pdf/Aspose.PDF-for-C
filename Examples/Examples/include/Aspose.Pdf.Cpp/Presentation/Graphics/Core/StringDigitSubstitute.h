#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT 


#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The enumeration specifies how to substitute digits in a string according to a user's locale or language.
/// </summary>
enum class StringDigitSubstitute
{
    /// <summary>
    /// Specifies a user-defined substitution scheme.
    /// </summary>
    User,
    /// <summary>
    /// Specifies to disable substitutions.
    /// </summary>
    None,
    /// <summary>
    /// Specifies substitution digits that correspond with the official national language of the user's locale.
    /// </summary>
    National,
    /// <summary>
    /// Specifies substitution digits that correspond with the user's native script or language, which may be different from the official national language of the user's locale.
    /// </summary>
    Traditional
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif 


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::StringDigitSubstitute>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::StringDigitSubstitute, const char_t*>, 4>& values();
};



