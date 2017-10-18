#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPAccessPermissions_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPAccessPermissions_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

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
    NoChanges = 1,
    FillingInForms,
    AnnotationModification
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_DocMDPAccessPermissions_h_

