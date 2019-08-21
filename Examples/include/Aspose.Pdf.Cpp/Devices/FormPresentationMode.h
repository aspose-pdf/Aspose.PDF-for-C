#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Devices {

/// <summary>
/// Used to specify the form presentation mode when printing or converting to image pdf documents.
/// </summary>
enum class FormPresentationMode
{
    /// <summary>
    /// Specifies Production form presentation mode (used by default).
    /// </summary>
    Production,
    /// <summary>
    /// Specifies Editor form presentation mode.
    /// </summary>
    /// <remarks>
    /// The Editor mode is used by some products to display forms.
    /// In Editor mode some form elements are displayed as they are shown in form designer.
    /// </remarks>
    Editor
};

} // namespace Devices
} // namespace Pdf
} // namespace Aspose


