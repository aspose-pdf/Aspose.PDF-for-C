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

            class Margins : public Object
            {
            };

            class PrinterSettings : public Object
            {
            public:
                typedef SharedPtr<PrinterSettings> ptr;
                void set_PrinterName(const String & value) {}
                PrintRange get_PrintRange() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                int get_FromPage() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                int get_ToPage() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            class PageSettings : public Object
            {
            public:
                typedef SharedPtr<PageSettings> ptr;
                PageSettings() {}
                PageSettings(SharedPtr<PrinterSettings>) {}

                Rectangle get_Bounds() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                float get_HardMarginX() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                float get_HardMarginY() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                SharedPtr<PrinterResolution> get_PrinterResolution() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            class PrintPageEventArgs : public EventArgs
            {
            public:
                typedef SharedPtr<PrintPageEventArgs> ptr;
                PrintPageEventArgs(SharedPtr<Graphics>
                    , SharedPtr<Rectangle>
                    , SharedPtr<Rectangle>
                    , SharedPtr<PageSettings>) {}

                SharedPtr<PageSettings> get_PageSettings() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                SharedPtr<Graphics> get_Graphics() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                bool get_HasMorePages() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                void set_HasMorePages(bool value) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
            };

            using PrintPageEventHandler = System::EventHandler<System::SharedPtr<PrintPageEventArgs>>;


            class QueryPageSettingsEventArgs : PrintEventArgs
            {
            public:
                typedef SharedPtr<QueryPageSettingsEventArgs> ptr;
            };

            class PrintController : public Object
            {
            };

            class StandardPrintController : public PrintController
            {
            };

            class PrintDocument : public Object
            {
            public:
                void set_DocumentName(const String & name) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                void set_PrinterSettings(SharedPtr<PrinterSettings> printerSettings) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                SharedPtr<PrinterSettings> get_PrinterSettings() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                void set_PrintController(SharedPtr<PrintController> printController) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                void Print() { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

                System::Event<void(SharedPtr<Object>, SharedPtr<PrintPageEventArgs>)> PrintPage;
            protected:
                virtual void OnPrintPage(SharedPtr<PrintPageEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                virtual void OnBeginPrint(SharedPtr<PrintEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }
                virtual void OnEndPrint(SharedPtr<PrintEventArgs> e) { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); }

            };
        }
    }

}

#endif