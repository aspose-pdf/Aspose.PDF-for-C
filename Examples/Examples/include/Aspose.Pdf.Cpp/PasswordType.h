#pragma once

namespace Aspose {

namespace Pdf {

/// <summary>
/// This enum represents  known password types used for password protected pdf documents.
/// </summary>
enum class PasswordType
{
    /// <summary>
    /// Pdf document is not password protected.
    /// </summary>
    None,
    /// <summary>
    /// Pdf document was opened using document open password (restricted access).
    /// </summary>
    User,
    /// <summary>
    /// Pdf document was opened using change permissions password (full access).
    /// </summary>
    Owner,
    /// <summary>
    /// Pdf document is password protected but both user and owner passwords are not empty and 
    /// none of the passwords was defined or supplied password was incorrect. So it impossible to deduce the type of the password.
    /// </summary>
    Inaccessible
};

} // namespace Pdf
} // namespace Aspose


