#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// The access permissions granted for this document.
/// Valid values are:
/// 1 - No changes to the document are permitted; any change to the document invalidates the signature.
/// 2 - Permitted changes are filling in forms, instantiating page templates, and signing; other changes invalidate the signature.
/// 3 - Permitted changes are the same as for 2, as well as annotation creation, deletion, and modification; other changes invalidate the signature.
/// </summary>
enum class DocMDPAccessPermissions
{
    /// <summary>
    /// 1 - No changes to the document are permitted; any change to the document invalidates the signature.
    /// </summary>
    NoChanges = 1,
    /// <summary>
    /// 2 - Permitted changes are filling in forms, instantiating page templates, and signing; other changes invalidate the signature.
    /// </summary>
    FillingInForms,
    /// <summary>
    /// 3 - Permitted changes are the same as for 2, as well as annotation creation, deletion, and modification; other changes invalidate the signature.
    /// </summary>
    AnnotationModification
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


