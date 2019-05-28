#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <drawing/drawing_dummy_classes.h>

namespace Aspose { namespace Pdf { namespace Facades { class PdfPrintPageInfo; } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

using PdfQueryPageSettingsEventHandler = System::MulticastDelegate<void(System::SharedPtr<System::Object>, System::SharedPtr<System::Drawing::Printing::QueryPageSettingsEventArgs>, System::SharedPtr<PdfPrintPageInfo>)>;

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


