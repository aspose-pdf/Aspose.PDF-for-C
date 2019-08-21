/// @file drawing/drawing_dummy_classes.h
#ifndef __drawing_dummy_classes_h__
#define __drawing_dummy_classes_h__

#include "system/event.h"
#include "system/eventhandler.h"
#include "drawing/graphics.h"
#include "drawing/rectangle.h"
#include "drawing/printing/print_event_args.h"
#include "drawing/printing/printer_resolution.h"
#include "drawing/printing/print_range.h"


#include "fwd.h"

namespace System {

    namespace Drawing {

        namespace Printing {
            /// Represents margins of a printed page.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS Margins : public Object
            {
            };

            /// Represents settings of a printer.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS PrinterSettings : public Object
            {
            public:
                /// An alias for a shared pointer to an instance of this class.
                typedef SharedPtr<PrinterSettings> ptr;
                /// NOT IMPLEMENTED.
                void set_PrinterName(const String & value) {}
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                PrintRange get_PrintRange() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                int get_FromPage() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                int get_ToPage() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            /// Represents settings of a printed page.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS PageSettings : public Object
            {
            public:
                /// An alias for a shared pointer to an instance of this class.
                typedef SharedPtr<PageSettings> ptr;
                /// Constructs a new instance of PageSettings class.
                PageSettings() {}
                /// Constructs a new instance of PageSettings class.
                PageSettings(const SharedPtr<PrinterSettings>&) {}
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                Rectangle get_Bounds() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                float get_HardMarginX() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                float get_HardMarginY() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                SharedPtr<PrinterResolution> get_PrinterResolution() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            /// Provides data for PrintPage event.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS PrintPageEventArgs : public EventArgs
            {
            public:
                /// An alias for a shared pointer to an instance of this class.
                typedef SharedPtr<PrintPageEventArgs> ptr;
                /// Constructs a new instance of PrintPageEventArgs class.
                PrintPageEventArgs(const SharedPtr<Graphics>&
                    , const SharedPtr<Rectangle>&
                    , const SharedPtr<Rectangle>&
                    , const SharedPtr<PageSettings>&) {}

                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                SharedPtr<PageSettings> get_PageSettings() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                SharedPtr<Graphics> get_Graphics() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                bool get_HasMorePages() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                void set_HasMorePages(bool value) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            /// A type of a function that handles PrintPage event.
            using PrintPageEventHandler = System::EventHandler<System::SharedPtr<PrintPageEventArgs>>;

            /// Provides data for the QueryPageSettings event.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS QueryPageSettingsEventArgs : PrintEventArgs
            {
            public:
                /// An alias for a shared pointer to an instance of this class.
                typedef SharedPtr<QueryPageSettingsEventArgs> ptr;
            };

            /// Controls how a document is printed, when printing from a Windows Forms application.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS PrintController : public Object
            {
            };

            /// Specifies a print controller that sends information to a printer.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS StandardPrintController : public PrintController
            {
            };

            /// Sends output to a printer, when printing from a Windows Forms application.
            /// Objects of this class should only be allocated using System::MakeObject() function.
            /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
            /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
            class ASPOSECPP_SHARED_CLASS PrintDocument : public Object
            {
            public:
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                void set_DocumentName(const String & name) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                void set_PrinterSettings(const SharedPtr<PrinterSettings>& printerSettings) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                SharedPtr<PrinterSettings> get_PrinterSettings() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                void set_PrintController(const SharedPtr<PrintController>& printController) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                void Print() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

                /// An event that gets fired when the output to print for the current page is needed.
                System::Event<void(SharedPtr<Object>, SharedPtr<PrintPageEventArgs>)> PrintPage;
            protected:
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                virtual void OnPrintPage(SharedPtr<PrintPageEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                virtual void OnBeginPrint(SharedPtr<PrintEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                /// NOT IMPLEMENTED.
                /// @throws NotImplementedException Always
                virtual void OnEndPrint(SharedPtr<PrintEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            };
        }
    }

}

#endif
