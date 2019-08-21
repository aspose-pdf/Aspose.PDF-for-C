#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <cstdint>

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum represents user's permissions for a pdf.
/// </summary>
enum class Permissions
{
    /// <summary>
    /// (Security handlers of revision 2) Print the document.
    /// (Security handlers of revision 3 or greater) Print the document 
    /// (possibly not at the highest quality level, 
    /// depending on whether <see cref="PrintingQuality"/> is also set).
    /// </summary>
    PrintDocument = static_cast<int32_t>(static_cast<int32_t>(1 << 2)),
    /// <summary>
    /// Modify the contents of the document by operations other 
    /// than those controlled by  <see cref="ModifyTextAnnotations"/>, 
    /// <see cref="FillForm"/>, and 11.
    /// </summary>
    ModifyContent = static_cast<int32_t>(static_cast<int32_t>(1 << 3)),
    /// <summary>
    /// (Security handlers of revision 2) Copy or otherwise extract 
    /// text and graphics from the document, including extracting 
    /// text and graphics (in support of accessibility to users 
    /// with disabilities or for other purposes).
    /// (Security handlers of revision 3 or greater) Copy or otherwise 
    /// extract text and graphics from the document by operations 
    /// other than that controlled by <see cref="ExtractContentWithDisabilities"/>.
    /// </summary>
    ExtractContent = static_cast<int32_t>(static_cast<int32_t>(1 << 4)),
    /// <summary>
    /// Add or modify text annotations, fill in interactive form fields, 
    /// and, if <see cref="ModifyContent"/> is also set, create or modify interactive form 
    /// fields (including signature fields).
    /// </summary>
    ModifyTextAnnotations = static_cast<int32_t>(static_cast<int32_t>(1 << 5)),
    /// <summary>
    /// (Security handlers of revision 3 or greater) Fill in existing 
    /// interactive form fields (including signature fields), even if 
    /// <see cref="ModifyTextAnnotations"/> is clear.
    /// </summary>
    FillForm = static_cast<int32_t>(static_cast<int32_t>(1 << 8)),
    /// <summary>
    /// (Security handlers of revision 3 or greater) Extract text and 
    /// graphics (in support of accessibility to users with disabilities 
    /// or for other purposes).
    /// </summary>
    ExtractContentWithDisabilities = static_cast<int32_t>(static_cast<int32_t>(1 << 9)),
    /// <summary>
    /// (Security handlers of revision 3 or greater) Assemble the document 
    /// (insert, rotate, or delete pages and create bookmarks or thumbnail 
    /// images), even if <see cref="ModifyContent"/> is clear.
    /// </summary>
    AssembleDocument = static_cast<int32_t>(static_cast<int32_t>(1 << 10)),
    /// <summary>
    /// (Security handlers of revision 3 or greater) Print the document to 
    /// a representation from which a faithful digital copy of the PDF content 
    /// could be generated. When this bit is clear (and bit 3 is set), 
    /// printing is limited to a low-level representation of the appearance, 
    /// possibly of degraded quality.
    /// </summary>
    PrintingQuality = static_cast<int32_t>(static_cast<int32_t>(1 << 11))
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Permissions);
DECLARE_USING_GLOBAL_OPERATORS

} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf);



