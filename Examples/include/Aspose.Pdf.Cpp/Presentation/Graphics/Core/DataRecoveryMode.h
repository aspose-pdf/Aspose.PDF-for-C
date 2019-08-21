#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// The data recovery mode.
/// </summary>
enum class DataRecoveryMode
{
    /// <summary>
    /// No data recovery is implied. Whenever the file format has some corrupted data the appropriate exception is thrown.
    /// </summary>
    None,
    /// <summary>
    /// The consistent recovery mode tries to recover all data as long as corruption does not break the file format and allows correct further processing.
    /// </summary>
    ConsistentRecover,
    /// <summary>
    /// The maximal recovery mode recovers all data even if the file format has corrupted structure and further processing may yield unattended effects.
    /// </summary>
    MaximalRecover
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


